#include <cyc_include.h>
struct Cyc___cycFILE;
# 102 "../../library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 163
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 249
extern int Cyc_putc(int,struct Cyc___cycFILE*);struct Cyc___cycFILE;
# 53 "../../library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 100 "../../library/std/cycboot.h"
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 161 "../../library/std/cycboot.h"
extern int Cyc_putc(int,struct Cyc___cycFILE*);
# 28 "files.h"
extern struct Cyc___cycFILE*Cyc_foutput;
# 45
extern struct _fat_ptr Cyc_infile;
# 79 "gram.h"
extern int Cyc_ntokens;
# 83
extern struct _fat_ptr Cyc_rlhs;
# 85
extern struct _fat_ptr Cyc_rprec;
# 87
extern struct _fat_ptr Cyc_sprec;
# 89
extern struct _fat_ptr Cyc_sassoc;
# 125 "gram.h"
extern int Cyc_error_token_number;struct Cyc_shifts_tag{struct Cyc_shifts_tag*next;short number;short nshifts;struct _fat_ptr shifts;};struct Cyc_errs_tag{short nerrs;struct _fat_ptr errs;};
# 135 "state.h"
extern int Cyc_nstates;
# 28 "conflicts.cyc"
extern struct _fat_ptr Cyc_tags;
extern int Cyc_tokensetsize;
extern struct _fat_ptr Cyc_consistent;
extern struct _fat_ptr Cyc_accessing_symbol;
extern struct _fat_ptr Cyc_shift_table;
extern struct _fat_ptr Cyc_LA;
extern struct _fat_ptr Cyc_LAruleno;
extern struct _fat_ptr Cyc_lookaheads;
extern int Cyc_verboseflag;
extern int Cyc_fixed_outfiles;
# 39
void Cyc_set_conflicts(int);
void Cyc_resolve_sr_conflict(int,int);
void Cyc_flush_shift(int,int);
void Cyc_log_resolution(int,int,int,struct _fat_ptr);
void Cyc_total_conflicts (void);
void Cyc_count_sr_conflicts(int);
void Cyc_count_rr_conflicts(int);
# 47
char Cyc_any_conflicts;
struct _fat_ptr Cyc_conflicts;
struct _fat_ptr Cyc_err_table;
int Cyc_expected_conflicts;
# 53
static struct _fat_ptr Cyc_shiftset;
static struct _fat_ptr Cyc_lookaheadset;
static int Cyc_src_total;
static int Cyc_rrc_total;
static int Cyc_src_count;
static int Cyc_rrc_count;
# 61
void Cyc_initialize_conflicts (void){struct _fat_ptr _T0;int _T1;unsigned _T2;char*_T3;unsigned _T4;unsigned _T5;struct _fat_ptr _T6;int _T7;unsigned*_T8;unsigned _T9;unsigned _TA;struct _fat_ptr _TB;int _TC;unsigned*_TD;unsigned _TE;unsigned _TF;struct _fat_ptr _T10;int _T11;struct Cyc_errs_tag**_T12;unsigned _T13;unsigned _T14;
# 63
register int i;_T1=Cyc_nstates;_T2=(unsigned)_T1;{unsigned _T15=_T2 + 1U;_T4=_check_times(_T15,sizeof(char));{char*_T16=_cycalloc_atomic(_T4);{unsigned _T17=_T15;unsigned _new2_cyclone;_new2_cyclone=0;_TL3: if(_new2_cyclone < _T17)goto _TL1;else{goto _TL2;}_TL1: _T5=_new2_cyclone;
# 66
_T16[_T5]='\000';_new2_cyclone=_new2_cyclone + 1;goto _TL3;_TL2: _T16[_T17]=0;}_T3=(char*)_T16;}_T0=_tag_fat(_T3,sizeof(char),_T15);}Cyc_conflicts=_T0;_T7=Cyc_tokensetsize;{unsigned _T15=(unsigned)_T7;_T9=_check_times(_T15,sizeof(unsigned));{unsigned*_T16=_cycalloc_atomic(_T9);{unsigned _T17=_T15;unsigned _new2_cyclone;_new2_cyclone=0;_TL7: if(_new2_cyclone < _T17)goto _TL5;else{goto _TL6;}_TL5: _TA=_new2_cyclone;
_T16[_TA]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL7;_TL6:;}_T8=(unsigned*)_T16;}_T6=_tag_fat(_T8,sizeof(unsigned),_T15);}Cyc_shiftset=_T6;_TC=Cyc_tokensetsize;{unsigned _T15=(unsigned)_TC;_TE=_check_times(_T15,sizeof(unsigned));{unsigned*_T16=_cycalloc_atomic(_TE);{unsigned _T17=_T15;unsigned _new2_cyclone;_new2_cyclone=0;_TLB: if(_new2_cyclone < _T17)goto _TL9;else{goto _TLA;}_TL9: _TF=_new2_cyclone;
_T16[_TF]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TLB;_TLA:;}_TD=(unsigned*)_T16;}_TB=_tag_fat(_TD,sizeof(unsigned),_T15);}Cyc_lookaheadset=_TB;_T11=Cyc_nstates;{unsigned _T15=(unsigned)_T11;_T13=_check_times(_T15,sizeof(struct Cyc_errs_tag*));{struct Cyc_errs_tag**_T16=_cycalloc(_T13);{unsigned _T17=_T15;unsigned _new2p_cyclone;_new2p_cyclone=0;_TLF: if(_new2p_cyclone < _T17)goto _TLD;else{goto _TLE;}_TLD: _T14=_new2p_cyclone;
# 70
_T16[_T14]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TLF;_TLE:;}_T12=(struct Cyc_errs_tag**)_T16;}_T10=_tag_fat(_T12,sizeof(struct Cyc_errs_tag*),_T15);}Cyc_err_table=_T10;
# 72
Cyc_any_conflicts='\000';
# 74
i=0;_TL13: if(i < Cyc_nstates)goto _TL11;else{goto _TL12;}
_TL11: Cyc_set_conflicts(i);
# 74
i=i + 1;goto _TL13;_TL12:;}
# 79
void Cyc_set_conflicts(int state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;char*_T3;char _T4;int _T5;struct _fat_ptr _T6;int _T7;unsigned char*_T8;unsigned*_T9;struct _fat_ptr _TA;int _TB;unsigned char*_TC;struct Cyc_shifts_tag**_TD;struct Cyc_shifts_tag*_TE;unsigned _TF;struct Cyc_shifts_tag*_T10;short _T11;struct _fat_ptr _T12;struct Cyc_shifts_tag*_T13;struct _fat_ptr _T14;int _T15;unsigned char*_T16;short*_T17;short _T18;int _T19;unsigned char*_T1A;short*_T1B;short _T1C;struct _fat_ptr _T1D;int _T1E;unsigned char*_T1F;unsigned*_T20;int _T21;int _T22;unsigned _T23;struct _fat_ptr _T24;int _T25;unsigned char*_T26;short*_T27;short _T28;struct _fat_ptr _T29;int _T2A;struct _fat_ptr _T2B;unsigned char*_T2C;short*_T2D;int _T2E;short _T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;int _T32;unsigned char*_T33;short*_T34;short _T35;int _T36;unsigned char*_T37;short*_T38;short _T39;int _T3A;struct _fat_ptr _T3B;int _T3C;struct _fat_ptr _T3D;unsigned char*_T3E;unsigned*_T3F;struct _fat_ptr _T40;unsigned char*_T41;unsigned*_T42;struct _fat_ptr*_T43;struct _fat_ptr _T44;unsigned char*_T45;unsigned*_T46;unsigned _T47;struct _fat_ptr*_T48;struct _fat_ptr _T49;unsigned char*_T4A;unsigned*_T4B;unsigned _T4C;unsigned _T4D;int _T4E;struct _fat_ptr _T4F;int _T50;unsigned char*_T51;short*_T52;short _T53;struct _fat_ptr _T54;int _T55;struct _fat_ptr _T56;unsigned char*_T57;unsigned*_T58;struct _fat_ptr _T59;unsigned char*_T5A;unsigned*_T5B;struct _fat_ptr*_T5C;struct _fat_ptr _T5D;unsigned char*_T5E;unsigned*_T5F;unsigned _T60;struct _fat_ptr*_T61;struct _fat_ptr _T62;unsigned char*_T63;unsigned*_T64;unsigned _T65;unsigned _T66;int _T67;struct _fat_ptr _T68;int _T69;unsigned char*_T6A;char*_T6B;unsigned _T6C;unsigned char*_T6D;char*_T6E;struct _fat_ptr _T6F;unsigned char*_T70;unsigned*_T71;struct _fat_ptr _T72;unsigned char*_T73;unsigned*_T74;struct _fat_ptr*_T75;struct _fat_ptr _T76;unsigned char*_T77;unsigned*_T78;struct _fat_ptr*_T79;struct _fat_ptr _T7A;unsigned char*_T7B;unsigned*_T7C;unsigned _T7D;
# 81
register int i;
register int k;
register struct Cyc_shifts_tag*shiftp;
struct _fat_ptr fp2;
struct _fat_ptr fp3;
struct _fat_ptr fp4;
struct _fat_ptr fp1;
register int symbol;_T0=Cyc_consistent;_T1=state;_T2=_check_fat_subscript(_T0,sizeof(char),_T1);_T3=(char*)_T2;_T4=*_T3;_T5=(int)_T4;
# 90
if(!_T5)goto _TL14;return;_TL14:
# 92
 i=0;_TL19: if(i < Cyc_tokensetsize)goto _TL17;else{goto _TL18;}
_TL17: _T6=Cyc_lookaheadset;_T7=i;_T8=_check_fat_subscript(_T6,sizeof(unsigned),_T7);_T9=(unsigned*)_T8;*_T9=0U;
# 92
i=i + 1;goto _TL19;_TL18: _TA=Cyc_shift_table;_TB=state;_TC=_check_fat_subscript(_TA,sizeof(struct Cyc_shifts_tag*),_TB);_TD=(struct Cyc_shifts_tag**)_TC;
# 95
shiftp=*_TD;_TE=shiftp;_TF=(unsigned)_TE;
if(!_TF)goto _TL1A;_T10=shiftp;_T11=_T10->nshifts;
# 98
k=(int)_T11;
i=0;_TL1F: if(i < k)goto _TL1D;else{goto _TL1E;}
# 101
_TL1D: _T12=Cyc_accessing_symbol;_T13=shiftp;_T14=_T13->shifts;_T15=i;_T16=_check_fat_subscript(_T14,sizeof(short),_T15);_T17=(short*)_T16;_T18=*_T17;_T19=(int)_T18;_T1A=_check_fat_subscript(_T12,sizeof(short),_T19);_T1B=(short*)_T1A;_T1C=*_T1B;symbol=(int)_T1C;
if(symbol < Cyc_ntokens)goto _TL20;goto _TL1E;_TL20: _T1D=Cyc_lookaheadset;_T1E=symbol / 32;_T1F=_check_fat_subscript(_T1D,sizeof(unsigned),_T1E);_T20=(unsigned*)_T1F;_T21=symbol % 32;_T22=1 << _T21;_T23=(unsigned)_T22;
*_T20=*_T20 | _T23;
# 99
i=i + 1;goto _TL1F;_TL1E: goto _TL1B;_TL1A: _TL1B: _T24=Cyc_lookaheads;_T25=state + 1;_T26=_check_fat_subscript(_T24,sizeof(short),_T25);_T27=(short*)_T26;_T28=*_T27;
# 107
k=(int)_T28;_T29=Cyc_lookaheadset;_T2A=Cyc_tokensetsize;
fp4=_fat_ptr_plus(_T29,sizeof(unsigned),_T2A);_T2B=Cyc_lookaheads;_T2C=_T2B.curr;_T2D=(short*)_T2C;_T2E=state;_T2F=_T2D[_T2E];
# 113
i=(int)_T2F;_TL25: if(i < k)goto _TL23;else{goto _TL24;}
_TL23: _T30=Cyc_rprec;_T31=Cyc_LAruleno;_T32=i;_T33=_check_fat_subscript(_T31,sizeof(short),_T32);_T34=(short*)_T33;_T35=*_T34;_T36=(int)_T35;_T37=_check_fat_subscript(_T30,sizeof(short),_T36);_T38=(short*)_T37;_T39=*_T38;_T3A=(int)_T39;if(!_T3A)goto _TL26;_T3B=Cyc_LA;_T3C=i * Cyc_tokensetsize;
# 116
fp1=_fat_ptr_plus(_T3B,sizeof(unsigned),_T3C);
fp2=fp1;
fp3=Cyc_lookaheadset;
# 120
_TL28: _T3D=fp3;_T3E=_T3D.curr;_T3F=(unsigned*)_T3E;_T40=fp4;_T41=_T40.curr;_T42=(unsigned*)_T41;if(_T3F < _T42)goto _TL29;else{goto _TL2A;}
# 122
_TL29: _T43=& fp2;_T44=_fat_ptr_inplace_plus_post(_T43,sizeof(unsigned),1);_T45=_check_fat_subscript(_T44,sizeof(unsigned),0U);_T46=(unsigned*)_T45;_T47=*_T46;_T48=& fp3;_T49=_fat_ptr_inplace_plus_post(_T48,sizeof(unsigned),1);_T4A=_check_fat_subscript(_T49,sizeof(unsigned),0U);_T4B=(unsigned*)_T4A;_T4C=*_T4B;_T4D=_T47 & _T4C;_T4E=(int)_T4D;if(!_T4E)goto _TL2B;
# 124
Cyc_resolve_sr_conflict(state,i);goto _TL2A;_TL2B: goto _TL28;_TL2A: goto _TL27;_TL26: _TL27:
# 113
 i=i + 1;goto _TL25;_TL24: _T4F=Cyc_lookaheads;_T50=state;_T51=_check_fat_subscript(_T4F,sizeof(short),_T50);_T52=(short*)_T51;_T53=*_T52;
# 133
i=(int)_T53;_TL30: if(i < k)goto _TL2E;else{goto _TL2F;}
# 135
_TL2E: _T54=Cyc_LA;_T55=i * Cyc_tokensetsize;fp1=_fat_ptr_plus(_T54,sizeof(unsigned),_T55);
fp2=fp1;
fp3=Cyc_lookaheadset;
# 139
_TL31: _T56=fp3;_T57=_T56.curr;_T58=(unsigned*)_T57;_T59=fp4;_T5A=_T59.curr;_T5B=(unsigned*)_T5A;if(_T58 < _T5B)goto _TL32;else{goto _TL33;}
# 141
_TL32: _T5C=& fp2;_T5D=_fat_ptr_inplace_plus_post(_T5C,sizeof(unsigned),1);_T5E=_check_fat_subscript(_T5D,sizeof(unsigned),0U);_T5F=(unsigned*)_T5E;_T60=*_T5F;_T61=& fp3;_T62=_fat_ptr_inplace_plus_post(_T61,sizeof(unsigned),1);_T63=_check_fat_subscript(_T62,sizeof(unsigned),0U);_T64=(unsigned*)_T63;_T65=*_T64;_T66=_T60 & _T65;_T67=(int)_T66;if(!_T67)goto _TL34;_T68=Cyc_conflicts;_T69=state;{struct _fat_ptr _T7E=_fat_ptr_plus(_T68,sizeof(char),_T69);_T6A=_check_fat_subscript(_T7E,sizeof(char),0U);_T6B=(char*)_T6A;{char _T7F=*_T6B;char _T80='\001';_T6C=_get_fat_size(_T7E,sizeof(char));if(_T6C!=1U)goto _TL36;if(_T7F!=0)goto _TL36;if(_T80==0)goto _TL36;_throw_arraybounds();goto _TL37;_TL36: _TL37: _T6D=_T7E.curr;_T6E=(char*)_T6D;*_T6E=_T80;}}
# 144
Cyc_any_conflicts='\001';goto _TL35;_TL34: _TL35: goto _TL31;_TL33:
# 148
 fp2=fp1;
fp3=Cyc_lookaheadset;
# 151
_TL38: _T6F=fp3;_T70=_T6F.curr;_T71=(unsigned*)_T70;_T72=fp4;_T73=_T72.curr;_T74=(unsigned*)_T73;if(_T71 < _T74)goto _TL39;else{goto _TL3A;}
_TL39: _T75=& fp3;_T76=_fat_ptr_inplace_plus_post(_T75,sizeof(unsigned),1);_T77=_check_fat_subscript(_T76,sizeof(unsigned),0U);_T78=(unsigned*)_T77;_T79=& fp2;_T7A=_fat_ptr_inplace_plus_post(_T79,sizeof(unsigned),1);_T7B=_check_fat_subscript(_T7A,sizeof(unsigned),0U);_T7C=(unsigned*)_T7B;_T7D=*_T7C;*_T78=*_T78 | _T7D;goto _TL38;_TL3A:
# 133
 i=i + 1;goto _TL30;_TL2F:;}
