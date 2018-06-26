# ycm configuration to pick up include directories from CMake
# requires SET( CMAKE_EXPORT_COMPILE_COMMANDS ON ) in CMakeLists.txt
# mostly from http://bastian.rieck.ru/blog/posts/2015/ycm_cmake/

import os
import ycm_core

from clang_helpers import PrepareClangFlags


def DirectoryOfThisScript():
    return os.path.dirname(os.path.abspath(__file__))


def GetBuildDir(cmtconfig):
    assembly = os.path.join(DirectoryOfThisScript(), '..', '..', 'build.'+cmtconfig)
    return assembly

builddir = None
database = None
try:
    cmtconfig = os.environ['CMTCONFIG']
    if os.path.exists(GetBuildDir(cmtconfig)):
        builddir = GetBuildDir(cmtconfig)
    if os.path.exists(os.path.join(GetBuildDir(cmtconfig),'compile_commands.json')):
        database = ycm_core.CompilationDatabase(os.path.join(GetBuildDir(cmtconfig),'compile_commands.json'))

except KeyError:
    for cmtconfig in ['x86_64-centos7-gcc7-opt','x86_64-centos7-gcc7-dbg','x86_64-centos7-gcc62-opt','x86_64-centos7-gcc62-dbg']:
        if os.path.exists(GetBuildDir(cmtconfig)):
            builddir = GetBuildDir(cmtconfig)
        if os.path.exists(os.path.join(GetBuildDir(cmtconfig),'compile_commands.json')):
            database = ycm_core.CompilationDatabase(os.path.join(GetBuildDir(cmtconfig),'compile_commands.json'))
            break
    cmtconfig = None


# This provides a safe fall-back if no compilation commands are available. You could also add a
# includes relative to your project directory, for example.
flags = [
    '-Wall',
    '-Wextra',
    '-std=c++14',
    '-stdlib=libc++',
    '-x',
    'c++',
    '-I', DirectoryOfThisScript(),
    '-I', '/home/pseyfert/.local/include',
    '-isystem', '/usr/local/include',
    '-isystem', '/usr/include',
]
if database is None:
    if cmtconfig is not None:
        loc_cmtconfig = cmtconfig
    else:
        loc_cmtconfig = 'x86_64-centos7-gcc7-opt'
    flags += [
            '-I', os.path.join('/cvmfs/lhcb.cern.ch/lib/lhcb/GAUDI/GAUDI_v30r2/InstallArea/', loc_cmtconfig, 'include'),
            '-I', os.path.join('/cvmfs/lhcb.cern.ch/lib/lhcb/LHCB/LHCB_v44r3/InstallArea/', loc_cmtconfig, 'include'),
            '-I', os.path.join('/cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/cppgsl/b07383ea/', loc_cmtconfig),
            ]

SOURCE_EXTENSIONS = ['.cpp', '.cxx', '.cc', '.c', '.m', '.mm']


def MakeRelativePathsInFlagsAbsolute(flags, working_directory):
    if not working_directory:
        return list(flags)
    new_flags = []
    make_next_absolute = False
    path_flags = ['-isystem', '-I', '-iquote', '--sysroot=']
    for flag in flags:
        new_flag = flag

        if make_next_absolute:
            make_next_absolute = False
            if not flag.startswith('/'):
                new_flag = os.path.join(working_directory, flag)

        for path_flag in path_flags:
            if flag == path_flag:
                make_next_absolute = True
                break

            if flag.startswith(path_flag):
                path = flag[len(path_flag):]
                new_flag = path_flag + os.path.join(working_directory, path)
                break

        if new_flag:
            new_flags.append(new_flag)
    return new_flags


def IsHeaderFile(filename):
    extension = os.path.splitext(filename)[1]
    return extension in ['.h', '.hxx', '.hpp', '.hh']


def GetCompilationInfoForFile(filename):
    # The compilation_commands.json file generated by CMake does not have entries
    # for header files. So we do our best by asking the db for flags for a
    # corresponding source file, if any. If one exists, the flags for that file
    # should be good enough.
    if IsHeaderFile(filename):
        basename = os.path.splitext(filename)[0]
        for extension in SOURCE_EXTENSIONS:
            replacement_file = basename + extension
            if os.path.exists(replacement_file):
                compilation_info = database.GetCompilationInfoForFile(
                    replacement_file)
                if compilation_info.compiler_flags_:
                    return compilation_info
        return None
    return database.GetCompilationInfoForFile(filename)


def FlagsForFile(filename, **kwargs):
    if database is not None:
        # Bear in mind that compilation_info.compiler_flags_ does NOT return a
        # python list, but a "list-like" StringVec object
        compilation_info = GetCompilationInfoForFile(filename)
        if not compilation_info:
            return None

        final_flags = MakeRelativePathsInFlagsAbsolute(
            compilation_info.compiler_flags_,
            compilation_info.compiler_working_dir_)

    else:
        relative_to = DirectoryOfThisScript()
        final_flags = MakeRelativePathsInFlagsAbsolute(flags, relative_to)

    return {
        'flags': final_flags,
        'do_cache': True
    }
