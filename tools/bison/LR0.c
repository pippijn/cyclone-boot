#include <cyc_include.h>

# 76 "gram.h"
extern int Cyc_nitems;
extern int Cyc_nrules;
extern int Cyc_nsyms;
# 82
extern struct _fat_ptr Cyc_ritem;
# 92
extern int Cyc_start_symbol;struct Cyc_core_tag{struct Cyc_core_tag*next;struct Cyc_core_tag*link;short number;short accessing_symbol;short nitems;struct _fat_ptr items;};struct Cyc_shifts_tag{struct Cyc_shifts_tag*next;short number;short nshifts;struct _fat_ptr shifts;};struct Cyc_reductions_tag{struct Cyc_reductions_tag*next;short number;short nreds;struct _fat_ptr rules;};
# 135 "state.h"
extern int Cyc_nstates;
extern struct Cyc_core_tag*Cyc_first_state;
extern struct Cyc_shifts_tag*Cyc_first_shift;
extern struct Cyc_reductions_tag*Cyc_first_reduction;
# 32 "LR0.cyc"
extern struct _fat_ptr Cyc_itemset;
extern struct _fat_ptr Cyc_itemsetend;
# 35
int Cyc_nstates;
int Cyc_final_state;
struct Cyc_core_tag*Cyc_first_state=0;
struct Cyc_shifts_tag*Cyc_first_shift=0;
struct Cyc_reductions_tag*Cyc_first_reduction;
# 41
int Cyc_get_state(int);
struct Cyc_core_tag*Cyc_new_state(int);
# 44
void Cyc_new_itemsets (void);
void Cyc_append_states (void);
void Cyc_initialize_states (void);
void Cyc_save_shifts (void);
void Cyc_save_reductions (void);
void Cyc_augment_automaton (void);
void Cyc_insert_start_shift (void);
extern void Cyc_initialize_closure(int);
extern void Cyc_closure(struct _fat_ptr,int);
extern void Cyc_finalize_closure (void);
extern void Cyc_toomany(struct _fat_ptr);
# 56
static struct Cyc_core_tag*Cyc_this_state;
static struct Cyc_core_tag*Cyc_last_state;
static struct Cyc_shifts_tag*Cyc_last_shift;
static struct Cyc_reductions_tag*Cyc_last_reduction;
# 61
static int Cyc_nshifts;
static struct _fat_ptr Cyc_shift_symbol;
# 64
static struct _fat_ptr Cyc_redset;
static struct _fat_ptr Cyc_shiftset;
# 67
static struct _fat_ptr Cyc_kernel_base;
static struct _fat_ptr Cyc_kernel_end;
static struct _fat_ptr Cyc_kernel_items;
# 74
static struct _fat_ptr Cyc_state_table;
# 78
void Cyc_allocate_itemsets (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr*_T5;struct _fat_ptr _T6;unsigned char*_T7;short*_T8;short _T9;int _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;short*_TE;struct _fat_ptr*_TF;struct _fat_ptr _T10;unsigned char*_T11;short*_T12;short _T13;struct _fat_ptr _T14;int _T15;struct _fat_ptr*_T16;unsigned _T17;unsigned _T18;struct _fat_ptr _T19;struct _fat_ptr _T1A;int _T1B;short*_T1C;unsigned _T1D;unsigned _T1E;struct _fat_ptr _T1F;int _T20;unsigned char*_T21;struct _fat_ptr*_T22;struct _fat_ptr _T23;int _T24;struct _fat_ptr _T25;int _T26;unsigned char*_T27;short*_T28;short _T29;int _T2A;struct _fat_ptr _T2B;int _T2C;struct _fat_ptr*_T2D;unsigned _T2E;unsigned _T2F;struct _fat_ptr _T30;
# 81
struct _fat_ptr itemp;
int symbol;
int i;
int count;
struct _fat_ptr symbol_count;
# 87
count=0;_T1=Cyc_nsyms;{unsigned _T31=(unsigned)_T1;_T3=_check_times(_T31,sizeof(short));{short*_T32=_cycalloc_atomic(_T3);{unsigned _T33=_T31;unsigned _new2_cyclone;_new2_cyclone=0;_TL3: if(_new2_cyclone < _T33)goto _TL1;else{goto _TL2;}_TL1: _T4=_new2_cyclone;
_T32[_T4]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL3;_TL2:;}_T2=(short*)_T32;}_T0=_tag_fat(_T2,sizeof(short),_T31);}symbol_count=_T0;
# 90
itemp=Cyc_ritem;_T5=& itemp;_T6=
_fat_ptr_inplace_plus_post(_T5,sizeof(short),1);_T7=_check_fat_subscript(_T6,sizeof(short),0U);_T8=(short*)_T7;_T9=*_T8;symbol=(int)_T9;
_TL4: _TA=symbol;if(_TA)goto _TL5;else{goto _TL6;}
# 94
_TL5: if(symbol <= 0)goto _TL7;
# 96
count=count + 1;_TB=symbol_count;_TC=symbol;_TD=_check_fat_subscript(_TB,sizeof(short),_TC);_TE=(short*)_TD;
*_TE=*_TE + 1;goto _TL8;_TL7: _TL8: _TF=& itemp;_T10=
# 99
_fat_ptr_inplace_plus_post(_TF,sizeof(short),1);_T11=_check_fat_subscript(_T10,sizeof(short),0U);_T12=(short*)_T11;_T13=*_T12;symbol=(int)_T13;goto _TL4;_TL6: _T15=Cyc_nsyms;{unsigned _T31=(unsigned)_T15;_T17=_check_times(_T31,sizeof(struct _fat_ptr));{struct _fat_ptr*_T32=_cycalloc(_T17);{unsigned _T33=_T31;unsigned _new2p_cyclone;_new2p_cyclone=0;_TLC: if(_new2p_cyclone < _T33)goto _TLA;else{goto _TLB;}_TLA: _T18=_new2p_cyclone;_T19=
# 108
_tag_fat(0,0,0);_T32[_T18]=_T19;_new2p_cyclone=_new2p_cyclone + 1;goto _TLC;_TLB:;}_T16=(struct _fat_ptr*)_T32;}_T14=_tag_fat(_T16,sizeof(struct _fat_ptr),_T31);}Cyc_kernel_base=_T14;_T1B=count;{unsigned _T31=(unsigned)_T1B;_T1D=_check_times(_T31,sizeof(short));{short*_T32=_cycalloc_atomic(_T1D);{unsigned _T33=_T31;unsigned _new2_cyclone;_new2_cyclone=0;_TL10: if(_new2_cyclone < _T33)goto _TLE;else{goto _TLF;}_TLE: _T1E=_new2_cyclone;
_T32[_T1E]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL10;_TLF:;}_T1C=(short*)_T32;}_T1A=_tag_fat(_T1C,sizeof(short),_T31);}Cyc_kernel_items=_T1A;
# 111
count=0;
i=0;_TL14: if(i < Cyc_nsyms)goto _TL12;else{goto _TL13;}
# 114
_TL12: _T1F=Cyc_kernel_base;_T20=i;_T21=_check_fat_subscript(_T1F,sizeof(struct _fat_ptr),_T20);_T22=(struct _fat_ptr*)_T21;_T23=Cyc_kernel_items;_T24=count;*_T22=_fat_ptr_plus(_T23,sizeof(short),_T24);_T25=symbol_count;_T26=i;_T27=_check_fat_subscript(_T25,sizeof(short),_T26);_T28=(short*)_T27;_T29=*_T28;_T2A=(int)_T29;
count=count + _T2A;
# 112
i=i + 1;goto _TL14;_TL13:
# 118
 Cyc_shift_symbol=symbol_count;_T2C=Cyc_nsyms;{unsigned _T31=(unsigned)_T2C;_T2E=_check_times(_T31,sizeof(struct _fat_ptr));{struct _fat_ptr*_T32=_cycalloc(_T2E);{unsigned _T33=_T31;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL18: if(_new2p_cyclone < _T33)goto _TL16;else{goto _TL17;}_TL16: _T2F=_new2p_cyclone;_T30=
_tag_fat(0,0,0);_T32[_T2F]=_T30;_new2p_cyclone=_new2p_cyclone + 1;goto _TL18;_TL17:;}_T2D=(struct _fat_ptr*)_T32;}_T2B=_tag_fat(_T2D,sizeof(struct _fat_ptr),_T31);}Cyc_kernel_end=_T2B;}
# 123
void Cyc_allocate_storage (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;short*_T7;unsigned _T8;unsigned _T9;struct Cyc_core_tag**_TA;struct Cyc_core_tag**_TB;unsigned _TC;unsigned _TD;
# 126
Cyc_allocate_itemsets();_T1=Cyc_nsyms;{unsigned _TE=(unsigned)_T1;_T3=_check_times(_TE,sizeof(short));{short*_TF=_cycalloc_atomic(_T3);{unsigned _T10=_TE;unsigned _new2_cyclone;_new2_cyclone=0;_TL1C: if(_new2_cyclone < _T10)goto _TL1A;else{goto _TL1B;}_TL1A: _T4=_new2_cyclone;
# 128
_TF[_T4]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL1C;_TL1B:;}_T2=(short*)_TF;}_T0=_tag_fat(_T2,sizeof(short),_TE);}Cyc_shiftset=_T0;_T6=Cyc_nrules + 1;{unsigned _TE=(unsigned)_T6;_T8=_check_times(_TE,sizeof(short));{short*_TF=_cycalloc_atomic(_T8);{unsigned _T10=_TE;unsigned _new2_cyclone;_new2_cyclone=0;_TL20: if(_new2_cyclone < _T10)goto _TL1E;else{goto _TL1F;}_TL1E: _T9=_new2_cyclone;
_TF[_T9]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL20;_TL1F:;}_T7=(short*)_TF;}_T5=_tag_fat(_T7,sizeof(short),_TE);}Cyc_redset=_T5;{unsigned _TE=1009U;_TC=_check_times(_TE,sizeof(struct Cyc_core_tag*));{struct Cyc_core_tag**_TF=_cycalloc(_TC);{unsigned _T10=_TE;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL24: if(_new2p_cyclone < _T10)goto _TL22;else{goto _TL23;}_TL22: _TD=_new2p_cyclone;
_TF[_TD]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TL24;_TL23:;}_TB=(struct Cyc_core_tag**)_TF;}_TA=_TB;}Cyc_state_table=_tag_fat(_TA,sizeof(struct Cyc_core_tag*),1009U);}
# 134
void Cyc_free_storage (void){
# 137
Cyc_shift_symbol=_tag_fat(0,0,0);
Cyc_redset=_tag_fat(0,0,0);
Cyc_shiftset=_tag_fat(0,0,0);
Cyc_kernel_base=_tag_fat(0,0,0);
Cyc_kernel_end=_tag_fat(0,0,0);
Cyc_kernel_items=_tag_fat(0,0,0);
Cyc_state_table=_tag_fat(0,0,0);}
# 150
void Cyc_generate_states (void){struct Cyc_core_tag*_T0;unsigned _T1;struct Cyc_core_tag*_T2;struct _fat_ptr _T3;struct Cyc_core_tag*_T4;short _T5;int _T6;struct Cyc_core_tag*_T7;
# 153
Cyc_allocate_storage();
Cyc_initialize_closure(Cyc_nitems);
Cyc_initialize_states();
# 157
_TL25: _T0=Cyc_this_state;_T1=(unsigned)_T0;if(_T1)goto _TL26;else{goto _TL27;}
# 162
_TL26: _T2=Cyc_this_state;_T3=_T2->items;_T4=Cyc_this_state;_T5=_T4->nitems;_T6=(int)_T5;Cyc_closure(_T3,_T6);
# 164
Cyc_save_reductions();
# 166
Cyc_new_itemsets();
# 168
Cyc_append_states();
# 172
if(Cyc_nshifts <= 0)goto _TL28;
Cyc_save_shifts();goto _TL29;_TL28: _TL29: _T7=
# 176
_check_null(Cyc_this_state);Cyc_this_state=_T7->next;goto _TL25;_TL27:
# 180
 Cyc_finalize_closure();
Cyc_free_storage();
# 184
Cyc_augment_automaton();}
# 196 "LR0.cyc"
void Cyc_new_itemsets (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;unsigned char*_T5;short*_T6;struct _fat_ptr _T7;unsigned char*_T8;short*_T9;struct _fat_ptr*_TA;struct _fat_ptr _TB;unsigned char*_TC;short*_TD;short _TE;struct _fat_ptr _TF;int _T10;unsigned char*_T11;short*_T12;short _T13;struct _fat_ptr _T14;int _T15;unsigned char*_T16;struct _fat_ptr*_T17;struct _fat_ptr _T18;unsigned char*_T19;unsigned _T1A;struct _fat_ptr _T1B;int _T1C;int _T1D;unsigned char*_T1E;short*_T1F;int _T20;struct _fat_ptr _T21;int _T22;unsigned char*_T23;struct _fat_ptr*_T24;struct _fat_ptr*_T25;struct _fat_ptr _T26;unsigned char*_T27;short*_T28;int _T29;struct _fat_ptr _T2A;unsigned char*_T2B;struct _fat_ptr*_T2C;int _T2D;
# 199
int i;
int shiftcount;
struct _fat_ptr isp;
struct _fat_ptr ksp;
int symbol;
# 209
i=0;_TL2D: if(i < Cyc_nsyms)goto _TL2B;else{goto _TL2C;}
_TL2B: _T0=Cyc_kernel_end;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(struct _fat_ptr),_T1);_T3=(struct _fat_ptr*)_T2;*_T3=_tag_fat(0,0,0);
# 209
i=i + 1;goto _TL2D;_TL2C:
# 212
 shiftcount=0;