# 164 "conflicts.cyc"
void Cyc_resolve_sr_conflict(int state,int lookaheadnum){struct Cyc_errs_tag*_T0;struct Cyc_errs_tag*_T1;struct Cyc_errs_tag*_T2;struct _fat_ptr _T3;int _T4;short*_T5;unsigned _T6;unsigned _T7;struct Cyc_errs_tag*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;int _TB;unsigned char*_TC;short*_TD;short _TE;int _TF;unsigned char*_T10;short*_T11;short _T12;struct _fat_ptr _T13;int _T14;int _T15;unsigned _T16;struct _fat_ptr _T17;unsigned char*_T18;unsigned*_T19;unsigned _T1A;unsigned _T1B;struct _fat_ptr _T1C;unsigned char*_T1D;unsigned*_T1E;unsigned _T1F;unsigned _T20;int _T21;struct _fat_ptr _T22;int _T23;unsigned char*_T24;short*_T25;short _T26;int _T27;struct _fat_ptr _T28;unsigned char*_T29;short*_T2A;int _T2B;short _T2C;int _T2D;int _T2E;int _T2F;int _T30;int _T31;int _T32;struct _fat_ptr _T33;struct _fat_ptr _T34;unsigned char*_T35;unsigned*_T36;int _T37;unsigned _T38;struct _fat_ptr _T39;unsigned char*_T3A;short*_T3B;int _T3C;short _T3D;int _T3E;int _T3F;int _T40;int _T41;int _T42;int _T43;struct _fat_ptr _T44;struct _fat_ptr _T45;unsigned char*_T46;unsigned*_T47;int _T48;unsigned _T49;struct _fat_ptr _T4A;int _T4B;unsigned char*_T4C;short*_T4D;int _T4E;int _T4F;int _T50;int _T51;int _T52;struct _fat_ptr _T53;int _T54;int _T55;int _T56;int _T57;struct _fat_ptr _T58;int _T59;int _T5A;int _T5B;int _T5C;struct _fat_ptr _T5D;struct _fat_ptr _T5E;int _T5F;unsigned char*_T60;short*_T61;short _T62;int _T63;struct _fat_ptr _T64;unsigned char*_T65;unsigned*_T66;int _T67;unsigned _T68;struct _fat_ptr _T69;int _T6A;unsigned char*_T6B;short*_T6C;short _T6D;int _T6E;struct _fat_ptr _T6F;unsigned char*_T70;unsigned*_T71;int _T72;unsigned _T73;struct _fat_ptr _T74;unsigned char*_T75;short*_T76;int _T77;short _T78;int _T79;struct _fat_ptr*_T7A;struct _fat_ptr _T7B;unsigned char*_T7C;short*_T7D;int _T7E;struct _fat_ptr*_T7F;struct _fat_ptr*_T80;struct Cyc_errs_tag*_T81;struct _fat_ptr _T82;unsigned char*_T83;struct Cyc_errs_tag*_T84;struct _fat_ptr _T85;unsigned char*_T86;int _T87;int _T88;struct Cyc_errs_tag*_T89;short _T8A;int _T8B;struct _fat_ptr _T8C;struct Cyc_errs_tag*_T8D;short _T8E;short*_T8F;unsigned _T90;unsigned _T91;struct _fat_ptr _T92;unsigned _T93;int _T94;unsigned char*_T95;short*_T96;struct Cyc_errs_tag*_T97;struct _fat_ptr _T98;unsigned _T99;int _T9A;unsigned char*_T9B;short*_T9C;struct _fat_ptr _T9D;int _T9E;unsigned char*_T9F;struct Cyc_errs_tag**_TA0;struct Cyc_errs_tag*_TA1;struct Cyc_errs_tag*_TA2;struct _fat_ptr _TA3;int _TA4;unsigned char*_TA5;struct Cyc_errs_tag**_TA6;
# 166
register int i;
register int mask;
struct _fat_ptr fp1;
struct _fat_ptr fp2;
register int redprec;
# 172
struct Cyc_errs_tag*errp;errp=_cycalloc(sizeof(struct Cyc_errs_tag));_T0=errp;_T0->nerrs=0;_T1=errp;_T1->errs=_tag_fat(0,0,0);_T2=errp;_T4=Cyc_ntokens + 1;{unsigned _TA7=(unsigned)_T4;_T6=_check_times(_TA7,sizeof(short));{short*_TA8=_cycalloc_atomic(_T6);{unsigned _TA9=_TA7;unsigned _new2_cyclone;_new2_cyclone=0;_TL3E: if(_new2_cyclone < _TA9)goto _TL3C;else{goto _TL3D;}_TL3C: _T7=_new2_cyclone;
_TA8[_T7]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL3E;_TL3D:;}_T5=(short*)_TA8;}_T3=_tag_fat(_T5,sizeof(short),_TA7);}_T2->errs=_T3;_T8=errp;{
struct _fat_ptr errtokens=_T8->errs;_T9=Cyc_rprec;_TA=Cyc_LAruleno;_TB=lookaheadnum;_TC=_check_fat_subscript(_TA,sizeof(short),_TB);_TD=(short*)_TC;_TE=*_TD;_TF=(int)_TE;_T10=_check_fat_subscript(_T9,sizeof(short),_TF);_T11=(short*)_T10;_T12=*_T11;
# 177
redprec=(int)_T12;
# 179
mask=1;_T13=Cyc_LA;_T14=lookaheadnum * Cyc_tokensetsize;
fp1=_fat_ptr_plus(_T13,sizeof(unsigned),_T14);
fp2=Cyc_lookaheadset;
i=0;_TL42: if(i < Cyc_ntokens)goto _TL40;else{goto _TL41;}
# 184
_TL40: _T15=mask;_T16=(unsigned)_T15;_T17=fp2;_T18=_check_fat_subscript(_T17,sizeof(unsigned),0U);_T19=(unsigned*)_T18;_T1A=*_T19;_T1B=_T16 & _T1A;_T1C=fp1;_T1D=_check_fat_subscript(_T1C,sizeof(unsigned),0U);_T1E=(unsigned*)_T1D;_T1F=*_T1E;_T20=_T1B & _T1F;_T21=(int)_T20;if(!_T21)goto _TL43;_T22=Cyc_sprec;_T23=i;_T24=_check_fat_subscript(_T22,sizeof(short),_T23);_T25=(short*)_T24;_T26=*_T25;_T27=(int)_T26;if(!_T27)goto _TL43;_T28=Cyc_sprec;_T29=_T28.curr;_T2A=(short*)_T29;_T2B=i;_T2C=_T2A[_T2B];_T2D=(int)_T2C;_T2E=redprec;
# 189
if(_T2D >= _T2E)goto _TL45;_T2F=Cyc_verboseflag;
# 191
if(!_T2F)goto _TL47;_T30=state;_T31=lookaheadnum;_T32=i;_T33=_tag_fat("reduce",sizeof(char),7U);Cyc_log_resolution(_T30,_T31,_T32,_T33);goto _TL48;_TL47: _TL48: _T34=fp2;_T35=_T34.curr;_T36=(unsigned*)_T35;_T37=~ mask;_T38=(unsigned)_T37;
*_T36=*_T36 & _T38;
Cyc_flush_shift(state,i);goto _TL46;
# 195
_TL45: _T39=Cyc_sprec;_T3A=_T39.curr;_T3B=(short*)_T3A;_T3C=i;_T3D=_T3B[_T3C];_T3E=(int)_T3D;_T3F=redprec;if(_T3E <= _T3F)goto _TL49;_T40=Cyc_verboseflag;
# 197
if(!_T40)goto _TL4B;_T41=state;_T42=lookaheadnum;_T43=i;_T44=_tag_fat("shift",sizeof(char),6U);Cyc_log_resolution(_T41,_T42,_T43,_T44);goto _TL4C;_TL4B: _TL4C: _T45=fp1;_T46=_T45.curr;_T47=(unsigned*)_T46;_T48=~ mask;_T49=(unsigned)_T48;
*_T47=*_T47 & _T49;goto _TL4A;
# 207
_TL49: _T4A=Cyc_sassoc;_T4B=i;_T4C=_check_fat_subscript(_T4A,sizeof(short),_T4B);_T4D=(short*)_T4C;{short _TA7=*_T4D;_T4E=(int)_TA7;switch(_T4E){case 1: _T4F=Cyc_verboseflag;
# 211
if(!_T4F)goto _TL4E;_T50=state;_T51=lookaheadnum;_T52=i;_T53=_tag_fat("shift",sizeof(char),6U);Cyc_log_resolution(_T50,_T51,_T52,_T53);goto _TL4F;_TL4E: _TL4F: goto _LL0;case 2: _T54=Cyc_verboseflag;
# 215
if(!_T54)goto _TL50;_T55=state;_T56=lookaheadnum;_T57=i;_T58=_tag_fat("reduce",sizeof(char),7U);Cyc_log_resolution(_T55,_T56,_T57,_T58);goto _TL51;_TL50: _TL51: goto _LL0;case 3: _T59=Cyc_verboseflag;
# 219
if(!_T59)goto _TL52;_T5A=state;_T5B=lookaheadnum;_T5C=i;_T5D=_tag_fat("an error",sizeof(char),9U);Cyc_log_resolution(_T5A,_T5B,_T5C,_T5D);goto _TL53;_TL52: _TL53: goto _LL0;default: goto _LL0;}_LL0:;}_T5E=Cyc_sassoc;_T5F=i;_T60=_check_fat_subscript(_T5E,sizeof(short),_T5F);_T61=(short*)_T60;_T62=*_T61;_T63=(int)_T62;
# 226
if(_T63==1)goto _TL54;_T64=fp2;_T65=_T64.curr;_T66=(unsigned*)_T65;_T67=~ mask;_T68=(unsigned)_T67;
# 228
*_T66=*_T66 & _T68;
Cyc_flush_shift(state,i);goto _TL55;_TL54: _TL55: _T69=Cyc_sassoc;_T6A=i;_T6B=_check_fat_subscript(_T69,sizeof(short),_T6A);_T6C=(short*)_T6B;_T6D=*_T6C;_T6E=(int)_T6D;
# 231
if(_T6E==2)goto _TL56;_T6F=fp1;_T70=_T6F.curr;_T71=(unsigned*)_T70;_T72=~ mask;_T73=(unsigned)_T72;
# 233
*_T71=*_T71 & _T73;goto _TL57;_TL56: _TL57: _T74=Cyc_sassoc;_T75=_T74.curr;_T76=(short*)_T75;_T77=i;_T78=_T76[_T77];_T79=(int)_T78;
# 235
if(_T79!=3)goto _TL58;_T7A=& errtokens;_T7B=
# 238
_fat_ptr_inplace_plus_post(_T7A,sizeof(short),1);_T7C=_check_fat_subscript(_T7B,sizeof(short),0U);_T7D=(short*)_T7C;_T7E=i;*_T7D=(short)_T7E;goto _TL59;_TL58: _TL59: _TL4A: _TL46: goto _TL44;_TL43: _TL44:
# 243
 mask=mask << 1;
if(mask!=0)goto _TL5A;
# 246
mask=1;_T7F=& fp2;
_fat_ptr_inplace_plus(_T7F,sizeof(unsigned),1);_T80=& fp1;_fat_ptr_inplace_plus(_T80,sizeof(unsigned),1);goto _TL5B;_TL5A: _TL5B:
# 182
 i=i + 1;goto _TL42;_TL41: _T81=errp;_T82=errtokens;_T83=_T82.curr;_T84=errp;_T85=_T84->errs;_T86=_T85.curr;_T87=_T83 - _T86;_T88=_T87 / sizeof(short);
# 250
_T81->nerrs=(short)_T88;_T89=errp;_T8A=_T89->nerrs;_T8B=(int)_T8A;
if(!_T8B)goto _TL5C;_T8D=errp;_T8E=_T8D->nerrs;{unsigned _TA7=(unsigned)_T8E;_T90=_check_times(_TA7,sizeof(short));{short*_TA8=_cycalloc_atomic(_T90);{unsigned _TA9=_TA7;unsigned _temp_;_temp_=0;_TL61: if(_temp_ < _TA9)goto _TL5F;else{goto _TL60;}_TL5F: _T91=_temp_;_T92=errtokens;_T93=_temp_;_T94=(int)_T93;_T95=_check_fat_subscript(_T92,sizeof(short),_T94);_T96=(short*)_T95;_T97=errp;_T98=_T97->errs;_T99=_temp_;_T9A=(int)_T99;_T9B=_check_fat_subscript(_T98,sizeof(short),_T9A);_T9C=(short*)_T9B;
# 260
*_T96=*_T9C;_TA8[_T91]=*_T96;_temp_=_temp_ + 1;goto _TL61;_TL60:;}_T8F=(short*)_TA8;}_T8C=_tag_fat(_T8F,sizeof(short),_TA7);}errtokens=_T8C;_T9D=Cyc_err_table;_T9E=state;_T9F=_check_fat_subscript(_T9D,sizeof(struct Cyc_errs_tag*),_T9E);_TA0=(struct Cyc_errs_tag**)_T9F;{struct Cyc_errs_tag*_TA7=_cycalloc(sizeof(struct Cyc_errs_tag));_TA2=errp;
_TA7->nerrs=_TA2->nerrs;_TA7->errs=errtokens;_TA1=(struct Cyc_errs_tag*)_TA7;}*_TA0=_TA1;goto _TL5D;
# 266
_TL5C: _TA3=Cyc_err_table;_TA4=state;_TA5=_check_fat_subscript(_TA3,sizeof(struct Cyc_errs_tag*),_TA4);_TA6=(struct Cyc_errs_tag**)_TA5;*_TA6=0;_TL5D:
 errp=0;}}
