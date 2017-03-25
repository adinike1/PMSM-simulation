#include "__cf_smo_pmsm.h"
#ifndef RTW_HEADER_smo_pmsm_acc_h_
#define RTW_HEADER_smo_pmsm_acc_h_
#include <stddef.h>
#ifndef smo_pmsm_acc_COMMON_INCLUDES_
#define smo_pmsm_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn 
#define S_FUNCTION_LEVEL 2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "smo_pmsm_acc_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
typedef struct { real_T py40wkbpne [ 6 ] ; real_T hcmckjxj4m ; real_T
l5l43lmhyw ; real_T ktknu0ljbz ; real_T ocg5lthmk3 ; real_T naitwgvhrb ;
real_T icfyjo5aav ; real_T jlyhzdoefb ; real_T dcxt0l5rt0 ; real_T n3v1lerr4s
; real_T punwtcvh3l ; real_T gk3ua33zar ; real_T pc55splrxj ; real_T
gwjil4o25h ; real_T g5edw5zsqr ; real_T jf54v3z3rn ; real_T mrnav5o4jm ;
real_T h3ddfdb0kp ; real_T n3bhsttz4t [ 4 ] ; real_T k3prbrvntf [ 3 ] ;
real_T i451vdhycl ; real_T ilpe2xv1jg [ 6 ] ; real_T fmslspe3c4 [ 9 ] ;
real_T f20jh4zpja [ 6 ] ; real_T kjul3kn4qe ; real_T nfnzrjxjxl ; real_T
nhzkrmfatm [ 6 ] ; real_T nfx23mlvta [ 6 ] ; real_T i255dcjtzd ; real_T
lsp0h2fsk5 ; real_T aao2hu4xkt ; real_T dppxr2buld ; real_T jhpntzblo5 ;
real_T lu3amsfpco ; real_T kzq0sj5wub ; real_T pc4gwysr13 ; real_T mib1cnkosk
; real_T fiu3rqzli0 ; real_T kqjpgh21ga ; real_T jcbhqe4ka0 ; real_T
mkcknmghak ; real_T oysyr54mgx ; real_T otunc5d5wi ; real_T bmb4u51xuf ;
real_T kkyo4gag5j ; real_T n3w21wsuz5 ; real_T ndgntjjmom [ 6 ] ; real_T
iosb3xtmpc [ 6 ] ; real_T prbtzs3wf1 [ 6 ] ; real_T cqzpqnmhgy [ 6 ] ; real_T
la1scbg12o [ 6 ] ; real_T p0jdd2pu5t [ 6 ] ; real_T aekyu25jbr ; real_T
crsd2laslt ; real_T kox4xve4zr ; real_T cg4wmlp5ix ; real_T ee2i1v1tjp ;
real_T bryi2rl5fk ; real_T fkflf1j4ca ; real_T hhi5g0guna ; real_T hmnk3db0iz
; real_T cohmkmeee3 ; real_T e2fcwx5b5h ; real_T jbtneaxtb1 ; real_T
n2tkqovk4n ; real_T ns1ut0sdoh ; real_T i25gsx2344 ; real_T c1fxmqd2h2 ;
real_T pivnijqxfn ; real_T g5sqtm2gno ; real_T gvpagwlz5r ; real_T cty4x01hl2
; real_T gnkppns5vf ; real_T a5jrbxsuca ; real_T efsr5zk4nl ; real_T
crgxzbbe3h ; real_T h4qp3htczy ; real_T a0cqirt5vm ; real_T o3ojozmthl ;
real_T iugza5zoky ; real_T cfaublgbnq ; real_T etvnr03gcw ; real_T gmz5lsvnek
; real_T km0m1e5uav ; real_T litmqfkcd4 ; real_T lh5bl5th3n ; real_T
mddtoekqpu ; real_T a4wicxybc5 ; real_T gwpe42cqjt ; real_T maxhvsu33r ;
real_T gnfet0yspp ; real_T lz4aepvowo ; real_T io4mtaoh0w ; real_T g0ruwowfyf
; real_T pkz1qbvh4m ; real_T h25g3lv4oa ; real_T o4hkqjxn2a ; real_T
bwbowqzvnr ; real_T ltyfpua2cw ; real_T pj4avxpgt1 ; real_T effsaoowjf ;
boolean_T g2zcgwjy3l ; boolean_T kmc5fubtlf ; boolean_T cf4sejup4q ;
boolean_T eqx0u4d0u3 ; boolean_T hkbah243my ; boolean_T ffzdorelem ;
boolean_T n1z111racx ; char pad_n1z111racx ; } n3qi1whofz ; typedef struct {
real_T nyzvbb0wlq [ 6 ] ; real_T gfgpn5e4av ; real_T ahjgtatvvd ; real_T
mztscczg40 ; real_T py20acqzvx ; real_T lq2yvegszi ; real_T etuxy54woj ;
real_T mx2spow2mn ; real_T fyk5qqmdjx ; real_T e3vfervdly ; real_T f12skvkngo
; real_T ctc1gatn4d ; real_T biayprefal ; real_T ekrg0acyyw ; real_T
ampjprdmt3 ; real_T fampm5vctk ; real_T kx3zqkjxyx ; real_T jvi0b1xji1 [ 6 ]
; real_T c2qs4dll5i [ 6 ] ; void * lgyuirofay [ 3 ] ; struct { void * AS ;
void * BS ; void * CS ; void * DS ; void * DX_COL ; void * BD_COL ; void *
TMP1 ; void * TMP2 ; void * XTMP ; void * SWITCH_STATUS ; void *
SWITCH_STATUS_INIT ; void * SW_CHG ; void * CHOPPER ; void * G_STATE ; void *
IDX_SW_CHG ; void * Y_SWITCH ; void * SWITCH_TYPES ; void * IDX_OUT_SW ; }
nctdbf0cxr ; struct { void * LoggedData ; } eub04tiidh ; struct { void *
LoggedData ; } cersv2lymd ; struct { void * LoggedData ; } ckr51zciye ;
struct { void * LoggedData ; } c4u2nkqiq2 ; struct { void * LoggedData ; }
pdakbc5ec0 ; struct { void * LoggedData ; } gy0l0hgifr ; struct { void *
LoggedData ; } dh5toehmeo ; struct { void * LoggedData ; } jy3lsk3dbj ;
struct { void * LoggedData ; } kvktbxaq44 ; struct { void * LoggedData ; }
dzvh2djzax ; struct { void * LoggedData ; } iz0xm0rgoa ; struct { void *
LoggedData ; } c3sc0u0bdj ; struct { void * LoggedData ; } fxfj50dwtd ;
struct { void * LoggedData ; } p3ss1jip4l ; struct { void * LoggedData ; }
m0ptqr23zi ; struct { void * LoggedData ; } lcb2lxckmq ; struct { void *
LoggedData ; } pnooomcq4x ; struct { void * LoggedData ; } nty4rjqdah ;
struct { void * LoggedData ; } avvn1hovfe ; struct { void * LoggedData ; }
l0qaycx5t2 ; struct { void * LoggedData ; } l4n5dprudq ; struct { void *
LoggedData ; } hxn4lnxlgf ; struct { void * LoggedData ; } fsqgmb11tx ;
struct { void * LoggedData ; } mjhzx5fo1o ; struct { void * LoggedData ; }
lseg4qbadt ; struct { void * LoggedData ; } fdh1k3d2it ; struct { void *
LoggedData ; } p5bxvse0sy ; struct { void * LoggedData ; } o3gai5vywi ;
struct { void * LoggedData ; } fqmtnapad3 ; struct { void * LoggedData ; }
a24qoylk3u ; struct { void * LoggedData ; } mti1tyx5pi ; struct { void *
LoggedData ; } jwbvavtcu2 ; struct { void * LoggedData ; } g51xigbkdi ;
struct { void * LoggedData ; } kdxwjcz1ty ; struct { void * LoggedData ; }
daxyf5djyn ; struct { void * LoggedData ; } khnorfwfca ; struct { void *
LoggedData ; } e2qyqhwsal ; struct { void * LoggedData ; } gkz3kalfph ;
struct { void * LoggedData ; } eohumdsl0l ; struct { void * LoggedData ; }
px3bskehg1 ; struct { void * LoggedData ; } m1pfmgt2ql ; struct { void *
LoggedData ; } prsafpwpwg ; struct { void * LoggedData ; } cy5ryxivb3 ;
struct { void * LoggedData ; } dttingwlnq ; struct { void * LoggedData ; }
br3ltzce5j ; struct { void * LoggedData ; } gkyp1xplte ; struct { void *
LoggedData ; } hmo3icofvm ; struct { void * LoggedData ; } hy0iqyebeb ;
struct { void * LoggedData ; } kib05syttq ; struct { void * LoggedData ; }
id2fiagwue ; struct { void * LoggedData ; } nlqzkshsb0 ; struct { void *
LoggedData ; } gos3hs3m3w ; struct { void * LoggedData ; } dkmpmzvfrt ;
struct { void * LoggedData ; } mfnozc3ctz ; struct { void * LoggedData ; }
pjmyhpa3w3 ; struct { void * LoggedData ; } isw4qkahed ; struct { void *
LoggedData ; } gbj3g41rgj ; struct { void * LoggedData ; } pmlaels5ct ;
struct { void * LoggedData ; } kuhmxaxlm1 ; struct { void * LoggedData ; }
lpktc2lr5m ; struct { void * LoggedData ; } cbflfqyjdt ; struct { void *
LoggedData ; } nmk1sfgjz2 ; struct { void * LoggedData ; } n044fumvmc ;
struct { void * LoggedData ; } liyim1lzym ; struct { void * LoggedData ; }
itbre4s2ek ; struct { void * LoggedData ; } elpaq455vo ; struct { void *
LoggedData ; } dv4ysgokd2 ; struct { void * LoggedData ; } ao2fu3mbat ;
struct { void * LoggedData ; } mmapeyvjms ; struct { void * LoggedData ; }
l3djdn51j1 ; struct { void * LoggedData ; } htidcgabmu ; struct { void *
LoggedData ; } maj22r2qv5 ; struct { void * LoggedData ; } k2xnsdpel5 ;
struct { void * LoggedData ; } hpxmixae0t ; struct { void * LoggedData ; }
j5iiu4fbij ; struct { void * LoggedData ; } pucf5ygli2 ; struct { void *
LoggedData ; } g0x001ru0i ; struct { void * LoggedData ; } lx15gvafln ;
struct { void * LoggedData ; } ctyv1evssh ; struct { void * LoggedData ; }
amwyja13v5 ; struct { void * LoggedData ; } kpo0iww0x1 ; struct { void *
LoggedData ; } fjqwlnhxhi ; struct { void * LoggedData ; } afkkilxor1 ;
struct { void * LoggedData ; } cngcszp2rx ; struct { void * LoggedData ; }
pa1uc551gx ; struct { void * LoggedData ; } ia2k5a0jtp ; struct { void *
LoggedData ; } l42qhsxqrr ; struct { void * LoggedData ; } pyvhqznz3p ;
struct { void * LoggedData ; } b1ccj5aiqv ; struct { void * LoggedData ; }
o5fogjuucu ; struct { void * LoggedData ; } llizhwsfxm ; struct { void *
LoggedData ; } nmzslsnsjq ; struct { void * LoggedData ; } evv5uzo41z ;
struct { void * LoggedData ; } n2cxqfz5to ; struct { void * LoggedData ; }
ojhlye0bfy ; struct { void * LoggedData ; } ctxsvp2ej2 ; struct { void *
LoggedData ; } akdkluemam ; struct { void * LoggedData ; } n5hk5oojwp ; int_T
hgp5a1ahfm ; int_T evkatqoc5x ; int_T jfnbk1ptrm ; int_T ev3y0jt4dr [ 4 ] ;
int8_T g20ppmywru ; int8_T flqsivb2oa [ 6 ] ; boolean_T og1yjm2i4n ;
boolean_T eqbihanczl ; boolean_T dd2pyt1rs4 ; char pad_dd2pyt1rs4 [ 2 ] ; }
ew10rzwqr2 ; typedef struct { real_T geynm3wj5u ; real_T iuy4zfigow ; real_T
ezuprrrw4i ; } d15n1ti4kq ; typedef struct { ZCSigState lrboanyrxp ;
ZCSigState ilaiasprj5 ; ZCSigState ng5oyappx4 ; } o24blyp2sp ; struct
loikxjbxjg_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4
; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T
P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ;
real_T P_16 [ 3 ] ; real_T P_17 [ 3 ] ; real_T P_18 ; real_T P_19 ; real_T
P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ;
real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T
P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ;
real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T
P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ;
real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T
P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ;
real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T
P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ;
real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T
P_75 [ 6 ] ; real_T P_76 [ 6 ] ; real_T P_77 ; real_T P_78 ; real_T P_79 ;
real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T
P_85 ; real_T P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ;
real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T
P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101
; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ;
real_T P_107 ; real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ;
real_T P_112 ; real_T P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ;
real_T P_117 ; real_T P_118 ; real_T P_119 ; real_T P_120 ; real_T P_121 ;
real_T P_122 ; real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T P_126 ;
real_T P_127 ; real_T P_128 ; real_T P_129 ; real_T P_130 ; real_T P_131 ;
real_T P_132 ; real_T P_133 ; real_T P_134 ; real_T P_135 ; real_T P_136 ;
uint8_T P_137 ; uint8_T P_138 ; uint8_T P_139 ; uint8_T P_140 ; uint8_T P_141
; uint8_T P_142 ; uint8_T P_143 ; boolean_T P_144 ; } ; extern loikxjbxjg
o2iu0a2jke ;
#endif