# 214
isp=Cyc_itemset;
# 216
_TL2E: _T4=isp;_T5=_T4.curr;_T6=(short*)_T5;_T7=Cyc_itemsetend;_T8=_T7.curr;_T9=(short*)_T8;if(_T6 < _T9)goto _TL2F;else{goto _TL30;}
# 218
_TL2F: _TA=& isp;_TB=_fat_ptr_inplace_plus_post(_TA,sizeof(short),1);_TC=_check_fat_subscript(_TB,sizeof(short),0U);_TD=(short*)_TC;_TE=*_TD;i=(int)_TE;_TF=Cyc_ritem;_T10=i;_T11=_check_fat_subscript(_TF,sizeof(short),_T10);_T12=(short*)_T11;_T13=*_T12;
symbol=(int)_T13;
if(symbol <= 0)goto _TL31;_T14=Cyc_kernel_end;_T15=symbol;_T16=_check_fat_subscript(_T14,sizeof(struct _fat_ptr),_T15);_T17=(struct _fat_ptr*)_T16;
# 222
ksp=*_T17;_T18=ksp;_T19=_T18.curr;_T1A=(unsigned)_T19;
# 224
if(_T1A)goto _TL33;else{goto _TL35;}
# 226
_TL35: _T1B=Cyc_shift_symbol;_T1C=shiftcount;shiftcount=_T1C + 1;_T1D=_T1C;_T1E=_check_fat_subscript(_T1B,sizeof(short),_T1D);_T1F=(short*)_T1E;_T20=symbol;*_T1F=(short)_T20;_T21=Cyc_kernel_base;_T22=symbol;_T23=_check_fat_subscript(_T21,sizeof(struct _fat_ptr),_T22);_T24=(struct _fat_ptr*)_T23;
ksp=*_T24;goto _TL34;_TL33: _TL34: _T25=& ksp;_T26=
# 230
_fat_ptr_inplace_plus_post(_T25,sizeof(short),1);_T27=_check_fat_subscript(_T26,sizeof(short),0U);_T28=(short*)_T27;_T29=i + 1;*_T28=(short)_T29;_T2A=Cyc_kernel_end;_T2B=_T2A.curr;_T2C=(struct _fat_ptr*)_T2B;_T2D=symbol;
_T2C[_T2D]=ksp;goto _TL32;_TL31: _TL32: goto _TL2E;_TL30:
# 235
 Cyc_nshifts=shiftcount;}
