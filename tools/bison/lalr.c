#include <cyc_include.h>
struct Cyc_shorts_tag{struct Cyc_shorts_tag*next;short value;};struct Cyc_core_tag{struct Cyc_core_tag*next;struct Cyc_core_tag*link;short number;short accessing_symbol;short nitems;struct _fat_ptr items;};struct Cyc_shifts_tag{struct Cyc_shifts_tag*next;short number;short nshifts;struct _fat_ptr shifts;};struct Cyc_reductions_tag{struct Cyc_reductions_tag*next;short number;short nreds;struct _fat_ptr rules;};
# 135 "state.h"
extern int Cyc_nstates;
extern struct Cyc_core_tag*Cyc_first_state;
extern struct Cyc_shifts_tag*Cyc_first_shift;
extern struct Cyc_reductions_tag*Cyc_first_reduction;
# 78 "gram.h"
extern int Cyc_nsyms;
extern int Cyc_ntokens;
extern int Cyc_nvars;
# 82
extern struct _fat_ptr Cyc_ritem;
# 84
extern struct _fat_ptr Cyc_rrhs;
# 125 "gram.h"
extern int Cyc_error_token_number;
# 58 "lalr.cyc"
extern struct _fat_ptr Cyc_derives;
extern struct _fat_ptr Cyc_nullable;
# 62
int Cyc_tokensetsize;
struct _fat_ptr Cyc_lookaheads;
struct _fat_ptr Cyc_LAruleno;
struct _fat_ptr Cyc_LA;
struct _fat_ptr Cyc_accessing_symbol;
struct _fat_ptr Cyc_consistent;
struct _fat_ptr Cyc_state_table;
struct _fat_ptr Cyc_shift_table;
struct _fat_ptr Cyc_reduction_table;
struct _fat_ptr Cyc_goto_map;
struct _fat_ptr Cyc_from_state;
struct _fat_ptr Cyc_to_state;
# 75
struct _fat_ptr Cyc_transpose(struct _fat_ptr,int);
void Cyc_set_state_table (void);
void Cyc_set_accessing_symbol (void);
void Cyc_set_shift_table (void);
void Cyc_set_reduction_table (void);
void Cyc_set_maxrhs (void);
void Cyc_initialize_LA (void);
void Cyc_set_goto_map (void);
void Cyc_initialize_F (void);
void Cyc_build_relations (void);
void Cyc_add_lookback_edge(int,int,int);
void Cyc_compute_FOLLOWS (void);
void Cyc_compute_lookaheads (void);
void Cyc_digraph(struct _fat_ptr);
void Cyc_traverse(int);
# 91
extern void Cyc_toomany(struct _fat_ptr);
extern void Cyc_berror(struct _fat_ptr);
# 94
static int Cyc_infinity;
static int Cyc_maxrhs;
static int Cyc_ngotos;
static struct _fat_ptr Cyc_F;
static struct _fat_ptr Cyc_includes;
static struct _fat_ptr Cyc_lookback;
static struct _fat_ptr Cyc_R;
static struct _fat_ptr Cyc_INDEX;
static struct _fat_ptr Cyc_VERTICES;
static int Cyc_top;
# 106
void Cyc_lalr (void){int _T0;int _T1;_T0=Cyc_ntokens + 32;_T1=_T0 - 1;
# 109
Cyc_tokensetsize=_T1 / 32;
# 111
Cyc_set_state_table();
Cyc_set_accessing_symbol();
Cyc_set_shift_table();
Cyc_set_reduction_table();
Cyc_set_maxrhs();
Cyc_initialize_LA();
Cyc_set_goto_map();
Cyc_initialize_F();
Cyc_build_relations();
Cyc_compute_FOLLOWS();
Cyc_compute_lookaheads();}
# 125
void Cyc_set_state_table (void){struct _fat_ptr _T0;int _T1;struct Cyc_core_tag**_T2;unsigned _T3;unsigned _T4;struct Cyc_core_tag*_T5;unsigned _T6;struct _fat_ptr _T7;struct Cyc_core_tag*_T8;short _T9;int _TA;unsigned char*_TB;struct Cyc_core_tag**_TC;struct Cyc_core_tag*_TD;
# 128
struct Cyc_core_tag*sp;_T1=Cyc_nstates;{unsigned _TE=(unsigned)_T1;_T3=_check_times(_TE,sizeof(struct Cyc_core_tag*));{struct Cyc_core_tag**_TF=_cycalloc(_T3);{unsigned _T10=_TE;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL3: if(_new2p_cyclone < _T10)goto _TL1;else{goto _TL2;}_TL1: _T4=_new2p_cyclone;
# 130
_TF[_T4]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TL3;_TL2:;}_T2=(struct Cyc_core_tag**)_TF;}_T0=_tag_fat(_T2,sizeof(struct Cyc_core_tag*),_TE);}Cyc_state_table=_T0;
# 132
sp=Cyc_first_state;_TL7: _T5=sp;_T6=(unsigned)_T5;if(_T6)goto _TL5;else{goto _TL6;}
_TL5: _T7=Cyc_state_table;_T8=sp;_T9=_T8->number;_TA=(int)_T9;_TB=_check_fat_subscript(_T7,sizeof(struct Cyc_core_tag*),_TA);_TC=(struct Cyc_core_tag**)_TB;*_TC=sp;_TD=sp;
# 132
sp=_TD->next;goto _TL7;_TL6:;}
# 137
void Cyc_set_accessing_symbol (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct Cyc_core_tag*_T5;unsigned _T6;struct _fat_ptr _T7;struct Cyc_core_tag*_T8;short _T9;int _TA;unsigned char*_TB;short*_TC;struct Cyc_core_tag*_TD;struct Cyc_core_tag*_TE;
# 140
struct Cyc_core_tag*sp;_T1=Cyc_nstates;{unsigned _TF=(unsigned)_T1;_T3=_check_times(_TF,sizeof(short));{short*_T10=_cycalloc_atomic(_T3);{unsigned _T11=_TF;unsigned _new2_cyclone;_new2_cyclone=0;_TLB: if(_new2_cyclone < _T11)goto _TL9;else{goto _TLA;}_TL9: _T4=_new2_cyclone;
# 142
_T10[_T4]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLB;_TLA:;}_T2=(short*)_T10;}_T0=_tag_fat(_T2,sizeof(short),_TF);}Cyc_accessing_symbol=_T0;
# 144
sp=Cyc_first_state;_TLF: _T5=sp;_T6=(unsigned)_T5;if(_T6)goto _TLD;else{goto _TLE;}
_TLD: _T7=Cyc_accessing_symbol;_T8=sp;_T9=_T8->number;_TA=(int)_T9;_TB=_check_fat_subscript(_T7,sizeof(short),_TA);_TC=(short*)_TB;_TD=sp;*_TC=_TD->accessing_symbol;_TE=sp;
# 144
sp=_TE->next;goto _TLF;_TLE:;}
# 149
void Cyc_set_shift_table (void){struct _fat_ptr _T0;int _T1;struct Cyc_shifts_tag**_T2;unsigned _T3;unsigned _T4;struct Cyc_shifts_tag*_T5;unsigned _T6;struct _fat_ptr _T7;struct Cyc_shifts_tag*_T8;short _T9;int _TA;unsigned char*_TB;struct Cyc_shifts_tag**_TC;struct Cyc_shifts_tag*_TD;
# 152
struct Cyc_shifts_tag*sp;_T1=Cyc_nstates;{unsigned _TE=(unsigned)_T1;_T3=_check_times(_TE,sizeof(struct Cyc_shifts_tag*));{struct Cyc_shifts_tag**_TF=_cycalloc(_T3);{unsigned _T10=_TE;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL13: if(_new2p_cyclone < _T10)goto _TL11;else{goto _TL12;}_TL11: _T4=_new2p_cyclone;
# 154
_TF[_T4]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TL13;_TL12:;}_T2=(struct Cyc_shifts_tag**)_TF;}_T0=_tag_fat(_T2,sizeof(struct Cyc_shifts_tag*),_TE);}Cyc_shift_table=_T0;
# 156
sp=Cyc_first_shift;_TL17: _T5=sp;_T6=(unsigned)_T5;if(_T6)goto _TL15;else{goto _TL16;}
_TL15: _T7=Cyc_shift_table;_T8=sp;_T9=_T8->number;_TA=(int)_T9;_TB=_check_fat_subscript(_T7,sizeof(struct Cyc_shifts_tag*),_TA);_TC=(struct Cyc_shifts_tag**)_TB;*_TC=sp;_TD=sp;
# 156
sp=_TD->next;goto _TL17;_TL16:;}
# 161
void Cyc_set_reduction_table (void){struct _fat_ptr _T0;int _T1;struct Cyc_reductions_tag**_T2;unsigned _T3;unsigned _T4;struct Cyc_reductions_tag*_T5;unsigned _T6;struct _fat_ptr _T7;struct Cyc_reductions_tag*_T8;short _T9;int _TA;unsigned char*_TB;struct Cyc_reductions_tag**_TC;struct Cyc_reductions_tag*_TD;
# 164
struct Cyc_reductions_tag*rp;_T1=Cyc_nstates;{unsigned _TE=(unsigned)_T1;_T3=_check_times(_TE,sizeof(struct Cyc_reductions_tag*));{struct Cyc_reductions_tag**_TF=_cycalloc(_T3);{unsigned _T10=_TE;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL1B: if(_new2p_cyclone < _T10)goto _TL19;else{goto _TL1A;}_TL19: _T4=_new2p_cyclone;
# 166
_TF[_T4]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TL1B;_TL1A:;}_T2=(struct Cyc_reductions_tag**)_TF;}_T0=_tag_fat(_T2,sizeof(struct Cyc_reductions_tag*),_TE);}Cyc_reduction_table=_T0;
# 168
rp=Cyc_first_reduction;_TL1F: _T5=rp;_T6=(unsigned)_T5;if(_T6)goto _TL1D;else{goto _TL1E;}
_TL1D: _T7=Cyc_reduction_table;_T8=rp;_T9=_T8->number;_TA=(int)_T9;_TB=_check_fat_subscript(_T7,sizeof(struct Cyc_reductions_tag*),_TA);_TC=(struct Cyc_reductions_tag**)_TB;*_TC=rp;_TD=rp;
# 168
rp=_TD->next;goto _TL1F;_TL1E:;}
# 173
void Cyc_set_maxrhs (void){struct _fat_ptr _T0;unsigned char*_T1;short*_T2;short _T3;int _T4;struct _fat_ptr _T5;unsigned char*_T6;short*_T7;short _T8;int _T9;struct _fat_ptr*_TA;
# 176
struct _fat_ptr itemp;
int length;
int max;
# 180
length=0;
max=0;
itemp=Cyc_ritem;_TL23: _T0=itemp;_T1=_check_fat_subscript(_T0,sizeof(short),0U);_T2=(short*)_T1;_T3=*_T2;_T4=(int)_T3;if(_T4)goto _TL21;else{goto _TL22;}
# 184
_TL21: _T5=itemp;_T6=_T5.curr;_T7=(short*)_T6;_T8=*_T7;_T9=(int)_T8;if(_T9 <= 0)goto _TL24;
# 186
length=length + 1;goto _TL25;
# 190
_TL24: if(length <= max)goto _TL26;max=length;goto _TL27;_TL26: _TL27:
 length=0;_TL25: _TA=& itemp;
# 182
_fat_ptr_inplace_plus(_TA,sizeof(short),1);goto _TL23;_TL22:
# 195
 Cyc_maxrhs=max;}