# 275
void Cyc_flush_shift(int state,int token){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct Cyc_shifts_tag**_T3;struct Cyc_shifts_tag*_T4;unsigned _T5;struct Cyc_shifts_tag*_T6;short _T7;struct Cyc_shifts_tag*_T8;struct _fat_ptr _T9;int _TA;unsigned char*_TB;short*_TC;short _TD;int _TE;int _TF;struct _fat_ptr _T10;struct Cyc_shifts_tag*_T11;struct _fat_ptr _T12;unsigned char*_T13;short*_T14;int _T15;short _T16;int _T17;unsigned char*_T18;short*_T19;short _T1A;int _T1B;struct Cyc_shifts_tag*_T1C;struct _fat_ptr _T1D;unsigned char*_T1E;short*_T1F;int _T20;
# 277
register struct Cyc_shifts_tag*shiftp;
register int k;register int i;_T0=Cyc_shift_table;_T1=state;_T2=_check_fat_subscript(_T0,sizeof(struct Cyc_shifts_tag*),_T1);_T3=(struct Cyc_shifts_tag**)_T2;
# 281
shiftp=*_T3;_T4=shiftp;_T5=(unsigned)_T4;
# 283
if(!_T5)goto _TL62;_T6=shiftp;_T7=_T6->nshifts;
# 285
k=(int)_T7;
i=0;_TL67: if(i < k)goto _TL65;else{goto _TL66;}
# 288
_TL65: _T8=shiftp;_T9=_T8->shifts;_TA=i;_TB=_check_fat_subscript(_T9,sizeof(short),_TA);_TC=(short*)_TB;_TD=*_TC;_TE=(int)_TD;if(!_TE)goto _TL68;_TF=token;_T10=Cyc_accessing_symbol;_T11=shiftp;_T12=_T11->shifts;_T13=_T12.curr;_T14=(short*)_T13;_T15=i;_T16=_T14[_T15];_T17=(int)_T16;_T18=_check_fat_subscript(_T10,sizeof(short),_T17);_T19=(short*)_T18;_T1A=*_T19;_T1B=(int)_T1A;if(_TF!=_T1B)goto _TL68;_T1C=shiftp;_T1D=_T1C->shifts;_T1E=_T1D.curr;_T1F=(short*)_T1E;_T20=i;
_T1F[_T20]=0;goto _TL69;_TL68: _TL69:
# 286
 i=i + 1;goto _TL67;_TL66: goto _TL63;_TL62: _TL63:;}
# 295
void Cyc_log_resolution(int state,int LAno,int token,struct _fat_ptr resolution){struct Cyc_Int_pa_PrintArg_struct _T0;int _T1;struct Cyc_Int_pa_PrintArg_struct _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;short*_T6;short _T7;int _T8;struct Cyc_String_pa_PrintArg_struct _T9;struct _fat_ptr _TA;int _TB;unsigned char*_TC;struct _fat_ptr*_TD;struct _fat_ptr _TE;struct Cyc_String_pa_PrintArg_struct _TF;struct _fat_ptr _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;{struct Cyc_Int_pa_PrintArg_struct _T14;_T14.tag=1;_T1=state;
# 300
_T14.f1=(unsigned long)_T1;_T0=_T14;}{struct Cyc_Int_pa_PrintArg_struct _T14=_T0;{struct Cyc_Int_pa_PrintArg_struct _T15;_T15.tag=1;_T3=Cyc_LAruleno;_T4=LAno;_T5=_check_fat_subscript(_T3,sizeof(short),_T4);_T6=(short*)_T5;_T7=*_T6;_T8=(int)_T7;_T15.f1=(unsigned long)_T8;_T2=_T15;}{struct Cyc_Int_pa_PrintArg_struct _T15=_T2;{struct Cyc_String_pa_PrintArg_struct _T16;_T16.tag=0;_TA=Cyc_tags;_TB=token;_TC=_check_fat_subscript(_TA,sizeof(struct _fat_ptr),_TB);_TD=(struct _fat_ptr*)_TC;_TE=*_TD;_T16.f1=_TE;_T9=_T16;}{struct Cyc_String_pa_PrintArg_struct _T16=_T9;{struct Cyc_String_pa_PrintArg_struct _T17;_T17.tag=0;_T10=resolution;_T17.f1=_T10;_TF=_T17;}{struct Cyc_String_pa_PrintArg_struct _T17=_TF;void*_T18[4];_T18[0]=& _T14;_T18[1]=& _T15;_T18[2]=& _T16;_T18[3]=& _T17;_T11=
# 298
_check_null(Cyc_foutput);_T12=
_tag_fat("Conflict in state %d between rule %d and token %s resolved as %s.\n",sizeof(char),67U);_T13=_tag_fat(_T18,sizeof(void*),4);Cyc_fprintf(_T11,_T12,_T13);}}}}}
# 304
void Cyc_conflict_log (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;char*_T3;char _T4;int _T5;int _T6;int _T7;
# 306
register int i;
# 308
Cyc_src_total=0;
Cyc_rrc_total=0;
# 311
i=0;_TL6D: if(i < Cyc_nstates)goto _TL6B;else{goto _TL6C;}
# 313
_TL6B: _T0=Cyc_conflicts;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(char),_T1);_T3=(char*)_T2;_T4=*_T3;_T5=(int)_T4;if(!_T5)goto _TL6E;
# 315
Cyc_count_sr_conflicts(i);
Cyc_count_rr_conflicts(i);_T6=Cyc_src_count;
Cyc_src_total=Cyc_src_total + _T6;_T7=Cyc_rrc_count;
Cyc_rrc_total=Cyc_rrc_total + _T7;goto _TL6F;_TL6E: _TL6F:
# 311
 i=i + 1;goto _TL6D;_TL6C:
