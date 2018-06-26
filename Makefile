# Copyright (C) 2018  CERN for the benefit of the LHCb collaboration
# Author: Paul Seyfert <pseyfert@cern.ch>
#
# This software is distributed under the terms of the GNU General Public
# Licence version 3 (GPL Version 3), copied verbatim in the file "LICENSE".
#
# In applying this licence, CERN does not waive the privileges and immunities
# granted to it by virtue of its status as an Intergovernmental Organization
# or submit itself to any jurisdiction.

#CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lhcb/MOORE/MOORE_v30r0/InstallArea/x86_64-centos7-gcc7-opt/include
#CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/Python/2.7.13/x86_64-centos7-gcc7-opt/include/python2.7
CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/cppgsl/b07383ea/x86_64-centos7-gcc7-opt
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/vdt/0.3.9/x86_64-centos7-gcc7-opt/include
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/clhep/2.4.0.1/x86_64-centos7-gcc7-opt/include
CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/GSL/2.1/x86_64-centos7-gcc7-opt/include
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/rangev3/0.3.0/x86_64-centos7-gcc7-opt/include
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/AIDA/3.2.1/x86_64-centos7-gcc7-opt/src/cpp
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/tbb/2018_U1/x86_64-centos7-gcc7-opt/include
CPPFLAGS += -isystem /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/ROOT/6.12.06/x86_64-centos7-gcc7-opt/include
CPPFLAGS += -isystem /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/Boost/1.66.0/x86_64-centos7-gcc7-opt/include
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lhcb/HLT/HLT_v30r0/InstallArea/x86_64-centos7-gcc7-opt/include
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lhcb/PHYS/PHYS_v30r0/InstallArea/x86_64-centos7-gcc7-opt/include
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lhcb/REC/REC_v30r0/InstallArea/x86_64-centos7-gcc7-opt/include
# CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lhcb/LBCOM/LBCOM_v30r0/InstallArea/x86_64-centos7-gcc7-opt/include
CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lhcb/LHCB/LHCB_v50r0/InstallArea/x86_64-centos7-gcc7-opt/include
CPPFLAGS += -I /cvmfs/lhcb.cern.ch/lib/lhcb/GAUDI/GAUDI_v30r2/InstallArea/x86_64-centos7-gcc7-opt/include
CPPFLAGS += -I /home/pseyfert/.local/include

LDLIBS += -L/home/pseyfert/.local/lib -lbenchmark
LDLIBS += -lm
LDLIBS += -L/cvmfs/lhcb.cern.ch/lib/lhcb/GAUDI/GAUDI_v30r2/InstallArea/x86_64-centos7-gcc7-opt/lib -lGaudiAlg -lGaudiAlgLib -lGaudiUtilsLib -lGaudiKernel -lGaudiPluginService
LDLIBS += -L/cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/Boost/1.66.0/x86_64-centos7-gcc7-opt/lib -lboost_thread -lboost_regex -lboost_filesystem -lboost_system
LDLIBS += -L/cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/ROOT/6.12.06/x86_64-centos7-gcc7-opt/lib -lCore -lHist -lXMLIO -lMathCore -lRIO -lImt -lThread -lMatrix
LDLIBS += -L/cvmfs/lhcb.cern.ch/lib/lhcb/LHCB/LHCB_v50r0/InstallArea/x86_64-centos7-gcc7-opt/lib -lTrackEvent
LDLIBS += -L/cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/GSL/2.1/x86_64-centos7-gcc7-opt/lib -lgsl

LDFLAGS += -pthread

all: hits

hits: hits.o lhcbids.o

run: hits
	LD_LIBRARY_PATH=/home/pseyfert/local/.lib:/cvmfs/lhcb.cern.ch/lib/lhcb/GAUDI/GAUDI_v30r2/InstallArea/x86_64-centos7-gcc7-opt/lib:/cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/Boost/1.66.0/x86_64-centos7-gcc7-opt/lib:/cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/ROOT/6.12.06/x86_64-centos7-gcc7-opt/lib:/cvmfs/lhcb.cern.ch/lib/lhcb/LHCB/LHCB_v50r0/InstallArea/x86_64-centos7-gcc7-opt/lib:/cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_93/GSL/2.1/x86_64-centos7-gcc7-opt/lib ./hits --benchmark_repetitions=5 --benchmark_report_aggregates_only=true
#--benchmark_min_time=1 