# 199
void Cyc_initialize_LA (void){struct _fat_ptr _T0;int _T1;unsigned _T2;char*_T3;unsigned _T4;unsigned _T5;struct _fat_ptr _T6;int _T7;short*_T8;unsigned _T9;unsigned _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;short*_TE;int _TF;struct _fat_ptr _T10;int _T11;unsigned char*_T12;struct Cyc_reductions_tag**_T13;struct _fat_ptr _T14;int _T15;unsigned char*_T16;struct Cyc_shifts_tag**_T17;struct Cyc_reductions_tag*_T18;unsigned _T19;struct Cyc_reductions_tag*_T1A;short _T1B;int _T1C;struct Cyc_shifts_tag*_T1D;unsigned _T1E;struct _fat_ptr _T1F;struct Cyc_shifts_tag*_T20;struct _fat_ptr _T21;unsigned char*_T22;short*_T23;short _T24;int _T25;unsigned char*_T26;short*_T27;short _T28;int _T29;int _T2A;struct Cyc_reductions_tag*_T2B;short _T2C;int _T2D;struct _fat_ptr _T2E;int _T2F;unsigned char*_T30;char*_T31;unsigned _T32;unsigned char*_T33;char*_T34;struct Cyc_shifts_tag*_T35;unsigned _T36;int _T37;struct Cyc_shifts_tag*_T38;short _T39;int _T3A;struct _fat_ptr _T3B;struct Cyc_shifts_tag*_T3C;struct _fat_ptr _T3D;int _T3E;unsigned char*_T3F;short*_T40;short _T41;int _T42;unsigned char*_T43;short*_T44;short _T45;int _T46;int _T47;struct _fat_ptr _T48;int _T49;unsigned char*_T4A;char*_T4B;unsigned _T4C;unsigned char*_T4D;char*_T4E;struct _fat_ptr _T4F;int _T50;unsigned char*_T51;short*_T52;int _T53;struct _fat_ptr _T54;int _T55;unsigned*_T56;unsigned _T57;unsigned _T58;short*_T59;short*_T5A;unsigned _T5B;unsigned _T5C;struct Cyc_shorts_tag**_T5D;struct Cyc_shorts_tag**_T5E;unsigned _T5F;unsigned _T60;struct _fat_ptr _T61;int _T62;unsigned*_T63;unsigned _T64;unsigned _T65;struct _fat_ptr _T66;int _T67;short*_T68;unsigned _T69;unsigned _T6A;struct _fat_ptr _T6B;int _T6C;struct Cyc_shorts_tag**_T6D;unsigned _T6E;unsigned _T6F;struct _fat_ptr _T70;int _T71;unsigned char*_T72;char*_T73;char _T74;int _T75;struct _fat_ptr _T76;int _T77;unsigned char*_T78;struct Cyc_reductions_tag**_T79;struct Cyc_reductions_tag*_T7A;unsigned _T7B;int _T7C;struct Cyc_reductions_tag*_T7D;short _T7E;int _T7F;struct _fat_ptr*_T80;struct _fat_ptr _T81;unsigned char*_T82;short*_T83;struct Cyc_reductions_tag*_T84;struct _fat_ptr _T85;int _T86;unsigned char*_T87;short*_T88;
# 202
int i;
int j;
int count;
struct Cyc_reductions_tag*rp;
struct Cyc_shifts_tag*sp;
struct _fat_ptr np;_T1=Cyc_nstates + 1;_T2=(unsigned)_T1;{unsigned _T89=_T2 + 1U;_T4=_check_times(_T89,sizeof(char));{char*_T8A=_cycalloc_atomic(_T4);{unsigned _T8B=_T89;unsigned _new2_cyclone;_new2_cyclone=0;_TL2B: if(_new2_cyclone < _T8B)goto _TL29;else{goto _TL2A;}_TL29: _T5=_new2_cyclone;
# 209
_T8A[_T5]='\000';_new2_cyclone=_new2_cyclone + 1;goto _TL2B;_TL2A: _T8A[_T8B]=0;}_T3=(char*)_T8A;}_T0=_tag_fat(_T3,sizeof(char),_T89);}Cyc_consistent=_T0;_T7=Cyc_nstates + 1;{unsigned _T89=(unsigned)_T7;_T9=_check_times(_T89,sizeof(short));{short*_T8A=_cycalloc_atomic(_T9);{unsigned _T8B=_T89;unsigned _new2_cyclone;_new2_cyclone=0;_TL2F: if(_new2_cyclone < _T8B)goto _TL2D;else{goto _TL2E;}_TL2D: _TA=_new2_cyclone;
_T8A[_TA]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL2F;_TL2E:;}_T8=(short*)_T8A;}_T6=_tag_fat(_T8,sizeof(short),_T89);}Cyc_lookaheads=_T6;
# 212
count=0;
i=0;_TL33: if(i < Cyc_nstates)goto _TL31;else{goto _TL32;}
# 215
_TL31:{int k;_TB=Cyc_lookaheads;_TC=i;_TD=_check_fat_subscript(_TB,sizeof(short),_TC);_TE=(short*)_TD;_TF=count;
# 217
*_TE=(short)_TF;_T10=Cyc_reduction_table;_T11=i;_T12=_check_fat_subscript(_T10,sizeof(struct Cyc_reductions_tag*),_T11);_T13=(struct Cyc_reductions_tag**)_T12;
# 219
rp=*_T13;_T14=Cyc_shift_table;_T15=i;_T16=_check_fat_subscript(_T14,sizeof(struct Cyc_shifts_tag*),_T15);_T17=(struct Cyc_shifts_tag**)_T16;
sp=*_T17;_T18=rp;_T19=(unsigned)_T18;
if(!_T19)goto _TL34;_T1A=rp;_T1B=_T1A->nreds;_T1C=(int)_T1B;if(_T1C > 1)goto _TL36;else{goto _TL37;}_TL37: _T1D=sp;_T1E=(unsigned)_T1D;if(_T1E)goto _TL38;else{goto _TL34;}_TL38: _T1F=Cyc_accessing_symbol;_T20=sp;_T21=_T20->shifts;_T22=_check_fat_subscript(_T21,sizeof(short),0);_T23=(short*)_T22;_T24=*_T23;_T25=(int)_T24;_T26=_check_fat_subscript(_T1F,sizeof(short),_T25);_T27=(short*)_T26;_T28=*_T27;_T29=(int)_T28;_T2A=Cyc_ntokens;if(_T29 >= _T2A)goto _TL34;else{goto _TL36;}
# 223
_TL36: _T2B=rp;_T2C=_T2B->nreds;_T2D=(int)_T2C;count=count + _T2D;goto _TL35;
# 225
_TL34: _T2E=Cyc_consistent;_T2F=i;{struct _fat_ptr _T89=_fat_ptr_plus(_T2E,sizeof(char),_T2F);_T30=_check_fat_subscript(_T89,sizeof(char),0U);_T31=(char*)_T30;{char _T8A=*_T31;char _T8B='\001';_T32=_get_fat_size(_T89,sizeof(char));if(_T32!=1U)goto _TL39;if(_T8A!=0)goto _TL39;if(_T8B==0)goto _TL39;_throw_arraybounds();goto _TL3A;_TL39: _TL3A: _T33=_T89.curr;_T34=(char*)_T33;*_T34=_T8B;}}_TL35: _T35=sp;_T36=(unsigned)_T35;
# 227
if(!_T36)goto _TL3B;
k=0;_TL40: _T37=k;_T38=sp;_T39=_T38->nshifts;_T3A=(int)_T39;if(_T37 < _T3A)goto _TL3E;else{goto _TL3F;}
# 230
_TL3E: _T3B=Cyc_accessing_symbol;_T3C=sp;_T3D=_T3C->shifts;_T3E=k;_T3F=_check_fat_subscript(_T3D,sizeof(short),_T3E);_T40=(short*)_T3F;_T41=*_T40;_T42=(int)_T41;_T43=_check_fat_subscript(_T3B,sizeof(short),_T42);_T44=(short*)_T43;_T45=*_T44;_T46=(int)_T45;_T47=Cyc_error_token_number;if(_T46!=_T47)goto _TL41;_T48=Cyc_consistent;_T49=i;{struct _fat_ptr _T89=_fat_ptr_plus(_T48,sizeof(char),_T49);_T4A=_check_fat_subscript(_T89,sizeof(char),0U);_T4B=(char*)_T4A;{char _T8A=*_T4B;char _T8B='\000';_T4C=_get_fat_size(_T89,sizeof(char));if(_T4C!=1U)goto _TL43;if(_T8A!=0)goto _TL43;if(_T8B==0)goto _TL43;_throw_arraybounds();goto _TL44;_TL43: _TL44: _T4D=_T89.curr;_T4E=(char*)_T4D;*_T4E=_T8B;}}goto _TL3F;_TL41:
# 228
 k=k + 1;goto _TL40;_TL3F: goto _TL3C;_TL3B: _TL3C:;}
# 213
i=i + 1;goto _TL33;_TL32: _T4F=Cyc_lookaheads;_T50=Cyc_nstates;_T51=_check_fat_subscript(_T4F,sizeof(short),_T50);_T52=(short*)_T51;_T53=count;
# 238
*_T52=(short)_T53;
# 240
if(count!=0)goto _TL45;_T55=1 * Cyc_tokensetsize;{unsigned _T89=(unsigned)_T55;_T57=_check_times(_T89,sizeof(unsigned));{unsigned*_T8A=_cycalloc_atomic(_T57);{unsigned _T8B=_T89;unsigned _new2_cyclone;_new2_cyclone=0;_TL4A: if(_new2_cyclone < _T8B)goto _TL48;else{goto _TL49;}_TL48: _T58=_new2_cyclone;
# 242
_T8A[_T58]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL4A;_TL49:;}_T56=(unsigned*)_T8A;}_T54=_tag_fat(_T56,sizeof(unsigned),_T89);}Cyc_LA=_T54;{unsigned _T89=1U;_T5B=_check_times(_T89,sizeof(short));{short*_T8A=_cycalloc_atomic(_T5B);{unsigned _T8B=_T89;unsigned _new2_cyclone;_new2_cyclone=0;_TL4E: if(_new2_cyclone < _T8B)goto _TL4C;else{goto _TL4D;}_TL4C: _T5C=_new2_cyclone;
_T8A[_T5C]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL4E;_TL4D:;}_T5A=(short*)_T8A;}_T59=_T5A;}Cyc_LAruleno=_tag_fat(_T59,sizeof(short),1U);{unsigned _T89=1U;_T5F=_check_times(_T89,sizeof(struct Cyc_shorts_tag*));{struct Cyc_shorts_tag**_T8A=_cycalloc(_T5F);{unsigned _T8B=_T89;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL52: if(_new2p_cyclone < _T8B)goto _TL50;else{goto _TL51;}_TL50: _T60=_new2p_cyclone;
_T8A[_T60]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TL52;_TL51:;}_T5E=(struct Cyc_shorts_tag**)_T8A;}_T5D=_T5E;}Cyc_lookback=_tag_fat(_T5D,sizeof(struct Cyc_shorts_tag*),1U);goto _TL46;
# 248
_TL45: _T62=count * Cyc_tokensetsize;{unsigned _T89=(unsigned)_T62;_T64=_check_times(_T89,sizeof(unsigned));{unsigned*_T8A=_cycalloc_atomic(_T64);{unsigned _T8B=_T89;unsigned _new2_cyclone;_new2_cyclone=0;_TL56: if(_new2_cyclone < _T8B)goto _TL54;else{goto _TL55;}_TL54: _T65=_new2_cyclone;_T8A[_T65]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TL56;_TL55:;}_T63=(unsigned*)_T8A;}_T61=_tag_fat(_T63,sizeof(unsigned),_T89);}Cyc_LA=_T61;_T67=count;{unsigned _T89=(unsigned)_T67;_T69=_check_times(_T89,sizeof(short));{short*_T8A=_cycalloc_atomic(_T69);{unsigned _T8B=_T89;unsigned _new2_cyclone;_new2_cyclone=0;_TL5A: if(_new2_cyclone < _T8B)goto _TL58;else{goto _TL59;}_TL58: _T6A=_new2_cyclone;
_T8A[_T6A]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL5A;_TL59:;}_T68=(short*)_T8A;}_T66=_tag_fat(_T68,sizeof(short),_T89);}Cyc_LAruleno=_T66;_T6C=count;{unsigned _T89=(unsigned)_T6C;_T6E=_check_times(_T89,sizeof(struct Cyc_shorts_tag*));{struct Cyc_shorts_tag**_T8A=_cycalloc(_T6E);{unsigned _T8B=_T89;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL5E: if(_new2p_cyclone < _T8B)goto _TL5C;else{goto _TL5D;}_TL5C: _T6F=_new2p_cyclone;
_T8A[_T6F]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TL5E;_TL5D:;}_T6D=(struct Cyc_shorts_tag**)_T8A;}_T6B=_tag_fat(_T6D,sizeof(struct Cyc_shorts_tag*),_T89);}Cyc_lookback=_T6B;_TL46:
# 253
 np=Cyc_LAruleno;
i=0;_TL62: if(i < Cyc_nstates)goto _TL60;else{goto _TL61;}
# 256
_TL60: _T70=Cyc_consistent;_T71=i;_T72=_check_fat_subscript(_T70,sizeof(char),_T71);_T73=(char*)_T72;_T74=*_T73;_T75=(int)_T74;if(_T75)goto _TL63;else{goto _TL65;}
# 258
_TL65: _T76=Cyc_reduction_table;_T77=i;_T78=_check_fat_subscript(_T76,sizeof(struct Cyc_reductions_tag*),_T77);_T79=(struct Cyc_reductions_tag**)_T78;rp=*_T79;_T7A=rp;_T7B=(unsigned)_T7A;
if(!_T7B)goto _TL66;
j=0;_TL6B: _T7C=j;_T7D=rp;_T7E=_T7D->nreds;_T7F=(int)_T7E;if(_T7C < _T7F)goto _TL69;else{goto _TL6A;}
_TL69: _T80=& np;_T81=_fat_ptr_inplace_plus_post(_T80,sizeof(short),1);_T82=_check_fat_subscript(_T81,sizeof(short),0U);_T83=(short*)_T82;_T84=rp;_T85=_T84->rules;_T86=j;_T87=_check_fat_subscript(_T85,sizeof(short),_T86);_T88=(short*)_T87;*_T83=*_T88;
# 260
j=j + 1;goto _TL6B;_TL6A: goto _TL67;_TL66: _TL67: goto _TL64;_TL63: _TL64:
# 254
 i=i + 1;goto _TL62;_TL61:;}