# 322
 Cyc_total_conflicts();}
# 326
void Cyc_verbose_conflict_log (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;char*_T3;char _T4;int _T5;int _T6;int _T7;struct Cyc_Int_pa_PrintArg_struct _T8;int _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;struct Cyc_Int_pa_PrintArg_struct _T10;int _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc___cycFILE*_T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct Cyc___cycFILE*_T18;struct _fat_ptr _T19;struct _fat_ptr _T1A;struct Cyc_Int_pa_PrintArg_struct _T1B;int _T1C;struct Cyc___cycFILE*_T1D;struct _fat_ptr _T1E;struct _fat_ptr _T1F;struct Cyc___cycFILE*_T20;struct Cyc___cycFILE*_T21;
# 328
register int i;
# 330
Cyc_src_total=0;
Cyc_rrc_total=0;
# 333
i=0;_TL73: if(i < Cyc_nstates)goto _TL71;else{goto _TL72;}
# 335
_TL71: _T0=Cyc_conflicts;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(char),_T1);_T3=(char*)_T2;_T4=*_T3;_T5=(int)_T4;if(!_T5)goto _TL74;
# 337
Cyc_count_sr_conflicts(i);
Cyc_count_rr_conflicts(i);_T6=Cyc_src_count;
Cyc_src_total=Cyc_src_total + _T6;_T7=Cyc_rrc_count;
Cyc_rrc_total=Cyc_rrc_total + _T7;{struct Cyc_Int_pa_PrintArg_struct _T22;_T22.tag=1;_T9=i;
# 342
_T22.f1=(unsigned long)_T9;_T8=_T22;}{struct Cyc_Int_pa_PrintArg_struct _T22=_T8;void*_T23[1];_T23[0]=& _T22;_TA=_check_null(Cyc_foutput);_TB=_tag_fat("State %d contains",sizeof(char),18U);_TC=_tag_fat(_T23,sizeof(void*),1);Cyc_fprintf(_TA,_TB,_TC);}
# 344
if(Cyc_src_count!=1)goto _TL76;_TD=
_check_null(Cyc_foutput);_TE=_tag_fat(" 1 shift/reduce conflict",sizeof(char),25U);_TF=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TD,_TE,_TF);goto _TL77;
_TL76: if(Cyc_src_count <= 1)goto _TL78;{struct Cyc_Int_pa_PrintArg_struct _T22;_T22.tag=1;_T11=Cyc_src_count;
_T22.f1=(unsigned long)_T11;_T10=_T22;}{struct Cyc_Int_pa_PrintArg_struct _T22=_T10;void*_T23[1];_T23[0]=& _T22;_T12=_check_null(Cyc_foutput);_T13=_tag_fat(" %d shift/reduce conflicts",sizeof(char),27U);_T14=_tag_fat(_T23,sizeof(void*),1);Cyc_fprintf(_T12,_T13,_T14);}goto _TL79;_TL78: _TL79: _TL77:
# 349
 if(Cyc_src_count <= 0)goto _TL7A;if(Cyc_rrc_count <= 0)goto _TL7A;_T15=
_check_null(Cyc_foutput);_T16=_tag_fat(" and",sizeof(char),5U);_T17=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T15,_T16,_T17);goto _TL7B;_TL7A: _TL7B:
# 352
 if(Cyc_rrc_count!=1)goto _TL7C;_T18=
_check_null(Cyc_foutput);_T19=_tag_fat(" 1 reduce/reduce conflict",sizeof(char),26U);_T1A=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T18,_T19,_T1A);goto _TL7D;
_TL7C: if(Cyc_rrc_count <= 1)goto _TL7E;{struct Cyc_Int_pa_PrintArg_struct _T22;_T22.tag=1;_T1C=Cyc_rrc_count;
_T22.f1=(unsigned long)_T1C;_T1B=_T22;}{struct Cyc_Int_pa_PrintArg_struct _T22=_T1B;void*_T23[1];_T23[0]=& _T22;_T1D=_check_null(Cyc_foutput);_T1E=_tag_fat(" %d reduce/reduce conflicts",sizeof(char),28U);_T1F=_tag_fat(_T23,sizeof(void*),1);Cyc_fprintf(_T1D,_T1E,_T1F);}goto _TL7F;_TL7E: _TL7F: _TL7D: _T20=
# 357
_check_null(Cyc_foutput);Cyc_putc(46,_T20);_T21=
_check_null(Cyc_foutput);Cyc_putc(10,_T21);goto _TL75;_TL74: _TL75:
# 333
 i=i + 1;goto _TL73;_TL72:
# 362
 Cyc_total_conflicts();}
# 366
void Cyc_total_conflicts (void){int _T0;struct Cyc___cycFILE*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Int_pa_PrintArg_struct _T4;int _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc___cycFILE*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;struct Cyc_Int_pa_PrintArg_struct _TC;int _TD;struct Cyc___cycFILE*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc_String_pa_PrintArg_struct _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc___cycFILE*_T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct Cyc_Int_pa_PrintArg_struct _T18;int _T19;struct Cyc___cycFILE*_T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct Cyc___cycFILE*_T1D;struct _fat_ptr _T1E;struct _fat_ptr _T1F;struct Cyc___cycFILE*_T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct Cyc_Int_pa_PrintArg_struct _T23;int _T24;struct Cyc___cycFILE*_T25;struct _fat_ptr _T26;struct _fat_ptr _T27;
# 370
if(Cyc_src_total!=Cyc_expected_conflicts)goto _TL80;if(Cyc_rrc_total!=0)goto _TL80;
return;_TL80: _T0=Cyc_fixed_outfiles;
# 373
if(!_T0)goto _TL82;_T1=Cyc_stderr;_T2=
# 377
_tag_fat("conflicts: ",sizeof(char),12U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1,_T2,_T3);
if(Cyc_src_total <= 0)goto _TL84;{struct Cyc_Int_pa_PrintArg_struct _T28;_T28.tag=1;_T5=Cyc_src_total;
_T28.f1=(unsigned long)_T5;_T4=_T28;}{struct Cyc_Int_pa_PrintArg_struct _T28=_T4;void*_T29[1];_T29[0]=& _T28;_T6=Cyc_stderr;_T7=_tag_fat(" %d shift/reduce",sizeof(char),17U);_T8=_tag_fat(_T29,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}goto _TL85;_TL84: _TL85:
 if(Cyc_src_total <= 0)goto _TL86;if(Cyc_rrc_total <= 0)goto _TL86;_T9=Cyc_stderr;_TA=
_tag_fat(",",sizeof(char),2U);_TB=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T9,_TA,_TB);goto _TL87;_TL86: _TL87:
 if(Cyc_rrc_total <= 0)goto _TL88;{struct Cyc_Int_pa_PrintArg_struct _T28;_T28.tag=1;_TD=Cyc_rrc_total;
_T28.f1=(unsigned long)_TD;_TC=_T28;}{struct Cyc_Int_pa_PrintArg_struct _T28=_TC;void*_T29[1];_T29[0]=& _T28;_TE=Cyc_stderr;_TF=_tag_fat(" %d reduce/reduce",sizeof(char),18U);_T10=_tag_fat(_T29,sizeof(void*),1);Cyc_fprintf(_TE,_TF,_T10);}goto _TL89;_TL88: _TL89:
 Cyc_putc(10,Cyc_stderr);goto _TL83;
# 388
_TL82:{struct Cyc_String_pa_PrintArg_struct _T28;_T28.tag=0;_T28.f1=Cyc_infile;_T11=_T28;}{struct Cyc_String_pa_PrintArg_struct _T28=_T11;void*_T29[1];_T29[0]=& _T28;_T12=Cyc_stderr;_T13=_tag_fat("%s contains",sizeof(char),12U);_T14=_tag_fat(_T29,sizeof(void*),1);Cyc_fprintf(_T12,_T13,_T14);}
# 390
if(Cyc_src_total!=1)goto _TL8A;_T15=Cyc_stderr;_T16=
_tag_fat(" 1 shift/reduce conflict",sizeof(char),25U);_T17=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T15,_T16,_T17);goto _TL8B;
_TL8A: if(Cyc_src_total <= 1)goto _TL8C;{struct Cyc_Int_pa_PrintArg_struct _T28;_T28.tag=1;_T19=Cyc_src_total;
_T28.f1=(unsigned long)_T19;_T18=_T28;}{struct Cyc_Int_pa_PrintArg_struct _T28=_T18;void*_T29[1];_T29[0]=& _T28;_T1A=Cyc_stderr;_T1B=_tag_fat(" %d shift/reduce conflicts",sizeof(char),27U);_T1C=_tag_fat(_T29,sizeof(void*),1);Cyc_fprintf(_T1A,_T1B,_T1C);}goto _TL8D;_TL8C: _TL8D: _TL8B:
# 395
 if(Cyc_src_total <= 0)goto _TL8E;if(Cyc_rrc_total <= 0)goto _TL8E;_T1D=Cyc_stderr;_T1E=
_tag_fat(" and",sizeof(char),5U);_T1F=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1D,_T1E,_T1F);goto _TL8F;_TL8E: _TL8F:
# 398
 if(Cyc_rrc_total!=1)goto _TL90;_T20=Cyc_stderr;_T21=
_tag_fat(" 1 reduce/reduce conflict",sizeof(char),26U);_T22=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T20,_T21,_T22);goto _TL91;
_TL90: if(Cyc_rrc_total <= 1)goto _TL92;{struct Cyc_Int_pa_PrintArg_struct _T28;_T28.tag=1;_T24=Cyc_rrc_total;
_T28.f1=(unsigned long)_T24;_T23=_T28;}{struct Cyc_Int_pa_PrintArg_struct _T28=_T23;void*_T29[1];_T29[0]=& _T28;_T25=Cyc_stderr;_T26=_tag_fat(" %d reduce/reduce conflicts",sizeof(char),28U);_T27=_tag_fat(_T29,sizeof(void*),1);Cyc_fprintf(_T25,_T26,_T27);}goto _TL93;_TL92: _TL93: _TL91:
# 403
 Cyc_putc(46,Cyc_stderr);
