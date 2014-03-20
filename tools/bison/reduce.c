#include <cyc_include.h>
struct Cyc___cycFILE;
# 102 "../../library/stdlib/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 147
extern int Cyc_fflush(struct Cyc___cycFILE*);
# 163
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);struct Cyc___cycFILE;
# 53 "../../library/stdlib/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 88 "../../library/stdlib/cycboot.h"
extern int Cyc_fflush(struct Cyc___cycFILE*);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 28 "files.h"
extern struct Cyc___cycFILE*Cyc_foutput;
# 45
extern struct _fat_ptr Cyc_infile;
# 76 "gram.h"
extern int Cyc_nitems;
extern int Cyc_nrules;
extern int Cyc_nsyms;
extern int Cyc_ntokens;
extern int Cyc_nvars;
# 82
extern struct _fat_ptr Cyc_ritem;
extern struct _fat_ptr Cyc_rlhs;
extern struct _fat_ptr Cyc_rrhs;
extern struct _fat_ptr Cyc_rprec;
extern struct _fat_ptr Cyc_rprecsym;
extern struct _fat_ptr Cyc_sprec;
extern struct _fat_ptr Cyc_rassoc;
extern struct _fat_ptr Cyc_sassoc;
# 92
extern int Cyc_start_symbol;
# 38 "reduce.cyc"
extern struct _fat_ptr Cyc_tags;
extern int Cyc_verboseflag;
static int Cyc_statisticsflag;
# 57 "reduce.cyc"
static struct _fat_ptr Cyc_N;static struct _fat_ptr Cyc_P;static struct _fat_ptr Cyc_V;static struct _fat_ptr Cyc_V1;
# 59
static int Cyc_nuseful_productions;static int Cyc_nuseless_productions;static int Cyc_nuseful_nonterminals;static int Cyc_nuseless_nonterminals;
# 63
static void Cyc_useless_nonterminals (void);
static void Cyc_inaccessable_symbols (void);
static void Cyc_reduce_grammar_tables (void);
static void Cyc_print_results (void);
static void Cyc_print_notices (void);
# 70
extern void Cyc_fatals(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fixed_outfiles;
# 74
int Cyc_bits_equal(struct _fat_ptr L,struct _fat_ptr R,int n){struct _fat_ptr _T0;int _T1;unsigned char*_T2;unsigned*_T3;unsigned _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;unsigned*_T8;unsigned _T9;
# 80
int i;
# 82
i=n - 1;_TL3: if(i >= 0)goto _TL1;else{goto _TL2;}
_TL1: _T0=L;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(unsigned),_T1);_T3=(unsigned*)_T2;_T4=*_T3;_T5=R;_T6=i;_T7=_check_fat_subscript(_T5,sizeof(unsigned),_T6);_T8=(unsigned*)_T7;_T9=*_T8;if(_T4==_T9)goto _TL4;
return 0;_TL4:
# 82
 i=i + -1;goto _TL3;_TL2:
# 85
 return 1;}
# 89
int Cyc_nbits(unsigned i){unsigned _T0;unsigned _T1;unsigned _T2;int _T3;
# 93
int count=0;
# 95
_TL6: if(i!=0U)goto _TL7;else{goto _TL8;}
_TL7: _T0=i;_T1=- i;_T2=_T0 & _T1;i=i ^ _T2;
count=count + 1;goto _TL6;_TL8: _T3=count;
# 99
return _T3;}
# 103
int Cyc_bits_size(struct _fat_ptr S,int n){struct _fat_ptr _T0;int _T1;unsigned char*_T2;unsigned*_T3;unsigned _T4;int _T5;int _T6;
# 108
int i;int count=0;
# 110
i=n - 1;_TLC: if(i >= 0)goto _TLA;else{goto _TLB;}
_TLA: _T0=S;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(unsigned),_T1);_T3=(unsigned*)_T2;_T4=*_T3;_T5=Cyc_nbits(_T4);count=count + _T5;
# 110
i=i + -1;goto _TLC;_TLB: _T6=count;
# 112
return _T6;}
# 115
void Cyc_reduce_grammar (void){struct _fat_ptr _T0;int _T1;int _T2;int _T3;unsigned*_T4;unsigned _T5;unsigned _T6;struct _fat_ptr _T7;int _T8;int _T9;int _TA;int _TB;unsigned*_TC;unsigned _TD;unsigned _TE;struct _fat_ptr _TF;int _T10;int _T11;int _T12;unsigned*_T13;unsigned _T14;unsigned _T15;struct _fat_ptr _T16;int _T17;int _T18;int _T19;unsigned*_T1A;unsigned _T1B;unsigned _T1C;int _T1D;int _T1E;struct _fat_ptr _T1F;int _T20;int _T21;unsigned char*_T22;unsigned*_T23;unsigned _T24;int _T25;int _T26;int _T27;unsigned _T28;unsigned _T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;int _T2C;unsigned char*_T2D;struct _fat_ptr*_T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;struct Cyc_String_pa_PrintArg_struct _T31;struct Cyc_Int_pa_PrintArg_struct _T32;int _T33;struct Cyc_String_pa_PrintArg_struct _T34;struct Cyc_Int_pa_PrintArg_struct _T35;int _T36;struct Cyc_String_pa_PrintArg_struct _T37;struct Cyc_Int_pa_PrintArg_struct _T38;int _T39;struct Cyc_String_pa_PrintArg_struct _T3A;struct Cyc___cycFILE*_T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;
# 118
int reduced;_T1=Cyc_nvars + 32;_T2=_T1 - 1;_T3=_T2 / 32;{unsigned _T3E=(unsigned)_T3;_T5=_check_times(_T3E,sizeof(unsigned));{unsigned*_T3F=_cycalloc_atomic(_T5);{unsigned _T40=_T3E;unsigned _new2_cyclone;_new2_cyclone=0;_TL10: if(_new2_cyclone < _T40)goto _TLE;else{goto _TLF;}_TLE: _T6=_new2_cyclone;
# 122
_T3F[_T6]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL10;_TLF:;}_T4=(unsigned*)_T3F;}_T0=_tag_fat(_T4,sizeof(unsigned),_T3E);}Cyc_N=_T0;_T8=Cyc_nrules + 1;_T9=_T8 + 32;_TA=_T9 - 1;_TB=_TA / 32;{unsigned _T3E=(unsigned)_TB;_TD=_check_times(_T3E,sizeof(unsigned));{unsigned*_T3F=_cycalloc_atomic(_TD);{unsigned _T40=_T3E;unsigned _new2_cyclone;_new2_cyclone=0;_TL14: if(_new2_cyclone < _T40)goto _TL12;else{goto _TL13;}_TL12: _TE=_new2_cyclone;
_T3F[_TE]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL14;_TL13:;}_TC=(unsigned*)_T3F;}_T7=_tag_fat(_TC,sizeof(unsigned),_T3E);}Cyc_P=_T7;_T10=Cyc_nsyms + 32;_T11=_T10 - 1;_T12=_T11 / 32;{unsigned _T3E=(unsigned)_T12;_T14=_check_times(_T3E,sizeof(unsigned));{unsigned*_T3F=_cycalloc_atomic(_T14);{unsigned _T40=_T3E;unsigned _new2_cyclone;_new2_cyclone=0;_TL18: if(_new2_cyclone < _T40)goto _TL16;else{goto _TL17;}_TL16: _T15=_new2_cyclone;
_T3F[_T15]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL18;_TL17:;}_T13=(unsigned*)_T3F;}_TF=_tag_fat(_T13,sizeof(unsigned),_T3E);}Cyc_V=_TF;_T17=Cyc_nsyms + 32;_T18=_T17 - 1;_T19=_T18 / 32;{unsigned _T3E=(unsigned)_T19;_T1B=_check_times(_T3E,sizeof(unsigned));{unsigned*_T3F=_cycalloc_atomic(_T1B);{unsigned _T40=_T3E;unsigned _new2_cyclone;_new2_cyclone=0;_TL1C: if(_new2_cyclone < _T40)goto _TL1A;else{goto _TL1B;}_TL1A: _T1C=_new2_cyclone;
_T3F[_T1C]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL1C;_TL1B:;}_T1A=(unsigned*)_T3F;}_T16=_tag_fat(_T1A,sizeof(unsigned),_T3E);}Cyc_V1=_T16;
# 127
Cyc_useless_nonterminals();
Cyc_inaccessable_symbols();_T1D=Cyc_nuseless_nonterminals + Cyc_nuseless_productions;
# 130
reduced=_T1D > 0;_T1E=Cyc_verboseflag;
# 132
if(!_T1E)goto _TL1D;
Cyc_print_results();goto _TL1E;_TL1D: _TL1E:
# 135
 if(reduced!=0)goto _TL1F;goto done_reducing;_TL1F:
# 138
 Cyc_print_notices();_T1F=Cyc_N;_T20=Cyc_start_symbol - Cyc_ntokens;_T21=_T20 / 32;_T22=_check_fat_subscript(_T1F,sizeof(unsigned),_T21);_T23=(unsigned*)_T22;_T24=*_T23;_T25=Cyc_start_symbol - Cyc_ntokens;_T26=_T25 % 32;_T27=1 << _T26;_T28=(unsigned)_T27;_T29=_T24 & _T28;
# 140
if(_T29!=0U)goto _TL21;else{goto _TL23;}
_TL23: _T2A=_tag_fat("Start symbol %s does not derive any sentence",sizeof(char),45U);_T2B=Cyc_tags;_T2C=Cyc_start_symbol;_T2D=_check_fat_subscript(_T2B,sizeof(struct _fat_ptr),_T2C);_T2E=(struct _fat_ptr*)_T2D;_T2F=*_T2E;_T30=_T2F;Cyc_fatals(_T2A,_T30);goto _TL22;_TL21: _TL22:
# 144
 Cyc_reduce_grammar_tables();
# 151
Cyc_statisticsflag=0;
if(Cyc_statisticsflag!=1)goto _TL24;{struct Cyc_String_pa_PrintArg_struct _T3E;_T3E.tag=0;
# 155
_T3E.f1=Cyc_infile;_T31=_T3E;}{struct Cyc_String_pa_PrintArg_struct _T3E=_T31;{struct Cyc_Int_pa_PrintArg_struct _T3F;_T3F.tag=1;_T33=Cyc_ntokens;
_T3F.f1=(unsigned long)_T33;_T32=_T3F;}{struct Cyc_Int_pa_PrintArg_struct _T3F=_T32;{struct Cyc_String_pa_PrintArg_struct _T40;_T40.tag=0;if(Cyc_ntokens!=1)goto _TL26;_T40.f1=_tag_fat("",sizeof(char),1U);goto _TL27;_TL26: _T40.f1=_tag_fat("s",sizeof(char),2U);_TL27: _T34=_T40;}{struct Cyc_String_pa_PrintArg_struct _T40=_T34;{struct Cyc_Int_pa_PrintArg_struct _T41;_T41.tag=1;_T36=Cyc_nvars;
_T41.f1=(unsigned long)_T36;_T35=_T41;}{struct Cyc_Int_pa_PrintArg_struct _T41=_T35;{struct Cyc_String_pa_PrintArg_struct _T42;_T42.tag=0;if(Cyc_nvars!=1)goto _TL28;_T42.f1=_tag_fat("",sizeof(char),1U);goto _TL29;_TL28: _T42.f1=_tag_fat("s",sizeof(char),2U);_TL29: _T37=_T42;}{struct Cyc_String_pa_PrintArg_struct _T42=_T37;{struct Cyc_Int_pa_PrintArg_struct _T43;_T43.tag=1;_T39=Cyc_nrules;
_T43.f1=(unsigned long)_T39;_T38=_T43;}{struct Cyc_Int_pa_PrintArg_struct _T43=_T38;{struct Cyc_String_pa_PrintArg_struct _T44;_T44.tag=0;if(Cyc_nrules!=1)goto _TL2A;_T44.f1=_tag_fat("",sizeof(char),1U);goto _TL2B;_TL2A: _T44.f1=_tag_fat("s",sizeof(char),2U);_TL2B: _T3A=_T44;}{struct Cyc_String_pa_PrintArg_struct _T44=_T3A;void*_T45[7];_T45[0]=& _T3E;_T45[1]=& _T3F;_T45[2]=& _T40;_T45[3]=& _T41;_T45[4]=& _T42;_T45[5]=& _T43;_T45[6]=& _T44;_T3B=Cyc_stderr;_T3C=
# 154
_tag_fat("reduced %s defines %d terminal%s, %d nonterminal%s, and %d production%s.\n",sizeof(char),74U);_T3D=_tag_fat(_T45,sizeof(void*),7);Cyc_fprintf(_T3B,_T3C,_T3D);}}}}}}}goto _TL25;_TL24: _TL25:
# 160
 done_reducing:
# 164
 Cyc_N=_tag_fat(0,0,0);
Cyc_V=_tag_fat(0,0,0);
Cyc_P=_tag_fat(0,0,0);}
# 176
static int Cyc_useful_production(int i,struct _fat_ptr N){struct _fat_ptr _T0;struct _fat_ptr _T1;int _T2;unsigned char*_T3;short*_T4;short _T5;int _T6;struct _fat_ptr _T7;unsigned char*_T8;short*_T9;short _TA;int _TB;struct _fat_ptr _TC;unsigned char*_TD;short*_TE;short _TF;int _T10;int _T11;struct _fat_ptr _T12;short _T13;int _T14;int _T15;int _T16;int _T17;unsigned char*_T18;unsigned*_T19;unsigned _T1A;short _T1B;int _T1C;int _T1D;int _T1E;int _T1F;int _T20;unsigned _T21;unsigned _T22;struct _fat_ptr*_T23;
# 181
struct _fat_ptr r;
short n;_T0=Cyc_ritem;_T1=Cyc_rrhs;_T2=i;_T3=_check_fat_subscript(_T1,sizeof(short),_T2);_T4=(short*)_T3;_T5=*_T4;_T6=(int)_T5;
# 188
r=_fat_ptr_plus(_T0,sizeof(short),_T6);_TL2F: _T7=r;_T8=_check_fat_subscript(_T7,sizeof(short),0U);_T9=(short*)_T8;_TA=*_T9;_TB=(int)_TA;if(_TB > 0)goto _TL2D;else{goto _TL2E;}
_TL2D: _TC=r;_TD=_TC.curr;_TE=(short*)_TD;n=*_TE;_TF=n;_T10=(int)_TF;_T11=Cyc_ntokens;if(_T10 < _T11)goto _TL30;_T12=N;_T13=n;_T14=(int)_T13;_T15=Cyc_ntokens;_T16=_T14 - _T15;_T17=_T16 / 32;_T18=_check_fat_subscript(_T12,sizeof(unsigned),_T17);_T19=(unsigned*)_T18;_T1A=*_T19;_T1B=n;_T1C=(int)_T1B;_T1D=Cyc_ntokens;_T1E=_T1C - _T1D;_T1F=_T1E % 32;_T20=1 << _T1F;_T21=(unsigned)_T20;_T22=_T1A & _T21;
if(_T22!=0U)goto _TL32;else{goto _TL34;}
_TL34: return 0;_TL32: goto _TL31;_TL30: _TL31: _T23=& r;
# 188
_fat_ptr_inplace_plus(_T23,sizeof(short),1);goto _TL2F;_TL2E:
# 192
 return 1;}
