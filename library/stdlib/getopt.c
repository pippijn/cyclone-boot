#include <cyc_include.h>
 struct Cyc___cycFILE;
# 102 "../../library/stdlib/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 163
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 164 "../../library/stdlib/libc/stdlib.h"
extern char*getenv(const char*);
# 31 "./getopt.h"
extern struct _fat_ptr Cyc_optarg;
# 45 "./getopt.h"
extern int Cyc_optind;
# 50
extern int Cyc_opterr;
# 54
extern int Cyc_optopt;struct Cyc_option{struct _fat_ptr name;int has_arg;int*flag;int val;};struct Cyc___cycFILE;
# 53 "./cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 100 "./cycboot.h"
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 313 "./cycboot.h"
extern char*getenv(const char*);
# 38 "./string.h"
extern unsigned Cyc_strlen(struct _fat_ptr);
# 49 "./string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
# 51
extern int Cyc_strncmp(struct _fat_ptr,struct _fat_ptr,unsigned);
# 121 "./string.h"
extern struct _fat_ptr Cyc_strchr(struct _fat_ptr,char);
# 67 "getopt.cyc"
struct _fat_ptr Cyc_optarg;
# 82 "getopt.cyc"
int Cyc_optind=1;
# 88
int Cyc___getopt_initialized;
# 97 "getopt.cyc"
static struct _fat_ptr Cyc_nextchar;
# 102
int Cyc_opterr=1;
# 108
int Cyc_optopt=(int)'?';
# 140 "getopt.cyc"
enum Cyc_ordering_tag{Cyc_REQUIRE_ORDER =0U,Cyc_PERMUTE =1U,Cyc_RETURN_IN_ORDER =2U};
# 144
static enum Cyc_ordering_tag Cyc_ordering;
# 147
static struct _fat_ptr Cyc_posixly_correct;
# 155
static int Cyc_first_nonopt;
static int Cyc_last_nonopt;
# 161
static int Cyc_nonoption_flags_max_len;
static int Cyc_nonoption_flags_len;
# 164
static int Cyc_original_argc;
static int Cyc_original_argv;
# 170
static void  __attribute__((unused )) Cyc_store_args_and_env(int argc,struct _fat_ptr argv){struct _fat_ptr _T0;unsigned char*_T1;struct _fat_ptr*_T2;
# 176
Cyc_original_argc=argc;_T0=argv;_T1=_untag_fat_ptr_check_bound(_T0,sizeof(struct _fat_ptr),1U);_T2=(struct _fat_ptr*)_T1;
Cyc_original_argv=(int)_T2;}
# 191 "getopt.cyc"
static void Cyc_exchange(struct _fat_ptr argv){int _T0;int _T1;struct _fat_ptr _T2;int _T3;unsigned char*_T4;struct _fat_ptr*_T5;struct _fat_ptr _T6;unsigned char*_T7;struct _fat_ptr*_T8;int _T9;struct _fat_ptr _TA;int _TB;int _TC;int _TD;int _TE;int _TF;unsigned char*_T10;struct _fat_ptr*_T11;struct _fat_ptr _T12;unsigned char*_T13;struct _fat_ptr*_T14;int _T15;int _T16;int _T17;int _T18;int _T19;int _T1A;struct _fat_ptr _T1B;int _T1C;unsigned char*_T1D;struct _fat_ptr*_T1E;struct _fat_ptr _T1F;unsigned char*_T20;struct _fat_ptr*_T21;int _T22;struct _fat_ptr _T23;int _T24;unsigned char*_T25;struct _fat_ptr*_T26;struct _fat_ptr _T27;unsigned char*_T28;struct _fat_ptr*_T29;int _T2A;int _T2B;int _T2C;
# 194
int bottom=Cyc_first_nonopt;
int middle=Cyc_last_nonopt;
int top=Cyc_optind;
struct _fat_ptr tem;
# 204
_TL0: if(top > middle)goto _TL3;else{goto _TL2;}_TL3: if(middle > bottom)goto _TL1;else{goto _TL2;}
# 206
_TL1: _T0=top - middle;_T1=middle - bottom;if(_T0 <= _T1)goto _TL4;{
# 209
int len=middle - bottom;
register int i;
# 213
i=0;_TL9: if(i < len)goto _TL7;else{goto _TL8;}
# 215
_TL7: _T2=argv;_T3=bottom + i;_T4=_check_fat_subscript(_T2,sizeof(struct _fat_ptr),_T3);_T5=(struct _fat_ptr*)_T4;tem=*_T5;_T6=argv;_T7=_T6.curr;_T8=(struct _fat_ptr*)_T7;_T9=bottom + i;_TA=argv;_TB=top;_TC=middle - bottom;_TD=_TB - _TC;_TE=i;_TF=_TD + _TE;_T10=_check_fat_subscript(_TA,sizeof(struct _fat_ptr),_TF);_T11=(struct _fat_ptr*)_T10;
_T8[_T9]=*_T11;_T12=argv;_T13=_T12.curr;_T14=(struct _fat_ptr*)_T13;_T15=top;_T16=middle - bottom;_T17=_T15 - _T16;_T18=i;_T19=_T17 + _T18;
_T14[_T19]=tem;
# 213
i=i + 1;goto _TL9;_TL8: _T1A=len;
# 221
top=top - _T1A;}goto _TL5;
# 226
_TL4:{int len=top - middle;
register int i;
# 230
i=0;_TLD: if(i < len)goto _TLB;else{goto _TLC;}
# 232
_TLB: _T1B=argv;_T1C=bottom + i;_T1D=_check_fat_subscript(_T1B,sizeof(struct _fat_ptr),_T1C);_T1E=(struct _fat_ptr*)_T1D;tem=*_T1E;_T1F=argv;_T20=_T1F.curr;_T21=(struct _fat_ptr*)_T20;_T22=bottom + i;_T23=argv;_T24=middle + i;_T25=_check_fat_subscript(_T23,sizeof(struct _fat_ptr),_T24);_T26=(struct _fat_ptr*)_T25;
_T21[_T22]=*_T26;_T27=argv;_T28=_T27.curr;_T29=(struct _fat_ptr*)_T28;_T2A=middle + i;
_T29[_T2A]=tem;
# 230
i=i + 1;goto _TLD;_TLC: _T2B=len;
# 238
bottom=bottom + _T2B;}_TL5: goto _TL0;_TL2: _T2C=Cyc_optind - Cyc_last_nonopt;
# 244
Cyc_first_nonopt=Cyc_first_nonopt + _T2C;
Cyc_last_nonopt=Cyc_optind;}
# 252
static struct _fat_ptr Cyc__getopt_initialize(int argc,struct _fat_ptr argv,struct _fat_ptr optstring){struct _fat_ptr _T0;void*_T1;void*_T2;unsigned _T3;struct _fat_ptr _T4;unsigned char*_T5;const char*_T6;char _T7;int _T8;struct _fat_ptr*_T9;struct _fat_ptr _TA;unsigned char*_TB;const char*_TC;char _TD;int _TE;struct _fat_ptr*_TF;struct _fat_ptr _T10;unsigned char*_T11;char*_T12;struct _fat_ptr _T13;
# 259
Cyc_last_nonopt=Cyc_optind;Cyc_first_nonopt=Cyc_last_nonopt;
# 261
Cyc_nextchar=_tag_fat(0,0,0);{char*_T14=
# 263
getenv("POSIXLY_CORRECT");_T1=(void*)_T14;_T2=(void*)_T14;_T3=_get_zero_arr_size_char(_T2,1U);_T0=_tag_fat(_T1,sizeof(char),_T3);}Cyc_posixly_correct=_T0;_T4=optstring;_T5=_check_fat_subscript(_T4,sizeof(char),0);_T6=(const char*)_T5;_T7=*_T6;_T8=(int)_T7;
# 267
if(_T8!=45)goto _TLE;
# 269
Cyc_ordering=2U;_T9=& optstring;
_fat_ptr_inplace_plus(_T9,sizeof(char),1);goto _TLF;
# 272
_TLE: _TA=optstring;_TB=_TA.curr;_TC=(const char*)_TB;_TD=_TC[0];_TE=(int)_TD;if(_TE!=43)goto _TL10;
# 274
Cyc_ordering=0U;_TF=& optstring;
_fat_ptr_inplace_plus(_TF,sizeof(char),1);goto _TL11;
# 277
_TL10: _T10=Cyc_posixly_correct;_T11=_T10.curr;_T12=(char*)_T11;if(_T12==0)goto _TL12;
Cyc_ordering=0U;goto _TL13;
# 280
_TL12: Cyc_ordering=1U;_TL13: _TL11: _TLF: _T13=optstring;
# 282
return _T13;}
# 341 "getopt.cyc"
int Cyc__getopt_internal(int argc,struct _fat_ptr argv,struct _fat_ptr optstring,struct _fat_ptr longopts,int*longind,int long_only){struct _fat_ptr _T0;unsigned char*_T1;const char*_T2;char _T3;int _T4;int _T5;int _T6;struct _fat_ptr _T7;unsigned char*_T8;char*_T9;struct _fat_ptr _TA;unsigned char*_TB;char*_TC;char _TD;int _TE;enum Cyc_ordering_tag _TF;int _T10;struct _fat_ptr _T11;int _T12;unsigned char*_T13;struct _fat_ptr*_T14;struct _fat_ptr _T15;unsigned char*_T16;char*_T17;char _T18;int _T19;struct _fat_ptr _T1A;unsigned char*_T1B;struct _fat_ptr*_T1C;int _T1D;struct _fat_ptr _T1E;unsigned char*_T1F;char*_T20;char _T21;int _T22;struct _fat_ptr _T23;int _T24;unsigned char*_T25;struct _fat_ptr*_T26;struct _fat_ptr _T27;struct _fat_ptr _T28;int _T29;int _T2A;struct _fat_ptr _T2B;int _T2C;unsigned char*_T2D;struct _fat_ptr*_T2E;struct _fat_ptr _T2F;unsigned char*_T30;char*_T31;char _T32;int _T33;struct _fat_ptr _T34;unsigned char*_T35;struct _fat_ptr*_T36;int _T37;struct _fat_ptr _T38;unsigned char*_T39;char*_T3A;char _T3B;int _T3C;enum Cyc_ordering_tag _T3D;int _T3E;int _T3F;struct _fat_ptr _T40;unsigned char*_T41;struct _fat_ptr*_T42;int _T43;int _T44;struct _fat_ptr _T45;unsigned char*_T46;struct _fat_ptr*_T47;int _T48;struct _fat_ptr _T49;struct _fat_ptr _T4A;int _T4B;struct _fat_ptr _T4C;unsigned char*_T4D;struct Cyc_option*_T4E;struct _fat_ptr _T4F;unsigned char*_T50;struct _fat_ptr*_T51;int _T52;struct _fat_ptr _T53;unsigned char*_T54;char*_T55;char _T56;int _T57;struct _fat_ptr _T58;unsigned char*_T59;struct Cyc_option*_T5A;struct _fat_ptr _T5B;int _T5C;unsigned char*_T5D;struct _fat_ptr*_T5E;struct _fat_ptr _T5F;unsigned char*_T60;char*_T61;char _T62;int _T63;int _T64;struct _fat_ptr _T65;unsigned char*_T66;struct _fat_ptr*_T67;int _T68;struct _fat_ptr _T69;unsigned char*_T6A;char*_T6B;char _T6C;int _T6D;struct _fat_ptr _T6E;struct _fat_ptr _T6F;unsigned char*_T70;struct _fat_ptr*_T71;int _T72;struct _fat_ptr _T73;unsigned char*_T74;char*_T75;char _T76;struct _fat_ptr _T77;unsigned char*_T78;unsigned _T79;struct _fat_ptr _T7A;unsigned char*_T7B;char*_T7C;char _T7D;int _T7E;struct _fat_ptr _T7F;unsigned char*_T80;char*_T81;char _T82;int _T83;struct _fat_ptr*_T84;struct _fat_ptr _T85;unsigned char*_T86;const struct Cyc_option*_T87;struct _fat_ptr _T88;unsigned char*_T89;unsigned _T8A;struct _fat_ptr _T8B;unsigned char*_T8C;const struct Cyc_option*_T8D;struct _fat_ptr _T8E;struct _fat_ptr _T8F;struct _fat_ptr _T90;unsigned char*_T91;struct _fat_ptr _T92;unsigned char*_T93;int _T94;int _T95;unsigned _T96;int _T97;struct _fat_ptr _T98;unsigned char*_T99;struct _fat_ptr _T9A;unsigned char*_T9B;int _T9C;int _T9D;unsigned _T9E;struct _fat_ptr _T9F;unsigned char*_TA0;const struct Cyc_option*_TA1;struct _fat_ptr _TA2;unsigned _TA3;struct _fat_ptr _TA4;unsigned char*_TA5;struct Cyc_option*_TA6;int _TA7;struct _fat_ptr _TA8;unsigned char*_TA9;const struct Cyc_option*_TAA;int _TAB;struct _fat_ptr _TAC;unsigned char*_TAD;const struct Cyc_option*_TAE;int _TAF;struct _fat_ptr _TB0;unsigned char*_TB1;const struct Cyc_option*_TB2;int*_TB3;struct _fat_ptr _TB4;unsigned char*_TB5;const struct Cyc_option*_TB6;int*_TB7;struct _fat_ptr _TB8;unsigned char*_TB9;const struct Cyc_option*_TBA;int _TBB;struct _fat_ptr _TBC;unsigned char*_TBD;const struct Cyc_option*_TBE;int _TBF;struct _fat_ptr*_TC0;int _TC1;int _TC2;int _TC3;struct Cyc_String_pa_PrintArg_struct _TC4;struct _fat_ptr _TC5;unsigned char*_TC6;struct _fat_ptr*_TC7;struct Cyc_String_pa_PrintArg_struct _TC8;struct _fat_ptr _TC9;int _TCA;unsigned char*_TCB;struct _fat_ptr*_TCC;struct Cyc___cycFILE*_TCD;struct _fat_ptr _TCE;struct _fat_ptr _TCF;struct _fat_ptr*_TD0;unsigned _TD1;int _TD2;struct _fat_ptr _TD3;unsigned char*_TD4;struct Cyc_option*_TD5;struct _fat_ptr _TD6;unsigned char*_TD7;char*_TD8;char _TD9;int _TDA;struct _fat_ptr _TDB;unsigned char*_TDC;const struct Cyc_option*_TDD;int _TDE;struct _fat_ptr _TDF;int _TE0;struct _fat_ptr _TE1;int _TE2;unsigned char*_TE3;struct _fat_ptr*_TE4;struct _fat_ptr _TE5;unsigned char*_TE6;char*_TE7;char _TE8;int _TE9;struct Cyc_String_pa_PrintArg_struct _TEA;struct _fat_ptr _TEB;unsigned char*_TEC;struct _fat_ptr*_TED;struct Cyc_String_pa_PrintArg_struct _TEE;struct _fat_ptr _TEF;unsigned char*_TF0;const struct Cyc_option*_TF1;struct Cyc___cycFILE*_TF2;struct _fat_ptr _TF3;struct _fat_ptr _TF4;struct Cyc_String_pa_PrintArg_struct _TF5;struct _fat_ptr _TF6;unsigned char*_TF7;struct _fat_ptr*_TF8;struct Cyc_Int_pa_PrintArg_struct _TF9;struct _fat_ptr _TFA;unsigned char*_TFB;struct _fat_ptr*_TFC;int _TFD;struct _fat_ptr _TFE;unsigned char*_TFF;char*_T100;char _T101;int _T102;struct Cyc_String_pa_PrintArg_struct _T103;struct _fat_ptr _T104;unsigned char*_T105;const struct Cyc_option*_T106;struct Cyc___cycFILE*_T107;struct _fat_ptr _T108;struct _fat_ptr _T109;struct _fat_ptr*_T10A;unsigned _T10B;int _T10C;struct _fat_ptr _T10D;unsigned char*_T10E;const struct Cyc_option*_T10F;struct _fat_ptr _T110;unsigned char*_T111;const struct Cyc_option*_T112;int _T113;struct _fat_ptr _T114;int _T115;int _T116;unsigned char*_T117;struct _fat_ptr*_T118;int _T119;struct Cyc_String_pa_PrintArg_struct _T11A;struct _fat_ptr _T11B;unsigned char*_T11C;struct _fat_ptr*_T11D;struct Cyc_String_pa_PrintArg_struct _T11E;struct _fat_ptr _T11F;int _T120;unsigned char*_T121;struct _fat_ptr*_T122;struct Cyc___cycFILE*_T123;struct _fat_ptr _T124;struct _fat_ptr _T125;struct _fat_ptr*_T126;unsigned _T127;int _T128;struct _fat_ptr _T129;unsigned char*_T12A;const struct Cyc_option*_T12B;char _T12C;struct _fat_ptr _T12D;unsigned char*_T12E;const char*_T12F;char _T130;int _T131;int _T132;struct _fat_ptr*_T133;unsigned _T134;int _T135;int*_T136;struct _fat_ptr _T137;unsigned char*_T138;const struct Cyc_option*_T139;int*_T13A;unsigned _T13B;struct _fat_ptr _T13C;unsigned char*_T13D;const struct Cyc_option*_T13E;int*_T13F;struct _fat_ptr _T140;unsigned char*_T141;const struct Cyc_option*_T142;struct _fat_ptr _T143;unsigned char*_T144;const struct Cyc_option*_T145;int _T146;int _T147;struct _fat_ptr _T148;int _T149;unsigned char*_T14A;struct _fat_ptr*_T14B;struct _fat_ptr _T14C;unsigned char*_T14D;char*_T14E;char _T14F;int _T150;struct _fat_ptr _T151;struct _fat_ptr _T152;unsigned char*_T153;char*_T154;char _T155;struct _fat_ptr _T156;unsigned char*_T157;char*_T158;int _T159;struct _fat_ptr _T15A;int _T15B;unsigned char*_T15C;struct _fat_ptr*_T15D;struct _fat_ptr _T15E;unsigned char*_T15F;char*_T160;char _T161;int _T162;struct Cyc_String_pa_PrintArg_struct _T163;struct _fat_ptr _T164;unsigned char*_T165;struct _fat_ptr*_T166;struct Cyc_String_pa_PrintArg_struct _T167;struct Cyc___cycFILE*_T168;struct _fat_ptr _T169;struct _fat_ptr _T16A;struct Cyc_String_pa_PrintArg_struct _T16B;struct _fat_ptr _T16C;unsigned char*_T16D;struct _fat_ptr*_T16E;struct Cyc_Int_pa_PrintArg_struct _T16F;struct _fat_ptr _T170;unsigned char*_T171;struct _fat_ptr*_T172;int _T173;struct _fat_ptr _T174;unsigned char*_T175;char*_T176;char _T177;int _T178;struct Cyc_String_pa_PrintArg_struct _T179;struct Cyc___cycFILE*_T17A;struct _fat_ptr _T17B;struct _fat_ptr _T17C;char*_T17D;char*_T17E;unsigned _T17F;unsigned _T180;struct _fat_ptr*_T181;struct _fat_ptr _T182;unsigned char*_T183;char*_T184;struct _fat_ptr _T185;unsigned char*_T186;char*_T187;char _T188;int _T189;struct _fat_ptr _T18A;unsigned char*_T18B;char*_T18C;char _T18D;int _T18E;int _T18F;struct _fat_ptr _T190;unsigned char*_T191;unsigned _T192;struct Cyc_String_pa_PrintArg_struct _T193;struct _fat_ptr _T194;unsigned char*_T195;struct _fat_ptr*_T196;struct Cyc_Int_pa_PrintArg_struct _T197;char _T198;int _T199;struct Cyc___cycFILE*_T19A;struct _fat_ptr _T19B;struct _fat_ptr _T19C;struct Cyc_String_pa_PrintArg_struct _T19D;struct _fat_ptr _T19E;unsigned char*_T19F;struct _fat_ptr*_T1A0;struct Cyc_Int_pa_PrintArg_struct _T1A1;char _T1A2;int _T1A3;struct Cyc___cycFILE*_T1A4;struct _fat_ptr _T1A5;struct _fat_ptr _T1A6;char _T1A7;struct _fat_ptr _T1A8;unsigned char*_T1A9;const char*_T1AA;char _T1AB;int _T1AC;struct _fat_ptr _T1AD;unsigned char*_T1AE;const char*_T1AF;char _T1B0;int _T1B1;struct _fat_ptr _T1B2;unsigned char*_T1B3;char*_T1B4;char _T1B5;int _T1B6;int _T1B7;struct Cyc_String_pa_PrintArg_struct _T1B8;struct _fat_ptr _T1B9;unsigned char*_T1BA;struct _fat_ptr*_T1BB;struct Cyc_Int_pa_PrintArg_struct _T1BC;char _T1BD;int _T1BE;struct Cyc___cycFILE*_T1BF;struct _fat_ptr _T1C0;struct _fat_ptr _T1C1;char _T1C2;struct _fat_ptr _T1C3;unsigned char*_T1C4;const char*_T1C5;char _T1C6;int _T1C7;char _T1C8;int _T1C9;struct _fat_ptr _T1CA;int _T1CB;int _T1CC;unsigned char*_T1CD;struct _fat_ptr*_T1CE;struct _fat_ptr _T1CF;unsigned char*_T1D0;char*_T1D1;char _T1D2;int _T1D3;struct _fat_ptr _T1D4;unsigned char*_T1D5;char*_T1D6;char _T1D7;int _T1D8;struct _fat_ptr*_T1D9;struct _fat_ptr _T1DA;unsigned char*_T1DB;const struct Cyc_option*_T1DC;struct _fat_ptr _T1DD;unsigned char*_T1DE;unsigned _T1DF;struct _fat_ptr _T1E0;unsigned char*_T1E1;const struct Cyc_option*_T1E2;struct _fat_ptr _T1E3;struct _fat_ptr _T1E4;struct _fat_ptr _T1E5;unsigned char*_T1E6;struct _fat_ptr _T1E7;unsigned char*_T1E8;int _T1E9;int _T1EA;unsigned _T1EB;int _T1EC;struct _fat_ptr _T1ED;unsigned char*_T1EE;struct _fat_ptr _T1EF;unsigned char*_T1F0;int _T1F1;int _T1F2;unsigned _T1F3;struct _fat_ptr _T1F4;unsigned char*_T1F5;const struct Cyc_option*_T1F6;struct _fat_ptr _T1F7;unsigned _T1F8;struct _fat_ptr _T1F9;unsigned char*_T1FA;const struct Cyc_option*_T1FB;struct _fat_ptr _T1FC;unsigned char*_T1FD;struct Cyc_option*_T1FE;struct _fat_ptr _T1FF;unsigned char*_T200;const struct Cyc_option*_T201;struct _fat_ptr*_T202;int _T203;int _T204;int _T205;struct Cyc_String_pa_PrintArg_struct _T206;struct _fat_ptr _T207;unsigned char*_T208;struct _fat_ptr*_T209;struct Cyc_String_pa_PrintArg_struct _T20A;struct _fat_ptr _T20B;int _T20C;unsigned char*_T20D;struct _fat_ptr*_T20E;struct Cyc___cycFILE*_T20F;struct _fat_ptr _T210;struct _fat_ptr _T211;struct _fat_ptr*_T212;unsigned _T213;int _T214;struct _fat_ptr _T215;unsigned char*_T216;struct Cyc_option*_T217;struct _fat_ptr _T218;unsigned char*_T219;char*_T21A;char _T21B;int _T21C;struct _fat_ptr _T21D;unsigned char*_T21E;const struct Cyc_option*_T21F;int _T220;struct _fat_ptr _T221;int _T222;struct Cyc_String_pa_PrintArg_struct _T223;struct _fat_ptr _T224;unsigned char*_T225;struct _fat_ptr*_T226;struct Cyc_String_pa_PrintArg_struct _T227;struct _fat_ptr _T228;unsigned char*_T229;const struct Cyc_option*_T22A;struct Cyc___cycFILE*_T22B;struct _fat_ptr _T22C;struct _fat_ptr _T22D;struct _fat_ptr*_T22E;unsigned _T22F;int _T230;struct _fat_ptr _T231;unsigned char*_T232;const struct Cyc_option*_T233;int _T234;struct _fat_ptr _T235;int _T236;int _T237;unsigned char*_T238;struct _fat_ptr*_T239;int _T23A;struct Cyc_String_pa_PrintArg_struct _T23B;struct _fat_ptr _T23C;unsigned char*_T23D;struct _fat_ptr*_T23E;struct Cyc_String_pa_PrintArg_struct _T23F;struct _fat_ptr _T240;int _T241;unsigned char*_T242;struct _fat_ptr*_T243;struct Cyc___cycFILE*_T244;struct _fat_ptr _T245;struct _fat_ptr _T246;struct _fat_ptr*_T247;unsigned _T248;int _T249;char _T24A;struct _fat_ptr _T24B;unsigned char*_T24C;const char*_T24D;char _T24E;int _T24F;int _T250;struct _fat_ptr*_T251;unsigned _T252;int _T253;int*_T254;struct _fat_ptr _T255;unsigned char*_T256;const struct Cyc_option*_T257;int*_T258;unsigned _T259;struct _fat_ptr _T25A;unsigned char*_T25B;const struct Cyc_option*_T25C;int*_T25D;struct _fat_ptr _T25E;unsigned char*_T25F;const struct Cyc_option*_T260;struct _fat_ptr _T261;unsigned char*_T262;const struct Cyc_option*_T263;int _T264;struct _fat_ptr _T265;unsigned char*_T266;const char*_T267;char _T268;int _T269;struct _fat_ptr _T26A;unsigned char*_T26B;const char*_T26C;char _T26D;int _T26E;struct _fat_ptr _T26F;unsigned char*_T270;char*_T271;char _T272;int _T273;struct _fat_ptr _T274;unsigned char*_T275;char*_T276;char _T277;int _T278;int _T279;struct Cyc_String_pa_PrintArg_struct _T27A;struct _fat_ptr _T27B;unsigned char*_T27C;struct _fat_ptr*_T27D;struct Cyc_Int_pa_PrintArg_struct _T27E;char _T27F;int _T280;struct Cyc___cycFILE*_T281;struct _fat_ptr _T282;struct _fat_ptr _T283;char _T284;struct _fat_ptr _T285;unsigned char*_T286;const char*_T287;char _T288;int _T289;struct _fat_ptr _T28A;int _T28B;int _T28C;unsigned char*_T28D;struct _fat_ptr*_T28E;char _T28F;int _T290;
# 345
int print_errors=Cyc_opterr;_T0=optstring;_T1=_check_fat_subscript(_T0,sizeof(char),0);_T2=(const char*)_T1;_T3=*_T2;_T4=(int)_T3;
if(_T4!=58)goto _TL14;
print_errors=0;goto _TL15;_TL14: _TL15:
# 349
 if(argc >= 1)goto _TL16;_T5=- 1;
return _T5;_TL16:
# 352
 Cyc_optarg=_tag_fat(0,0,0);
# 354
if(Cyc_optind==0)goto _TL1A;else{goto _TL1B;}_TL1B: _T6=Cyc___getopt_initialized;if(_T6)goto _TL18;else{goto _TL1A;}
# 356
_TL1A: if(Cyc_optind!=0)goto _TL1C;
Cyc_optind=1;goto _TL1D;_TL1C: _TL1D:
 optstring=Cyc__getopt_initialize(argc,argv,optstring);
Cyc___getopt_initialized=1;goto _TL19;_TL18: _TL19: _T7=Cyc_nextchar;_T8=_T7.curr;_T9=(char*)_T8;
# 365
if(_T9==0)goto _TL20;else{goto _TL21;}_TL21: _TA=Cyc_nextchar;_TB=_check_fat_subscript(_TA,sizeof(char),0U);_TC=(char*)_TB;_TD=*_TC;_TE=(int)_TD;if(_TE==0)goto _TL20;else{goto _TL1E;}
# 371
_TL20: if(Cyc_last_nonopt <= Cyc_optind)goto _TL22;
Cyc_last_nonopt=Cyc_optind;goto _TL23;_TL22: _TL23:
 if(Cyc_first_nonopt <= Cyc_optind)goto _TL24;
Cyc_first_nonopt=Cyc_optind;goto _TL25;_TL24: _TL25: _TF=Cyc_ordering;_T10=(int)_TF;
# 376
if(_T10!=1)goto _TL26;
# 381
if(Cyc_first_nonopt==Cyc_last_nonopt)goto _TL28;if(Cyc_last_nonopt==Cyc_optind)goto _TL28;
Cyc_exchange(argv);goto _TL29;
_TL28: if(Cyc_last_nonopt==Cyc_optind)goto _TL2A;
Cyc_first_nonopt=Cyc_optind;goto _TL2B;_TL2A: _TL2B: _TL29:
# 389
 _TL2C: if(Cyc_optind < argc)goto _TL2F;else{goto _TL2E;}_TL2F: _T11=argv;_T12=Cyc_optind;_T13=_check_fat_subscript(_T11,sizeof(struct _fat_ptr),_T12);_T14=(struct _fat_ptr*)_T13;_T15=*_T14;_T16=_check_fat_subscript(_T15,sizeof(char),0);_T17=(char*)_T16;_T18=*_T17;_T19=(int)_T18;if(_T19!=45)goto _TL2D;else{goto _TL30;}_TL30: _T1A=argv;_T1B=_T1A.curr;_T1C=(struct _fat_ptr*)_T1B;_T1D=Cyc_optind;_T1E=_T1C[_T1D];_T1F=_check_fat_subscript(_T1E,sizeof(char),1);_T20=(char*)_T1F;_T21=*_T20;_T22=(int)_T21;if(_T22==0)goto _TL2D;else{goto _TL2E;}
_TL2D: Cyc_optind=Cyc_optind + 1;goto _TL2C;_TL2E:
 Cyc_last_nonopt=Cyc_optind;goto _TL27;_TL26: _TL27:
# 399
 if(Cyc_optind==argc)goto _TL31;_T23=argv;_T24=Cyc_optind;_T25=_check_fat_subscript(_T23,sizeof(struct _fat_ptr),_T24);_T26=(struct _fat_ptr*)_T25;_T27=*_T26;_T28=_tag_fat("--",sizeof(char),3U);_T29=Cyc_strcmp(_T27,_T28);if(_T29)goto _TL31;else{goto _TL33;}
# 401
_TL33: Cyc_optind=Cyc_optind + 1;
# 403
if(Cyc_first_nonopt==Cyc_last_nonopt)goto _TL34;if(Cyc_last_nonopt==Cyc_optind)goto _TL34;
Cyc_exchange(argv);goto _TL35;
_TL34: if(Cyc_first_nonopt!=Cyc_last_nonopt)goto _TL36;
Cyc_first_nonopt=Cyc_optind;goto _TL37;_TL36: _TL37: _TL35:
 Cyc_last_nonopt=argc;
# 409
Cyc_optind=argc;goto _TL32;_TL31: _TL32:
# 415
 if(Cyc_optind!=argc)goto _TL38;
# 419
if(Cyc_first_nonopt==Cyc_last_nonopt)goto _TL3A;
Cyc_optind=Cyc_first_nonopt;goto _TL3B;_TL3A: _TL3B: _T2A=- 1;
return _T2A;_TL38: _T2B=argv;_T2C=Cyc_optind;_T2D=_check_fat_subscript(_T2B,sizeof(struct _fat_ptr),_T2C);_T2E=(struct _fat_ptr*)_T2D;_T2F=*_T2E;_T30=_check_fat_subscript(_T2F,sizeof(char),0);_T31=(char*)_T30;_T32=*_T31;_T33=(int)_T32;
# 427
if(_T33!=45)goto _TL3E;else{goto _TL3F;}_TL3F: _T34=argv;_T35=_T34.curr;_T36=(struct _fat_ptr*)_T35;_T37=Cyc_optind;_T38=_T36[_T37];_T39=_check_fat_subscript(_T38,sizeof(char),1);_T3A=(char*)_T39;_T3B=*_T3A;_T3C=(int)_T3B;if(_T3C==0)goto _TL3E;else{goto _TL3C;}
# 429
_TL3E: _T3D=Cyc_ordering;_T3E=(int)_T3D;if(_T3E!=0)goto _TL40;_T3F=- 1;
return _T3F;_TL40: _T40=argv;_T41=_T40.curr;_T42=(struct _fat_ptr*)_T41;_T43=Cyc_optind;
Cyc_optind=_T43 + 1;_T44=_T43;Cyc_optarg=_T42[_T44];
return 1;_TL3C: _T45=argv;_T46=_T45.curr;_T47=(struct _fat_ptr*)_T46;_T48=Cyc_optind;_T49=_T47[_T48];_T4A=
# 438
_fat_ptr_plus(_T49,sizeof(char),1);_T4C=longopts;_T4D=_T4C.curr;_T4E=(struct Cyc_option*)_T4D;
if(_T4E==0)goto _TL42;_T4F=argv;_T50=_T4F.curr;_T51=(struct _fat_ptr*)_T50;_T52=Cyc_optind;_T53=_T51[_T52];_T54=_T53.curr;_T55=(char*)_T54;_T56=_T55[1];_T57=(int)_T56;_T4B=_T57==45;goto _TL43;_TL42: _T4B=0;_TL43:
# 438
 Cyc_nextchar=_fat_ptr_plus(_T4A,sizeof(char),_T4B);goto _TL1F;_TL1E: _TL1F: _T58=longopts;_T59=_T58.curr;_T5A=(struct Cyc_option*)_T59;
# 457 "getopt.cyc"
if(_T5A==0)goto _TL44;_T5B=argv;_T5C=Cyc_optind;_T5D=_check_fat_subscript(_T5B,sizeof(struct _fat_ptr),_T5C);_T5E=(struct _fat_ptr*)_T5D;_T5F=*_T5E;_T60=_check_fat_subscript(_T5F,sizeof(char),1);_T61=(char*)_T60;_T62=*_T61;_T63=(int)_T62;if(_T63==45)goto _TL46;else{goto _TL47;}_TL47: _T64=long_only;if(_T64)goto _TL48;else{goto _TL44;}_TL48: _T65=argv;_T66=_T65.curr;_T67=(struct _fat_ptr*)_T66;_T68=Cyc_optind;_T69=_T67[_T68];_T6A=_check_fat_subscript(_T69,sizeof(char),2);_T6B=(char*)_T6A;_T6C=*_T6B;_T6D=(int)_T6C;if(_T6D)goto _TL46;else{goto _TL49;}_TL49: _T6E=optstring;_T6F=argv;_T70=_T6F.curr;_T71=(struct _fat_ptr*)_T70;_T72=Cyc_optind;_T73=_T71[_T72];_T74=_T73.curr;_T75=(char*)_T74;_T76=_T75[1];_T77=
# 459
Cyc_strchr(_T6E,_T76);_T78=_T77.curr;_T79=(unsigned)_T78;
# 457
if(_T79)goto _TL44;else{goto _TL46;}
# 461
_TL46:{struct _fat_ptr nameend;
struct _fat_ptr p;
struct _fat_ptr pfound=_tag_fat(0,0,0);
int exact=0;
int ambig=0;
int indfound=- 1;
int option_index;
# 469
nameend=Cyc_nextchar;_TL4D: _T7A=nameend;_T7B=_check_fat_subscript(_T7A,sizeof(char),0U);_T7C=(char*)_T7B;_T7D=*_T7C;_T7E=(int)_T7D;if(_T7E)goto _TL4E;else{goto _TL4C;}_TL4E: _T7F=nameend;_T80=_T7F.curr;_T81=(char*)_T80;_T82=*_T81;_T83=(int)_T82;if(_T83!=61)goto _TL4B;else{goto _TL4C;}
_TL4B: _T84=& nameend;
# 469
_fat_ptr_inplace_plus(_T84,sizeof(char),1);goto _TL4D;_TL4C:
# 474
 p=longopts;option_index=0;_TL52: _T85=p;_T86=_check_fat_subscript(_T85,sizeof(struct Cyc_option),0U);_T87=(const struct Cyc_option*)_T86;_T88=_T87->name;_T89=_T88.curr;_T8A=(unsigned)_T89;if(_T8A)goto _TL50;else{goto _TL51;}
_TL50: _T8B=p;_T8C=_T8B.curr;_T8D=(const struct Cyc_option*)_T8C;_T8E=_T8D->name;_T8F=Cyc_nextchar;_T90=nameend;_T91=_T90.curr;_T92=Cyc_nextchar;_T93=_T92.curr;_T94=_T91 - _T93;_T95=_T94 / sizeof(char);_T96=(unsigned)_T95;_T97=Cyc_strncmp(_T8E,_T8F,_T96);if(_T97)goto _TL53;else{goto _TL55;}
# 477
_TL55: _T98=nameend;_T99=_T98.curr;_T9A=Cyc_nextchar;_T9B=_T9A.curr;_T9C=_T99 - _T9B;_T9D=_T9C / sizeof(char);_T9E=(unsigned)_T9D;_T9F=p;_TA0=_T9F.curr;_TA1=(const struct Cyc_option*)_TA0;_TA2=_TA1->name;_TA3=
Cyc_strlen(_TA2);
# 477
if(_T9E!=_TA3)goto _TL56;
# 481
pfound=p;
indfound=option_index;
exact=1;goto _TL51;
# 486
_TL56: _TA4=pfound;_TA5=_TA4.curr;_TA6=(struct Cyc_option*)_TA5;if(_TA6!=0)goto _TL58;
# 489
pfound=p;
indfound=option_index;goto _TL59;
# 492
_TL58: _TA7=long_only;if(_TA7)goto _TL5C;else{goto _TL5F;}_TL5F: _TA8=pfound;_TA9=_check_fat_subscript(_TA8,sizeof(struct Cyc_option),0U);_TAA=(const struct Cyc_option*)_TA9;_TAB=_TAA->has_arg;_TAC=p;_TAD=_TAC.curr;_TAE=(const struct Cyc_option*)_TAD;_TAF=_TAE->has_arg;if(_TAB!=_TAF)goto _TL5C;else{goto _TL5E;}_TL5E: _TB0=pfound;_TB1=_TB0.curr;_TB2=(const struct Cyc_option*)_TB1;_TB3=_TB2->flag;_TB4=p;_TB5=_TB4.curr;_TB6=(const struct Cyc_option*)_TB5;_TB7=_TB6->flag;if(_TB3!=_TB7)goto _TL5C;else{goto _TL5D;}_TL5D: _TB8=pfound;_TB9=_TB8.curr;_TBA=(const struct Cyc_option*)_TB9;_TBB=_TBA->val;_TBC=p;_TBD=_TBC.curr;_TBE=(const struct Cyc_option*)_TBD;_TBF=_TBE->val;if(_TBB!=_TBF)goto _TL5C;else{goto _TL5A;}
# 497
_TL5C: ambig=1;goto _TL5B;_TL5A: _TL5B: _TL59: goto _TL54;_TL53: _TL54: _TC0=& p;
# 474
_fat_ptr_inplace_plus_post(_TC0,sizeof(struct Cyc_option),1);option_index=option_index + 1;goto _TL52;_TL51: _TC1=ambig;
# 500
if(!_TC1)goto _TL60;_TC2=exact;if(_TC2)goto _TL60;else{goto _TL62;}
# 502
_TL62: _TC3=print_errors;if(!_TC3)goto _TL63;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_TC5=argv;_TC6=_TC5.curr;_TC7=(struct _fat_ptr*)_TC6;
# 504
_T291.f1=_TC7[0];_TC4=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_TC4;{struct Cyc_String_pa_PrintArg_struct _T292;_T292.tag=0;_TC9=argv;_TCA=Cyc_optind;_TCB=_check_fat_subscript(_TC9,sizeof(struct _fat_ptr),_TCA);_TCC=(struct _fat_ptr*)_TCB;_T292.f1=*_TCC;_TC8=_T292;}{struct Cyc_String_pa_PrintArg_struct _T292=_TC8;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_TCD=Cyc_stderr;_TCE=
# 503
_tag_fat("%s: option `%s' is ambiguous\n",sizeof(char),30U);_TCF=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_TCD,_TCE,_TCF);}}goto _TL64;_TL63: _TL64: _TD0=& Cyc_nextchar;_TD1=
# 505
Cyc_strlen(Cyc_nextchar);_TD2=(int)_TD1;_fat_ptr_inplace_plus(_TD0,sizeof(char),_TD2);
Cyc_optind=Cyc_optind + 1;
Cyc_optopt=0;
return 63;_TL60: _TD3=pfound;_TD4=_TD3.curr;_TD5=(struct Cyc_option*)_TD4;
# 511
if(_TD5==0)goto _TL65;
# 513
option_index=indfound;
Cyc_optind=Cyc_optind + 1;_TD6=nameend;_TD7=_TD6.curr;_TD8=(char*)_TD7;_TD9=*_TD8;_TDA=(int)_TD9;
if(!_TDA)goto _TL67;_TDB=pfound;_TDC=_check_fat_subscript(_TDB,sizeof(struct Cyc_option),0U);_TDD=(const struct Cyc_option*)_TDC;_TDE=_TDD->has_arg;
# 519
if(!_TDE)goto _TL69;_TDF=nameend;
Cyc_optarg=_fat_ptr_plus(_TDF,sizeof(char),1);goto _TL6A;
# 523
_TL69: _TE0=print_errors;if(!_TE0)goto _TL6B;_TE1=argv;_TE2=Cyc_optind - 1;_TE3=_check_fat_subscript(_TE1,sizeof(struct _fat_ptr),_TE2);_TE4=(struct _fat_ptr*)_TE3;_TE5=*_TE4;_TE6=_check_fat_subscript(_TE5,sizeof(char),1);_TE7=(char*)_TE6;_TE8=*_TE7;_TE9=(int)_TE8;
# 525
if(_TE9!=45)goto _TL6D;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_TEB=argv;_TEC=_TEB.curr;_TED=(struct _fat_ptr*)_TEC;
# 529
_T291.f1=_TED[0];_TEA=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_TEA;{struct Cyc_String_pa_PrintArg_struct _T292;_T292.tag=0;_TEF=pfound;_TF0=_TEF.curr;_TF1=(const struct Cyc_option*)_TF0;_T292.f1=_TF1->name;_TEE=_T292;}{struct Cyc_String_pa_PrintArg_struct _T292=_TEE;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_TF2=Cyc_stderr;_TF3=
# 528
_tag_fat("%s: option `--%s' doesn't allow an argument\n",sizeof(char),45U);_TF4=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_TF2,_TF3,_TF4);}}goto _TL6E;
# 532
_TL6D:{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_TF6=argv;_TF7=_TF6.curr;_TF8=(struct _fat_ptr*)_TF7;
# 534
_T291.f1=_TF8[0];_TF5=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_TF5;{struct Cyc_Int_pa_PrintArg_struct _T292;_T292.tag=1;_TFA=argv;_TFB=_TFA.curr;_TFC=(struct _fat_ptr*)_TFB;_TFD=Cyc_optind - 1;_TFE=_TFC[_TFD];_TFF=_TFE.curr;_T100=(char*)_TFF;_T101=_T100[0];_T102=(int)_T101;_T292.f1=(unsigned long)_T102;_TF9=_T292;}{struct Cyc_Int_pa_PrintArg_struct _T292=_TF9;{struct Cyc_String_pa_PrintArg_struct _T293;_T293.tag=0;_T104=pfound;_T105=_T104.curr;_T106=(const struct Cyc_option*)_T105;_T293.f1=_T106->name;_T103=_T293;}{struct Cyc_String_pa_PrintArg_struct _T293=_T103;void*_T294[3];_T294[0]=& _T291;_T294[1]=& _T292;_T294[2]=& _T293;_T107=Cyc_stderr;_T108=
# 533
_tag_fat("%s: option `%c%s' doesn't allow an argument\n",sizeof(char),45U);_T109=_tag_fat(_T294,sizeof(void*),3);Cyc_fprintf(_T107,_T108,_T109);}}}_TL6E: goto _TL6C;_TL6B: _TL6C: _T10A=& Cyc_nextchar;_T10B=
# 537
Cyc_strlen(Cyc_nextchar);_T10C=(int)_T10B;_fat_ptr_inplace_plus(_T10A,sizeof(char),_T10C);_T10D=pfound;_T10E=_T10D.curr;_T10F=(const struct Cyc_option*)_T10E;
# 539
Cyc_optopt=_T10F->val;
return 63;_TL6A: goto _TL68;
# 543
_TL67: _T110=pfound;_T111=_check_fat_subscript(_T110,sizeof(struct Cyc_option),0U);_T112=(const struct Cyc_option*)_T111;_T113=_T112->has_arg;if(_T113!=1)goto _TL6F;
# 545
if(Cyc_optind >= argc)goto _TL71;_T114=argv;_T115=Cyc_optind;
Cyc_optind=_T115 + 1;_T116=_T115;_T117=_check_fat_subscript(_T114,sizeof(struct _fat_ptr),_T116);_T118=(struct _fat_ptr*)_T117;Cyc_optarg=*_T118;goto _TL72;
# 549
_TL71: _T119=print_errors;if(!_T119)goto _TL73;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T11B=argv;_T11C=_T11B.curr;_T11D=(struct _fat_ptr*)_T11C;
# 552
_T291.f1=_T11D[0];_T11A=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T11A;{struct Cyc_String_pa_PrintArg_struct _T292;_T292.tag=0;_T11F=argv;_T120=Cyc_optind - 1;_T121=_check_fat_subscript(_T11F,sizeof(struct _fat_ptr),_T120);_T122=(struct _fat_ptr*)_T121;_T292.f1=*_T122;_T11E=_T292;}{struct Cyc_String_pa_PrintArg_struct _T292=_T11E;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T123=Cyc_stderr;_T124=
# 551
_tag_fat("%s: option `%s' requires an argument\n",sizeof(char),38U);_T125=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T123,_T124,_T125);}}goto _TL74;_TL73: _TL74: _T126=& Cyc_nextchar;_T127=
# 553
Cyc_strlen(Cyc_nextchar);_T128=(int)_T127;_fat_ptr_inplace_plus(_T126,sizeof(char),_T128);_T129=pfound;_T12A=_T129.curr;_T12B=(const struct Cyc_option*)_T12A;
Cyc_optopt=_T12B->val;_T12D=optstring;_T12E=_check_fat_subscript(_T12D,sizeof(char),0);_T12F=(const char*)_T12E;_T130=*_T12F;_T131=(int)_T130;
if(_T131!=58)goto _TL75;_T12C=':';goto _TL76;_TL75: _T12C='?';_TL76: _T132=(int)_T12C;return _T132;_TL72: goto _TL70;_TL6F: _TL70: _TL68: _T133=& Cyc_nextchar;_T134=
# 558
Cyc_strlen(Cyc_nextchar);_T135=(int)_T134;_fat_ptr_inplace_plus(_T133,sizeof(char),_T135);
if(longind==0)goto _TL77;_T136=longind;
*_T136=option_index;goto _TL78;_TL77: _TL78: _T137=pfound;_T138=_T137.curr;_T139=(const struct Cyc_option*)_T138;_T13A=_T139->flag;_T13B=(unsigned)_T13A;
if(!_T13B)goto _TL79;_T13C=pfound;_T13D=_T13C.curr;_T13E=(const struct Cyc_option*)_T13D;_T13F=_T13E->flag;_T140=pfound;_T141=_T140.curr;_T142=(const struct Cyc_option*)_T141;
# 563
*_T13F=_T142->val;
return 0;_TL79: _T143=pfound;_T144=_T143.curr;_T145=(const struct Cyc_option*)_T144;_T146=_T145->val;
# 566
return _T146;_TL65: _T147=long_only;
# 573
if(_T147)goto _TL7F;else{goto _TL7D;}_TL7F: _T148=argv;_T149=Cyc_optind;_T14A=_check_fat_subscript(_T148,sizeof(struct _fat_ptr),_T149);_T14B=(struct _fat_ptr*)_T14A;_T14C=*_T14B;_T14D=_check_fat_subscript(_T14C,sizeof(char),1);_T14E=(char*)_T14D;_T14F=*_T14E;_T150=(int)_T14F;if(_T150==45)goto _TL7D;else{goto _TL7E;}_TL7E: _T151=optstring;_T152=Cyc_nextchar;_T153=_check_fat_subscript(_T152,sizeof(char),0U);_T154=(char*)_T153;_T155=*_T154;_T156=
Cyc_strchr(_T151,_T155);_T157=_T156.curr;_T158=(char*)_T157;
# 573
if(_T158==0)goto _TL7D;else{goto _TL7B;}
# 576
_TL7D: _T159=print_errors;if(!_T159)goto _TL80;_T15A=argv;_T15B=Cyc_optind;_T15C=_check_fat_subscript(_T15A,sizeof(struct _fat_ptr),_T15B);_T15D=(struct _fat_ptr*)_T15C;_T15E=*_T15D;_T15F=_check_fat_subscript(_T15E,sizeof(char),1);_T160=(char*)_T15F;_T161=*_T160;_T162=(int)_T161;
# 578
if(_T162!=45)goto _TL82;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T164=argv;_T165=_T164.curr;_T166=(struct _fat_ptr*)_T165;
# 581
_T291.f1=_T166[0];_T163=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T163;{struct Cyc_String_pa_PrintArg_struct _T292;_T292.tag=0;_T292.f1=Cyc_nextchar;_T167=_T292;}{struct Cyc_String_pa_PrintArg_struct _T292=_T167;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T168=Cyc_stderr;_T169=
# 580
_tag_fat("%s: unrecognized option `--%s'\n",sizeof(char),32U);_T16A=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T168,_T169,_T16A);}}goto _TL83;
# 584
_TL82:{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T16C=argv;_T16D=_T16C.curr;_T16E=(struct _fat_ptr*)_T16D;
_T291.f1=_T16E[0];_T16B=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T16B;{struct Cyc_Int_pa_PrintArg_struct _T292;_T292.tag=1;_T170=argv;_T171=_T170.curr;_T172=(struct _fat_ptr*)_T171;_T173=Cyc_optind;_T174=_T172[_T173];_T175=_T174.curr;_T176=(char*)_T175;_T177=_T176[0];_T178=(int)_T177;_T292.f1=(unsigned long)_T178;_T16F=_T292;}{struct Cyc_Int_pa_PrintArg_struct _T292=_T16F;{struct Cyc_String_pa_PrintArg_struct _T293;_T293.tag=0;_T293.f1=Cyc_nextchar;_T179=_T293;}{struct Cyc_String_pa_PrintArg_struct _T293=_T179;void*_T294[3];_T294[0]=& _T291;_T294[1]=& _T292;_T294[2]=& _T293;_T17A=Cyc_stderr;_T17B=
# 584
_tag_fat("%s: unrecognized option `%c%s'\n",sizeof(char),32U);_T17C=_tag_fat(_T294,sizeof(void*),3);Cyc_fprintf(_T17A,_T17B,_T17C);}}}_TL83: goto _TL81;_TL80: _TL81:{unsigned _T291=1U + 1U;_T17F=_check_times(_T291,sizeof(char));{char*_T292=_cycalloc_atomic(_T17F);{unsigned _T293=_T291;unsigned i;i=0;_TL87: if(i < _T293)goto _TL85;else{goto _TL86;}_TL85: _T180=i;
# 587
_T292[_T180]='\000';i=i + 1;goto _TL87;_TL86: _T292[_T293]=0;}_T17E=(char*)_T292;}_T17D=_T17E;}Cyc_nextchar=_tag_fat(_T17D,sizeof(char),2U);
Cyc_optind=Cyc_optind + 1;
Cyc_optopt=0;
return 63;_TL7B:;}goto _TL45;_TL44: _TL45: _T181=& Cyc_nextchar;_T182=
# 597
_fat_ptr_inplace_plus_post(_T181,sizeof(char),1);_T183=_check_fat_subscript(_T182,sizeof(char),0U);_T184=(char*)_T183;{char c=*_T184;
struct _fat_ptr temp=Cyc_strchr(optstring,c);_T185=Cyc_nextchar;_T186=_check_fat_subscript(_T185,sizeof(char),0U);_T187=(char*)_T186;_T188=*_T187;_T189=(int)_T188;
# 601
if(_T189!=0)goto _TL88;
Cyc_optind=Cyc_optind + 1;goto _TL89;_TL88: _TL89: _T18A=temp;_T18B=_T18A.curr;_T18C=(char*)_T18B;
# 604
if(_T18C==0)goto _TL8C;else{goto _TL8D;}_TL8D: _T18D=c;_T18E=(int)_T18D;if(_T18E==58)goto _TL8C;else{goto _TL8A;}
# 606
_TL8C: _T18F=print_errors;if(!_T18F)goto _TL8E;_T190=Cyc_posixly_correct;_T191=_T190.curr;_T192=(unsigned)_T191;
# 608
if(!_T192)goto _TL90;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T194=argv;_T195=_check_fat_subscript(_T194,sizeof(struct _fat_ptr),0);_T196=(struct _fat_ptr*)_T195;
# 611
_T291.f1=*_T196;_T193=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T193;{struct Cyc_Int_pa_PrintArg_struct _T292;_T292.tag=1;_T198=c;_T199=(int)_T198;_T292.f1=(unsigned long)_T199;_T197=_T292;}{struct Cyc_Int_pa_PrintArg_struct _T292=_T197;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T19A=Cyc_stderr;_T19B=
# 610
_tag_fat("%s: illegal option -- %c\n",sizeof(char),26U);_T19C=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T19A,_T19B,_T19C);}}goto _TL91;
# 613
_TL90:{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T19E=argv;_T19F=_check_fat_subscript(_T19E,sizeof(struct _fat_ptr),0);_T1A0=(struct _fat_ptr*)_T19F;
_T291.f1=*_T1A0;_T19D=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T19D;{struct Cyc_Int_pa_PrintArg_struct _T292;_T292.tag=1;_T1A2=c;_T1A3=(int)_T1A2;_T292.f1=(unsigned long)_T1A3;_T1A1=_T292;}{struct Cyc_Int_pa_PrintArg_struct _T292=_T1A1;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T1A4=Cyc_stderr;_T1A5=
# 613
_tag_fat("%s: invalid option -- %c\n",sizeof(char),26U);_T1A6=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T1A4,_T1A5,_T1A6);}}_TL91: goto _TL8F;_TL8E: _TL8F: _T1A7=c;
# 616
Cyc_optopt=(int)_T1A7;
return 63;_TL8A: _T1A8=temp;_T1A9=_check_fat_subscript(_T1A8,sizeof(char),0);_T1AA=(const char*)_T1A9;_T1AB=*_T1AA;_T1AC=(int)_T1AB;
# 620
if(_T1AC!=87)goto _TL92;_T1AD=temp;_T1AE=_check_fat_subscript(_T1AD,sizeof(char),1);_T1AF=(const char*)_T1AE;_T1B0=*_T1AF;_T1B1=(int)_T1B0;if(_T1B1!=59)goto _TL92;{
# 622
struct _fat_ptr nameend;
struct _fat_ptr p;
struct _fat_ptr pfound=_tag_fat(0,0,0);
int exact=0;
int ambig=0;
int indfound=0;
int option_index;_T1B2=Cyc_nextchar;_T1B3=_check_fat_subscript(_T1B2,sizeof(char),0U);_T1B4=(char*)_T1B3;_T1B5=*_T1B4;_T1B6=(int)_T1B5;
# 631
if(_T1B6==0)goto _TL94;
# 633
Cyc_optarg=Cyc_nextchar;
# 636
Cyc_optind=Cyc_optind + 1;goto _TL95;
# 638
_TL94: if(Cyc_optind!=argc)goto _TL96;_T1B7=print_errors;
# 640
if(!_T1B7)goto _TL98;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T1B9=argv;_T1BA=_check_fat_subscript(_T1B9,sizeof(struct _fat_ptr),0);_T1BB=(struct _fat_ptr*)_T1BA;
# 644
_T291.f1=*_T1BB;_T1B8=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T1B8;{struct Cyc_Int_pa_PrintArg_struct _T292;_T292.tag=1;_T1BD=c;_T1BE=(int)_T1BD;_T292.f1=(unsigned long)_T1BE;_T1BC=_T292;}{struct Cyc_Int_pa_PrintArg_struct _T292=_T1BC;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T1BF=Cyc_stderr;_T1C0=
# 643
_tag_fat("%s: option requires an argument -- %c\n",sizeof(char),39U);_T1C1=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T1BF,_T1C0,_T1C1);}}goto _TL99;_TL98: _TL99: _T1C2=c;
# 646
Cyc_optopt=(int)_T1C2;_T1C3=optstring;_T1C4=_check_fat_subscript(_T1C3,sizeof(char),0);_T1C5=(const char*)_T1C4;_T1C6=*_T1C5;_T1C7=(int)_T1C6;
if(_T1C7!=58)goto _TL9A;
c=':';goto _TL9B;
# 650
_TL9A: c='?';_TL9B: _T1C8=c;_T1C9=(int)_T1C8;
return _T1C9;
# 656
_TL96: _T1CA=argv;_T1CB=Cyc_optind;Cyc_optind=_T1CB + 1;_T1CC=_T1CB;_T1CD=_check_fat_subscript(_T1CA,sizeof(struct _fat_ptr),_T1CC);_T1CE=(struct _fat_ptr*)_T1CD;Cyc_optarg=*_T1CE;_TL95:
# 661
 nameend=Cyc_optarg;Cyc_nextchar=nameend;_TL9F: _T1CF=nameend;_T1D0=_check_fat_subscript(_T1CF,sizeof(char),0U);_T1D1=(char*)_T1D0;_T1D2=*_T1D1;_T1D3=(int)_T1D2;if(_T1D3)goto _TLA0;else{goto _TL9E;}_TLA0: _T1D4=nameend;_T1D5=_T1D4.curr;_T1D6=(char*)_T1D5;_T1D7=*_T1D6;_T1D8=(int)_T1D7;if(_T1D8!=61)goto _TL9D;else{goto _TL9E;}