Cyc_putc(10,Cyc_stderr);_TL83:;}
# 409
void Cyc_count_sr_conflicts(int state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct Cyc_shifts_tag**_T3;struct Cyc_shifts_tag*_T4;unsigned _T5;struct _fat_ptr _T6;int _T7;unsigned char*_T8;unsigned*_T9;struct _fat_ptr _TA;int _TB;unsigned char*_TC;unsigned*_TD;struct Cyc_shifts_tag*_TE;short _TF;struct Cyc_shifts_tag*_T10;struct _fat_ptr _T11;int _T12;unsigned char*_T13;short*_T14;short _T15;int _T16;struct _fat_ptr _T17;struct Cyc_shifts_tag*_T18;struct _fat_ptr _T19;unsigned char*_T1A;short*_T1B;int _T1C;short _T1D;int _T1E;unsigned char*_T1F;short*_T20;short _T21;struct _fat_ptr _T22;int _T23;unsigned char*_T24;unsigned*_T25;int _T26;int _T27;unsigned _T28;struct _fat_ptr _T29;int _T2A;unsigned char*_T2B;short*_T2C;short _T2D;struct _fat_ptr _T2E;int _T2F;struct _fat_ptr _T30;unsigned char*_T31;short*_T32;int _T33;short _T34;struct _fat_ptr _T35;int _T36;struct _fat_ptr _T37;unsigned char*_T38;unsigned*_T39;struct _fat_ptr _T3A;unsigned char*_T3B;unsigned*_T3C;struct _fat_ptr*_T3D;struct _fat_ptr _T3E;unsigned char*_T3F;unsigned*_T40;struct _fat_ptr*_T41;struct _fat_ptr _T42;unsigned char*_T43;unsigned*_T44;unsigned _T45;struct _fat_ptr _T46;unsigned char*_T47;unsigned*_T48;struct _fat_ptr _T49;unsigned char*_T4A;unsigned*_T4B;struct _fat_ptr*_T4C;struct _fat_ptr _T4D;unsigned char*_T4E;unsigned*_T4F;struct _fat_ptr*_T50;struct _fat_ptr _T51;unsigned char*_T52;unsigned*_T53;unsigned _T54;int _T55;unsigned _T56;struct _fat_ptr _T57;unsigned char*_T58;unsigned*_T59;unsigned _T5A;unsigned _T5B;int _T5C;struct _fat_ptr*_T5D;
# 411
register int i;
register int k;
register int mask;
register struct Cyc_shifts_tag*shiftp;
struct _fat_ptr fp1;
struct _fat_ptr fp2;
struct _fat_ptr fp3;
register int symbol;
# 420
Cyc_src_count=0;_T0=Cyc_shift_table;_T1=state;_T2=_check_fat_subscript(_T0,sizeof(struct Cyc_shifts_tag*),_T1);_T3=(struct Cyc_shifts_tag**)_T2;
# 422
shiftp=*_T3;_T4=shiftp;_T5=(unsigned)_T4;
if(_T5)goto _TL94;else{goto _TL96;}_TL96: return;_TL94:
# 425
 i=0;_TL9A: if(i < Cyc_tokensetsize)goto _TL98;else{goto _TL99;}
# 427
_TL98: _T6=Cyc_shiftset;_T7=i;_T8=_check_fat_subscript(_T6,sizeof(unsigned),_T7);_T9=(unsigned*)_T8;*_T9=0U;_TA=Cyc_lookaheadset;_TB=i;_TC=_check_fat_subscript(_TA,sizeof(unsigned),_TB);_TD=(unsigned*)_TC;
*_TD=0U;
# 425
i=i + 1;goto _TL9A;_TL99: _TE=shiftp;_TF=_TE->nshifts;
# 431
k=(int)_TF;
i=0;_TL9E: if(i < k)goto _TL9C;else{goto _TL9D;}
# 434
_TL9C: _T10=shiftp;_T11=_T10->shifts;_T12=i;_T13=_check_fat_subscript(_T11,sizeof(short),_T12);_T14=(short*)_T13;_T15=*_T14;_T16=(int)_T15;if(_T16)goto _TL9F;else{goto _TLA1;}_TLA1: goto _TL9B;_TL9F: _T17=Cyc_accessing_symbol;_T18=shiftp;_T19=_T18->shifts;_T1A=_T19.curr;_T1B=(short*)_T1A;_T1C=i;_T1D=_T1B[_T1C];_T1E=(int)_T1D;_T1F=_check_fat_subscript(_T17,sizeof(short),_T1E);_T20=(short*)_T1F;_T21=*_T20;
symbol=(int)_T21;
if(symbol < Cyc_ntokens)goto _TLA2;goto _TL9D;_TLA2: _T22=Cyc_shiftset;_T23=symbol / 32;_T24=_check_fat_subscript(_T22,sizeof(unsigned),_T23);_T25=(unsigned*)_T24;_T26=symbol % 32;_T27=1 << _T26;_T28=(unsigned)_T27;
*_T25=*_T25 | _T28;_TL9B:
# 432
 i=i + 1;goto _TL9E;_TL9D: _T29=Cyc_lookaheads;_T2A=state + 1;_T2B=_check_fat_subscript(_T29,sizeof(short),_T2A);_T2C=(short*)_T2B;_T2D=*_T2C;
# 440
k=(int)_T2D;_T2E=Cyc_lookaheadset;_T2F=Cyc_tokensetsize;
fp3=_fat_ptr_plus(_T2E,sizeof(unsigned),_T2F);_T30=Cyc_lookaheads;_T31=_T30.curr;_T32=(short*)_T31;_T33=state;_T34=_T32[_T33];
# 443
i=(int)_T34;_TLA7: if(i < k)goto _TLA5;else{goto _TLA6;}
# 445
_TLA5: _T35=Cyc_LA;_T36=i * Cyc_tokensetsize;fp1=_fat_ptr_plus(_T35,sizeof(unsigned),_T36);
fp2=Cyc_lookaheadset;
# 448
_TLA8: _T37=fp2;_T38=_T37.curr;_T39=(unsigned*)_T38;_T3A=fp3;_T3B=_T3A.curr;_T3C=(unsigned*)_T3B;if(_T39 < _T3C)goto _TLA9;else{goto _TLAA;}
_TLA9: _T3D=& fp2;_T3E=_fat_ptr_inplace_plus_post(_T3D,sizeof(unsigned),1);_T3F=_check_fat_subscript(_T3E,sizeof(unsigned),0U);_T40=(unsigned*)_T3F;_T41=& fp1;_T42=_fat_ptr_inplace_plus_post(_T41,sizeof(unsigned),1);_T43=_check_fat_subscript(_T42,sizeof(unsigned),0U);_T44=(unsigned*)_T43;_T45=*_T44;*_T40=*_T40 | _T45;goto _TLA8;_TLAA:
# 443
 i=i + 1;goto _TLA7;_TLA6:
# 452
 fp1=Cyc_shiftset;
fp2=Cyc_lookaheadset;
# 455
_TLAB: _T46=fp2;_T47=_T46.curr;_T48=(unsigned*)_T47;_T49=fp3;_T4A=_T49.curr;_T4B=(unsigned*)_T4A;if(_T48 < _T4B)goto _TLAC;else{goto _TLAD;}
_TLAC: _T4C=& fp2;_T4D=_fat_ptr_inplace_plus_post(_T4C,sizeof(unsigned),1);_T4E=_check_fat_subscript(_T4D,sizeof(unsigned),0U);_T4F=(unsigned*)_T4E;_T50=& fp1;_T51=_fat_ptr_inplace_plus_post(_T50,sizeof(unsigned),1);_T52=_check_fat_subscript(_T51,sizeof(unsigned),0U);_T53=(unsigned*)_T52;_T54=*_T53;*_T4F=*_T4F & _T54;goto _TLAB;_TLAD:
# 458
 mask=1;
fp2=Cyc_lookaheadset;
i=0;_TLB1: if(i < Cyc_ntokens)goto _TLAF;else{goto _TLB0;}
# 462
_TLAF: _T55=mask;_T56=(unsigned)_T55;_T57=fp2;_T58=_check_fat_subscript(_T57,sizeof(unsigned),0U);_T59=(unsigned*)_T58;_T5A=*_T59;_T5B=_T56 & _T5A;_T5C=(int)_T5B;if(!_T5C)goto _TLB2;
Cyc_src_count=Cyc_src_count + 1;goto _TLB3;_TLB2: _TLB3:
# 465
 mask=mask << 1;
if(mask!=0)goto _TLB4;
# 468
mask=1;_T5D=& fp2;
_fat_ptr_inplace_plus(_T5D,sizeof(unsigned),1);goto _TLB5;_TLB4: _TLB5:
# 460
 i=i + 1;goto _TLB1;_TLB0:;}
# 475
void Cyc_count_rr_conflicts(int state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;short _T9;int _TA;struct _fat_ptr _TB;int _TC;unsigned _TD;struct _fat_ptr _TE;unsigned char*_TF;unsigned*_T10;unsigned _T11;unsigned _T12;int _T13;struct _fat_ptr*_T14;int _T15;struct _fat_ptr*_T16;
# 477
register int i;
register int j;
register int count;
register unsigned mask;
struct _fat_ptr baseword;
struct _fat_ptr wordp;
register int m;
register int n;
# 486
Cyc_rrc_count=0;_T0=Cyc_lookaheads;_T1=state;_T2=_check_fat_subscript(_T0,sizeof(short),_T1);_T3=(short*)_T2;_T4=*_T3;
# 488
m=(int)_T4;_T5=Cyc_lookaheads;_T6=state + 1;_T7=_check_fat_subscript(_T5,sizeof(short),_T6);_T8=(short*)_T7;_T9=*_T8;
n=(int)_T9;_TA=n - m;
# 491
if(_TA >= 2)goto _TLB6;return;_TLB6:
# 493
 mask=1U;_TB=Cyc_LA;_TC=m * Cyc_tokensetsize;
baseword=_fat_ptr_plus(_TB,sizeof(unsigned),_TC);
i=0;_TLBB: if(i < Cyc_ntokens)goto _TLB9;else{goto _TLBA;}
# 497
_TLB9: wordp=baseword;
# 499
count=0;
j=m;_TLBF: if(j < n)goto _TLBD;else{goto _TLBE;}
# 502
_TLBD: _TD=mask;_TE=wordp;_TF=_check_fat_subscript(_TE,sizeof(unsigned),0U);_T10=(unsigned*)_TF;_T11=*_T10;_T12=_TD & _T11;_T13=(int)_T12;if(!_T13)goto _TLC0;
count=count + 1;goto _TLC1;_TLC0: _TLC1: _T14=& wordp;_T15=Cyc_tokensetsize;
# 505
_fat_ptr_inplace_plus(_T14,sizeof(unsigned),_T15);
# 500
j=j + 1;goto _TLBF;_TLBE:
# 508
 if(count < 2)goto _TLC2;Cyc_rrc_count=Cyc_rrc_count + 1;goto _TLC3;_TLC2: _TLC3:
# 510
 mask=mask << 1U;
if(mask!=0U)goto _TLC4;
# 513
mask=1U;_T16=& baseword;
_fat_ptr_inplace_plus(_T16,sizeof(unsigned),1);goto _TLC5;_TLC4: _TLC5:
# 495
 i=i + 1;goto _TLBB;_TLBA:;}