# 198
static void Cyc_useless_nonterminals (void){struct _fat_ptr _T0;int _T1;int _T2;int _T3;unsigned*_T4;unsigned _T5;unsigned _T6;int _T7;int _T8;int _T9;struct _fat_ptr _TA;int _TB;unsigned char*_TC;unsigned*_TD;struct _fat_ptr _TE;int _TF;unsigned char*_T10;unsigned*_T11;struct _fat_ptr _T12;int _T13;unsigned char*_T14;unsigned*_T15;unsigned _T16;int _T17;int _T18;unsigned _T19;unsigned _T1A;int _T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;unsigned char*_T1E;short*_T1F;int _T20;short _T21;int _T22;int _T23;int _T24;int _T25;unsigned char*_T26;unsigned*_T27;struct _fat_ptr _T28;int _T29;unsigned char*_T2A;short*_T2B;short _T2C;int _T2D;int _T2E;int _T2F;int _T30;int _T31;unsigned _T32;struct _fat_ptr _T33;unsigned char*_T34;unsigned*_T35;int _T36;int _T37;int _T38;unsigned _T39;struct _fat_ptr _T3A;struct _fat_ptr _T3B;int _T3C;int _T3D;int _T3E;int _T3F;
# 201
struct _fat_ptr Np;struct _fat_ptr Ns;
int i;int n;_T1=Cyc_nvars + 32;_T2=_T1 - 1;_T3=_T2 / 32;{unsigned _T40=(unsigned)_T3;_T5=_check_times(_T40,sizeof(unsigned));{unsigned*_T41=_cycalloc_atomic(_T5);{unsigned _T42=_T40;unsigned _new2_cyclone;_new2_cyclone=0;_TL38: if(_new2_cyclone < _T42)goto _TL36;else{goto _TL37;}_TL36: _T6=_new2_cyclone;
# 209
_T41[_T6]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL38;_TL37:;}_T4=(unsigned*)_T41;}_T0=_tag_fat(_T4,sizeof(unsigned),_T40);}Np=_T0;
# 229 "reduce.cyc"
n=0;
_TL39: if(1)goto _TL3A;else{goto _TL3B;}
# 232
_TL3A: _T7=Cyc_nvars + 32;_T8=_T7 - 1;_T9=_T8 / 32;i=_T9 - 1;_TL3F: if(i >= 0)goto _TL3D;else{goto _TL3E;}
_TL3D: _TA=Np;_TB=i;_TC=_check_fat_subscript(_TA,sizeof(unsigned),_TB);_TD=(unsigned*)_TC;_TE=Cyc_N;_TF=i;_T10=_check_fat_subscript(_TE,sizeof(unsigned),_TF);_T11=(unsigned*)_T10;*_TD=*_T11;
# 232
i=i + -1;goto _TL3F;_TL3E:
# 234
 i=1;_TL43: if(i <= Cyc_nrules)goto _TL41;else{goto _TL42;}
# 236
_TL41: _T12=Cyc_P;_T13=i / 32;_T14=_check_fat_subscript(_T12,sizeof(unsigned),_T13);_T15=(unsigned*)_T14;_T16=*_T15;_T17=i % 32;_T18=1 << _T17;_T19=(unsigned)_T18;_T1A=_T16 & _T19;if(_T1A!=0U)goto _TL44;else{goto _TL46;}
# 238
_TL46: _T1B=Cyc_useful_production(i,Cyc_N);if(!_T1B)goto _TL47;_T1C=Np;_T1D=Cyc_rlhs;_T1E=_T1D.curr;_T1F=(short*)_T1E;_T20=i;_T21=_T1F[_T20];_T22=(int)_T21;_T23=Cyc_ntokens;_T24=_T22 - _T23;_T25=_T24 / 32;_T26=_check_fat_subscript(_T1C,sizeof(unsigned),_T25);_T27=(unsigned*)_T26;_T28=Cyc_rlhs;_T29=i;_T2A=_check_fat_subscript(_T28,sizeof(short),_T29);_T2B=(short*)_T2A;_T2C=*_T2B;_T2D=(int)_T2C;_T2E=Cyc_ntokens;_T2F=_T2D - _T2E;_T30=_T2F % 32;_T31=1 << _T30;_T32=(unsigned)_T31;
# 240
*_T27=*_T27 | _T32;_T33=Cyc_P;_T34=_T33.curr;_T35=(unsigned*)_T34;_T36=i / 32;_T37=i % 32;_T38=1 << _T37;_T39=(unsigned)_T38;
_T35[_T36]=_T35[_T36]| _T39;goto _TL48;_TL47: _TL48: goto _TL45;_TL44: _TL45:
# 234
 i=i + 1;goto _TL43;_TL42: _T3A=Cyc_N;_T3B=Np;_T3C=Cyc_nvars + 32;_T3D=_T3C - 1;_T3E=_T3D / 32;_T3F=
# 245
Cyc_bits_equal(_T3A,_T3B,_T3E);if(!_T3F)goto _TL49;goto _TL3B;_TL49:
# 247
 Ns=Np;
Np=Cyc_N;
Cyc_N=Ns;goto _TL39;_TL3B:
# 251
 Cyc_N=_tag_fat(0,0,0);
Cyc_N=Np;}
# 255
static void Cyc_inaccessable_symbols (void){struct _fat_ptr _T0;int _T1;int _T2;int _T3;unsigned*_T4;unsigned _T5;unsigned _T6;struct _fat_ptr _T7;int _T8;int _T9;int _TA;int _TB;unsigned*_TC;unsigned _TD;unsigned _TE;struct _fat_ptr _TF;int _T10;int _T11;unsigned char*_T12;unsigned*_T13;unsigned _T14;int _T15;int _T16;int _T17;unsigned _T18;unsigned _T19;struct _fat_ptr _T1A;int _T1B;unsigned char*_T1C;unsigned*_T1D;int _T1E;int _T1F;unsigned _T20;int _T21;int _T22;int _T23;struct _fat_ptr _T24;int _T25;unsigned char*_T26;unsigned*_T27;struct _fat_ptr _T28;int _T29;unsigned char*_T2A;unsigned*_T2B;struct _fat_ptr _T2C;int _T2D;unsigned char*_T2E;unsigned*_T2F;unsigned _T30;int _T31;int _T32;unsigned _T33;unsigned _T34;struct _fat_ptr _T35;int _T36;unsigned char*_T37;unsigned*_T38;unsigned _T39;int _T3A;int _T3B;unsigned _T3C;unsigned _T3D;struct _fat_ptr _T3E;struct _fat_ptr _T3F;int _T40;unsigned char*_T41;short*_T42;short _T43;int _T44;int _T45;unsigned char*_T46;unsigned*_T47;unsigned _T48;struct _fat_ptr _T49;unsigned char*_T4A;short*_T4B;int _T4C;short _T4D;int _T4E;int _T4F;int _T50;unsigned _T51;unsigned _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;int _T55;unsigned char*_T56;short*_T57;short _T58;int _T59;struct _fat_ptr _T5A;unsigned char*_T5B;short*_T5C;short _T5D;int _T5E;struct _fat_ptr _T5F;unsigned char*_T60;short*_T61;short _T62;int _T63;int _T64;struct _fat_ptr _T65;short _T66;int _T67;int _T68;int _T69;int _T6A;unsigned char*_T6B;unsigned*_T6C;unsigned _T6D;short _T6E;int _T6F;int _T70;int _T71;int _T72;int _T73;unsigned _T74;unsigned _T75;struct _fat_ptr _T76;short _T77;int _T78;int _T79;unsigned char*_T7A;unsigned*_T7B;short _T7C;int _T7D;int _T7E;int _T7F;unsigned _T80;struct _fat_ptr*_T81;struct _fat_ptr _T82;unsigned char*_T83;unsigned*_T84;int _T85;int _T86;int _T87;unsigned _T88;struct _fat_ptr _T89;struct _fat_ptr _T8A;int _T8B;int _T8C;int _T8D;int _T8E;struct _fat_ptr _T8F;unsigned char*_T90;unsigned*_T91;struct _fat_ptr _T92;unsigned char*_T93;unsigned*_T94;struct _fat_ptr _T95;unsigned char*_T96;unsigned*_T97;struct _fat_ptr _T98;int _T99;int _T9A;int _T9B;int _T9C;struct _fat_ptr _T9D;int _T9E;unsigned char*_T9F;unsigned*_TA0;unsigned _TA1;int _TA2;int _TA3;unsigned _TA4;unsigned _TA5;struct _fat_ptr _TA6;int _TA7;unsigned char*_TA8;short*_TA9;short _TAA;int _TAB;struct _fat_ptr _TAC;struct _fat_ptr _TAD;unsigned char*_TAE;short*_TAF;int _TB0;short _TB1;int _TB2;int _TB3;unsigned char*_TB4;unsigned*_TB5;struct _fat_ptr _TB6;unsigned char*_TB7;short*_TB8;int _TB9;short _TBA;int _TBB;int _TBC;int _TBD;unsigned _TBE;
# 258
struct _fat_ptr Vp;struct _fat_ptr Vs;struct _fat_ptr Pp;
int i;int n;
short t;
struct _fat_ptr r;_T1=Cyc_nsyms + 32;_T2=_T1 - 1;_T3=_T2 / 32;{unsigned _TBF=(unsigned)_T3;_T5=_check_times(_TBF,sizeof(unsigned));{unsigned*_TC0=_cycalloc_atomic(_T5);{unsigned _TC1=_TBF;unsigned _new2_cyclone;_new2_cyclone=0;_TL4E: if(_new2_cyclone < _TC1)goto _TL4C;else{goto _TL4D;}_TL4C: _T6=_new2_cyclone;
# 288 "reduce.cyc"
_TC0[_T6]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL4E;_TL4D:;}_T4=(unsigned*)_TC0;}_T0=_tag_fat(_T4,sizeof(unsigned),_TBF);}Vp=_T0;_T8=Cyc_nrules + 1;_T9=_T8 + 32;_TA=_T9 - 1;_TB=_TA / 32;{unsigned _TBF=(unsigned)_TB;_TD=_check_times(_TBF,sizeof(unsigned));{unsigned*_TC0=_cycalloc_atomic(_TD);{unsigned _TC1=_TBF;unsigned _new2_cyclone;_new2_cyclone=0;_TL52: if(_new2_cyclone < _TC1)goto _TL50;else{goto _TL51;}_TL50: _TE=_new2_cyclone;
_TC0[_TE]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL52;_TL51:;}_TC=(unsigned*)_TC0;}_T7=_tag_fat(_TC,sizeof(unsigned),_TBF);}Pp=_T7;_TF=Cyc_N;_T10=Cyc_start_symbol - Cyc_ntokens;_T11=_T10 / 32;_T12=_check_fat_subscript(_TF,sizeof(unsigned),_T11);_T13=(unsigned*)_T12;_T14=*_T13;_T15=Cyc_start_symbol - Cyc_ntokens;_T16=_T15 % 32;_T17=1 << _T16;_T18=(unsigned)_T17;_T19=_T14 & _T18;
# 292
if(_T19!=0U)goto _TL53;else{goto _TL55;}
_TL55: goto end_iteration;_TL53: _T1A=Cyc_V;_T1B=Cyc_start_symbol / 32;_T1C=_check_fat_subscript(_T1A,sizeof(unsigned),_T1B);_T1D=(unsigned*)_T1C;_T1E=Cyc_start_symbol % 32;_T1F=1 << _T1E;_T20=(unsigned)_T1F;
# 295
*_T1D=*_T1D | _T20;
# 297
n=0;
_TL56: if(1)goto _TL57;else{goto _TL58;}
# 300
_TL57: _T21=Cyc_nsyms + 32;_T22=_T21 - 1;_T23=_T22 / 32;i=_T23 - 1;_TL5C: if(i >= 0)goto _TL5A;else{goto _TL5B;}
_TL5A: _T24=Vp;_T25=i;_T26=_check_fat_subscript(_T24,sizeof(unsigned),_T25);_T27=(unsigned*)_T26;_T28=Cyc_V;_T29=i;_T2A=_check_fat_subscript(_T28,sizeof(unsigned),_T29);_T2B=(unsigned*)_T2A;*_T27=*_T2B;
# 300
i=i + -1;goto _TL5C;_TL5B:
# 302
 i=1;_TL60: if(i <= Cyc_nrules)goto _TL5E;else{goto _TL5F;}
# 304
_TL5E: _T2C=Pp;_T2D=i / 32;_T2E=_check_fat_subscript(_T2C,sizeof(unsigned),_T2D);_T2F=(unsigned*)_T2E;_T30=*_T2F;_T31=i % 32;_T32=1 << _T31;_T33=(unsigned)_T32;_T34=_T30 & _T33;if(_T34!=0U)goto _TL61;else{goto _TL63;}_TL63: _T35=Cyc_P;_T36=i / 32;_T37=_check_fat_subscript(_T35,sizeof(unsigned),_T36);_T38=(unsigned*)_T37;_T39=*_T38;_T3A=i % 32;_T3B=1 << _T3A;_T3C=(unsigned)_T3B;_T3D=_T39 & _T3C;if(_T3D==0U)goto _TL61;_T3E=Cyc_V;_T3F=Cyc_rlhs;_T40=i;_T41=_check_fat_subscript(_T3F,sizeof(short),_T40);_T42=(short*)_T41;_T43=*_T42;_T44=(int)_T43;_T45=_T44 / 32;_T46=_check_fat_subscript(_T3E,sizeof(unsigned),_T45);_T47=(unsigned*)_T46;_T48=*_T47;_T49=Cyc_rlhs;_T4A=_T49.curr;_T4B=(short*)_T4A;_T4C=i;_T4D=_T4B[_T4C];_T4E=(int)_T4D;_T4F=_T4E % 32;_T50=1 << _T4F;_T51=(unsigned)_T50;_T52=_T48 & _T51;if(_T52==0U)goto _TL61;_T53=Cyc_ritem;_T54=Cyc_rrhs;_T55=i;_T56=_check_fat_subscript(_T54,sizeof(short),_T55);_T57=(short*)_T56;_T58=*_T57;_T59=(int)_T58;
# 307
r=_fat_ptr_plus(_T53,sizeof(short),_T59);_TL67: _T5A=r;_T5B=_check_fat_subscript(_T5A,sizeof(short),0U);_T5C=(short*)_T5B;_T5D=*_T5C;_T5E=(int)_T5D;if(_T5E >= 0)goto _TL65;else{goto _TL66;}
# 309
_TL65: _T5F=r;_T60=_T5F.curr;_T61=(short*)_T60;t=*_T61;_T62=t;_T63=(int)_T62;_T64=Cyc_ntokens;if(_T63 < _T64)goto _TL6A;else{goto _TL6B;}_TL6B: _T65=Cyc_N;_T66=t;_T67=(int)_T66;_T68=Cyc_ntokens;_T69=_T67 - _T68;_T6A=_T69 / 32;_T6B=_check_fat_subscript(_T65,sizeof(unsigned),_T6A);_T6C=(unsigned*)_T6B;_T6D=*_T6C;_T6E=t;_T6F=(int)_T6E;_T70=Cyc_ntokens;_T71=_T6F - _T70;_T72=_T71 % 32;_T73=1 << _T72;_T74=(unsigned)_T73;_T75=_T6D & _T74;if(_T75!=0U)goto _TL6A;else{goto _TL68;}
# 312
_TL6A: _T76=Vp;_T77=t;_T78=(int)_T77;_T79=_T78 / 32;_T7A=_check_fat_subscript(_T76,sizeof(unsigned),_T79);_T7B=(unsigned*)_T7A;_T7C=t;_T7D=(int)_T7C;_T7E=_T7D % 32;_T7F=1 << _T7E;_T80=(unsigned)_T7F;*_T7B=*_T7B | _T80;goto _TL69;_TL68: _TL69: _T81=& r;
# 307
_fat_ptr_inplace_plus(_T81,sizeof(short),1);goto _TL67;_TL66: _T82=Pp;_T83=_T82.curr;_T84=(unsigned*)_T83;_T85=i / 32;_T86=i % 32;_T87=1 << _T86;_T88=(unsigned)_T87;
# 315
_T84[_T85]=_T84[_T85]| _T88;goto _TL62;_TL61: _TL62:
# 302
 i=i + 1;goto _TL60;_TL5F: _T89=Cyc_V;_T8A=Vp;_T8B=Cyc_nsyms + 32;_T8C=_T8B - 1;_T8D=_T8C / 32;_T8E=
# 318
Cyc_bits_equal(_T89,_T8A,_T8D);if(!_T8E)goto _TL6C;goto _TL58;_TL6C:
# 322
 Vs=Vp;
Vp=Cyc_V;
Cyc_V=Vs;goto _TL56;_TL58:
# 326
 end_iteration:
# 328
 Cyc_V=_tag_fat(0,0,0);
Cyc_V=Vp;_T8F=Cyc_V;_T90=_check_fat_subscript(_T8F,sizeof(unsigned),0);_T91=(unsigned*)_T90;
# 332
*_T91=*_T91 | 1U;_T92=Cyc_V;_T93=_T92.curr;_T94=(unsigned*)_T93;
_T94[0]=_T94[0]| 2U;_T95=Cyc_V;_T96=_T95.curr;_T97=(unsigned*)_T96;
_T97[0]=_T97[0]| 4U;
# 336
Cyc_P=_tag_fat(0,0,0);
Cyc_P=Pp;_T98=Cyc_P;_T99=Cyc_nrules + 1;_T9A=_T99 + 32;_T9B=_T9A - 1;_T9C=_T9B / 32;
# 339
Cyc_nuseful_productions=Cyc_bits_size(_T98,_T9C);
Cyc_nuseless_productions=Cyc_nrules - Cyc_nuseful_productions;
# 342
Cyc_nuseful_nonterminals=0;
i=Cyc_ntokens;_TL71: if(i < Cyc_nsyms)goto _TL6F;else{goto _TL70;}
_TL6F: _T9D=Cyc_V;_T9E=i / 32;_T9F=_check_fat_subscript(_T9D,sizeof(unsigned),_T9E);_TA0=(unsigned*)_T9F;_TA1=*_TA0;_TA2=i % 32;_TA3=1 << _TA2;_TA4=(unsigned)_TA3;_TA5=_TA1 & _TA4;if(_TA5==0U)goto _TL72;
Cyc_nuseful_nonterminals=Cyc_nuseful_nonterminals + 1;goto _TL73;_TL72: _TL73:
# 343
 i=i + 1;goto _TL71;_TL70:
# 346
 Cyc_nuseless_nonterminals=Cyc_nvars - Cyc_nuseful_nonterminals;
# 349
i=1;_TL77: if(i < Cyc_nrules)goto _TL75;else{goto _TL76;}
_TL75: _TA6=Cyc_rprecsym;_TA7=i;_TA8=_check_fat_subscript(_TA6,sizeof(short),_TA7);_TA9=(short*)_TA8;_TAA=*_TA9;_TAB=(int)_TAA;if(_TAB==0)goto _TL78;_TAC=Cyc_V1;_TAD=Cyc_rprecsym;_TAE=_TAD.curr;_TAF=(short*)_TAE;_TB0=i;_TB1=_TAF[_TB0];_TB2=(int)_TB1;_TB3=_TB2 / 32;_TB4=_check_fat_subscript(_TAC,sizeof(unsigned),_TB3);_TB5=(unsigned*)_TB4;_TB6=Cyc_rprecsym;_TB7=_TB6.curr;_TB8=(short*)_TB7;_TB9=i;_TBA=_TB8[_TB9];_TBB=(int)_TBA;_TBC=_TBB % 32;_TBD=1 << _TBC;_TBE=(unsigned)_TBD;
*_TB5=*_TB5 | _TBE;goto _TL79;_TL78: _TL79:
# 349
 i=i + 1;goto _TL77;_TL76:;}
