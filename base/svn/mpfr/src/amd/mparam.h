/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005-2021 Free Software Foundation, Inc.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LESSER.  If not, see
https://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

/* Generated by MPFR's tuneup.c, 2018-02-22, gcc 6.3.0 */
/* gcc13.fsffrance.org (Dual-Core AMD Opteron(tm) Processor 2212)
   with gmp 6.1.2, which uses -m64 -mtune=k8 -march=k8. */

#define MPFR_MULHIGH_TAB  \
 -1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,9,9,11, \
 12,13,11,15,14,15,15,16,18,18,19,20,18,19,19,20, \
 22,23,23,24,26,30,28,24,30,32,30,32,32,30,30,32, \
 32,30,30,32,32,38,32,40,36,36,40,40,38,38,38,38, \
 38,40,44,44,46,46,44,46,48,46,52,48,56,56,56,56, \
 56,56,56,60,60,60,64,64,64,64,64,64,64,64,64,64, \
 72,72,72,72,72,72,72,72,72,72,72,72,80,80,80,80, \
 80,80,80,80,80,80,80,80,80,93,80,93,93,80,80,93, \
 80,80,80,80,80,105,93,93,93,93,93,93,93,93,93,108, \
 93,93,111,93,105,117,105,117,117,117,111,117,117,105,111,105, \
 108,105,117,117,117,117,117,117,117,117,117,117,117,117,111,117, \
 117,117,117,117,129,129,117,129,129,129,135,129,129,129,135,135, \
 135,141,141,129,129,141,132,141,141,141,141,135,141,141,141,141, \
 141,141,141,141,141,141,141,159,141,153,141,153,153,165,165,165, \
 159,165,165,165,165,165,165,165,165,165,165,177,189,189,189,189, \
 189,189,177,189,189,189,189,189,189,189,189,189,189,189,189,189, \
 189,189,189,189,189,189,189,189,189,189,189,189,189,189,189,189, \
 189,213,213,189,189,189,189,189,213,213,213,213,213,213,213,213, \
 213,213,213,213,213,213,213,213,213,213,213,213,213,213,213,213, \
 213,213,213,213,213,213,213,213,213,213,213,213,213,213,225,225, \
 225,237,225,225,237,237,237,237,237,237,237,237,237,237,237,252, \
 237,237,252,252,252,252,252,252,252,252,252,252,252,252,252,252, \
 252,252,284,252,284,284,252,284,284,252,284,284,284,284,284,284, \
 284,284,284,284,284,284,284,284,284,284,284,284,284,284,284,284, \
 284,284,284,284,284,284,284,284,284,284,284,284,284,300,300,284, \
 300,300,300,300,300,300,300,300,316,316,315,316,316,315,316,316, \
 316,316,315,316,316,316,316,316,316,316,316,316,316,316,316,316, \
 316,314,315,316,316,316,316,314,315,316,316,316,316,316,316,316, \
 316,316,316,316,316,316,316,316,316,378,378,378,378,378,378,378, \
 378,378,378,378,378,378,378,378,378,378,378,378,378,378,378,378, \
 378,378,378,378,378,378,378,378,378,378,378,378,378,378,378,378, \
 378,378,378,378,378,378,378,378,378,378,378,378,378,378,378,426, \
 378,426,378,426,378,378,378,378,426,426,426,426,426,426,426,426, \
 426,426,426,426,426,426,426,426,426,426,426,426,426,426,426,426, \
 426,426,426,426,426,426,426,426,426,426,426,426,426,426,426,426, \
 426,426,426,426,426,425,426,426,426,426,426,426,426,426,426,425, \
 426,426,426,426,474,425,474,426,474,474,504,426,474,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,503,504,504, \
 504,504,504,504,504,504,504,503,504,504,503,504,504,504,504,504, \
 504,504,568,504,568,504,504,504,568,504,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,567,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,567,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,567,568,568,568,567,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,567,568,568,568,568,568,568,568,568,568, \
 600,568,568,568,600,632,632,568,632,632,632,632,632,600,632,600, \
 632,632,600,600,632,632,599,600,632,632,632,632,632,632,632,632, \
 632,632,632,632,632,632,632,632,632,632,632,632,632,632,632,632, \
 632,632,632,632,632,632,631,632,632,632,632,632,630,631,632,632, \
 632,632,631,632,632,632,632,632,631,632,631,632,632,632,631,632, \
 632,632,632,632,632,632,632,632,632,632,632,632,632,632,632,631, \
 632,632,632,632,632,632,631,632,632,632,632,632,632,736,632,736, \
 736,736,736,736,736,735,736,735,736,736,736,735,736,736,736,735, \
 735,736,735,736,736,736,736,736,736,736,736,735,736,736,736,736, \
 736,736,736,736,735,736,736,736,736,736,736,736,736,736,735,736, \
 736,736,736,736,736,736,735,736,734,736,736,736,736,736,735,736, \
 735,736,735,736,736,736,736,736,735,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,735,736,736,736,832,736,736,832,832, \
 736,831,831,832,832,832,832,832,832,832,830,832,832,832,832,832, \
 832,832,831,832,832,832,832,832,832,832,832,830,831,832,831,832, \
 831,832,832,832,832,832,831,832,831,831,831,832,832,832,832,832, \
 832,832,832,832,831,832,832,832,832,832,832,832,831,832,831,832 \