# 267
void Cyc_set_goto_map (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;struct _fat_ptr _T7;int _T8;short*_T9;unsigned _TA;unsigned _TB;struct _fat_ptr _TC;int _TD;struct Cyc_shifts_tag*_TE;unsigned _TF;struct Cyc_shifts_tag*_T10;short _T11;int _T12;struct _fat_ptr _T13;struct Cyc_shifts_tag*_T14;struct _fat_ptr _T15;int _T16;unsigned char*_T17;short*_T18;short _T19;int _T1A;unsigned char*_T1B;short*_T1C;short _T1D;struct _fat_ptr _T1E;struct _fat_ptr _T1F;int _T20;unsigned char*_T21;short*_T22;struct Cyc_shifts_tag*_T23;struct _fat_ptr _T24;int _T25;unsigned char*_T26;short*_T27;int _T28;struct _fat_ptr _T29;int _T2A;unsigned char*_T2B;short*_T2C;short _T2D;int _T2E;struct _fat_ptr _T2F;int _T30;unsigned char*_T31;short*_T32;struct _fat_ptr _T33;int _T34;unsigned char*_T35;short*_T36;struct _fat_ptr _T37;int _T38;unsigned char*_T39;short*_T3A;int _T3B;struct _fat_ptr _T3C;int _T3D;unsigned char*_T3E;short*_T3F;int _T40;struct _fat_ptr _T41;int _T42;short*_T43;unsigned _T44;unsigned _T45;struct _fat_ptr _T46;int _T47;short*_T48;unsigned _T49;unsigned _T4A;struct Cyc_shifts_tag*_T4B;unsigned _T4C;struct Cyc_shifts_tag*_T4D;short _T4E;struct Cyc_shifts_tag*_T4F;short _T50;int _T51;struct Cyc_shifts_tag*_T52;struct _fat_ptr _T53;int _T54;unsigned char*_T55;short*_T56;short _T57;struct _fat_ptr _T58;int _T59;unsigned char*_T5A;short*_T5B;short _T5C;struct _fat_ptr _T5D;int _T5E;unsigned char*_T5F;short*_T60;short _T61;short _T62;struct _fat_ptr _T63;int _T64;unsigned char*_T65;short*_T66;int _T67;struct _fat_ptr _T68;int _T69;unsigned char*_T6A;short*_T6B;int _T6C;struct Cyc_shifts_tag*_T6D;struct _fat_ptr _T6E;int _T6F;
# 270
struct Cyc_shifts_tag*sp;
int i;
int symbol;
int k;
struct _fat_ptr temp_map;
int state2;
int state1;_T1=Cyc_nvars + 1;{unsigned _T70=(unsigned)_T1;_T3=_check_times(_T70,sizeof(short));{short*_T71=_cycalloc_atomic(_T3);{unsigned _T72=_T70;unsigned _new2_cyclone;_new2_cyclone=0;_TL6F: if(_new2_cyclone < _T72)goto _TL6D;else{goto _TL6E;}_TL6D: _T4=_new2_cyclone;
# 278
_T71[_T4]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL6F;_TL6E:;}_T2=(short*)_T71;}_T0=_tag_fat(_T2,sizeof(short),_T70);}_T5=_T0;_T6=- Cyc_ntokens;Cyc_goto_map=_fat_ptr_plus(_T5,sizeof(short),_T6);_T8=Cyc_nvars + 1;{unsigned _T70=(unsigned)_T8;_TA=_check_times(_T70,sizeof(short));{short*_T71=_cycalloc_atomic(_TA);{unsigned _T72=_T70;unsigned _new2_cyclone;_new2_cyclone=0;_TL73: if(_new2_cyclone < _T72)goto _TL71;else{goto _TL72;}_TL71: _TB=_new2_cyclone;
_T71[_TB]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL73;_TL72:;}_T9=(short*)_T71;}_T7=_tag_fat(_T9,sizeof(short),_T70);}_TC=_T7;_TD=- Cyc_ntokens;temp_map=_fat_ptr_plus(_TC,sizeof(short),_TD);
# 281
Cyc_ngotos=0;
sp=Cyc_first_shift;_TL77: _TE=sp;_TF=(unsigned)_TE;if(_TF)goto _TL75;else{goto _TL76;}
# 284
_TL75: _T10=sp;_T11=_T10->nshifts;_T12=(int)_T11;i=_T12 - 1;_TL7B: if(i >= 0)goto _TL79;else{goto _TL7A;}
# 286
_TL79: _T13=Cyc_accessing_symbol;_T14=sp;_T15=_T14->shifts;_T16=i;_T17=_check_fat_subscript(_T15,sizeof(short),_T16);_T18=(short*)_T17;_T19=*_T18;_T1A=(int)_T19;_T1B=_check_fat_subscript(_T13,sizeof(short),_T1A);_T1C=(short*)_T1B;_T1D=*_T1C;symbol=(int)_T1D;
# 288
if(symbol >= Cyc_ntokens)goto _TL7C;goto _TL7A;_TL7C:
# 290
 if(Cyc_ngotos!=32767)goto _TL7E;_T1E=
_tag_fat("gotos",sizeof(char),6U);Cyc_toomany(_T1E);goto _TL7F;_TL7E: _TL7F:
# 293
 Cyc_ngotos=Cyc_ngotos + 1;_T1F=Cyc_goto_map;_T20=symbol;_T21=_check_fat_subscript(_T1F,sizeof(short),_T20);_T22=(short*)_T21;
*_T22=*_T22 + 1;
# 284
i=i + -1;goto _TL7B;_TL7A: _T23=sp;
# 282
sp=_T23->next;goto _TL77;_TL76:
# 298
 k=0;
i=Cyc_ntokens;_TL83: if(i < Cyc_nsyms)goto _TL81;else{goto _TL82;}
# 301
_TL81: _T24=temp_map;_T25=i;_T26=_check_fat_subscript(_T24,sizeof(short),_T25);_T27=(short*)_T26;_T28=k;*_T27=(short)_T28;_T29=Cyc_goto_map;_T2A=i;_T2B=_check_fat_subscript(_T29,sizeof(short),_T2A);_T2C=(short*)_T2B;_T2D=*_T2C;_T2E=(int)_T2D;
k=k + _T2E;
# 299
i=i + 1;goto _TL83;_TL82:
# 305
 i=Cyc_ntokens;_TL87: if(i < Cyc_nsyms)goto _TL85;else{goto _TL86;}
_TL85: _T2F=Cyc_goto_map;_T30=i;_T31=_check_fat_subscript(_T2F,sizeof(short),_T30);_T32=(short*)_T31;_T33=temp_map;_T34=i;_T35=_check_fat_subscript(_T33,sizeof(short),_T34);_T36=(short*)_T35;*_T32=*_T36;
# 305
i=i + 1;goto _TL87;_TL86: _T37=Cyc_goto_map;_T38=Cyc_nsyms;_T39=_check_fat_subscript(_T37,sizeof(short),_T38);_T3A=(short*)_T39;_T3B=Cyc_ngotos;
# 308
*_T3A=(short)_T3B;_T3C=temp_map;_T3D=Cyc_nsyms;_T3E=_check_fat_subscript(_T3C,sizeof(short),_T3D);_T3F=(short*)_T3E;_T40=Cyc_ngotos;
*_T3F=(short)_T40;_T42=Cyc_ngotos;{unsigned _T70=(unsigned)_T42;_T44=_check_times(_T70,sizeof(short));{short*_T71=_cycalloc_atomic(_T44);{unsigned _T72=_T70;unsigned _new2_cyclone;_new2_cyclone=0;_TL8B: if(_new2_cyclone < _T72)goto _TL89;else{goto _TL8A;}_TL89: _T45=_new2_cyclone;
# 311
_T71[_T45]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL8B;_TL8A:;}_T43=(short*)_T71;}_T41=_tag_fat(_T43,sizeof(short),_T70);}Cyc_from_state=_T41;_T47=Cyc_ngotos;{unsigned _T70=(unsigned)_T47;_T49=_check_times(_T70,sizeof(short));{short*_T71=_cycalloc_atomic(_T49);{unsigned _T72=_T70;unsigned _new2_cyclone;_new2_cyclone=0;_TL8F: if(_new2_cyclone < _T72)goto _TL8D;else{goto _TL8E;}_TL8D: _T4A=_new2_cyclone;
_T71[_T4A]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL8F;_TL8E:;}_T48=(short*)_T71;}_T46=_tag_fat(_T48,sizeof(short),_T70);}Cyc_to_state=_T46;
# 314
sp=Cyc_first_shift;_TL93: _T4B=sp;_T4C=(unsigned)_T4B;if(_T4C)goto _TL91;else{goto _TL92;}
# 316
_TL91: _T4D=sp;_T4E=_T4D->number;state1=(int)_T4E;_T4F=sp;_T50=_T4F->nshifts;_T51=(int)_T50;
i=_T51 - 1;_TL97: if(i >= 0)goto _TL95;else{goto _TL96;}
# 319
_TL95: _T52=sp;_T53=_T52->shifts;_T54=i;_T55=_check_fat_subscript(_T53,sizeof(short),_T54);_T56=(short*)_T55;_T57=*_T56;state2=(int)_T57;_T58=Cyc_accessing_symbol;_T59=state2;_T5A=_check_fat_subscript(_T58,sizeof(short),_T59);_T5B=(short*)_T5A;_T5C=*_T5B;
symbol=(int)_T5C;
# 322
if(symbol >= Cyc_ntokens)goto _TL98;goto _TL96;_TL98: _T5D=temp_map;_T5E=symbol;_T5F=_check_fat_subscript(_T5D,sizeof(short),_T5E);_T60=(short*)_T5F;_T61=*_T60;
# 324
*_T60=_T61 + 1;_T62=_T61;k=(int)_T62;_T63=Cyc_from_state;_T64=k;_T65=_check_fat_subscript(_T63,sizeof(short),_T64);_T66=(short*)_T65;_T67=state1;
*_T66=(short)_T67;_T68=Cyc_to_state;_T69=k;_T6A=_check_fat_subscript(_T68,sizeof(short),_T69);_T6B=(short*)_T6A;_T6C=state2;
*_T6B=(short)_T6C;
# 317
i=i + -1;goto _TL97;_TL96: _T6D=sp;
# 314
sp=_T6D->next;goto _TL93;_TL92: _T6E=temp_map;_T6F=Cyc_ntokens;
# 330
temp_map=_fat_ptr_plus(_T6E,sizeof(short),_T6F);
temp_map=_tag_fat(0,0,0);}
# 338
int Cyc_map_goto(int state,int symbol){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;short _T9;int _TA;int _TB;struct _fat_ptr _TC;int _TD;unsigned char*_TE;short*_TF;short _T10;int _T11;struct _fat_ptr _T12;
# 340
int high;
int low;
int middle;
int s;_T0=Cyc_goto_map;_T1=symbol;_T2=_check_fat_subscript(_T0,sizeof(short),_T1);_T3=(short*)_T2;_T4=*_T3;
# 345
low=(int)_T4;_T5=Cyc_goto_map;_T6=symbol + 1;_T7=_check_fat_subscript(_T5,sizeof(short),_T6);_T8=(short*)_T7;_T9=*_T8;_TA=(int)_T9;
high=_TA - 1;
# 348
_TL9A: if(low <= high)goto _TL9B;else{goto _TL9C;}
# 350
_TL9B: _TB=low + high;middle=_TB / 2;_TC=Cyc_from_state;_TD=middle;_TE=_check_fat_subscript(_TC,sizeof(short),_TD);_TF=(short*)_TE;_T10=*_TF;
s=(int)_T10;
if(s!=state)goto _TL9D;_T11=middle;
return _T11;
_TL9D: if(s >= state)goto _TL9F;
low=middle + 1;goto _TLA0;
# 357
_TL9F: high=middle - 1;_TLA0: goto _TL9A;_TL9C: _T12=
# 360
_tag_fat("map_goto",sizeof(char),9U);Cyc_berror(_T12);
# 362
return 0;}
# 366
void Cyc_initialize_F (void){struct _fat_ptr _T0;int _T1;unsigned*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;struct _fat_ptr*_T7;unsigned _T8;unsigned _T9;struct _fat_ptr _TA;struct _fat_ptr _TB;int _TC;short*_TD;unsigned _TE;unsigned _TF;struct _fat_ptr _T10;int _T11;unsigned char*_T12;short*_T13;short _T14;struct _fat_ptr _T15;int _T16;unsigned char*_T17;struct Cyc_shifts_tag**_T18;struct Cyc_shifts_tag*_T19;unsigned _T1A;struct Cyc_shifts_tag*_T1B;short _T1C;struct _fat_ptr _T1D;struct Cyc_shifts_tag*_T1E;struct _fat_ptr _T1F;int _T20;unsigned char*_T21;short*_T22;short _T23;int _T24;unsigned char*_T25;short*_T26;short _T27;struct _fat_ptr _T28;int _T29;unsigned char*_T2A;unsigned*_T2B;int _T2C;int _T2D;unsigned _T2E;struct _fat_ptr _T2F;struct Cyc_shifts_tag*_T30;struct _fat_ptr _T31;int _T32;unsigned char*_T33;short*_T34;short _T35;int _T36;unsigned char*_T37;short*_T38;short _T39;struct _fat_ptr _T3A;int _T3B;unsigned char*_T3C;char*_T3D;char _T3E;int _T3F;struct _fat_ptr _T40;int _T41;int _T42;unsigned char*_T43;short*_T44;int _T45;int _T46;struct _fat_ptr _T47;int _T48;short*_T49;unsigned _T4A;unsigned _T4B;struct _fat_ptr _T4C;int _T4D;unsigned char*_T4E;struct _fat_ptr*_T4F;struct _fat_ptr _T50;int _T51;unsigned char*_T52;short*_T53;struct _fat_ptr _T54;int _T55;unsigned char*_T56;short*_T57;struct _fat_ptr _T58;int _T59;unsigned char*_T5A;short*_T5B;struct _fat_ptr*_T5C;int _T5D;struct _fat_ptr _T5E;int _T5F;unsigned char*_T60;struct _fat_ptr*_T61;struct _fat_ptr _T62;unsigned char*_T63;unsigned _T64;struct _fat_ptr _T65;unsigned char*_T66;struct _fat_ptr*_T67;int _T68;
# 369
int i;
int j;
int k;
struct Cyc_shifts_tag*sp;
struct _fat_ptr edge;
struct _fat_ptr rowp;
struct _fat_ptr rp;
struct _fat_ptr reads;
int nedges;
int stateno;
int symbol;
int nwords;
# 382
nwords=Cyc_ngotos * Cyc_tokensetsize;_T1=nwords;{unsigned _T69=(unsigned)_T1;_T3=_check_times(_T69,sizeof(unsigned));{unsigned*_T6A=_cycalloc_atomic(_T3);{unsigned _T6B=_T69;unsigned _new2_cyclone;_new2_cyclone=0;_TLA4: if(_new2_cyclone < _T6B)goto _TLA2;else{goto _TLA3;}_TLA2: _T4=_new2_cyclone;
_T6A[_T4]=0U;_new2_cyclone=_new2_cyclone + 1;goto _TLA4;_TLA3:;}_T2=(unsigned*)_T6A;}_T0=_tag_fat(_T2,sizeof(unsigned),_T69);}Cyc_F=_T0;_T6=Cyc_ngotos;{unsigned _T69=(unsigned)_T6;_T8=_check_times(_T69,sizeof(struct _fat_ptr));{struct _fat_ptr*_T6A=_cycalloc(_T8);{unsigned _T6B=_T69;unsigned _new2p_cyclone;_new2p_cyclone=0;_TLA8: if(_new2p_cyclone < _T6B)goto _TLA6;else{goto _TLA7;}_TLA6: _T9=_new2p_cyclone;_TA=
# 385
_tag_fat(0,0,0);_T6A[_T9]=_TA;_new2p_cyclone=_new2p_cyclone + 1;goto _TLA8;_TLA7:;}_T7=(struct _fat_ptr*)_T6A;}_T5=_tag_fat(_T7,sizeof(struct _fat_ptr),_T69);}reads=_T5;_TC=Cyc_ngotos + 1;{unsigned _T69=(unsigned)_TC;_TE=_check_times(_T69,sizeof(short));{short*_T6A=_cycalloc_atomic(_TE);{unsigned _T6B=_T69;unsigned _new2_cyclone;_new2_cyclone=0;_TLAC: if(_new2_cyclone < _T6B)goto _TLAA;else{goto _TLAB;}_TLAA: _TF=_new2_cyclone;
_T6A[_TF]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLAC;_TLAB:;}_TD=(short*)_T6A;}_TB=_tag_fat(_TD,sizeof(short),_T69);}edge=_TB;
nedges=0;
# 389
rowp=Cyc_F;
i=0;_TLB0: if(i < Cyc_ngotos)goto _TLAE;else{goto _TLAF;}
# 392
_TLAE: _T10=Cyc_to_state;_T11=i;_T12=_check_fat_subscript(_T10,sizeof(short),_T11);_T13=(short*)_T12;_T14=*_T13;stateno=(int)_T14;_T15=Cyc_shift_table;_T16=stateno;_T17=_check_fat_subscript(_T15,sizeof(struct Cyc_shifts_tag*),_T16);_T18=(struct Cyc_shifts_tag**)_T17;
sp=*_T18;_T19=sp;_T1A=(unsigned)_T19;
# 395
if(!_T1A)goto _TLB1;_T1B=sp;_T1C=_T1B->nshifts;
# 397
k=(int)_T1C;
# 399
j=0;_TLB6: if(j < k)goto _TLB4;else{goto _TLB5;}
# 401
_TLB4: _T1D=Cyc_accessing_symbol;_T1E=sp;_T1F=_T1E->shifts;_T20=j;_T21=_check_fat_subscript(_T1F,sizeof(short),_T20);_T22=(short*)_T21;_T23=*_T22;_T24=(int)_T23;_T25=_check_fat_subscript(_T1D,sizeof(short),_T24);_T26=(short*)_T25;_T27=*_T26;symbol=(int)_T27;
if(symbol < Cyc_ntokens)goto _TLB7;goto _TLB5;_TLB7: _T28=rowp;_T29=symbol / 32;_T2A=_check_fat_subscript(_T28,sizeof(unsigned),_T29);_T2B=(unsigned*)_T2A;_T2C=symbol % 32;_T2D=1 << _T2C;_T2E=(unsigned)_T2D;
# 404
*_T2B=*_T2B | _T2E;
# 399
j=j + 1;goto _TLB6;_TLB5:
# 407
 _TLBC: if(j < k)goto _TLBA;else{goto _TLBB;}
# 409
_TLBA: _T2F=Cyc_accessing_symbol;_T30=sp;_T31=_T30->shifts;_T32=j;_T33=_check_fat_subscript(_T31,sizeof(short),_T32);_T34=(short*)_T33;_T35=*_T34;_T36=(int)_T35;_T37=_check_fat_subscript(_T2F,sizeof(short),_T36);_T38=(short*)_T37;_T39=*_T38;symbol=(int)_T39;_T3A=Cyc_nullable;_T3B=symbol;_T3C=_check_fat_subscript(_T3A,sizeof(char),_T3B);_T3D=(char*)_T3C;_T3E=*_T3D;_T3F=(int)_T3E;
if(!_T3F)goto _TLBD;_T40=edge;_T41=nedges;
nedges=_T41 + 1;_T42=_T41;_T43=_check_fat_subscript(_T40,sizeof(short),_T42);_T44=(short*)_T43;_T45=Cyc_map_goto(stateno,symbol);*_T44=(short)_T45;goto _TLBE;_TLBD: _TLBE:
# 407
 j=j + 1;goto _TLBC;_TLBB: _T46=nedges;
# 414
if(!_T46)goto _TLBF;_T48=nedges + 1;{unsigned _T69=(unsigned)_T48;_T4A=_check_times(_T69,sizeof(short));{short*_T6A=_cycalloc_atomic(_T4A);{unsigned _T6B=_T69;unsigned _new2_cyclone;_new2_cyclone=0;_TLC4: if(_new2_cyclone < _T6B)goto _TLC2;else{goto _TLC3;}_TLC2: _T4B=_new2_cyclone;
# 418
_T6A[_T4B]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLC4;_TLC3:;}_T49=(short*)_T6A;}_T47=_tag_fat(_T49,sizeof(short),_T69);}rp=_T47;_T4C=reads;_T4D=i;_T4E=_check_fat_subscript(_T4C,sizeof(struct _fat_ptr),_T4D);_T4F=(struct _fat_ptr*)_T4E;
*_T4F=rp;
# 421
j=0;_TLC8: if(j < nedges)goto _TLC6;else{goto _TLC7;}
_TLC6: _T50=rp;_T51=j;_T52=_check_fat_subscript(_T50,sizeof(short),_T51);_T53=(short*)_T52;_T54=edge;_T55=j;_T56=_check_fat_subscript(_T54,sizeof(short),_T55);_T57=(short*)_T56;*_T53=*_T57;
# 421
j=j + 1;goto _TLC8;_TLC7: _T58=rp;_T59=nedges;_T5A=_check_fat_subscript(_T58,sizeof(short),_T59);_T5B=(short*)_T5A;
# 424
*_T5B=- 1;
nedges=0;goto _TLC0;_TLBF: _TLC0: goto _TLB2;_TLB1: _TLB2: _T5C=& rowp;_T5D=Cyc_tokensetsize;
# 429
_fat_ptr_inplace_plus(_T5C,sizeof(unsigned),_T5D);
# 390
i=i + 1;goto _TLB0;_TLAF:
# 432
 Cyc_digraph(reads);
# 434
i=0;_TLCC: if(i < Cyc_ngotos)goto _TLCA;else{goto _TLCB;}
# 436
_TLCA: _T5E=reads;_T5F=i;_T60=_check_fat_subscript(_T5E,sizeof(struct _fat_ptr),_T5F);_T61=(struct _fat_ptr*)_T60;_T62=*_T61;_T63=_T62.curr;_T64=(unsigned)_T63;if(!_T64)goto _TLCD;_T65=reads;_T66=_T65.curr;_T67=(struct _fat_ptr*)_T66;_T68=i;
_T67[_T68]=_tag_fat(0,0,0);goto _TLCE;_TLCD: _TLCE:
# 434
 i=i + 1;goto _TLCC;_TLCB:
# 440
 reads=_tag_fat(0,0,0);
edge=_tag_fat(0,0,0);}
# 445
void Cyc_build_relations (void){struct _fat_ptr _T0;int _T1;struct _fat_ptr*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;int _T7;short*_T8;unsigned _T9;unsigned _TA;struct _fat_ptr _TB;int _TC;short*_TD;unsigned _TE;unsigned _TF;struct _fat_ptr _T10;int _T11;unsigned char*_T12;short*_T13;short _T14;struct _fat_ptr _T15;struct _fat_ptr _T16;int _T17;unsigned char*_T18;short*_T19;short _T1A;int _T1B;unsigned char*_T1C;short*_T1D;short _T1E;struct _fat_ptr _T1F;int _T20;unsigned char*_T21;struct _fat_ptr*_T22;struct _fat_ptr _T23;unsigned char*_T24;short*_T25;short _T26;int _T27;struct _fat_ptr _T28;unsigned char*_T29;short*_T2A;int _T2B;int _T2C;short _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;unsigned char*_T31;short*_T32;short _T33;int _T34;unsigned char*_T35;short*_T36;short _T37;int _T38;struct _fat_ptr _T39;unsigned char*_T3A;short*_T3B;short _T3C;int _T3D;struct _fat_ptr _T3E;unsigned char*_T3F;short*_T40;short _T41;struct _fat_ptr _T42;int _T43;unsigned char*_T44;struct Cyc_shifts_tag**_T45;struct Cyc_shifts_tag*_T46;short _T47;struct Cyc_shifts_tag*_T48;struct _fat_ptr _T49;int _T4A;unsigned char*_T4B;short*_T4C;short _T4D;struct _fat_ptr _T4E;int _T4F;unsigned char*_T50;short*_T51;short _T52;int _T53;int _T54;struct _fat_ptr _T55;int _T56;int _T57;unsigned char*_T58;short*_T59;int _T5A;struct _fat_ptr*_T5B;struct _fat_ptr _T5C;int _T5D;unsigned char*_T5E;char*_T5F;char _T60;int _T61;int _T62;struct _fat_ptr _T63;unsigned char*_T64;short*_T65;short _T66;int _T67;int _T68;int _T69;struct _fat_ptr*_T6A;struct _fat_ptr _T6B;unsigned char*_T6C;short*_T6D;struct _fat_ptr _T6E;unsigned char*_T6F;short*_T70;struct _fat_ptr _T71;unsigned char*_T72;short*_T73;short _T74;int _T75;int _T76;struct _fat_ptr _T77;int _T78;unsigned char*_T79;short*_T7A;short _T7B;struct _fat_ptr _T7C;int _T7D;int _T7E;unsigned char*_T7F;short*_T80;int _T81;struct _fat_ptr _T82;unsigned char*_T83;short*_T84;short _T85;int _T86;int _T87;struct _fat_ptr _T88;struct _fat_ptr _T89;unsigned char*_T8A;short*_T8B;short _T8C;int _T8D;unsigned char*_T8E;char*_T8F;char _T90;int _T91;struct _fat_ptr*_T92;int _T93;struct _fat_ptr _T94;int _T95;short*_T96;unsigned _T97;unsigned _T98;struct _fat_ptr _T99;int _T9A;unsigned char*_T9B;struct _fat_ptr*_T9C;struct _fat_ptr _T9D;int _T9E;unsigned char*_T9F;short*_TA0;struct _fat_ptr _TA1;int _TA2;unsigned char*_TA3;short*_TA4;struct _fat_ptr _TA5;int _TA6;unsigned char*_TA7;short*_TA8;struct _fat_ptr _TA9;int _TAA;unsigned char*_TAB;struct _fat_ptr*_TAC;struct _fat_ptr _TAD;unsigned char*_TAE;unsigned _TAF;struct _fat_ptr _TB0;unsigned char*_TB1;struct _fat_ptr*_TB2;int _TB3;
# 448
int i;
int j;
int k;
struct _fat_ptr rulep;
struct _fat_ptr rp;
struct Cyc_shifts_tag*sp;
int length;
int nedges;
int done;
int state1;
int stateno;
int symbol1;
int symbol2;
struct _fat_ptr shortp;
struct _fat_ptr edge;
struct _fat_ptr states;
struct _fat_ptr new_includes;_T1=Cyc_ngotos;{unsigned _TB4=(unsigned)_T1;_T3=_check_times(_TB4,sizeof(struct _fat_ptr));{struct _fat_ptr*_TB5=_cycalloc(_T3);{unsigned _TB6=_TB4;unsigned _new2p_cyclone;_new2p_cyclone=0;_TLD2: if(_new2p_cyclone < _TB6)goto _TLD0;else{goto _TLD1;}_TLD0: _T4=_new2p_cyclone;_T5=
# 466
_tag_fat(0,0,0);_TB5[_T4]=_T5;_new2p_cyclone=_new2p_cyclone + 1;goto _TLD2;_TLD1:;}_T2=(struct _fat_ptr*)_TB5;}_T0=_tag_fat(_T2,sizeof(struct _fat_ptr),_TB4);}Cyc_includes=_T0;_T7=Cyc_ngotos + 1;{unsigned _TB4=(unsigned)_T7;_T9=_check_times(_TB4,sizeof(short));{short*_TB5=_cycalloc_atomic(_T9);{unsigned _TB6=_TB4;unsigned _new2_cyclone;_new2_cyclone=0;_TLD6: if(_new2_cyclone < _TB6)goto _TLD4;else{goto _TLD5;}_TLD4: _TA=_new2_cyclone;
_TB5[_TA]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLD6;_TLD5:;}_T8=(short*)_TB5;}_T6=_tag_fat(_T8,sizeof(short),_TB4);}edge=_T6;_TC=Cyc_maxrhs + 1;{unsigned _TB4=(unsigned)_TC;_TE=_check_times(_TB4,sizeof(short));{short*_TB5=_cycalloc_atomic(_TE);{unsigned _TB6=_TB4;unsigned _new2_cyclone;_new2_cyclone=0;_TLDA: if(_new2_cyclone < _TB6)goto _TLD8;else{goto _TLD9;}_TLD8: _TF=_new2_cyclone;
_TB5[_TF]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLDA;_TLD9:;}_TD=(short*)_TB5;}_TB=_tag_fat(_TD,sizeof(short),_TB4);}states=_TB;
# 470
i=0;_TLDE: if(i < Cyc_ngotos)goto _TLDC;else{goto _TLDD;}
# 472
_TLDC: nedges=0;_T10=Cyc_from_state;_T11=i;_T12=_check_fat_subscript(_T10,sizeof(short),_T11);_T13=(short*)_T12;_T14=*_T13;
state1=(int)_T14;_T15=Cyc_accessing_symbol;_T16=Cyc_to_state;_T17=i;_T18=_check_fat_subscript(_T16,sizeof(short),_T17);_T19=(short*)_T18;_T1A=*_T19;_T1B=(int)_T1A;_T1C=_check_fat_subscript(_T15,sizeof(short),_T1B);_T1D=(short*)_T1C;_T1E=*_T1D;
symbol1=(int)_T1E;_T1F=Cyc_derives;_T20=symbol1;_T21=_check_fat_subscript(_T1F,sizeof(struct _fat_ptr),_T20);_T22=(struct _fat_ptr*)_T21;
# 476
rulep=*_T22;_TLE2: _T23=rulep;_T24=_check_fat_subscript(_T23,sizeof(short),0U);_T25=(short*)_T24;_T26=*_T25;_T27=(int)_T26;if(_T27 > 0)goto _TLE0;else{goto _TLE1;}
# 478
_TLE0: length=1;_T28=states;_T29=_check_fat_subscript(_T28,sizeof(short),0);_T2A=(short*)_T29;_T2B=state1;
*_T2A=(short)_T2B;_T2C=state1;_T2D=(short)_T2C;
stateno=(int)_T2D;_T2E=Cyc_ritem;_T2F=Cyc_rrhs;_T30=rulep;_T31=_T30.curr;_T32=(short*)_T31;_T33=*_T32;_T34=(int)_T33;_T35=_check_fat_subscript(_T2F,sizeof(short),_T34);_T36=(short*)_T35;_T37=*_T36;_T38=(int)_T37;
# 482
rp=_fat_ptr_plus(_T2E,sizeof(short),_T38);_TLE6: _T39=rp;_T3A=_check_fat_subscript(_T39,sizeof(short),0U);_T3B=(short*)_T3A;_T3C=*_T3B;_T3D=(int)_T3C;if(_T3D > 0)goto _TLE4;else{goto _TLE5;}
# 484
_TLE4: _T3E=rp;_T3F=_T3E.curr;_T40=(short*)_T3F;_T41=*_T40;symbol2=(int)_T41;_T42=Cyc_shift_table;_T43=stateno;_T44=_check_fat_subscript(_T42,sizeof(struct Cyc_shifts_tag*),_T43);_T45=(struct Cyc_shifts_tag**)_T44;
sp=*_T45;_T46=
_check_null(sp);_T47=_T46->nshifts;k=(int)_T47;
# 488
j=0;_TLEA: if(j < k)goto _TLE8;else{goto _TLE9;}
# 490
_TLE8: _T48=sp;_T49=_T48->shifts;_T4A=j;_T4B=_check_fat_subscript(_T49,sizeof(short),_T4A);_T4C=(short*)_T4B;_T4D=*_T4C;stateno=(int)_T4D;_T4E=Cyc_accessing_symbol;_T4F=stateno;_T50=_check_fat_subscript(_T4E,sizeof(short),_T4F);_T51=(short*)_T50;_T52=*_T51;_T53=(int)_T52;_T54=symbol2;
if(_T53!=_T54)goto _TLEB;goto _TLE9;_TLEB:
# 488
 j=j + 1;goto _TLEA;_TLE9: _T55=states;_T56=length;
# 494
length=_T56 + 1;_T57=_T56;_T58=_check_fat_subscript(_T55,sizeof(short),_T57);_T59=(short*)_T58;_T5A=stateno;*_T59=(short)_T5A;_T5B=& rp;
# 482
_fat_ptr_inplace_plus(_T5B,sizeof(short),1);goto _TLE6;_TLE5: _T5C=Cyc_consistent;_T5D=stateno;_T5E=_check_fat_subscript(_T5C,sizeof(char),_T5D);_T5F=(char*)_T5E;_T60=*_T5F;_T61=(int)_T60;
# 497
if(_T61)goto _TLED;else{goto _TLEF;}
_TLEF: _T62=stateno;_T63=rulep;_T64=_T63.curr;_T65=(short*)_T64;_T66=*_T65;_T67=(int)_T66;_T68=i;Cyc_add_lookback_edge(_T62,_T67,_T68);goto _TLEE;_TLED: _TLEE:
# 500
 length=length + -1;
done=0;
_TLF0: _T69=done;if(_T69)goto _TLF2;else{goto _TLF1;}
# 504
_TLF1: done=1;_T6A=& rp;
_fat_ptr_inplace_plus(_T6A,sizeof(short),-1);_T6B=rp;_T6C=_T6B.curr;_T6D=(short*)_T6C;_T6E=Cyc_ritem;_T6F=_T6E.curr;_T70=(short*)_T6F;
# 507
if(_T6D < _T70)goto _TLF3;_T71=rp;_T72=_check_fat_subscript(_T71,sizeof(short),0U);_T73=(short*)_T72;_T74=*_T73;_T75=(int)_T74;_T76=Cyc_ntokens;if(_T75 < _T76)goto _TLF3;_T77=states;
# 509
length=length + -1;_T78=length;_T79=_check_fat_subscript(_T77,sizeof(short),_T78);_T7A=(short*)_T79;_T7B=*_T7A;stateno=(int)_T7B;_T7C=edge;_T7D=nedges;
nedges=_T7D + 1;_T7E=_T7D;_T7F=_check_fat_subscript(_T7C,sizeof(short),_T7E);_T80=(short*)_T7F;_T81=stateno;_T82=rp;_T83=_T82.curr;_T84=(short*)_T83;_T85=*_T84;_T86=(int)_T85;_T87=Cyc_map_goto(_T81,_T86);*_T80=(short)_T87;_T88=Cyc_nullable;_T89=rp;_T8A=_T89.curr;_T8B=(short*)_T8A;_T8C=*_T8B;_T8D=(int)_T8C;_T8E=_check_fat_subscript(_T88,sizeof(char),_T8D);_T8F=(char*)_T8E;_T90=*_T8F;_T91=(int)_T90;
if(!_T91)goto _TLF5;done=0;goto _TLF6;_TLF5: _TLF6: goto _TLF4;_TLF3: _TLF4: goto _TLF0;_TLF2: _T92=& rulep;
# 476
_fat_ptr_inplace_plus(_T92,sizeof(short),1);goto _TLE2;_TLE1: _T93=nedges;
# 516
if(!_T93)goto _TLF7;_T95=nedges + 1;{unsigned _TB4=(unsigned)_T95;_T97=_check_times(_TB4,sizeof(short));{short*_TB5=_cycalloc_atomic(_T97);{unsigned _TB6=_TB4;unsigned _new2_cyclone;_new2_cyclone=0;_TLFC: if(_new2_cyclone < _TB6)goto _TLFA;else{goto _TLFB;}_TLFA: _T98=_new2_cyclone;
# 519
_TB5[_T98]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLFC;_TLFB:;}_T96=(short*)_TB5;}_T94=_tag_fat(_T96,sizeof(short),_TB4);}shortp=_T94;_T99=Cyc_includes;_T9A=i;_T9B=_check_fat_subscript(_T99,sizeof(struct _fat_ptr),_T9A);_T9C=(struct _fat_ptr*)_T9B;
*_T9C=shortp;
j=0;_TL100: if(j < nedges)goto _TLFE;else{goto _TLFF;}
_TLFE: _T9D=shortp;_T9E=j;_T9F=_check_fat_subscript(_T9D,sizeof(short),_T9E);_TA0=(short*)_T9F;_TA1=edge;_TA2=j;_TA3=_check_fat_subscript(_TA1,sizeof(short),_TA2);_TA4=(short*)_TA3;*_TA0=*_TA4;
# 521
j=j + 1;goto _TL100;_TLFF: _TA5=shortp;_TA6=nedges;_TA7=_check_fat_subscript(_TA5,sizeof(short),_TA6);_TA8=(short*)_TA7;
# 523
*_TA8=- 1;goto _TLF8;_TLF7: _TLF8:
# 470
 i=i + 1;goto _TLDE;_TLDD:
# 527
 new_includes=Cyc_transpose(Cyc_includes,Cyc_ngotos);
# 529
i=0;_TL104: if(i < Cyc_ngotos)goto _TL102;else{goto _TL103;}
_TL102: _TA9=Cyc_includes;_TAA=i;_TAB=_check_fat_subscript(_TA9,sizeof(struct _fat_ptr),_TAA);_TAC=(struct _fat_ptr*)_TAB;_TAD=*_TAC;_TAE=_TAD.curr;_TAF=(unsigned)_TAE;if(!_TAF)goto _TL105;_TB0=Cyc_includes;_TB1=_TB0.curr;_TB2=(struct _fat_ptr*)_TB1;_TB3=i;
_TB2[_TB3]=_tag_fat(0,0,0);goto _TL106;_TL105: _TL106:
# 529
 i=i + 1;goto _TL104;_TL103:
# 533
 Cyc_includes=_tag_fat(0,0,0);
# 535
Cyc_includes=new_includes;
# 537
edge=_tag_fat(0,0,0);
states=_tag_fat(0,0,0);}
# 542
void Cyc_add_lookback_edge(int stateno,int ruleno,int gotono){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;short _T9;int _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;short*_TE;short _TF;int _T10;int _T11;struct _fat_ptr _T12;void*_T13;struct Cyc_shorts_tag*_T14;struct _fat_ptr _T15;int _T16;unsigned char*_T17;struct Cyc_shorts_tag**_T18;struct Cyc_shorts_tag*_T19;int _T1A;struct _fat_ptr _T1B;unsigned char*_T1C;struct Cyc_shorts_tag**_T1D;int _T1E;
# 548
int i;
int k;
int found;
struct Cyc_shorts_tag*sp;_T0=Cyc_lookaheads;_T1=stateno;_T2=_check_fat_subscript(_T0,sizeof(short),_T1);_T3=(short*)_T2;_T4=*_T3;
# 553
i=(int)_T4;_T5=Cyc_lookaheads;_T6=stateno + 1;_T7=_check_fat_subscript(_T5,sizeof(short),_T6);_T8=(short*)_T7;_T9=*_T8;
k=(int)_T9;
found=0;
_TL107: _TA=found;if(_TA)goto _TL109;else{goto _TL10A;}_TL10A: if(i < k)goto _TL108;else{goto _TL109;}
# 558
_TL108: _TB=Cyc_LAruleno;_TC=i;_TD=_check_fat_subscript(_TB,sizeof(short),_TC);_TE=(short*)_TD;_TF=*_TE;_T10=(int)_TF;_T11=ruleno;if(_T10!=_T11)goto _TL10B;
found=1;goto _TL10C;
# 561
_TL10B: i=i + 1;_TL10C: goto _TL107;_TL109:
# 564
 if(found!=0)goto _TL10D;_T12=
_tag_fat("add_lookback_edge",sizeof(char),18U);Cyc_berror(_T12);goto _TL10E;_TL10D: _TL10E: _T13=_cycalloc(sizeof(struct Cyc_shorts_tag));
# 567
sp=(struct Cyc_shorts_tag*)_T13;_T14=sp;_T15=Cyc_lookback;_T16=i;_T17=_check_fat_subscript(_T15,sizeof(struct Cyc_shorts_tag*),_T16);_T18=(struct Cyc_shorts_tag**)_T17;
_T14->next=*_T18;_T19=sp;_T1A=gotono;
_T19->value=(short)_T1A;_T1B=Cyc_lookback;_T1C=_T1B.curr;_T1D=(struct Cyc_shorts_tag**)_T1C;_T1E=i;
_T1D[_T1E]=sp;}
# 575
struct _fat_ptr Cyc_transpose(struct _fat_ptr R_arg,int n){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;struct _fat_ptr*_T8;struct _fat_ptr _T9;unsigned char*_TA;unsigned _TB;struct _fat_ptr _TC;unsigned char*_TD;short*_TE;short _TF;int _T10;struct _fat_ptr _T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;unsigned char*_T14;short*_T15;short _T16;int _T17;unsigned char*_T18;short*_T19;struct _fat_ptr _T1A;int _T1B;struct _fat_ptr*_T1C;unsigned _T1D;unsigned _T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;int _T21;struct _fat_ptr*_T22;unsigned _T23;unsigned _T24;struct _fat_ptr _T25;struct _fat_ptr _T26;unsigned char*_T27;short*_T28;int _T29;short _T2A;struct _fat_ptr _T2B;int _T2C;short*_T2D;unsigned _T2E;unsigned _T2F;struct _fat_ptr _T30;unsigned char*_T31;struct _fat_ptr*_T32;int _T33;struct _fat_ptr _T34;unsigned char*_T35;struct _fat_ptr*_T36;int _T37;struct _fat_ptr _T38;unsigned char*_T39;short*_T3A;int _T3B;struct _fat_ptr _T3C;int _T3D;unsigned char*_T3E;struct _fat_ptr*_T3F;struct _fat_ptr _T40;unsigned char*_T41;unsigned _T42;struct _fat_ptr _T43;unsigned char*_T44;short*_T45;short _T46;int _T47;struct _fat_ptr*_T48;struct _fat_ptr _T49;unsigned char*_T4A;short*_T4B;struct _fat_ptr _T4C;short _T4D;int _T4E;unsigned char*_T4F;struct _fat_ptr*_T50;struct _fat_ptr _T51;unsigned char*_T52;short*_T53;int _T54;struct _fat_ptr _T55;
# 577
struct _fat_ptr new_R;
struct _fat_ptr temp_R;
struct _fat_ptr nedges;
struct _fat_ptr sp;
int i;
int k;_T1=n;{unsigned _T56=(unsigned)_T1;_T3=_check_times(_T56,sizeof(short));{short*_T57=_cycalloc_atomic(_T3);{unsigned _T58=_T56;unsigned _new2_cyclone;_new2_cyclone=0;_TL112: if(_new2_cyclone < _T58)goto _TL110;else{goto _TL111;}_TL110: _T4=_new2_cyclone;
# 584
_T57[_T4]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL112;_TL111:;}_T2=(short*)_T57;}_T0=_tag_fat(_T2,sizeof(short),_T56);}nedges=_T0;
# 586
i=0;_TL116: if(i < n)goto _TL114;else{goto _TL115;}
# 588
_TL114: _T5=R_arg;_T6=i;_T7=_check_fat_subscript(_T5,sizeof(struct _fat_ptr),_T6);_T8=(struct _fat_ptr*)_T7;sp=*_T8;_T9=sp;_TA=_T9.curr;_TB=(unsigned)_TA;
if(!_TB)goto _TL117;
# 591
_TL119: _TC=sp;_TD=_check_fat_subscript(_TC,sizeof(short),0U);_TE=(short*)_TD;_TF=*_TE;_T10=(int)_TF;if(_T10 >= 0)goto _TL11A;else{goto _TL11B;}
_TL11A: _T11=nedges;_T12=& sp;_T13=_fat_ptr_inplace_plus_post(_T12,sizeof(short),1);_T14=_T13.curr;_T15=(short*)_T14;_T16=*_T15;_T17=(int)_T16;_T18=_check_fat_subscript(_T11,sizeof(short),_T17);_T19=(short*)_T18;*_T19=*_T19 + 1;goto _TL119;_TL11B: goto _TL118;_TL117: _TL118:
# 586
 i=i + 1;goto _TL116;_TL115: _T1B=n;{unsigned _T56=(unsigned)_T1B;_T1D=_check_times(_T56,sizeof(struct _fat_ptr));{struct _fat_ptr*_T57=_cycalloc(_T1D);{unsigned _T58=_T56;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL11F: if(_new2p_cyclone < _T58)goto _TL11D;else{goto _TL11E;}_TL11D: _T1E=_new2p_cyclone;_T1F=
# 596
_tag_fat(0,0,0);_T57[_T1E]=_T1F;_new2p_cyclone=_new2p_cyclone + 1;goto _TL11F;_TL11E:;}_T1C=(struct _fat_ptr*)_T57;}_T1A=_tag_fat(_T1C,sizeof(struct _fat_ptr),_T56);}new_R=_T1A;_T21=n;{unsigned _T56=(unsigned)_T21;_T23=_check_times(_T56,sizeof(struct _fat_ptr));{struct _fat_ptr*_T57=_cycalloc(_T23);{unsigned _T58=_T56;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL123: if(_new2p_cyclone < _T58)goto _TL121;else{goto _TL122;}_TL121: _T24=_new2p_cyclone;_T25=
_tag_fat(0,0,0);_T57[_T24]=_T25;_new2p_cyclone=_new2p_cyclone + 1;goto _TL123;_TL122:;}_T22=(struct _fat_ptr*)_T57;}_T20=_tag_fat(_T22,sizeof(struct _fat_ptr),_T56);}temp_R=_T20;
# 599
i=0;_TL127: if(i < n)goto _TL125;else{goto _TL126;}
# 601
_TL125: _T26=nedges;_T27=_T26.curr;_T28=(short*)_T27;_T29=i;_T2A=_T28[_T29];k=(int)_T2A;
if(k <= 0)goto _TL128;_T2C=k + 1;{unsigned _T56=(unsigned)_T2C;_T2E=_check_times(_T56,sizeof(short));{short*_T57=_cycalloc_atomic(_T2E);{unsigned _T58=_T56;unsigned _new2_cyclone;_new2_cyclone=0;_TL12D: if(_new2_cyclone < _T58)goto _TL12B;else{goto _TL12C;}_TL12B: _T2F=_new2_cyclone;
# 604
_T57[_T2F]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL12D;_TL12C:;}_T2D=(short*)_T57;}_T2B=_tag_fat(_T2D,sizeof(short),_T56);}sp=_T2B;_T30=new_R;_T31=_T30.curr;_T32=(struct _fat_ptr*)_T31;_T33=i;
_T32[_T33]=sp;_T34=temp_R;_T35=_T34.curr;_T36=(struct _fat_ptr*)_T35;_T37=i;
_T36[_T37]=sp;_T38=sp;_T39=_T38.curr;_T3A=(short*)_T39;_T3B=k;
_T3A[_T3B]=- 1;goto _TL129;_TL128: _TL129:
# 599
 i=i + 1;goto _TL127;_TL126:
# 611
 nedges=_tag_fat(0,0,0);
# 613
i=0;_TL131: if(i < n)goto _TL12F;else{goto _TL130;}
# 615
_TL12F: _T3C=R_arg;_T3D=i;_T3E=_check_fat_subscript(_T3C,sizeof(struct _fat_ptr),_T3D);_T3F=(struct _fat_ptr*)_T3E;sp=*_T3F;_T40=sp;_T41=_T40.curr;_T42=(unsigned)_T41;
if(!_T42)goto _TL132;
# 618
_TL134: _T43=sp;_T44=_check_fat_subscript(_T43,sizeof(short),0U);_T45=(short*)_T44;_T46=*_T45;_T47=(int)_T46;if(_T47 >= 0)goto _TL135;else{goto _TL136;}
# 621
_TL135: _T48=& sp;_T49=_fat_ptr_inplace_plus_post(_T48,sizeof(short),1);_T4A=_T49.curr;_T4B=(short*)_T4A;{short z=*_T4B;_T4C=temp_R;_T4D=z;_T4E=(int)_T4D;_T4F=_check_fat_subscript(_T4C,sizeof(struct _fat_ptr),_T4E);_T50=(struct _fat_ptr*)_T4F;_T51=
_fat_ptr_inplace_plus_post(_T50,sizeof(short),1);_T52=_check_fat_subscript(_T51,sizeof(short),0U);_T53=(short*)_T52;_T54=i;*_T53=(short)_T54;}goto _TL134;_TL136: goto _TL133;_TL132: _TL133:
# 613
 i=i + 1;goto _TL131;_TL130:
# 627
 temp_R=_tag_fat(0,0,0);_T55=new_R;
# 629
return _T55;}
# 633
void Cyc_compute_FOLLOWS (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;unsigned char*_T5;unsigned _T6;struct _fat_ptr _T7;unsigned char*_T8;struct _fat_ptr*_T9;int _TA;
# 636
int i;
# 638
Cyc_digraph(Cyc_includes);
# 640
i=0;_TL13A: if(i < Cyc_ngotos)goto _TL138;else{goto _TL139;}
# 642
_TL138: _T0=Cyc_includes;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(struct _fat_ptr),_T1);_T3=(struct _fat_ptr*)_T2;_T4=*_T3;_T5=_T4.curr;_T6=(unsigned)_T5;if(!_T6)goto _TL13B;_T7=Cyc_includes;_T8=_T7.curr;_T9=(struct _fat_ptr*)_T8;_TA=i;_T9[_TA]=_tag_fat(0,0,0);goto _TL13C;_TL13B: _TL13C:
# 640
 i=i + 1;goto _TL13A;_TL139:
