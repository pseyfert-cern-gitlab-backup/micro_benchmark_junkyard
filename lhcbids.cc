/*
 * Copyright (C) 2018  CERN for the benefit of the LHCb collaboration
 * Author: Paul Seyfert <pseyfert@cern.ch>
 *
 * This software is distributed under the terms of the GNU General Public
 * Licence version 3 (GPL Version 3), copied verbatim in the file "LICENSE".
 *
 *
 * In applying this licence, CERN does not waive the privileges and immunities
 * granted to it by virtue of its status as an Intergovernmental Organization
 * or submit itself to any jurisdiction.
 */

#include "Event/Track.h"
#include "Kernel/LHCbID.h"
#include "lhcbids.h"

LHCb::Track makeatrack( size_t i )
{
  LHCb::State s;
  size_t      r = 0;
  i = i % 167;
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 18398205u ), LHCb::LHCbID( 20499948u ), LHCb::LHCbID( 22601690u ), LHCb::LHCbID( 24703177u ),
             LHCb::LHCbID( 26804408u ), LHCb::LHCbID( 28905639u ), LHCb::LHCbID( 31007382u ), LHCb::LHCbID( 33108869u ),
             LHCb::LHCbID( 35210611u ), LHCb::LHCbID( 37312098u ), LHCb::LHCbID( 39413585u ), LHCb::LHCbID( 41519919u ),
             LHCb::LHCbID( 43860218u ), LHCb::LHCbID( 45939893u ), LHCb::LHCbID( 48019056u ), LHCb::LHCbID( 50107214u ),
             LHCb::LHCbID( 52195115u ), LHCb::LHCbID( 54283273u ), LHCb::LHCbID( 314205u ),   LHCb::LHCbID( 380107u ),
             LHCb::LHCbID( 412932u ),   LHCb::LHCbID( 511307u ),   LHCb::LHCbID( 575742u ),   LHCb::LHCbID( 642861u ),
             LHCb::LHCbID( 675689u ),   LHCb::LHCbID( 774066u ),   LHCb::LHCbID( 841429u ),   LHCb::LHCbID( 874155u ),
             LHCb::LHCbID( 972400u ),   LHCb::LHCbID( 1036763u ),  LHCb::LHCbID( 19735950u ), LHCb::LHCbID( 20257183u ),
             LHCb::LHCbID( 20260258u ), LHCb::LHCbID( 21831723u ), LHCb::LHCbID( 22356044u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {
    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 16962810u ), LHCb::LHCbID( 19062502u ), LHCb::LHCbID( 21162194u ), LHCb::LHCbID( 23261630u ),
             LHCb::LHCbID( 25361321u ), LHCb::LHCbID( 27861498u ), LHCb::LHCbID( 29963761u ), LHCb::LHCbID( 32066023u ),
             LHCb::LHCbID( 34168030u ), LHCb::LHCbID( 36270293u ), LHCb::LHCbID( 38372555u ), LHCb::LHCbID( 40479673u ),
             LHCb::LHCbID( 42592158u ), LHCb::LHCbID( 44708730u ), LHCb::LHCbID( 46826071u ), LHCb::LHCbID( 48933189u ),
             LHCb::LHCbID( 51040563u ), LHCb::LHCbID( 53147681u ), LHCb::LHCbID( 279197u ),   LHCb::LHCbID( 345358u ),
             LHCb::LHCbID( 410304u ),   LHCb::LHCbID( 476390u ),   LHCb::LHCbID( 541791u ),   LHCb::LHCbID( 607049u ),
             LHCb::LHCbID( 672896u ),   LHCb::LHCbID( 738077u ),   LHCb::LHCbID( 804366u ),   LHCb::LHCbID( 868757u ),
             LHCb::LHCbID( 935470u ),   LHCb::LHCbID( 999786u ),   LHCb::LHCbID( 19669382u ), LHCb::LHCbID( 20193693u ),
             LHCb::LHCbID( 21766383u ), LHCb::LHCbID( 22290689u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19059964u ), LHCb::LHCbID( 21159148u ), LHCb::LHCbID( 23258588u ), LHCb::LHCbID( 25357771u ),
             LHCb::LHCbID( 27456955u ), LHCb::LHCbID( 29556394u ), LHCb::LHCbID( 32054521u ), LHCb::LHCbID( 34156017u ),
             LHCb::LHCbID( 36257513u ), LHCb::LHCbID( 38358752u ), LHCb::LHCbID( 40464592u ), LHCb::LHCbID( 42574520u ),
             LHCb::LHCbID( 44688536u ), LHCb::LHCbID( 46802040u ), LHCb::LHCbID( 48907879u ), LHCb::LHCbID( 51013718u ),
             LHCb::LHCbID( 53119557u ), LHCb::LHCbID( 265311u ),   LHCb::LHCbID( 330663u ),   LHCb::LHCbID( 396239u ),
             LHCb::LHCbID( 461901u ),   LHCb::LHCbID( 526833u ),   LHCb::LHCbID( 593426u ),   LHCb::LHCbID( 657756u ),
             LHCb::LHCbID( 724674u ),   LHCb::LHCbID( 792505u ),   LHCb::LHCbID( 856133u ),   LHCb::LHCbID( 923426u ),
             LHCb::LHCbID( 987389u ),   LHCb::LHCbID( 19669477u ), LHCb::LHCbID( 20193780u ), LHCb::LHCbID( 20213765u ),
             LHCb::LHCbID( 21766476u ), LHCb::LHCbID( 22290773u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19059964u ), LHCb::LHCbID( 21159148u ), LHCb::LHCbID( 23258588u ), LHCb::LHCbID( 25357771u ),
             LHCb::LHCbID( 27456955u ), LHCb::LHCbID( 29556394u ), LHCb::LHCbID( 32054521u ), LHCb::LHCbID( 34156017u ),
             LHCb::LHCbID( 36257513u ), LHCb::LHCbID( 38358752u ), LHCb::LHCbID( 40464592u ), LHCb::LHCbID( 42574520u ),
             LHCb::LHCbID( 44688536u ), LHCb::LHCbID( 46802040u ), LHCb::LHCbID( 48907879u ), LHCb::LHCbID( 51013718u ),
             LHCb::LHCbID( 53119557u ), LHCb::LHCbID( 267904u ),   LHCb::LHCbID( 332210u ),   LHCb::LHCbID( 398763u ),
             LHCb::LHCbID( 463532u ),   LHCb::LHCbID( 528966u ),   LHCb::LHCbID( 595434u ),   LHCb::LHCbID( 659820u ),
             LHCb::LHCbID( 726770u ),   LHCb::LHCbID( 794196u ),   LHCb::LHCbID( 858585u ),   LHCb::LHCbID( 925047u ),
             LHCb::LHCbID( 989932u ),   LHCb::LHCbID( 19669477u ), LHCb::LHCbID( 20193780u ), LHCb::LHCbID( 20213765u ),
             LHCb::LHCbID( 21766476u ), LHCb::LHCbID( 22290773u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19029754u ), LHCb::LHCbID( 21123817u ), LHCb::LHCbID( 23217880u ), LHCb::LHCbID( 25311944u ),
             LHCb::LHCbID( 27406007u ), LHCb::LHCbID( 29500070u ), LHCb::LHCbID( 31594134u ), LHCb::LHCbID( 33688197u ),
             LHCb::LHCbID( 35782772u ), LHCb::LHCbID( 37877347u ), LHCb::LHCbID( 39968322u ), LHCb::LHCbID( 42056465u ),
             LHCb::LHCbID( 44392908u ), LHCb::LHCbID( 46502025u ), LHCb::LHCbID( 48605288u ), LHCb::LHCbID( 50708295u ),
             LHCb::LHCbID( 52811557u ), LHCb::LHCbID( 279220u ),   LHCb::LHCbID( 345279u ),   LHCb::LHCbID( 410215u ),
             LHCb::LHCbID( 476422u ),   LHCb::LHCbID( 541607u ),   LHCb::LHCbID( 607169u ),   LHCb::LHCbID( 672590u ),
             LHCb::LHCbID( 738320u ),   LHCb::LHCbID( 803980u ),   LHCb::LHCbID( 869073u ),   LHCb::LHCbID( 934954u ),
             LHCb::LHCbID( 1000234u ),  LHCb::LHCbID( 19685704u ), LHCb::LHCbID( 20210091u ), LHCb::LHCbID( 21782732u ),
             LHCb::LHCbID( 22307128u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 20090863u ), LHCb::LHCbID( 22187229u ), LHCb::LHCbID( 24283596u ), LHCb::LHCbID( 26379963u ),
             LHCb::LHCbID( 28476330u ), LHCb::LHCbID( 30572697u ), LHCb::LHCbID( 32669064u ), LHCb::LHCbID( 34765430u ),
             LHCb::LHCbID( 36861797u ), LHCb::LHCbID( 38958164u ), LHCb::LHCbID( 41053746u ), LHCb::LHCbID( 43288828u ),
             LHCb::LHCbID( 45389239u ), LHCb::LHCbID( 47489395u ), LHCb::LHCbID( 49588048u ), LHCb::LHCbID( 51686958u ),
             LHCb::LHCbID( 53785612u ), LHCb::LHCbID( 318969u ),   LHCb::LHCbID( 383562u ),   LHCb::LHCbID( 449634u ),
             LHCb::LHCbID( 515097u ),   LHCb::LHCbID( 583332u ),   LHCb::LHCbID( 647577u ),   LHCb::LHCbID( 713984u ),
             LHCb::LHCbID( 779137u ),   LHCb::LHCbID( 847783u ),   LHCb::LHCbID( 911500u ),   LHCb::LHCbID( 911503u ),
             LHCb::LHCbID( 1043080u ),  LHCb::LHCbID( 19717293u ), LHCb::LHCbID( 20241526u ), LHCb::LHCbID( 21814607u ),
             LHCb::LHCbID( 22338842u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22189043u ), LHCb::LHCbID( 24285668u ), LHCb::LHCbID( 26382294u ), LHCb::LHCbID( 28478920u ),
             LHCb::LHCbID( 30575545u ), LHCb::LHCbID( 32672171u ), LHCb::LHCbID( 34768797u ), LHCb::LHCbID( 36865422u ),
             LHCb::LHCbID( 38962048u ), LHCb::LHCbID( 41058147u ), LHCb::LHCbID( 43153719u ), LHCb::LHCbID( 45382650u ),
             LHCb::LHCbID( 47481792u ), LHCb::LHCbID( 49579939u ), LHCb::LHCbID( 51678086u ), LHCb::LHCbID( 53775977u ),
             LHCb::LHCbID( 311553u ),   LHCb::LHCbID( 378582u ),   LHCb::LHCbID( 442490u ),   LHCb::LHCbID( 509804u ),
             LHCb::LHCbID( 577423u ),   LHCb::LHCbID( 641088u ),   LHCb::LHCbID( 641091u ),   LHCb::LHCbID( 708352u ),
             LHCb::LHCbID( 772321u ),   LHCb::LHCbID( 839196u ),   LHCb::LHCbID( 903598u ),   LHCb::LHCbID( 970119u ),
             LHCb::LHCbID( 1034837u ),  LHCb::LHCbID( 19717139u ), LHCb::LHCbID( 20240865u ), LHCb::LHCbID( 21814417u ),
             LHCb::LHCbID( 22338655u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 21145587u ), LHCb::LHCbID( 23242980u ), LHCb::LHCbID( 25340372u ),
                                    LHCb::LHCbID( 27437509u ), LHCb::LHCbID( 29534902u ), LHCb::LHCbID( 31632039u ),
                                    LHCb::LHCbID( 33729431u ), LHCb::LHCbID( 35826568u ), LHCb::LHCbID( 37923961u ),
                                    LHCb::LHCbID( 40021338u ), LHCb::LHCbID( 42118700u ), LHCb::LHCbID( 44318188u ),
                                    LHCb::LHCbID( 46414767u ), LHCb::LHCbID( 48511633u ), LHCb::LHCbID( 50608498u ),
                                    LHCb::LHCbID( 52705364u ), LHCb::LHCbID( 262699u ),   LHCb::LHCbID( 329128u ),
                                    LHCb::LHCbID( 393663u ),   LHCb::LHCbID( 460320u ),   LHCb::LHCbID( 524564u ),
                                    LHCb::LHCbID( 591546u ),   LHCb::LHCbID( 655521u ),   LHCb::LHCbID( 722747u ),
                                    LHCb::LHCbID( 786444u ),   LHCb::LHCbID( 853947u ),   LHCb::LHCbID( 921515u ),
                                    LHCb::LHCbID( 985133u ),   LHCb::LHCbID( 19687801u ), LHCb::LHCbID( 20212132u ),
                                    LHCb::LHCbID( 21784824u ), LHCb::LHCbID( 22309154u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22189043u ), LHCb::LHCbID( 24285668u ), LHCb::LHCbID( 26382294u ), LHCb::LHCbID( 28478920u ),
             LHCb::LHCbID( 30575545u ), LHCb::LHCbID( 32672171u ), LHCb::LHCbID( 34768797u ), LHCb::LHCbID( 36865422u ),
             LHCb::LHCbID( 38962048u ), LHCb::LHCbID( 41058147u ), LHCb::LHCbID( 43153719u ), LHCb::LHCbID( 45382650u ),
             LHCb::LHCbID( 47481792u ), LHCb::LHCbID( 49579939u ), LHCb::LHCbID( 51678086u ), LHCb::LHCbID( 53775977u ),
             LHCb::LHCbID( 318969u ),   LHCb::LHCbID( 383562u ),   LHCb::LHCbID( 449634u ),   LHCb::LHCbID( 515097u ),
             LHCb::LHCbID( 583332u ),   LHCb::LHCbID( 647577u ),   LHCb::LHCbID( 713984u ),   LHCb::LHCbID( 779137u ),
             LHCb::LHCbID( 847783u ),   LHCb::LHCbID( 911503u ),   LHCb::LHCbID( 1043080u ),  LHCb::LHCbID( 19717293u ),
             LHCb::LHCbID( 20241526u ), LHCb::LHCbID( 21814607u ), LHCb::LHCbID( 22338842u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 17323260u ), LHCb::LHCbID( 19419881u ), LHCb::LHCbID( 21516501u ), LHCb::LHCbID( 23613122u ),
             LHCb::LHCbID( 25709742u ), LHCb::LHCbID( 27806619u ), LHCb::LHCbID( 29903239u ), LHCb::LHCbID( 31999860u ),
             LHCb::LHCbID( 34096480u ), LHCb::LHCbID( 36193357u ), LHCb::LHCbID( 38289977u ), LHCb::LHCbID( 40386067u ),
             LHCb::LHCbID( 42911448u ), LHCb::LHCbID( 45010571u ), LHCb::LHCbID( 47109438u ), LHCb::LHCbID( 49207576u ),
             LHCb::LHCbID( 295414u ),   LHCb::LHCbID( 361908u ),   LHCb::LHCbID( 426391u ),   LHCb::LHCbID( 493067u ),
             LHCb::LHCbID( 557547u ),   LHCb::LHCbID( 624056u ),   LHCb::LHCbID( 755225u ),   LHCb::LHCbID( 819676u ),
             LHCb::LHCbID( 950638u ),   LHCb::LHCbID( 1017383u ),  LHCb::LHCbID( 19694917u ), LHCb::LHCbID( 20219121u ),
             LHCb::LHCbID( 21792079u ), LHCb::LHCbID( 22316270u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 15231743u ), LHCb::LHCbID( 17329895u ), LHCb::LHCbID( 19427791u ), LHCb::LHCbID( 21525943u ),
             LHCb::LHCbID( 23623839u ), LHCb::LHCbID( 25721735u ), LHCb::LHCbID( 27819887u ), LHCb::LHCbID( 29917782u ),
             LHCb::LHCbID( 32015934u ), LHCb::LHCbID( 34113830u ), LHCb::LHCbID( 36211982u ), LHCb::LHCbID( 38694645u ),
             LHCb::LHCbID( 40789957u ), LHCb::LHCbID( 42884476u ), LHCb::LHCbID( 44977691u ), LHCb::LHCbID( 317435u ),
             LHCb::LHCbID( 380960u ),   LHCb::LHCbID( 448158u ),   LHCb::LHCbID( 512413u ),   LHCb::LHCbID( 578101u ),
             LHCb::LHCbID( 644576u ),   LHCb::LHCbID( 708808u ),   LHCb::LHCbID( 776057u ),   LHCb::LHCbID( 842948u ),
             LHCb::LHCbID( 908102u ),   LHCb::LHCbID( 973650u ),   LHCb::LHCbID( 1039600u ),  LHCb::LHCbID( 19694687u ),
             LHCb::LHCbID( 20196863u ), LHCb::LHCbID( 20218891u ), LHCb::LHCbID( 21791844u ), LHCb::LHCbID( 21792869u ),
             LHCb::LHCbID( 22294007u ), LHCb::LHCbID( 22316035u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 23595508u ), LHCb::LHCbID( 26355962u ), LHCb::LHCbID( 28449775u ), LHCb::LHCbID( 30543845u ),
             LHCb::LHCbID( 32637659u ), LHCb::LHCbID( 34732497u ), LHCb::LHCbID( 36826311u ), LHCb::LHCbID( 38920380u ),
             LHCb::LHCbID( 41010856u ), LHCb::LHCbID( 43098505u ), LHCb::LHCbID( 45182561u ), LHCb::LHCbID( 47266872u ),
             LHCb::LHCbID( 49357604u ), LHCb::LHCbID( 51448335u ), LHCb::LHCbID( 53869816u ), LHCb::LHCbID( 377523u ),
             LHCb::LHCbID( 443511u ),   LHCb::LHCbID( 508738u ),   LHCb::LHCbID( 574479u ),   LHCb::LHCbID( 639898u ),
             LHCb::LHCbID( 705405u ),   LHCb::LHCbID( 771125u ),   LHCb::LHCbID( 836395u ),   LHCb::LHCbID( 902263u ),
             LHCb::LHCbID( 967312u ),   LHCb::LHCbID( 1033498u ),  LHCb::LHCbID( 19693986u ), LHCb::LHCbID( 20218193u ),
             LHCb::LHCbID( 21791221u ), LHCb::LHCbID( 21794293u ), LHCb::LHCbID( 21813250u ), LHCb::LHCbID( 21816322u ),
             LHCb::LHCbID( 22318493u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 15231743u ), LHCb::LHCbID( 17329895u ), LHCb::LHCbID( 19427791u ), LHCb::LHCbID( 21525943u ),
             LHCb::LHCbID( 23623839u ), LHCb::LHCbID( 25721735u ), LHCb::LHCbID( 27819887u ), LHCb::LHCbID( 29917782u ),
             LHCb::LHCbID( 32015934u ), LHCb::LHCbID( 34113830u ), LHCb::LHCbID( 36211982u ), LHCb::LHCbID( 38694645u ),
             LHCb::LHCbID( 40789957u ), LHCb::LHCbID( 42884476u ), LHCb::LHCbID( 44977691u ), LHCb::LHCbID( 297235u ),
             LHCb::LHCbID( 364151u ),   LHCb::LHCbID( 428288u ),   LHCb::LHCbID( 495224u ),   LHCb::LHCbID( 559789u ),
             LHCb::LHCbID( 625879u ),   LHCb::LHCbID( 690834u ),   LHCb::LHCbID( 756954u ),   LHCb::LHCbID( 822320u ),
             LHCb::LHCbID( 887628u ),   LHCb::LHCbID( 953356u ),   LHCb::LHCbID( 1018711u ),  LHCb::LHCbID( 19672456u ),
             LHCb::LHCbID( 20196654u ), LHCb::LHCbID( 21769561u ), LHCb::LHCbID( 22293741u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 15886580u ), LHCb::LHCbID( 17980380u ), LHCb::LHCbID( 20073924u ), LHCb::LHCbID( 22167725u ),
             LHCb::LHCbID( 24261525u ), LHCb::LHCbID( 26355069u ), LHCb::LHCbID( 28448869u ), LHCb::LHCbID( 30542413u ),
             LHCb::LHCbID( 32636725u ), LHCb::LHCbID( 34730781u ), LHCb::LHCbID( 36824325u ), LHCb::LHCbID( 39130858u ),
             LHCb::LHCbID( 41234618u ), LHCb::LHCbID( 43342194u ), LHCb::LHCbID( 45452818u ), LHCb::LHCbID( 313205u ),
             LHCb::LHCbID( 362494u ),   LHCb::LHCbID( 444126u ),   LHCb::LHCbID( 508030u ),   LHCb::LHCbID( 575402u ),
             LHCb::LHCbID( 624570u ),   LHCb::LHCbID( 706308u ),   LHCb::LHCbID( 770119u ),   LHCb::LHCbID( 837597u ),
             LHCb::LHCbID( 886649u ),   LHCb::LHCbID( 968492u ),   LHCb::LHCbID( 1032209u ),  LHCb::LHCbID( 19719594u ),
             LHCb::LHCbID( 20243755u ), LHCb::LHCbID( 21815398u ), LHCb::LHCbID( 22341087u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22166765u ), LHCb::LHCbID( 24259546u ), LHCb::LHCbID( 26352071u ), LHCb::LHCbID( 28444596u ),
             LHCb::LHCbID( 30538144u ), LHCb::LHCbID( 32630669u ), LHCb::LHCbID( 34723194u ), LHCb::LHCbID( 36815974u ),
             LHCb::LHCbID( 38908499u ), LHCb::LHCbID( 40996653u ), LHCb::LHCbID( 43357424u ), LHCb::LHCbID( 45472419u ),
             LHCb::LHCbID( 47586901u ), LHCb::LHCbID( 49692975u ), LHCb::LHCbID( 51799304u ), LHCb::LHCbID( 312981u ),
             LHCb::LHCbID( 377045u ),   LHCb::LHCbID( 443882u ),   LHCb::LHCbID( 508290u ),   LHCb::LHCbID( 575035u ),
             LHCb::LHCbID( 639264u ),   LHCb::LHCbID( 705920u ),   LHCb::LHCbID( 770526u ),   LHCb::LHCbID( 837094u ),
             LHCb::LHCbID( 901481u ),   LHCb::LHCbID( 967965u ),   LHCb::LHCbID( 1032757u ),  LHCb::LHCbID( 19719242u ),
             LHCb::LHCbID( 20221374u ), LHCb::LHCbID( 21816544u ), LHCb::LHCbID( 22340693u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 24652531u ), LHCb::LHCbID( 26747876u ), LHCb::LHCbID( 28842964u ), LHCb::LHCbID( 30938052u ),
             LHCb::LHCbID( 33033140u ), LHCb::LHCbID( 35127972u ), LHCb::LHCbID( 35776511u ), LHCb::LHCbID( 37869559u ),
             LHCb::LHCbID( 39958502u ), LHCb::LHCbID( 42043597u ), LHCb::LHCbID( 44124588u ), LHCb::LHCbID( 46206091u ),
             LHCb::LHCbID( 48296059u ), LHCb::LHCbID( 50385514u ), LHCb::LHCbID( 52474714u ), LHCb::LHCbID( 263568u ),
             LHCb::LHCbID( 328223u ),   LHCb::LHCbID( 394497u ),   LHCb::LHCbID( 459442u ),   LHCb::LHCbID( 525468u ),
             LHCb::LHCbID( 656386u ),   LHCb::LHCbID( 656389u ),   LHCb::LHCbID( 721834u ),   LHCb::LHCbID( 787378u ),
             LHCb::LHCbID( 852972u ),   LHCb::LHCbID( 918287u ),   LHCb::LHCbID( 984214u ),   LHCb::LHCbID( 19711260u ),
             LHCb::LHCbID( 20235634u ), LHCb::LHCbID( 21805276u ), LHCb::LHCbID( 22329659u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 15243775u ), LHCb::LHCbID( 17344999u ), LHCb::LHCbID( 19445967u ), LHCb::LHCbID( 21547191u ),
             LHCb::LHCbID( 23648158u ), LHCb::LHCbID( 25749126u ), LHCb::LHCbID( 27850350u ), LHCb::LHCbID( 29950549u ),
             LHCb::LHCbID( 32051517u ), LHCb::LHCbID( 34152484u ), LHCb::LHCbID( 36253452u ), LHCb::LHCbID( 38650610u ),
             LHCb::LHCbID( 40740033u ), LHCb::LHCbID( 42825592u ), LHCb::LHCbID( 44907287u ), LHCb::LHCbID( 313322u ),
             LHCb::LHCbID( 376843u ),   LHCb::LHCbID( 508027u ),   LHCb::LHCbID( 575102u ),   LHCb::LHCbID( 639350u ),
             LHCb::LHCbID( 706057u ),   LHCb::LHCbID( 770540u ),   LHCb::LHCbID( 836893u ),   LHCb::LHCbID( 901841u ),
             LHCb::LHCbID( 967844u ),   LHCb::LHCbID( 967847u ),   LHCb::LHCbID( 1033039u ),  LHCb::LHCbID( 19671519u ),
             LHCb::LHCbID( 20195752u ), LHCb::LHCbID( 21768555u ), LHCb::LHCbID( 22292772u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 23251183u ), LHCb::LHCbID( 25349853u ), LHCb::LHCbID( 27448267u ), LHCb::LHCbID( 29546938u ),
             LHCb::LHCbID( 31645352u ), LHCb::LHCbID( 33743766u ), LHCb::LHCbID( 35842436u ), LHCb::LHCbID( 37940851u ),
             LHCb::LHCbID( 40040784u ), LHCb::LHCbID( 42572533u ), LHCb::LHCbID( 44687071u ), LHCb::LHCbID( 46800842u ),
             LHCb::LHCbID( 48906688u ), LHCb::LHCbID( 51012534u ), LHCb::LHCbID( 53118123u ), LHCb::LHCbID( 279612u ),
             LHCb::LHCbID( 344935u ),   LHCb::LHCbID( 410724u ),   LHCb::LHCbID( 475957u ),   LHCb::LHCbID( 542266u ),
             LHCb::LHCbID( 606564u ),   LHCb::LHCbID( 673376u ),   LHCb::LHCbID( 737584u ),   LHCb::LHCbID( 804877u ),
             LHCb::LHCbID( 872331u ),   LHCb::LHCbID( 935987u ),   LHCb::LHCbID( 1003348u ),  LHCb::LHCbID( 19689633u ),
             LHCb::LHCbID( 20211902u ), LHCb::LHCbID( 21786659u ), LHCb::LHCbID( 22308926u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 24302845u ), LHCb::LHCbID( 26400497u ), LHCb::LHCbID( 28498407u ), LHCb::LHCbID( 30596315u ),
             LHCb::LHCbID( 32694224u ), LHCb::LHCbID( 34791877u ), LHCb::LHCbID( 36889786u ), LHCb::LHCbID( 38987695u ),
             LHCb::LHCbID( 41086361u ), LHCb::LHCbID( 43185529u ), LHCb::LHCbID( 45705470u ), LHCb::LHCbID( 47813618u ),
             LHCb::LHCbID( 49916140u ), LHCb::LHCbID( 52018919u ), LHCb::LHCbID( 54121697u ), LHCb::LHCbID( 311692u ),
             LHCb::LHCbID( 378475u ),   LHCb::LHCbID( 442674u ),   LHCb::LHCbID( 509649u ),   LHCb::LHCbID( 573495u ),
             LHCb::LHCbID( 640957u ),   LHCb::LHCbID( 708591u ),   LHCb::LHCbID( 772116u ),   LHCb::LHCbID( 839432u ),
             LHCb::LHCbID( 903400u ),   LHCb::LHCbID( 970407u ),   LHCb::LHCbID( 1034586u ),  LHCb::LHCbID( 19715140u ),
             LHCb::LHCbID( 20239410u ), LHCb::LHCbID( 21812387u ), LHCb::LHCbID( 22336660u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 23593207u ), LHCb::LHCbID( 24262137u ), LHCb::LHCbID( 26354407u ), LHCb::LHCbID( 28446678u ),
             LHCb::LHCbID( 30539716u ), LHCb::LHCbID( 32631987u ), LHCb::LHCbID( 34724258u ), LHCb::LHCbID( 36816784u ),
             LHCb::LHCbID( 38909055u ), LHCb::LHCbID( 40996444u ), LHCb::LHCbID( 43078951u ), LHCb::LHCbID( 45474781u ),
             LHCb::LHCbID( 47590295u ), LHCb::LHCbID( 49697140u ), LHCb::LHCbID( 51803728u ), LHCb::LHCbID( 53910573u ),
             LHCb::LHCbID( 311749u ),   LHCb::LHCbID( 378309u ),   LHCb::LHCbID( 442588u ),   LHCb::LHCbID( 509628u ),
             LHCb::LHCbID( 640902u ),   LHCb::LHCbID( 708370u ),   LHCb::LHCbID( 772218u ),   LHCb::LHCbID( 839250u ),
             LHCb::LHCbID( 903451u ),   LHCb::LHCbID( 970060u ),   LHCb::LHCbID( 1034805u ),  LHCb::LHCbID( 19697119u ),
             LHCb::LHCbID( 20221282u ), LHCb::LHCbID( 21816443u ), LHCb::LHCbID( 22318565u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 14856188u ), LHCb::LHCbID( 16954083u ), LHCb::LHCbID( 19051979u ), LHCb::LHCbID( 21149874u ),
             LHCb::LHCbID( 23247769u ), LHCb::LHCbID( 25345664u ), LHCb::LHCbID( 27443558u ), LHCb::LHCbID( 29541453u ),
             LHCb::LHCbID( 31639348u ), LHCb::LHCbID( 33737242u ), LHCb::LHCbID( 35921918u ), LHCb::LHCbID( 38018277u ),
             LHCb::LHCbID( 40114098u ), LHCb::LHCbID( 42208871u ), LHCb::LHCbID( 44302850u ), LHCb::LHCbID( 278864u ),
             LHCb::LHCbID( 345653u ),   LHCb::LHCbID( 409906u ),   LHCb::LHCbID( 476750u ),   LHCb::LHCbID( 541357u ),
             LHCb::LHCbID( 607438u ),   LHCb::LHCbID( 672393u ),   LHCb::LHCbID( 738540u ),   LHCb::LHCbID( 803838u ),
             LHCb::LHCbID( 869241u ),   LHCb::LHCbID( 934866u ),   LHCb::LHCbID( 1000346u ),  LHCb::LHCbID( 19669411u ),
             LHCb::LHCbID( 20193762u ), LHCb::LHCbID( 21766369u ), LHCb::LHCbID( 22290720u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 14856188u ), LHCb::LHCbID( 16954083u ), LHCb::LHCbID( 19051979u ), LHCb::LHCbID( 21149874u ),
             LHCb::LHCbID( 23247769u ), LHCb::LHCbID( 25345664u ), LHCb::LHCbID( 27443558u ), LHCb::LHCbID( 29541453u ),
             LHCb::LHCbID( 31639348u ), LHCb::LHCbID( 33737242u ), LHCb::LHCbID( 35921918u ), LHCb::LHCbID( 38018277u ),
             LHCb::LHCbID( 40114098u ), LHCb::LHCbID( 42208871u ), LHCb::LHCbID( 44302850u ), LHCb::LHCbID( 278864u ),
             LHCb::LHCbID( 345653u ),   LHCb::LHCbID( 409906u ),   LHCb::LHCbID( 476750u ),   LHCb::LHCbID( 541352u ),
             LHCb::LHCbID( 672387u ),   LHCb::LHCbID( 738545u ),   LHCb::LHCbID( 803833u ),   LHCb::LHCbID( 869250u ),
             LHCb::LHCbID( 934866u ),   LHCb::LHCbID( 1000354u ),  LHCb::LHCbID( 19669411u ), LHCb::LHCbID( 20193762u ),
             LHCb::LHCbID( 21766369u ), LHCb::LHCbID( 22290720u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 16294140u ), LHCb::LHCbID( 18395366u ), LHCb::LHCbID( 20496336u ), LHCb::LHCbID( 22597562u ),
             LHCb::LHCbID( 24699043u ), LHCb::LHCbID( 26800269u ), LHCb::LHCbID( 28901238u ), LHCb::LHCbID( 31001952u ),
             LHCb::LHCbID( 33103433u ), LHCb::LHCbID( 35204658u ), LHCb::LHCbID( 37305884u ), LHCb::LHCbID( 39407365u ),
             LHCb::LHCbID( 41783511u ), LHCb::LHCbID( 43868050u ), LHCb::LHCbID( 45948470u ), LHCb::LHCbID( 282555u ),
             LHCb::LHCbID( 413706u ),   LHCb::LHCbID( 481150u ),   LHCb::LHCbID( 545470u ),   LHCb::LHCbID( 611561u ),
             LHCb::LHCbID( 676641u ),   LHCb::LHCbID( 742494u ),   LHCb::LHCbID( 808359u ),   LHCb::LHCbID( 872958u ),
             LHCb::LHCbID( 939527u ),   LHCb::LHCbID( 1003890u ),  LHCb::LHCbID( 19733573u ), LHCb::LHCbID( 20257909u ),
             LHCb::LHCbID( 21830882u ), LHCb::LHCbID( 22355234u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 20081141u ), LHCb::LHCbID( 22175200u ), LHCb::LHCbID( 24269514u ), LHCb::LHCbID( 26363573u ),
             LHCb::LHCbID( 28457632u ), LHCb::LHCbID( 30551690u ), LHCb::LHCbID( 32645749u ), LHCb::LHCbID( 34739807u ),
             LHCb::LHCbID( 36833610u ), LHCb::LHCbID( 38928181u ), LHCb::LHCbID( 41019402u ), LHCb::LHCbID( 43329991u ),
             LHCb::LHCbID( 45439345u ), LHCb::LHCbID( 47548955u ), LHCb::LHCbID( 295135u ),   LHCb::LHCbID( 362118u ),
             LHCb::LHCbID( 426092u ),   LHCb::LHCbID( 493303u ),   LHCb::LHCbID( 557428u ),   LHCb::LHCbID( 624102u ),
             LHCb::LHCbID( 688372u ),   LHCb::LHCbID( 688375u ),   LHCb::LHCbID( 755296u ),   LHCb::LHCbID( 819712u ),
             LHCb::LHCbID( 886090u ),   LHCb::LHCbID( 950646u ),   LHCb::LHCbID( 1017297u ),  LHCb::LHCbID( 19719531u ),
             LHCb::LHCbID( 20243707u ), LHCb::LHCbID( 21815310u ), LHCb::LHCbID( 22341013u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22571253u ), LHCb::LHCbID( 24669152u ), LHCb::LHCbID( 26766795u ), LHCb::LHCbID( 28864693u ),
             LHCb::LHCbID( 30962592u ), LHCb::LHCbID( 33060235u ), LHCb::LHCbID( 35158134u ), LHCb::LHCbID( 37256034u ),
             LHCb::LHCbID( 39353933u ), LHCb::LHCbID( 41452323u ), LHCb::LHCbID( 43938787u ), LHCb::LHCbID( 46033039u ),
             LHCb::LHCbID( 48127291u ), LHCb::LHCbID( 50223121u ), LHCb::LHCbID( 263738u ),   LHCb::LHCbID( 328085u ),
             LHCb::LHCbID( 394671u ),   LHCb::LHCbID( 459299u ),   LHCb::LHCbID( 525539u ),   LHCb::LHCbID( 590565u ),
             LHCb::LHCbID( 656462u ),   LHCb::LHCbID( 721792u ),   LHCb::LHCbID( 787353u ),   LHCb::LHCbID( 853031u ),
             LHCb::LHCbID( 918269u ),   LHCb::LHCbID( 984269u ),   LHCb::LHCbID( 19710353u ), LHCb::LHCbID( 20234717u ),
             LHCb::LHCbID( 21807528u ), LHCb::LHCbID( 22331904u ), LHCb::LHCbID( 22353929u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 14192363u ), LHCb::LHCbID( 16293066u ), LHCb::LHCbID( 18394024u ), LHCb::LHCbID( 20494727u ),
             LHCb::LHCbID( 22595686u ), LHCb::LHCbID( 24696389u ), LHCb::LHCbID( 26797347u ), LHCb::LHCbID( 28898306u ),
             LHCb::LHCbID( 31326176u ), LHCb::LHCbID( 33419966u ), LHCb::LHCbID( 35513245u ), LHCb::LHCbID( 37606524u ),
             LHCb::LHCbID( 39700058u ), LHCb::LHCbID( 41789719u ), LHCb::LHCbID( 281529u ),   LHCb::LHCbID( 347100u ),
             LHCb::LHCbID( 412587u ),   LHCb::LHCbID( 478160u ),   LHCb::LHCbID( 544092u ),   LHCb::LHCbID( 608817u ),
             LHCb::LHCbID( 675144u ),   LHCb::LHCbID( 739882u ),   LHCb::LHCbID( 806630u ),   LHCb::LHCbID( 870562u ),
             LHCb::LHCbID( 937674u ),   LHCb::LHCbID( 1001631u ),  LHCb::LHCbID( 19733910u ), LHCb::LHCbID( 20258293u ),
             LHCb::LHCbID( 20323332u ), LHCb::LHCbID( 21896217u ), LHCb::LHCbID( 22420564u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 16280805u ), LHCb::LHCbID( 18378698u ), LHCb::LHCbID( 20476590u ), LHCb::LHCbID( 22574739u ),
             LHCb::LHCbID( 24672631u ), LHCb::LHCbID( 26770524u ), LHCb::LHCbID( 28868672u ), LHCb::LHCbID( 30966565u ),
             LHCb::LHCbID( 33064713u ), LHCb::LHCbID( 35550445u ), LHCb::LHCbID( 37646545u ), LHCb::LHCbID( 39742902u ),
             LHCb::LHCbID( 41837950u ), LHCb::LHCbID( 43932459u ), LHCb::LHCbID( 283981u ),   LHCb::LHCbID( 348637u ),
             LHCb::LHCbID( 415162u ),   LHCb::LHCbID( 479555u ),   LHCb::LHCbID( 547415u ),   LHCb::LHCbID( 613577u ),
             LHCb::LHCbID( 678590u ),   LHCb::LHCbID( 744491u ),   LHCb::LHCbID( 810807u ),   LHCb::LHCbID( 878586u ),
             LHCb::LHCbID( 941972u ),   LHCb::LHCbID( 1009500u ),  LHCb::LHCbID( 19732788u ), LHCb::LHCbID( 20256165u ),
             LHCb::LHCbID( 20257186u ), LHCb::LHCbID( 21828983u ), LHCb::LHCbID( 22353400u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 25339377u ), LHCb::LHCbID( 27436768u ), LHCb::LHCbID( 29533903u ), LHCb::LHCbID( 31631295u ),
             LHCb::LHCbID( 33728430u ), LHCb::LHCbID( 35825821u ), LHCb::LHCbID( 37922957u ), LHCb::LHCbID( 40020587u ),
             LHCb::LHCbID( 42117945u ), LHCb::LHCbID( 44318708u ), LHCb::LHCbID( 46415282u ), LHCb::LHCbID( 48512144u ),
             LHCb::LHCbID( 50609007u ), LHCb::LHCbID( 52705870u ), LHCb::LHCbID( 263906u ),   LHCb::LHCbID( 327890u ),
             LHCb::LHCbID( 394922u ),   LHCb::LHCbID( 459018u ),   LHCb::LHCbID( 526118u ),   LHCb::LHCbID( 589958u ),
             LHCb::LHCbID( 657130u ),   LHCb::LHCbID( 721092u ),   LHCb::LHCbID( 788330u ),   LHCb::LHCbID( 852029u ),
             LHCb::LHCbID( 919335u ),   LHCb::LHCbID( 983168u ),   LHCb::LHCbID( 19687783u ), LHCb::LHCbID( 20212117u ),
             LHCb::LHCbID( 21784804u ), LHCb::LHCbID( 22309138u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 17332718u ), LHCb::LHCbID( 19431127u ), LHCb::LHCbID( 21529792u ), LHCb::LHCbID( 23628201u ),
             LHCb::LHCbID( 25726866u ), LHCb::LHCbID( 27825275u ), LHCb::LHCbID( 29923940u ), LHCb::LHCbID( 32022349u ),
             LHCb::LHCbID( 34121014u ), LHCb::LHCbID( 36219423u ), LHCb::LHCbID( 38317832u ), LHCb::LHCbID( 40781274u ),
             LHCb::LHCbID( 42874262u ), LHCb::LHCbID( 44966203u ), LHCb::LHCbID( 295151u ),   LHCb::LHCbID( 362199u ),
             LHCb::LHCbID( 426113u ),   LHCb::LHCbID( 493378u ),   LHCb::LHCbID( 557114u ),   LHCb::LHCbID( 624517u ),
             LHCb::LHCbID( 706523u ),   LHCb::LHCbID( 755707u ),   LHCb::LHCbID( 837537u ),   LHCb::LHCbID( 901144u ),
             LHCb::LHCbID( 968485u ),   LHCb::LHCbID( 1032340u ),  LHCb::LHCbID( 19672481u ), LHCb::LHCbID( 20196691u ),
             LHCb::LHCbID( 21769590u ), LHCb::LHCbID( 22293786u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 25315322u ), LHCb::LHCbID( 27408104u ), LHCb::LHCbID( 29500630u ), LHCb::LHCbID( 31593412u ),
             LHCb::LHCbID( 33686193u ), LHCb::LHCbID( 35779487u ), LHCb::LHCbID( 37872269u ), LHCb::LHCbID( 39960681u ),
             LHCb::LHCbID( 42044467u ), LHCb::LHCbID( 44410600u ), LHCb::LHCbID( 46525344u ), LHCb::LHCbID( 48630652u ),
             LHCb::LHCbID( 50736472u ), LHCb::LHCbID( 52842548u ), LHCb::LHCbID( 279303u ),   LHCb::LHCbID( 345167u ),
             LHCb::LHCbID( 410263u ),   LHCb::LHCbID( 476344u ),   LHCb::LHCbID( 541675u ),   LHCb::LHCbID( 607070u ),
             LHCb::LHCbID( 672622u ),   LHCb::LHCbID( 738258u ),   LHCb::LHCbID( 804035u ),   LHCb::LHCbID( 868986u ),
             LHCb::LHCbID( 934970u ),   LHCb::LHCbID( 1000185u ),  LHCb::LHCbID( 19685867u ), LHCb::LHCbID( 20232305u ),
             LHCb::LHCbID( 21782889u ), LHCb::LHCbID( 22307310u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 12770297u ), LHCb::LHCbID( 14872534u ), LHCb::LHCbID( 17368059u ), LHCb::LHCbID( 19474151u ),
             LHCb::LHCbID( 21580243u ), LHCb::LHCbID( 23686335u ), LHCb::LHCbID( 25792427u ), LHCb::LHCbID( 27898518u ),
             LHCb::LHCbID( 30004610u ), LHCb::LHCbID( 32110702u ), LHCb::LHCbID( 34216025u ), LHCb::LHCbID( 36322117u ),
             LHCb::LHCbID( 38428209u ), LHCb::LHCbID( 40543496u ), LHCb::LHCbID( 267036u ),   LHCb::LHCbID( 333038u ),
             LHCb::LHCbID( 397874u ),   LHCb::LHCbID( 464386u ),   LHCb::LHCbID( 532266u ),   LHCb::LHCbID( 596184u ),
             LHCb::LHCbID( 663095u ),   LHCb::LHCbID( 727550u ),   LHCb::LHCbID( 793434u ),   LHCb::LHCbID( 859298u ),
             LHCb::LHCbID( 924257u ),   LHCb::LHCbID( 990675u ),   LHCb::LHCbID( 19608974u ), LHCb::LHCbID( 20133271u ),
             LHCb::LHCbID( 21720306u ), LHCb::LHCbID( 22244595u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 23246320u ), LHCb::LHCbID( 25343966u ), LHCb::LHCbID( 27441868u ), LHCb::LHCbID( 29539514u ),
             LHCb::LHCbID( 31637160u ), LHCb::LHCbID( 33735063u ), LHCb::LHCbID( 35832709u ), LHCb::LHCbID( 37930355u ),
             LHCb::LHCbID( 40028751u ), LHCb::LHCbID( 42127642u ), LHCb::LHCbID( 44307407u ), LHCb::LHCbID( 46402184u ),
             LHCb::LHCbID( 48498020u ), LHCb::LHCbID( 50594113u ), LHCb::LHCbID( 279501u ),   LHCb::LHCbID( 345036u ),
             LHCb::LHCbID( 410587u ),   LHCb::LHCbID( 410590u ),   LHCb::LHCbID( 476084u ),   LHCb::LHCbID( 542099u ),
             LHCb::LHCbID( 673183u ),   LHCb::LHCbID( 737767u ),   LHCb::LHCbID( 804679u ),   LHCb::LHCbID( 868422u ),
             LHCb::LHCbID( 935758u ),   LHCb::LHCbID( 999472u ),   LHCb::LHCbID( 19687700u ), LHCb::LHCbID( 20212031u ),
             LHCb::LHCbID( 21784724u ), LHCb::LHCbID( 22309055u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 14163446u ), LHCb::LHCbID( 16255959u ), LHCb::LHCbID( 19002864u ), LHCb::LHCbID( 21092574u ),
             LHCb::LHCbID( 23182028u ), LHCb::LHCbID( 25271737u ), LHCb::LHCbID( 27361191u ), LHCb::LHCbID( 29450644u ),
             LHCb::LHCbID( 31540354u ), LHCb::LHCbID( 33629808u ), LHCb::LHCbID( 35719262u ), LHCb::LHCbID( 37809485u ),
             LHCb::LHCbID( 39891498u ), LHCb::LHCbID( 42374899u ), LHCb::LHCbID( 283718u ),   LHCb::LHCbID( 348801u ),
             LHCb::LHCbID( 414832u ),   LHCb::LHCbID( 479789u ),   LHCb::LHCbID( 547257u ),   LHCb::LHCbID( 613632u ),
             LHCb::LHCbID( 678356u ),   LHCb::LHCbID( 744622u ),   LHCb::LHCbID( 810742u ),   LHCb::LHCbID( 878541u ),
             LHCb::LHCbID( 941825u ),   LHCb::LHCbID( 1009537u ),  LHCb::LHCbID( 19708969u ), LHCb::LHCbID( 20233435u ),
             LHCb::LHCbID( 21804259u ), LHCb::LHCbID( 22328647u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 26378751u ), LHCb::LHCbID( 28474867u ), LHCb::LHCbID( 30570983u ), LHCb::LHCbID( 32666843u ),
             LHCb::LHCbID( 34762959u ), LHCb::LHCbID( 36859075u ), LHCb::LHCbID( 38955190u ), LHCb::LHCbID( 41050270u ),
             LHCb::LHCbID( 43144566u ), LHCb::LHCbID( 45237570u ), LHCb::LHCbID( 47330573u ), LHCb::LHCbID( 49594352u ),
             LHCb::LHCbID( 51693526u ), LHCb::LHCbID( 53792700u ), LHCb::LHCbID( 314765u ),   LHCb::LHCbID( 379482u ),
             LHCb::LHCbID( 445645u ),   LHCb::LHCbID( 510768u ),   LHCb::LHCbID( 576226u ),   LHCb::LHCbID( 642302u ),
             LHCb::LHCbID( 707095u ),   LHCb::LHCbID( 773603u ),   LHCb::LHCbID( 837719u ),   LHCb::LHCbID( 905088u ),
             LHCb::LHCbID( 972700u ),   LHCb::LHCbID( 1036379u ),  LHCb::LHCbID( 19716490u ), LHCb::LHCbID( 20240724u ),
             LHCb::LHCbID( 21814275u ), LHCb::LHCbID( 22337995u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22571253u ), LHCb::LHCbID( 24669152u ), LHCb::LHCbID( 26766795u ), LHCb::LHCbID( 28864693u ),
             LHCb::LHCbID( 30962592u ), LHCb::LHCbID( 33060235u ), LHCb::LHCbID( 35158134u ), LHCb::LHCbID( 37256034u ),
             LHCb::LHCbID( 39353933u ), LHCb::LHCbID( 41452323u ), LHCb::LHCbID( 43938787u ), LHCb::LHCbID( 46033039u ),
             LHCb::LHCbID( 48127291u ), LHCb::LHCbID( 50223121u ), LHCb::LHCbID( 266955u ),   LHCb::LHCbID( 333179u ),
             LHCb::LHCbID( 464705u ),   LHCb::LHCbID( 531326u ),   LHCb::LHCbID( 597186u ),   LHCb::LHCbID( 661970u ),
             LHCb::LHCbID( 728746u ),   LHCb::LHCbID( 795774u ),   LHCb::LHCbID( 861113u ),   LHCb::LHCbID( 926413u ),
             LHCb::LHCbID( 992690u ),   LHCb::LHCbID( 19710353u ), LHCb::LHCbID( 20234717u ), LHCb::LHCbID( 21807510u ),
             LHCb::LHCbID( 22331888u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 14206191u ), LHCb::LHCbID( 16310991u ), LHCb::LHCbID( 18415534u ), LHCb::LHCbID( 20520078u ),
             LHCb::LHCbID( 22624878u ), LHCb::LHCbID( 24729933u ), LHCb::LHCbID( 26834988u ), LHCb::LHCbID( 28939788u ),
             LHCb::LHCbID( 31280107u ), LHCb::LHCbID( 33369290u ), LHCb::LHCbID( 35458730u ), LHCb::LHCbID( 37548681u ),
             LHCb::LHCbID( 39637864u ), LHCb::LHCbID( 41719335u ), LHCb::LHCbID( 284276u ),   LHCb::LHCbID( 348468u ),
             LHCb::LHCbID( 415514u ),   LHCb::LHCbID( 479327u ),   LHCb::LHCbID( 547468u ),   LHCb::LHCbID( 613658u ),
             LHCb::LHCbID( 678707u ),   LHCb::LHCbID( 744510u ),   LHCb::LHCbID( 874795u ),   LHCb::LHCbID( 941859u ),
             LHCb::LHCbID( 1005640u ),  LHCb::LHCbID( 19799315u ), LHCb::LHCbID( 20323627u ), LHCb::LHCbID( 21896607u ),
             LHCb::LHCbID( 22420931u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22555116u ), LHCb::LHCbID( 24649685u ), LHCb::LHCbID( 26744254u ), LHCb::LHCbID( 28838567u ),
             LHCb::LHCbID( 31576058u ), LHCb::LHCbID( 33667568u ), LHCb::LHCbID( 35758821u ), LHCb::LHCbID( 37850331u ),
             LHCb::LHCbID( 39935685u ), LHCb::LHCbID( 42015653u ), LHCb::LHCbID( 44090234u ), LHCb::LHCbID( 46164304u ),
             LHCb::LHCbID( 48249915u ), LHCb::LHCbID( 50335270u ), LHCb::LHCbID( 349997u ),   LHCb::LHCbID( 413722u ),
             LHCb::LHCbID( 480992u ),   LHCb::LHCbID( 545836u ),   LHCb::LHCbID( 611046u ),   LHCb::LHCbID( 676941u ),
             LHCb::LHCbID( 742041u ),   LHCb::LHCbID( 808987u ),   LHCb::LHCbID( 876269u ),   LHCb::LHCbID( 940082u ),
             LHCb::LHCbID( 1007268u ),  LHCb::LHCbID( 19708938u ), LHCb::LHCbID( 20233352u ), LHCb::LHCbID( 21805524u ),
             LHCb::LHCbID( 22330467u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 15905262u ), LHCb::LHCbID( 18003413u ), LHCb::LHCbID( 20101308u ),
                                    LHCb::LHCbID( 22199458u ), LHCb::LHCbID( 24297353u ), LHCb::LHCbID( 26395247u ),
                                    LHCb::LHCbID( 28493397u ), LHCb::LHCbID( 30591292u ), LHCb::LHCbID( 32689186u ),
                                    LHCb::LHCbID( 34787080u ), LHCb::LHCbID( 36969196u ), LHCb::LHCbID( 39065554u ),
                                    LHCb::LHCbID( 41160863u ), LHCb::LHCbID( 43255122u ), LHCb::LHCbID( 301817u ),
                                    LHCb::LHCbID( 367580u ),   LHCb::LHCbID( 433216u ),   LHCb::LHCbID( 498263u ),
                                    LHCb::LHCbID( 566420u ),   LHCb::LHCbID( 631347u ),   LHCb::LHCbID( 697830u ),
                                    LHCb::LHCbID( 762003u ),   LHCb::LHCbID( 830935u ),   LHCb::LHCbID( 962340u ),
                                    LHCb::LHCbID( 19717581u ), LHCb::LHCbID( 20242821u ), LHCb::LHCbID( 21832823u ),
                                    LHCb::LHCbID( 22358061u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 27431678u ), LHCb::LHCbID( 29527785u ), LHCb::LHCbID( 31623893u ), LHCb::LHCbID( 33720000u ),
             LHCb::LHCbID( 35816363u ), LHCb::LHCbID( 37912471u ), LHCb::LHCbID( 40007534u ), LHCb::LHCbID( 42101808u ),
             LHCb::LHCbID( 44339418u ), LHCb::LHCbID( 46440328u ), LHCb::LHCbID( 48539486u ), LHCb::LHCbID( 50638389u ),
             LHCb::LHCbID( 52737548u ), LHCb::LHCbID( 263309u ),   LHCb::LHCbID( 328464u ),   LHCb::LHCbID( 328467u ),
             LHCb::LHCbID( 394263u ),   LHCb::LHCbID( 459662u ),   LHCb::LHCbID( 525350u ),   LHCb::LHCbID( 590704u ),
             LHCb::LHCbID( 656294u ),   LHCb::LHCbID( 721911u ),   LHCb::LHCbID( 787397u ),   LHCb::LHCbID( 852934u ),
             LHCb::LHCbID( 918334u ),   LHCb::LHCbID( 984151u ),   LHCb::LHCbID( 19687807u ), LHCb::LHCbID( 20212167u ),
             LHCb::LHCbID( 21784797u ), LHCb::LHCbID( 22308134u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 20480491u ), LHCb::LHCbID( 22579666u ), LHCb::LHCbID( 24678842u ), LHCb::LHCbID( 26777762u ),
             LHCb::LHCbID( 28876938u ), LHCb::LHCbID( 30976114u ), LHCb::LHCbID( 33075034u ), LHCb::LHCbID( 35174210u ),
             LHCb::LHCbID( 37273130u ), LHCb::LHCbID( 39372306u ), LHCb::LHCbID( 41822945u ), LHCb::LHCbID( 43914137u ),
             LHCb::LHCbID( 46004281u ), LHCb::LHCbID( 280975u ),   LHCb::LHCbID( 347658u ),   LHCb::LHCbID( 347661u ),
             LHCb::LHCbID( 412044u ),   LHCb::LHCbID( 478716u ),   LHCb::LHCbID( 543532u ),   LHCb::LHCbID( 609387u ),
             LHCb::LHCbID( 674595u ),   LHCb::LHCbID( 740445u ),   LHCb::LHCbID( 806065u ),   LHCb::LHCbID( 871137u ),
             LHCb::LHCbID( 937121u ),   LHCb::LHCbID( 1002198u ),  LHCb::LHCbID( 19732739u ), LHCb::LHCbID( 20257104u ),
             LHCb::LHCbID( 21829971u ), LHCb::LHCbID( 22354352u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 12768232u ), LHCb::LHCbID( 14869696u ), LHCb::LHCbID( 16971159u ), LHCb::LHCbID( 19482872u ),
             LHCb::LHCbID( 21590247u ), LHCb::LHCbID( 23697879u ), LHCb::LHCbID( 25805254u ), LHCb::LHCbID( 27912885u ),
             LHCb::LHCbID( 30019492u ), LHCb::LHCbID( 32127123u ), LHCb::LHCbID( 34234754u ), LHCb::LHCbID( 36342129u ),
             LHCb::LHCbID( 38449760u ), LHCb::LHCbID( 265012u ),   LHCb::LHCbID( 330880u ),   LHCb::LHCbID( 395917u ),
             LHCb::LHCbID( 462144u ),   LHCb::LHCbID( 526741u ),   LHCb::LHCbID( 593429u ),   LHCb::LHCbID( 657639u ),
             LHCb::LHCbID( 724704u ),   LHCb::LHCbID( 788498u ),   LHCb::LHCbID( 855950u ),   LHCb::LHCbID( 923507u ),
             LHCb::LHCbID( 987213u ),   LHCb::LHCbID( 19608949u ), LHCb::LHCbID( 20133262u ), LHCb::LHCbID( 21719242u ),
             LHCb::LHCbID( 22243549u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 14166527u ), LHCb::LHCbID( 16256203u ), LHCb::LHCbID( 16907775u ), LHCb::LHCbID( 18991586u ),
             LHCb::LHCbID( 21075142u ), LHCb::LHCbID( 23158953u ), LHCb::LHCbID( 25242509u ), LHCb::LHCbID( 27327088u ),
             LHCb::LHCbID( 29410644u ), LHCb::LHCbID( 31494455u ), LHCb::LHCbID( 33578010u ), LHCb::LHCbID( 36095994u ),
             LHCb::LHCbID( 38206685u ), LHCb::LHCbID( 262409u ),   LHCb::LHCbID( 329177u ),   LHCb::LHCbID( 397130u ),
             LHCb::LHCbID( 460734u ),   LHCb::LHCbID( 527949u ),   LHCb::LHCbID( 591995u ),   LHCb::LHCbID( 658515u ),
             LHCb::LHCbID( 723588u ),   LHCb::LHCbID( 789402u ),   LHCb::LHCbID( 854798u ),   LHCb::LHCbID( 919942u ),
             LHCb::LHCbID( 986425u ),   LHCb::LHCbID( 19706297u ), LHCb::LHCbID( 20252755u ), LHCb::LHCbID( 21803335u ),
             LHCb::LHCbID( 22327787u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 12075246u ), LHCb::LHCbID( 14169025u ), LHCb::LHCbID( 16263059u ), LHCb::LHCbID( 18357093u ),
             LHCb::LHCbID( 20451128u ), LHCb::LHCbID( 23150589u ), LHCb::LHCbID( 25235952u ), LHCb::LHCbID( 27322340u ),
             LHCb::LHCbID( 29407960u ), LHCb::LHCbID( 31493324u ), LHCb::LHCbID( 33578944u ), LHCb::LHCbID( 35664565u ),
             LHCb::LHCbID( 37749929u ), LHCb::LHCbID( 263713u ),   LHCb::LHCbID( 327953u ),   LHCb::LHCbID( 394462u ),
             LHCb::LHCbID( 459352u ),   LHCb::LHCbID( 525417u ),   LHCb::LHCbID( 590518u ),   LHCb::LHCbID( 656139u ),
             LHCb::LHCbID( 721944u ),   LHCb::LHCbID( 787136u ),   LHCb::LHCbID( 853063u ),   LHCb::LHCbID( 917839u ),
             LHCb::LHCbID( 984514u ),   LHCb::LHCbID( 19729561u ), LHCb::LHCbID( 20253959u ), LHCb::LHCbID( 21826667u ),
             LHCb::LHCbID( 22351079u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 21533163u ), LHCb::LHCbID( 23632854u ), LHCb::LHCbID( 25732545u ), LHCb::LHCbID( 27832235u ),
             LHCb::LHCbID( 29931926u ), LHCb::LHCbID( 32031872u ), LHCb::LHCbID( 34131562u ), LHCb::LHCbID( 36231508u ),
             LHCb::LHCbID( 38331455u ), LHCb::LHCbID( 40434196u ), LHCb::LHCbID( 42854354u ), LHCb::LHCbID( 44940157u ),
             LHCb::LHCbID( 47025702u ), LHCb::LHCbID( 300632u ),   LHCb::LHCbID( 364812u ),   LHCb::LHCbID( 431883u ),
             LHCb::LHCbID( 495656u ),   LHCb::LHCbID( 564126u ),   LHCb::LHCbID( 629697u ),   LHCb::LHCbID( 695381u ),
             LHCb::LHCbID( 760530u ),   LHCb::LHCbID( 827553u ),   LHCb::LHCbID( 894654u ),   LHCb::LHCbID( 958802u ),
             LHCb::LHCbID( 1025483u ),  LHCb::LHCbID( 19672248u ), LHCb::LHCbID( 20196475u ), LHCb::LHCbID( 21769274u ),
             LHCb::LHCbID( 22292974u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 28861430u ), LHCb::LHCbID( 30959079u ), LHCb::LHCbID( 33056472u ), LHCb::LHCbID( 35153866u ),
             LHCb::LHCbID( 37251259u ), LHCb::LHCbID( 39348652u ), LHCb::LHCbID( 41446286u ), LHCb::LHCbID( 43544161u ),
             LHCb::LHCbID( 45642022u ), LHCb::LHCbID( 48138985u ), LHCb::LHCbID( 50235595u ), LHCb::LHCbID( 52332205u ),
             LHCb::LHCbID( 54428815u ), LHCb::LHCbID( 263492u ),   LHCb::LHCbID( 328348u ),   LHCb::LHCbID( 394446u ),
             LHCb::LHCbID( 459544u ),   LHCb::LHCbID( 525297u ),   LHCb::LHCbID( 590828u ),   LHCb::LHCbID( 656243u ),
             LHCb::LHCbID( 722034u ),   LHCb::LHCbID( 787115u ),   LHCb::LHCbID( 853290u ),   LHCb::LHCbID( 918055u ),
             LHCb::LHCbID( 984506u ),   LHCb::LHCbID( 19710042u ), LHCb::LHCbID( 20236434u ), LHCb::LHCbID( 21807199u ),
             LHCb::LHCbID( 22331551u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 28496875u ), LHCb::LHCbID( 30596308u ), LHCb::LHCbID( 32695997u ), LHCb::LHCbID( 34795686u ),
             LHCb::LHCbID( 36895119u ), LHCb::LHCbID( 39403259u ), LHCb::LHCbID( 41511912u ), LHCb::LHCbID( 43626699u ),
             LHCb::LHCbID( 45746596u ), LHCb::LHCbID( 47867260u ), LHCb::LHCbID( 49976169u ), LHCb::LHCbID( 52085077u ),
             LHCb::LHCbID( 54193985u ), LHCb::LHCbID( 313543u ),   LHCb::LHCbID( 380734u ),   LHCb::LHCbID( 444422u ),
             LHCb::LHCbID( 512005u ),   LHCb::LHCbID( 578986u ),   LHCb::LHCbID( 643669u ),   LHCb::LHCbID( 709859u ),
             LHCb::LHCbID( 774977u ),   LHCb::LHCbID( 840352u ),   LHCb::LHCbID( 906585u ),   LHCb::LHCbID( 971220u ),
             LHCb::LHCbID( 1037903u ),  LHCb::LHCbID( 19735833u ), LHCb::LHCbID( 20260099u ), LHCb::LHCbID( 21833189u ),
             LHCb::LHCbID( 22357463u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 26755830u ), LHCb::LHCbID( 28851421u ), LHCb::LHCbID( 30947012u ), LHCb::LHCbID( 33042347u ),
             LHCb::LHCbID( 35137938u ), LHCb::LHCbID( 37233785u ), LHCb::LHCbID( 39329375u ), LHCb::LHCbID( 41423404u ),
             LHCb::LHCbID( 43974369u ), LHCb::LHCbID( 44095723u ), LHCb::LHCbID( 46167251u ), LHCb::LHCbID( 48251591u ),
             LHCb::LHCbID( 50335675u ), LHCb::LHCbID( 282453u ),   LHCb::LHCbID( 350195u ),   LHCb::LHCbID( 413553u ),
             LHCb::LHCbID( 481206u ),   LHCb::LHCbID( 545529u ),   LHCb::LHCbID( 611374u ),   LHCb::LHCbID( 676617u ),
             LHCb::LHCbID( 742387u ),   LHCb::LHCbID( 808576u ),   LHCb::LHCbID( 872603u ),   LHCb::LHCbID( 939655u ),
             LHCb::LHCbID( 1003622u ),  LHCb::LHCbID( 19709205u ), LHCb::LHCbID( 20233613u ), LHCb::LHCbID( 21806348u ),
             LHCb::LHCbID( 22330774u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 20100845u ), LHCb::LHCbID( 22198741u ), LHCb::LHCbID( 24296380u ),
                                    LHCb::LHCbID( 26394276u ), LHCb::LHCbID( 28491915u ), LHCb::LHCbID( 30589554u ),
                                    LHCb::LHCbID( 32687194u ), LHCb::LHCbID( 34784833u ), LHCb::LHCbID( 36882728u ),
                                    LHCb::LHCbID( 38980368u ), LHCb::LHCbID( 41164507u ), LHCb::LHCbID( 43260305u ),
                                    LHCb::LHCbID( 45356078u ), LHCb::LHCbID( 301817u ),   LHCb::LHCbID( 367577u ),
                                    LHCb::LHCbID( 367580u ),   LHCb::LHCbID( 433216u ),   LHCb::LHCbID( 498263u ),
                                    LHCb::LHCbID( 566420u ),   LHCb::LHCbID( 631347u ),   LHCb::LHCbID( 697830u ),
                                    LHCb::LHCbID( 762006u ),   LHCb::LHCbID( 830932u ),   LHCb::LHCbID( 962344u ),
                                    LHCb::LHCbID( 19717581u ), LHCb::LHCbID( 20242821u ), LHCb::LHCbID( 21832823u ),
                                    LHCb::LHCbID( 22358061u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 29894899u ), LHCb::LHCbID( 31989728u ), LHCb::LHCbID( 34084301u ), LHCb::LHCbID( 36179131u ),
             LHCb::LHCbID( 38273704u ), LHCb::LHCbID( 38922750u ), LHCb::LHCbID( 41010155u ), LHCb::LHCbID( 43092943u ),
             LHCb::LHCbID( 45170858u ), LHCb::LHCbID( 47249540u ), LHCb::LHCbID( 49336945u ), LHCb::LHCbID( 51424607u ),
             LHCb::LHCbID( 53512012u ), LHCb::LHCbID( 295937u ),   LHCb::LHCbID( 361336u ),   LHCb::LHCbID( 426925u ),
             LHCb::LHCbID( 492482u ),   LHCb::LHCbID( 558290u ),   LHCb::LHCbID( 623259u ),   LHCb::LHCbID( 689268u ),
             LHCb::LHCbID( 754417u ),   LHCb::LHCbID( 820632u ),   LHCb::LHCbID( 885196u ),   LHCb::LHCbID( 951599u ),
             LHCb::LHCbID( 1016362u ),  LHCb::LHCbID( 19696784u ), LHCb::LHCbID( 20220971u ), LHCb::LHCbID( 21793995u ),
             LHCb::LHCbID( 22318170u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 17321191u ), LHCb::LHCbID( 19417283u ), LHCb::LHCbID( 21513120u ),
                                    LHCb::LHCbID( 23608956u ), LHCb::LHCbID( 25704793u ), LHCb::LHCbID( 27800630u ),
                                    LHCb::LHCbID( 29896467u ), LHCb::LHCbID( 32429295u ), LHCb::LHCbID( 34527691u ),
                                    LHCb::LHCbID( 36626088u ), LHCb::LHCbID( 38724485u ), LHCb::LHCbID( 40824126u ),
                                    LHCb::LHCbID( 295785u ),   LHCb::LHCbID( 361461u ),   LHCb::LHCbID( 426680u ),
                                    LHCb::LHCbID( 492700u ),   LHCb::LHCbID( 557904u ),   LHCb::LHCbID( 623613u ),
                                    LHCb::LHCbID( 688782u ),   LHCb::LHCbID( 754870u ),   LHCb::LHCbID( 820022u ),
                                    LHCb::LHCbID( 885767u ),   LHCb::LHCbID( 950886u ),   LHCb::LHCbID( 1017041u ),
                                    LHCb::LHCbID( 19673414u ), LHCb::LHCbID( 20197544u ), LHCb::LHCbID( 21770592u ),
                                    LHCb::LHCbID( 22294700u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 19420393u ), LHCb::LHCbID( 21516743u ), LHCb::LHCbID( 23613093u ),
                                    LHCb::LHCbID( 25709444u ), LHCb::LHCbID( 27805539u ), LHCb::LHCbID( 29901889u ),
                                    LHCb::LHCbID( 31998494u ), LHCb::LHCbID( 34521082u ), LHCb::LHCbID( 36618711u ),
                                    LHCb::LHCbID( 38716595u ), LHCb::LHCbID( 40814956u ), LHCb::LHCbID( 42913793u ),
                                    LHCb::LHCbID( 300515u ),   LHCb::LHCbID( 364812u ),   LHCb::LHCbID( 364815u ),
                                    LHCb::LHCbID( 431646u ),   LHCb::LHCbID( 495780u ),   LHCb::LHCbID( 563984u ),
                                    LHCb::LHCbID( 629715u ),   LHCb::LHCbID( 695106u ),   LHCb::LHCbID( 760680u ),
                                    LHCb::LHCbID( 894688u ),   LHCb::LHCbID( 958495u ),   LHCb::LHCbID( 1025657u ),
                                    LHCb::LHCbID( 19673262u ), LHCb::LHCbID( 20197390u ), LHCb::LHCbID( 21770395u ),
                                    LHCb::LHCbID( 22296035u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 12752102u ), LHCb::LHCbID( 14847933u ), LHCb::LHCbID( 16943764u ),
                                    LHCb::LHCbID( 19039595u ), LHCb::LHCbID( 21135681u ), LHCb::LHCbID( 23231768u ),
                                    LHCb::LHCbID( 25457898u ), LHCb::LHCbID( 27556288u ), LHCb::LHCbID( 29654422u ),
                                    LHCb::LHCbID( 31752556u ), LHCb::LHCbID( 33850946u ), LHCb::LHCbID( 35949080u ),
                                    LHCb::LHCbID( 266763u ),   LHCb::LHCbID( 333191u ),   LHCb::LHCbID( 397415u ),
                                    LHCb::LHCbID( 464728u ),   LHCb::LHCbID( 531748u ),   LHCb::LHCbID( 596572u ),
                                    LHCb::LHCbID( 662379u ),   LHCb::LHCbID( 728139u ),   LHCb::LHCbID( 792683u ),
                                    LHCb::LHCbID( 859907u ),   LHCb::LHCbID( 927416u ),   LHCb::LHCbID( 991477u ),
                                    LHCb::LHCbID( 19667388u ), LHCb::LHCbID( 20192327u ), LHCb::LHCbID( 21763106u ),
                                    LHCb::LHCbID( 22287464u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 30969854u ), LHCb::LHCbID( 33068532u ), LHCb::LHCbID( 35166954u ),
                                    LHCb::LHCbID( 37265377u ), LHCb::LHCbID( 39363799u ), LHCb::LHCbID( 41463491u ),
                                    LHCb::LHCbID( 43564710u ), LHCb::LHCbID( 45667199u ), LHCb::LHCbID( 47769688u ),
                                    LHCb::LHCbID( 49869381u ), LHCb::LHCbID( 51969329u ), LHCb::LHCbID( 54068254u ),
                                    LHCb::LHCbID( 265530u ),   LHCb::LHCbID( 330501u ),   LHCb::LHCbID( 396429u ),
                                    LHCb::LHCbID( 461767u ),   LHCb::LHCbID( 526747u ),   LHCb::LHCbID( 593568u ),
                                    LHCb::LHCbID( 657643u ),   LHCb::LHCbID( 724848u ),   LHCb::LHCbID( 792125u ),
                                    LHCb::LHCbID( 856573u ),   LHCb::LHCbID( 923015u ),   LHCb::LHCbID( 987861u ),
                                    LHCb::LHCbID( 19712025u ), LHCb::LHCbID( 20236335u ), LHCb::LHCbID( 21809209u ),
                                    LHCb::LHCbID( 22333524u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 30581757u ), LHCb::LHCbID( 32678900u ), LHCb::LHCbID( 34776044u ),
                                    LHCb::LHCbID( 36873187u ), LHCb::LHCbID( 38970331u ), LHCb::LHCbID( 41067466u ),
                                    LHCb::LHCbID( 43164593u ), LHCb::LHCbID( 45261967u ), LHCb::LHCbID( 47359339u ),
                                    LHCb::LHCbID( 49456730u ), LHCb::LHCbID( 51554120u ), LHCb::LHCbID( 53651511u ),
                                    LHCb::LHCbID( 315136u ),   LHCb::LHCbID( 379142u ),   LHCb::LHCbID( 446075u ),
                                    LHCb::LHCbID( 510367u ),   LHCb::LHCbID( 576704u ),   LHCb::LHCbID( 641859u ),
                                    LHCb::LHCbID( 707636u ),   LHCb::LHCbID( 773094u ),   LHCb::LHCbID( 838297u ),
                                    LHCb::LHCbID( 904550u ),   LHCb::LHCbID( 969226u ),   LHCb::LHCbID( 1035791u ),
                                    LHCb::LHCbID( 19714445u ), LHCb::LHCbID( 20238710u ), LHCb::LHCbID( 21811681u ),
                                    LHCb::LHCbID( 22335947u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 16269029u ), LHCb::LHCbID( 18363578u ), LHCb::LHCbID( 20457871u ),
                                    LHCb::LHCbID( 22552164u ), LHCb::LHCbID( 24646712u ), LHCb::LHCbID( 26741005u ),
                                    LHCb::LHCbID( 29432057u ), LHCb::LHCbID( 31519215u ), LHCb::LHCbID( 33605348u ),
                                    LHCb::LHCbID( 35691481u ), LHCb::LHCbID( 37777614u ), LHCb::LHCbID( 39852983u ),
                                    LHCb::LHCbID( 283150u ),   LHCb::LHCbID( 349371u ),   LHCb::LHCbID( 414171u ),
                                    LHCb::LHCbID( 480454u ),   LHCb::LHCbID( 546360u ),   LHCb::LHCbID( 610430u ),
                                    LHCb::LHCbID( 677364u ),   LHCb::LHCbID( 741524u ),   LHCb::LHCbID( 809491u ),
                                    LHCb::LHCbID( 875665u ),   LHCb::LHCbID( 940478u ),   LHCb::LHCbID( 1006769u ),
                                    LHCb::LHCbID( 19729528u ), LHCb::LHCbID( 20253920u ), LHCb::LHCbID( 21826652u ),
                                    LHCb::LHCbID( 22351058u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 11015166u ), LHCb::LHCbID( 13762523u ), LHCb::LHCbID( 15847348u ),
                                    LHCb::LHCbID( 17931916u ), LHCb::LHCbID( 20016485u ), LHCb::LHCbID( 22101054u ),
                                    LHCb::LHCbID( 24185623u ), LHCb::LHCbID( 26612717u ), LHCb::LHCbID( 28722886u ),
                                    LHCb::LHCbID( 30832800u ), LHCb::LHCbID( 32942713u ), LHCb::LHCbID( 35052883u ),
                                    LHCb::LHCbID( 317237u ),   LHCb::LHCbID( 380885u ),   LHCb::LHCbID( 447690u ),
                                    LHCb::LHCbID( 512585u ),   LHCb::LHCbID( 578003u ),   LHCb::LHCbID( 644353u ),
                                    LHCb::LHCbID( 712541u ),   LHCb::LHCbID( 776122u ),   LHCb::LHCbID( 842960u ),
                                    LHCb::LHCbID( 907750u ),   LHCb::LHCbID( 973354u ),   LHCb::LHCbID( 1039553u ),
                                    LHCb::LHCbID( 19699005u ), LHCb::LHCbID( 20223135u ), LHCb::LHCbID( 21796321u ),
                                    LHCb::LHCbID( 22320436u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 12731372u ), LHCb::LHCbID( 14818754u ), LHCb::LHCbID( 16906905u ),
                                    LHCb::LHCbID( 18994286u ), LHCb::LHCbID( 21081668u ), LHCb::LHCbID( 23169050u ),
                                    LHCb::LHCbID( 25529580u ), LHCb::LHCbID( 27636162u ), LHCb::LHCbID( 29743257u ),
                                    LHCb::LHCbID( 31850095u ), LHCb::LHCbID( 33956165u ), LHCb::LHCbID( 36063003u ),
                                    LHCb::LHCbID( 270243u ),   LHCb::LHCbID( 333749u ),   LHCb::LHCbID( 400646u ),
                                    LHCb::LHCbID( 465516u ),   LHCb::LHCbID( 530497u ),   LHCb::LHCbID( 597729u ),
                                    LHCb::LHCbID( 664988u ),   LHCb::LHCbID( 729542u ),   LHCb::LHCbID( 794973u ),
                                    LHCb::LHCbID( 861612u ),   LHCb::LHCbID( 929441u ),   LHCb::LHCbID( 993459u ),
                                    LHCb::LHCbID( 19683737u ), LHCb::LHCbID( 20230186u ), LHCb::LHCbID( 21780714u ),
                                    LHCb::LHCbID( 22305151u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 21134062u ), LHCb::LHCbID( 23228629u ), LHCb::LHCbID( 25323452u ),
                                    LHCb::LHCbID( 27418275u ), LHCb::LHCbID( 29512842u ), LHCb::LHCbID( 31607664u ),
                                    LHCb::LHCbID( 33702231u ), LHCb::LHCbID( 35797054u ), LHCb::LHCbID( 37891621u ),
                                    LHCb::LHCbID( 40162031u ), LHCb::LHCbID( 42266532u ), LHCb::LHCbID( 44372543u ),
                                    LHCb::LHCbID( 264295u ),   LHCb::LHCbID( 331605u ),   LHCb::LHCbID( 399160u ),
                                    LHCb::LHCbID( 463012u ),   LHCb::LHCbID( 529516u ),   LHCb::LHCbID( 594752u ),
                                    LHCb::LHCbID( 660244u ),   LHCb::LHCbID( 726207u ),   LHCb::LHCbID( 790670u ),
                                    LHCb::LHCbID( 857871u ),   LHCb::LHCbID( 925504u ),   LHCb::LHCbID( 989323u ),
                                    LHCb::LHCbID( 19686788u ), LHCb::LHCbID( 20211185u ), LHCb::LHCbID( 21783732u ),
                                    LHCb::LHCbID( 22308134u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 29888500u ), LHCb::LHCbID( 31983337u ), LHCb::LHCbID( 34742521u ), LHCb::LHCbID( 36836593u ),
             LHCb::LHCbID( 38930664u ), LHCb::LHCbID( 41022423u ), LHCb::LHCbID( 43110845u ), LHCb::LHCbID( 45196442u ),
             LHCb::LHCbID( 47281528u ), LHCb::LHCbID( 49372776u ), LHCb::LHCbID( 51463769u ), LHCb::LHCbID( 53554761u ),
             LHCb::LHCbID( 299970u ),   LHCb::LHCbID( 365434u ),   LHCb::LHCbID( 431212u ),   LHCb::LHCbID( 496293u ),
             LHCb::LHCbID( 563557u ),   LHCb::LHCbID( 630223u ),   LHCb::LHCbID( 694797u ),   LHCb::LHCbID( 827100u ),
             LHCb::LHCbID( 890964u ),   LHCb::LHCbID( 958336u ),   LHCb::LHCbID( 1025925u ),  LHCb::LHCbID( 19693853u ),
             LHCb::LHCbID( 20218068u ), LHCb::LHCbID( 21791031u ), LHCb::LHCbID( 22315237u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 16256483u ), LHCb::LHCbID( 19000804u ), LHCb::LHCbID( 21086663u ), LHCb::LHCbID( 23172523u ),
             LHCb::LHCbID( 25258382u ), LHCb::LHCbID( 27344242u ), LHCb::LHCbID( 29429845u ), LHCb::LHCbID( 31516473u ),
             LHCb::LHCbID( 33602332u ), LHCb::LHCbID( 36069628u ), LHCb::LHCbID( 38178015u ), LHCb::LHCbID( 40297381u ),
             LHCb::LHCbID( 265030u ),   LHCb::LHCbID( 330721u ),   LHCb::LHCbID( 395608u ),   LHCb::LHCbID( 462311u ),
             LHCb::LHCbID( 530207u ),   LHCb::LHCbID( 660755u ),   LHCb::LHCbID( 725529u ),   LHCb::LHCbID( 791320u ),
             LHCb::LHCbID( 857050u ),   LHCb::LHCbID( 921847u ),   LHCb::LHCbID( 988708u ),   LHCb::LHCbID( 19707141u ),
             LHCb::LHCbID( 20231559u ), LHCb::LHCbID( 21803149u ), LHCb::LHCbID( 22327580u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 30565111u ), LHCb::LHCbID( 32660460u ), LHCb::LHCbID( 34755552u ), LHCb::LHCbID( 36850900u ),
             LHCb::LHCbID( 38945993u ), LHCb::LHCbID( 41039537u ), LHCb::LHCbID( 43130766u ), LHCb::LHCbID( 45219934u ),
             LHCb::LHCbID( 47310127u ), LHCb::LHCbID( 49403159u ), LHCb::LHCbID( 51718140u ), LHCb::LHCbID( 53819364u ),
             LHCb::LHCbID( 311585u ),   LHCb::LHCbID( 378541u ),   LHCb::LHCbID( 509789u ),   LHCb::LHCbID( 577387u ),
             LHCb::LHCbID( 641115u ),   LHCb::LHCbID( 708288u ),   LHCb::LHCbID( 772375u ),   LHCb::LHCbID( 839096u ),
             LHCb::LHCbID( 903687u ),   LHCb::LHCbID( 969988u ),   LHCb::LHCbID( 1034959u ),  LHCb::LHCbID( 19716286u ),
             LHCb::LHCbID( 20240510u ), LHCb::LHCbID( 21813542u ), LHCb::LHCbID( 22337761u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19044841u ), LHCb::LHCbID( 21141191u ), LHCb::LHCbID( 23237797u ), LHCb::LHCbID( 25334147u ),
             LHCb::LHCbID( 27430497u ), LHCb::LHCbID( 29527103u ), LHCb::LHCbID( 31623453u ), LHCb::LHCbID( 33843191u ),
             LHCb::LHCbID( 35941077u ), LHCb::LHCbID( 38038963u ), LHCb::LHCbID( 40137584u ), LHCb::LHCbID( 42236682u ),
             LHCb::LHCbID( 280799u ),   LHCb::LHCbID( 347702u ),   LHCb::LHCbID( 411879u ),   LHCb::LHCbID( 478745u ),
             LHCb::LHCbID( 543891u ),   LHCb::LHCbID( 608882u ),   LHCb::LHCbID( 674962u ),   LHCb::LHCbID( 739927u ),
             LHCb::LHCbID( 806919u ),   LHCb::LHCbID( 874226u ),   LHCb::LHCbID( 1005277u ),  LHCb::LHCbID( 19668319u ),
             LHCb::LHCbID( 20192720u ), LHCb::LHCbID( 21765223u ), LHCb::LHCbID( 22289629u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 14835957u ), LHCb::LHCbID( 16925383u ), LHCb::LHCbID( 19014809u ),
                                    LHCb::LHCbID( 21104235u ), LHCb::LHCbID( 23194429u ), LHCb::LHCbID( 25283855u ),
                                    LHCb::LHCbID( 27607005u ), LHCb::LHCbID( 29711791u ), LHCb::LHCbID( 31816577u ),
                                    LHCb::LHCbID( 33921363u ), LHCb::LHCbID( 36026405u ), LHCb::LHCbID( 262226u ),
                                    LHCb::LHCbID( 329353u ),   LHCb::LHCbID( 397027u ),   LHCb::LHCbID( 460807u ),
                                    LHCb::LHCbID( 528079u ),   LHCb::LHCbID( 658730u ),   LHCb::LHCbID( 658733u ),
                                    LHCb::LHCbID( 723365u ),   LHCb::LHCbID( 789836u ),   LHCb::LHCbID( 854359u ),
                                    LHCb::LHCbID( 920461u ),   LHCb::LHCbID( 985897u ),   LHCb::LHCbID( 19684541u ),
                                    LHCb::LHCbID( 20207931u ), LHCb::LHCbID( 21762560u ), LHCb::LHCbID( 21780486u ),
                                    LHCb::LHCbID( 22304911u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 11041790u ), LHCb::LHCbID( 13142733u ), LHCb::LHCbID( 15243932u ),
                                    LHCb::LHCbID( 17345131u ), LHCb::LHCbID( 19446329u ), LHCb::LHCbID( 21547528u ),
                                    LHCb::LHCbID( 23996119u ), LHCb::LHCbID( 26089125u ), LHCb::LHCbID( 28182132u ),
                                    LHCb::LHCbID( 30275907u ), LHCb::LHCbID( 32368914u ), LHCb::LHCbID( 295285u ),
                                    LHCb::LHCbID( 362027u ),   LHCb::LHCbID( 426128u ),   LHCb::LHCbID( 493323u ),
                                    LHCb::LHCbID( 575412u ),   LHCb::LHCbID( 624633u ),   LHCb::LHCbID( 706240u ),
                                    LHCb::LHCbID( 770261u ),   LHCb::LHCbID( 770264u ),   LHCb::LHCbID( 837099u ),
                                    LHCb::LHCbID( 901536u ),   LHCb::LHCbID( 967914u ),   LHCb::LHCbID( 1032868u ),
                                    LHCb::LHCbID( 19610875u ), LHCb::LHCbID( 20135087u ), LHCb::LHCbID( 21722299u ),
                                    LHCb::LHCbID( 22246496u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 13127125u ), LHCb::LHCbID( 15222951u ), LHCb::LHCbID( 17318776u ),
                                    LHCb::LHCbID( 19414858u ), LHCb::LHCbID( 21510683u ), LHCb::LHCbID( 24037868u ),
                                    LHCb::LHCbID( 26136254u ), LHCb::LHCbID( 28234383u ), LHCb::LHCbID( 30332512u ),
                                    LHCb::LHCbID( 32430897u ), LHCb::LHCbID( 34529026u ), LHCb::LHCbID( 298714u ),
                                    LHCb::LHCbID( 362520u ),   LHCb::LHCbID( 429683u ),   LHCb::LHCbID( 493662u ),
                                    LHCb::LHCbID( 561539u ),   LHCb::LHCbID( 628059u ),   LHCb::LHCbID( 692488u ),
                                    LHCb::LHCbID( 759214u ),   LHCb::LHCbID( 824348u ),   LHCb::LHCbID( 889521u ),
                                    LHCb::LHCbID( 955278u ),   LHCb::LHCbID( 1020693u ),  LHCb::LHCbID( 19674426u ),
                                    LHCb::LHCbID( 19675295u ), LHCb::LHCbID( 20199480u ), LHCb::LHCbID( 21772451u ),
                                    LHCb::LHCbID( 22296622u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 31992053u ), LHCb::LHCbID( 34087657u ), LHCb::LHCbID( 36183260u ), LHCb::LHCbID( 38278608u ),
             LHCb::LHCbID( 40372409u ), LHCb::LHCbID( 43112945u ), LHCb::LHCbID( 45197783u ), LHCb::LHCbID( 47282621u ),
             LHCb::LHCbID( 49373615u ), LHCb::LHCbID( 51464610u ), LHCb::LHCbID( 53555349u ), LHCb::LHCbID( 312032u ),
             LHCb::LHCbID( 378096u ),   LHCb::LHCbID( 442950u ),   LHCb::LHCbID( 509332u ),   LHCb::LHCbID( 573748u ),
             LHCb::LHCbID( 640659u ),   LHCb::LHCbID( 704655u ),   LHCb::LHCbID( 771910u ),   LHCb::LHCbID( 839602u ),
             LHCb::LHCbID( 903183u ),   LHCb::LHCbID( 970501u ),   LHCb::LHCbID( 1034443u ),  LHCb::LHCbID( 19693856u ),
             LHCb::LHCbID( 20218078u ), LHCb::LHCbID( 21791062u ), LHCb::LHCbID( 22315275u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19424660u ), LHCb::LHCbID( 21522804u ), LHCb::LHCbID( 23621204u ), LHCb::LHCbID( 25719348u ),
             LHCb::LHCbID( 27817749u ), LHCb::LHCbID( 30311668u ), LHCb::LHCbID( 32407508u ), LHCb::LHCbID( 34503605u ),
             LHCb::LHCbID( 36599445u ), LHCb::LHCbID( 38695541u ), LHCb::LHCbID( 40790326u ), LHCb::LHCbID( 296113u ),
             LHCb::LHCbID( 361182u ),   LHCb::LHCbID( 427069u ),   LHCb::LHCbID( 492360u ),   LHCb::LHCbID( 558272u ),
             LHCb::LHCbID( 623300u ),   LHCb::LHCbID( 754491u ),   LHCb::LHCbID( 820427u ),   LHCb::LHCbID( 885424u ),
             LHCb::LHCbID( 951359u ),   LHCb::LHCbID( 1016626u ),  LHCb::LHCbID( 19673164u ), LHCb::LHCbID( 20198869u ),
             LHCb::LHCbID( 21770271u ), LHCb::LHCbID( 22295956u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22569715u ), LHCb::LHCbID( 24667351u ), LHCb::LHCbID( 26764731u ), LHCb::LHCbID( 28862112u ),
             LHCb::LHCbID( 30959748u ), LHCb::LHCbID( 35154767u ), LHCb::LHCbID( 37252147u ), LHCb::LHCbID( 39349784u ),
             LHCb::LHCbID( 41848544u ), LHCb::LHCbID( 43944335u ), LHCb::LHCbID( 46039842u ), LHCb::LHCbID( 264020u ),
             LHCb::LHCbID( 394930u ),   LHCb::LHCbID( 459007u ),   LHCb::LHCbID( 525859u ),   LHCb::LHCbID( 590209u ),
             LHCb::LHCbID( 656757u ),   LHCb::LHCbID( 721462u ),   LHCb::LHCbID( 787710u ),   LHCb::LHCbID( 852639u ),
             LHCb::LHCbID( 918595u ),   LHCb::LHCbID( 983902u ),   LHCb::LHCbID( 19732566u ), LHCb::LHCbID( 20255934u ),
             LHCb::LHCbID( 21828712u ), LHCb::LHCbID( 22353118u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 24667842u ), LHCb::LHCbID( 26765227u ), LHCb::LHCbID( 28862612u ), LHCb::LHCbID( 30959998u ),
             LHCb::LHCbID( 33057383u ), LHCb::LHCbID( 35154767u ), LHCb::LHCbID( 37251896u ), LHCb::LHCbID( 39349281u ),
             LHCb::LHCbID( 41849328u ), LHCb::LHCbID( 43945897u ), LHCb::LHCbID( 46042698u ), LHCb::LHCbID( 266955u ),
             LHCb::LHCbID( 333179u ),   LHCb::LHCbID( 464705u ),   LHCb::LHCbID( 531326u ),   LHCb::LHCbID( 597186u ),
             LHCb::LHCbID( 661970u ),   LHCb::LHCbID( 728743u ),   LHCb::LHCbID( 795774u ),   LHCb::LHCbID( 861113u ),
             LHCb::LHCbID( 926413u ),   LHCb::LHCbID( 992693u ),   LHCb::LHCbID( 19710307u ), LHCb::LHCbID( 20234670u ),
             LHCb::LHCbID( 21807430u ), LHCb::LHCbID( 22331807u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 13138647u ), LHCb::LHCbID( 15239339u ), LHCb::LHCbID( 17340287u ), LHCb::LHCbID( 19441235u ),
             LHCb::LHCbID( 21541927u ), LHCb::LHCbID( 24001787u ), LHCb::LHCbID( 26095311u ), LHCb::LHCbID( 28188579u ),
             LHCb::LHCbID( 30282103u ), LHCb::LHCbID( 32375371u ), LHCb::LHCbID( 34469663u ), LHCb::LHCbID( 298815u ),
             LHCb::LHCbID( 362523u ),   LHCb::LHCbID( 429853u ),   LHCb::LHCbID( 493597u ),   LHCb::LHCbID( 561517u ),
             LHCb::LHCbID( 628195u ),   LHCb::LHCbID( 824206u ),   LHCb::LHCbID( 889785u ),   LHCb::LHCbID( 955222u ),
             LHCb::LHCbID( 1020872u ),  LHCb::LHCbID( 19610975u ), LHCb::LHCbID( 20135193u ), LHCb::LHCbID( 21722393u ),
             LHCb::LHCbID( 22246596u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 15890172u ), LHCb::LHCbID( 17981385u ), LHCb::LHCbID( 20072085u ), LHCb::LHCbID( 22163040u ),
             LHCb::LHCbID( 24253996u ), LHCb::LHCbID( 26538484u ), LHCb::LHCbID( 28641216u ), LHCb::LHCbID( 30744716u ),
             LHCb::LHCbID( 32847961u ), LHCb::LHCbID( 34951461u ), LHCb::LHCbID( 297483u ),   LHCb::LHCbID( 363625u ),
             LHCb::LHCbID( 428415u ),   LHCb::LHCbID( 494811u ),   LHCb::LHCbID( 560633u ),   LHCb::LHCbID( 624737u ),
             LHCb::LHCbID( 691539u ),   LHCb::LHCbID( 755941u ),   LHCb::LHCbID( 823707u ),   LHCb::LHCbID( 890024u ),
             LHCb::LHCbID( 954592u ),   LHCb::LHCbID( 1021244u ),  LHCb::LHCbID( 19720704u ), LHCb::LHCbID( 19738630u ),
             LHCb::LHCbID( 20245891u ), LHCb::LHCbID( 21836999u ), LHCb::LHCbID( 22361153u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19424660u ), LHCb::LHCbID( 21520494u ), LHCb::LHCbID( 23616584u ), LHCb::LHCbID( 25712674u ),
             LHCb::LHCbID( 28224508u ), LHCb::LHCbID( 30322646u ), LHCb::LHCbID( 32420784u ), LHCb::LHCbID( 34518922u ),
             LHCb::LHCbID( 36617060u ), LHCb::LHCbID( 38715198u ), LHCb::LHCbID( 297474u ),   LHCb::LHCbID( 363819u ),
             LHCb::LHCbID( 428436u ),   LHCb::LHCbID( 494980u ),   LHCb::LHCbID( 560044u ),   LHCb::LHCbID( 625523u ),
             LHCb::LHCbID( 690990u ),   LHCb::LHCbID( 756697u ),   LHCb::LHCbID( 822587u ),   LHCb::LHCbID( 887253u ),
             LHCb::LHCbID( 953516u ),   LHCb::LHCbID( 1018440u ),  LHCb::LHCbID( 19673232u ), LHCb::LHCbID( 20198888u ),
             LHCb::LHCbID( 21770395u ), LHCb::LHCbID( 22296025u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 16286203u ), LHCb::LHCbID( 18388424u ), LHCb::LHCbID( 20490645u ), LHCb::LHCbID( 22592610u ),
             LHCb::LHCbID( 24694831u ), LHCb::LHCbID( 27139580u ), LHCb::LHCbID( 29231561u ), LHCb::LHCbID( 31324310u ),
             LHCb::LHCbID( 33416547u ), LHCb::LHCbID( 35508528u ), LHCb::LHCbID( 278754u ),   LHCb::LHCbID( 345810u ),
             LHCb::LHCbID( 477113u ),   LHCb::LHCbID( 526017u ),   LHCb::LHCbID( 590058u ),   LHCb::LHCbID( 656840u ),
             LHCb::LHCbID( 656843u ),   LHCb::LHCbID( 721380u ),   LHCb::LHCbID( 787610u ),   LHCb::LHCbID( 852741u ),
             LHCb::LHCbID( 918423u ),   LHCb::LHCbID( 984080u ),   LHCb::LHCbID( 19798360u ), LHCb::LHCbID( 20322720u ),
             LHCb::LHCbID( 21895594u ), LHCb::LHCbID( 22433801u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 23243498u ), LHCb::LHCbID( 25341131u ), LHCb::LHCbID( 27438765u ), LHCb::LHCbID( 29536398u ),
             LHCb::LHCbID( 31633776u ), LHCb::LHCbID( 33731409u ), LHCb::LHCbID( 35828787u ), LHCb::LHCbID( 37926164u ),
             LHCb::LHCbID( 40121811u ), LHCb::LHCbID( 42217847u ), LHCb::LHCbID( 267921u ),   LHCb::LHCbID( 332089u ),
             LHCb::LHCbID( 398696u ),   LHCb::LHCbID( 463492u ),   LHCb::LHCbID( 529062u ),   LHCb::LHCbID( 595223u ),
             LHCb::LHCbID( 659823u ),   LHCb::LHCbID( 726650u ),   LHCb::LHCbID( 794374u ),   LHCb::LHCbID( 858282u ),
             LHCb::LHCbID( 925124u ),   LHCb::LHCbID( 989726u ),   LHCb::LHCbID( 19668222u ), LHCb::LHCbID( 20192591u ),
             LHCb::LHCbID( 21764594u ), LHCb::LHCbID( 22289472u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 34112509u ), LHCb::LHCbID( 36210677u ), LHCb::LHCbID( 38308845u ), LHCb::LHCbID( 40407772u ),
             LHCb::LHCbID( 42507715u ), LHCb::LHCbID( 44608418u ), LHCb::LHCbID( 46709376u ), LHCb::LHCbID( 48808304u ),
             LHCb::LHCbID( 50907487u ), LHCb::LHCbID( 53006414u ), LHCb::LHCbID( 296033u ),   LHCb::LHCbID( 361340u ),
             LHCb::LHCbID( 427120u ),   LHCb::LHCbID( 492387u ),   LHCb::LHCbID( 558386u ),   LHCb::LHCbID( 623273u ),
             LHCb::LHCbID( 689471u ),   LHCb::LHCbID( 754319u ),   LHCb::LHCbID( 820729u ),   LHCb::LHCbID( 885220u ),
             LHCb::LHCbID( 951812u ),   LHCb::LHCbID( 1016265u ),  LHCb::LHCbID( 19691546u ), LHCb::LHCbID( 20215809u ),
             LHCb::LHCbID( 21790196u ), LHCb::LHCbID( 22314455u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 26782178u ), LHCb::LHCbID( 28884164u ), LHCb::LHCbID( 30986150u ), LHCb::LHCbID( 33088136u ),
             LHCb::LHCbID( 35190122u ), LHCb::LHCbID( 37291340u ), LHCb::LHCbID( 39393326u ), LHCb::LHCbID( 41796338u ),
             LHCb::LHCbID( 43879065u ), LHCb::LHCbID( 45957154u ), LHCb::LHCbID( 264110u ),   LHCb::LHCbID( 327755u ),
             LHCb::LHCbID( 395055u ),   LHCb::LHCbID( 458955u ),   LHCb::LHCbID( 525809u ),   LHCb::LHCbID( 590340u ),
             LHCb::LHCbID( 656746u ),   LHCb::LHCbID( 721551u ),   LHCb::LHCbID( 787522u ),   LHCb::LHCbID( 852910u ),
             LHCb::LHCbID( 918456u ),   LHCb::LHCbID( 984129u ),   LHCb::LHCbID( 19733765u ), LHCb::LHCbID( 20258115u ),
             LHCb::LHCbID( 21831064u ), LHCb::LHCbID( 22355431u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 34757630u ), LHCb::LHCbID( 36852981u ), LHCb::LHCbID( 38948075u ), LHCb::LHCbID( 41041623u ),
             LHCb::LHCbID( 43133114u ), LHCb::LHCbID( 45222803u ), LHCb::LHCbID( 47313004u ), LHCb::LHCbID( 49406297u ),
             LHCb::LHCbID( 51499589u ), LHCb::LHCbID( 53593137u ), LHCb::LHCbID( 295419u ),   LHCb::LHCbID( 361903u ),
             LHCb::LHCbID( 426446u ),   LHCb::LHCbID( 493014u ),   LHCb::LHCbID( 557727u ),   LHCb::LHCbID( 623875u ),
             LHCb::LHCbID( 688749u ),   LHCb::LHCbID( 754992u ),   LHCb::LHCbID( 820029u ),   LHCb::LHCbID( 885856u ),
             LHCb::LHCbID( 951043u ),   LHCb::LHCbID( 1016975u ),  LHCb::LHCbID( 19716182u ), LHCb::LHCbID( 20240412u ),
             LHCb::LHCbID( 21813404u ), LHCb::LHCbID( 22337628u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 27440638u ), LHCb::LHCbID( 29538543u ), LHCb::LHCbID( 31636448u ), LHCb::LHCbID( 33734353u ),
             LHCb::LHCbID( 35832258u ), LHCb::LHCbID( 37930163u ), LHCb::LHCbID( 40028565u ), LHCb::LHCbID( 42127976u ),
             LHCb::LHCbID( 44227884u ), LHCb::LHCbID( 46401005u ), LHCb::LHCbID( 262455u ),   LHCb::LHCbID( 329388u ),
             LHCb::LHCbID( 393419u ),   LHCb::LHCbID( 460581u ),   LHCb::LHCbID( 591860u ),   LHCb::LHCbID( 659344u ),
             LHCb::LHCbID( 723037u ),   LHCb::LHCbID( 790215u ),   LHCb::LHCbID( 854288u ),   LHCb::LHCbID( 921171u ),
             LHCb::LHCbID( 985496u ),   LHCb::LHCbID( 19689790u ), LHCb::LHCbID( 20212061u ), LHCb::LHCbID( 21786814u ),
             LHCb::LHCbID( 22309082u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 35140598u ), LHCb::LHCbID( 37236717u ), LHCb::LHCbID( 39332836u ), LHCb::LHCbID( 41428177u ),
             LHCb::LHCbID( 43522229u ), LHCb::LHCbID( 45615504u ), LHCb::LHCbID( 46250492u ), LHCb::LHCbID( 48343028u ),
             LHCb::LHCbID( 50435308u ), LHCb::LHCbID( 52527845u ), LHCb::LHCbID( 263840u ),   LHCb::LHCbID( 327989u ),
             LHCb::LHCbID( 394830u ),   LHCb::LHCbID( 459144u ),   LHCb::LHCbID( 525833u ),   LHCb::LHCbID( 590277u ),
             LHCb::LHCbID( 656818u ),   LHCb::LHCbID( 721440u ),   LHCb::LHCbID( 852559u ),   LHCb::LHCbID( 918814u ),
             LHCb::LHCbID( 983728u ),   LHCb::LHCbID( 19711186u ), LHCb::LHCbID( 20237570u ), LHCb::LHCbID( 21808308u ),
             LHCb::LHCbID( 22332649u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 32638411u ), LHCb::LHCbID( 36826288u ), LHCb::LHCbID( 38919332u ), LHCb::LHCbID( 41008779u ),
             LHCb::LHCbID( 43094372u ), LHCb::LHCbID( 45176114u ), LHCb::LHCbID( 47568381u ), LHCb::LHCbID( 49672931u ),
             LHCb::LHCbID( 51777226u ), LHCb::LHCbID( 53882032u ), LHCb::LHCbID( 378809u ),   LHCb::LHCbID( 446264u ),
             LHCb::LHCbID( 510095u ),   LHCb::LHCbID( 576959u ),   LHCb::LHCbID( 641518u ),   LHCb::LHCbID( 707796u ),
             LHCb::LHCbID( 772846u ),   LHCb::LHCbID( 838531u ),   LHCb::LHCbID( 904221u ),   LHCb::LHCbID( 969358u ),
             LHCb::LHCbID( 1035563u ),  LHCb::LHCbID( 19697114u ), LHCb::LHCbID( 20221305u ), LHCb::LHCbID( 21816408u ),
             LHCb::LHCbID( 22318561u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 32638411u ), LHCb::LHCbID( 36825777u ), LHCb::LHCbID( 38919332u ), LHCb::LHCbID( 41009288u ),
             LHCb::LHCbID( 43095136u ), LHCb::LHCbID( 45177130u ), LHCb::LHCbID( 47566578u ), LHCb::LHCbID( 49671127u ),
             LHCb::LHCbID( 51774908u ), LHCb::LHCbID( 53879457u ), LHCb::LHCbID( 378809u ),   LHCb::LHCbID( 446264u ),
             LHCb::LHCbID( 510095u ),   LHCb::LHCbID( 576959u ),   LHCb::LHCbID( 641518u ),   LHCb::LHCbID( 707796u ),
             LHCb::LHCbID( 772846u ),   LHCb::LHCbID( 838531u ),   LHCb::LHCbID( 904221u ),   LHCb::LHCbID( 969358u ),
             LHCb::LHCbID( 1035563u ),  LHCb::LHCbID( 19697114u ), LHCb::LHCbID( 20221305u ), LHCb::LHCbID( 21816408u ),
             LHCb::LHCbID( 22318561u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 23253751u ), LHCb::LHCbID( 25355728u ), LHCb::LHCbID( 27457704u ), LHCb::LHCbID( 29964019u ),
             LHCb::LHCbID( 32071137u ), LHCb::LHCbID( 34178510u ), LHCb::LHCbID( 36285627u ), LHCb::LHCbID( 38393001u ),
             LHCb::LHCbID( 40509827u ), LHCb::LHCbID( 42637644u ), LHCb::LHCbID( 284674u ),   LHCb::LHCbID( 351952u ),
             LHCb::LHCbID( 416119u ),   LHCb::LHCbID( 549432u ),   LHCb::LHCbID( 615569u ),   LHCb::LHCbID( 680892u ),
             LHCb::LHCbID( 746178u ),   LHCb::LHCbID( 814104u ),   LHCb::LHCbID( 879278u ),   LHCb::LHCbID( 945566u ),
             LHCb::LHCbID( 1009867u ),  LHCb::LHCbID( 19609052u ), LHCb::LHCbID( 20133362u ), LHCb::LHCbID( 21720407u ),
             LHCb::LHCbID( 22244712u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 17992399u ), LHCb::LHCbID( 20087197u ), LHCb::LHCbID( 22181995u ), LHCb::LHCbID( 24276793u ),
             LHCb::LHCbID( 26371848u ), LHCb::LHCbID( 28610514u ), LHCb::LHCbID( 30709920u ), LHCb::LHCbID( 32809326u ),
             LHCb::LHCbID( 34908476u ), LHCb::LHCbID( 37007883u ), LHCb::LHCbID( 297872u ),   LHCb::LHCbID( 363287u ),
             LHCb::LHCbID( 428923u ),   LHCb::LHCbID( 494354u ),   LHCb::LHCbID( 561242u ),   LHCb::LHCbID( 628282u ),
             LHCb::LHCbID( 692278u ),   LHCb::LHCbID( 759354u ),   LHCb::LHCbID( 824578u ),   LHCb::LHCbID( 889217u ),
             LHCb::LHCbID( 1020297u ),  LHCb::LHCbID( 19738865u ), LHCb::LHCbID( 20263063u ), LHCb::LHCbID( 21836197u ),
             LHCb::LHCbID( 22360390u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 24293617u ), LHCb::LHCbID( 26391770u ), LHCb::LHCbID( 28489668u ),
                                    LHCb::LHCbID( 30587565u ), LHCb::LHCbID( 32685463u ), LHCb::LHCbID( 34783361u ),
                                    LHCb::LHCbID( 36881258u ), LHCb::LHCbID( 38979156u ), LHCb::LHCbID( 41077800u ),
                                    LHCb::LHCbID( 43259875u ), LHCb::LHCbID( 296345u ),   LHCb::LHCbID( 360931u ),
                                    LHCb::LHCbID( 427448u ),   LHCb::LHCbID( 491959u ),   LHCb::LHCbID( 690192u ),
                                    LHCb::LHCbID( 757586u ),   LHCb::LHCbID( 821840u ),   LHCb::LHCbID( 888094u ),
                                    LHCb::LHCbID( 952934u ),   LHCb::LHCbID( 1019123u ),  LHCb::LHCbID( 19717530u ),
                                    LHCb::LHCbID( 20241764u ), LHCb::LHCbID( 21832772u ), LHCb::LHCbID( 22357007u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 13785844u ), LHCb::LHCbID( 15872440u ), LHCb::LHCbID( 17959036u ), LHCb::LHCbID( 20046401u ),
             LHCb::LHCbID( 22133254u ), LHCb::LHCbID( 24468678u ), LHCb::LHCbID( 26576267u ), LHCb::LHCbID( 28683600u ),
             LHCb::LHCbID( 30790932u ), LHCb::LHCbID( 298707u ),   LHCb::LHCbID( 366389u ),   LHCb::LHCbID( 429585u ),
             LHCb::LHCbID( 497622u ),   LHCb::LHCbID( 562127u ),   LHCb::LHCbID( 627202u ),   LHCb::LHCbID( 692971u ),
             LHCb::LHCbID( 758459u ),   LHCb::LHCbID( 825470u ),   LHCb::LHCbID( 892216u ),   LHCb::LHCbID( 956303u ),
             LHCb::LHCbID( 1023495u ),  LHCb::LHCbID( 19721565u ), LHCb::LHCbID( 20245682u ), LHCb::LHCbID( 20246706u ),
             LHCb::LHCbID( 21837885u ), LHCb::LHCbID( 22344062u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 25735651u ), LHCb::LHCbID( 27838657u ), LHCb::LHCbID( 29941663u ), LHCb::LHCbID( 32044669u ),
             LHCb::LHCbID( 34147163u ), LHCb::LHCbID( 36250169u ), LHCb::LHCbID( 38353175u ), LHCb::LHCbID( 40736979u ),
             LHCb::LHCbID( 42816109u ), LHCb::LHCbID( 299625u ),   LHCb::LHCbID( 365868u ),   LHCb::LHCbID( 430789u ),
             LHCb::LHCbID( 496809u ),   LHCb::LHCbID( 562615u ),   LHCb::LHCbID( 627163u ),   LHCb::LHCbID( 693776u ),
             LHCb::LHCbID( 758101u ),   LHCb::LHCbID( 825534u ),   LHCb::LHCbID( 892626u ),   LHCb::LHCbID( 956690u ),
             LHCb::LHCbID( 1023563u ),  LHCb::LHCbID( 19610023u ), LHCb::LHCbID( 20134277u ), LHCb::LHCbID( 21721404u ),
             LHCb::LHCbID( 22245646u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 24250606u ), LHCb::LHCbID( 26335434u ), LHCb::LHCbID( 28419494u ), LHCb::LHCbID( 30503553u ),
             LHCb::LHCbID( 32587613u ), LHCb::LHCbID( 34671674u ), LHCb::LHCbID( 36756246u ), LHCb::LHCbID( 39208686u ),
             LHCb::LHCbID( 41331878u ), LHCb::LHCbID( 298946u ),   LHCb::LHCbID( 366231u ),   LHCb::LHCbID( 429828u ),
             LHCb::LHCbID( 497456u ),   LHCb::LHCbID( 562107u ),   LHCb::LHCbID( 627305u ),   LHCb::LHCbID( 692960u ),
             LHCb::LHCbID( 758552u ),   LHCb::LHCbID( 825233u ),   LHCb::LHCbID( 892557u ),   LHCb::LHCbID( 956056u ),
             LHCb::LHCbID( 1023829u ),  LHCb::LHCbID( 19698893u ), LHCb::LHCbID( 20223030u ), LHCb::LHCbID( 21796163u ),
             LHCb::LHCbID( 22320283u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 14851290u ), LHCb::LHCbID( 16947360u ), LHCb::LHCbID( 19043687u ), LHCb::LHCbID( 21140013u ),
             LHCb::LHCbID( 23355119u ), LHCb::LHCbID( 25452982u ), LHCb::LHCbID( 27551100u ), LHCb::LHCbID( 29648963u ),
             LHCb::LHCbID( 31746825u ), LHCb::LHCbID( 264120u ),   LHCb::LHCbID( 345913u ),   LHCb::LHCbID( 395023u ),
             LHCb::LHCbID( 477148u ),   LHCb::LHCbID( 541047u ),   LHCb::LHCbID( 607562u ),   LHCb::LHCbID( 671933u ),
             LHCb::LHCbID( 738815u ),   LHCb::LHCbID( 803645u ),   LHCb::LHCbID( 869232u ),   LHCb::LHCbID( 934512u ),
             LHCb::LHCbID( 1000500u ),  LHCb::LHCbID( 19606994u ), LHCb::LHCbID( 20190256u ), LHCb::LHCbID( 21718258u ),
             LHCb::LHCbID( 22242638u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 23206874u ), LHCb::LHCbID( 25291175u ), LHCb::LHCbID( 27374709u ), LHCb::LHCbID( 29458242u ),
             LHCb::LHCbID( 31541519u ), LHCb::LHCbID( 33938391u ), LHCb::LHCbID( 36048292u ), LHCb::LHCbID( 38158962u ),
             LHCb::LHCbID( 40283404u ), LHCb::LHCbID( 281415u ),   LHCb::LHCbID( 346817u ),   LHCb::LHCbID( 412187u ),
             LHCb::LHCbID( 478164u ),   LHCb::LHCbID( 544368u ),   LHCb::LHCbID( 612233u ),   LHCb::LHCbID( 675102u ),
             LHCb::LHCbID( 739492u ),   LHCb::LHCbID( 807252u ),   LHCb::LHCbID( 873583u ),   LHCb::LHCbID( 937970u ),
             LHCb::LHCbID( 1004992u ),  LHCb::LHCbID( 19705931u ), LHCb::LHCbID( 20230396u ), LHCb::LHCbID( 21779860u ),
             LHCb::LHCbID( 22326366u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 37264891u ), LHCb::LHCbID( 39363316u ), LHCb::LHCbID( 41463013u ), LHCb::LHCbID( 43563982u ),
             LHCb::LHCbID( 45665969u ), LHCb::LHCbID( 47767697u ), LHCb::LHCbID( 49867137u ), LHCb::LHCbID( 51966320u ),
             LHCb::LHCbID( 54065760u ), LHCb::LHCbID( 265349u ),   LHCb::LHCbID( 330680u ),   LHCb::LHCbID( 396239u ),
             LHCb::LHCbID( 461958u ),   LHCb::LHCbID( 526525u ),   LHCb::LHCbID( 593792u ),   LHCb::LHCbID( 657408u ),
             LHCb::LHCbID( 725061u ),   LHCb::LHCbID( 791863u ),   LHCb::LHCbID( 856834u ),   LHCb::LHCbID( 922746u ),
             LHCb::LHCbID( 988135u ),   LHCb::LHCbID( 19713489u ), LHCb::LHCbID( 20237793u ), LHCb::LHCbID( 21810660u ),
             LHCb::LHCbID( 22334967u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 37264891u ), LHCb::LHCbID( 39363316u ), LHCb::LHCbID( 41463013u ), LHCb::LHCbID( 43563982u ),
             LHCb::LHCbID( 45665969u ), LHCb::LHCbID( 47767697u ), LHCb::LHCbID( 49867137u ), LHCb::LHCbID( 51966320u ),
             LHCb::LHCbID( 54065760u ), LHCb::LHCbID( 265530u ),   LHCb::LHCbID( 330501u ),   LHCb::LHCbID( 396429u ),
             LHCb::LHCbID( 461767u ),   LHCb::LHCbID( 526747u ),   LHCb::LHCbID( 593568u ),   LHCb::LHCbID( 657643u ),
             LHCb::LHCbID( 724848u ),   LHCb::LHCbID( 792125u ),   LHCb::LHCbID( 856573u ),   LHCb::LHCbID( 923015u ),
             LHCb::LHCbID( 987861u ),   LHCb::LHCbID( 19713489u ), LHCb::LHCbID( 20237793u ), LHCb::LHCbID( 21810660u ),
             LHCb::LHCbID( 22334967u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 37264891u ), LHCb::LHCbID( 39363316u ), LHCb::LHCbID( 41463013u ), LHCb::LHCbID( 43563982u ),
             LHCb::LHCbID( 45665969u ), LHCb::LHCbID( 47767697u ), LHCb::LHCbID( 49867137u ), LHCb::LHCbID( 51966320u ),
             LHCb::LHCbID( 54065760u ), LHCb::LHCbID( 266087u ),   LHCb::LHCbID( 329922u ),   LHCb::LHCbID( 397012u ),
             LHCb::LHCbID( 461162u ),   LHCb::LHCbID( 527486u ),   LHCb::LHCbID( 592812u ),   LHCb::LHCbID( 658411u ),
             LHCb::LHCbID( 724055u ),   LHCb::LHCbID( 788923u ),   LHCb::LHCbID( 855661u ),   LHCb::LHCbID( 919845u ),
             LHCb::LHCbID( 986912u ),   LHCb::LHCbID( 19713489u ), LHCb::LHCbID( 20237793u ), LHCb::LHCbID( 21810660u ),
             LHCb::LHCbID( 22334967u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 36880125u ), LHCb::LHCbID( 38977781u ), LHCb::LHCbID( 41075942u ), LHCb::LHCbID( 43174864u ),
             LHCb::LHCbID( 45274289u ), LHCb::LHCbID( 47373971u ), LHCb::LHCbID( 49472388u ), LHCb::LHCbID( 51570805u ),
             LHCb::LHCbID( 53669222u ), LHCb::LHCbID( 295634u ),   LHCb::LHCbID( 361726u ),   LHCb::LHCbID( 426736u ),
             LHCb::LHCbID( 492761u ),   LHCb::LHCbID( 558075u ),   LHCb::LHCbID( 623572u ),   LHCb::LHCbID( 689174u ),
             LHCb::LHCbID( 754607u ),   LHCb::LHCbID( 820500u ),   LHCb::LHCbID( 885433u ),   LHCb::LHCbID( 951599u ),
             LHCb::LHCbID( 1016466u ),  LHCb::LHCbID( 19714434u ), LHCb::LHCbID( 20238710u ), LHCb::LHCbID( 21811641u ),
             LHCb::LHCbID( 22335917u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 36841928u ), LHCb::LHCbID( 38936765u ), LHCb::LHCbID( 41029029u ), LHCb::LHCbID( 43119235u ),
             LHCb::LHCbID( 45206358u ), LHCb::LHCbID( 47293480u ), LHCb::LHCbID( 49385745u ), LHCb::LHCbID( 51736567u ),
             LHCb::LHCbID( 53838815u ), LHCb::LHCbID( 314351u ),   LHCb::LHCbID( 379901u ),   LHCb::LHCbID( 445184u ),
             LHCb::LHCbID( 511233u ),   LHCb::LHCbID( 575621u ),   LHCb::LHCbID( 642910u ),   LHCb::LHCbID( 710562u ),
             LHCb::LHCbID( 774241u ),   LHCb::LHCbID( 841051u ),   LHCb::LHCbID( 905856u ),   LHCb::LHCbID( 971866u ),
             LHCb::LHCbID( 1037222u ),  LHCb::LHCbID( 19716209u ), LHCb::LHCbID( 20240425u ), LHCb::LHCbID( 21813470u ),
             LHCb::LHCbID( 22337682u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22183411u ), LHCb::LHCbID( 24275646u ), LHCb::LHCbID( 26367882u ), LHCb::LHCbID( 28460118u ),
             LHCb::LHCbID( 30552353u ), LHCb::LHCbID( 32821225u ), LHCb::LHCbID( 34923188u ), LHCb::LHCbID( 37025152u ),
             LHCb::LHCbID( 39126091u ), LHCb::LHCbID( 316403u ),   LHCb::LHCbID( 381753u ),   LHCb::LHCbID( 446969u ),
             LHCb::LHCbID( 513371u ),   LHCb::LHCbID( 581470u ),   LHCb::LHCbID( 645064u ),   LHCb::LHCbID( 712006u ),
             LHCb::LHCbID( 776697u ),   LHCb::LHCbID( 842484u ),   LHCb::LHCbID( 908288u ),   LHCb::LHCbID( 972995u ),
             LHCb::LHCbID( 1039977u ),  LHCb::LHCbID( 19738784u ), LHCb::LHCbID( 20262964u ), LHCb::LHCbID( 21836148u ),
             LHCb::LHCbID( 22361345u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 12712936u ), LHCb::LHCbID( 14794688u ), LHCb::LHCbID( 16876440u ), LHCb::LHCbID( 18958448u ),
             LHCb::LHCbID( 21040456u ), LHCb::LHCbID( 23123232u ), LHCb::LHCbID( 25581045u ), LHCb::LHCbID( 27693261u ),
             LHCb::LHCbID( 29805477u ), LHCb::LHCbID( 284942u ),   LHCb::LHCbID( 351425u ),   LHCb::LHCbID( 415888u ),
             LHCb::LHCbID( 482565u ),   LHCb::LHCbID( 548842u ),   LHCb::LHCbID( 679758u ),   LHCb::LHCbID( 747060u ),
             LHCb::LHCbID( 812617u ),   LHCb::LHCbID( 880487u ),   LHCb::LHCbID( 943505u ),   LHCb::LHCbID( 1011660u ),
             LHCb::LHCbID( 19706297u ), LHCb::LHCbID( 20251763u ), LHCb::LHCbID( 21802290u ), LHCb::LHCbID( 22326782u ),
             LHCb::LHCbID( 22348802u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22602750u ), LHCb::LHCbID( 24715728u ), LHCb::LHCbID( 26829219u ), LHCb::LHCbID( 28943221u ),
             LHCb::LHCbID( 31056968u ), LHCb::LHCbID( 33169946u ), LHCb::LHCbID( 35430125u ), LHCb::LHCbID( 37510336u ),
             LHCb::LHCbID( 39590802u ), LHCb::LHCbID( 312393u ),   LHCb::LHCbID( 377638u ),   LHCb::LHCbID( 443518u ),
             LHCb::LHCbID( 508663u ),   LHCb::LHCbID( 575230u ),   LHCb::LHCbID( 639080u ),   LHCb::LHCbID( 706353u ),
             LHCb::LHCbID( 770100u ),   LHCb::LHCbID( 819596u ),   LHCb::LHCbID( 886227u ),   LHCb::LHCbID( 950717u ),
             LHCb::LHCbID( 1017247u ),  LHCb::LHCbID( 19828748u ), LHCb::LHCbID( 20353033u ), LHCb::LHCbID( 21926155u ),
             LHCb::LHCbID( 22450452u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 36841928u ), LHCb::LHCbID( 38936765u ), LHCb::LHCbID( 41029029u ),
                                    LHCb::LHCbID( 43119747u ), LHCb::LHCbID( 45207380u ), LHCb::LHCbID( 47295014u ),
                                    LHCb::LHCbID( 49387279u ), LHCb::LHCbID( 51735030u ), LHCb::LHCbID( 53837279u ),
                                    LHCb::LHCbID( 296233u ),   LHCb::LHCbID( 361049u ),   LHCb::LHCbID( 427281u ),
                                    LHCb::LHCbID( 492133u ),   LHCb::LHCbID( 558774u ),   LHCb::LHCbID( 622791u ),
                                    LHCb::LHCbID( 689815u ),   LHCb::LHCbID( 753879u ),   LHCb::LHCbID( 821271u ),
                                    LHCb::LHCbID( 888671u ),   LHCb::LHCbID( 1019763u ),  LHCb::LHCbID( 19716165u ),
                                    LHCb::LHCbID( 20218350u ), LHCb::LHCbID( 21813397u ), LHCb::LHCbID( 22337603u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 36841928u ), LHCb::LHCbID( 38936765u ), LHCb::LHCbID( 41029029u ),
                                    LHCb::LHCbID( 43119235u ), LHCb::LHCbID( 45206358u ), LHCb::LHCbID( 47293480u ),
                                    LHCb::LHCbID( 49385745u ), LHCb::LHCbID( 51736567u ), LHCb::LHCbID( 53838815u ),
                                    LHCb::LHCbID( 296233u ),   LHCb::LHCbID( 361049u ),   LHCb::LHCbID( 427281u ),
                                    LHCb::LHCbID( 492133u ),   LHCb::LHCbID( 558774u ),   LHCb::LHCbID( 622791u ),
                                    LHCb::LHCbID( 689815u ),   LHCb::LHCbID( 753879u ),   LHCb::LHCbID( 821271u ),
                                    LHCb::LHCbID( 888671u ),   LHCb::LHCbID( 1019763u ),  LHCb::LHCbID( 19716165u ),
                                    LHCb::LHCbID( 20218350u ), LHCb::LHCbID( 21813397u ), LHCb::LHCbID( 22337603u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 16269257u ), LHCb::LHCbID( 18362235u ), LHCb::LHCbID( 20455469u ), LHCb::LHCbID( 22998497u ),
             LHCb::LHCbID( 25099667u ), LHCb::LHCbID( 25213946u ), LHCb::LHCbID( 27291115u ), LHCb::LHCbID( 29368027u ),
             LHCb::LHCbID( 285155u ),   LHCb::LHCbID( 351269u ),   LHCb::LHCbID( 416050u ),   LHCb::LHCbID( 482461u ),
             LHCb::LHCbID( 548663u ),   LHCb::LHCbID( 616135u ),   LHCb::LHCbID( 679523u ),   LHCb::LHCbID( 747353u ),
             LHCb::LHCbID( 812062u ),   LHCb::LHCbID( 876972u ),   LHCb::LHCbID( 942887u ),   LHCb::LHCbID( 1008214u ),
             LHCb::LHCbID( 19796218u ), LHCb::LHCbID( 20320687u ), LHCb::LHCbID( 21892318u ), LHCb::LHCbID( 21893340u ),
             LHCb::LHCbID( 22416813u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 11036381u ), LHCb::LHCbID( 13134747u ), LHCb::LHCbID( 15233368u ),
                                    LHCb::LHCbID( 17331734u ), LHCb::LHCbID( 19825876u ), LHCb::LHCbID( 21921681u ),
                                    LHCb::LHCbID( 24017231u ), LHCb::LHCbID( 26113036u ), LHCb::LHCbID( 299532u ),
                                    LHCb::LHCbID( 365760u ),   LHCb::LHCbID( 430449u ),   LHCb::LHCbID( 496949u ),
                                    LHCb::LHCbID( 562347u ),   LHCb::LHCbID( 627210u ),   LHCb::LHCbID( 693239u ),
                                    LHCb::LHCbID( 758419u ),   LHCb::LHCbID( 825118u ),   LHCb::LHCbID( 892826u ),
                                    LHCb::LHCbID( 955986u ),   LHCb::LHCbID( 1019935u ),  LHCb::LHCbID( 19611724u ),
                                    LHCb::LHCbID( 20122053u ), LHCb::LHCbID( 21723174u ), LHCb::LHCbID( 22233481u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 37944056u ), LHCb::LHCbID( 40423415u ), LHCb::LHCbID( 42526436u ),
                                    LHCb::LHCbID( 44630474u ), LHCb::LHCbID( 46735279u ), LHCb::LHCbID( 48836514u ),
                                    LHCb::LHCbID( 50937493u ), LHCb::LHCbID( 53038472u ), LHCb::LHCbID( 263194u ),
                                    LHCb::LHCbID( 328682u ),   LHCb::LHCbID( 394238u ),   LHCb::LHCbID( 459792u ),
                                    LHCb::LHCbID( 525181u ),   LHCb::LHCbID( 590982u ),   LHCb::LHCbID( 656223u ),
                                    LHCb::LHCbID( 722096u ),   LHCb::LHCbID( 787177u ),   LHCb::LHCbID( 853275u ),
                                    LHCb::LHCbID( 918219u ),   LHCb::LHCbID( 984387u ),   LHCb::LHCbID( 19689932u ),
                                    LHCb::LHCbID( 20214215u ), LHCb::LHCbID( 21790089u ), LHCb::LHCbID( 22311297u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 38295459u ), LHCb::LHCbID( 40390792u ), LHCb::LHCbID( 42484318u ),
                                    LHCb::LHCbID( 44576806u ), LHCb::LHCbID( 47112686u ), LHCb::LHCbID( 49212370u ),
                                    LHCb::LHCbID( 51311798u ), LHCb::LHCbID( 53411227u ), LHCb::LHCbID( 295760u ),
                                    LHCb::LHCbID( 361558u ),   LHCb::LHCbID( 426782u ),   LHCb::LHCbID( 492672u ),
                                    LHCb::LHCbID( 558064u ),   LHCb::LHCbID( 623537u ),   LHCb::LHCbID( 689078u ),
                                    LHCb::LHCbID( 754658u ),   LHCb::LHCbID( 820356u ),   LHCb::LHCbID( 885524u ),
                                    LHCb::LHCbID( 951364u ),   LHCb::LHCbID( 1016651u ),  LHCb::LHCbID( 19693685u ),
                                    LHCb::LHCbID( 20217905u ), LHCb::LHCbID( 21790863u ), LHCb::LHCbID( 22315074u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 19422149u ), LHCb::LHCbID( 21522567u ), LHCb::LHCbID( 23622984u ),
                                    LHCb::LHCbID( 25723401u ), LHCb::LHCbID( 28209355u ), LHCb::LHCbID( 30303117u ),
                                    LHCb::LHCbID( 32396878u ), LHCb::LHCbID( 34490640u ), LHCb::LHCbID( 296323u ),
                                    LHCb::LHCbID( 360909u ),   LHCb::LHCbID( 427137u ),   LHCb::LHCbID( 492227u ),
                                    LHCb::LHCbID( 558203u ),   LHCb::LHCbID( 623300u ),   LHCb::LHCbID( 688995u ),
                                    LHCb::LHCbID( 754642u ),   LHCb::LHCbID( 820089u ),   LHCb::LHCbID( 885687u ),
                                    LHCb::LHCbID( 950862u ),   LHCb::LHCbID( 1017048u ),  LHCb::LHCbID( 19610719u ),
                                    LHCb::LHCbID( 20121067u ), LHCb::LHCbID( 21723167u ), LHCb::LHCbID( 22233502u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 39351293u ), LHCb::LHCbID( 41449199u ), LHCb::LHCbID( 43547866u ),
                                    LHCb::LHCbID( 45646524u ), LHCb::LHCbID( 47745439u ), LHCb::LHCbID( 49843344u ),
                                    LHCb::LHCbID( 51941506u ), LHCb::LHCbID( 54039412u ), LHCb::LHCbID( 280415u ),
                                    LHCb::LHCbID( 344163u ),   LHCb::LHCbID( 411538u ),   LHCb::LHCbID( 475168u ),
                                    LHCb::LHCbID( 542993u ),   LHCb::LHCbID( 609966u ),   LHCb::LHCbID( 674115u ),
                                    LHCb::LHCbID( 740970u ),   LHCb::LHCbID( 805571u ),   LHCb::LHCbID( 871674u ),
                                    LHCb::LHCbID( 936693u ),   LHCb::LHCbID( 1002676u ),  LHCb::LHCbID( 19713387u ),
                                    LHCb::LHCbID( 20237702u ), LHCb::LHCbID( 21810563u ), LHCb::LHCbID( 22334883u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 14855675u ), LHCb::LHCbID( 16954548u ), LHCb::LHCbID( 19053677u ), LHCb::LHCbID( 21152550u ),
             LHCb::LHCbID( 23339482u ), LHCb::LHCbID( 25434515u ), LHCb::LHCbID( 27529548u ), LHCb::LHCbID( 29624581u ),
             LHCb::LHCbID( 272370u ),   LHCb::LHCbID( 335757u ),   LHCb::LHCbID( 402880u ),   LHCb::LHCbID( 467433u ),
             LHCb::LHCbID( 532818u ),   LHCb::LHCbID( 599550u ),   LHCb::LHCbID( 797483u ),   LHCb::LHCbID( 863240u ),
             LHCb::LHCbID( 927947u ),   LHCb::LHCbID( 995009u ),   LHCb::LHCbID( 19592648u ), LHCb::LHCbID( 20130854u ),
             LHCb::LHCbID( 21703834u ), LHCb::LHCbID( 22228202u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 32012880u ), LHCb::LHCbID( 34110522u ), LHCb::LHCbID( 36208419u ), LHCb::LHCbID( 38306060u ),
             LHCb::LHCbID( 40794079u ), LHCb::LHCbID( 42888859u ), LHCb::LHCbID( 44982593u ), LHCb::LHCbID( 317435u ),
             LHCb::LHCbID( 380960u ),   LHCb::LHCbID( 448158u ),   LHCb::LHCbID( 512416u ),   LHCb::LHCbID( 578101u ),
             LHCb::LHCbID( 644576u ),   LHCb::LHCbID( 708808u ),   LHCb::LHCbID( 776057u ),   LHCb::LHCbID( 842948u ),
             LHCb::LHCbID( 908102u ),   LHCb::LHCbID( 973653u ),   LHCb::LHCbID( 1039600u ),  LHCb::LHCbID( 19694687u ),
             LHCb::LHCbID( 20196863u ), LHCb::LHCbID( 20218891u ), LHCb::LHCbID( 21791844u ), LHCb::LHCbID( 21792869u ),
             LHCb::LHCbID( 22316035u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 19422400u ), LHCb::LHCbID( 21523071u ), LHCb::LHCbID( 23623741u ),
                                    LHCb::LHCbID( 26114813u ), LHCb::LHCbID( 28208315u ), LHCb::LHCbID( 30301818u ),
                                    LHCb::LHCbID( 32395576u ), LHCb::LHCbID( 299992u ),   LHCb::LHCbID( 365335u ),
                                    LHCb::LHCbID( 430960u ),   LHCb::LHCbID( 496469u ),   LHCb::LHCbID( 562880u ),
                                    LHCb::LHCbID( 626714u ),   LHCb::LHCbID( 693827u ),   LHCb::LHCbID( 757864u ),
                                    LHCb::LHCbID( 825700u ),   LHCb::LHCbID( 892263u ),   LHCb::LHCbID( 956626u ),
                                    LHCb::LHCbID( 1023427u ),  LHCb::LHCbID( 19596779u ), LHCb::LHCbID( 19597806u ),
                                    LHCb::LHCbID( 20121980u ), LHCb::LHCbID( 21709218u ), LHCb::LHCbID( 22233371u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 41429759u ), LHCb::LHCbID( 43523560u ), LHCb::LHCbID( 45616585u ), LHCb::LHCbID( 46266622u ),
             LHCb::LHCbID( 48359670u ), LHCb::LHCbID( 50452974u ), LHCb::LHCbID( 52546021u ), LHCb::LHCbID( 279294u ),
             LHCb::LHCbID( 345281u ),   LHCb::LHCbID( 410348u ),   LHCb::LHCbID( 476365u ),   LHCb::LHCbID( 541625u ),
             LHCb::LHCbID( 607233u ),   LHCb::LHCbID( 672674u ),   LHCb::LHCbID( 738320u ),   LHCb::LHCbID( 803946u ),
             LHCb::LHCbID( 869196u ),   LHCb::LHCbID( 934991u ),   LHCb::LHCbID( 1000286u ),  LHCb::LHCbID( 19713176u ),
             LHCb::LHCbID( 20237506u ), LHCb::LHCbID( 21808256u ), LHCb::LHCbID( 22332592u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 40382714u ), LHCb::LHCbID( 42477801u ), LHCb::LHCbID( 44572370u ), LHCb::LHCbID( 46666682u ),
             LHCb::LHCbID( 48762543u ), LHCb::LHCbID( 50858403u ), LHCb::LHCbID( 52954263u ), LHCb::LHCbID( 426391u ),
             LHCb::LHCbID( 493098u ),   LHCb::LHCbID( 557605u ),   LHCb::LHCbID( 624044u ),   LHCb::LHCbID( 688655u ),
             LHCb::LHCbID( 755133u ),   LHCb::LHCbID( 819843u ),   LHCb::LHCbID( 886090u ),   LHCb::LHCbID( 950890u ),
             LHCb::LHCbID( 950893u ),   LHCb::LHCbID( 1017182u ),  LHCb::LHCbID( 19691892u ), LHCb::LHCbID( 20216148u ),
             LHCb::LHCbID( 21789061u ), LHCb::LHCbID( 22313313u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19448779u ), LHCb::LHCbID( 23664975u ), LHCb::LHCbID( 25773329u ), LHCb::LHCbID( 28151764u ),
             LHCb::LHCbID( 30237334u ), LHCb::LHCbID( 32323161u ), LHCb::LHCbID( 34408731u ), LHCb::LHCbID( 302368u ),
             LHCb::LHCbID( 367173u ),   LHCb::LHCbID( 433558u ),   LHCb::LHCbID( 498066u ),   LHCb::LHCbID( 565672u ),
             LHCb::LHCbID( 632247u ),   LHCb::LHCbID( 696857u ),   LHCb::LHCbID( 763140u ),   LHCb::LHCbID( 893281u ),
             LHCb::LHCbID( 960103u ),   LHCb::LHCbID( 1024171u ),  LHCb::LHCbID( 19581392u ), LHCb::LHCbID( 20105619u ),
             LHCb::LHCbID( 21692677u ), LHCb::LHCbID( 22216883u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 15206625u ), LHCb::LHCbID( 15859949u ), LHCb::LHCbID( 17935024u ), LHCb::LHCbID( 20009588u ),
             LHCb::LHCbID( 22084920u ), LHCb::LHCbID( 24529911u ), LHCb::LHCbID( 26649786u ), LHCb::LHCbID( 28769661u ),
             LHCb::LHCbID( 316766u ),   LHCb::LHCbID( 381141u ),   LHCb::LHCbID( 446936u ),   LHCb::LHCbID( 513149u ),
             LHCb::LHCbID( 644922u ),   LHCb::LHCbID( 776952u ),   LHCb::LHCbID( 841936u ),   LHCb::LHCbID( 908558u ),
             LHCb::LHCbID( 976165u ),   LHCb::LHCbID( 1040629u ),  LHCb::LHCbID( 19700745u ), LHCb::LHCbID( 20202746u ),
             LHCb::LHCbID( 21799157u ), LHCb::LHCbID( 22301132u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 40038807u ), LHCb::LHCbID( 42139503u ), LHCb::LHCbID( 44661741u ),
                                    LHCb::LHCbID( 46772697u ), LHCb::LHCbID( 48876751u ), LHCb::LHCbID( 50980805u ),
                                    LHCb::LHCbID( 53084346u ), LHCb::LHCbID( 266709u ),   LHCb::LHCbID( 333438u ),
                                    LHCb::LHCbID( 397490u ),   LHCb::LHCbID( 597073u ),   LHCb::LHCbID( 662228u ),
                                    LHCb::LHCbID( 728502u ),   LHCb::LHCbID( 796273u ),   LHCb::LHCbID( 860634u ),
                                    LHCb::LHCbID( 927041u ),   LHCb::LHCbID( 992079u ),   LHCb::LHCbID( 19689722u ),
                                    LHCb::LHCbID( 20214023u ), LHCb::LHCbID( 21786740u ), LHCb::LHCbID( 22311035u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 43148279u ), LHCb::LHCbID( 45241823u ), LHCb::LHCbID( 47335111u ), LHCb::LHCbID( 49430460u ),
             LHCb::LHCbID( 51525552u ), LHCb::LHCbID( 53620900u ), LHCb::LHCbID( 295527u ),   LHCb::LHCbID( 361830u ),
             LHCb::LHCbID( 426597u ),   LHCb::LHCbID( 492898u ),   LHCb::LHCbID( 557864u ),   LHCb::LHCbID( 623775u ),
             LHCb::LHCbID( 688934u ),   LHCb::LHCbID( 754844u ),   LHCb::LHCbID( 820195u ),   LHCb::LHCbID( 885730u ),
             LHCb::LHCbID( 951260u ),   LHCb::LHCbID( 1016802u ),  LHCb::LHCbID( 19714127u ), LHCb::LHCbID( 20238384u ),
             LHCb::LHCbID( 21811319u ), LHCb::LHCbID( 22335573u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 14825400u ), LHCb::LHCbID( 16910191u ), LHCb::LHCbID( 18996006u ),
                                    LHCb::LHCbID( 21316823u ), LHCb::LHCbID( 23425934u ), LHCb::LHCbID( 25535300u ),
                                    LHCb::LHCbID( 333378u ),   LHCb::LHCbID( 400691u ),   LHCb::LHCbID( 465265u ),
                                    LHCb::LHCbID( 530974u ),   LHCb::LHCbID( 597034u ),   LHCb::LHCbID( 665332u ),
                                    LHCb::LHCbID( 728996u ),   LHCb::LHCbID( 795762u ),   LHCb::LHCbID( 860589u ),
                                    LHCb::LHCbID( 925967u ),   LHCb::LHCbID( 992595u ),   LHCb::LHCbID( 19664364u ),
                                    LHCb::LHCbID( 20206783u ), LHCb::LHCbID( 21760196u ), LHCb::LHCbID( 22284701u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 12743931u ), LHCb::LHCbID( 14831020u ), LHCb::LHCbID( 19005456u ),
                                    LHCb::LHCbID( 21303996u ), LHCb::LHCbID( 23410798u ), LHCb::LHCbID( 25517600u ),
                                    LHCb::LHCbID( 279752u ),   LHCb::LHCbID( 410457u ),   LHCb::LHCbID( 475764u ),
                                    LHCb::LHCbID( 542603u ),   LHCb::LHCbID( 609850u ),   LHCb::LHCbID( 673271u ),
                                    LHCb::LHCbID( 741309u ),   LHCb::LHCbID( 805395u ),   LHCb::LHCbID( 871288u ),
                                    LHCb::LHCbID( 1002780u ),  LHCb::LHCbID( 19664137u ), LHCb::LHCbID( 20188619u ),
                                    LHCb::LHCbID( 21715416u ), LHCb::LHCbID( 22284463u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 44187124u ), LHCb::LHCbID( 46279392u ), LHCb::LHCbID( 48373975u ), LHCb::LHCbID( 50468813u ),
             LHCb::LHCbID( 52563395u ), LHCb::LHCbID( 278842u ),   LHCb::LHCbID( 409889u ),   LHCb::LHCbID( 476843u ),
             LHCb::LHCbID( 541077u ),   LHCb::LHCbID( 607799u ),   LHCb::LHCbID( 672122u ),   LHCb::LHCbID( 738895u ),
             LHCb::LHCbID( 803309u ),   LHCb::LHCbID( 869852u ),   LHCb::LHCbID( 934349u ),   LHCb::LHCbID( 1000951u ),
             LHCb::LHCbID( 19691004u ), LHCb::LHCbID( 19713033u ), LHCb::LHCbID( 20237355u ), LHCb::LHCbID( 21788122u ),
             LHCb::LHCbID( 22312447u ), LHCb::LHCbID( 22334476u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 15233486u ), LHCb::LHCbID( 17334376u ), LHCb::LHCbID( 19435267u ),
                                    LHCb::LHCbID( 21914273u ), LHCb::LHCbID( 24007740u ), LHCb::LHCbID( 296758u ),
                                    LHCb::LHCbID( 364471u ),   LHCb::LHCbID( 427378u ),   LHCb::LHCbID( 491860u ),
                                    LHCb::LHCbID( 558395u ),   LHCb::LHCbID( 622975u ),   LHCb::LHCbID( 688980u ),
                                    LHCb::LHCbID( 754520u ),   LHCb::LHCbID( 820047u ),   LHCb::LHCbID( 885582u ),
                                    LHCb::LHCbID( 950603u ),   LHCb::LHCbID( 1017161u ),  LHCb::LHCbID( 19584331u ),
                                    LHCb::LHCbID( 20108437u ), LHCb::LHCbID( 21695749u ), LHCb::LHCbID( 22219824u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 45622051u ), LHCb::LHCbID( 48153331u ), LHCb::LHCbID( 50247131u ),
                                    LHCb::LHCbID( 52340932u ), LHCb::LHCbID( 54434731u ), LHCb::LHCbID( 280746u ),
                                    LHCb::LHCbID( 347927u ),   LHCb::LHCbID( 411870u ),   LHCb::LHCbID( 478928u ),
                                    LHCb::LHCbID( 543362u ),   LHCb::LHCbID( 609596u ),   LHCb::LHCbID( 674486u ),
                                    LHCb::LHCbID( 740596u ),   LHCb::LHCbID( 805955u ),   LHCb::LHCbID( 871291u ),
                                    LHCb::LHCbID( 937078u ),   LHCb::LHCbID( 1002288u ),  LHCb::LHCbID( 19712179u ),
                                    LHCb::LHCbID( 20236507u ), LHCb::LHCbID( 21809390u ), LHCb::LHCbID( 22333726u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 44576046u ), LHCb::LHCbID( 47263684u ), LHCb::LHCbID( 49352340u ),
                                    LHCb::LHCbID( 51441509u ), LHCb::LHCbID( 53529910u ), LHCb::LHCbID( 296538u ),
                                    LHCb::LHCbID( 360664u ),   LHCb::LHCbID( 427533u ),   LHCb::LHCbID( 491797u ),
                                    LHCb::LHCbID( 559172u ),   LHCb::LHCbID( 626400u ),   LHCb::LHCbID( 757541u ),
                                    LHCb::LHCbID( 821807u ),   LHCb::LHCbID( 888039u ),   LHCb::LHCbID( 952774u ),
                                    LHCb::LHCbID( 1019193u ),  LHCb::LHCbID( 19719265u ), LHCb::LHCbID( 20221406u ),
                                    LHCb::LHCbID( 21816573u ), LHCb::LHCbID( 22340730u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 3334909u ),  LHCb::LHCbID( 5429241u ),  LHCb::LHCbID( 7523830u ),
                                    LHCb::LHCbID( 9613041u ),  LHCb::LHCbID( 297153u ),   LHCb::LHCbID( 364244u ),
                                    LHCb::LHCbID( 428266u ),   LHCb::LHCbID( 495256u ),   LHCb::LHCbID( 559887u ),
                                    LHCb::LHCbID( 625792u ),   LHCb::LHCbID( 690997u ),   LHCb::LHCbID( 756803u ),
                                    LHCb::LHCbID( 822595u ),   LHCb::LHCbID( 887367u ),   LHCb::LHCbID( 953701u ),
                                    LHCb::LHCbID( 1018379u ),  LHCb::LHCbID( 19693795u ), LHCb::LHCbID( 20218028u ),
                                    LHCb::LHCbID( 21790965u ), LHCb::LHCbID( 22315190u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 44581942u ), LHCb::LHCbID( 49199322u ), LHCb::LHCbID( 51296190u ),
                                    LHCb::LHCbID( 53393314u ), LHCb::LHCbID( 312970u ),   LHCb::LHCbID( 377164u ),
                                    LHCb::LHCbID( 443940u ),   LHCb::LHCbID( 508342u ),   LHCb::LHCbID( 574876u ),
                                    LHCb::LHCbID( 639542u ),   LHCb::LHCbID( 705838u ),   LHCb::LHCbID( 770728u ),
                                    LHCb::LHCbID( 836789u ),   LHCb::LHCbID( 901911u ),   LHCb::LHCbID( 967744u ),
                                    LHCb::LHCbID( 1033105u ),  LHCb::LHCbID( 19695068u ), LHCb::LHCbID( 20219299u ),
                                    LHCb::LHCbID( 21792217u ), LHCb::LHCbID( 22316439u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 12752581u ), LHCb::LHCbID( 14846797u ), LHCb::LHCbID( 17067469u ), LHCb::LHCbID( 19167316u ),
             LHCb::LHCbID( 264877u ), LHCb::LHCbID( 330534u ), LHCb::LHCbID( 395419u ), LHCb::LHCbID( 462157u ),
             LHCb::LHCbID( 527039u ), LHCb::LHCbID( 592611u ), LHCb::LHCbID( 657534u ), LHCb::LHCbID( 724282u ),
             LHCb::LHCbID( 789203u ), LHCb::LHCbID( 919639u ), LHCb::LHCbID( 986404u ), LHCb::LHCbID( 19575160u ),
             LHCb::LHCbID( 20113479u ), LHCb::LHCbID( 21672340u ), LHCb::LHCbID( 22210657u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 17339581u ), LHCb::LHCbID( 19447623u ), LHCb::LHCbID( 21894867u ),
                                    LHCb::LHCbID( 23981916u ), LHCb::LHCbID( 377033u ), LHCb::LHCbID( 443542u ),
                                    LHCb::LHCbID( 508666u ), LHCb::LHCbID( 573552u ), LHCb::LHCbID( 772434u ),
                                    LHCb::LHCbID( 838252u ), LHCb::LHCbID( 904443u ), LHCb::LHCbID( 968711u ),
                                    LHCb::LHCbID( 1036153u ), LHCb::LHCbID( 19568652u ), LHCb::LHCbID( 20078933u ),
                                    LHCb::LHCbID( 21667157u ), LHCb::LHCbID( 22191237u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 41433335u ), LHCb::LHCbID( 43528416u ), LHCb::LHCbID( 45622726u ), LHCb::LHCbID( 263584u ),
             LHCb::LHCbID( 328263u ), LHCb::LHCbID( 394579u ), LHCb::LHCbID( 459417u ), LHCb::LHCbID( 525514u ),
             LHCb::LHCbID( 590618u ), LHCb::LHCbID( 656504u ), LHCb::LHCbID( 721779u ), LHCb::LHCbID( 787454u ),
             LHCb::LHCbID( 852964u ), LHCb::LHCbID( 918439u ), LHCb::LHCbID( 984129u ), LHCb::LHCbID( 19713200u ),
             LHCb::LHCbID( 20237523u ), LHCb::LHCbID( 21810328u ), LHCb::LHCbID( 22334656u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 21578762u ), LHCb::LHCbID( 23951014u ), LHCb::LHCbID( 26029888u ),
                                    LHCb::LHCbID( 312545u ), LHCb::LHCbID( 377701u ), LHCb::LHCbID( 443173u ),
                                    LHCb::LHCbID( 509229u ), LHCb::LHCbID( 576892u ), LHCb::LHCbID( 641741u ),
                                    LHCb::LHCbID( 707494u ), LHCb::LHCbID( 773307u ), LHCb::LHCbID( 841283u ),
                                    LHCb::LHCbID( 905729u ), LHCb::LHCbID( 1037316u ), LHCb::LHCbID( 19553587u ),
                                    LHCb::LHCbID( 20077780u ), LHCb::LHCbID( 21664798u ), LHCb::LHCbID( 22175125u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 42058832u ), LHCb::LHCbID( 44132957u ), LHCb::LHCbID( 46207082u ),
                                    LHCb::LHCbID( 266955u ), LHCb::LHCbID( 464705u ), LHCb::LHCbID( 531326u ),
                                    LHCb::LHCbID( 597186u ), LHCb::LHCbID( 661970u ), LHCb::LHCbID( 728746u ),
                                    LHCb::LHCbID( 795774u ), LHCb::LHCbID( 861113u ), LHCb::LHCbID( 926413u ),
                                    LHCb::LHCbID( 992690u ), LHCb::LHCbID( 19710167u ), LHCb::LHCbID( 20234542u ),
                                    LHCb::LHCbID( 21806273u ), LHCb::LHCbID( 22331686u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19419630u ), LHCb::LHCbID( 21516251u ), LHCb::LHCbID( 23612873u ), LHCb::LHCbID( 25709495u ),
             LHCb::LHCbID( 27805861u ), LHCb::LHCbID( 29902483u ), LHCb::LHCbID( 31999104u ), LHCb::LHCbID( 34095982u ),
             LHCb::LHCbID( 36192604u ), LHCb::LHCbID( 38289226u ), LHCb::LHCbID( 40385318u ), LHCb::LHCbID( 42912240u ),
             LHCb::LHCbID( 45011112u ), LHCb::LHCbID( 47110241u ), LHCb::LHCbID( 49208125u ), LHCb::LHCbID( 51306265u ),
             LHCb::LHCbID( 296561u ),   LHCb::LHCbID( 360737u ),   LHCb::LHCbID( 427599u ),   LHCb::LHCbID( 491827u ),
             LHCb::LHCbID( 559030u ),   LHCb::LHCbID( 626667u ),   LHCb::LHCbID( 690061u ),   LHCb::LHCbID( 821459u ),
             LHCb::LHCbID( 888495u ),   LHCb::LHCbID( 952483u ),   LHCb::LHCbID( 1019596u ),  LHCb::LHCbID( 19694959u ),
             LHCb::LHCbID( 21792113u ), LHCb::LHCbID( 22316308u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 19064822u ), LHCb::LHCbID( 21166046u ), LHCb::LHCbID( 23655415u ), LHCb::LHCbID( 25757928u ),
             LHCb::LHCbID( 27861208u ), LHCb::LHCbID( 29964488u ), LHCb::LHCbID( 32067768u ), LHCb::LHCbID( 34171048u ),
             LHCb::LHCbID( 36274328u ), LHCb::LHCbID( 38377608u ), LHCb::LHCbID( 40487272u ), LHCb::LHCbID( 42602040u ),
             LHCb::LHCbID( 44864247u ), LHCb::LHCbID( 46936759u ), LHCb::LHCbID( 49021591u ), LHCb::LHCbID( 263017u ),
             LHCb::LHCbID( 328814u ),   LHCb::LHCbID( 394062u ),   LHCb::LHCbID( 459919u ),   LHCb::LHCbID( 525184u ),
             LHCb::LHCbID( 590929u ),   LHCb::LHCbID( 656229u ),   LHCb::LHCbID( 722038u ),   LHCb::LHCbID( 787356u ),
             LHCb::LHCbID( 853042u ),   LHCb::LHCbID( 918399u ),   LHCb::LHCbID( 984154u ),   LHCb::LHCbID( 19670480u ),
             LHCb::LHCbID( 20194774u ), LHCb::LHCbID( 22291719u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 21155564u ), LHCb::LHCbID( 23254998u ), LHCb::LHCbID( 25354177u ), LHCb::LHCbID( 27453356u ),
             LHCb::LHCbID( 29552535u ), LHCb::LHCbID( 31651970u ), LHCb::LHCbID( 34163455u ), LHCb::LHCbID( 36265974u ),
             LHCb::LHCbID( 38368494u ), LHCb::LHCbID( 40476382u ), LHCb::LHCbID( 42589637u ), LHCb::LHCbID( 44707492u ),
             LHCb::LHCbID( 46826115u ), LHCb::LHCbID( 48934002u ), LHCb::LHCbID( 51041890u ), LHCb::LHCbID( 264034u ),
             LHCb::LHCbID( 327764u ),   LHCb::LHCbID( 395091u ),   LHCb::LHCbID( 458851u ),   LHCb::LHCbID( 540699u ),
             LHCb::LHCbID( 608148u ),   LHCb::LHCbID( 671753u ),   LHCb::LHCbID( 739237u ),   LHCb::LHCbID( 803047u ),
             LHCb::LHCbID( 870085u ),   LHCb::LHCbID( 934097u ),   LHCb::LHCbID( 1001177u ),  LHCb::LHCbID( 19669377u ),
             LHCb::LHCbID( 20193693u ), LHCb::LHCbID( 21766369u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 23229167u ), LHCb::LHCbID( 25324509u ), LHCb::LHCbID( 27419596u ),
                                    LHCb::LHCbID( 29514683u ), LHCb::LHCbID( 31609769u ), LHCb::LHCbID( 33704855u ),
                                    LHCb::LHCbID( 35799942u ), LHCb::LHCbID( 37895028u ), LHCb::LHCbID( 39988049u ),
                                    LHCb::LHCbID( 42079260u ), LHCb::LHCbID( 44366290u ), LHCb::LHCbID( 46470796u ),
                                    LHCb::LHCbID( 48571752u ), LHCb::LHCbID( 50672964u ), LHCb::LHCbID( 52774176u ),
                                    LHCb::LHCbID( 262222u ),   LHCb::LHCbID( 329574u ),   LHCb::LHCbID( 397222u ),
                                    LHCb::LHCbID( 460828u ),   LHCb::LHCbID( 528015u ),   LHCb::LHCbID( 592151u ),
                                    LHCb::LHCbID( 658888u ),   LHCb::LHCbID( 723444u ),   LHCb::LHCbID( 789720u ),
                                    LHCb::LHCbID( 920591u ),   LHCb::LHCbID( 19688541u ), LHCb::LHCbID( 20209840u ),
                                    LHCb::LHCbID( 22306843u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 29537527u ), LHCb::LHCbID( 31635436u ), LHCb::LHCbID( 33733089u ), LHCb::LHCbID( 35830742u ),
             LHCb::LHCbID( 37928396u ), LHCb::LHCbID( 40026550u ), LHCb::LHCbID( 42125461u ), LHCb::LHCbID( 44224363u ),
             LHCb::LHCbID( 46323521u ), LHCb::LHCbID( 48421420u ), LHCb::LHCbID( 50519575u ), LHCb::LHCbID( 52694015u ),
             LHCb::LHCbID( 281733u ),   LHCb::LHCbID( 346895u ),   LHCb::LHCbID( 412967u ),   LHCb::LHCbID( 477779u ),
             LHCb::LHCbID( 544911u ),   LHCb::LHCbID( 612099u ),   LHCb::LHCbID( 676150u ),   LHCb::LHCbID( 742972u ),
             LHCb::LHCbID( 808068u ),   LHCb::LHCbID( 873231u ),   LHCb::LHCbID( 939306u ),   LHCb::LHCbID( 1004096u ),
             LHCb::LHCbID( 20214927u ), LHCb::LHCbID( 21787716u ), LHCb::LHCbID( 22312028u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 24667842u ), LHCb::LHCbID( 26765227u ), LHCb::LHCbID( 28862612u ), LHCb::LHCbID( 30960509u ),
             LHCb::LHCbID( 33057895u ), LHCb::LHCbID( 35155536u ), LHCb::LHCbID( 37253177u ), LHCb::LHCbID( 39350563u ),
             LHCb::LHCbID( 41847541u ), LHCb::LHCbID( 43943345u ), LHCb::LHCbID( 46038616u ), LHCb::LHCbID( 48133888u ),
             LHCb::LHCbID( 285639u ),   LHCb::LHCbID( 351038u ),   LHCb::LHCbID( 416939u ),   LHCb::LHCbID( 481822u ),
             LHCb::LHCbID( 549695u ),   LHCb::LHCbID( 615358u ),   LHCb::LHCbID( 680997u ),   LHCb::LHCbID( 746125u ),
             LHCb::LHCbID( 813664u ),   LHCb::LHCbID( 879766u ),   LHCb::LHCbID( 944961u ),   LHCb::LHCbID( 1010529u ),
             LHCb::LHCbID( 19732520u ), LHCb::LHCbID( 21829727u ), LHCb::LHCbID( 22354123u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 24667842u ), LHCb::LHCbID( 26765227u ), LHCb::LHCbID( 28862612u ), LHCb::LHCbID( 30960509u ),
             LHCb::LHCbID( 33057895u ), LHCb::LHCbID( 35155536u ), LHCb::LHCbID( 37253177u ), LHCb::LHCbID( 39350563u ),
             LHCb::LHCbID( 41847541u ), LHCb::LHCbID( 43943345u ), LHCb::LHCbID( 46038616u ), LHCb::LHCbID( 48133888u ),
             LHCb::LHCbID( 266955u ),   LHCb::LHCbID( 333179u ),   LHCb::LHCbID( 464705u ),   LHCb::LHCbID( 531326u ),
             LHCb::LHCbID( 597186u ),   LHCb::LHCbID( 661970u ),   LHCb::LHCbID( 728743u ),   LHCb::LHCbID( 795774u ),
             LHCb::LHCbID( 861113u ),   LHCb::LHCbID( 926413u ),   LHCb::LHCbID( 992693u ),   LHCb::LHCbID( 19710291u ),
             LHCb::LHCbID( 20234658u ), LHCb::LHCbID( 22331807u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 22569715u ), LHCb::LHCbID( 24667351u ), LHCb::LHCbID( 26764731u ), LHCb::LHCbID( 28862112u ),
             LHCb::LHCbID( 30959748u ), LHCb::LHCbID( 35154767u ), LHCb::LHCbID( 37252147u ), LHCb::LHCbID( 39349784u ),
             LHCb::LHCbID( 41848544u ), LHCb::LHCbID( 43944335u ), LHCb::LHCbID( 46039842u ), LHCb::LHCbID( 283981u ),
             LHCb::LHCbID( 348637u ),   LHCb::LHCbID( 415162u ),   LHCb::LHCbID( 479555u ),   LHCb::LHCbID( 547415u ),
             LHCb::LHCbID( 613577u ),   LHCb::LHCbID( 678590u ),   LHCb::LHCbID( 744491u ),   LHCb::LHCbID( 810807u ),
             LHCb::LHCbID( 878586u ),   LHCb::LHCbID( 941972u ),   LHCb::LHCbID( 1009500u ),  LHCb::LHCbID( 19732620u ),
             LHCb::LHCbID( 20255996u ), LHCb::LHCbID( 21829825u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 24667842u ), LHCb::LHCbID( 26765227u ), LHCb::LHCbID( 28862612u ), LHCb::LHCbID( 30959998u ),
             LHCb::LHCbID( 33057383u ), LHCb::LHCbID( 35154767u ), LHCb::LHCbID( 37251896u ), LHCb::LHCbID( 39349281u ),
             LHCb::LHCbID( 41849328u ), LHCb::LHCbID( 43945897u ), LHCb::LHCbID( 46042698u ), LHCb::LHCbID( 285639u ),
             LHCb::LHCbID( 351038u ),   LHCb::LHCbID( 416939u ),   LHCb::LHCbID( 481822u ),   LHCb::LHCbID( 549695u ),
             LHCb::LHCbID( 615358u ),   LHCb::LHCbID( 680997u ),   LHCb::LHCbID( 746125u ),   LHCb::LHCbID( 813664u ),
             LHCb::LHCbID( 879766u ),   LHCb::LHCbID( 944961u ),   LHCb::LHCbID( 1010529u ),  LHCb::LHCbID( 19732520u ),
             LHCb::LHCbID( 20256908u ), LHCb::LHCbID( 21829727u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 32638411u ), LHCb::LHCbID( 36826288u ), LHCb::LHCbID( 38919332u ), LHCb::LHCbID( 41008779u ),
             LHCb::LHCbID( 43094372u ), LHCb::LHCbID( 45176114u ), LHCb::LHCbID( 47568381u ), LHCb::LHCbID( 49672931u ),
             LHCb::LHCbID( 51777226u ), LHCb::LHCbID( 53882032u ), LHCb::LHCbID( 300743u ),   LHCb::LHCbID( 364590u ),
             LHCb::LHCbID( 431987u ),   LHCb::LHCbID( 499561u ),   LHCb::LHCbID( 564613u ),   LHCb::LHCbID( 629095u ),
             LHCb::LHCbID( 695855u ),   LHCb::LHCbID( 759935u ),   LHCb::LHCbID( 828404u ),   LHCb::LHCbID( 893681u ),
             LHCb::LHCbID( 959640u ),   LHCb::LHCbID( 1024515u ),  LHCb::LHCbID( 19696999u ), LHCb::LHCbID( 20221180u ),
             LHCb::LHCbID( 22318390u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 39352313u ), LHCb::LHCbID( 41450474u ), LHCb::LHCbID( 43549140u ), LHCb::LHCbID( 45648567u ),
             LHCb::LHCbID( 47747993u ), LHCb::LHCbID( 49846154u ), LHCb::LHCbID( 51944058u ), LHCb::LHCbID( 54042219u ),
             LHCb::LHCbID( 266082u ),   LHCb::LHCbID( 329928u ),   LHCb::LHCbID( 397012u ),   LHCb::LHCbID( 461162u ),
             LHCb::LHCbID( 527486u ),   LHCb::LHCbID( 592812u ),   LHCb::LHCbID( 658411u ),   LHCb::LHCbID( 724055u ),
             LHCb::LHCbID( 788923u ),   LHCb::LHCbID( 855661u ),   LHCb::LHCbID( 919845u ),   LHCb::LHCbID( 986912u ),
             LHCb::LHCbID( 20237702u ), LHCb::LHCbID( 21810548u ), LHCb::LHCbID( 22334863u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 42092287u ), LHCb::LHCbID( 44183270u ), LHCb::LHCbID( 46273996u ),
                                    LHCb::LHCbID( 48368063u ), LHCb::LHCbID( 50462642u ), LHCb::LHCbID( 52556965u ),
                                    LHCb::LHCbID( 263159u ),   LHCb::LHCbID( 328687u ),   LHCb::LHCbID( 394131u ),
                                    LHCb::LHCbID( 459866u ),   LHCb::LHCbID( 525011u ),   LHCb::LHCbID( 591117u ),
                                    LHCb::LHCbID( 655978u ),   LHCb::LHCbID( 722304u ),   LHCb::LHCbID( 786877u ),
                                    LHCb::LHCbID( 853534u ),   LHCb::LHCbID( 917839u ),   LHCb::LHCbID( 984728u ),
                                    LHCb::LHCbID( 19690981u ), LHCb::LHCbID( 20237336u ), LHCb::LHCbID( 22310363u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 42128626u ), LHCb::LHCbID( 44228571u ), LHCb::LHCbID( 46328259u ),
                                    LHCb::LHCbID( 48426935u ), LHCb::LHCbID( 50525356u ), LHCb::LHCbID( 52623776u ),
                                    LHCb::LHCbID( 262723u ),   LHCb::LHCbID( 329158u ),   LHCb::LHCbID( 393727u ),
                                    LHCb::LHCbID( 460311u ),   LHCb::LHCbID( 524538u ),   LHCb::LHCbID( 591631u ),
                                    LHCb::LHCbID( 655538u ),   LHCb::LHCbID( 722789u ),   LHCb::LHCbID( 790486u ),
                                    LHCb::LHCbID( 854064u ),   LHCb::LHCbID( 921485u ),   LHCb::LHCbID( 985225u ),
                                    LHCb::LHCbID( 19690622u ), LHCb::LHCbID( 20214913u ), LHCb::LHCbID( 21787716u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 21524138u ), LHCb::LHCbID( 23623738u ), LHCb::LHCbID( 26115276u ),
                                    LHCb::LHCbID( 28209756u ), LHCb::LHCbID( 301941u ),   LHCb::LHCbID( 367265u ),
                                    LHCb::LHCbID( 432726u ),   LHCb::LHCbID( 498564u ),   LHCb::LHCbID( 565011u ),
                                    LHCb::LHCbID( 632563u ),   LHCb::LHCbID( 695755u ),   LHCb::LHCbID( 763898u ),
                                    LHCb::LHCbID( 827995u ),   LHCb::LHCbID( 958698u ),   LHCb::LHCbID( 958701u ),
                                    LHCb::LHCbID( 1025179u ),  LHCb::LHCbID( 19584208u ), LHCb::LHCbID( 20094453u ),
                                    LHCb::LHCbID( 20108290u ), LHCb::LHCbID( 22206856u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 47735035u ), LHCb::LHCbID( 49832436u ), LHCb::LHCbID( 51929581u ),
                                    LHCb::LHCbID( 54026725u ), LHCb::LHCbID( 282021u ), LHCb::LHCbID( 346619u ),
                                    LHCb::LHCbID( 413240u ), LHCb::LHCbID( 477514u ), LHCb::LHCbID( 611904u ),
                                    LHCb::LHCbID( 676335u ), LHCb::LHCbID( 742793u ), LHCb::LHCbID( 808185u ),
                                    LHCb::LHCbID( 873123u ), LHCb::LHCbID( 939400u ), LHCb::LHCbID( 1004007u ),
                                    LHCb::LHCbID( 19713176u ), LHCb::LHCbID( 21810343u ), LHCb::LHCbID( 22334656u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 20497648u ), LHCb::LHCbID( 22598879u ), LHCb::LHCbID( 24700110u ), LHCb::LHCbID( 26801597u ),
             LHCb::LHCbID( 28902060u ), LHCb::LHCbID( 31003291u ), LHCb::LHCbID( 33104523u ), LHCb::LHCbID( 35206010u ),
             LHCb::LHCbID( 37307241u ), LHCb::LHCbID( 39408472u ), LHCb::LHCbID( 41514038u ), LHCb::LHCbID( 43623684u ),
             LHCb::LHCbID( 45947327u ), LHCb::LHCbID( 48028540u ), LHCb::LHCbID( 50117210u ), LHCb::LHCbID( 52205880u ),
             LHCb::LHCbID( 54294551u ), LHCb::LHCbID( 314205u ),   LHCb::LHCbID( 380107u ),   LHCb::LHCbID( 412935u ),
             LHCb::LHCbID( 511307u ),   LHCb::LHCbID( 575742u ),   LHCb::LHCbID( 642861u ),   LHCb::LHCbID( 675689u ),
             LHCb::LHCbID( 774066u ),   LHCb::LHCbID( 841429u ),   LHCb::LHCbID( 874155u ),   LHCb::LHCbID( 972400u ),
             LHCb::LHCbID( 1036763u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 22180094u ), LHCb::LHCbID( 24275441u ), LHCb::LHCbID( 26370788u ),
                                    LHCb::LHCbID( 28466136u ), LHCb::LHCbID( 30561483u ), LHCb::LHCbID( 32656830u ),
                                    LHCb::LHCbID( 34752178u ), LHCb::LHCbID( 36847525u ), LHCb::LHCbID( 38942872u ),
                                    LHCb::LHCbID( 41036670u ), LHCb::LHCbID( 43128407u ), LHCb::LHCbID( 45219108u ),
                                    LHCb::LHCbID( 47516655u ), LHCb::LHCbID( 49617366u ), LHCb::LHCbID( 51718076u ),
                                    LHCb::LHCbID( 53818787u ), LHCb::LHCbID( 295795u ),   LHCb::LHCbID( 361507u ),
                                    LHCb::LHCbID( 426838u ),   LHCb::LHCbID( 492599u ),   LHCb::LHCbID( 558245u ),
                                    LHCb::LHCbID( 623338u ),   LHCb::LHCbID( 689281u ),   LHCb::LHCbID( 754433u ),
                                    LHCb::LHCbID( 820680u ),   LHCb::LHCbID( 885183u ),   LHCb::LHCbID( 951710u ),
                                    LHCb::LHCbID( 1016284u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 12061405u ), LHCb::LHCbID( 12717050u ), LHCb::LHCbID( 14801367u ), LHCb::LHCbID( 16885172u ),
             LHCb::LHCbID( 18968721u ), LHCb::LHCbID( 21052525u ), LHCb::LHCbID( 23136074u ), LHCb::LHCbID( 25220647u ),
             LHCb::LHCbID( 27304452u ), LHCb::LHCbID( 29786333u ), LHCb::LHCbID( 31896762u ), LHCb::LHCbID( 34007446u ),
             LHCb::LHCbID( 267800u ),   LHCb::LHCbID( 332018u ),   LHCb::LHCbID( 398221u ),   LHCb::LHCbID( 463775u ),
             LHCb::LHCbID( 595713u ),   LHCb::LHCbID( 662870u ),   LHCb::LHCbID( 727492u ),   LHCb::LHCbID( 793124u ),
             LHCb::LHCbID( 859308u ),   LHCb::LHCbID( 927608u ),   LHCb::LHCbID( 991148u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 31610621u ), LHCb::LHCbID( 33705973u ), LHCb::LHCbID( 35801325u ), LHCb::LHCbID( 37896933u ),
             LHCb::LHCbID( 39990741u ), LHCb::LHCbID( 42082749u ), LHCb::LHCbID( 44173213u ), LHCb::LHCbID( 46263933u ),
             LHCb::LHCbID( 48357485u ), LHCb::LHCbID( 50451293u ), LHCb::LHCbID( 52544845u ), LHCb::LHCbID( 281448u ),
             LHCb::LHCbID( 347163u ),   LHCb::LHCbID( 412614u ),   LHCb::LHCbID( 478116u ),   LHCb::LHCbID( 544465u ),
             LHCb::LHCbID( 608427u ),   LHCb::LHCbID( 675630u ),   LHCb::LHCbID( 739376u ),   LHCb::LHCbID( 807421u ),
             LHCb::LHCbID( 873853u ),   LHCb::LHCbID( 938581u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 22167271u ), LHCb::LHCbID( 24251565u ), LHCb::LHCbID( 26336883u ),
                                    LHCb::LHCbID( 28421434u ), LHCb::LHCbID( 30766075u ), LHCb::LHCbID( 32875713u ),
                                    LHCb::LHCbID( 34985351u ), LHCb::LHCbID( 37094221u ), LHCb::LHCbID( 39203859u ),
                                    LHCb::LHCbID( 298639u ),   LHCb::LHCbID( 366438u ),   LHCb::LHCbID( 429475u ),
                                    LHCb::LHCbID( 493594u ),   LHCb::LHCbID( 561978u ),   LHCb::LHCbID( 627330u ),
                                    LHCb::LHCbID( 692777u ),   LHCb::LHCbID( 758633u ),   LHCb::LHCbID( 825260u ),
                                    LHCb::LHCbID( 892425u ),   LHCb::LHCbID( 956023u ),   LHCb::LHCbID( 1023754u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 23239882u ), LHCb::LHCbID( 25336208u ), LHCb::LHCbID( 27432789u ),
                                    LHCb::LHCbID( 29529627u ), LHCb::LHCbID( 31742172u ), LHCb::LHCbID( 33839778u ),
                                    LHCb::LHCbID( 35937128u ), LHCb::LHCbID( 38034477u ), LHCb::LHCbID( 264120u ),
                                    LHCb::LHCbID( 345913u ),   LHCb::LHCbID( 395023u ),   LHCb::LHCbID( 477148u ),
                                    LHCb::LHCbID( 541047u ),   LHCb::LHCbID( 607562u ),   LHCb::LHCbID( 671933u ),
                                    LHCb::LHCbID( 738815u ),   LHCb::LHCbID( 803645u ),   LHCb::LHCbID( 869232u ),
                                    LHCb::LHCbID( 934512u ),   LHCb::LHCbID( 1000500u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 33705459u ), LHCb::LHCbID( 35799526u ), LHCb::LHCbID( 37893849u ), LHCb::LHCbID( 39985086u ),
             LHCb::LHCbID( 42074005u ), LHCb::LHCbID( 44159583u ), LHCb::LHCbID( 46245160u ), LHCb::LHCbID( 48336396u ),
             LHCb::LHCbID( 262184u ), LHCb::LHCbID( 329634u ), LHCb::LHCbID( 397179u ), LHCb::LHCbID( 460895u ),
             LHCb::LHCbID( 527874u ), LHCb::LHCbID( 592311u ), LHCb::LHCbID( 658733u ), LHCb::LHCbID( 723616u ),
             LHCb::LHCbID( 789474u ), LHCb::LHCbID( 920322u ), LHCb::LHCbID( 986309u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 33705459u ), LHCb::LHCbID( 35799526u ), LHCb::LHCbID( 37893849u ), LHCb::LHCbID( 39985086u ),
             LHCb::LHCbID( 42074005u ), LHCb::LHCbID( 44159583u ), LHCb::LHCbID( 46245160u ), LHCb::LHCbID( 48336396u ),
             LHCb::LHCbID( 262505u ), LHCb::LHCbID( 329287u ), LHCb::LHCbID( 393381u ), LHCb::LHCbID( 460568u ),
             LHCb::LHCbID( 528298u ), LHCb::LHCbID( 659161u ), LHCb::LHCbID( 723164u ), LHCb::LHCbID( 789995u ),
             LHCb::LHCbID( 854448u ), LHCb::LHCbID( 920847u ), LHCb::LHCbID( 985758u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 33705459u ), LHCb::LHCbID( 35799526u ), LHCb::LHCbID( 37893849u ),
                                    LHCb::LHCbID( 39985086u ), LHCb::LHCbID( 42074005u ), LHCb::LHCbID( 44159583u ),
                                    LHCb::LHCbID( 46245160u ), LHCb::LHCbID( 48336396u ), LHCb::LHCbID( 262232u ),
                                    LHCb::LHCbID( 329574u ), LHCb::LHCbID( 397222u ), LHCb::LHCbID( 460840u ),
                                    LHCb::LHCbID( 527949u ), LHCb::LHCbID( 592236u ), LHCb::LHCbID( 723536u ),
                                    LHCb::LHCbID( 789571u ), LHCb::LHCbID( 854890u ), LHCb::LHCbID( 986206u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 41434359u ), LHCb::LHCbID( 43530214u ), LHCb::LHCbID( 45625294u ), LHCb::LHCbID( 47720631u ),
             LHCb::LHCbID( 49817003u ), LHCb::LHCbID( 51913119u ), LHCb::LHCbID( 54009235u ), LHCb::LHCbID( 279273u ),
             LHCb::LHCbID( 345321u ), LHCb::LHCbID( 410342u ), LHCb::LHCbID( 476390u ), LHCb::LHCbID( 541591u ),
             LHCb::LHCbID( 607288u ), LHCb::LHCbID( 672658u ), LHCb::LHCbID( 738357u ), LHCb::LHCbID( 803902u ),
             LHCb::LHCbID( 869262u ), LHCb::LHCbID( 934967u ), LHCb::LHCbID( 1000333u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 41434359u ), LHCb::LHCbID( 43530214u ), LHCb::LHCbID( 45625294u ),
                                    LHCb::LHCbID( 47720631u ), LHCb::LHCbID( 49817003u ), LHCb::LHCbID( 51913119u ),
                                    LHCb::LHCbID( 54009235u ), LHCb::LHCbID( 279244u ), LHCb::LHCbID( 345350u ),
                                    LHCb::LHCbID( 410313u ), LHCb::LHCbID( 476419u ), LHCb::LHCbID( 541554u ),
                                    LHCb::LHCbID( 672622u ), LHCb::LHCbID( 738392u ), LHCb::LHCbID( 803862u ),
                                    LHCb::LHCbID( 934928u ), LHCb::LHCbID( 1000374u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 42489333u ), LHCb::LHCbID( 44586206u ), LHCb::LHCbID( 46683080u ),
                                    LHCb::LHCbID( 48779965u ), LHCb::LHCbID( 50876850u ), LHCb::LHCbID( 52973735u ),
                                    LHCb::LHCbID( 295889u ), LHCb::LHCbID( 426972u ), LHCb::LHCbID( 492526u ),
                                    LHCb::LHCbID( 558266u ), LHCb::LHCbID( 623379u ), LHCb::LHCbID( 689346u ),
                                    LHCb::LHCbID( 754433u ), LHCb::LHCbID( 820632u ), LHCb::LHCbID( 885299u ),
                                    LHCb::LHCbID( 951710u ), LHCb::LHCbID( 1016353u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 42131452u ), LHCb::LHCbID( 44231910u ), LHCb::LHCbID( 46332624u ), LHCb::LHCbID( 48821245u ),
             LHCb::LHCbID( 50921207u ), LHCb::LHCbID( 53020400u ), LHCb::LHCbID( 263232u ), LHCb::LHCbID( 328644u ),
             LHCb::LHCbID( 394263u ), LHCb::LHCbID( 459767u ), LHCb::LHCbID( 525181u ), LHCb::LHCbID( 590982u ),
             LHCb::LHCbID( 656210u ), LHCb::LHCbID( 722106u ), LHCb::LHCbID( 918169u ), LHCb::LHCbID( 984434u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 42130415u ), LHCb::LHCbID( 44230617u ), LHCb::LHCbID( 46330819u ), LHCb::LHCbID( 48429496u ),
             LHCb::LHCbID( 50528172u ), LHCb::LHCbID( 53024249u ), LHCb::LHCbID( 263232u ), LHCb::LHCbID( 328644u ),
             LHCb::LHCbID( 394263u ), LHCb::LHCbID( 459767u ), LHCb::LHCbID( 525181u ), LHCb::LHCbID( 590982u ),
             LHCb::LHCbID( 656210u ), LHCb::LHCbID( 722106u ), LHCb::LHCbID( 918169u ), LHCb::LHCbID( 984434u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 44580669u ), LHCb::LHCbID( 46673468u ), LHCb::LHCbID( 48768571u ),
                                    LHCb::LHCbID( 50863419u ), LHCb::LHCbID( 52958522u ), LHCb::LHCbID( 295843u ),
                                    LHCb::LHCbID( 361521u ), LHCb::LHCbID( 426948u ), LHCb::LHCbID( 492551u ),
                                    LHCb::LHCbID( 558290u ), LHCb::LHCbID( 623360u ), LHCb::LHCbID( 689393u ),
                                    LHCb::LHCbID( 754391u ), LHCb::LHCbID( 820721u ), LHCb::LHCbID( 885216u ),
                                    LHCb::LHCbID( 951821u ), LHCb::LHCbID( 1016246u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 45279218u ), LHCb::LHCbID( 47379170u ), LHCb::LHCbID( 49477850u ),
                                    LHCb::LHCbID( 51576273u ), LHCb::LHCbID( 54063356u ), LHCb::LHCbID( 315109u ),
                                    LHCb::LHCbID( 379200u ), LHCb::LHCbID( 446070u ), LHCb::LHCbID( 510402u ),
                                    LHCb::LHCbID( 576645u ), LHCb::LHCbID( 641949u ), LHCb::LHCbID( 707604u ),
                                    LHCb::LHCbID( 773159u ), LHCb::LHCbID( 838213u ), LHCb::LHCbID( 904668u ),
                                    LHCb::LHCbID( 969171u ), LHCb::LHCbID( 1035883u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 44571896u ), LHCb::LHCbID( 46665958u ), LHCb::LHCbID( 48761821u ),
                                    LHCb::LHCbID( 50857684u ), LHCb::LHCbID( 52953803u ), LHCb::LHCbID( 311506u ),
                                    LHCb::LHCbID( 378674u ), LHCb::LHCbID( 442449u ), LHCb::LHCbID( 509890u ),
                                    LHCb::LHCbID( 577226u ), LHCb::LHCbID( 641336u ), LHCb::LHCbID( 708163u ),
                                    LHCb::LHCbID( 772561u ), LHCb::LHCbID( 838850u ), LHCb::LHCbID( 903997u ),
                                    LHCb::LHCbID( 969784u ), LHCb::LHCbID( 1035230u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 46700021u ), LHCb::LHCbID( 48798188u ), LHCb::LHCbID( 50896356u ), LHCb::LHCbID( 52994780u ),
             LHCb::LHCbID( 295504u ), LHCb::LHCbID( 361886u ), LHCb::LHCbID( 426589u ), LHCb::LHCbID( 492941u ),
             LHCb::LHCbID( 557763u ), LHCb::LHCbID( 623915u ), LHCb::LHCbID( 688848u ), LHCb::LHCbID( 754969u ),
             LHCb::LHCbID( 820017u ), LHCb::LHCbID( 885950u ), LHCb::LHCbID( 951101u ), LHCb::LHCbID( 1017003u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>(
            {LHCb::LHCbID( 46705392u ), LHCb::LHCbID( 48803816u ), LHCb::LHCbID( 50902496u ), LHCb::LHCbID( 53000921u ),
             LHCb::LHCbID( 295504u ), LHCb::LHCbID( 361886u ), LHCb::LHCbID( 426589u ), LHCb::LHCbID( 492941u ),
             LHCb::LHCbID( 557763u ), LHCb::LHCbID( 623915u ), LHCb::LHCbID( 688848u ), LHCb::LHCbID( 754969u ),
             LHCb::LHCbID( 820017u ), LHCb::LHCbID( 885950u ), LHCb::LHCbID( 951101u ), LHCb::LHCbID( 1017003u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 47756280u ), LHCb::LHCbID( 49854960u ), LHCb::LHCbID( 51953896u ),
                                    LHCb::LHCbID( 54052832u ), LHCb::LHCbID( 279203u ), LHCb::LHCbID( 345423u ),
                                    LHCb::LHCbID( 476471u ), LHCb::LHCbID( 541476u ), LHCb::LHCbID( 607438u ),
                                    LHCb::LHCbID( 672567u ), LHCb::LHCbID( 738486u ), LHCb::LHCbID( 803740u ),
                                    LHCb::LHCbID( 869463u ), LHCb::LHCbID( 934827u ), LHCb::LHCbID( 1000512u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 45353867u ), LHCb::LHCbID( 49478869u ), LHCb::LHCbID( 51934202u ),
                                    LHCb::LHCbID( 54003187u ), LHCb::LHCbID( 262984u ), LHCb::LHCbID( 328654u ),
                                    LHCb::LHCbID( 393842u ), LHCb::LHCbID( 459949u ), LHCb::LHCbID( 590737u ),
                                    LHCb::LHCbID( 722051u ), LHCb::LHCbID( 787353u ), LHCb::LHCbID( 852816u ),
                                    LHCb::LHCbID( 918169u ), LHCb::LHCbID( 984151u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 8918176u ), LHCb::LHCbID( 13156524u ), LHCb::LHCbID( 15264944u ),
                                    LHCb::LHCbID( 266763u ), LHCb::LHCbID( 333191u ), LHCb::LHCbID( 397415u ),
                                    LHCb::LHCbID( 464728u ), LHCb::LHCbID( 531748u ), LHCb::LHCbID( 596572u ),
                                    LHCb::LHCbID( 662379u ), LHCb::LHCbID( 728139u ), LHCb::LHCbID( 792683u ),
                                    LHCb::LHCbID( 859907u ), LHCb::LHCbID( 927416u ), LHCb::LHCbID( 991477u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 48792575u ), LHCb::LHCbID( 50890489u ), LHCb::LHCbID( 52988402u ),
                                    LHCb::LHCbID( 295596u ), LHCb::LHCbID( 361791u ), LHCb::LHCbID( 426687u ),
                                    LHCb::LHCbID( 492840u ), LHCb::LHCbID( 557893u ), LHCb::LHCbID( 623782u ),
                                    LHCb::LHCbID( 688983u ), LHCb::LHCbID( 754829u ), LHCb::LHCbID( 820182u ),
                                    LHCb::LHCbID( 885781u ), LHCb::LHCbID( 951272u ), LHCb::LHCbID( 1016829u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 42058832u ), LHCb::LHCbID( 44132957u ), LHCb::LHCbID( 46207082u ),
                                    LHCb::LHCbID( 263738u ), LHCb::LHCbID( 328085u ), LHCb::LHCbID( 394671u ),
                                    LHCb::LHCbID( 459299u ), LHCb::LHCbID( 525539u ), LHCb::LHCbID( 590565u ),
                                    LHCb::LHCbID( 656462u ), LHCb::LHCbID( 721792u ), LHCb::LHCbID( 787353u ),
                                    LHCb::LHCbID( 853031u ), LHCb::LHCbID( 918269u ), LHCb::LHCbID( 984269u )} ),
        s );
    return t;
  }
  if ( i == r++ ) {

    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 7989904u ), LHCb::LHCbID( 9713398u ), LHCb::LHCbID( 11665190u ),
                                    LHCb::LHCbID( 296323u ), LHCb::LHCbID( 360909u ), LHCb::LHCbID( 427137u ),
                                    LHCb::LHCbID( 492227u ), LHCb::LHCbID( 558203u ), LHCb::LHCbID( 623300u ),
                                    LHCb::LHCbID( 688995u ), LHCb::LHCbID( 754642u ), LHCb::LHCbID( 820089u ),
                                    LHCb::LHCbID( 885687u ), LHCb::LHCbID( 950862u ), LHCb::LHCbID( 1017048u )} ),
        s );
    return t;
  }
  {
    LHCb::Track t(
        LHCb::Track::PatForward, LHCb::Track::Long, LHCb::Track::PatRecIDs,
        std::vector<LHCb::LHCbID>( {LHCb::LHCbID( 6029778u ), LHCb::LHCbID( 9713398u ), LHCb::LHCbID( 11643622u ),
                                    LHCb::LHCbID( 312545u ), LHCb::LHCbID( 377701u ), LHCb::LHCbID( 443173u ),
                                    LHCb::LHCbID( 509229u ), LHCb::LHCbID( 576892u ), LHCb::LHCbID( 641741u ),
                                    LHCb::LHCbID( 707494u ), LHCb::LHCbID( 773307u ), LHCb::LHCbID( 841283u ),
                                    LHCb::LHCbID( 905729u ), LHCb::LHCbID( 1037316u )} ),
        s );
    return t;
  }
}
