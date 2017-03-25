#include "__cf_smo_pmsm.h"
#include <math.h>
#include "smo_pmsm_acc.h"
#include "smo_pmsm_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T table
[ ] , uint32_T maxIndex ) { real_T frac ; uint32_T iRght ; uint32_T iLeft ;
uint32_T bpIdx ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac = ( u0 - bp0 [
0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [ maxIndex ] ) {
bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght -
iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft =
bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) /
( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex - 1U ;
frac = ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] - bp0 [ maxIndex -
1U ] ) ; } return ( table [ iLeft + 1U ] - table [ iLeft ] ) * frac + table [
iLeft ] ; } static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T
lic03sb0r2 ; real_T knhqtp2env ; real_T emx0iuwzyl ; real_T n1i4f1u00h ;
real_T ecsf1g0rnb ; real_T czsk31lykv ; real_T e0litmzv4l ; real_T msqztuarlx
; real_T es1fslwv3l ; real_T jdbx0qnj5i [ 6 ] ; real_T epcsgzsk3r ; real_T
cl5imw1avf ; real_T ococomfuqn ; real_T jvqjdvkcif ; real_T ffbiqxibkr ;
boolean_T tmp [ 6 ] ; int32_T i ; real_T u0 ; n3qi1whofz * _rtB ; loikxjbxjg
* _rtP ; ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S )
) ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ; _rtB = ( (
n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> py40wkbpne [ i ] = _rtDW -> nyzvbb0wlq
[ i ] ; } } lic03sb0r2 = ssGetT ( S ) ; _rtB -> hcmckjxj4m = ssGetTStart ( S
) ; lic03sb0r2 -= _rtB -> hcmckjxj4m ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> l5l43lmhyw = _rtP -> P_15 ; } lic03sb0r2 = muDoubleScalarRem (
lic03sb0r2 , _rtB -> l5l43lmhyw ) ; _rtB -> ktknu0ljbz = look1_binlxpw (
lic03sb0r2 , _rtP -> P_17 , _rtP -> P_16 , 2U ) ; ssCallAccelRunBlock ( S , 1
, 7 , SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 3 , 0 ) ) { _rtB ->
aekyu25jbr = _rtB -> ocg5lthmk3 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB
-> naitwgvhrb = _rtDW -> gfgpn5e4av ; } if ( ssIsSampleHit ( S , 3 , 0 ) ) {
knhqtp2env = _rtB -> naitwgvhrb ; _rtB -> crsd2laslt = _rtP -> P_20 * _rtB ->
naitwgvhrb ; _rtB -> kox4xve4zr = _rtDW -> ahjgtatvvd ; _rtB -> cg4wmlp5ix =
_rtDW -> mztscczg40 ; ssCallAccelRunBlock ( S , 1 , 14 , SS_CALL_MDL_OUTPUTS
) ; if ( _rtB -> ee2i1v1tjp > _rtP -> P_25 ) { _rtB -> pkz1qbvh4m = _rtB ->
kox4xve4zr ; } else { _rtB -> pkz1qbvh4m = _rtB -> crsd2laslt ; }
ssCallAccelRunBlock ( S , 1 , 16 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 17 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> bryi2rl5fk
= _rtB -> aekyu25jbr - _rtB -> pkz1qbvh4m ; _rtB -> fkflf1j4ca = _rtP -> P_26
* _rtB -> bryi2rl5fk ; _rtB -> hhi5g0guna = _rtDW -> py20acqzvx ; _rtB ->
hmnk3db0iz = _rtB -> fkflf1j4ca + _rtB -> hhi5g0guna ; if ( _rtB ->
hmnk3db0iz > _rtP -> P_29 ) { _rtB -> cohmkmeee3 = _rtP -> P_29 ; } else if (
_rtB -> hmnk3db0iz < _rtP -> P_30 ) { _rtB -> cohmkmeee3 = _rtP -> P_30 ; }
else { _rtB -> cohmkmeee3 = _rtB -> hmnk3db0iz ; } } if ( ssIsSampleHit ( S ,
2 , 0 ) ) { emx0iuwzyl = _rtDW -> lq2yvegszi ; n1i4f1u00h = muDoubleScalarSin
( _rtDW -> lq2yvegszi ) ; ecsf1g0rnb = muDoubleScalarCos ( _rtDW ->
lq2yvegszi ) ; _rtB -> icfyjo5aav = _rtDW -> etuxy54woj ; _rtB -> jlyhzdoefb
= _rtDW -> mx2spow2mn ; _rtB -> dcxt0l5rt0 = _rtB -> icfyjo5aav * ecsf1g0rnb
+ _rtB -> jlyhzdoefb * n1i4f1u00h ; _rtB -> n3v1lerr4s = ( ( - _rtB ->
icfyjo5aav - 1.7320508075688772 * _rtB -> jlyhzdoefb ) * ecsf1g0rnb + (
1.7320508075688772 * _rtB -> icfyjo5aav - _rtB -> jlyhzdoefb ) * n1i4f1u00h )
* 0.5 ; _rtB -> punwtcvh3l = ( 0.0 - _rtB -> n3v1lerr4s ) - _rtB ->
dcxt0l5rt0 ; } if ( ssIsSampleHit ( S , 3 , 0 ) ) { _rtB -> e2fcwx5b5h = ( (
_rtB -> dcxt0l5rt0 - _rtB -> n3v1lerr4s / 2.0 ) - _rtB -> punwtcvh3l / 2.0 )
* 0.816496580927726 ; _rtB -> jbtneaxtb1 = ( _rtB -> n3v1lerr4s - _rtB ->
punwtcvh3l ) * 0.70710678118654757 ; _rtB -> n2tkqovk4n = _rtDW -> fyk5qqmdjx
; _rtB -> ltyfpua2cw = _rtP -> P_39 * _rtB -> n2tkqovk4n ; _rtB -> ns1ut0sdoh
= _rtDW -> e3vfervdly ; e0litmzv4l = muDoubleScalarAtan2 ( _rtB -> ltyfpua2cw
, _rtB -> ns1ut0sdoh ) ; if ( e0litmzv4l > _rtP -> P_42 ) { _rtB ->
gk3ua33zar = _rtP -> P_42 ; } else if ( e0litmzv4l < _rtP -> P_43 ) { _rtB ->
gk3ua33zar = _rtP -> P_43 ; } else { _rtB -> gk3ua33zar = e0litmzv4l ; } _rtB
-> i25gsx2344 = _rtDW -> f12skvkngo ; _rtB -> c1fxmqd2h2 = _rtB -> gk3ua33zar
- _rtB -> i25gsx2344 ; if ( _rtB -> c1fxmqd2h2 >= _rtP -> P_46 ) { e0litmzv4l
= _rtB -> c1fxmqd2h2 ; } else { e0litmzv4l = _rtB -> c1fxmqd2h2 + _rtP ->
P_45 ; } _rtB -> gnfet0yspp = _rtP -> P_47 * e0litmzv4l ; _rtB -> pivnijqxfn
= muDoubleScalarAtan ( _rtP -> P_48 * _rtB -> gnfet0yspp ) ; _rtB ->
lz4aepvowo = _rtB -> gk3ua33zar + _rtB -> pivnijqxfn ; _rtB -> pj4avxpgt1 =
_rtDW -> ctc1gatn4d ; czsk31lykv = ( _rtP -> P_49 * _rtB -> n2tkqovk4n *
muDoubleScalarCos ( _rtB -> pj4avxpgt1 ) - _rtB -> ns1ut0sdoh *
muDoubleScalarSin ( _rtB -> pj4avxpgt1 ) ) * _rtP -> P_52 ; _rtB ->
pc55splrxj = _rtP -> P_53 * czsk31lykv + _rtDW -> biayprefal ; _rtB ->
g5sqtm2gno = muDoubleScalarAtan ( _rtP -> P_56 * _rtB -> pc55splrxj ) ;
msqztuarlx = _rtP -> P_57 ; _rtB -> gvpagwlz5r = muDoubleScalarMod ( _rtB ->
g5sqtm2gno + _rtB -> pj4avxpgt1 , _rtP -> P_57 ) ; ssCallAccelRunBlock ( S ,
1 , 64 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 65 ,
SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB ->
gwjil4o25h = ( emx0iuwzyl - 1.5707963267948966 ) / 5.0 ; } if ( ssIsSampleHit
( S , 3 , 0 ) ) { _rtB -> cty4x01hl2 = _rtP -> P_58 * _rtB -> gwjil4o25h ;
_rtB -> io4mtaoh0w = muDoubleScalarMod ( _rtB -> cty4x01hl2 , _rtP -> P_59 )
; if ( ! ( _rtB -> ee2i1v1tjp > _rtP -> P_60 ) ) { _rtB -> effsaoowjf = _rtB
-> io4mtaoh0w ; } ssCallAccelRunBlock ( S , 1 , 72 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 73 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> gnkppns5vf
= - _rtB -> e2fcwx5b5h * muDoubleScalarSin ( _rtB -> h25g3lv4oa ) + _rtB ->
jbtneaxtb1 * muDoubleScalarCos ( _rtB -> h25g3lv4oa ) ; _rtB -> a5jrbxsuca =
_rtB -> cohmkmeee3 - _rtB -> gnkppns5vf ; _rtB -> efsr5zk4nl = _rtP -> P_61 *
_rtB -> a5jrbxsuca + _rtDW -> ekrg0acyyw ; if ( _rtB -> efsr5zk4nl > _rtP ->
P_64 ) { _rtB -> crgxzbbe3h = _rtP -> P_64 ; } else if ( _rtB -> efsr5zk4nl <
_rtP -> P_65 ) { _rtB -> crgxzbbe3h = _rtP -> P_65 ; } else { _rtB ->
crgxzbbe3h = _rtB -> efsr5zk4nl ; } _rtB -> h4qp3htczy = _rtB -> e2fcwx5b5h *
muDoubleScalarCos ( _rtB -> h25g3lv4oa ) + _rtB -> jbtneaxtb1 *
muDoubleScalarSin ( _rtB -> h25g3lv4oa ) ; _rtB -> a0cqirt5vm = _rtP -> P_66
- _rtB -> h4qp3htczy ; _rtB -> o3ojozmthl = _rtP -> P_67 * _rtB -> a0cqirt5vm
+ _rtDW -> ampjprdmt3 ; if ( _rtB -> o3ojozmthl > _rtP -> P_70 ) { _rtB ->
iugza5zoky = _rtP -> P_70 ; } else if ( _rtB -> o3ojozmthl < _rtP -> P_71 ) {
_rtB -> iugza5zoky = _rtP -> P_71 ; } else { _rtB -> iugza5zoky = _rtB ->
o3ojozmthl ; } msqztuarlx = muDoubleScalarCos ( _rtB -> h25g3lv4oa ) ;
e0litmzv4l = muDoubleScalarSin ( _rtB -> h25g3lv4oa ) ; _rtB -> g5edw5zsqr =
_rtB -> iugza5zoky * msqztuarlx - _rtB -> crgxzbbe3h * e0litmzv4l ; _rtB ->
jf54v3z3rn = _rtB -> iugza5zoky * e0litmzv4l + _rtB -> crgxzbbe3h *
msqztuarlx ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mrnav5o4jm = _rtP
-> P_72 ; _rtB -> h3ddfdb0kp = _rtP -> P_73 ; } _rtB -> n3bhsttz4t [ 0 ] =
_rtB -> g5edw5zsqr ; _rtB -> n3bhsttz4t [ 1 ] = _rtB -> jf54v3z3rn ; _rtB ->
n3bhsttz4t [ 2 ] = _rtB -> mrnav5o4jm ; _rtB -> n3bhsttz4t [ 3 ] = _rtB ->
h3ddfdb0kp ; ssCallAccelRunBlock ( S , 1 , 94 , SS_CALL_MDL_OUTPUTS ) ; _rtB
-> g2zcgwjy3l = ( _rtB -> ktknu0ljbz >= _rtB -> k3prbrvntf [ 0 ] ) ; _rtB ->
kmc5fubtlf = ! _rtB -> g2zcgwjy3l ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { if (
ssIsMajorTimeStep ( S ) ) { _rtDW -> og1yjm2i4n = ( _rtB -> ktknu0ljbz >=
_rtB -> k3prbrvntf [ 1 ] ) ; } _rtB -> cf4sejup4q = _rtDW -> og1yjm2i4n ;
_rtB -> eqx0u4d0u3 = ! _rtB -> cf4sejup4q ; if ( ssIsMajorTimeStep ( S ) ) {
_rtDW -> eqbihanczl = ( _rtB -> ktknu0ljbz >= _rtB -> k3prbrvntf [ 2 ] ) ; }
_rtB -> hkbah243my = _rtDW -> eqbihanczl ; _rtB -> ffzdorelem = ! _rtB ->
hkbah243my ; _rtB -> n1z111racx = _rtP -> P_144 ; if ( ssIsMajorTimeStep ( S
) ) { if ( _rtB -> n1z111racx ) { if ( ! _rtDW -> dd2pyt1rs4 ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } for ( i = 0 ; i < 6 ; i ++ ) { _rtDW -> jvi0b1xji1 [ i ] = _rtP -> P_4 ;
_rtDW -> flqsivb2oa [ i ] = 2 ; _rtDW -> c2qs4dll5i [ i ] = _rtP -> P_13 ; }
_rtDW -> dd2pyt1rs4 = true ; } } else { if ( _rtDW -> dd2pyt1rs4 ) {
ssSetSolverNeedsReset ( S ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtDW ->
jvi0b1xji1 [ i ] = _rtB -> ndgntjjmom [ i ] ; } _rtDW -> dd2pyt1rs4 = false ;
} } } } if ( _rtDW -> dd2pyt1rs4 ) { if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtB -> kkyo4gag5j = _rtP -> P_1 ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> n3w21wsuz5 = _rtP -> P_2 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { tmp
[ 0 ] = _rtB -> g2zcgwjy3l ; tmp [ 1 ] = _rtB -> kmc5fubtlf ; tmp [ 2 ] =
_rtB -> cf4sejup4q ; tmp [ 3 ] = _rtB -> eqx0u4d0u3 ; tmp [ 4 ] = _rtB ->
hkbah243my ; tmp [ 5 ] = _rtB -> ffzdorelem ; for ( i = 0 ; i < 6 ; i ++ ) {
if ( ( ! tmp [ i ] ) && ( _rtDW -> flqsivb2oa [ i ] == 1 ) ) { _rtDW ->
jvi0b1xji1 [ i ] = _rtP -> P_4 ; } _rtB -> ndgntjjmom [ i ] = _rtDW ->
jvi0b1xji1 [ i ] ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { ffbiqxibkr = _rtP
-> P_5 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ )
{ _rtB -> iosb3xtmpc [ i ] = _rtP -> P_6 * _rtB -> ndgntjjmom [ i ] ; } } if
( ssIsSampleHit ( S , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { e0litmzv4l =
( _rtP -> P_9 - _rtB -> ndgntjjmom [ i ] ) * _rtP -> P_10 ; u0 = ffbiqxibkr +
_rtB -> iosb3xtmpc [ i ] ; if ( u0 > _rtP -> P_7 ) { u0 = _rtP -> P_7 ; }
else { if ( u0 < _rtP -> P_8 ) { u0 = _rtP -> P_8 ; } } if ( e0litmzv4l >
_rtP -> P_11 ) { e0litmzv4l = _rtP -> P_11 ; } else { if ( e0litmzv4l < _rtP
-> P_12 ) { e0litmzv4l = _rtP -> P_12 ; } } _rtB -> prbtzs3wf1 [ i ] = u0 +
e0litmzv4l ; } } if ( ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i
++ ) { _rtB -> cqzpqnmhgy [ i ] = _rtDW -> c2qs4dll5i [ i ] ; } } if ( _rtB
-> g2zcgwjy3l ) { _rtB -> la1scbg12o [ 0 ] = _rtB -> py40wkbpne [ 0 ] ; }
else { _rtB -> la1scbg12o [ 0 ] = _rtB -> cqzpqnmhgy [ 0 ] ; } if ( _rtB ->
kmc5fubtlf ) { _rtB -> la1scbg12o [ 1 ] = _rtB -> py40wkbpne [ 1 ] ; } else {
_rtB -> la1scbg12o [ 1 ] = _rtB -> cqzpqnmhgy [ 1 ] ; } if ( _rtB ->
cf4sejup4q ) { _rtB -> la1scbg12o [ 2 ] = _rtB -> py40wkbpne [ 2 ] ; } else {
_rtB -> la1scbg12o [ 2 ] = _rtB -> cqzpqnmhgy [ 2 ] ; } if ( _rtB ->
eqx0u4d0u3 ) { _rtB -> la1scbg12o [ 3 ] = _rtB -> py40wkbpne [ 3 ] ; } else {
_rtB -> la1scbg12o [ 3 ] = _rtB -> cqzpqnmhgy [ 3 ] ; } if ( _rtB ->
hkbah243my ) { _rtB -> la1scbg12o [ 4 ] = _rtB -> py40wkbpne [ 4 ] ; } else {
_rtB -> la1scbg12o [ 4 ] = _rtB -> cqzpqnmhgy [ 4 ] ; } if ( _rtB ->
ffzdorelem ) { _rtB -> la1scbg12o [ 5 ] = _rtB -> py40wkbpne [ 5 ] ; } else {
_rtB -> la1scbg12o [ 5 ] = _rtB -> cqzpqnmhgy [ 5 ] ; } for ( i = 0 ; i < 6 ;
i ++ ) { _rtB -> p0jdd2pu5t [ i ] = _rtB -> prbtzs3wf1 [ i ] * _rtB ->
la1scbg12o [ i ] * _rtB -> n3w21wsuz5 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> g20ppmywru ) ; } } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtB -> i451vdhycl = _rtP -> P_74 ; for ( i = 0 ; i < 6 ; i ++ ) { if ( _rtB
-> py40wkbpne [ i ] != 0.0 ) { _rtB -> ilpe2xv1jg [ i ] = _rtP -> P_75 [ i ]
; } else { _rtB -> ilpe2xv1jg [ i ] = _rtP -> P_76 [ i ] ; } }
ssCallAccelRunBlock ( S , 1 , 107 , SS_CALL_MDL_OUTPUTS ) ; } if (
ssIsSampleHit ( S , 3 , 0 ) ) { ssCallAccelRunBlock ( S , 1 , 108 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> cfaublgbnq = _rtDW -> fampm5vctk ;
ssCallAccelRunBlock ( S , 1 , 110 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 111 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 112 , SS_CALL_MDL_OUTPUTS ) ; msqztuarlx =
muDoubleScalarMod ( ( _rtB -> io4mtaoh0w + _rtP -> P_79 ) - _rtB ->
pivnijqxfn , _rtP -> P_80 ) ; _rtB -> ltyfpua2cw = ( msqztuarlx - _rtP ->
P_81 ) + _rtB -> pivnijqxfn ; ssCallAccelRunBlock ( S , 1 , 119 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> etvnr03gcw = _rtP -> P_82 * _rtB ->
pc55splrxj * _rtP -> P_83 ; ssCallAccelRunBlock ( S , 1 , 122 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> gmz5lsvnek = _rtB -> jlyhzdoefb ; _rtB ->
km0m1e5uav = _rtB -> icfyjo5aav ; _rtB -> kjul3kn4qe = _rtP -> P_84 ; } if (
ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> nfnzrjxjxl = ( 0.0 * _rtB ->
icfyjo5aav * _rtB -> jlyhzdoefb + 0.16539866862653763 * _rtB -> icfyjo5aav )
* 7.5 ; } if ( ssIsSampleHit ( S , 3 , 0 ) ) { _rtB -> litmqfkcd4 = _rtB ->
nfnzrjxjxl ; _rtB -> lh5bl5th3n = _rtB -> dcxt0l5rt0 ; _rtB -> mddtoekqpu =
_rtB -> n3v1lerr4s ; _rtB -> a4wicxybc5 = _rtB -> punwtcvh3l ;
ssCallAccelRunBlock ( S , 1 , 131 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 132 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 133 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 134 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 135 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 136 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 137 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 138 , SS_CALL_MDL_OUTPUTS ) ; e0litmzv4l = _rtP
-> P_85 * _rtB -> gnfet0yspp * _rtP -> P_86 ; if ( e0litmzv4l > _rtP -> P_87
) { _rtB -> gwpe42cqjt = _rtP -> P_87 ; } else if ( e0litmzv4l < _rtP -> P_88
) { _rtB -> gwpe42cqjt = _rtP -> P_88 ; } else { _rtB -> gwpe42cqjt =
e0litmzv4l ; } ssCallAccelRunBlock ( S , 1 , 142 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 143 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
effsaoowjf = _rtDW -> kx3zqkjxyx ; ssCallAccelRunBlock ( S , 1 , 145 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 146 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 147 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 148 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 149 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 150 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 151 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 152 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 153 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> gnfet0yspp = _rtB -> gvpagwlz5r - _rtB ->
io4mtaoh0w ; if ( _rtB -> gnfet0yspp > _rtP -> P_93 ) { e0litmzv4l = _rtB ->
gnfet0yspp ; } else { e0litmzv4l = _rtB -> gnfet0yspp + _rtP -> P_92 ; } if (
e0litmzv4l > _rtP -> P_94 ) { _rtB -> g0ruwowfyf = e0litmzv4l - _rtP -> P_91
; } else { _rtB -> g0ruwowfyf = e0litmzv4l ; } ssCallAccelRunBlock ( S , 1 ,
161 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 162 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> pj4avxpgt1 -= _rtB -> io4mtaoh0w ;
ssCallAccelRunBlock ( S , 1 , 164 , SS_CALL_MDL_OUTPUTS ) ; e0litmzv4l = _rtB
-> effsaoowjf - _rtB -> e2fcwx5b5h ; if ( e0litmzv4l > _rtP -> P_95 ) {
e0litmzv4l = _rtP -> P_95 ; } else { if ( e0litmzv4l < _rtP -> P_96 ) {
e0litmzv4l = _rtP -> P_96 ; } } _rtB -> pj4avxpgt1 = _rtP -> P_97 *
e0litmzv4l ; ssCallAccelRunBlock ( S , 1 , 168 , SS_CALL_MDL_OUTPUTS ) ;
e0litmzv4l = _rtB -> lz4aepvowo - _rtB -> ltyfpua2cw ; if ( e0litmzv4l > _rtP
-> P_100 ) { _rtB -> lz4aepvowo = e0litmzv4l ; } else { _rtB -> lz4aepvowo =
e0litmzv4l + _rtP -> P_99 ; } if ( _rtB -> lz4aepvowo > _rtP -> P_101 ) {
_rtB -> ltyfpua2cw = _rtB -> lz4aepvowo - _rtP -> P_98 ; } else { _rtB ->
ltyfpua2cw = _rtB -> lz4aepvowo ; } ssCallAccelRunBlock ( S , 1 , 176 ,
SS_CALL_MDL_OUTPUTS ) ; msqztuarlx = _rtB -> ocg5lthmk3 * _rtB -> pj4avxpgt1
; _rtB -> pj4avxpgt1 = ( _rtB -> g5edw5zsqr - msqztuarlx ) - 0.0 ;
ssCallAccelRunBlock ( S , 1 , 180 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
ltyfpua2cw = _rtB -> cfaublgbnq - _rtB -> jbtneaxtb1 ; if ( _rtB ->
ltyfpua2cw > _rtP -> P_102 ) { e0litmzv4l = _rtP -> P_102 ; } else if ( _rtB
-> ltyfpua2cw < _rtP -> P_103 ) { e0litmzv4l = _rtP -> P_103 ; } else {
e0litmzv4l = _rtB -> ltyfpua2cw ; } _rtB -> o4hkqjxn2a = _rtP -> P_104 *
e0litmzv4l ; es1fslwv3l = _rtB -> ocg5lthmk3 * _rtB -> o4hkqjxn2a ; _rtB ->
bwbowqzvnr = ( _rtB -> jf54v3z3rn - es1fslwv3l ) - 0.0 ; ssCallAccelRunBlock
( S , 1 , 186 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 187 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 188 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 189 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 190 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 191 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 192 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 193 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 194 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 195 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 196 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> h25g3lv4oa = _rtB -> io4mtaoh0w - _rtB ->
h25g3lv4oa ; ssCallAccelRunBlock ( S , 1 , 198 , SS_CALL_MDL_OUTPUTS ) ; _rtB
-> g0ruwowfyf += _rtP -> P_105 ; ssCallAccelRunBlock ( S , 1 , 201 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 202 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 203 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 204 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 205 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> o4hkqjxn2a = _rtB -> crsd2laslt - _rtB ->
kox4xve4zr ; ssCallAccelRunBlock ( S , 1 , 207 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 208 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 209 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 210 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 211 , SS_CALL_MDL_OUTPUTS ) ; } if (
ssIsSampleHit ( S , 2 , 0 ) ) { emx0iuwzyl = _rtP -> P_106 ; for ( i = 0 ; i
< 6 ; i ++ ) { jdbx0qnj5i [ i ] = _rtP -> P_107 * _rtB -> fmslspe3c4 [ i ] ;
} } _rtB -> nhzkrmfatm [ 0 ] = _rtB -> g2zcgwjy3l ; _rtB -> nhzkrmfatm [ 1 ]
= _rtB -> kmc5fubtlf ; _rtB -> nhzkrmfatm [ 2 ] = _rtB -> cf4sejup4q ; _rtB
-> nhzkrmfatm [ 3 ] = _rtB -> eqx0u4d0u3 ; _rtB -> nhzkrmfatm [ 4 ] = _rtB ->
hkbah243my ; _rtB -> nhzkrmfatm [ 5 ] = _rtB -> ffzdorelem ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { if ( _rtB ->
f20jh4zpja [ i ] >= _rtP -> P_108 ) { e0litmzv4l = jdbx0qnj5i [ i ] ; } else
{ e0litmzv4l = emx0iuwzyl ; } if ( e0litmzv4l > _rtP -> P_109 ) { _rtB ->
nfx23mlvta [ i ] = _rtP -> P_109 ; } else if ( e0litmzv4l < _rtP -> P_110 ) {
_rtB -> nfx23mlvta [ i ] = _rtP -> P_110 ; } else { _rtB -> nfx23mlvta [ i ]
= e0litmzv4l ; } } } if ( ssIsSampleHit ( S , 3 , 0 ) ) { epcsgzsk3r = _rtP
-> P_111 * _rtB -> effsaoowjf ; _rtB -> i255dcjtzd = _rtP -> P_112 *
czsk31lykv ; _rtB -> lsp0h2fsk5 = ( msqztuarlx - _rtB -> n2tkqovk4n ) * _rtP
-> P_113 ; _rtB -> aao2hu4xkt = ( _rtB -> etvnr03gcw - _rtB -> kox4xve4zr ) *
_rtP -> P_114 ; _rtB -> dppxr2buld = ( es1fslwv3l - _rtB -> ns1ut0sdoh ) *
_rtP -> P_115 ; cl5imw1avf = _rtP -> P_116 * _rtB -> pj4avxpgt1 ; ococomfuqn
= _rtP -> P_117 * _rtB -> cfaublgbnq ; jvqjdvkcif = _rtP -> P_118 * _rtB ->
bwbowqzvnr ; _rtB -> jhpntzblo5 = ( _rtB -> gwpe42cqjt - _rtB -> cg4wmlp5ix )
* _rtP -> P_119 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> lu3amsfpco =
( ( 2.0 * _rtB -> fmslspe3c4 [ 6 ] + _rtB -> fmslspe3c4 [ 7 ] ) * ecsf1g0rnb
+ 1.7320508075688772 * _rtB -> fmslspe3c4 [ 7 ] * n1i4f1u00h ) *
0.33333333333333331 ; _rtB -> kzq0sj5wub = ( ( 2.0 * _rtB -> fmslspe3c4 [ 6 ]
+ _rtB -> fmslspe3c4 [ 7 ] ) * n1i4f1u00h + - 1.7320508075688772 * _rtB ->
fmslspe3c4 [ 7 ] * ecsf1g0rnb ) * 0.33333333333333331 ; _rtB -> pc4gwysr13 =
_rtP -> P_121 * _rtB -> naitwgvhrb ; _rtB -> mib1cnkosk = ( _rtP -> P_120 *
_rtB -> kzq0sj5wub - _rtP -> P_123 * _rtB -> jlyhzdoefb ) + _rtB ->
pc4gwysr13 * _rtB -> icfyjo5aav * _rtP -> P_122 ; _rtB -> fiu3rqzli0 = ( (
_rtP -> P_124 * _rtB -> lu3amsfpco - _rtP -> P_126 * _rtB -> icfyjo5aav ) -
_rtB -> jlyhzdoefb * _rtB -> pc4gwysr13 * _rtP -> P_125 ) - _rtP -> P_127 *
_rtB -> pc4gwysr13 ; _rtB -> kqjpgh21ga = ( ( _rtB -> nfnzrjxjxl - _rtB ->
kjul3kn4qe ) - ( _rtP -> P_129 * muDoubleScalarSign ( _rtB -> naitwgvhrb ) +
_rtP -> P_128 * _rtB -> naitwgvhrb ) ) * _rtP -> P_130 ; } if ( ssIsSampleHit
( S , 3 , 0 ) ) { ssCallAccelRunBlock ( S , 1 , 266 , SS_CALL_MDL_OUTPUTS ) ;
_rtB -> bwbowqzvnr = _rtP -> P_131 * knhqtp2env ; ssCallAccelRunBlock ( S , 1
, 268 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> bwbowqzvnr = _rtB -> kzq0sj5wub ;
_rtB -> o4hkqjxn2a = _rtB -> lu3amsfpco ; ssCallAccelRunBlock ( S , 1 , 271 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 272 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 273 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 274 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 275 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 276 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 277 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 278 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 279 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 280 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 281 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 282 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 283 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 284 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 285 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 286 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 287 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 288 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 289 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 290 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 291 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 292 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 293 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> jcbhqe4ka0 = _rtP -> P_132 * _rtB ->
bryi2rl5fk ; ssCallAccelRunBlock ( S , 1 , 295 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 296 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
mkcknmghak = _rtP -> P_133 * _rtB -> a5jrbxsuca ; ssCallAccelRunBlock ( S , 1
, 298 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 299 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 300 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> oysyr54mgx = _rtP -> P_134 * _rtB ->
a0cqirt5vm ; _rtB -> otunc5d5wi = cl5imw1avf - epcsgzsk3r ; _rtB ->
bmb4u51xuf = jvqjdvkcif - ococomfuqn ; ssCallAccelRunBlock ( S , 1 , 304 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 305 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 306 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 307 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 308 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> io4mtaoh0w = muDoubleScalarMod ( _rtB ->
io4mtaoh0w , _rtP -> P_135 ) ; ssCallAccelRunBlock ( S , 1 , 311 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 312 ,
SS_CALL_MDL_OUTPUTS ) ; } ssCallAccelRunBlock ( S , 1 , 313 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 314 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 315 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 316 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 317 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 318 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB ->
maxhvsu33r = _rtP -> P_136 * _rtB -> fmslspe3c4 [ 8 ] ; ssCallAccelRunBlock (
S , 1 , 320 , SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
ssCallAccelRunBlock ( S , 1 , 324 , SS_CALL_MDL_OUTPUTS ) ; }
UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { int32_T i ; real_T tmp
; n3qi1whofz * _rtB ; loikxjbxjg * _rtP ; ew10rzwqr2 * _rtDW ; _rtDW = ( (
ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtP = ( ( loikxjbxjg * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtDW ->
nyzvbb0wlq [ i ] = _rtB -> nfx23mlvta [ i ] ; } _rtDW -> gfgpn5e4av += _rtP
-> P_18 * _rtB -> kqjpgh21ga ; } if ( ssIsSampleHit ( S , 3 , 0 ) ) { _rtDW
-> ahjgtatvvd += _rtP -> P_21 * _rtB -> aao2hu4xkt ; _rtDW -> mztscczg40 +=
_rtP -> P_23 * _rtB -> jhpntzblo5 ; _rtDW -> py20acqzvx += _rtP -> P_27 *
_rtB -> jcbhqe4ka0 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtDW ->
lq2yvegszi += _rtP -> P_31 * _rtB -> pc4gwysr13 ; _rtDW -> etuxy54woj += _rtP
-> P_33 * _rtB -> fiu3rqzli0 ; _rtDW -> mx2spow2mn += _rtP -> P_35 * _rtB ->
mib1cnkosk ; } if ( ssIsSampleHit ( S , 3 , 0 ) ) { _rtDW -> fyk5qqmdjx +=
_rtP -> P_37 * _rtB -> lsp0h2fsk5 ; _rtDW -> e3vfervdly += _rtP -> P_40 *
_rtB -> dppxr2buld ; _rtDW -> f12skvkngo = _rtB -> gk3ua33zar ; _rtDW ->
ctc1gatn4d += _rtP -> P_50 * _rtB -> pc55splrxj ; _rtDW -> biayprefal += _rtP
-> P_54 * _rtB -> i255dcjtzd ; _rtDW -> ekrg0acyyw += _rtP -> P_62 * _rtB ->
mkcknmghak ; _rtDW -> ampjprdmt3 += _rtP -> P_68 * _rtB -> oysyr54mgx ; }
ssCallAccelRunBlock ( S , 1 , 94 , SS_CALL_MDL_UPDATE ) ; if ( _rtDW ->
dd2pyt1rs4 && ssIsSampleHit ( S , 2 , 0 ) ) { tmp = _rtP -> P_3 * _rtB ->
kkyo4gag5j ; for ( i = 0 ; i < 6 ; i ++ ) { _rtDW -> jvi0b1xji1 [ i ] += tmp
; } if ( _rtB -> g2zcgwjy3l ) { _rtDW -> flqsivb2oa [ 0 ] = 1 ; } else {
_rtDW -> flqsivb2oa [ 0 ] = 0 ; } if ( _rtB -> kmc5fubtlf ) { _rtDW ->
flqsivb2oa [ 1 ] = 1 ; } else { _rtDW -> flqsivb2oa [ 1 ] = 0 ; } if ( _rtB
-> cf4sejup4q ) { _rtDW -> flqsivb2oa [ 2 ] = 1 ; } else { _rtDW ->
flqsivb2oa [ 2 ] = 0 ; } if ( _rtB -> eqx0u4d0u3 ) { _rtDW -> flqsivb2oa [ 3
] = 1 ; } else { _rtDW -> flqsivb2oa [ 3 ] = 0 ; } if ( _rtB -> hkbah243my )
{ _rtDW -> flqsivb2oa [ 4 ] = 1 ; } else { _rtDW -> flqsivb2oa [ 4 ] = 0 ; }
if ( _rtB -> ffzdorelem ) { _rtDW -> flqsivb2oa [ 5 ] = 1 ; } else { _rtDW ->
flqsivb2oa [ 5 ] = 0 ; } for ( i = 0 ; i < 6 ; i ++ ) { _rtDW -> c2qs4dll5i [
i ] = _rtB -> la1scbg12o [ i ] ; } } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 1 , 107 , SS_CALL_MDL_UPDATE ) ; } if (
ssIsSampleHit ( S , 3 , 0 ) ) { _rtDW -> fampm5vctk += _rtP -> P_77 * _rtB ->
bmb4u51xuf ; _rtDW -> kx3zqkjxyx += _rtP -> P_89 * _rtB -> otunc5d5wi ; }
UNUSED_PARAMETER ( tid ) ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { n3qi1whofz * _rtB ;
d15n1ti4kq * _rtZCSV ; ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * )
ssGetRootDWork ( S ) ) ; _rtZCSV = ( ( d15n1ti4kq * )
ssGetSolverZcSignalVector ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO (
S ) ) ; ssCallAccelRunBlock ( S , 1 , 7 , SS_CALL_MDL_ZERO_CROSSINGS ) ;
_rtZCSV -> iuy4zfigow = _rtB -> ktknu0ljbz - _rtB -> k3prbrvntf [ 1 ] ;
_rtZCSV -> ezuprrrw4i = _rtB -> ktknu0ljbz - _rtB -> k3prbrvntf [ 2 ] ; }
static void mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S , 0 ,
2733144641U ) ; ssSetChecksumVal ( S , 1 , 3160284351U ) ; ssSetChecksumVal (
S , 2 , 3011878224U ) ; ssSetChecksumVal ( S , 3 , 1518527157U ) ; { mxArray
* slVerStructMat = NULL ; mxArray * slStrMat = mxCreateString ( "simulink" )
; char slVerChar [ 10 ] ; int status = mexCallMATLAB ( 1 , & slVerStructMat ,
1 , & slStrMat , "ver" ) ; if ( status == 0 ) { mxArray * slVerMat =
mxGetField ( slVerStructMat , 0 , "Version" ) ; if ( slVerMat == NULL ) {
status = 1 ; } else { status = mxGetString ( slVerMat , slVerChar , 10 ) ; }
} mxDestroyArray ( slStrMat ) ; mxDestroyArray ( slVerStructMat ) ; if ( (
status == 1 ) || ( strcmp ( slVerChar , "8.3" ) != 0 ) ) { return ; } }
ssSetOptions ( S , SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork (
S ) != sizeof ( ew10rzwqr2 ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( n3qi1whofz ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
loikxjbxjg ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & o2iu0a2jke ) ; rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( (
loikxjbxjg * ) ssGetDefaultParam ( S ) ) -> P_109 = rtInf ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { } static void mdlTerminate (
SimStruct * S ) { }
#include "simulink.c"