# 645
 Cyc_includes=_tag_fat(0,0,0);}
# 649
void Cyc_compute_lookaheads (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;struct _fat_ptr _T5;int _T6;struct _fat_ptr _T7;int _T8;unsigned char*_T9;struct Cyc_shorts_tag**_TA;struct Cyc_shorts_tag*_TB;unsigned _TC;struct _fat_ptr _TD;int _TE;struct Cyc_shorts_tag*_TF;short _T10;int _T11;int _T12;struct _fat_ptr _T13;unsigned char*_T14;unsigned*_T15;struct _fat_ptr _T16;unsigned char*_T17;unsigned*_T18;struct _fat_ptr*_T19;struct _fat_ptr _T1A;unsigned char*_T1B;unsigned*_T1C;struct _fat_ptr*_T1D;struct _fat_ptr _T1E;unsigned char*_T1F;unsigned*_T20;unsigned _T21;struct Cyc_shorts_tag*_T22;struct _fat_ptr _T23;int _T24;unsigned char*_T25;struct Cyc_shorts_tag**_T26;struct Cyc_shorts_tag*_T27;unsigned _T28;struct Cyc_shorts_tag*_T29;
# 652
int i;
int n;
struct _fat_ptr fp1;
struct _fat_ptr fp2;
struct _fat_ptr fp3;
struct Cyc_shorts_tag*sp;
struct _fat_ptr rowp;
# 661
struct Cyc_shorts_tag*sptmp;
# 663
rowp=Cyc_LA;_T0=Cyc_lookaheads;_T1=Cyc_nstates;_T2=_check_fat_subscript(_T0,sizeof(short),_T1);_T3=(short*)_T2;_T4=*_T3;
n=(int)_T4;
i=0;_TL140: if(i < n)goto _TL13E;else{goto _TL13F;}
# 667
_TL13E: _T5=rowp;_T6=Cyc_tokensetsize;fp3=_fat_ptr_plus(_T5,sizeof(unsigned),_T6);_T7=Cyc_lookback;_T8=i;_T9=_check_fat_subscript(_T7,sizeof(struct Cyc_shorts_tag*),_T8);_TA=(struct Cyc_shorts_tag**)_T9;
sp=*_TA;_TL144: _TB=sp;_TC=(unsigned)_TB;if(_TC)goto _TL142;else{goto _TL143;}
# 670
_TL142: fp1=rowp;_TD=Cyc_F;_TE=Cyc_tokensetsize;_TF=sp;_T10=_TF->value;_T11=(int)_T10;_T12=_TE * _T11;
fp2=_fat_ptr_plus(_TD,sizeof(unsigned),_T12);
_TL145: _T13=fp1;_T14=_T13.curr;_T15=(unsigned*)_T14;_T16=fp3;_T17=_T16.curr;_T18=(unsigned*)_T17;if(_T15 < _T18)goto _TL146;else{goto _TL147;}
_TL146: _T19=& fp1;_T1A=_fat_ptr_inplace_plus_post(_T19,sizeof(unsigned),1);_T1B=_check_fat_subscript(_T1A,sizeof(unsigned),0U);_T1C=(unsigned*)_T1B;_T1D=& fp2;_T1E=_fat_ptr_inplace_plus_post(_T1D,sizeof(unsigned),1);_T1F=_check_fat_subscript(_T1E,sizeof(unsigned),0U);_T20=(unsigned*)_T1F;_T21=*_T20;*_T1C=*_T1C | _T21;goto _TL145;_TL147: _T22=sp;
# 668
sp=_T22->next;goto _TL144;_TL143:
# 676
 rowp=fp3;
# 665
i=i + 1;goto _TL140;_TL13F:
# 679
 i=0;_TL14B: if(i < n)goto _TL149;else{goto _TL14A;}
# 681
_TL149: _T23=Cyc_lookback;_T24=i;_T25=_check_fat_subscript(_T23,sizeof(struct Cyc_shorts_tag*),_T24);_T26=(struct Cyc_shorts_tag**)_T25;sp=*_T26;_TL14F: _T27=sp;_T28=(unsigned)_T27;if(_T28)goto _TL14D;else{goto _TL14E;}
_TL14D: _T29=sp;sptmp=_T29->next;
sp=0;
# 681
sp=sptmp;goto _TL14F;_TL14E:
# 679
 i=i + 1;goto _TL14B;_TL14A:
# 687
 Cyc_lookback=_tag_fat(0,0,0);
Cyc_F=_tag_fat(0,0,0);}
# 692
void Cyc_digraph(struct _fat_ptr relation){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;short*_T7;unsigned _T8;unsigned _T9;struct _fat_ptr _TA;int _TB;unsigned char*_TC;short*_TD;struct _fat_ptr _TE;int _TF;unsigned char*_T10;short*_T11;short _T12;int _T13;struct _fat_ptr _T14;int _T15;unsigned char*_T16;struct _fat_ptr*_T17;unsigned char*_T18;short*_T19;
# 695
int i;
# 697
Cyc_infinity=Cyc_ngotos + 2;_T1=Cyc_ngotos + 1;{unsigned _T1A=(unsigned)_T1;_T3=_check_times(_T1A,sizeof(short));{short*_T1B=_cycalloc_atomic(_T3);{unsigned _T1C=_T1A;unsigned _new2_cyclone;_new2_cyclone=0;_TL153: if(_new2_cyclone < _T1C)goto _TL151;else{goto _TL152;}_TL151: _T4=_new2_cyclone;
_T1B[_T4]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL153;_TL152:;}_T2=(short*)_T1B;}_T0=_tag_fat(_T2,sizeof(short),_T1A);}Cyc_INDEX=_T0;_T6=Cyc_ngotos + 1;{unsigned _T1A=(unsigned)_T6;_T8=_check_times(_T1A,sizeof(short));{short*_T1B=_cycalloc_atomic(_T8);{unsigned _T1C=_T1A;unsigned _new2_cyclone;_new2_cyclone=0;_TL157: if(_new2_cyclone < _T1C)goto _TL155;else{goto _TL156;}_TL155: _T9=_new2_cyclone;
_T1B[_T9]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL157;_TL156:;}_T7=(short*)_T1B;}_T5=_tag_fat(_T7,sizeof(short),_T1A);}Cyc_VERTICES=_T5;
Cyc_top=0;
# 702
Cyc_R=relation;
# 704
i=0;_TL15B: if(i < Cyc_ngotos)goto _TL159;else{goto _TL15A;}
_TL159: _TA=Cyc_INDEX;_TB=i;_TC=_check_fat_subscript(_TA,sizeof(short),_TB);_TD=(short*)_TC;*_TD=0;
# 704
i=i + 1;goto _TL15B;_TL15A:
# 707
 i=0;_TL15F: if(i < Cyc_ngotos)goto _TL15D;else{goto _TL15E;}
# 709
_TL15D: _TE=Cyc_INDEX;_TF=i;_T10=_check_fat_subscript(_TE,sizeof(short),_TF);_T11=(short*)_T10;_T12=*_T11;_T13=(int)_T12;if(_T13!=0)goto _TL160;_T14=Cyc_R;_T15=i;_T16=_check_fat_subscript(_T14,sizeof(struct _fat_ptr),_T15);_T17=(struct _fat_ptr*)_T16;_T18=_T17->curr;_T19=(short*)_T18;if(_T19==0)goto _TL160;
Cyc_traverse(i);goto _TL161;_TL160: _TL161:
# 707
 i=i + 1;goto _TL15F;_TL15E:
# 713
 Cyc_INDEX=_tag_fat(0,0,0);
Cyc_VERTICES=_tag_fat(0,0,0);}
# 718
void Cyc_traverse(int i){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;int _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;int _T9;struct _fat_ptr _TA;int _TB;struct _fat_ptr _TC;int _TD;struct _fat_ptr _TE;int _TF;unsigned char*_T10;struct _fat_ptr*_T11;struct _fat_ptr _T12;unsigned char*_T13;unsigned _T14;struct _fat_ptr*_T15;struct _fat_ptr _T16;unsigned char*_T17;short*_T18;short _T19;int _T1A;struct _fat_ptr _T1B;int _T1C;unsigned char*_T1D;short*_T1E;short _T1F;int _T20;struct _fat_ptr _T21;int _T22;unsigned char*_T23;short*_T24;short _T25;int _T26;struct _fat_ptr _T27;int _T28;unsigned char*_T29;short*_T2A;short _T2B;int _T2C;struct _fat_ptr _T2D;unsigned char*_T2E;short*_T2F;int _T30;struct _fat_ptr _T31;unsigned char*_T32;short*_T33;int _T34;struct _fat_ptr _T35;int _T36;struct _fat_ptr _T37;unsigned char*_T38;unsigned*_T39;struct _fat_ptr _T3A;unsigned char*_T3B;unsigned*_T3C;struct _fat_ptr*_T3D;struct _fat_ptr _T3E;unsigned char*_T3F;unsigned*_T40;struct _fat_ptr*_T41;struct _fat_ptr _T42;unsigned char*_T43;unsigned*_T44;unsigned _T45;struct _fat_ptr _T46;int _T47;unsigned char*_T48;short*_T49;short _T4A;int _T4B;int _T4C;struct _fat_ptr _T4D;int _T4E;int _T4F;unsigned char*_T50;short*_T51;short _T52;struct _fat_ptr _T53;int _T54;unsigned char*_T55;short*_T56;int _T57;struct _fat_ptr _T58;int _T59;struct _fat_ptr _T5A;unsigned char*_T5B;unsigned*_T5C;struct _fat_ptr _T5D;unsigned char*_T5E;unsigned*_T5F;struct _fat_ptr*_T60;struct _fat_ptr _T61;unsigned char*_T62;unsigned*_T63;struct _fat_ptr*_T64;struct _fat_ptr _T65;unsigned char*_T66;unsigned*_T67;
# 721
struct _fat_ptr fp1;
struct _fat_ptr fp2;
struct _fat_ptr fp3;
int j;
struct _fat_ptr rp;
# 727
int height;
struct _fat_ptr base;_T0=Cyc_VERTICES;
# 730
Cyc_top=Cyc_top + 1;_T1=Cyc_top;_T2=_check_fat_subscript(_T0,sizeof(short),_T1);_T3=(short*)_T2;_T4=i;*_T3=(short)_T4;
height=Cyc_top;_T5=Cyc_INDEX;_T6=i;_T7=_check_fat_subscript(_T5,sizeof(short),_T6);_T8=(short*)_T7;_T9=height;
*_T8=(short)_T9;_TA=Cyc_F;_TB=i * Cyc_tokensetsize;
# 734
base=_fat_ptr_plus(_TA,sizeof(unsigned),_TB);_TC=base;_TD=Cyc_tokensetsize;
fp3=_fat_ptr_plus(_TC,sizeof(unsigned),_TD);_TE=Cyc_R;_TF=i;_T10=_check_fat_subscript(_TE,sizeof(struct _fat_ptr),_TF);_T11=(struct _fat_ptr*)_T10;
# 737
rp=*_T11;_T12=rp;_T13=_T12.curr;_T14=(unsigned)_T13;
if(!_T14)goto _TL162;
# 740
_TL164: _T15=& rp;_T16=_fat_ptr_inplace_plus_post(_T15,sizeof(short),1);_T17=_check_fat_subscript(_T16,sizeof(short),0U);_T18=(short*)_T17;_T19=*_T18;j=(int)_T19;_T1A=j;if(_T1A >= 0)goto _TL165;else{goto _TL166;}
# 742
_TL165: _T1B=Cyc_INDEX;_T1C=j;_T1D=_check_fat_subscript(_T1B,sizeof(short),_T1C);_T1E=(short*)_T1D;_T1F=*_T1E;_T20=(int)_T1F;if(_T20!=0)goto _TL167;
Cyc_traverse(j);goto _TL168;_TL167: _TL168: _T21=Cyc_INDEX;_T22=i;_T23=_check_fat_subscript(_T21,sizeof(short),_T22);_T24=(short*)_T23;_T25=*_T24;_T26=(int)_T25;_T27=Cyc_INDEX;_T28=j;_T29=_check_fat_subscript(_T27,sizeof(short),_T28);_T2A=(short*)_T29;_T2B=*_T2A;_T2C=(int)_T2B;
# 745
if(_T26 <= _T2C)goto _TL169;_T2D=Cyc_INDEX;_T2E=_T2D.curr;_T2F=(short*)_T2E;_T30=i;_T31=Cyc_INDEX;_T32=_T31.curr;_T33=(short*)_T32;_T34=j;
_T2F[_T30]=_T33[_T34];goto _TL16A;_TL169: _TL16A:
# 748
 fp1=base;_T35=Cyc_F;_T36=j * Cyc_tokensetsize;
fp2=_fat_ptr_plus(_T35,sizeof(unsigned),_T36);
# 751
_TL16B: _T37=fp1;_T38=_T37.curr;_T39=(unsigned*)_T38;_T3A=fp3;_T3B=_T3A.curr;_T3C=(unsigned*)_T3B;if(_T39 < _T3C)goto _TL16C;else{goto _TL16D;}
_TL16C: _T3D=& fp1;_T3E=_fat_ptr_inplace_plus_post(_T3D,sizeof(unsigned),1);_T3F=_check_fat_subscript(_T3E,sizeof(unsigned),0U);_T40=(unsigned*)_T3F;_T41=& fp2;_T42=_fat_ptr_inplace_plus_post(_T41,sizeof(unsigned),1);_T43=_check_fat_subscript(_T42,sizeof(unsigned),0U);_T44=(unsigned*)_T43;_T45=*_T44;*_T40=*_T40 | _T45;goto _TL16B;_TL16D: goto _TL164;_TL166: goto _TL163;_TL162: _TL163: _T46=Cyc_INDEX;_T47=i;_T48=_check_fat_subscript(_T46,sizeof(short),_T47);_T49=(short*)_T48;_T4A=*_T49;_T4B=(int)_T4A;_T4C=height;
# 756
if(_T4B!=_T4C)goto _TL16E;_TL173:
# 758
 if(1)goto _TL171;else{goto _TL172;}
# 760
_TL171: _T4D=Cyc_VERTICES;_T4E=Cyc_top;Cyc_top=_T4E + -1;_T4F=_T4E;_T50=_check_fat_subscript(_T4D,sizeof(short),_T4F);_T51=(short*)_T50;_T52=*_T51;j=(int)_T52;_T53=Cyc_INDEX;_T54=j;_T55=_check_fat_subscript(_T53,sizeof(short),_T54);_T56=(short*)_T55;_T57=Cyc_infinity;
*_T56=(short)_T57;
# 763
if(i!=j)goto _TL174;goto _TL172;_TL174:
# 766
 fp1=base;_T58=Cyc_F;_T59=j * Cyc_tokensetsize;
fp2=_fat_ptr_plus(_T58,sizeof(unsigned),_T59);
# 769
_TL176: _T5A=fp1;_T5B=_T5A.curr;_T5C=(unsigned*)_T5B;_T5D=fp3;_T5E=_T5D.curr;_T5F=(unsigned*)_T5E;if(_T5C < _T5F)goto _TL177;else{goto _TL178;}
_TL177: _T60=& fp2;_T61=_fat_ptr_inplace_plus_post(_T60,sizeof(unsigned),1);_T62=_check_fat_subscript(_T61,sizeof(unsigned),0U);_T63=(unsigned*)_T62;_T64=& fp1;_T65=_fat_ptr_inplace_plus_post(_T64,sizeof(unsigned),1);_T66=_check_fat_subscript(_T65,sizeof(unsigned),0U);_T67=(unsigned*)_T66;*_T63=*_T67;goto _TL176;_TL178: goto _TL173;_TL172: goto _TL16F;_TL16E: _TL16F:;}