# 520
void Cyc_print_reductions(int state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;unsigned*_T3;struct _fat_ptr _T4;int _T5;unsigned char*_T6;struct Cyc_shifts_tag**_T7;struct Cyc_shifts_tag*_T8;unsigned _T9;struct Cyc_shifts_tag*_TA;short _TB;struct Cyc_shifts_tag*_TC;struct _fat_ptr _TD;int _TE;unsigned char*_TF;short*_T10;short _T11;int _T12;struct _fat_ptr _T13;struct Cyc_shifts_tag*_T14;struct _fat_ptr _T15;unsigned char*_T16;short*_T17;int _T18;short _T19;int _T1A;unsigned char*_T1B;short*_T1C;short _T1D;struct _fat_ptr _T1E;int _T1F;unsigned char*_T20;unsigned*_T21;int _T22;int _T23;unsigned _T24;struct _fat_ptr _T25;int _T26;unsigned char*_T27;struct Cyc_errs_tag**_T28;struct Cyc_errs_tag*_T29;unsigned _T2A;struct Cyc_errs_tag*_T2B;short _T2C;struct Cyc_errs_tag*_T2D;struct _fat_ptr _T2E;int _T2F;unsigned char*_T30;short*_T31;short _T32;int _T33;struct Cyc_errs_tag*_T34;struct _fat_ptr _T35;unsigned char*_T36;short*_T37;int _T38;short _T39;struct _fat_ptr _T3A;int _T3B;unsigned char*_T3C;unsigned*_T3D;int _T3E;int _T3F;unsigned _T40;struct _fat_ptr _T41;int _T42;unsigned char*_T43;short*_T44;short _T45;struct _fat_ptr _T46;int _T47;unsigned char*_T48;short*_T49;short _T4A;int _T4B;int _T4C;struct _fat_ptr _T4D;int _T4E;unsigned char*_T4F;short*_T50;short _T51;struct _fat_ptr _T52;int _T53;struct _fat_ptr _T54;int _T55;struct _fat_ptr _T56;unsigned char*_T57;unsigned*_T58;struct _fat_ptr _T59;unsigned char*_T5A;unsigned*_T5B;struct _fat_ptr*_T5C;struct _fat_ptr _T5D;unsigned char*_T5E;unsigned*_T5F;struct _fat_ptr*_T60;struct _fat_ptr _T61;unsigned char*_T62;unsigned*_T63;unsigned _T64;struct _fat_ptr*_T65;struct _fat_ptr _T66;unsigned char*_T67;unsigned*_T68;unsigned _T69;unsigned _T6A;struct _fat_ptr _T6B;unsigned char*_T6C;unsigned*_T6D;unsigned _T6E;unsigned _T6F;int _T70;struct Cyc_String_pa_PrintArg_struct _T71;struct _fat_ptr _T72;int _T73;unsigned char*_T74;struct _fat_ptr*_T75;struct _fat_ptr _T76;struct Cyc_Int_pa_PrintArg_struct _T77;int _T78;struct Cyc_String_pa_PrintArg_struct _T79;struct _fat_ptr _T7A;struct _fat_ptr _T7B;int _T7C;unsigned char*_T7D;short*_T7E;short _T7F;int _T80;unsigned char*_T81;struct _fat_ptr*_T82;struct _fat_ptr _T83;struct Cyc___cycFILE*_T84;struct _fat_ptr _T85;struct _fat_ptr _T86;struct _fat_ptr*_T87;struct Cyc_Int_pa_PrintArg_struct _T88;int _T89;struct Cyc_String_pa_PrintArg_struct _T8A;struct _fat_ptr _T8B;struct _fat_ptr _T8C;int _T8D;unsigned char*_T8E;short*_T8F;short _T90;int _T91;unsigned char*_T92;struct _fat_ptr*_T93;struct _fat_ptr _T94;struct Cyc___cycFILE*_T95;struct _fat_ptr _T96;struct _fat_ptr _T97;int _T98;struct _fat_ptr _T99;int _T9A;int _T9B;struct _fat_ptr _T9C;int _T9D;struct _fat_ptr _T9E;unsigned char*_T9F;unsigned*_TA0;struct _fat_ptr _TA1;unsigned char*_TA2;unsigned*_TA3;struct _fat_ptr*_TA4;struct _fat_ptr _TA5;unsigned char*_TA6;unsigned*_TA7;struct _fat_ptr*_TA8;struct _fat_ptr _TA9;unsigned char*_TAA;unsigned*_TAB;unsigned _TAC;struct _fat_ptr*_TAD;struct _fat_ptr _TAE;unsigned char*_TAF;unsigned*_TB0;unsigned _TB1;unsigned _TB2;unsigned _TB3;struct _fat_ptr _TB4;unsigned char*_TB5;unsigned*_TB6;unsigned _TB7;unsigned _TB8;int _TB9;struct _fat_ptr*_TBA;struct _fat_ptr _TBB;int _TBC;unsigned char*_TBD;short*_TBE;short _TBF;struct _fat_ptr _TC0;unsigned char*_TC1;unsigned*_TC2;struct _fat_ptr _TC3;unsigned char*_TC4;unsigned*_TC5;struct _fat_ptr*_TC6;struct _fat_ptr _TC7;unsigned char*_TC8;unsigned*_TC9;struct _fat_ptr*_TCA;struct _fat_ptr _TCB;unsigned char*_TCC;unsigned*_TCD;unsigned _TCE;struct _fat_ptr _TCF;int _TD0;unsigned char*_TD1;unsigned*_TD2;struct Cyc_shifts_tag*_TD3;unsigned _TD4;struct Cyc_shifts_tag*_TD5;short _TD6;struct Cyc_shifts_tag*_TD7;struct _fat_ptr _TD8;int _TD9;unsigned char*_TDA;short*_TDB;short _TDC;int _TDD;struct _fat_ptr _TDE;struct Cyc_shifts_tag*_TDF;struct _fat_ptr _TE0;unsigned char*_TE1;short*_TE2;int _TE3;short _TE4;int _TE5;unsigned char*_TE6;short*_TE7;short _TE8;struct _fat_ptr _TE9;int _TEA;unsigned char*_TEB;unsigned*_TEC;int _TED;int _TEE;unsigned _TEF;struct _fat_ptr _TF0;int _TF1;unsigned _TF2;struct _fat_ptr _TF3;unsigned char*_TF4;unsigned*_TF5;unsigned _TF6;unsigned _TF7;int _TF8;unsigned _TF9;struct _fat_ptr _TFA;unsigned char*_TFB;unsigned*_TFC;unsigned _TFD;unsigned _TFE;int _TFF;struct _fat_ptr _T100;int _T101;unsigned char*_T102;short*_T103;short _T104;struct Cyc_String_pa_PrintArg_struct _T105;struct _fat_ptr _T106;int _T107;unsigned char*_T108;struct _fat_ptr*_T109;struct _fat_ptr _T10A;struct Cyc_Int_pa_PrintArg_struct _T10B;int _T10C;struct Cyc_String_pa_PrintArg_struct _T10D;struct _fat_ptr _T10E;struct _fat_ptr _T10F;int _T110;unsigned char*_T111;short*_T112;short _T113;int _T114;unsigned char*_T115;struct _fat_ptr*_T116;struct _fat_ptr _T117;struct Cyc___cycFILE*_T118;struct _fat_ptr _T119;struct _fat_ptr _T11A;int _T11B;struct _fat_ptr _T11C;int _T11D;unsigned char*_T11E;short*_T11F;short _T120;struct Cyc_String_pa_PrintArg_struct _T121;struct _fat_ptr _T122;int _T123;unsigned char*_T124;struct _fat_ptr*_T125;struct _fat_ptr _T126;struct Cyc_Int_pa_PrintArg_struct _T127;int _T128;struct Cyc_String_pa_PrintArg_struct _T129;struct _fat_ptr _T12A;struct _fat_ptr _T12B;int _T12C;unsigned char*_T12D;short*_T12E;short _T12F;int _T130;unsigned char*_T131;struct _fat_ptr*_T132;struct _fat_ptr _T133;struct Cyc___cycFILE*_T134;struct _fat_ptr _T135;struct _fat_ptr _T136;struct _fat_ptr _T137;int _T138;unsigned char*_T139;short*_T13A;short _T13B;struct Cyc_String_pa_PrintArg_struct _T13C;struct _fat_ptr _T13D;int _T13E;unsigned char*_T13F;struct _fat_ptr*_T140;struct _fat_ptr _T141;struct Cyc_Int_pa_PrintArg_struct _T142;int _T143;struct Cyc_String_pa_PrintArg_struct _T144;struct _fat_ptr _T145;struct _fat_ptr _T146;int _T147;unsigned char*_T148;short*_T149;short _T14A;int _T14B;unsigned char*_T14C;struct _fat_ptr*_T14D;struct _fat_ptr _T14E;struct Cyc___cycFILE*_T14F;struct _fat_ptr _T150;struct _fat_ptr _T151;struct _fat_ptr*_T152;int _T153;struct _fat_ptr*_T154;struct _fat_ptr*_T155;struct Cyc_Int_pa_PrintArg_struct _T156;int _T157;struct Cyc_String_pa_PrintArg_struct _T158;struct _fat_ptr _T159;struct _fat_ptr _T15A;int _T15B;unsigned char*_T15C;short*_T15D;short _T15E;int _T15F;unsigned char*_T160;struct _fat_ptr*_T161;struct _fat_ptr _T162;struct Cyc___cycFILE*_T163;struct _fat_ptr _T164;struct _fat_ptr _T165;struct Cyc___cycFILE*_T166;
# 522
register int i;
register int j;
register int k;
struct _fat_ptr fp1;
struct _fat_ptr fp2;
struct _fat_ptr fp3;
struct _fat_ptr fp4;
register int rule;
register int symbol;
register unsigned mask;
register int m;
register int n;
register int default_LA;
register int default_rule=0;
register int cmax;
register int count;
register struct Cyc_shifts_tag*shiftp;
register struct Cyc_errs_tag*errp;
int nodefault=0;
# 542
i=0;_TLC9: if(i < Cyc_tokensetsize)goto _TLC7;else{goto _TLC8;}
_TLC7: _T0=Cyc_shiftset;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(unsigned),_T1);_T3=(unsigned*)_T2;*_T3=0U;
# 542
i=i + 1;goto _TLC9;_TLC8: _T4=Cyc_shift_table;_T5=state;_T6=_check_fat_subscript(_T4,sizeof(struct Cyc_shifts_tag*),_T5);_T7=(struct Cyc_shifts_tag**)_T6;
# 545
shiftp=*_T7;_T8=shiftp;_T9=(unsigned)_T8;
if(!_T9)goto _TLCA;_TA=shiftp;_TB=_TA->nshifts;
# 548
k=(int)_TB;
i=0;_TLCF: if(i < k)goto _TLCD;else{goto _TLCE;}
# 551
_TLCD: _TC=shiftp;_TD=_TC->shifts;_TE=i;_TF=_check_fat_subscript(_TD,sizeof(short),_TE);_T10=(short*)_TF;_T11=*_T10;_T12=(int)_T11;if(_T12)goto _TLD0;else{goto _TLD2;}_TLD2: goto _TLCC;_TLD0: _T13=Cyc_accessing_symbol;_T14=shiftp;_T15=_T14->shifts;_T16=_T15.curr;_T17=(short*)_T16;_T18=i;_T19=_T17[_T18];_T1A=(int)_T19;_T1B=_check_fat_subscript(_T13,sizeof(short),_T1A);_T1C=(short*)_T1B;_T1D=*_T1C;
symbol=(int)_T1D;
if(symbol < Cyc_ntokens)goto _TLD3;goto _TLCE;_TLD3:
# 556
 if(symbol!=Cyc_error_token_number)goto _TLD5;nodefault=1;goto _TLD6;_TLD5: _TLD6: _T1E=Cyc_shiftset;_T1F=symbol / 32;_T20=_check_fat_subscript(_T1E,sizeof(unsigned),_T1F);_T21=(unsigned*)_T20;_T22=symbol % 32;_T23=1 << _T22;_T24=(unsigned)_T23;
*_T21=*_T21 | _T24;_TLCC:
# 549
 i=i + 1;goto _TLCF;_TLCE: goto _TLCB;_TLCA: _TLCB: _T25=Cyc_err_table;_T26=state;_T27=_check_fat_subscript(_T25,sizeof(struct Cyc_errs_tag*),_T26);_T28=(struct Cyc_errs_tag**)_T27;