#define MPFR_SQRHIGH_TAB  \
 -1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,7,8,9,9,11, \
 11,11,11,12,13,14,15,15,17,18,18,17,17,18,18,20, \
 20,18,19,19,20,21,23,23,24,25,23,23,24,25,26,27, \
 28,27,28,29,28,31,32,31,32,31,32,33,34,34,34,40, \
 40,40,40,40,40,40,40,40,40,46,46,46,42,46,46,48, \
 48,48,48,48,48,48,48,48,56,54,56,56,56,48,56,56, \
 50,50,52,52,62,54,54,56,56,54,58,60,62,62,58,64, \
 64,62,66,64,64,72,66,68,66,72,72,72,72,72,72,72, \
 72,72,72,72,80,72,80,72,80,72,80,80,80,80,80,80, \
 84,80,80,84,80,80,80,80,80,92,92,92,96,92,96,92, \
 96,92,96,92,96,96,96,96,96,96,96,100,96,96,96,96, \
 96,96,96,96,100,96,96,112,112,112,96,112,112,112,112,112, \
 112,112,112,104,112,111,112,112,112,112,112,112,112,112,112,112, \
 112,112,112,141,112,141,135,135,141,135,128,141,141,141,135,141, \
 128,141,140,141,141,141,135,135,141,135,141,141,141,141,141,141, \
 141,141,147,141,141,147,147,141,141,141,159,147,141,147,147,159, \
 158,159,159,159,159,159,165,159,165,165,159,165,165,159,165,165, \
 165,171,159,165,165,165,165,165,165,165,171,171,165,171,171,183, \
 189,189,183,189,189,189,189,189,189,189,189,189,189,189,189,189, \
 189,189,189,188,189,189,188,171,171,188,189,189,189,189,189,189, \
 189,189,183,183,183,189,189,183,188,189,189,195,213,189,189,195, \
 189,189,188,195,189,189,189,195,213,189,189,189,213,213,213,189, \
 189,213,213,189,189,189,195,189,189,189,195,188,189,213,213,195, \
 213,213,213,213,213,213,213,213,213,213,213,213,213,213,213,213, \
 213,213,213,212,213,213,237,236,213,237,213,213,213,213,237,237, \
 237,237,237,237,237,237,237,237,237,237,237,236,237,237,237,237, \
 237,237,237,237,237,249,237,237,237,237,237,237,237,249,237,237, \
 237,272,273,236,273,237,273,273,273,285,273,273,249,273,237,285, \
 273,273,273,273,285,237,285,285,273,285,273,284,285,285,285,285, \
 285,285,285,285,285,285,285,284,285,285,285,285,285,284,273,284, \
 285,285,285,284,285,285,285,285,285,285,285,285,285,285,285,285, \
 285,285,285,285,284,333,333,333,309,333,285,332,333,333,309,333, \
 333,309,332,333,321,321,333,309,333,333,333,333,333,332,333,332, \
 333,333,333,333,333,332,333,333,332,333,333,333,333,333,333,333, \
 333,333,333,333,332,333,333,333,333,333,333,333,333,333,333,333, \
 333,333,333,333,333,332,333,333,333,332,333,333,333,333,333,333, \
 333,333,333,333,333,333,333,333,333,333,333,333,333,333,333,333, \
 333,333,333,333,333,420,333,333,333,402,420,420,402,402,420,420, \
 402,420,420,420,419,402,420,420,420,420,420,420,420,420,420,420, \
 420,420,420,420,420,420,420,420,420,420,420,419,420,420,420,420, \
 420,420,419,420,402,420,420,420,420,420,420,420,420,402,401,420, \
 420,420,402,420,420,402,419,420,420,420,419,420,420,420,420,420, \
 420,420,420,420,420,420,420,420,420,420,420,420,420,420,420,420, \
 420,420,420,420,420,418,419,420,419,420,420,420,420,420,420,420, \
 420,420,420,419,420,420,420,420,420,420,402,420,420,417,420,420, \
 420,420,420,420,420,420,420,420,419,420,420,420,420,420,420,420, \
 420,420,438,420,438,438,420,420,420,420,419,420,420,474,420,474, \
 474,474,474,492,492,474,420,474,492,474,420,492,568,473,420,492, \
 492,492,568,492,568,568,568,568,492,568,568,568,568,568,568,567, \
 568,568,568,568,568,568,492,568,568,492,568,568,568,492,568,568, \
 568,568,568,568,568,492,568,568,568,568,568,568,568,568,567,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,567,568,568,568,568,568,568,568,567,568,568,568,568,568, \
 568,568,567,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,567,568,568,568,568, \
 568,568,568,568,568,568,567,568,566,567,568,568,568,568,568,568, \
 568,568,568,568,566,568,568,568,568,568,568,568,568,568,568,568, \
 568,632,568,632,568,568,568,568,568,568,568,568,568,568,568,568, \
 632,568,568,568,568,568,568,568,568,568,568,568,568,630,568,568, \
 630,632,568,568,632,632,631,632,630,568,632,632,632,632,632,632, \
 632,632,632,632,631,632,632,632,632,632,632,632,664,631,632,664, \
 631,632,632,632,664,628,632,632,662,632,632,632,632,664,664,632, \
 632,632,632,664,664,632,632,632,664,631,632,632,664,632,632,632 \