# 354
static void Cyc_reduce_grammar_tables (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;unsigned*_T3;unsigned _T4;int _T5;int _T6;unsigned _T7;unsigned _T8;struct _fat_ptr _T9;int _TA;unsigned char*_TB;short*_TC;struct _fat_ptr _TD;int _TE;short*_TF;unsigned _T10;unsigned _T11;struct _fat_ptr _T12;int _T13;struct _fat_ptr _T14;int _T15;unsigned char*_T16;short*_T17;struct _fat_ptr _T18;int _T19;unsigned char*_T1A;unsigned*_T1B;unsigned _T1C;int _T1D;int _T1E;unsigned _T1F;unsigned _T20;struct _fat_ptr _T21;int _T22;unsigned char*_T23;short*_T24;int _T25;int _T26;struct _fat_ptr _T27;int _T28;unsigned char*_T29;short*_T2A;short _T2B;struct _fat_ptr _T2C;int _T2D;unsigned char*_T2E;short*_T2F;struct _fat_ptr _T30;int _T31;unsigned char*_T32;short*_T33;struct _fat_ptr _T34;int _T35;unsigned char*_T36;short*_T37;struct _fat_ptr _T38;int _T39;unsigned char*_T3A;short*_T3B;struct _fat_ptr _T3C;int _T3D;unsigned char*_T3E;struct _fat_ptr*_T3F;struct _fat_ptr _T40;int _T41;unsigned char*_T42;struct _fat_ptr*_T43;struct _fat_ptr _T44;int _T45;unsigned char*_T46;struct _fat_ptr*_T47;struct _fat_ptr _T48;int _T49;unsigned char*_T4A;short*_T4B;short _T4C;int _T4D;struct _fat_ptr _T4E;unsigned char*_T4F;short*_T50;int _T51;struct _fat_ptr _T52;struct _fat_ptr _T53;unsigned char*_T54;short*_T55;int _T56;short _T57;int _T58;unsigned char*_T59;short*_T5A;struct _fat_ptr _T5B;int _T5C;unsigned char*_T5D;short*_T5E;short _T5F;int _T60;int _T61;struct _fat_ptr _T62;unsigned char*_T63;short*_T64;int _T65;struct _fat_ptr _T66;struct _fat_ptr _T67;unsigned char*_T68;short*_T69;int _T6A;short _T6B;int _T6C;unsigned char*_T6D;short*_T6E;struct _fat_ptr _T6F;unsigned char*_T70;short*_T71;short _T72;int _T73;struct _fat_ptr _T74;unsigned char*_T75;short*_T76;short _T77;int _T78;int _T79;struct _fat_ptr _T7A;unsigned char*_T7B;short*_T7C;struct _fat_ptr _T7D;struct _fat_ptr _T7E;unsigned char*_T7F;short*_T80;short _T81;int _T82;unsigned char*_T83;short*_T84;struct _fat_ptr*_T85;struct _fat_ptr _T86;int _T87;unsigned char*_T88;short*_T89;short _T8A;int _T8B;int _T8C;
# 406 "reduce.cyc"
if(Cyc_nuseless_productions <= 0)goto _TL7A;{
# 408
int pn;
# 410
pn=1;_TL7F: if(pn <= Cyc_nrules)goto _TL7D;else{goto _TL7E;}
# 412
_TL7D: _T0=Cyc_P;_T1=pn / 32;_T2=_check_fat_subscript(_T0,sizeof(unsigned),_T1);_T3=(unsigned*)_T2;_T4=*_T3;_T5=pn % 32;_T6=1 << _T5;_T7=(unsigned)_T6;_T8=_T4 & _T7;if(_T8!=0U)goto _TL80;else{goto _TL82;}
# 414
_TL82: _T9=Cyc_rlhs;_TA=pn;_TB=_check_fat_subscript(_T9,sizeof(short),_TA);_TC=(short*)_TB;*_TC=- 1;goto _TL81;_TL80: _TL81:
# 410
 pn=pn + 1;goto _TL7F;_TL7E:;}goto _TL7B;_TL7A: _TL7B:
# 420
 if(Cyc_nuseless_nonterminals <= 0)goto _TL83;{
# 423
int i;int n;
# 425
struct _fat_ptr nontermmap;
struct _fat_ptr r;_TE=Cyc_nvars;{unsigned _T8D=(unsigned)_TE;_T10=_check_times(_T8D,sizeof(short));{short*_T8E=_cycalloc_atomic(_T10);{unsigned _T8F=_T8D;unsigned _new2_cyclone;_new2_cyclone=0;_TL88: if(_new2_cyclone < _T8F)goto _TL86;else{goto _TL87;}_TL86: _T11=_new2_cyclone;
# 434
_T8E[_T11]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL88;_TL87:;}_TF=(short*)_T8E;}_TD=_tag_fat(_TF,sizeof(short),_T8D);}_T12=_TD;_T13=- Cyc_ntokens;nontermmap=_fat_ptr_plus(_T12,sizeof(short),_T13);
i=Cyc_ntokens;_TL8C: if(i < Cyc_nsyms)goto _TL8A;else{goto _TL8B;}
_TL8A: _T14=nontermmap;_T15=i;_T16=_check_fat_subscript(_T14,sizeof(short),_T15);_T17=(short*)_T16;*_T17=- 1;
# 435
i=i + 1;goto _TL8C;_TL8B:
# 438
 n=Cyc_ntokens;
i=Cyc_ntokens;_TL90: if(i < Cyc_nsyms)goto _TL8E;else{goto _TL8F;}
_TL8E: _T18=Cyc_V;_T19=i / 32;_T1A=_check_fat_subscript(_T18,sizeof(unsigned),_T19);_T1B=(unsigned*)_T1A;_T1C=*_T1B;_T1D=i % 32;_T1E=1 << _T1D;_T1F=(unsigned)_T1E;_T20=_T1C & _T1F;if(_T20==0U)goto _TL91;_T21=nontermmap;_T22=i;_T23=_check_fat_subscript(_T21,sizeof(short),_T22);_T24=(short*)_T23;_T25=n;
n=_T25 + 1;_T26=_T25;*_T24=(short)_T26;goto _TL92;_TL91: _TL92:
# 439
 i=i + 1;goto _TL90;_TL8F:
# 445
 i=Cyc_ntokens;_TL96: if(i < Cyc_nsyms)goto _TL94;else{goto _TL95;}
# 447
_TL94: _T27=nontermmap;_T28=i;_T29=_check_fat_subscript(_T27,sizeof(short),_T28);_T2A=(short*)_T29;_T2B=*_T2A;n=(int)_T2B;
if(n < 0)goto _TL97;_T2C=Cyc_sassoc;_T2D=n;_T2E=_check_fat_subscript(_T2C,sizeof(short),_T2D);_T2F=(short*)_T2E;_T30=Cyc_sassoc;_T31=i;_T32=_check_fat_subscript(_T30,sizeof(short),_T31);_T33=(short*)_T32;
# 450
*_T2F=*_T33;_T34=Cyc_sprec;_T35=n;_T36=_check_fat_subscript(_T34,sizeof(short),_T35);_T37=(short*)_T36;_T38=Cyc_sprec;_T39=i;_T3A=_check_fat_subscript(_T38,sizeof(short),_T39);_T3B=(short*)_T3A;
*_T37=*_T3B;_T3C=Cyc_tags;_T3D=n;_T3E=_check_fat_subscript(_T3C,sizeof(struct _fat_ptr),_T3D);_T3F=(struct _fat_ptr*)_T3E;_T40=Cyc_tags;_T41=i;_T42=_check_fat_subscript(_T40,sizeof(struct _fat_ptr),_T41);_T43=(struct _fat_ptr*)_T42;
*_T3F=*_T43;goto _TL98;
# 454
_TL97: _T44=Cyc_tags;_T45=i;_T46=_check_fat_subscript(_T44,sizeof(struct _fat_ptr),_T45);_T47=(struct _fat_ptr*)_T46;*_T47=_tag_fat(0,0,0);_TL98:
# 445
 i=i + 1;goto _TL96;_TL95:
# 460
 i=1;_TL9C: if(i <= Cyc_nrules)goto _TL9A;else{goto _TL9B;}
# 463
_TL9A: _T48=Cyc_rlhs;_T49=i;_T4A=_check_fat_subscript(_T48,sizeof(short),_T49);_T4B=(short*)_T4A;_T4C=*_T4B;_T4D=(int)_T4C;if(_T4D < 0)goto _TL9D;_T4E=Cyc_rlhs;_T4F=_T4E.curr;_T50=(short*)_T4F;_T51=i;_T52=nontermmap;_T53=Cyc_rlhs;_T54=_T53.curr;_T55=(short*)_T54;_T56=i;_T57=_T55[_T56];_T58=(int)_T57;_T59=_check_fat_subscript(_T52,sizeof(short),_T58);_T5A=(short*)_T59;
_T50[_T51]=*_T5A;goto _TL9E;_TL9D: _TL9E: _T5B=Cyc_rprecsym;_T5C=i;_T5D=_check_fat_subscript(_T5B,sizeof(short),_T5C);_T5E=(short*)_T5D;_T5F=*_T5E;_T60=(int)_T5F;_T61=Cyc_ntokens;
if(_T60 < _T61)goto _TL9F;_T62=Cyc_rprecsym;_T63=_T62.curr;_T64=(short*)_T63;_T65=i;_T66=nontermmap;_T67=Cyc_rprecsym;_T68=_T67.curr;_T69=(short*)_T68;_T6A=i;_T6B=_T69[_T6A];_T6C=(int)_T6B;_T6D=_check_fat_subscript(_T66,sizeof(short),_T6C);_T6E=(short*)_T6D;
# 467
_T64[_T65]=*_T6E;goto _TLA0;_TL9F: _TLA0:
# 460
 i=i + 1;goto _TL9C;_TL9B:
# 470
 r=Cyc_ritem;_TLA4: _T6F=r;_T70=_check_fat_subscript(_T6F,sizeof(short),0U);_T71=(short*)_T70;_T72=*_T71;_T73=(int)_T72;if(_T73)goto _TLA2;else{goto _TLA3;}
_TLA2: _T74=r;_T75=_T74.curr;_T76=(short*)_T75;_T77=*_T76;_T78=(int)_T77;_T79=Cyc_ntokens;if(_T78 < _T79)goto _TLA5;_T7A=r;_T7B=_T7A.curr;_T7C=(short*)_T7B;_T7D=nontermmap;_T7E=r;_T7F=_T7E.curr;_T80=(short*)_T7F;_T81=*_T80;_T82=(int)_T81;_T83=_check_fat_subscript(_T7D,sizeof(short),_T82);_T84=(short*)_T83;
*_T7C=*_T84;goto _TLA6;_TLA5: _TLA6: _T85=& r;
# 470
_fat_ptr_inplace_plus(_T85,sizeof(short),1);goto _TLA4;_TLA3: _T86=nontermmap;_T87=Cyc_start_symbol;_T88=_check_fat_subscript(_T86,sizeof(short),_T87);_T89=(short*)_T88;_T8A=*_T89;
# 474
Cyc_start_symbol=(int)_T8A;_T8B=Cyc_nuseless_nonterminals;
# 476
Cyc_nsyms=Cyc_nsyms - _T8B;_T8C=Cyc_nuseless_nonterminals;
Cyc_nvars=Cyc_nvars - _T8C;}goto _TL84;_TL83: _TL84:;}
# 483
static void Cyc_print_results (void){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;unsigned*_T6;unsigned _T7;int _T8;int _T9;unsigned _TA;unsigned _TB;struct Cyc_String_pa_PrintArg_struct _TC;struct _fat_ptr _TD;int _TE;unsigned char*_TF;struct _fat_ptr*_T10;struct _fat_ptr _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct _fat_ptr _T15;int _T16;unsigned char*_T17;unsigned*_T18;unsigned _T19;int _T1A;int _T1B;unsigned _T1C;unsigned _T1D;struct _fat_ptr _T1E;int _T1F;unsigned char*_T20;unsigned*_T21;unsigned _T22;int _T23;int _T24;unsigned _T25;unsigned _T26;int _T27;struct Cyc___cycFILE*_T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;struct Cyc_String_pa_PrintArg_struct _T2B;struct _fat_ptr _T2C;int _T2D;unsigned char*_T2E;struct _fat_ptr*_T2F;struct _fat_ptr _T30;struct Cyc___cycFILE*_T31;struct _fat_ptr _T32;struct _fat_ptr _T33;struct Cyc___cycFILE*_T34;struct _fat_ptr _T35;struct _fat_ptr _T36;struct _fat_ptr _T37;int _T38;unsigned char*_T39;unsigned*_T3A;unsigned _T3B;int _T3C;int _T3D;unsigned _T3E;unsigned _T3F;struct Cyc_Int_pa_PrintArg_struct _T40;int _T41;struct Cyc___cycFILE*_T42;struct _fat_ptr _T43;struct _fat_ptr _T44;struct Cyc_String_pa_PrintArg_struct _T45;struct _fat_ptr _T46;struct _fat_ptr _T47;int _T48;unsigned char*_T49;short*_T4A;short _T4B;int _T4C;unsigned char*_T4D;struct _fat_ptr*_T4E;struct _fat_ptr _T4F;struct Cyc___cycFILE*_T50;struct _fat_ptr _T51;struct _fat_ptr _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;int _T55;unsigned char*_T56;short*_T57;short _T58;int _T59;struct _fat_ptr _T5A;unsigned char*_T5B;short*_T5C;short _T5D;int _T5E;struct Cyc_String_pa_PrintArg_struct _T5F;struct _fat_ptr _T60;struct _fat_ptr _T61;unsigned char*_T62;short*_T63;short _T64;int _T65;unsigned char*_T66;struct _fat_ptr*_T67;struct _fat_ptr _T68;struct Cyc___cycFILE*_T69;struct _fat_ptr _T6A;struct _fat_ptr _T6B;struct _fat_ptr*_T6C;struct Cyc___cycFILE*_T6D;struct _fat_ptr _T6E;struct _fat_ptr _T6F;int _T70;struct Cyc___cycFILE*_T71;struct _fat_ptr _T72;struct _fat_ptr _T73;
# 486
int i;
# 488
struct _fat_ptr r;
int b;
# 491
if(Cyc_nuseless_nonterminals <= 0)goto _TLA7;_T0=
# 493
_check_null(Cyc_foutput);_T1=_tag_fat("Useless nonterminals:\n\n",sizeof(char),24U);_T2=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);
i=Cyc_ntokens;_TLAC: if(i < Cyc_nsyms)goto _TLAA;else{goto _TLAB;}
_TLAA: _T3=Cyc_V;_T4=i / 32;_T5=_check_fat_subscript(_T3,sizeof(unsigned),_T4);_T6=(unsigned*)_T5;_T7=*_T6;_T8=i % 32;_T9=1 << _T8;_TA=(unsigned)_T9;_TB=_T7 & _TA;if(_TB!=0U)goto _TLAD;else{goto _TLAF;}
_TLAF:{struct Cyc_String_pa_PrintArg_struct _T74;_T74.tag=0;_TD=Cyc_tags;_TE=i;_TF=_check_fat_subscript(_TD,sizeof(struct _fat_ptr),_TE);_T10=(struct _fat_ptr*)_TF;_T11=*_T10;_T74.f1=_T11;_TC=_T74;}{struct Cyc_String_pa_PrintArg_struct _T74=_TC;void*_T75[1];_T75[0]=& _T74;_T12=_check_null(Cyc_foutput);_T13=_tag_fat("   %s\n",sizeof(char),7U);_T14=_tag_fat(_T75,sizeof(void*),1);Cyc_fprintf(_T12,_T13,_T14);}goto _TLAE;_TLAD: _TLAE:
# 494
 i=i + 1;goto _TLAC;_TLAB: goto _TLA8;_TLA7: _TLA8:
# 498
 b=0;
i=0;_TLB3: if(i < Cyc_ntokens)goto _TLB1;else{goto _TLB2;}
# 501
_TLB1: _T15=Cyc_V;_T16=i / 32;_T17=_check_fat_subscript(_T15,sizeof(unsigned),_T16);_T18=(unsigned*)_T17;_T19=*_T18;_T1A=i % 32;_T1B=1 << _T1A;_T1C=(unsigned)_T1B;_T1D=_T19 & _T1C;if(_T1D!=0U)goto _TLB4;else{goto _TLB6;}_TLB6: _T1E=Cyc_V1;_T1F=i / 32;_T20=_check_fat_subscript(_T1E,sizeof(unsigned),_T1F);_T21=(unsigned*)_T20;_T22=*_T21;_T23=i % 32;_T24=1 << _T23;_T25=(unsigned)_T24;_T26=_T22 & _T25;if(_T26!=0U)goto _TLB4;else{goto _TLB7;}
# 503
_TLB7: _T27=b;if(_T27)goto _TLB8;else{goto _TLBA;}
# 505
_TLBA: _T28=_check_null(Cyc_foutput);_T29=_tag_fat("\n\nTerminals which are not used:\n\n",sizeof(char),34U);_T2A=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T28,_T29,_T2A);
b=1;goto _TLB9;_TLB8: _TLB9:{struct Cyc_String_pa_PrintArg_struct _T74;_T74.tag=0;_T2C=Cyc_tags;_T2D=i;_T2E=_check_fat_subscript(_T2C,sizeof(struct _fat_ptr),_T2D);_T2F=(struct _fat_ptr*)_T2E;_T30=*_T2F;
# 508
_T74.f1=_T30;_T2B=_T74;}{struct Cyc_String_pa_PrintArg_struct _T74=_T2B;void*_T75[1];_T75[0]=& _T74;_T31=_check_null(Cyc_foutput);_T32=_tag_fat("   %s\n",sizeof(char),7U);_T33=_tag_fat(_T75,sizeof(void*),1);Cyc_fprintf(_T31,_T32,_T33);}goto _TLB5;_TLB4: _TLB5:
# 499
 i=i + 1;goto _TLB3;_TLB2:
# 512
 if(Cyc_nuseless_productions <= 0)goto _TLBB;_T34=
# 514
_check_null(Cyc_foutput);_T35=_tag_fat("\n\nUseless rules:\n\n",sizeof(char),19U);_T36=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T34,_T35,_T36);
i=1;_TLC0: if(i <= Cyc_nrules)goto _TLBE;else{goto _TLBF;}
# 517
_TLBE: _T37=Cyc_P;_T38=i / 32;_T39=_check_fat_subscript(_T37,sizeof(unsigned),_T38);_T3A=(unsigned*)_T39;_T3B=*_T3A;_T3C=i % 32;_T3D=1 << _T3C;_T3E=(unsigned)_T3D;_T3F=_T3B & _T3E;if(_T3F!=0U)goto _TLC1;else{goto _TLC3;}
# 519
_TLC3:{struct Cyc_Int_pa_PrintArg_struct _T74;_T74.tag=1;_T41=i;_T74.f1=(unsigned long)_T41;_T40=_T74;}{struct Cyc_Int_pa_PrintArg_struct _T74=_T40;void*_T75[1];_T75[0]=& _T74;_T42=_check_null(Cyc_foutput);_T43=_tag_fat("#%-4d  ",sizeof(char),8U);_T44=_tag_fat(_T75,sizeof(void*),1);Cyc_fprintf(_T42,_T43,_T44);}{struct Cyc_String_pa_PrintArg_struct _T74;_T74.tag=0;_T46=Cyc_tags;_T47=Cyc_rlhs;_T48=i;_T49=_check_fat_subscript(_T47,sizeof(short),_T48);_T4A=(short*)_T49;_T4B=*_T4A;_T4C=(int)_T4B;_T4D=_check_fat_subscript(_T46,sizeof(struct _fat_ptr),_T4C);_T4E=(struct _fat_ptr*)_T4D;_T4F=*_T4E;
_T74.f1=_T4F;_T45=_T74;}{struct Cyc_String_pa_PrintArg_struct _T74=_T45;void*_T75[1];_T75[0]=& _T74;_T50=_check_null(Cyc_foutput);_T51=_tag_fat("%s :\t",sizeof(char),6U);_T52=_tag_fat(_T75,sizeof(void*),1);Cyc_fprintf(_T50,_T51,_T52);}_T53=Cyc_ritem;_T54=Cyc_rrhs;_T55=i;_T56=_check_fat_subscript(_T54,sizeof(short),_T55);_T57=(short*)_T56;_T58=*_T57;_T59=(int)_T58;
# 522
r=_fat_ptr_plus(_T53,sizeof(short),_T59);_TLC7: _T5A=r;_T5B=_check_fat_subscript(_T5A,sizeof(short),0U);_T5C=(short*)_T5B;_T5D=*_T5C;_T5E=(int)_T5D;if(_T5E >= 0)goto _TLC5;else{goto _TLC6;}
# 524
_TLC5:{struct Cyc_String_pa_PrintArg_struct _T74;_T74.tag=0;_T60=Cyc_tags;_T61=r;_T62=_T61.curr;_T63=(short*)_T62;_T64=*_T63;_T65=(int)_T64;_T66=_check_fat_subscript(_T60,sizeof(struct _fat_ptr),_T65);_T67=(struct _fat_ptr*)_T66;_T68=*_T67;_T74.f1=_T68;_T5F=_T74;}{struct Cyc_String_pa_PrintArg_struct _T74=_T5F;void*_T75[1];_T75[0]=& _T74;_T69=_check_null(Cyc_foutput);_T6A=_tag_fat(" %s",sizeof(char),4U);_T6B=_tag_fat(_T75,sizeof(void*),1);Cyc_fprintf(_T69,_T6A,_T6B);}_T6C=& r;
# 522
_fat_ptr_inplace_plus(_T6C,sizeof(short),1);goto _TLC7;_TLC6: _T6D=
# 526
_check_null(Cyc_foutput);_T6E=_tag_fat(";\n",sizeof(char),3U);_T6F=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T6D,_T6E,_T6F);goto _TLC2;_TLC1: _TLC2:
# 515
 i=i + 1;goto _TLC0;_TLBF: goto _TLBC;_TLBB: _TLBC:
# 530
 if(Cyc_nuseless_nonterminals > 0)goto _TLCA;else{goto _TLCC;}_TLCC: if(Cyc_nuseless_productions > 0)goto _TLCA;else{goto _TLCB;}_TLCB: _T70=b;if(_T70)goto _TLCA;else{goto _TLC8;}
_TLCA: _T71=_check_null(Cyc_foutput);_T72=_tag_fat("\n\n",sizeof(char),3U);_T73=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T71,_T72,_T73);goto _TLC9;_TLC8: _TLC9:;}
# 534
void Cyc_dump_grammar (void){struct Cyc_Int_pa_PrintArg_struct _T0;int _T1;struct Cyc_Int_pa_PrintArg_struct _T2;int _T3;struct Cyc_Int_pa_PrintArg_struct _T4;int _T5;struct Cyc_Int_pa_PrintArg_struct _T6;int _T7;struct Cyc_Int_pa_PrintArg_struct _T8;int _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_Int_pa_PrintArg_struct _T13;int _T14;struct Cyc_Int_pa_PrintArg_struct _T15;struct _fat_ptr _T16;int _T17;unsigned char*_T18;short*_T19;short _T1A;int _T1B;struct Cyc_Int_pa_PrintArg_struct _T1C;struct _fat_ptr _T1D;int _T1E;unsigned char*_T1F;short*_T20;short _T21;int _T22;struct Cyc_String_pa_PrintArg_struct _T23;struct _fat_ptr _T24;int _T25;unsigned char*_T26;struct _fat_ptr*_T27;struct _fat_ptr _T28;struct Cyc___cycFILE*_T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;struct Cyc___cycFILE*_T2C;struct _fat_ptr _T2D;struct _fat_ptr _T2E;struct Cyc___cycFILE*_T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;struct Cyc_Int_pa_PrintArg_struct _T32;int _T33;struct Cyc_Int_pa_PrintArg_struct _T34;struct _fat_ptr _T35;int _T36;unsigned char*_T37;short*_T38;short _T39;int _T3A;struct Cyc_Int_pa_PrintArg_struct _T3B;struct _fat_ptr _T3C;int _T3D;unsigned char*_T3E;short*_T3F;short _T40;int _T41;struct Cyc_Int_pa_PrintArg_struct _T42;struct _fat_ptr _T43;int _T44;unsigned char*_T45;short*_T46;short _T47;int _T48;struct Cyc_Int_pa_PrintArg_struct _T49;struct _fat_ptr _T4A;int _T4B;unsigned char*_T4C;short*_T4D;short _T4E;int _T4F;struct Cyc___cycFILE*_T50;struct _fat_ptr _T51;struct _fat_ptr _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;int _T55;unsigned char*_T56;short*_T57;short _T58;int _T59;struct _fat_ptr _T5A;unsigned char*_T5B;short*_T5C;short _T5D;int _T5E;struct Cyc_Int_pa_PrintArg_struct _T5F;struct _fat_ptr _T60;unsigned char*_T61;short*_T62;short _T63;int _T64;struct Cyc___cycFILE*_T65;struct _fat_ptr _T66;struct _fat_ptr _T67;struct _fat_ptr*_T68;struct Cyc_Int_pa_PrintArg_struct _T69;struct _fat_ptr _T6A;unsigned char*_T6B;short*_T6C;short _T6D;short _T6E;int _T6F;struct Cyc___cycFILE*_T70;struct _fat_ptr _T71;struct _fat_ptr _T72;struct Cyc___cycFILE*_T73;struct _fat_ptr _T74;struct _fat_ptr _T75;struct Cyc___cycFILE*_T76;struct _fat_ptr _T77;struct _fat_ptr _T78;struct Cyc_Int_pa_PrintArg_struct _T79;int _T7A;struct Cyc_String_pa_PrintArg_struct _T7B;struct _fat_ptr _T7C;struct _fat_ptr _T7D;int _T7E;unsigned char*_T7F;short*_T80;short _T81;int _T82;unsigned char*_T83;struct _fat_ptr*_T84;struct _fat_ptr _T85;struct Cyc___cycFILE*_T86;struct _fat_ptr _T87;struct _fat_ptr _T88;struct _fat_ptr _T89;struct _fat_ptr _T8A;int _T8B;unsigned char*_T8C;short*_T8D;short _T8E;int _T8F;struct _fat_ptr _T90;unsigned char*_T91;short*_T92;short _T93;int _T94;struct Cyc_String_pa_PrintArg_struct _T95;struct _fat_ptr _T96;struct _fat_ptr _T97;unsigned char*_T98;short*_T99;short _T9A;int _T9B;unsigned char*_T9C;struct _fat_ptr*_T9D;struct _fat_ptr _T9E;struct Cyc___cycFILE*_T9F;struct _fat_ptr _TA0;struct _fat_ptr _TA1;struct _fat_ptr*_TA2;struct Cyc___cycFILE*_TA3;struct _fat_ptr _TA4;struct _fat_ptr _TA5;struct Cyc___cycFILE*_TA6;struct _fat_ptr _TA7;struct _fat_ptr _TA8;
# 537
int i;
struct _fat_ptr r;{struct Cyc_Int_pa_PrintArg_struct _TA9;_TA9.tag=1;_T1=Cyc_ntokens;
# 542
_TA9.f1=(unsigned long)_T1;_T0=_TA9;}{struct Cyc_Int_pa_PrintArg_struct _TA9=_T0;{struct Cyc_Int_pa_PrintArg_struct _TAA;_TAA.tag=1;_T3=Cyc_nvars;_TAA.f1=(unsigned long)_T3;_T2=_TAA;}{struct Cyc_Int_pa_PrintArg_struct _TAA=_T2;{struct Cyc_Int_pa_PrintArg_struct _TAB;_TAB.tag=1;_T5=Cyc_nsyms;_TAB.f1=(unsigned long)_T5;_T4=_TAB;}{struct Cyc_Int_pa_PrintArg_struct _TAB=_T4;{struct Cyc_Int_pa_PrintArg_struct _TAC;_TAC.tag=1;_T7=Cyc_nrules;_TAC.f1=(unsigned long)_T7;_T6=_TAC;}{struct Cyc_Int_pa_PrintArg_struct _TAC=_T6;{struct Cyc_Int_pa_PrintArg_struct _TAD;_TAD.tag=1;_T9=Cyc_nitems;_TAD.f1=(unsigned long)_T9;_T8=_TAD;}{struct Cyc_Int_pa_PrintArg_struct _TAD=_T8;void*_TAE[5];_TAE[0]=& _TA9;_TAE[1]=& _TAA;_TAE[2]=& _TAB;_TAE[3]=& _TAC;_TAE[4]=& _TAD;_TA=
# 540
_check_null(Cyc_foutput);_TB=
_tag_fat("ntokens = %d, nvars = %d, nsyms = %d, nrules = %d, nitems = %d\n\n",sizeof(char),65U);_TC=_tag_fat(_TAE,sizeof(void*),5);Cyc_fprintf(_TA,_TB,_TC);}}}}}_TD=
# 543
_check_null(Cyc_foutput);_TE=_tag_fat("Variables\n---------\n\n",sizeof(char),22U);_TF=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TD,_TE,_TF);_T10=
_check_null(Cyc_foutput);_T11=_tag_fat("Value  Sprec    Sassoc    Tag\n",sizeof(char),31U);_T12=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T10,_T11,_T12);
i=Cyc_ntokens;_TLD0: if(i < Cyc_nsyms)goto _TLCE;else{goto _TLCF;}
_TLCE:{struct Cyc_Int_pa_PrintArg_struct _TA9;_TA9.tag=1;_T14=i;
_TA9.f1=(unsigned long)_T14;_T13=_TA9;}{struct Cyc_Int_pa_PrintArg_struct _TA9=_T13;{struct Cyc_Int_pa_PrintArg_struct _TAA;_TAA.tag=1;_T16=Cyc_sprec;_T17=i;_T18=_check_fat_subscript(_T16,sizeof(short),_T17);_T19=(short*)_T18;_T1A=*_T19;_T1B=(int)_T1A;_TAA.f1=(unsigned long)_T1B;_T15=_TAA;}{struct Cyc_Int_pa_PrintArg_struct _TAA=_T15;{struct Cyc_Int_pa_PrintArg_struct _TAB;_TAB.tag=1;_T1D=Cyc_sassoc;_T1E=i;_T1F=_check_fat_subscript(_T1D,sizeof(short),_T1E);_T20=(short*)_T1F;_T21=*_T20;_T22=(int)_T21;_TAB.f1=(unsigned long)_T22;_T1C=_TAB;}{struct Cyc_Int_pa_PrintArg_struct _TAB=_T1C;{struct Cyc_String_pa_PrintArg_struct _TAC;_TAC.tag=0;_T24=Cyc_tags;_T25=i;_T26=_check_fat_subscript(_T24,sizeof(struct _fat_ptr),_T25);_T27=(struct _fat_ptr*)_T26;_T28=*_T27;_TAC.f1=_T28;_T23=_TAC;}{struct Cyc_String_pa_PrintArg_struct _TAC=_T23;void*_TAD[4];_TAD[0]=& _TA9;_TAD[1]=& _TAA;_TAD[2]=& _TAB;_TAD[3]=& _TAC;_T29=
# 546
_check_null(Cyc_foutput);_T2A=_tag_fat("%5d  %5d  %5d  %s\n",sizeof(char),19U);_T2B=_tag_fat(_TAD,sizeof(void*),4);Cyc_fprintf(_T29,_T2A,_T2B);}}}}
# 545
i=i + 1;goto _TLD0;_TLCF: _T2C=
# 548
_check_null(Cyc_foutput);_T2D=_tag_fat("\n\n",sizeof(char),3U);_T2E=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2C,_T2D,_T2E);_T2F=
_check_null(Cyc_foutput);_T30=_tag_fat("Rules\n-----\n\n",sizeof(char),14U);_T31=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2F,_T30,_T31);
i=1;_TLD4: if(i <= Cyc_nrules)goto _TLD2;else{goto _TLD3;}
# 552
_TLD2:{struct Cyc_Int_pa_PrintArg_struct _TA9;_TA9.tag=1;_T33=i;
_TA9.f1=(unsigned long)_T33;_T32=_TA9;}{struct Cyc_Int_pa_PrintArg_struct _TA9=_T32;{struct Cyc_Int_pa_PrintArg_struct _TAA;_TAA.tag=1;_T35=Cyc_rprec;_T36=i;_T37=_check_fat_subscript(_T35,sizeof(short),_T36);_T38=(short*)_T37;_T39=*_T38;_T3A=(int)_T39;_TAA.f1=(unsigned long)_T3A;_T34=_TAA;}{struct Cyc_Int_pa_PrintArg_struct _TAA=_T34;{struct Cyc_Int_pa_PrintArg_struct _TAB;_TAB.tag=1;_T3C=Cyc_rassoc;_T3D=i;_T3E=_check_fat_subscript(_T3C,sizeof(short),_T3D);_T3F=(short*)_T3E;_T40=*_T3F;_T41=(int)_T40;_TAB.f1=(unsigned long)_T41;_T3B=_TAB;}{struct Cyc_Int_pa_PrintArg_struct _TAB=_T3B;{struct Cyc_Int_pa_PrintArg_struct _TAC;_TAC.tag=1;_T43=Cyc_rlhs;_T44=i;_T45=_check_fat_subscript(_T43,sizeof(short),_T44);_T46=(short*)_T45;_T47=*_T46;_T48=(int)_T47;_TAC.f1=(unsigned long)_T48;_T42=_TAC;}{struct Cyc_Int_pa_PrintArg_struct _TAC=_T42;{struct Cyc_Int_pa_PrintArg_struct _TAD;_TAD.tag=1;_T4A=Cyc_rrhs;_T4B=i;_T4C=_check_fat_subscript(_T4A,sizeof(short),_T4B);_T4D=(short*)_T4C;_T4E=*_T4D;_T4F=(int)_T4E;_TAD.f1=(unsigned long)_T4F;_T49=_TAD;}{struct Cyc_Int_pa_PrintArg_struct _TAD=_T49;void*_TAE[5];_TAE[0]=& _TA9;_TAE[1]=& _TAA;_TAE[2]=& _TAB;_TAE[3]=& _TAC;_TAE[4]=& _TAD;_T50=
# 552
_check_null(Cyc_foutput);_T51=_tag_fat("%-5d(%5d%5d)%5d : (@%-5d)",sizeof(char),26U);_T52=_tag_fat(_TAE,sizeof(void*),5);Cyc_fprintf(_T50,_T51,_T52);}}}}}_T53=Cyc_ritem;_T54=Cyc_rrhs;_T55=i;_T56=_check_fat_subscript(_T54,sizeof(short),_T55);_T57=(short*)_T56;_T58=*_T57;_T59=(int)_T58;
# 555
r=_fat_ptr_plus(_T53,sizeof(short),_T59);_TLD8: _T5A=r;_T5B=_check_fat_subscript(_T5A,sizeof(short),0U);_T5C=(short*)_T5B;_T5D=*_T5C;_T5E=(int)_T5D;if(_T5E > 0)goto _TLD6;else{goto _TLD7;}
_TLD6:{struct Cyc_Int_pa_PrintArg_struct _TA9;_TA9.tag=1;_T60=r;_T61=_T60.curr;_T62=(short*)_T61;_T63=*_T62;_T64=(int)_T63;_TA9.f1=(unsigned long)_T64;_T5F=_TA9;}{struct Cyc_Int_pa_PrintArg_struct _TA9=_T5F;void*_TAA[1];_TAA[0]=& _TA9;_T65=_check_null(Cyc_foutput);_T66=_tag_fat("%5d",sizeof(char),4U);_T67=_tag_fat(_TAA,sizeof(void*),1);Cyc_fprintf(_T65,_T66,_T67);}_T68=& r;
# 555
_fat_ptr_inplace_plus(_T68,sizeof(short),1);goto _TLD8;_TLD7:{struct Cyc_Int_pa_PrintArg_struct _TA9;_TA9.tag=1;_T6A=r;_T6B=_T6A.curr;_T6C=(short*)_T6B;_T6D=*_T6C;_T6E=- _T6D;_T6F=(int)_T6E;
# 557
_TA9.f1=(unsigned long)_T6F;_T69=_TA9;}{struct Cyc_Int_pa_PrintArg_struct _TA9=_T69;void*_TAA[1];_TAA[0]=& _TA9;_T70=_check_null(Cyc_foutput);_T71=_tag_fat(" [%d]\n",sizeof(char),7U);_T72=_tag_fat(_TAA,sizeof(void*),1);Cyc_fprintf(_T70,_T71,_T72);}
# 550
i=i + 1;goto _TLD4;_TLD3: _T73=
# 559
_check_null(Cyc_foutput);_T74=_tag_fat("\n\n",sizeof(char),3U);_T75=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T73,_T74,_T75);_T76=
_check_null(Cyc_foutput);_T77=_tag_fat("Rules interpreted\n-----------------\n\n",sizeof(char),38U);_T78=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T76,_T77,_T78);
i=1;_TLDC: if(i <= Cyc_nrules)goto _TLDA;else{goto _TLDB;}
# 563
_TLDA:{struct Cyc_Int_pa_PrintArg_struct _TA9;_TA9.tag=1;_T7A=i;_TA9.f1=(unsigned long)_T7A;_T79=_TA9;}{struct Cyc_Int_pa_PrintArg_struct _TA9=_T79;{struct Cyc_String_pa_PrintArg_struct _TAA;_TAA.tag=0;_T7C=Cyc_tags;_T7D=Cyc_rlhs;_T7E=i;_T7F=_check_fat_subscript(_T7D,sizeof(short),_T7E);_T80=(short*)_T7F;_T81=*_T80;_T82=(int)_T81;_T83=_check_fat_subscript(_T7C,sizeof(struct _fat_ptr),_T82);_T84=(struct _fat_ptr*)_T83;_T85=*_T84;_TAA.f1=_T85;_T7B=_TAA;}{struct Cyc_String_pa_PrintArg_struct _TAA=_T7B;void*_TAB[2];_TAB[0]=& _TA9;_TAB[1]=& _TAA;_T86=_check_null(Cyc_foutput);_T87=_tag_fat("%-5d  %s :",sizeof(char),11U);_T88=_tag_fat(_TAB,sizeof(void*),2);Cyc_fprintf(_T86,_T87,_T88);}}_T89=Cyc_ritem;_T8A=Cyc_rrhs;_T8B=i;_T8C=_check_fat_subscript(_T8A,sizeof(short),_T8B);_T8D=(short*)_T8C;_T8E=*_T8D;_T8F=(int)_T8E;
# 565
r=_fat_ptr_plus(_T89,sizeof(short),_T8F);_TLE0: _T90=r;_T91=_check_fat_subscript(_T90,sizeof(short),0U);_T92=(short*)_T91;_T93=*_T92;_T94=(int)_T93;if(_T94 > 0)goto _TLDE;else{goto _TLDF;}
_TLDE:{struct Cyc_String_pa_PrintArg_struct _TA9;_TA9.tag=0;_T96=Cyc_tags;_T97=r;_T98=_T97.curr;_T99=(short*)_T98;_T9A=*_T99;_T9B=(int)_T9A;_T9C=_check_fat_subscript(_T96,sizeof(struct _fat_ptr),_T9B);_T9D=(struct _fat_ptr*)_T9C;_T9E=*_T9D;_TA9.f1=_T9E;_T95=_TA9;}{struct Cyc_String_pa_PrintArg_struct _TA9=_T95;void*_TAA[1];_TAA[0]=& _TA9;_T9F=_check_null(Cyc_foutput);_TA0=_tag_fat(" %s",sizeof(char),4U);_TA1=_tag_fat(_TAA,sizeof(void*),1);Cyc_fprintf(_T9F,_TA0,_TA1);}_TA2=& r;
# 565
_fat_ptr_inplace_plus(_TA2,sizeof(short),1);goto _TLE0;_TLDF: _TA3=
# 567
_check_null(Cyc_foutput);_TA4=_tag_fat("\n",sizeof(char),2U);_TA5=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TA3,_TA4,_TA5);
# 561
i=i + 1;goto _TLDC;_TLDB: _TA6=
# 569
_check_null(Cyc_foutput);_TA7=_tag_fat("\n\n",sizeof(char),3U);_TA8=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TA6,_TA7,_TA8);}
# 573
static void Cyc_print_notices (void){int _T0;int _T1;struct Cyc_Int_pa_PrintArg_struct _T2;int _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc_String_pa_PrintArg_struct _T7;struct Cyc___cycFILE*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;struct Cyc_Int_pa_PrintArg_struct _TB;int _TC;struct Cyc_String_pa_PrintArg_struct _TD;struct Cyc___cycFILE*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc_Int_pa_PrintArg_struct _T14;int _T15;struct Cyc_String_pa_PrintArg_struct _T16;struct Cyc___cycFILE*_T17;struct _fat_ptr _T18;struct _fat_ptr _T19;struct Cyc___cycFILE*_T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;_T0=Cyc_fixed_outfiles;
# 578
if(!_T0)goto _TLE1;_T1=Cyc_nuseless_productions;if(!_T1)goto _TLE1;{struct Cyc_Int_pa_PrintArg_struct _T1D;_T1D.tag=1;_T3=Cyc_nuseless_productions;
_T1D.f1=(unsigned long)_T3;_T2=_T1D;}{struct Cyc_Int_pa_PrintArg_struct _T1D=_T2;void*_T1E[1];_T1E[0]=& _T1D;_T4=Cyc_stderr;_T5=_tag_fat("%d rules never reduced\n",sizeof(char),24U);_T6=_tag_fat(_T1E,sizeof(void*),1);Cyc_fprintf(_T4,_T5,_T6);}goto _TLE2;_TLE1: _TLE2:{struct Cyc_String_pa_PrintArg_struct _T1D;_T1D.tag=0;
# 581
_T1D.f1=Cyc_infile;_T7=_T1D;}{struct Cyc_String_pa_PrintArg_struct _T1D=_T7;void*_T1E[1];_T1E[0]=& _T1D;_T8=Cyc_stderr;_T9=_tag_fat("%s contains ",sizeof(char),13U);_TA=_tag_fat(_T1E,sizeof(void*),1);Cyc_fprintf(_T8,_T9,_TA);}
# 583
if(Cyc_nuseless_nonterminals <= 0)goto _TLE3;{struct Cyc_Int_pa_PrintArg_struct _T1D;_T1D.tag=1;_TC=Cyc_nuseless_nonterminals;
# 586
_T1D.f1=(unsigned long)_TC;_TB=_T1D;}{struct Cyc_Int_pa_PrintArg_struct _T1D=_TB;{struct Cyc_String_pa_PrintArg_struct _T1E;_T1E.tag=0;
if(Cyc_nuseless_nonterminals!=1)goto _TLE5;_T1E.f1=_tag_fat("",sizeof(char),1U);goto _TLE6;_TLE5: _T1E.f1=_tag_fat("s",sizeof(char),2U);_TLE6: _TD=_T1E;}{struct Cyc_String_pa_PrintArg_struct _T1E=_TD;void*_T1F[2];_T1F[0]=& _T1D;_T1F[1]=& _T1E;_TE=Cyc_stderr;_TF=
# 585
_tag_fat("%d useless nonterminal%s",sizeof(char),25U);_T10=_tag_fat(_T1F,sizeof(void*),2);Cyc_fprintf(_TE,_TF,_T10);}}goto _TLE4;_TLE3: _TLE4:
# 589
 if(Cyc_nuseless_nonterminals <= 0)goto _TLE7;if(Cyc_nuseless_productions <= 0)goto _TLE7;_T11=Cyc_stderr;_T12=
_tag_fat(" and ",sizeof(char),6U);_T13=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T11,_T12,_T13);goto _TLE8;_TLE7: _TLE8:
# 592
 if(Cyc_nuseless_productions <= 0)goto _TLE9;{struct Cyc_Int_pa_PrintArg_struct _T1D;_T1D.tag=1;_T15=Cyc_nuseless_productions;
# 595
_T1D.f1=(unsigned long)_T15;_T14=_T1D;}{struct Cyc_Int_pa_PrintArg_struct _T1D=_T14;{struct Cyc_String_pa_PrintArg_struct _T1E;_T1E.tag=0;
if(Cyc_nuseless_productions!=1)goto _TLEB;_T1E.f1=_tag_fat("",sizeof(char),1U);goto _TLEC;_TLEB: _T1E.f1=_tag_fat("s",sizeof(char),2U);_TLEC: _T16=_T1E;}{struct Cyc_String_pa_PrintArg_struct _T1E=_T16;void*_T1F[2];_T1F[0]=& _T1D;_T1F[1]=& _T1E;_T17=Cyc_stderr;_T18=
# 594
_tag_fat("%d useless rule%s",sizeof(char),18U);_T19=_tag_fat(_T1F,sizeof(void*),2);Cyc_fprintf(_T17,_T18,_T19);}}goto _TLEA;_TLE9: _TLEA: _T1A=Cyc_stderr;_T1B=
# 598
_tag_fat("\n",sizeof(char),2U);_T1C=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1A,_T1B,_T1C);
Cyc_fflush(Cyc_stderr);}