_TL9D: _T1D9=& nameend;
# 661
_fat_ptr_inplace_plus(_T1D9,sizeof(char),1);goto _TL9F;_TL9E:
# 666
 p=longopts;option_index=0;_TLA4: _T1DA=p;_T1DB=_check_fat_subscript(_T1DA,sizeof(struct Cyc_option),0U);_T1DC=(const struct Cyc_option*)_T1DB;_T1DD=_T1DC->name;_T1DE=_T1DD.curr;_T1DF=(unsigned)_T1DE;if(_T1DF)goto _TLA2;else{goto _TLA3;}
_TLA2: _T1E0=p;_T1E1=_T1E0.curr;_T1E2=(const struct Cyc_option*)_T1E1;_T1E3=_T1E2->name;_T1E4=Cyc_nextchar;_T1E5=nameend;_T1E6=_T1E5.curr;_T1E7=Cyc_nextchar;_T1E8=_T1E7.curr;_T1E9=_T1E6 - _T1E8;_T1EA=_T1E9 / sizeof(char);_T1EB=(unsigned)_T1EA;_T1EC=Cyc_strncmp(_T1E3,_T1E4,_T1EB);if(_T1EC)goto _TLA5;else{goto _TLA7;}
# 669
_TLA7: _T1ED=nameend;_T1EE=_T1ED.curr;_T1EF=Cyc_nextchar;_T1F0=_T1EF.curr;_T1F1=_T1EE - _T1F0;_T1F2=_T1F1 / sizeof(char);_T1F3=(unsigned)_T1F2;_T1F4=p;_T1F5=_T1F4.curr;_T1F6=(const struct Cyc_option*)_T1F5;_T1F7=_T1F6->name;_T1F8=Cyc_strlen(_T1F7);if(_T1F3!=_T1F8)goto _TLA8;_T1F9=p;_T1FA=_untag_fat_ptr(_T1F9,sizeof(struct Cyc_option),1U);_T1FB=(const struct Cyc_option*)_T1FA;
# 672
pfound=_tag_fat(_T1FB,sizeof(struct Cyc_option),1U);
indfound=option_index;
exact=1;goto _TLA3;
# 677
_TLA8: _T1FC=pfound;_T1FD=_T1FC.curr;_T1FE=(struct Cyc_option*)_T1FD;if(_T1FE!=0)goto _TLAA;_T1FF=p;_T200=_untag_fat_ptr(_T1FF,sizeof(struct Cyc_option),1U);_T201=(const struct Cyc_option*)_T200;
# 680
pfound=_tag_fat(_T201,sizeof(struct Cyc_option),1U);
indfound=option_index;goto _TLAB;
# 685
_TLAA: ambig=1;_TLAB: goto _TLA6;_TLA5: _TLA6: _T202=& p;
# 666
_fat_ptr_inplace_plus_post(_T202,sizeof(struct Cyc_option),1);option_index=option_index + 1;goto _TLA4;_TLA3: _T203=ambig;
# 687
if(!_T203)goto _TLAC;_T204=exact;if(_T204)goto _TLAC;else{goto _TLAE;}
# 689
_TLAE: _T205=print_errors;if(!_T205)goto _TLAF;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T207=argv;_T208=_check_fat_subscript(_T207,sizeof(struct _fat_ptr),0);_T209=(struct _fat_ptr*)_T208;
# 691
_T291.f1=*_T209;_T206=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T206;{struct Cyc_String_pa_PrintArg_struct _T292;_T292.tag=0;_T20B=argv;_T20C=Cyc_optind;_T20D=_check_fat_subscript(_T20B,sizeof(struct _fat_ptr),_T20C);_T20E=(struct _fat_ptr*)_T20D;_T292.f1=*_T20E;_T20A=_T292;}{struct Cyc_String_pa_PrintArg_struct _T292=_T20A;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T20F=Cyc_stderr;_T210=
# 690
_tag_fat("%s: option `-W %s' is ambiguous\n",sizeof(char),33U);_T211=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T20F,_T210,_T211);}}goto _TLB0;_TLAF: _TLB0: _T212=& Cyc_nextchar;_T213=
# 692
Cyc_strlen(Cyc_nextchar);_T214=(int)_T213;_fat_ptr_inplace_plus(_T212,sizeof(char),_T214);
Cyc_optind=Cyc_optind + 1;
return 63;_TLAC: _T215=pfound;_T216=_T215.curr;_T217=(struct Cyc_option*)_T216;
# 696
if(_T217==0)goto _TLB1;
# 698
option_index=indfound;_T218=nameend;_T219=_T218.curr;_T21A=(char*)_T219;_T21B=*_T21A;_T21C=(int)_T21B;
if(!_T21C)goto _TLB3;_T21D=pfound;_T21E=_check_fat_subscript(_T21D,sizeof(struct Cyc_option),0U);_T21F=(const struct Cyc_option*)_T21E;_T220=_T21F->has_arg;
# 703
if(!_T220)goto _TLB5;_T221=nameend;
Cyc_optarg=_fat_ptr_plus(_T221,sizeof(char),1);goto _TLB6;
# 707
_TLB5: _T222=print_errors;if(!_T222)goto _TLB7;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T224=argv;_T225=_check_fat_subscript(_T224,sizeof(struct _fat_ptr),0);_T226=(struct _fat_ptr*)_T225;
# 710
_T291.f1=*_T226;_T223=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T223;{struct Cyc_String_pa_PrintArg_struct _T292;_T292.tag=0;_T228=pfound;_T229=_T228.curr;_T22A=(const struct Cyc_option*)_T229;_T292.f1=_T22A->name;_T227=_T292;}{struct Cyc_String_pa_PrintArg_struct _T292=_T227;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T22B=Cyc_stderr;_T22C=
# 708
_tag_fat("%s: option `-W %s' doesn't allow an argument\n",sizeof(char),46U);_T22D=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T22B,_T22C,_T22D);}}goto _TLB8;_TLB7: _TLB8: _T22E=& Cyc_nextchar;_T22F=
# 712
Cyc_strlen(Cyc_nextchar);_T230=(int)_T22F;_fat_ptr_inplace_plus(_T22E,sizeof(char),_T230);
return 63;_TLB6: goto _TLB4;
# 716
_TLB3: _T231=pfound;_T232=_check_fat_subscript(_T231,sizeof(struct Cyc_option),0U);_T233=(const struct Cyc_option*)_T232;_T234=_T233->has_arg;if(_T234!=1)goto _TLB9;
# 718
if(Cyc_optind >= argc)goto _TLBB;_T235=argv;_T236=Cyc_optind;
Cyc_optind=_T236 + 1;_T237=_T236;_T238=_check_fat_subscript(_T235,sizeof(struct _fat_ptr),_T237);_T239=(struct _fat_ptr*)_T238;Cyc_optarg=*_T239;goto _TLBC;
# 722
_TLBB: _T23A=print_errors;if(!_T23A)goto _TLBD;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T23C=argv;_T23D=_check_fat_subscript(_T23C,sizeof(struct _fat_ptr),0);_T23E=(struct _fat_ptr*)_T23D;
# 725
_T291.f1=*_T23E;_T23B=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T23B;{struct Cyc_String_pa_PrintArg_struct _T292;_T292.tag=0;_T240=argv;_T241=Cyc_optind - 1;_T242=_check_fat_subscript(_T240,sizeof(struct _fat_ptr),_T241);_T243=(struct _fat_ptr*)_T242;_T292.f1=*_T243;_T23F=_T292;}{struct Cyc_String_pa_PrintArg_struct _T292=_T23F;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T244=Cyc_stderr;_T245=
# 724
_tag_fat("%s: option `%s' requires an argument\n",sizeof(char),38U);_T246=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T244,_T245,_T246);}}goto _TLBE;_TLBD: _TLBE: _T247=& Cyc_nextchar;_T248=
# 726
Cyc_strlen(Cyc_nextchar);_T249=(int)_T248;_fat_ptr_inplace_plus(_T247,sizeof(char),_T249);_T24B=optstring;_T24C=_check_fat_subscript(_T24B,sizeof(char),0);_T24D=(const char*)_T24C;_T24E=*_T24D;_T24F=(int)_T24E;
if(_T24F!=58)goto _TLBF;_T24A=':';goto _TLC0;_TLBF: _T24A='?';_TLC0: _T250=(int)_T24A;return _T250;_TLBC: goto _TLBA;_TLB9: _TLBA: _TLB4: _T251=& Cyc_nextchar;_T252=
# 730
Cyc_strlen(Cyc_nextchar);_T253=(int)_T252;_fat_ptr_inplace_plus(_T251,sizeof(char),_T253);
if(longind==0)goto _TLC1;_T254=longind;
*_T254=option_index;goto _TLC2;_TLC1: _TLC2: _T255=pfound;_T256=_T255.curr;_T257=(const struct Cyc_option*)_T256;_T258=_T257->flag;_T259=(unsigned)_T258;
if(!_T259)goto _TLC3;_T25A=pfound;_T25B=_T25A.curr;_T25C=(const struct Cyc_option*)_T25B;_T25D=_T25C->flag;_T25E=pfound;_T25F=_T25E.curr;_T260=(const struct Cyc_option*)_T25F;
# 735
*_T25D=_T260->val;
return 0;_TLC3: _T261=pfound;_T262=_T261.curr;_T263=(const struct Cyc_option*)_T262;_T264=_T263->val;
# 738
return _T264;_TLB1:
# 740
 Cyc_nextchar=_tag_fat(0,0,0);