# 561
errp=*_T28;_T29=errp;_T2A=(unsigned)_T29;
if(!_T2A)goto _TLD7;_T2B=errp;_T2C=_T2B->nerrs;
# 564
k=(int)_T2C;
i=0;_TLDC: if(i < k)goto _TLDA;else{goto _TLDB;}
# 567
_TLDA: _T2D=errp;_T2E=_T2D->errs;_T2F=i;_T30=_check_fat_subscript(_T2E,sizeof(short),_T2F);_T31=(short*)_T30;_T32=*_T31;_T33=(int)_T32;if(_T33)goto _TLDD;else{goto _TLDF;}_TLDF: goto _TLD9;_TLDD: _T34=errp;_T35=_T34->errs;_T36=_T35.curr;_T37=(short*)_T36;_T38=i;_T39=_T37[_T38];
symbol=(int)_T39;_T3A=Cyc_shiftset;_T3B=symbol / 32;_T3C=_check_fat_subscript(_T3A,sizeof(unsigned),_T3B);_T3D=(unsigned*)_T3C;_T3E=symbol % 32;_T3F=1 << _T3E;_T40=(unsigned)_T3F;
*_T3D=*_T3D | _T40;_TLD9:
# 565
 i=i + 1;goto _TLDC;_TLDB: goto _TLD8;_TLD7: _TLD8: _T41=Cyc_lookaheads;_T42=state;_T43=_check_fat_subscript(_T41,sizeof(short),_T42);_T44=(short*)_T43;_T45=*_T44;
# 573
m=(int)_T45;_T46=Cyc_lookaheads;_T47=state + 1;_T48=_check_fat_subscript(_T46,sizeof(short),_T47);_T49=(short*)_T48;_T4A=*_T49;
n=(int)_T4A;_T4B=n - m;
# 576
if(_T4B!=1)goto _TLE0;_T4C=nodefault;if(_T4C)goto _TLE0;else{goto _TLE2;}
# 578
_TLE2: _T4D=Cyc_LAruleno;_T4E=m;_T4F=_check_fat_subscript(_T4D,sizeof(short),_T4E);_T50=(short*)_T4F;_T51=*_T50;default_rule=(int)_T51;_T52=Cyc_LA;_T53=m * Cyc_tokensetsize;
# 580
fp1=_fat_ptr_plus(_T52,sizeof(unsigned),_T53);
fp2=Cyc_shiftset;
fp3=Cyc_lookaheadset;_T54=Cyc_lookaheadset;_T55=Cyc_tokensetsize;
fp4=_fat_ptr_plus(_T54,sizeof(unsigned),_T55);
# 585
_TLE3: _T56=fp3;_T57=_T56.curr;_T58=(unsigned*)_T57;_T59=fp4;_T5A=_T59.curr;_T5B=(unsigned*)_T5A;if(_T58 < _T5B)goto _TLE4;else{goto _TLE5;}
_TLE4: _T5C=& fp3;_T5D=_fat_ptr_inplace_plus_post(_T5C,sizeof(unsigned),1);_T5E=_check_fat_subscript(_T5D,sizeof(unsigned),0U);_T5F=(unsigned*)_T5E;_T60=& fp1;_T61=_fat_ptr_inplace_plus_post(_T60,sizeof(unsigned),1);_T62=_check_fat_subscript(_T61,sizeof(unsigned),0U);_T63=(unsigned*)_T62;_T64=*_T63;_T65=& fp2;_T66=_fat_ptr_inplace_plus_post(_T65,sizeof(unsigned),1);_T67=_check_fat_subscript(_T66,sizeof(unsigned),0U);_T68=(unsigned*)_T67;_T69=*_T68;*_T5F=_T64 & _T69;goto _TLE3;_TLE5:
# 588
 mask=1U;
fp3=Cyc_lookaheadset;
# 591
i=0;_TLE9: if(i < Cyc_ntokens)goto _TLE7;else{goto _TLE8;}
# 593
_TLE7: _T6A=mask;_T6B=fp3;_T6C=_check_fat_subscript(_T6B,sizeof(unsigned),0U);_T6D=(unsigned*)_T6C;_T6E=*_T6D;_T6F=_T6A & _T6E;_T70=(int)_T6F;if(!_T70)goto _TLEA;{struct Cyc_String_pa_PrintArg_struct _T167;_T167.tag=0;_T72=Cyc_tags;_T73=i;_T74=_check_fat_subscript(_T72,sizeof(struct _fat_ptr),_T73);_T75=(struct _fat_ptr*)_T74;_T76=*_T75;
# 596
_T167.f1=_T76;_T71=_T167;}{struct Cyc_String_pa_PrintArg_struct _T167=_T71;{struct Cyc_Int_pa_PrintArg_struct _T168;_T168.tag=1;_T78=default_rule;_T168.f1=(unsigned long)_T78;_T77=_T168;}{struct Cyc_Int_pa_PrintArg_struct _T168=_T77;{struct Cyc_String_pa_PrintArg_struct _T169;_T169.tag=0;_T7A=Cyc_tags;_T7B=Cyc_rlhs;_T7C=default_rule;_T7D=_check_fat_subscript(_T7B,sizeof(short),_T7C);_T7E=(short*)_T7D;_T7F=*_T7E;_T80=(int)_T7F;_T81=_check_fat_subscript(_T7A,sizeof(struct _fat_ptr),_T80);_T82=(struct _fat_ptr*)_T81;_T83=*_T82;_T169.f1=_T83;_T79=_T169;}{struct Cyc_String_pa_PrintArg_struct _T169=_T79;void*_T16A[3];_T16A[0]=& _T167;_T16A[1]=& _T168;_T16A[2]=& _T169;_T84=
# 595
_check_null(Cyc_foutput);_T85=_tag_fat("    %s\t[reduce using rule %d (%s)]\n",sizeof(char),36U);_T86=_tag_fat(_T16A,sizeof(void*),3);Cyc_fprintf(_T84,_T85,_T86);}}}goto _TLEB;_TLEA: _TLEB:
# 598
 mask=mask << 1U;
if(mask!=0U)goto _TLEC;
# 601
mask=1U;_T87=& fp3;
_fat_ptr_inplace_plus(_T87,sizeof(unsigned),1);goto _TLED;_TLEC: _TLED:
# 591
 i=i + 1;goto _TLE9;_TLE8:{struct Cyc_Int_pa_PrintArg_struct _T167;_T167.tag=1;_T89=default_rule;
# 607
_T167.f1=(unsigned long)_T89;_T88=_T167;}{struct Cyc_Int_pa_PrintArg_struct _T167=_T88;{struct Cyc_String_pa_PrintArg_struct _T168;_T168.tag=0;_T8B=Cyc_tags;_T8C=Cyc_rlhs;_T8D=default_rule;_T8E=_check_fat_subscript(_T8C,sizeof(short),_T8D);_T8F=(short*)_T8E;_T90=*_T8F;_T91=(int)_T90;_T92=_check_fat_subscript(_T8B,sizeof(struct _fat_ptr),_T91);_T93=(struct _fat_ptr*)_T92;_T94=*_T93;_T168.f1=_T94;_T8A=_T168;}{struct Cyc_String_pa_PrintArg_struct _T168=_T8A;void*_T169[2];_T169[0]=& _T167;_T169[1]=& _T168;_T95=
# 606
_check_null(Cyc_foutput);_T96=_tag_fat("    $default\treduce using rule %d (%s)\n\n",sizeof(char),41U);_T97=_tag_fat(_T169,sizeof(void*),2);Cyc_fprintf(_T95,_T96,_T97);}}goto _TLE1;
# 609
_TLE0: _T98=n - m;if(_T98 < 1)goto _TLEE;
# 611
cmax=0;
default_LA=- 1;_T99=Cyc_lookaheadset;_T9A=Cyc_tokensetsize;
fp4=_fat_ptr_plus(_T99,sizeof(unsigned),_T9A);_T9B=nodefault;
# 615
if(_T9B)goto _TLF0;else{goto _TLF2;}
_TLF2: i=m;_TLF6: if(i < n)goto _TLF4;else{goto _TLF5;}
# 618
_TLF4: _T9C=Cyc_LA;_T9D=i * Cyc_tokensetsize;fp1=_fat_ptr_plus(_T9C,sizeof(unsigned),_T9D);
fp2=Cyc_shiftset;
fp3=Cyc_lookaheadset;
# 622
_TLF7: _T9E=fp3;_T9F=_T9E.curr;_TA0=(unsigned*)_T9F;_TA1=fp4;_TA2=_TA1.curr;_TA3=(unsigned*)_TA2;if(_TA0 < _TA3)goto _TLF8;else{goto _TLF9;}
_TLF8: _TA4=& fp3;_TA5=_fat_ptr_inplace_plus_post(_TA4,sizeof(unsigned),1);_TA6=_check_fat_subscript(_TA5,sizeof(unsigned),0U);_TA7=(unsigned*)_TA6;_TA8=& fp1;_TA9=_fat_ptr_inplace_plus_post(_TA8,sizeof(unsigned),1);_TAA=_check_fat_subscript(_TA9,sizeof(unsigned),0U);_TAB=(unsigned*)_TAA;_TAC=*_TAB;_TAD=& fp2;_TAE=_fat_ptr_inplace_plus_post(_TAD,sizeof(unsigned),1);_TAF=_check_fat_subscript(_TAE,sizeof(unsigned),0U);_TB0=(unsigned*)_TAF;_TB1=*_TB0;_TB2=~ _TB1;*_TA7=_TAC & _TB2;goto _TLF7;_TLF9:
# 625
 count=0;
mask=1U;
fp3=Cyc_lookaheadset;
j=0;_TLFD: if(j < Cyc_ntokens)goto _TLFB;else{goto _TLFC;}
# 630
_TLFB: _TB3=mask;_TB4=fp3;_TB5=_check_fat_subscript(_TB4,sizeof(unsigned),0U);_TB6=(unsigned*)_TB5;_TB7=*_TB6;_TB8=_TB3 & _TB7;_TB9=(int)_TB8;if(!_TB9)goto _TLFE;
count=count + 1;goto _TLFF;_TLFE: _TLFF:
# 633
 mask=mask << 1U;
if(mask!=0U)goto _TL100;
# 636
mask=1U;_TBA=& fp3;
_fat_ptr_inplace_plus(_TBA,sizeof(unsigned),1);goto _TL101;_TL100: _TL101:
# 628
 j=j + 1;goto _TLFD;_TLFC:
# 641
 if(count <= cmax)goto _TL102;
# 643
cmax=count;
default_LA=i;_TBB=Cyc_LAruleno;_TBC=i;_TBD=_check_fat_subscript(_TBB,sizeof(short),_TBC);_TBE=(short*)_TBD;_TBF=*_TBE;
default_rule=(int)_TBF;goto _TL103;_TL102: _TL103:
# 648
 fp2=Cyc_shiftset;
fp3=Cyc_lookaheadset;
# 651
_TL104: _TC0=fp3;_TC1=_TC0.curr;_TC2=(unsigned*)_TC1;_TC3=fp4;_TC4=_TC3.curr;_TC5=(unsigned*)_TC4;if(_TC2 < _TC5)goto _TL105;else{goto _TL106;}
_TL105: _TC6=& fp2;_TC7=_fat_ptr_inplace_plus_post(_TC6,sizeof(unsigned),1);_TC8=_check_fat_subscript(_TC7,sizeof(unsigned),0U);_TC9=(unsigned*)_TC8;_TCA=& fp3;_TCB=_fat_ptr_inplace_plus_post(_TCA,sizeof(unsigned),1);_TCC=_check_fat_subscript(_TCB,sizeof(unsigned),0U);_TCD=(unsigned*)_TCC;_TCE=*_TCD;*_TC9=*_TC9 | _TCE;goto _TL104;_TL106:
# 616
 i=i + 1;goto _TLF6;_TLF5: goto _TLF1;_TLF0: _TLF1:
# 655
 i=0;_TL10A: if(i < Cyc_tokensetsize)goto _TL108;else{goto _TL109;}
