#include <cyc_include.h>

# 77 "gram.h"
 extern int Cyc_nrules;
extern int Cyc_nsyms;
extern int Cyc_ntokens;
extern int Cyc_nvars;
# 82
extern struct _fat_ptr Cyc_ritem;
# 84
extern struct _fat_ptr Cyc_rrhs;
# 92
extern int Cyc_start_symbol;
# 57 "closure.cyc"
extern struct _fat_ptr Cyc_derives;
# 60
void Cyc_set_fderives (void);
void Cyc_set_firsts (void);
# 63
extern void Cyc_RTC(struct _fat_ptr,int);
# 67
struct _fat_ptr Cyc_itemset;
struct _fat_ptr Cyc_itemsetend;
static struct _fat_ptr Cyc_ruleset;
# 72
static struct _fat_ptr Cyc_fderives;
static struct _fat_ptr Cyc_firsts;
# 76
static int Cyc_rulesetsize;
# 79
static int Cyc_varsetsize;
# 82
void Cyc_initialize_closure(int n){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;int _T5;int _T6;int _T7;struct _fat_ptr _T8;int _T9;unsigned*_TA;unsigned _TB;unsigned _TC;_T1=n;{unsigned _TD=(unsigned)_T1;_T3=_check_times(_TD,sizeof(short));{short*_TE=_cycalloc_atomic(_T3);{unsigned _TF=_TD;unsigned _new2_cyclone;_new2_cyclone=0;_TL3: if(_new2_cyclone < _TF)goto _TL1;else{goto _TL2;}_TL1: _T4=_new2_cyclone;
# 85
_TE[_T4]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL3;_TL2:;}_T2=(short*)_TE;}_T0=_tag_fat(_T2,sizeof(short),_TD);}Cyc_itemset=_T0;_T5=Cyc_nrules + 1;_T6=_T5 + 32;_T7=_T6 - 1;
# 87
Cyc_rulesetsize=_T7 / 32;_T9=Cyc_rulesetsize;{unsigned _TD=(unsigned)_T9;_TB=_check_times(_TD,sizeof(unsigned));{unsigned*_TE=_cycalloc_atomic(_TB);{unsigned _TF=_TD;unsigned _new2_cyclone;_new2_cyclone=0;_TL7: if(_new2_cyclone < _TF)goto _TL5;else{goto _TL6;}_TL5: _TC=_new2_cyclone;
_TE[_TC]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL7;_TL6:;}_TA=(unsigned*)_TE;}_T8=_tag_fat(_TA,sizeof(unsigned),_TD);}Cyc_ruleset=_T8;
# 90
Cyc_set_fderives();}
# 100 "closure.cyc"
void Cyc_set_fderives (void){struct _fat_ptr _T0;int _T1;unsigned*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;int _T7;struct _fat_ptr _T8;int _T9;struct _fat_ptr _TA;int _TB;int _TC;int _TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;unsigned char*_T10;unsigned*_T11;unsigned _T12;int _T13;unsigned _T14;unsigned _T15;int _T16;struct _fat_ptr _T17;int _T18;unsigned char*_T19;struct _fat_ptr*_T1A;struct _fat_ptr*_T1B;struct _fat_ptr _T1C;unsigned char*_T1D;short*_T1E;short _T1F;int _T20;struct _fat_ptr _T21;int _T22;unsigned char*_T23;unsigned*_T24;int _T25;int _T26;unsigned _T27;int _T28;int _T29;struct _fat_ptr*_T2A;struct _fat_ptr _T2B;unsigned char*_T2C;unsigned*_T2D;struct _fat_ptr*_T2E;int _T2F;
# 103
struct _fat_ptr rrow;
struct _fat_ptr vrow;
register int j;
register unsigned cword;
struct _fat_ptr rp;
register int b;
# 110
int ruleno;
int i;_T1=Cyc_nvars * Cyc_rulesetsize;{unsigned _T30=(unsigned)_T1;_T3=_check_times(_T30,sizeof(unsigned));{unsigned*_T31=_cycalloc_atomic(_T3);{unsigned _T32=_T30;unsigned _new2_cyclone;_new2_cyclone=0;_TLB: if(_new2_cyclone < _T32)goto _TL9;else{goto _TLA;}_TL9: _T4=_new2_cyclone;
# 113
_T31[_T4]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TLB;_TLA:;}_T2=(unsigned*)_T31;}_T0=_tag_fat(_T2,sizeof(unsigned),_T30);}_T5=_T0;_T6=Cyc_ntokens * Cyc_rulesetsize;_T7=- _T6;Cyc_fderives=_fat_ptr_plus(_T5,sizeof(unsigned),_T7);
# 115
Cyc_set_firsts();_T8=Cyc_fderives;_T9=Cyc_ntokens * Cyc_rulesetsize;
# 117
rrow=_fat_ptr_plus(_T8,sizeof(unsigned),_T9);
# 119
i=Cyc_ntokens;_TLF: if(i < Cyc_nsyms)goto _TLD;else{goto _TLE;}
# 121
_TLD: _TA=Cyc_firsts;_TB=i - Cyc_ntokens;_TC=Cyc_varsetsize;_TD=_TB * _TC;vrow=_fat_ptr_plus(_TA,sizeof(unsigned),_TD);_TE=& vrow;_TF=
_fat_ptr_inplace_plus_post(_TE,sizeof(unsigned),1);_T10=_check_fat_subscript(_TF,sizeof(unsigned),0U);_T11=(unsigned*)_T10;cword=*_T11;
b=0;
j=Cyc_ntokens;_TL13: if(j < Cyc_nsyms)goto _TL11;else{goto _TL12;}
# 126
_TL11: _T12=cword;_T13=1 << b;_T14=(unsigned)_T13;_T15=_T12 & _T14;_T16=(int)_T15;if(!_T16)goto _TL14;_T17=Cyc_derives;_T18=j;_T19=_check_fat_subscript(_T17,sizeof(struct _fat_ptr),_T18);_T1A=(struct _fat_ptr*)_T19;
# 128
rp=*_T1A;
_TL16: _T1B=& rp;_T1C=_fat_ptr_inplace_plus_post(_T1B,sizeof(short),1);_T1D=_check_fat_subscript(_T1C,sizeof(short),0U);_T1E=(short*)_T1D;_T1F=*_T1E;ruleno=(int)_T1F;_T20=ruleno;if(_T20 > 0)goto _TL17;else{goto _TL18;}
# 131
_TL17: _T21=rrow;_T22=ruleno / 32;_T23=_check_fat_subscript(_T21,sizeof(unsigned),_T22);_T24=(unsigned*)_T23;_T25=ruleno % 32;_T26=1 << _T25;_T27=(unsigned)_T26;*_T24=*_T24 | _T27;goto _TL16;_TL18: goto _TL15;_TL14: _TL15:
# 135
 b=b + 1;
if(b < 32)goto _TL19;_T28=j + 1;_T29=Cyc_nsyms;if(_T28 >= _T29)goto _TL19;_T2A=& vrow;_T2B=
# 138
_fat_ptr_inplace_plus_post(_T2A,sizeof(unsigned),1);_T2C=_check_fat_subscript(_T2B,sizeof(unsigned),0U);_T2D=(unsigned*)_T2C;cword=*_T2D;
b=0;goto _TL1A;_TL19: _TL1A:
# 124
 j=j + 1;goto _TL13;_TL12: _T2E=& rrow;_T2F=Cyc_rulesetsize;
# 143
_fat_ptr_inplace_plus(_T2E,sizeof(unsigned),_T2F);
# 119
i=i + 1;goto _TLF;_TLE:
# 150
 Cyc_firsts=_tag_fat(0,0,0);}