# 244
void Cyc_append_states (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;short _T9;int _TA;int _TB;struct _fat_ptr _TC;int _TD;unsigned char*_TE;short*_TF;struct _fat_ptr _T10;unsigned char*_T11;short*_T12;int _T13;struct _fat_ptr _T14;int _T15;unsigned char*_T16;short*_T17;int _T18;struct _fat_ptr _T19;int _T1A;unsigned char*_T1B;short*_T1C;short _T1D;struct _fat_ptr _T1E;int _T1F;unsigned char*_T20;short*_T21;int _T22;
# 247
int i;
int j;
int symbol;
# 257
i=1;_TL39: if(i < Cyc_nshifts)goto _TL37;else{goto _TL38;}
# 259
_TL37: _T0=Cyc_shift_symbol;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(short),_T1);_T3=(short*)_T2;_T4=*_T3;symbol=(int)_T4;
j=i;
_TL3A: if(j > 0)goto _TL3D;else{goto _TL3C;}_TL3D: _T5=Cyc_shift_symbol;_T6=j - 1;_T7=_check_fat_subscript(_T5,sizeof(short),_T6);_T8=(short*)_T7;_T9=*_T8;_TA=(int)_T9;_TB=symbol;if(_TA > _TB)goto _TL3B;else{goto _TL3C;}
# 263
_TL3B: _TC=Cyc_shift_symbol;_TD=j;_TE=_check_fat_subscript(_TC,sizeof(short),_TD);_TF=(short*)_TE;_T10=Cyc_shift_symbol;_T11=_T10.curr;_T12=(short*)_T11;_T13=j - 1;*_TF=_T12[_T13];
j=j + -1;goto _TL3A;_TL3C: _T14=Cyc_shift_symbol;_T15=j;_T16=_check_fat_subscript(_T14,sizeof(short),_T15);_T17=(short*)_T16;_T18=symbol;
# 266
*_T17=(short)_T18;
# 257
i=i + 1;goto _TL39;_TL38:
# 269
 i=0;_TL41: if(i < Cyc_nshifts)goto _TL3F;else{goto _TL40;}
