/*
 * Copyright (C) 2018  CERN for the benefit of the LHCb collaboration
 * Author: Paul Seyfert <pseyfert@cern.ch>
 *
 * This software is distributed under the terms of the GNU General Public
 * Licence version 3 (GPL Version 3), copied verbatim in the file "LICENSE".
/*
 * In applying this licence, CERN does not waive the privileges and immunities
 * granted to it by virtue of its status as an Intergovernmental Organization
 * or submit itself to any jurisdiction.
 */

#include <benchmark/benchmark.h>

#include "Event/Track.h"
#include "Kernel/LHCbID.h"
#include <boost/container/small_vector.hpp>
#include <gsl/span>
#include <vector>

#include "lhcbids.h"

constexpr bool THROUGHSPAN = true;
constexpr bool DIRECT_____ = false;

auto compute_min = []( const std::vector<double>& v ) -> double {
  return *( std::min_element( std::begin( v ), std::end( v ) ) );
};

class Hits
{
private:
  boost::container::small_vector<LHCb::LHCbID, 30> m_hits;

public:
  Hits( gsl::span<const LHCb::LHCbID> c ) : m_hits( c.begin(), c.end() ) {}
  Hits( std::vector<LHCb::LHCbID> c ) : m_hits( c.begin(), c.end() ) {}
};

template <bool through_span>
void foo( typename std::enable_if<!through_span, benchmark::State>::type& state )
{
  for ( auto _ : state ) {
    state.PauseTiming();
    std::vector<LHCb::Track> ts;
    for ( int i = 0; i < state.range( 0 ); i++ ) ts.push_back( makeatrack( i ) );
    state.ResumeTiming();
    for ( const LHCb::Track& t : ts ) {
      Hits retval( t.lhcbIDs() );
      benchmark::DoNotOptimize( retval );
    }
  }
}

template <bool through_span>
void foo( typename std::enable_if<through_span, benchmark::State>::type& state )
{
  for ( auto _ : state ) {
    state.PauseTiming();
    std::vector<LHCb::Track> ts;
    for ( int i = 0; i < state.range( 0 ); i++ ) ts.push_back( makeatrack( i ) );
    state.ResumeTiming();
    for ( const LHCb::Track& t : ts ) {
      gsl::span<const LHCb::LHCbID> thespan( t.lhcbIDs() );
      Hits                          retval( thespan );
      benchmark::DoNotOptimize( retval );
    }
  }
}

BENCHMARK_TEMPLATE( foo, THROUGHSPAN )
    ->DenseRange( 10, 80, 20 )
    ->ComputeStatistics( "min", compute_min )
    ->UseRealTime();
BENCHMARK_TEMPLATE( foo, DIRECT_____ )
    ->DenseRange( 10, 80, 20 )
    ->ComputeStatistics( "min", compute_min )
    ->UseRealTime();

BENCHMARK_MAIN();