# 160 "closure.cyc"
void Cyc_set_firsts (void){int _T0;int _T1;struct _fat_ptr _T2;int _T3;unsigned*_T4;unsigned _T5;unsigned _T6;struct _fat_ptr _T7;int _T8;unsigned char*_T9;struct _fat_ptr*_TA;struct _fat_ptr _TB;unsigned char*_TC;short*_TD;short _TE;int _TF;struct _fat_ptr _T10;struct _fat_ptr _T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;unsigned char*_T14;short*_T15;short _T16;int _T17;unsigned char*_T18;short*_T19;short _T1A;int _T1B;unsigned char*_T1C;short*_T1D;short _T1E;int _T1F;struct _fat_ptr _T20;int _T21;unsigned char*_T22;unsigned*_T23;int _T24;int _T25;unsigned _T26;struct _fat_ptr*_T27;int _T28;
# 163
struct _fat_ptr row;
# 165
register int symbol;
struct _fat_ptr sp;
register int rowsize;
# 169
int i;_T0=Cyc_nvars + 32;_T1=_T0 - 1;
# 171
rowsize=_T1 / 32;Cyc_varsetsize=rowsize;_T3=Cyc_nvars * rowsize;{unsigned _T29=(unsigned)_T3;_T5=_check_times(_T29,sizeof(unsigned));{unsigned*_T2A=_cycalloc_atomic(_T5);{unsigned _T2B=_T29;unsigned _new2_cyclone;_new2_cyclone=0;_TL1E: if(_new2_cyclone < _T2B)goto _TL1C;else{goto _TL1D;}_TL1C: _T6=_new2_cyclone;
# 173
_T2A[_T6]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL1E;_TL1D:;}_T4=(unsigned*)_T2A;}_T2=_tag_fat(_T4,sizeof(unsigned),_T29);}Cyc_firsts=_T2;
# 175
row=Cyc_firsts;
i=Cyc_ntokens;_TL22: if(i < Cyc_nsyms)goto _TL20;else{goto _TL21;}
# 178
_TL20: _T7=Cyc_derives;_T8=i;_T9=_check_fat_subscript(_T7,sizeof(struct _fat_ptr),_T8);_TA=(struct _fat_ptr*)_T9;sp=*_TA;
_TL23: _TB=sp;_TC=_check_fat_subscript(_TB,sizeof(short),0U);_TD=(short*)_TC;_TE=*_TD;_TF=(int)_TE;if(_TF >= 0)goto _TL24;else{goto _TL25;}
# 181
_TL24: _T10=Cyc_ritem;_T11=Cyc_rrhs;_T12=& sp;_T13=_fat_ptr_inplace_plus_post(_T12,sizeof(short),1);_T14=_T13.curr;_T15=(short*)_T14;_T16=*_T15;_T17=(int)_T16;_T18=_check_fat_subscript(_T11,sizeof(short),_T17);_T19=(short*)_T18;_T1A=*_T19;_T1B=(int)_T1A;_T1C=_check_fat_subscript(_T10,sizeof(short),_T1B);_T1D=(short*)_T1C;_T1E=*_T1D;symbol=(int)_T1E;
if(symbol < Cyc_ntokens)goto _TL26;_T1F=Cyc_ntokens;
# 184
symbol=symbol - _T1F;_T20=row;_T21=symbol / 32;_T22=_check_fat_subscript(_T20,sizeof(unsigned),_T21);_T23=(unsigned*)_T22;_T24=symbol % 32;_T25=1 << _T24;_T26=(unsigned)_T25;
*_T23=*_T23 | _T26;goto _TL27;_TL26: _TL27: goto _TL23;_TL25: _T27=& row;_T28=rowsize;
# 189
_fat_ptr_inplace_plus(_T27,sizeof(unsigned),_T28);
# 176
i=i + 1;goto _TL22;_TL21:
# 192
 Cyc_RTC(Cyc_firsts,Cyc_nvars);}