#define MPFR_DIVHIGH_TAB  \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*0-15*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*16-31*/ \
 0,0,22,0,0,0,0,0,26,26,26,27,0,29,30,30, /*32-47*/ \
 30,30,34,34,0,33,34,0,34,33,0,0,0,0,0,0, /*48-63*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*64-79*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*80-95*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*96-111*/ \
 0,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0, /*112-127*/ \
 0,0,0,0,0,0,74,0,0,78,74,78,74,78,78,74, /*128-143*/ \
 0,0,78,78,78,78,0,78,0,78,0,0,0,0,88,0, /*144-159*/ \
 0,0,0,0,91,92,91,92,90,88,92,90,92,92,0,112, /*160-175*/ \
 92,94,96,95,95,112,104,104,112,112,112,112,112,104,112,120, /*176-191*/ \
 112,112,112,104,112,120,107,112,120,128,112,112,120,120,120,120, /*192-207*/ \
 112,120,120,120,128,128,128,120,128,128,128,128,128,128,128,128, /*208-223*/ \
 128,128,120,128,128,128,128,128,128,120,128,128,128,128,128,128, /*224-239*/ \
 128,128,128,128,136,128,128,128,128,128,148,136,148,128,136,136, /*240-255*/ \
 136,148,148,148,135,156,148,148,135,156,156,148,156,149,160,160, /*256-271*/ \
 156,148,156,156,144,160,156,160,148,156,160,156,156,160,156,149, /*272-287*/ \
 148,160,160,160,156,156,156,156,154,156,156,156,156,156,156,156, /*288-303*/ \
 156,156,156,160,156,156,157,160,160,160,160,160,160,160,184,184, /*304-319*/ \
 184,185,184,179,185,184,184,184,184,184,174,174,183,186,184,186, /*320-335*/ \
 182,184,185,185,186,186,186,184,208,184,192,208,184,184,184,208, /*336-351*/ \
 184,208,184,208,208,209,192,216,209,208,216,208,210,208,208,224, /*352-367*/ \
 222,208,208,216,208,224,210,208,222,210,224,224,208,208,210,224, /*368-383*/ \
 240,232,208,234,206,240,216,208,208,240,240,224,208,208,208,208, /*384-399*/ \
 208,208,224,224,233,208,224,224,208,216,224,224,208,240,224,222, /*400-415*/ \
 240,224,224,256,232,216,240,224,234,256,216,256,224,256,256,232, /*416-431*/ \
 240,240,240,240,255,224,232,256,256,240,256,256,240,256,240,256, /*432-447*/ \
 240,240,256,256,256,240,256,256,256,256,240,256,256,256,256,256, /*448-463*/ \
 256,256,256,256,255,256,256,254,256,256,256,256,256,256,256,256, /*464-479*/ \
 256,256,255,256,256,256,256,256,256,255,256,256,255,256,256,256, /*480-495*/ \
 256,256,256,256,256,256,256,256,256,256,256,256,256,256,280,272, /*496-511*/ \
 272,270,280,296,280,276,280,279,280,280,281,280,280,272,272,280, /*512-527*/ \
 280,272,280,282,312,272,282,312,280,312,280,280,288,280,281,296, /*528-543*/ \
 312,296,312,312,296,296,312,288,312,312,312,315,316,312,312,312, /*544-559*/ \
 312,312,312,312,312,318,312,313,312,302,318,312,311,296,312,312, /*560-575*/ \
 318,312,312,311,312,296,304,311,312,312,312,312,312,312,312,312, /*576-591*/ \
 313,312,312,312,312,312,312,318,312,312,312,312,312,312,311,312, /*592-607*/ \
 316,312,320,312,312,312,312,312,312,312,312,312,316,313,313,318, /*608-623*/ \
 317,316,317,318,320,318,318,318,320,318,348,368,320,336,372,372, /*624-639*/ \
 372,371,367,368,368,372,371,368,372,336,372,368,372,368,364,372, /*640-655*/ \
 372,354,384,368,352,368,372,371,348,352,372,366,368,366,372,368, /*656-671*/ \
 372,365,368,372,368,372,372,371,372,378,369,371,372,372,369,372, /*672-687*/ \
 372,372,370,378,384,372,370,367,416,384,416,416,371,372,420,424, /*688-703*/ \
 366,372,372,368,416,420,372,420,432,372,372,416,378,372,416,384, /*704-719*/ \
 420,416,420,414,416,416,448,416,419,424,425,416,416,425,432,432, /*720-735*/ \
 432,432,432,432,448,424,448,432,444,432,432,444,432,432,448,448, /*736-751*/ \
 448,448,448,448,420,416,420,416,448,448,448,420,448,420,432,432, /*752-767*/ \
 448,426,448,432,416,420,448,432,448,432,414,432,432,420,417,417, /*768-783*/ \
 420,444,416,444,419,424,420,426,432,420,432,416,480,416,420,424, /*784-799*/ \
 420,432,419,420,424,424,420,416,425,419,432,448,448,444,448,432, /*800-815*/ \
 426,420,432,448,448,448,432,448,512,464,444,448,447,448,448,448, /*816-831*/ \
 432,448,448,464,431,467,448,448,448,444,448,432,448,448,448,504, /*832-847*/ \
 448,447,432,432,448,512,432,464,448,504,448,448,480,444,448,449, /*848-863*/ \
 448,512,448,512,480,444,447,448,449,512,480,448,504,480,448,468, /*864-879*/ \
 448,448,448,467,512,464,463,504,480,504,504,448,480,512,512,504, /*880-895*/ \
 480,512,503,480,512,480,504,512,512,467,504,512,512,504,512,512, /*896-911*/ \
 512,512,504,504,462,480,512,504,512,504,504,504,480,464,480,504, /*912-927*/ \
 504,504,504,512,480,504,504,512,504,512,480,504,512,512,512,512, /*928-943*/ \
 512,504,480,504,512,504,480,512,512,480,512,480,561,512,504,512, /*944-959*/ \
 496,504,512,512,504,512,497,512,504,504,504,512,512,512,504,504, /*960-975*/ \
 504,512,512,512,512,512,512,504,512,512,512,512,504,512,512,512, /*976-991*/ \
 562,512,504,512,511,512,512,512,512,504,512,512,512,504,512,512, /*992-1007*/ \
 512,561,512,512,536,512,512,512,512,512,544,559,561,561,563,544 /*1008-1023*/ \

#define MPFR_MUL_THRESHOLD 17 /* limbs */
#define MPFR_SQR_THRESHOLD 16 /* limbs */
#define MPFR_DIV_THRESHOLD 3 /* limbs */
#define MPFR_EXP_2_THRESHOLD 585 /* bits */
#define MPFR_EXP_THRESHOLD 11179 /* bits */
#define MPFR_SINCOS_THRESHOLD 30593 /* bits */
#define MPFR_AI_THRESHOLD1 -11898 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 1175
#define MPFR_AI_THRESHOLD3 18856
/* Tuneup completed successfully, took 705 seconds */