return 87;}_TL92: _T265=temp;_T266=_check_fat_subscript(_T265,sizeof(char),1);_T267=(const char*)_T266;_T268=*_T267;_T269=(int)_T268;
# 743
if(_T269!=58)goto _TLC5;_T26A=temp;_T26B=_check_fat_subscript(_T26A,sizeof(char),2);_T26C=(const char*)_T26B;_T26D=*_T26C;_T26E=(int)_T26D;
# 745
if(_T26E!=58)goto _TLC7;_T26F=Cyc_nextchar;_T270=_check_fat_subscript(_T26F,sizeof(char),0U);_T271=(char*)_T270;_T272=*_T271;_T273=(int)_T272;
# 748
if(_T273==0)goto _TLC9;
# 750
Cyc_optarg=Cyc_nextchar;
Cyc_optind=Cyc_optind + 1;goto _TLCA;
# 754
_TLC9: Cyc_optarg=_tag_fat(0,0,0);_TLCA:
 Cyc_nextchar=_tag_fat(0,0,0);goto _TLC8;
# 760
_TLC7: _T274=Cyc_nextchar;_T275=_check_fat_subscript(_T274,sizeof(char),0U);_T276=(char*)_T275;_T277=*_T276;_T278=(int)_T277;if(_T278==0)goto _TLCB;
# 762
Cyc_optarg=Cyc_nextchar;
# 765
Cyc_optind=Cyc_optind + 1;goto _TLCC;
# 767
_TLCB: if(Cyc_optind!=argc)goto _TLCD;_T279=print_errors;
# 769
if(!_T279)goto _TLCF;{struct Cyc_String_pa_PrintArg_struct _T291;_T291.tag=0;_T27B=argv;_T27C=_check_fat_subscript(_T27B,sizeof(struct _fat_ptr),0);_T27D=(struct _fat_ptr*)_T27C;
# 774
_T291.f1=*_T27D;_T27A=_T291;}{struct Cyc_String_pa_PrintArg_struct _T291=_T27A;{struct Cyc_Int_pa_PrintArg_struct _T292;_T292.tag=1;_T27F=c;_T280=(int)_T27F;_T292.f1=(unsigned long)_T280;_T27E=_T292;}{struct Cyc_Int_pa_PrintArg_struct _T292=_T27E;void*_T293[2];_T293[0]=& _T291;_T293[1]=& _T292;_T281=Cyc_stderr;_T282=
# 773
_tag_fat("%s: option requires an argument -- %c\n",sizeof(char),39U);_T283=_tag_fat(_T293,sizeof(void*),2);Cyc_fprintf(_T281,_T282,_T283);}}goto _TLD0;_TLCF: _TLD0: _T284=c;
# 776
Cyc_optopt=(int)_T284;_T285=optstring;_T286=_check_fat_subscript(_T285,sizeof(char),0);_T287=(const char*)_T286;_T288=*_T287;_T289=(int)_T288;
if(_T289!=58)goto _TLD1;
c=':';goto _TLD2;
# 780
_TLD1: c='?';_TLD2: goto _TLCE;
# 785
_TLCD: _T28A=argv;_T28B=Cyc_optind;Cyc_optind=_T28B + 1;_T28C=_T28B;_T28D=_check_fat_subscript(_T28A,sizeof(struct _fat_ptr),_T28C);_T28E=(struct _fat_ptr*)_T28D;Cyc_optarg=*_T28E;_TLCE: _TLCC:
 Cyc_nextchar=_tag_fat(0,0,0);_TLC8: goto _TLC6;_TLC5: _TLC6: _T28F=c;_T290=(int)_T28F;
# 789
return _T290;}}
# 793
int Cyc_getopt(int argc,struct _fat_ptr argv,struct _fat_ptr optstring){int _T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;int _T5;_T0=argc;_T1=argv;_T2=optstring;_T3=
# 797
_tag_fat(0,0,0);_T4=_T3;_T5=
# 796
Cyc__getopt_internal(_T0,_T1,_T2,_T4,0,0);return _T5;}