# 200
void Cyc_closure(struct _fat_ptr corex,int n){struct _fat_ptr _T0;int _T1;struct _fat_ptr _T2;int _T3;struct _fat_ptr _T4;int _T5;struct _fat_ptr _T6;unsigned char*_T7;unsigned*_T8;struct _fat_ptr _T9;unsigned char*_TA;unsigned*_TB;struct _fat_ptr*_TC;struct _fat_ptr _TD;unsigned char*_TE;unsigned*_TF;struct _fat_ptr*_T10;struct _fat_ptr _T11;unsigned char*_T12;unsigned*_T13;struct _fat_ptr _T14;unsigned char*_T15;unsigned*_T16;struct _fat_ptr _T17;unsigned char*_T18;unsigned*_T19;struct _fat_ptr*_T1A;struct _fat_ptr _T1B;unsigned char*_T1C;unsigned*_T1D;struct _fat_ptr _T1E;unsigned char*_T1F;short*_T20;struct _fat_ptr _T21;unsigned char*_T22;short*_T23;struct _fat_ptr _T24;struct _fat_ptr*_T25;struct _fat_ptr _T26;unsigned char*_T27;short*_T28;short _T29;int _T2A;unsigned char*_T2B;short*_T2C;short _T2D;struct _fat_ptr _T2E;int _T2F;struct _fat_ptr _T30;unsigned char*_T31;unsigned*_T32;struct _fat_ptr _T33;unsigned char*_T34;unsigned*_T35;struct _fat_ptr*_T36;struct _fat_ptr _T37;unsigned char*_T38;unsigned*_T39;struct _fat_ptr*_T3A;struct _fat_ptr _T3B;unsigned char*_T3C;unsigned*_T3D;unsigned _T3E;struct _fat_ptr _T3F;unsigned char*_T40;unsigned*_T41;struct _fat_ptr _T42;unsigned char*_T43;unsigned*_T44;struct _fat_ptr*_T45;struct _fat_ptr _T46;unsigned char*_T47;unsigned*_T48;unsigned _T49;int _T4A;unsigned _T4B;unsigned _T4C;int _T4D;struct _fat_ptr _T4E;int _T4F;unsigned char*_T50;short*_T51;short _T52;struct _fat_ptr _T53;unsigned char*_T54;short*_T55;struct _fat_ptr _T56;unsigned char*_T57;short*_T58;struct _fat_ptr _T59;unsigned char*_T5A;short*_T5B;short _T5C;int _T5D;int _T5E;struct _fat_ptr*_T5F;struct _fat_ptr _T60;unsigned char*_T61;short*_T62;struct _fat_ptr*_T63;struct _fat_ptr _T64;unsigned char*_T65;short*_T66;struct _fat_ptr*_T67;struct _fat_ptr _T68;unsigned char*_T69;short*_T6A;int _T6B;struct _fat_ptr _T6C;unsigned char*_T6D;short*_T6E;struct _fat_ptr _T6F;unsigned char*_T70;short*_T71;struct _fat_ptr*_T72;struct _fat_ptr _T73;unsigned char*_T74;short*_T75;struct _fat_ptr*_T76;struct _fat_ptr _T77;unsigned char*_T78;short*_T79;
# 203
register int ruleno;
register unsigned word;
struct _fat_ptr csp;
struct _fat_ptr dsp;
struct _fat_ptr rsp;
# 209
struct _fat_ptr csend;
struct _fat_ptr rsend;
int symbol;
int itemno;
# 214
rsp=Cyc_ruleset;_T0=Cyc_ruleset;_T1=Cyc_rulesetsize;
rsend=_fat_ptr_plus(_T0,sizeof(unsigned),_T1);_T2=corex;_T3=n;
csend=_fat_ptr_plus(_T2,sizeof(short),_T3);
# 218
if(n!=0)goto _TL28;_T4=Cyc_fderives;_T5=Cyc_start_symbol * Cyc_rulesetsize;
# 220
dsp=_fat_ptr_plus(_T4,sizeof(unsigned),_T5);
_TL2A: _T6=rsp;_T7=_T6.curr;_T8=(unsigned*)_T7;_T9=rsend;_TA=_T9.curr;_TB=(unsigned*)_TA;if(_T8 < _TB)goto _TL2B;else{goto _TL2C;}
_TL2B: _TC=& rsp;_TD=_fat_ptr_inplace_plus_post(_TC,sizeof(unsigned),1);_TE=_check_fat_subscript(_TD,sizeof(unsigned),0U);_TF=(unsigned*)_TE;_T10=& dsp;_T11=_fat_ptr_inplace_plus_post(_T10,sizeof(unsigned),1);_T12=_check_fat_subscript(_T11,sizeof(unsigned),0U);_T13=(unsigned*)_T12;*_TF=*_T13;goto _TL2A;_TL2C: goto _TL29;
# 226
_TL28: _TL2D: _T14=rsp;_T15=_T14.curr;_T16=(unsigned*)_T15;_T17=rsend;_T18=_T17.curr;_T19=(unsigned*)_T18;if(_T16 < _T19)goto _TL2E;else{goto _TL2F;}
_TL2E: _T1A=& rsp;_T1B=_fat_ptr_inplace_plus_post(_T1A,sizeof(unsigned),1);_T1C=_check_fat_subscript(_T1B,sizeof(unsigned),0U);_T1D=(unsigned*)_T1C;*_T1D=0U;goto _TL2D;_TL2F:
# 229
 csp=corex;
_TL30: _T1E=csp;_T1F=_T1E.curr;_T20=(short*)_T1F;_T21=csend;_T22=_T21.curr;_T23=(short*)_T22;if(_T20 < _T23)goto _TL31;else{goto _TL32;}
# 232
_TL31: _T24=Cyc_ritem;_T25=& csp;_T26=_fat_ptr_inplace_plus_post(_T25,sizeof(short),1);_T27=_check_fat_subscript(_T26,sizeof(short),0U);_T28=(short*)_T27;_T29=*_T28;_T2A=(int)_T29;_T2B=_check_fat_subscript(_T24,sizeof(short),_T2A);_T2C=(short*)_T2B;_T2D=*_T2C;symbol=(int)_T2D;
if(symbol < Cyc_ntokens)goto _TL33;_T2E=Cyc_fderives;_T2F=symbol * Cyc_rulesetsize;
# 235
dsp=_fat_ptr_plus(_T2E,sizeof(unsigned),_T2F);
rsp=Cyc_ruleset;
_TL35: _T30=rsp;_T31=_T30.curr;_T32=(unsigned*)_T31;_T33=rsend;_T34=_T33.curr;_T35=(unsigned*)_T34;if(_T32 < _T35)goto _TL36;else{goto _TL37;}
_TL36: _T36=& rsp;_T37=_fat_ptr_inplace_plus_post(_T36,sizeof(unsigned),1);_T38=_check_fat_subscript(_T37,sizeof(unsigned),0U);_T39=(unsigned*)_T38;_T3A=& dsp;_T3B=_fat_ptr_inplace_plus_post(_T3A,sizeof(unsigned),1);_T3C=_check_fat_subscript(_T3B,sizeof(unsigned),0U);_T3D=(unsigned*)_T3C;_T3E=*_T3D;*_T39=*_T39 | _T3E;goto _TL35;_TL37: goto _TL34;_TL33: _TL34: goto _TL30;_TL32: _TL29:
# 243
 ruleno=0;
Cyc_itemsetend=Cyc_itemset;
csp=corex;
rsp=Cyc_ruleset;
_TL38: _T3F=rsp;_T40=_T3F.curr;_T41=(unsigned*)_T40;_T42=rsend;_T43=_T42.curr;_T44=(unsigned*)_T43;if(_T41 < _T44)goto _TL39;else{goto _TL3A;}
# 249
_TL39: _T45=& rsp;_T46=_fat_ptr_inplace_plus_post(_T45,sizeof(unsigned),1);_T47=_check_fat_subscript(_T46,sizeof(unsigned),0U);_T48=(unsigned*)_T47;word=*_T48;
if(word!=0U)goto _TL3B;
# 252
ruleno=ruleno + 32;goto _TL3C;
# 256
_TL3B:{register int b;
# 258
b=0;_TL40: if(b < 32)goto _TL3E;else{goto _TL3F;}
# 260
_TL3E: _T49=word;_T4A=1 << b;_T4B=(unsigned)_T4A;_T4C=_T49 & _T4B;_T4D=(int)_T4C;if(!_T4D)goto _TL41;_T4E=Cyc_rrhs;_T4F=ruleno;_T50=_check_fat_subscript(_T4E,sizeof(short),_T4F);_T51=(short*)_T50;_T52=*_T51;
# 262
itemno=(int)_T52;
_TL43: _T53=csp;_T54=_T53.curr;_T55=(short*)_T54;_T56=csend;_T57=_T56.curr;_T58=(short*)_T57;if(_T55 < _T58)goto _TL46;else{goto _TL45;}_TL46: _T59=csp;_T5A=_check_fat_subscript(_T59,sizeof(short),0U);_T5B=(short*)_T5A;_T5C=*_T5B;_T5D=(int)_T5C;_T5E=itemno;if(_T5D < _T5E)goto _TL44;else{goto _TL45;}
_TL44: _T5F=& Cyc_itemsetend;_T60=_fat_ptr_inplace_plus_post(_T5F,sizeof(short),1);_T61=_check_fat_subscript(_T60,sizeof(short),0U);_T62=(short*)_T61;_T63=& csp;_T64=_fat_ptr_inplace_plus_post(_T63,sizeof(short),1);_T65=_T64.curr;_T66=(short*)_T65;*_T62=*_T66;goto _TL43;_TL45: _T67=& Cyc_itemsetend;_T68=
_fat_ptr_inplace_plus_post(_T67,sizeof(short),1);_T69=_check_fat_subscript(_T68,sizeof(short),0U);_T6A=(short*)_T69;_T6B=itemno;*_T6A=(short)_T6B;goto _TL42;_TL41: _TL42:
# 268
 ruleno=ruleno + 1;
# 258
b=b + 1;goto _TL40;_TL3F:;}_TL3C: goto _TL38;_TL3A:
# 273
 _TL47: _T6C=csp;_T6D=_T6C.curr;_T6E=(short*)_T6D;_T6F=csend;_T70=_T6F.curr;_T71=(short*)_T70;if(_T6E < _T71)goto _TL48;else{goto _TL49;}
_TL48: _T72=& Cyc_itemsetend;_T73=_fat_ptr_inplace_plus_post(_T72,sizeof(short),1);_T74=_check_fat_subscript(_T73,sizeof(short),0U);_T75=(short*)_T74;_T76=& csp;_T77=_fat_ptr_inplace_plus_post(_T76,sizeof(short),1);_T78=_check_fat_subscript(_T77,sizeof(short),0U);_T79=(short*)_T78;*_T75=*_T79;goto _TL47;_TL49:;}
# 282
void Cyc_finalize_closure (void){struct _fat_ptr _T0;int _T1;
# 285
Cyc_itemset=_tag_fat(0,0,0);
Cyc_ruleset=_tag_fat(0,0,0);_T0=Cyc_fderives;_T1=Cyc_ntokens * Cyc_rulesetsize;
# 289
Cyc_fderives=_fat_ptr_plus(_T0,sizeof(unsigned),_T1);
Cyc_fderives=_tag_fat(0,0,0);}