_TL108: _TCF=Cyc_shiftset;_TD0=i;_TD1=_check_fat_subscript(_TCF,sizeof(unsigned),_TD0);_TD2=(unsigned*)_TD1;*_TD2=0U;
# 655
i=i + 1;goto _TL10A;_TL109: _TD3=shiftp;_TD4=(unsigned)_TD3;
# 658
if(!_TD4)goto _TL10B;_TD5=shiftp;_TD6=_TD5->nshifts;
# 660
k=(int)_TD6;
i=0;_TL110: if(i < k)goto _TL10E;else{goto _TL10F;}
# 663
_TL10E: _TD7=shiftp;_TD8=_TD7->shifts;_TD9=i;_TDA=_check_fat_subscript(_TD8,sizeof(short),_TD9);_TDB=(short*)_TDA;_TDC=*_TDB;_TDD=(int)_TDC;if(_TDD)goto _TL111;else{goto _TL113;}_TL113: goto _TL10D;_TL111: _TDE=Cyc_accessing_symbol;_TDF=shiftp;_TE0=_TDF->shifts;_TE1=_TE0.curr;_TE2=(short*)_TE1;_TE3=i;_TE4=_TE2[_TE3];_TE5=(int)_TE4;_TE6=_check_fat_subscript(_TDE,sizeof(short),_TE5);_TE7=(short*)_TE6;_TE8=*_TE7;
symbol=(int)_TE8;
if(symbol < Cyc_ntokens)goto _TL114;goto _TL10F;_TL114: _TE9=Cyc_shiftset;_TEA=symbol / 32;_TEB=_check_fat_subscript(_TE9,sizeof(unsigned),_TEA);_TEC=(unsigned*)_TEB;_TED=symbol % 32;_TEE=1 << _TED;_TEF=(unsigned)_TEE;
*_TEC=*_TEC | _TEF;_TL10D:
# 661
 i=i + 1;goto _TL110;_TL10F: goto _TL10C;_TL10B: _TL10C:
# 670
 mask=1U;_TF0=Cyc_LA;_TF1=m * Cyc_tokensetsize;
fp1=_fat_ptr_plus(_TF0,sizeof(unsigned),_TF1);
fp2=Cyc_shiftset;
i=0;_TL119: if(i < Cyc_ntokens)goto _TL117;else{goto _TL118;}
# 675
_TL117:{int defaulted=0;_TF2=mask;_TF3=fp2;_TF4=_check_fat_subscript(_TF3,sizeof(unsigned),0U);_TF5=(unsigned*)_TF4;_TF6=*_TF5;_TF7=_TF2 & _TF6;_TF8=(int)_TF7;
# 677
if(!_TF8)goto _TL11A;
count=1;goto _TL11B;
# 680
_TL11A: count=0;_TL11B:
# 682
 fp3=fp1;
j=m;_TL11F: if(j < n)goto _TL11D;else{goto _TL11E;}
# 685
_TL11D: _TF9=mask;_TFA=fp3;_TFB=_check_fat_subscript(_TFA,sizeof(unsigned),0U);_TFC=(unsigned*)_TFB;_TFD=*_TFC;_TFE=_TF9 & _TFD;_TFF=(int)_TFE;if(!_TFF)goto _TL120;
# 687
if(count!=0)goto _TL122;
# 689
if(j==default_LA)goto _TL124;_T100=Cyc_LAruleno;_T101=j;_T102=_check_fat_subscript(_T100,sizeof(short),_T101);_T103=(short*)_T102;_T104=*_T103;
# 691
rule=(int)_T104;{struct Cyc_String_pa_PrintArg_struct _T167;_T167.tag=0;_T106=Cyc_tags;_T107=i;_T108=_check_fat_subscript(_T106,sizeof(struct _fat_ptr),_T107);_T109=(struct _fat_ptr*)_T108;_T10A=*_T109;
# 694
_T167.f1=_T10A;_T105=_T167;}{struct Cyc_String_pa_PrintArg_struct _T167=_T105;{struct Cyc_Int_pa_PrintArg_struct _T168;_T168.tag=1;_T10C=rule;_T168.f1=(unsigned long)_T10C;_T10B=_T168;}{struct Cyc_Int_pa_PrintArg_struct _T168=_T10B;{struct Cyc_String_pa_PrintArg_struct _T169;_T169.tag=0;_T10E=Cyc_tags;_T10F=Cyc_rlhs;_T110=rule;_T111=_check_fat_subscript(_T10F,sizeof(short),_T110);_T112=(short*)_T111;_T113=*_T112;_T114=(int)_T113;_T115=_check_fat_subscript(_T10E,sizeof(struct _fat_ptr),_T114);_T116=(struct _fat_ptr*)_T115;_T117=*_T116;_T169.f1=_T117;_T10D=_T169;}{struct Cyc_String_pa_PrintArg_struct _T169=_T10D;void*_T16A[3];_T16A[0]=& _T167;_T16A[1]=& _T168;_T16A[2]=& _T169;_T118=
# 693
_check_null(Cyc_foutput);_T119=_tag_fat("    %s\treduce using rule %d (%s)\n",sizeof(char),34U);_T11A=_tag_fat(_T16A,sizeof(void*),3);Cyc_fprintf(_T118,_T119,_T11A);}}}goto _TL125;
# 696
_TL124: defaulted=1;_TL125:
# 698
 count=count + 1;goto _TL123;
# 702
_TL122: _T11B=defaulted;if(!_T11B)goto _TL126;_T11C=Cyc_LAruleno;_T11D=default_LA;_T11E=_check_fat_subscript(_T11C,sizeof(short),_T11D);_T11F=(short*)_T11E;_T120=*_T11F;
# 704
rule=(int)_T120;{struct Cyc_String_pa_PrintArg_struct _T167;_T167.tag=0;_T122=Cyc_tags;_T123=i;_T124=_check_fat_subscript(_T122,sizeof(struct _fat_ptr),_T123);_T125=(struct _fat_ptr*)_T124;_T126=*_T125;
# 707
_T167.f1=_T126;_T121=_T167;}{struct Cyc_String_pa_PrintArg_struct _T167=_T121;{struct Cyc_Int_pa_PrintArg_struct _T168;_T168.tag=1;_T128=rule;_T168.f1=(unsigned long)_T128;_T127=_T168;}{struct Cyc_Int_pa_PrintArg_struct _T168=_T127;{struct Cyc_String_pa_PrintArg_struct _T169;_T169.tag=0;_T12A=Cyc_tags;_T12B=Cyc_rlhs;_T12C=rule;_T12D=_check_fat_subscript(_T12B,sizeof(short),_T12C);_T12E=(short*)_T12D;_T12F=*_T12E;_T130=(int)_T12F;_T131=_check_fat_subscript(_T12A,sizeof(struct _fat_ptr),_T130);_T132=(struct _fat_ptr*)_T131;_T133=*_T132;_T169.f1=_T133;_T129=_T169;}{struct Cyc_String_pa_PrintArg_struct _T169=_T129;void*_T16A[3];_T16A[0]=& _T167;_T16A[1]=& _T168;_T16A[2]=& _T169;_T134=
# 706
_check_null(Cyc_foutput);_T135=_tag_fat("    %s\treduce using rule %d (%s)\n",sizeof(char),34U);_T136=_tag_fat(_T16A,sizeof(void*),3);Cyc_fprintf(_T134,_T135,_T136);}}}
# 708
defaulted=0;goto _TL127;_TL126: _TL127: _T137=Cyc_LAruleno;_T138=j;_T139=_check_fat_subscript(_T137,sizeof(short),_T138);_T13A=(short*)_T139;_T13B=*_T13A;
# 710
rule=(int)_T13B;{struct Cyc_String_pa_PrintArg_struct _T167;_T167.tag=0;_T13D=Cyc_tags;_T13E=i;_T13F=_check_fat_subscript(_T13D,sizeof(struct _fat_ptr),_T13E);_T140=(struct _fat_ptr*)_T13F;_T141=*_T140;
# 713
_T167.f1=_T141;_T13C=_T167;}{struct Cyc_String_pa_PrintArg_struct _T167=_T13C;{struct Cyc_Int_pa_PrintArg_struct _T168;_T168.tag=1;_T143=rule;_T168.f1=(unsigned long)_T143;_T142=_T168;}{struct Cyc_Int_pa_PrintArg_struct _T168=_T142;{struct Cyc_String_pa_PrintArg_struct _T169;_T169.tag=0;_T145=Cyc_tags;_T146=Cyc_rlhs;_T147=rule;_T148=_check_fat_subscript(_T146,sizeof(short),_T147);_T149=(short*)_T148;_T14A=*_T149;_T14B=(int)_T14A;_T14C=_check_fat_subscript(_T145,sizeof(struct _fat_ptr),_T14B);_T14D=(struct _fat_ptr*)_T14C;_T14E=*_T14D;_T169.f1=_T14E;_T144=_T169;}{struct Cyc_String_pa_PrintArg_struct _T169=_T144;void*_T16A[3];_T16A[0]=& _T167;_T16A[1]=& _T168;_T16A[2]=& _T169;_T14F=
# 712
_check_null(Cyc_foutput);_T150=_tag_fat("    %s\t[reduce using rule %d (%s)]\n",sizeof(char),36U);_T151=_tag_fat(_T16A,sizeof(void*),3);Cyc_fprintf(_T14F,_T150,_T151);}}}_TL123: goto _TL121;_TL120: _TL121: _T152=& fp3;_T153=Cyc_tokensetsize;
# 717
_fat_ptr_inplace_plus(_T152,sizeof(unsigned),_T153);
# 683
j=j + 1;goto _TL11F;_TL11E:
# 720
 mask=mask << 1U;
if(mask!=0U)goto _TL128;
# 723
mask=1U;_T154=& fp1;
# 726
_fat_ptr_inplace_plus(_T154,sizeof(unsigned),1);_T155=& fp2;
_fat_ptr_inplace_plus(_T155,sizeof(unsigned),1);goto _TL129;_TL128: _TL129:;}
# 673
i=i + 1;goto _TL119;_TL118:
# 731
 if(default_LA < 0)goto _TL12A;{struct Cyc_Int_pa_PrintArg_struct _T167;_T167.tag=1;_T157=default_rule;
# 734
_T167.f1=(unsigned long)_T157;_T156=_T167;}{struct Cyc_Int_pa_PrintArg_struct _T167=_T156;{struct Cyc_String_pa_PrintArg_struct _T168;_T168.tag=0;_T159=Cyc_tags;_T15A=Cyc_rlhs;_T15B=default_rule;_T15C=_check_fat_subscript(_T15A,sizeof(short),_T15B);_T15D=(short*)_T15C;_T15E=*_T15D;_T15F=(int)_T15E;_T160=_check_fat_subscript(_T159,sizeof(struct _fat_ptr),_T15F);_T161=(struct _fat_ptr*)_T160;_T162=*_T161;_T168.f1=_T162;_T158=_T168;}{struct Cyc_String_pa_PrintArg_struct _T168=_T158;void*_T169[2];_T169[0]=& _T167;_T169[1]=& _T168;_T163=
# 733
_check_null(Cyc_foutput);_T164=_tag_fat("    $default\treduce using rule %d (%s)\n",sizeof(char),40U);_T165=_tag_fat(_T169,sizeof(void*),2);Cyc_fprintf(_T163,_T164,_T165);}}goto _TL12B;_TL12A: _TL12B: _T166=
# 737
_check_null(Cyc_foutput);Cyc_putc(10,_T166);goto _TLEF;_TLEE: _TLEF: _TLE1:;}
# 742
void Cyc_finalize_conflicts (void){
# 744
Cyc_conflicts=_tag_fat(0,0,0);
Cyc_shiftset=_tag_fat(0,0,0);
Cyc_lookaheadset=_tag_fat(0,0,0);}