# 271
_TL3F: _T19=Cyc_shift_symbol;_T1A=i;_T1B=_check_fat_subscript(_T19,sizeof(short),_T1A);_T1C=(short*)_T1B;_T1D=*_T1C;symbol=(int)_T1D;_T1E=Cyc_shiftset;_T1F=i;_T20=_check_fat_subscript(_T1E,sizeof(short),_T1F);_T21=(short*)_T20;_T22=
Cyc_get_state(symbol);*_T21=(short)_T22;
# 269
i=i + 1;goto _TL41;_TL40:;}
# 283 "LR0.cyc"
int Cyc_get_state(int symbol){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;int _T5;unsigned char*_T6;struct _fat_ptr*_T7;struct _fat_ptr _T8;unsigned char*_T9;struct _fat_ptr _TA;unsigned char*_TB;int _TC;struct _fat_ptr _TD;unsigned char*_TE;short*_TF;struct _fat_ptr _T10;unsigned char*_T11;short*_T12;struct _fat_ptr*_T13;struct _fat_ptr _T14;unsigned char*_T15;short*_T16;short _T17;int _T18;struct _fat_ptr _T19;int _T1A;unsigned char*_T1B;struct Cyc_core_tag**_T1C;struct Cyc_core_tag*_T1D;unsigned _T1E;int _T1F;struct Cyc_core_tag*_T20;short _T21;int _T22;int _T23;struct _fat_ptr _T24;int _T25;unsigned char*_T26;struct _fat_ptr*_T27;struct Cyc_core_tag*_T28;int _T29;struct _fat_ptr _T2A;unsigned char*_T2B;short*_T2C;struct _fat_ptr _T2D;unsigned char*_T2E;short*_T2F;struct _fat_ptr*_T30;struct _fat_ptr _T31;unsigned char*_T32;short*_T33;short _T34;int _T35;struct _fat_ptr*_T36;struct _fat_ptr _T37;unsigned char*_T38;short*_T39;short _T3A;int _T3B;int _T3C;struct Cyc_core_tag*_T3D;struct Cyc_core_tag*_T3E;unsigned _T3F;struct Cyc_core_tag*_T40;struct Cyc_core_tag*_T41;struct _fat_ptr _T42;int _T43;unsigned char*_T44;struct Cyc_core_tag**_T45;struct Cyc_core_tag*_T46;short _T47;int _T48;
# 286
int key;
struct _fat_ptr isp1;
struct _fat_ptr isp2;
struct _fat_ptr iend;
struct Cyc_core_tag*sp;
int found;
# 293
int n;_T0=Cyc_kernel_base;_T1=symbol;_T2=_check_fat_subscript(_T0,sizeof(struct _fat_ptr),_T1);_T3=(struct _fat_ptr*)_T2;
# 299
isp1=*_T3;_T4=Cyc_kernel_end;_T5=symbol;_T6=_check_fat_subscript(_T4,sizeof(struct _fat_ptr),_T5);_T7=(struct _fat_ptr*)_T6;
iend=*_T7;_T8=iend;_T9=_T8.curr;_TA=isp1;_TB=_TA.curr;_TC=_T9 - _TB;
n=_TC / sizeof(short);
# 304
key=0;
_TL42: _TD=isp1;_TE=_TD.curr;_TF=(short*)_TE;_T10=iend;_T11=_T10.curr;_T12=(short*)_T11;if(_TF < _T12)goto _TL43;else{goto _TL44;}
_TL43: _T13=& isp1;_T14=_fat_ptr_inplace_plus_post(_T13,sizeof(short),1);_T15=_check_fat_subscript(_T14,sizeof(short),0U);_T16=(short*)_T15;_T17=*_T16;_T18=(int)_T17;key=key + _T18;goto _TL42;_TL44:
# 308
 key=key % 1009;_T19=Cyc_state_table;_T1A=key;_T1B=_check_fat_subscript(_T19,sizeof(struct Cyc_core_tag*),_T1A);_T1C=(struct Cyc_core_tag**)_T1B;
# 310
sp=*_T1C;_T1D=sp;_T1E=(unsigned)_T1D;
# 312
if(!_T1E)goto _TL45;
# 314
found=0;
_TL47: _T1F=found;if(_T1F)goto _TL49;else{goto _TL48;}
# 317
_TL48: _T20=_check_null(sp);_T21=_T20->nitems;_T22=(int)_T21;_T23=n;if(_T22!=_T23)goto _TL4A;
# 319
found=1;_T24=Cyc_kernel_base;_T25=symbol;_T26=_check_fat_subscript(_T24,sizeof(struct _fat_ptr),_T25);_T27=(struct _fat_ptr*)_T26;
isp1=*_T27;_T28=sp;
isp2=_T28->items;
# 323
_TL4C: _T29=found;if(_T29)goto _TL4F;else{goto _TL4E;}_TL4F: _T2A=isp1;_T2B=_T2A.curr;_T2C=(short*)_T2B;_T2D=iend;_T2E=_T2D.curr;_T2F=(short*)_T2E;if(_T2C < _T2F)goto _TL4D;else{goto _TL4E;}
# 325
_TL4D: _T30=& isp1;_T31=_fat_ptr_inplace_plus_post(_T30,sizeof(short),1);_T32=_check_fat_subscript(_T31,sizeof(short),0U);_T33=(short*)_T32;_T34=*_T33;_T35=(int)_T34;_T36=& isp2;_T37=_fat_ptr_inplace_plus_post(_T36,sizeof(short),1);_T38=_check_fat_subscript(_T37,sizeof(short),0U);_T39=(short*)_T38;_T3A=*_T39;_T3B=(int)_T3A;if(_T35==_T3B)goto _TL50;
found=0;goto _TL51;_TL50: _TL51: goto _TL4C;_TL4E: goto _TL4B;_TL4A: _TL4B: _T3C=found;
# 330
if(_T3C)goto _TL52;else{goto _TL54;}
# 332
_TL54: _T3D=sp;_T3E=_T3D->link;_T3F=(unsigned)_T3E;if(!_T3F)goto _TL55;_T40=sp;
# 334
sp=_T40->link;goto _TL56;
# 338
_TL55: _T41=sp;_T41->link=Cyc_new_state(symbol);sp=_T41->link;
found=1;_TL56: goto _TL53;_TL52: _TL53: goto _TL47;_TL49: goto _TL46;
# 346
_TL45: _T42=Cyc_state_table;_T43=key;_T44=_check_fat_subscript(_T42,sizeof(struct Cyc_core_tag*),_T43);_T45=(struct Cyc_core_tag**)_T44;sp=Cyc_new_state(symbol);*_T45=sp;_TL46: _T46=
# 349
_check_null(sp);_T47=_T46->number;_T48=(int)_T47;return _T48;}
# 356
struct Cyc_core_tag*Cyc_new_state(int symbol){struct _fat_ptr _T0;struct _fat_ptr _T1;int _T2;unsigned char*_T3;struct _fat_ptr*_T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;struct _fat_ptr*_T8;struct _fat_ptr _T9;unsigned char*_TA;struct _fat_ptr _TB;unsigned char*_TC;int _TD;void*_TE;struct Cyc_core_tag*_TF;struct Cyc_core_tag*_T10;struct Cyc_core_tag*_T11;int _T12;struct Cyc_core_tag*_T13;int _T14;struct Cyc_core_tag*_T15;int _T16;struct Cyc_core_tag*_T17;struct _fat_ptr _T18;int _T19;short*_T1A;unsigned _T1B;unsigned _T1C;struct Cyc_core_tag*_T1D;struct _fat_ptr _T1E;unsigned char*_T1F;short*_T20;struct _fat_ptr _T21;unsigned char*_T22;short*_T23;struct _fat_ptr*_T24;struct _fat_ptr _T25;unsigned char*_T26;short*_T27;struct _fat_ptr*_T28;struct _fat_ptr _T29;unsigned char*_T2A;short*_T2B;struct Cyc_core_tag*_T2C;struct Cyc_core_tag*_T2D;
# 359
int n;
struct Cyc_core_tag*p;
struct _fat_ptr isp1;
struct _fat_ptr isp2;
struct _fat_ptr iend;
# 369
if(Cyc_nstates < 32767)goto _TL57;_T0=
_tag_fat("states",sizeof(char),7U);Cyc_toomany(_T0);goto _TL58;_TL57: _TL58: _T1=Cyc_kernel_base;_T2=symbol;_T3=_check_fat_subscript(_T1,sizeof(struct _fat_ptr),_T2);_T4=(struct _fat_ptr*)_T3;
# 372
isp1=*_T4;_T5=Cyc_kernel_end;_T6=symbol;_T7=_check_fat_subscript(_T5,sizeof(struct _fat_ptr),_T6);_T8=(struct _fat_ptr*)_T7;
iend=*_T8;_T9=iend;_TA=_T9.curr;_TB=isp1;_TC=_TB.curr;_TD=_TA - _TC;
n=_TD / sizeof(short);_TE=_cycalloc(sizeof(struct Cyc_core_tag));
p=(struct Cyc_core_tag*)_TE;_TF=p;
# 377
_TF->next=0;_T10=p;
_T10->link=0;_T11=p;_T12=symbol;
_T11->accessing_symbol=(short)_T12;_T13=p;_T14=Cyc_nstates;
_T13->number=(short)_T14;_T15=p;_T16=n;
_T15->nitems=(short)_T16;_T17=p;_T19=n;{unsigned _T2E=(unsigned)_T19;_T1B=_check_times(_T2E,sizeof(short));{short*_T2F=_cycalloc_atomic(_T1B);{unsigned _T30=_T2E;unsigned _temp_;_temp_=0;_TL5C: if(_temp_ < _T30)goto _TL5A;else{goto _TL5B;}_TL5A: _T1C=_temp_;
_T2F[_T1C]=0;_temp_=_temp_ + 1;goto _TL5C;_TL5B:;}_T1A=(short*)_T2F;}_T18=_tag_fat(_T1A,sizeof(short),_T2E);}_T17->items=_T18;_T1D=p;
# 384
isp2=_T1D->items;
_TL5D: _T1E=isp1;_T1F=_T1E.curr;_T20=(short*)_T1F;_T21=iend;_T22=_T21.curr;_T23=(short*)_T22;if(_T20 < _T23)goto _TL5E;else{goto _TL5F;}
_TL5E: _T24=& isp2;_T25=_fat_ptr_inplace_plus_post(_T24,sizeof(short),1);_T26=_check_fat_subscript(_T25,sizeof(short),0U);_T27=(short*)_T26;_T28=& isp1;_T29=_fat_ptr_inplace_plus_post(_T28,sizeof(short),1);_T2A=_check_fat_subscript(_T29,sizeof(short),0U);_T2B=(short*)_T2A;*_T27=*_T2B;goto _TL5D;_TL5F: _T2C=
# 388
_check_null(Cyc_last_state);_T2C->next=p;
Cyc_last_state=p;
# 391
Cyc_nstates=Cyc_nstates + 1;_T2D=p;
# 393
return _T2D;}
# 397
void Cyc_initialize_states (void){void*_T0;struct Cyc_core_tag*_T1;struct Cyc_core_tag*_T2;struct Cyc_core_tag*_T3;struct Cyc_core_tag*_T4;struct Cyc_core_tag*_T5;struct Cyc_core_tag*_T6;
# 400
struct Cyc_core_tag*p;_T0=_cycalloc(sizeof(struct Cyc_core_tag));
# 406
p=(struct Cyc_core_tag*)_T0;_T1=p;
_T1->next=0;_T2=p;
_T2->link=0;_T3=p;
_T3->number=0;_T4=p;
_T4->accessing_symbol=0;_T5=p;
_T5->nitems=0;_T6=p;
_T6->items=_tag_fat(0,0,0);
Cyc_this_state=p;Cyc_last_state=Cyc_this_state;Cyc_first_state=Cyc_last_state;
Cyc_nstates=1;}
# 418
void Cyc_save_shifts (void){void*_T0;struct Cyc_shifts_tag*_T1;struct Cyc_core_tag*_T2;struct Cyc_shifts_tag*_T3;int _T4;struct Cyc_shifts_tag*_T5;struct Cyc_shifts_tag*_T6;struct _fat_ptr _T7;int _T8;short*_T9;unsigned _TA;unsigned _TB;struct Cyc_shifts_tag*_TC;struct _fat_ptr _TD;int _TE;struct _fat_ptr _TF;unsigned char*_T10;short*_T11;struct _fat_ptr _T12;unsigned char*_T13;short*_T14;struct _fat_ptr*_T15;struct _fat_ptr _T16;unsigned char*_T17;short*_T18;struct _fat_ptr*_T19;struct _fat_ptr _T1A;unsigned char*_T1B;short*_T1C;struct Cyc_shifts_tag*_T1D;unsigned _T1E;struct Cyc_shifts_tag*_T1F;
# 421
struct Cyc_shifts_tag*p;
struct _fat_ptr sp1;
struct _fat_ptr sp2;
struct _fat_ptr send;_T0=_cycalloc(sizeof(struct Cyc_shifts_tag));
# 429
p=(struct Cyc_shifts_tag*)_T0;_T1=p;_T2=
# 431
_check_null(Cyc_this_state);_T1->number=_T2->number;_T3=p;_T4=Cyc_nshifts;
_T3->nshifts=(short)_T4;_T5=p;
_T5->next=0;_T6=p;_T8=Cyc_nshifts;{unsigned _T20=(unsigned)_T8;_TA=_check_times(_T20,sizeof(short));{short*_T21=_cycalloc_atomic(_TA);{unsigned _T22=_T20;unsigned _new2_cyclone;_new2_cyclone=0;_TL63: if(_new2_cyclone < _T22)goto _TL61;else{goto _TL62;}_TL61: _TB=_new2_cyclone;
_T21[_TB]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL63;_TL62:;}_T9=(short*)_T21;}_T7=_tag_fat(_T9,sizeof(short),_T20);}_T6->shifts=_T7;
sp1=Cyc_shiftset;_TC=p;
sp2=_TC->shifts;_TD=Cyc_shiftset;_TE=Cyc_nshifts;
send=_fat_ptr_plus(_TD,sizeof(short),_TE);
# 439
_TL64: _TF=sp1;_T10=_TF.curr;_T11=(short*)_T10;_T12=send;_T13=_T12.curr;_T14=(short*)_T13;if(_T11 < _T14)goto _TL65;else{goto _TL66;}
_TL65: _T15=& sp2;_T16=_fat_ptr_inplace_plus_post(_T15,sizeof(short),1);_T17=_check_fat_subscript(_T16,sizeof(short),0U);_T18=(short*)_T17;_T19=& sp1;_T1A=_fat_ptr_inplace_plus_post(_T19,sizeof(short),1);_T1B=_check_fat_subscript(_T1A,sizeof(short),0U);_T1C=(short*)_T1B;*_T18=*_T1C;goto _TL64;_TL66: _T1D=Cyc_last_shift;_T1E=(unsigned)_T1D;
# 442
if(!_T1E)goto _TL67;_T1F=Cyc_last_shift;
# 444
_T1F->next=p;
Cyc_last_shift=p;goto _TL68;
# 449
_TL67: Cyc_first_shift=p;
Cyc_last_shift=p;_TL68:;}
# 458
void Cyc_save_reductions (void){struct _fat_ptr _T0;unsigned char*_T1;short*_T2;struct _fat_ptr _T3;unsigned char*_T4;short*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;unsigned char*_T8;short*_T9;short _TA;int _TB;unsigned char*_TC;short*_TD;short _TE;struct _fat_ptr _TF;int _T10;int _T11;unsigned char*_T12;short*_T13;int _T14;struct _fat_ptr*_T15;int _T16;void*_T17;struct Cyc_reductions_tag*_T18;struct Cyc_reductions_tag*_T19;struct Cyc_core_tag*_T1A;struct Cyc_reductions_tag*_T1B;int _T1C;struct Cyc_reductions_tag*_T1D;struct _fat_ptr _T1E;int _T1F;short*_T20;unsigned _T21;unsigned _T22;struct Cyc_reductions_tag*_T23;struct _fat_ptr _T24;int _T25;struct _fat_ptr _T26;unsigned char*_T27;short*_T28;struct _fat_ptr _T29;unsigned char*_T2A;short*_T2B;struct _fat_ptr*_T2C;struct _fat_ptr _T2D;unsigned char*_T2E;short*_T2F;struct _fat_ptr*_T30;struct _fat_ptr _T31;unsigned char*_T32;short*_T33;struct Cyc_reductions_tag*_T34;unsigned _T35;struct Cyc_reductions_tag*_T36;
# 461
struct _fat_ptr isp;
struct _fat_ptr rp1;
struct _fat_ptr rp2;
int item;
int count;
struct Cyc_reductions_tag*p;
# 468
struct _fat_ptr rend;
# 472
count=0;
isp=Cyc_itemset;_TL6C: _T0=isp;_T1=_T0.curr;_T2=(short*)_T1;_T3=Cyc_itemsetend;_T4=_T3.curr;_T5=(short*)_T4;if(_T2 < _T5)goto _TL6A;else{goto _TL6B;}
# 475
_TL6A: _T6=Cyc_ritem;_T7=isp;_T8=_check_fat_subscript(_T7,sizeof(short),0U);_T9=(short*)_T8;_TA=*_T9;_TB=(int)_TA;_TC=_check_fat_subscript(_T6,sizeof(short),_TB);_TD=(short*)_TC;_TE=*_TD;item=(int)_TE;
if(item >= 0)goto _TL6D;_TF=Cyc_redset;_T10=count;
# 478
count=_T10 + 1;_T11=_T10;_T12=_check_fat_subscript(_TF,sizeof(short),_T11);_T13=(short*)_T12;_T14=- item;*_T13=(short)_T14;goto _TL6E;_TL6D: _TL6E: _T15=& isp;
# 473
_fat_ptr_inplace_plus(_T15,sizeof(short),1);goto _TL6C;_TL6B: _T16=count;
# 484
if(!_T16)goto _TL6F;_T17=_cycalloc(sizeof(struct Cyc_reductions_tag));
# 490
p=(struct Cyc_reductions_tag*)_T17;_T18=p;
_T18->next=0;_T19=p;_T1A=
_check_null(Cyc_this_state);_T19->number=_T1A->number;_T1B=p;_T1C=count;
_T1B->nreds=(short)_T1C;_T1D=p;_T1F=count;{unsigned _T37=(unsigned)_T1F;_T21=_check_times(_T37,sizeof(short));{short*_T38=_cycalloc_atomic(_T21);{unsigned _T39=_T37;unsigned _new2_cyclone;_new2_cyclone=0;_TL74: if(_new2_cyclone < _T39)goto _TL72;else{goto _TL73;}_TL72: _T22=_new2_cyclone;
_T38[_T22]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL74;_TL73:;}_T20=(short*)_T38;}_T1E=_tag_fat(_T20,sizeof(short),_T37);}_T1D->rules=_T1E;
rp1=Cyc_redset;_T23=p;
rp2=_T23->rules;_T24=rp1;_T25=count;
rend=_fat_ptr_plus(_T24,sizeof(short),_T25);
# 499
_TL75: _T26=rp1;_T27=_T26.curr;_T28=(short*)_T27;_T29=rend;_T2A=_T29.curr;_T2B=(short*)_T2A;if(_T28 < _T2B)goto _TL76;else{goto _TL77;}
_TL76: _T2C=& rp2;_T2D=_fat_ptr_inplace_plus_post(_T2C,sizeof(short),1);_T2E=_check_fat_subscript(_T2D,sizeof(short),0U);_T2F=(short*)_T2E;_T30=& rp1;_T31=_fat_ptr_inplace_plus_post(_T30,sizeof(short),1);_T32=_check_fat_subscript(_T31,sizeof(short),0U);_T33=(short*)_T32;*_T2F=*_T33;goto _TL75;_TL77: _T34=Cyc_last_reduction;_T35=(unsigned)_T34;
# 502
if(!_T35)goto _TL78;_T36=Cyc_last_reduction;
# 504
_T36->next=p;
Cyc_last_reduction=p;goto _TL79;
# 509
_TL78: Cyc_first_reduction=p;
Cyc_last_reduction=p;_TL79: goto _TL70;_TL6F: _TL70:;}
# 522 "LR0.cyc"
void Cyc_augment_automaton (void){struct Cyc_shifts_tag*_T0;unsigned _T1;struct Cyc_shifts_tag*_T2;short _T3;int _T4;struct Cyc_shifts_tag*_T5;short _T6;struct Cyc_core_tag*_T7;struct Cyc_core_tag*_T8;short _T9;int _TA;int _TB;struct Cyc_core_tag*_TC;short _TD;int _TE;int _TF;struct Cyc_core_tag*_T10;struct Cyc_core_tag*_T11;short _T12;int _T13;int _T14;struct Cyc_core_tag*_T15;short _T16;struct Cyc_shifts_tag*_T17;unsigned _T18;struct Cyc_shifts_tag*_T19;short _T1A;int _T1B;int _T1C;struct Cyc_shifts_tag*_T1D;struct Cyc_shifts_tag*_T1E;unsigned _T1F;struct Cyc_shifts_tag*_T20;short _T21;int _T22;int _T23;void*_T24;struct Cyc_shifts_tag*_T25;struct Cyc_shifts_tag*_T26;int _T27;struct Cyc_shifts_tag*_T28;struct Cyc_shifts_tag*_T29;short _T2A;int _T2B;int _T2C;struct Cyc_shifts_tag*_T2D;struct _fat_ptr _T2E;struct Cyc_shifts_tag*_T2F;short _T30;int _T31;int _T32;short*_T33;unsigned _T34;unsigned _T35;struct Cyc_shifts_tag*_T36;struct _fat_ptr _T37;unsigned char*_T38;short*_T39;int _T3A;struct Cyc_shifts_tag*_T3B;short _T3C;struct Cyc_shifts_tag*_T3D;struct _fat_ptr _T3E;int _T3F;unsigned char*_T40;short*_T41;struct Cyc_shifts_tag*_T42;struct _fat_ptr _T43;int _T44;unsigned char*_T45;short*_T46;struct Cyc_shifts_tag*_T47;struct Cyc_shifts_tag*_T48;struct Cyc_shifts_tag*_T49;void*_T4A;struct Cyc_shifts_tag*_T4B;struct Cyc_shifts_tag*_T4C;int _T4D;struct Cyc_shifts_tag*_T4E;struct Cyc_shifts_tag*_T4F;short*_T50;short*_T51;unsigned _T52;unsigned _T53;struct Cyc_shifts_tag*_T54;struct _fat_ptr _T55;unsigned char*_T56;short*_T57;int _T58;struct Cyc_shifts_tag*_T59;struct Cyc_shifts_tag*_T5A;void*_T5B;struct Cyc_shifts_tag*_T5C;struct Cyc_shifts_tag*_T5D;struct _fat_ptr _T5E;struct Cyc_shifts_tag*_T5F;short _T60;int _T61;int _T62;short*_T63;unsigned _T64;unsigned _T65;struct Cyc_shifts_tag*_T66;struct Cyc_shifts_tag*_T67;short _T68;int _T69;int _T6A;struct Cyc_shifts_tag*_T6B;struct Cyc_core_tag*_T6C;int _T6D;struct Cyc_shifts_tag*_T6E;short _T6F;int _T70;struct Cyc_core_tag*_T71;short _T72;int _T73;int _T74;struct Cyc_shifts_tag*_T75;struct _fat_ptr _T76;int _T77;int _T78;unsigned char*_T79;short*_T7A;int _T7B;struct Cyc_shifts_tag*_T7C;struct _fat_ptr _T7D;int _T7E;unsigned char*_T7F;short*_T80;struct Cyc_shifts_tag*_T81;struct _fat_ptr _T82;int _T83;unsigned char*_T84;short*_T85;struct Cyc_core_tag*_T86;struct Cyc_shifts_tag*_T87;struct _fat_ptr _T88;int _T89;int _T8A;unsigned char*_T8B;short*_T8C;int _T8D;struct Cyc_shifts_tag*_T8E;struct Cyc_shifts_tag*_T8F;void*_T90;struct Cyc_shifts_tag*_T91;struct Cyc_shifts_tag*_T92;struct Cyc_shifts_tag*_T93;short*_T94;short*_T95;unsigned _T96;unsigned _T97;struct Cyc_shifts_tag*_T98;struct Cyc_shifts_tag*_T99;struct _fat_ptr _T9A;unsigned char*_T9B;short*_T9C;int _T9D;struct Cyc_shifts_tag*_T9E;void*_T9F;struct Cyc_shifts_tag*_TA0;short*_TA1;short*_TA2;unsigned _TA3;unsigned _TA4;struct Cyc_shifts_tag*_TA5;struct Cyc_shifts_tag*_TA6;struct Cyc_shifts_tag*_TA7;struct Cyc_shifts_tag*_TA8;struct _fat_ptr _TA9;unsigned char*_TAA;short*_TAB;int _TAC;void*_TAD;struct Cyc_core_tag*_TAE;struct Cyc_core_tag*_TAF;int _TB0;struct Cyc_core_tag*_TB1;struct Cyc_core_tag*_TB2;struct Cyc_core_tag*_TB3;struct Cyc_core_tag*_TB4;struct Cyc_core_tag*_TB5;void*_TB6;struct Cyc_shifts_tag*_TB7;struct Cyc_shifts_tag*_TB8;short*_TB9;short*_TBA;unsigned _TBB;unsigned _TBC;struct Cyc_shifts_tag*_TBD;int _TBE;int _TBF;struct Cyc_shifts_tag*_TC0;struct Cyc_shifts_tag*_TC1;struct _fat_ptr _TC2;unsigned char*_TC3;short*_TC4;int _TC5;struct Cyc_shifts_tag*_TC6;void*_TC7;struct Cyc_core_tag*_TC8;struct Cyc_core_tag*_TC9;struct Cyc_core_tag*_TCA;struct Cyc_core_tag*_TCB;struct Cyc_core_tag*_TCC;struct Cyc_core_tag*_TCD;int _TCE;int _TCF;struct Cyc_core_tag*_TD0;
# 525
int i;
int k;
# 528
struct Cyc_core_tag*statep;
struct Cyc_shifts_tag*sp;
struct Cyc_shifts_tag*sp2;
struct Cyc_shifts_tag*sp1=0;
# 533
sp=Cyc_first_shift;_T0=sp;_T1=(unsigned)_T0;
# 535
if(!_T1)goto _TL7A;_T2=sp;_T3=_T2->number;_T4=(int)_T3;
# 537
if(_T4!=0)goto _TL7C;_T5=sp;_T6=_T5->nshifts;
# 539
k=(int)_T6;_T7=
_check_null(Cyc_first_state);statep=_T7->next;
# 544
_TL7E: _T8=_check_null(statep);_T9=_T8->accessing_symbol;_TA=(int)_T9;_TB=Cyc_start_symbol;if(_TA < _TB)goto _TL81;else{goto _TL80;}_TL81: _TC=statep;_TD=_TC->number;_TE=(int)_TD;_TF=k;if(_TE < _TF)goto _TL7F;else{goto _TL80;}
# 546
_TL7F: _T10=statep;statep=_T10->next;goto _TL7E;_TL80: _T11=statep;_T12=_T11->accessing_symbol;_T13=(int)_T12;_T14=Cyc_start_symbol;
# 548
if(_T13!=_T14)goto _TL82;_T15=statep;_T16=_T15->number;
# 552
k=(int)_T16;
# 554
_TL84: _T17=sp;_T18=(unsigned)_T17;if(_T18)goto _TL87;else{goto _TL86;}_TL87: _T19=sp;_T1A=_T19->number;_T1B=(int)_T1A;_T1C=k;if(_T1B < _T1C)goto _TL85;else{goto _TL86;}
# 556
_TL85: sp1=sp;_T1D=sp;
sp=_T1D->next;goto _TL84;_TL86: _T1E=sp;_T1F=(unsigned)_T1E;
# 560
if(!_T1F)goto _TL88;_T20=sp;_T21=_T20->number;_T22=(int)_T21;_T23=k;if(_T22!=_T23)goto _TL88;_T24=_cycalloc(sizeof(struct Cyc_shifts_tag));
# 566
sp2=(struct Cyc_shifts_tag*)_T24;_T25=sp2;
_T25->next=0;_T26=sp2;_T27=k;
_T26->number=(short)_T27;_T28=sp2;_T29=sp;_T2A=_T29->nshifts;_T2B=(int)_T2A;_T2C=_T2B + 1;
_T28->nshifts=(short)_T2C;_T2D=sp2;_T2F=sp;_T30=_T2F->nshifts;_T31=(int)_T30;_T32=_T31 + 1;{unsigned _TD1=(unsigned)_T32;_T34=_check_times(_TD1,sizeof(short));{short*_TD2=_cycalloc_atomic(_T34);{unsigned _TD3=_TD1;unsigned _new2_cyclone;_new2_cyclone=0;_TL8D: if(_new2_cyclone < _TD3)goto _TL8B;else{goto _TL8C;}_TL8B: _T35=_new2_cyclone;
_TD2[_T35]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL8D;_TL8C:;}_T33=(short*)_TD2;}_T2E=_tag_fat(_T33,sizeof(short),_TD1);}_T2D->shifts=_T2E;_T36=sp2;_T37=_T36->shifts;_T38=_check_fat_subscript(_T37,sizeof(short),0);_T39=(short*)_T38;_T3A=Cyc_nstates;
*_T39=(short)_T3A;_T3B=sp;_T3C=_T3B->nshifts;
i=(int)_T3C;_TL91: if(i > 0)goto _TL8F;else{goto _TL90;}
_TL8F: _T3D=sp2;_T3E=_T3D->shifts;_T3F=i;_T40=_check_fat_subscript(_T3E,sizeof(short),_T3F);_T41=(short*)_T40;_T42=sp;_T43=_T42->shifts;_T44=i - 1;_T45=_check_fat_subscript(_T43,sizeof(short),_T44);_T46=(short*)_T45;*_T41=*_T46;
# 572
i=i + -1;goto _TL91;_TL90: _T47=sp2;_T48=sp;
# 577
_T47->next=_T48->next;_T49=
_check_null(sp1);_T49->next=sp2;
if(sp!=Cyc_last_shift)goto _TL92;
Cyc_last_shift=sp2;goto _TL93;_TL92: _TL93:
 sp=0;goto _TL89;
# 585
_TL88: _T4A=_cycalloc(sizeof(struct Cyc_shifts_tag));sp2=(struct Cyc_shifts_tag*)_T4A;_T4B=sp2;
_T4B->next=0;_T4C=sp2;_T4D=k;
_T4C->number=(short)_T4D;_T4E=sp2;
_T4E->nshifts=1;_T4F=sp2;{unsigned _TD1=1U;_T52=_check_times(_TD1,sizeof(short));{short*_TD2=_cycalloc_atomic(_T52);{unsigned _TD3=_TD1;unsigned _new2_cyclone;_new2_cyclone=0;_TL97: if(_new2_cyclone < _TD3)goto _TL95;else{goto _TL96;}_TL95: _T53=_new2_cyclone;
_TD2[_T53]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL97;_TL96:;}_T51=(short*)_TD2;}_T50=_T51;}_T4F->shifts=_tag_fat(_T50,sizeof(short),1U);_T54=sp2;_T55=_T54->shifts;_T56=_T55.curr;_T57=(short*)_T56;_T58=Cyc_nstates;
_T57[0]=(short)_T58;_T59=sp2;
# 593
_T59->next=sp;_T5A=
_check_null(sp1);_T5A->next=sp2;
if(sp!=0)goto _TL98;
Cyc_last_shift=sp2;goto _TL99;_TL98: _TL99: _TL89: goto _TL83;
# 604
_TL82: sp=Cyc_first_shift;_T5B=_cycalloc(sizeof(struct Cyc_shifts_tag));
# 609
sp2=(struct Cyc_shifts_tag*)_T5B;_T5C=sp2;
_T5C->next=0;_T5D=sp2;_T5F=sp;_T60=_T5F->nshifts;_T61=(int)_T60;_T62=_T61 + 1;{unsigned _TD1=(unsigned)_T62;_T64=_check_times(_TD1,sizeof(short));{short*_TD2=_cycalloc_atomic(_T64);{unsigned _TD3=_TD1;unsigned _new2_cyclone;_new2_cyclone=0;_TL9D: if(_new2_cyclone < _TD3)goto _TL9B;else{goto _TL9C;}_TL9B: _T65=_new2_cyclone;
_TD2[_T65]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL9D;_TL9C:;}_T63=(short*)_TD2;}_T5E=_tag_fat(_T63,sizeof(short),_TD1);}_T5D->shifts=_T5E;_T66=sp2;_T67=sp;_T68=_T67->nshifts;_T69=(int)_T68;_T6A=_T69 + 1;
_T66->nshifts=(short)_T6A;_T6B=sp2;
_T6B->number=0;_T6C=Cyc_first_state;
# 616
statep=_T6C->next;
k=0;i=0;_TLA1: _T6D=i;_T6E=sp;_T6F=_T6E->nshifts;_T70=(int)_T6F;if(_T6D < _T70)goto _TL9F;else{goto _TLA0;}
# 619
_TL9F: _T71=_check_null(statep);_T72=_T71->accessing_symbol;_T73=(int)_T72;_T74=Cyc_start_symbol;if(_T73 <= _T74)goto _TLA2;if(i!=k)goto _TLA2;_T75=sp2;_T76=_T75->shifts;_T77=k;
k=_T77 + 1;_T78=_T77;_T79=_check_fat_subscript(_T76,sizeof(short),_T78);_T7A=(short*)_T79;_T7B=Cyc_nstates;*_T7A=(short)_T7B;goto _TLA3;_TLA2: _TLA3: _T7C=sp2;_T7D=_T7C->shifts;_T7E=k;_T7F=_check_fat_subscript(_T7D,sizeof(short),_T7E);_T80=(short*)_T7F;_T81=sp;_T82=_T81->shifts;_T83=i;_T84=_check_fat_subscript(_T82,sizeof(short),_T83);_T85=(short*)_T84;
*_T80=*_T85;_T86=statep;
statep=_T86->next;
# 617
k=k + 1;i=i + 1;goto _TLA1;_TLA0:
# 624
 if(i!=k)goto _TLA4;_T87=sp2;_T88=_T87->shifts;_T89=k;
k=_T89 + 1;_T8A=_T89;_T8B=_check_fat_subscript(_T88,sizeof(short),_T8A);_T8C=(short*)_T8B;_T8D=Cyc_nstates;*_T8C=(short)_T8D;goto _TLA5;_TLA4: _TLA5: _T8E=sp2;_T8F=sp;
# 629
_T8E->next=_T8F->next;
Cyc_first_shift=sp2;
if(Cyc_last_shift!=sp)goto _TLA6;
Cyc_last_shift=sp2;goto _TLA7;_TLA6: _TLA7:
# 634
 sp=0;
# 638
Cyc_insert_start_shift();_TL83: goto _TL7D;
# 645
_TL7C: _T90=_cycalloc(sizeof(struct Cyc_shifts_tag));sp=(struct Cyc_shifts_tag*)_T90;_T91=sp;
_T91->next=0;_T92=sp;
_T92->number=0;_T93=sp;{unsigned _TD1=1U;_T96=_check_times(_TD1,sizeof(short));{short*_TD2=_cycalloc_atomic(_T96);{unsigned _TD3=_TD1;unsigned _new2_cyclone;_new2_cyclone=0;_TLAB: if(_new2_cyclone < _TD3)goto _TLA9;else{goto _TLAA;}_TLA9: _T97=_new2_cyclone;
_TD2[_T97]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLAB;_TLAA:;}_T95=(short*)_TD2;}_T94=_T95;}_T93->shifts=_tag_fat(_T94,sizeof(short),1U);_T98=sp;
_T98->nshifts=1;_T99=sp;_T9A=_T99->shifts;_T9B=_T9A.curr;_T9C=(short*)_T9B;_T9D=Cyc_nstates;
_T9C[0]=(short)_T9D;_T9E=sp;
# 653
_T9E->next=Cyc_first_shift;
Cyc_first_shift=sp;
# 658
Cyc_insert_start_shift();_TL7D: goto _TL7B;
# 666
_TL7A: _T9F=_cycalloc(sizeof(struct Cyc_shifts_tag));sp=(struct Cyc_shifts_tag*)_T9F;_TA0=sp;{unsigned _TD1=1U;_TA3=_check_times(_TD1,sizeof(short));{short*_TD2=_cycalloc_atomic(_TA3);{unsigned _TD3=_TD1;unsigned _new2_cyclone;_new2_cyclone=0;_TLAF: if(_new2_cyclone < _TD3)goto _TLAD;else{goto _TLAE;}_TLAD: _TA4=_new2_cyclone;
_TD2[_TA4]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLAF;_TLAE:;}_TA2=(short*)_TD2;}_TA1=_TA2;}_TA0->shifts=_tag_fat(_TA1,sizeof(short),1U);_TA5=sp;
_TA5->next=0;_TA6=sp;
_TA6->number=0;_TA7=sp;
_TA7->nshifts=1;_TA8=sp;_TA9=_TA8->shifts;_TAA=_TA9.curr;_TAB=(short*)_TAA;_TAC=Cyc_nstates;
_TAB[0]=(short)_TAC;
# 674
Cyc_first_shift=sp;
Cyc_last_shift=sp;
# 679
Cyc_insert_start_shift();_TL7B: _TAD=_cycalloc(sizeof(struct Cyc_core_tag));
# 686
statep=(struct Cyc_core_tag*)_TAD;_TAE=statep;
_TAE->link=0;_TAF=statep;_TB0=Cyc_nstates;
_TAF->number=(short)_TB0;_TB1=statep;
_TB1->next=0;_TB2=statep;
_TB2->accessing_symbol=0;_TB3=statep;
_TB3->nitems=0;_TB4=statep;
_TB4->items=_tag_fat(0,0,0);_TB5=
_check_null(Cyc_last_state);_TB5->next=statep;
Cyc_last_state=statep;_TB6=_cycalloc(sizeof(struct Cyc_shifts_tag));
# 697
sp=(struct Cyc_shifts_tag*)_TB6;_TB7=sp;
_TB7->next=0;_TB8=sp;{unsigned _TD1=1U;_TBB=_check_times(_TD1,sizeof(short));{short*_TD2=_cycalloc_atomic(_TBB);{unsigned _TD3=_TD1;unsigned _new2_cyclone;_new2_cyclone=0;_TLB3: if(_new2_cyclone < _TD3)goto _TLB1;else{goto _TLB2;}_TLB1: _TBC=_new2_cyclone;
_TD2[_TBC]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLB3;_TLB2:;}_TBA=(short*)_TD2;}_TB9=_TBA;}_TB8->shifts=_tag_fat(_TB9,sizeof(short),1U);_TBD=sp;_TBE=Cyc_nstates;
Cyc_nstates=_TBE + 1;_TBF=_TBE;_TBD->number=(short)_TBF;_TC0=sp;
_TC0->nshifts=1;_TC1=sp;_TC2=_TC1->shifts;_TC3=_TC2.curr;_TC4=(short*)_TC3;_TC5=Cyc_nstates;
_TC4[0]=(short)_TC5;_TC6=
_check_null(Cyc_last_shift);_TC6->next=sp;
Cyc_last_shift=sp;
# 708
Cyc_final_state=Cyc_nstates;_TC7=_cycalloc(sizeof(struct Cyc_core_tag));
# 712
statep=(struct Cyc_core_tag*)_TC7;_TC8=statep;
_TC8->next=0;_TC9=statep;
_TC9->link=0;_TCA=statep;
_TCA->accessing_symbol=0;_TCB=statep;
_TCB->nitems=0;_TCC=statep;
_TCC->items=_tag_fat(0,0,0);_TCD=statep;_TCE=Cyc_nstates;
Cyc_nstates=_TCE + 1;_TCF=_TCE;_TCD->number=(short)_TCF;_TD0=
_check_null(Cyc_last_state);_TD0->next=statep;
Cyc_last_state=statep;}
# 727
void Cyc_insert_start_shift (void){void*_T0;struct Cyc_core_tag*_T1;struct Cyc_core_tag*_T2;struct Cyc_core_tag*_T3;struct Cyc_core_tag*_T4;struct Cyc_core_tag*_T5;int _T6;struct Cyc_core_tag*_T7;int _T8;struct Cyc_core_tag*_T9;void*_TA;struct Cyc_shifts_tag*_TB;short*_TC;short*_TD;unsigned _TE;unsigned _TF;struct Cyc_shifts_tag*_T10;struct Cyc_shifts_tag*_T11;int _T12;int _T13;struct Cyc_shifts_tag*_T14;struct Cyc_shifts_tag*_T15;struct _fat_ptr _T16;unsigned char*_T17;short*_T18;int _T19;struct Cyc_shifts_tag*_T1A;
# 730
struct Cyc_core_tag*statep;
struct Cyc_shifts_tag*sp;_T0=_cycalloc(sizeof(struct Cyc_core_tag));
# 734
statep=(struct Cyc_core_tag*)_T0;_T1=statep;
_T1->next=0;_T2=statep;
_T2->link=0;_T3=statep;
_T3->nitems=0;_T4=statep;
_T4->items=_tag_fat(0,0,0);_T5=statep;_T6=Cyc_nstates;
_T5->number=(short)_T6;_T7=statep;_T8=Cyc_start_symbol;
_T7->accessing_symbol=(short)_T8;_T9=
# 742
_check_null(Cyc_last_state);_T9->next=statep;
Cyc_last_state=statep;_TA=_cycalloc(sizeof(struct Cyc_shifts_tag));
# 746
sp=(struct Cyc_shifts_tag*)_TA;_TB=sp;{unsigned _T1B=1U;_TE=_check_times(_T1B,sizeof(short));{short*_T1C=_cycalloc_atomic(_TE);{unsigned _T1D=_T1B;unsigned _new2_cyclone;_new2_cyclone=0;_TLB7: if(_new2_cyclone < _T1D)goto _TLB5;else{goto _TLB6;}_TLB5: _TF=_new2_cyclone;
_T1C[_TF]=0;_new2_cyclone=_new2_cyclone + 1;goto _TLB7;_TLB6:;}_TD=(short*)_T1C;}_TC=_TD;}_TB->shifts=_tag_fat(_TC,sizeof(short),1U);_T10=sp;
_T10->next=0;_T11=sp;_T12=Cyc_nstates;
Cyc_nstates=_T12 + 1;_T13=_T12;_T11->number=(short)_T13;_T14=sp;
_T14->nshifts=1;_T15=sp;_T16=_T15->shifts;_T17=_T16.curr;_T18=(short*)_T17;_T19=Cyc_nstates;
_T18[0]=(short)_T19;_T1A=
# 753
_check_null(Cyc_last_shift);_T1A->next=sp;
Cyc_last_shift=sp;}
