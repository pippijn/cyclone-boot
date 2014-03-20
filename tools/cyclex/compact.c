#include <cyc_include.h>

# 122 "../../library/stdlib/core.h"
void*Cyc_Core_identity(void*);
# 124
int Cyc_Core_intcmp(int,int);extern char Cyc_Core_Not_found[10U];struct Cyc_Core_Not_found_exn_struct{char*tag;};struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};struct Cyc_Hashtable_Table;
# 39 "../../library/stdlib/hashtable.h"
extern struct Cyc_Hashtable_Table*Cyc_Hashtable_create(int,int(*)(void*,void*),int(*)(void*));
# 50
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*,void*,void*);
# 52
extern void*Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table*,void*);struct Cyc_Lexgen_Remember_Lexgen_Automata_trans_struct{int tag;int f1;};struct Cyc_Lexgen_Goto_Lexgen_Automata_move_struct{int tag;int f1;};struct Cyc_Lexgen_Perform_Lexgen_Automata_struct{int tag;int f1;};struct Cyc_Lexgen_Shift_Lexgen_Automata_struct{int tag;void*f1;struct _fat_ptr f2;};struct Cyc_Compact_Lex_tables{struct _fat_ptr base;struct _fat_ptr backtrk;struct _fat_ptr defaultX;struct _fat_ptr trans;struct _fat_ptr check;};
# 24 "compact.cyc"
static int Cyc_Compact_most_frequent_elt(struct _fat_ptr v){struct Cyc_Hashtable_Table*(*_T0)(int,int(*)(int,int),int(*)(int));struct Cyc_Hashtable_Table*(*_T1)(int,int(*)(void*,void*),int(*)(void*));int(*_T2)(int,int);int(*_T3)(int);void*(*_T4)(void*);int _T5;unsigned _T6;struct _fat_ptr _T7;unsigned _T8;struct _fat_ptr _T9;unsigned char*_TA;int*_TB;int*_TC;int _TD;struct _handler_cons*_TE;int _TF;int*(*_T10)(struct Cyc_Hashtable_Table*,int);void*(*_T11)(struct Cyc_Hashtable_Table*,void*);void*_T12;struct Cyc_Core_Not_found_exn_struct*_T13;char*_T14;char*_T15;int*_T16;struct _RegionHandle*_T17;void(*_T18)(struct Cyc_Hashtable_Table*,int,int*);void(*_T19)(struct Cyc_Hashtable_Table*,void*,void*);int*_T1A;int _T1B;int*_T1C;struct _RegionHandle _T1D=_new_region(0U,"rgn");struct _RegionHandle*rgn=& _T1D;_push_region(rgn);_T1=Cyc_Hashtable_create;{
# 27
struct Cyc_Hashtable_Table*(*_T1E)(int,int(*)(int,int),int(*)(int))=(struct Cyc_Hashtable_Table*(*)(int,int(*)(int,int),int(*)(int)))_T1;_T0=_T1E;}_T2=Cyc_Core_intcmp;_T4=Cyc_Core_identity;{int(*_T1E)(int)=(int(*)(int))_T4;_T3=_T1E;}{
# 26
struct Cyc_Hashtable_Table*frequencies=
_T0(17,_T2,_T3);
int max_freq=0;
int most_freq=0;{
int i=0;_TL3: _T5=i;_T6=(unsigned)_T5;_T7=v;_T8=_get_fat_size(_T7,sizeof(int));if(_T6 < _T8)goto _TL1;else{goto _TL2;}
_TL1: _T9=v;_TA=_T9.curr;_TB=(int*)_TA;_TC=_check_null(_TB);_TD=i;{int e=_TC[_TD];
int*r;{struct _handler_cons _T1E;_TE=& _T1E;_push_handler(_TE);{int _T1F=0;_TF=setjmp(_T1E.handler);if(!_TF)goto _TL4;_T1F=1;goto _TL5;_TL4: _TL5: if(_T1F)goto _TL6;else{goto _TL8;}_TL8: _T11=Cyc_Hashtable_lookup;{
int*(*_T20)(struct Cyc_Hashtable_Table*,int)=(int*(*)(struct Cyc_Hashtable_Table*,int))_T11;_T10=_T20;}r=_T10(frequencies,e);_pop_handler();goto _TL7;_TL6: _T12=Cyc_Core_get_exn_thrown();{void*_T20=(void*)_T12;void*_T21;_T13=(struct Cyc_Core_Not_found_exn_struct*)_T20;_T14=_T13->tag;_T15=Cyc_Core_Not_found;if(_T14!=_T15)goto _TL9;_T17=rgn;{int*_T22=_region_malloc(_T17,0U,sizeof(int));
# 36
*_T22=0;_T16=(int*)_T22;}r=_T16;_T19=Cyc_Hashtable_insert;{
void(*_T22)(struct Cyc_Hashtable_Table*,int,int*)=(void(*)(struct Cyc_Hashtable_Table*,int,int*))_T19;_T18=_T22;}_T18(frequencies,e,r);goto _LL0;_TL9: _T21=_T20;{void*exn=_T21;_rethrow(exn);}_LL0:;}_TL7:;}}_T1A=r;_T1B=*_T1A;{
# 40
int f=_T1B + 1;_T1C=r;
*_T1C=f;
if(f <= max_freq)goto _TLB;
max_freq=f;
most_freq=e;goto _TLC;_TLB: _TLC:;}}
# 30
i=i + 1;goto _TL3;_TL2:;}{int _T1E=most_freq;_npop_handler(0);return _T1E;}}_pop_region();}struct _tuple3{int f0;int f1;};
# 53
static struct Cyc_List_List*Cyc_Compact_non_default_elements(int def,struct _fat_ptr v){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;int*_T6;struct Cyc_List_List*_T7;struct _tuple3*_T8;struct Cyc_List_List*_T9;
struct Cyc_List_List*ans=0;_T0=v;_T1=
_get_fat_size(_T0,sizeof(int));_T2=_T1 - 1U;{int i=(int)_T2;_TL10: if(i >= 0)goto _TLE;else{goto _TLF;}
_TLE: _T3=v;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(int),_T4);_T6=(int*)_T5;{int e=*_T6;
if(e==def)goto _TL11;{struct Cyc_List_List*_TA=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple3*_TB=_cycalloc(sizeof(struct _tuple3));
_TB->f0=i;_TB->f1=e;_T8=(struct _tuple3*)_TB;}_TA->hd=_T8;_TA->tl=ans;_T7=(struct Cyc_List_List*)_TA;}ans=_T7;goto _TL12;_TL11: _TL12:;}
# 55
i=i + -1;goto _TL10;_TLF:;}_T9=ans;
# 60
return _T9;}
# 64
static struct _fat_ptr Cyc_Compact_trans={(void*)0,(void*)0,(void*)(0 + 0)};
static struct _fat_ptr Cyc_Compact_check={(void*)0,(void*)0,(void*)(0 + 0)};
static int Cyc_Compact_last_used=0;
# 68
static void Cyc_Compact_grow_transitions (void){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;int*_T4;unsigned _T5;unsigned _T6;int _T7;unsigned _T8;unsigned _T9;struct _fat_ptr _TA;unsigned _TB;int _TC;unsigned char*_TD;int*_TE;unsigned _TF;struct _fat_ptr _T10;int _T11;int*_T12;unsigned _T13;unsigned _T14;int _T15;unsigned _T16;unsigned _T17;struct _fat_ptr _T18;unsigned _T19;int _T1A;unsigned char*_T1B;int*_T1C;unsigned _T1D;
struct _fat_ptr old_trans=Cyc_Compact_trans;
struct _fat_ptr old_check=Cyc_Compact_check;_T0=old_trans;_T1=
_get_fat_size(_T0,sizeof(int));{int n=(int)_T1;_T3=2 * n;{unsigned _T1E=(unsigned)_T3;_T5=_check_times(_T1E,sizeof(int));{int*_T1F=_cycalloc_atomic(_T5);{unsigned _T20=_T1E;unsigned i;i=0;_TL16: if(i < _T20)goto _TL14;else{goto _TL15;}_TL14: _T6=i;_T7=Cyc_Compact_last_used;_T8=(unsigned)_T7;
if(_T6 >= _T8)goto _TL17;_T9=i;_TA=old_trans;_TB=i;_TC=(int)_TB;_TD=_check_fat_subscript(_TA,sizeof(int),_TC);_TE=(int*)_TD;_T1F[_T9]=*_TE;goto _TL18;_TL17: _TF=i;_T1F[_TF]=0;_TL18: i=i + 1;goto _TL16;_TL15:;}_T4=(int*)_T1F;}_T2=_tag_fat(_T4,sizeof(int),_T1E);}Cyc_Compact_trans=_T2;_T11=2 * n;{unsigned _T1E=(unsigned)_T11;_T13=_check_times(_T1E,sizeof(int));{int*_T1F=_cycalloc_atomic(_T13);{unsigned _T20=_T1E;unsigned i;i=0;_TL1C: if(i < _T20)goto _TL1A;else{goto _TL1B;}_TL1A: _T14=i;_T15=Cyc_Compact_last_used;_T16=(unsigned)_T15;
if(_T14 >= _T16)goto _TL1D;_T17=i;_T18=old_check;_T19=i;_T1A=(int)_T19;_T1B=_check_fat_subscript(_T18,sizeof(int),_T1A);_T1C=(int*)_T1B;_T1F[_T17]=*_T1C;goto _TL1E;_TL1D: _T1D=i;_T1F[_T1D]=- 1;_TL1E: i=i + 1;goto _TL1C;_TL1B:;}_T12=(int*)_T1F;}_T10=_tag_fat(_T12,sizeof(int),_T1E);}Cyc_Compact_check=_T10;}}
# 76
static int Cyc_Compact_pack_from(struct Cyc_List_List*,int);
# 78
static int Cyc_Compact_try_pack(struct Cyc_List_List*nondef,struct Cyc_List_List*rem,int b){int _T0;struct Cyc_List_List*_T1;void*_T2;struct _tuple3*_T3;struct _fat_ptr _T4;int _T5;unsigned char*_T6;int*_T7;int _T8;int _T9;int _TA;struct Cyc_List_List*_TB;int _TC;int _TD;struct Cyc_List_List*_TE;int _TF;int _T10;if(rem!=0)goto _TL1F;_T0=b;
# 80
return _T0;_TL1F: _T1=rem;{struct Cyc_List_List _T11=*_T1;_T2=_T11.hd;_T3=(struct _tuple3*)_T2;{struct _tuple3 _T12=*_T3;_T10=_T12.f0;_TF=_T12.f1;}_TE=_T11.tl;}{int pos=_T10;int v=_TF;struct Cyc_List_List*rem2=_TE;_T4=Cyc_Compact_check;_T5=b + pos;_T6=_check_fat_subscript(_T4,sizeof(int),_T5);_T7=(int*)_T6;_T8=*_T7;_T9=- 1;
# 82
if(_T8!=_T9)goto _TL21;_TA=
Cyc_Compact_try_pack(nondef,rem2,b);return _TA;
# 85
_TL21: _TB=nondef;_TC=b + 1;_TD=Cyc_Compact_pack_from(_TB,_TC);return _TD;};}
# 89
static int Cyc_Compact_pack_from(struct Cyc_List_List*nondef,int b){int _T0;unsigned _T1;struct _fat_ptr _T2;unsigned _T3;int _T4;
_TL23: _T0=b + 257;_T1=(unsigned)_T0;_T2=Cyc_Compact_trans;_T3=_get_fat_size(_T2,sizeof(int));if(_T1 > _T3)goto _TL24;else{goto _TL25;}
_TL24: Cyc_Compact_grow_transitions();goto _TL23;_TL25: _T4=
Cyc_Compact_try_pack(nondef,nondef,b);return _T4;}
# 95
static struct _tuple3*Cyc_Compact_pack_moves(int state_num,struct _fat_ptr moves){int*_T0;int*_T1;unsigned _T2;unsigned _T3;struct _fat_ptr _T4;int _T5;unsigned char*_T6;void**_T7;int*_T8;int _T9;struct _fat_ptr _TA;unsigned char*_TB;int*_TC;int _TD;struct _fat_ptr _TE;int _TF;unsigned char*_T10;int*_T11;struct Cyc_List_List*_T12;void*_T13;struct _fat_ptr _T14;unsigned char*_T15;int*_T16;int _T17;struct _fat_ptr _T18;unsigned char*_T19;int*_T1A;int _T1B;struct Cyc_List_List*_T1C;int _T1D;int _T1E;struct _tuple3*_T1F;{unsigned _T20=257U;_T2=_check_times(_T20,sizeof(int));{int*_T21=_cycalloc_atomic(_T2);{unsigned _T22=_T20;unsigned i;i=0;_TL29: if(i < _T22)goto _TL27;else{goto _TL28;}_TL27: _T3=i;
_T21[_T3]=0;i=i + 1;goto _TL29;_TL28:;}_T1=(int*)_T21;}_T0=_T1;}{struct _fat_ptr moves_v=_tag_fat(_T0,sizeof(int),257U);{
int i=0;_TL2D: if(i < 257)goto _TL2B;else{goto _TL2C;}
_TL2B: _T4=moves;_T5=i;_T6=_check_fat_subscript(_T4,sizeof(void*),_T5);_T7=(void**)_T6;{void*_T20=*_T7;int _T21;_T8=(int*)_T20;_T9=*_T8;if(_T9!=0)goto _TL2E;_TA=moves_v;_TB=_TA.curr;_TC=(int*)_TB;_TD=i;
_TC[_TD]=- 1;goto _LL0;_TL2E:{struct Cyc_Lexgen_Goto_Lexgen_Automata_move_struct*_T22=(struct Cyc_Lexgen_Goto_Lexgen_Automata_move_struct*)_T20;_T21=_T22->f1;}{int n=_T21;_TE=moves_v;_TF=i;_T10=_check_fat_subscript(_TE,sizeof(int),_TF);_T11=(int*)_T10;
*_T11=n;goto _LL0;}_LL0:;}
# 97
i=i + 1;goto _TL2D;_TL2C:;}{
# 103
int def=Cyc_Compact_most_frequent_elt(moves_v);
struct Cyc_List_List*nondef=Cyc_Compact_non_default_elements(def,moves_v);
int base=Cyc_Compact_pack_from(nondef,0);
# 107
_TL33: if(nondef!=0)goto _TL31;else{goto _TL32;}
_TL31: _T12=nondef;_T13=_T12->hd;{struct _tuple3*_T20=(struct _tuple3*)_T13;int _T21;int _T22;{struct _tuple3 _T23=*_T20;_T22=_T23.f0;_T21=_T23.f1;}{int pos=_T22;int v=_T21;_T14=Cyc_Compact_trans;_T15=_T14.curr;_T16=(int*)_T15;_T17=base + pos;
_T16[_T17]=v;_T18=Cyc_Compact_check;_T19=_T18.curr;_T1A=(int*)_T19;_T1B=base + pos;
_T1A[_T1B]=state_num;}}_T1C=nondef;
# 107
nondef=_T1C->tl;goto _TL33;_TL32: _T1D=base + 257;_T1E=Cyc_Compact_last_used;
# 112
if(_T1D <= _T1E)goto _TL34;
Cyc_Compact_last_used=base + 257;goto _TL35;_TL34: _TL35:{struct _tuple3*_T20=_cycalloc(sizeof(struct _tuple3));
_T20->f0=base;_T20->f1=def;_T1F=(struct _tuple3*)_T20;}return _T1F;}}}
# 117
struct Cyc_Compact_Lex_tables*Cyc_Compact_compact_tables(struct _fat_ptr state_v){int*_T0;int*_T1;unsigned _T2;unsigned _T3;int*_T4;int*_T5;unsigned _T6;unsigned _T7;struct _fat_ptr _T8;unsigned _T9;struct _fat_ptr _TA;int _TB;int*_TC;unsigned _TD;unsigned _TE;struct _fat_ptr _TF;int _T10;int*_T11;unsigned _T12;unsigned _T13;struct _fat_ptr _T14;int _T15;int*_T16;unsigned _T17;unsigned _T18;struct _fat_ptr _T19;unsigned char*_T1A;void**_T1B;void**_T1C;int _T1D;int*_T1E;int _T1F;struct _fat_ptr _T20;unsigned char*_T21;int*_T22;int _T23;int _T24;void*_T25;void*_T26;int*_T27;int _T28;void*_T29;struct _fat_ptr _T2A;int _T2B;unsigned char*_T2C;int*_T2D;struct _fat_ptr _T2E;unsigned char*_T2F;int*_T30;int _T31;struct _fat_ptr _T32;unsigned char*_T33;int*_T34;int _T35;struct Cyc_Compact_Lex_tables*_T36;struct _fat_ptr _T37;int _T38;int*_T39;unsigned _T3A;unsigned _T3B;struct _fat_ptr _T3C;unsigned _T3D;int _T3E;unsigned char*_T3F;int*_T40;struct _fat_ptr _T41;int _T42;int*_T43;unsigned _T44;unsigned _T45;struct _fat_ptr _T46;unsigned _T47;int _T48;unsigned char*_T49;int*_T4A;{unsigned _T4B=1024U;_T2=_check_times(_T4B,sizeof(int));{int*_T4C=_cycalloc_atomic(_T2);{unsigned _T4D=_T4B;unsigned i;i=0;_TL39: if(i < _T4D)goto _TL37;else{goto _TL38;}_TL37: _T3=i;
_T4C[_T3]=0;i=i + 1;goto _TL39;_TL38:;}_T1=(int*)_T4C;}_T0=_T1;}Cyc_Compact_trans=_tag_fat(_T0,sizeof(int),1024U);{unsigned _T4B=1024U;_T6=_check_times(_T4B,sizeof(int));{int*_T4C=_cycalloc_atomic(_T6);{unsigned _T4D=_T4B;unsigned i;i=0;_TL3D: if(i < _T4D)goto _TL3B;else{goto _TL3C;}_TL3B: _T7=i;
_T4C[_T7]=- 1;i=i + 1;goto _TL3D;_TL3C:;}_T5=(int*)_T4C;}_T4=_T5;}Cyc_Compact_check=_tag_fat(_T4,sizeof(int),1024U);_T8=state_v;_T9=
_get_fat_size(_T8,sizeof(void*));{int n=(int)_T9;_TB=n;{unsigned _T4B=(unsigned)_TB;_TD=_check_times(_T4B,sizeof(int));{int*_T4C=_cycalloc_atomic(_TD);{unsigned _T4D=_T4B;unsigned i;i=0;_TL41: if(i < _T4D)goto _TL3F;else{goto _TL40;}_TL3F: _TE=i;
_T4C[_TE]=0;i=i + 1;goto _TL41;_TL40:;}_TC=(int*)_T4C;}_TA=_tag_fat(_TC,sizeof(int),_T4B);}{struct _fat_ptr base=_TA;_T10=n;{unsigned _T4B=(unsigned)_T10;_T12=_check_times(_T4B,sizeof(int));{int*_T4C=_cycalloc_atomic(_T12);{unsigned _T4D=_T4B;unsigned i;i=0;_TL45: if(i < _T4D)goto _TL43;else{goto _TL44;}_TL43: _T13=i;
_T4C[_T13]=- 1;i=i + 1;goto _TL45;_TL44:;}_T11=(int*)_T4C;}_TF=_tag_fat(_T11,sizeof(int),_T4B);}{struct _fat_ptr backtrk=_TF;_T15=n;{unsigned _T4B=(unsigned)_T15;_T17=_check_times(_T4B,sizeof(int));{int*_T4C=_cycalloc_atomic(_T17);{unsigned _T4D=_T4B;unsigned i;i=0;_TL49: if(i < _T4D)goto _TL47;else{goto _TL48;}_TL47: _T18=i;
_T4C[_T18]=0;i=i + 1;goto _TL49;_TL48:;}_T16=(int*)_T4C;}_T14=_tag_fat(_T16,sizeof(int),_T4B);}{struct _fat_ptr defaultX=_T14;{
int i=0;_TL4D: if(i < n)goto _TL4B;else{goto _TL4C;}
_TL4B: _T19=state_v;_T1A=_T19.curr;_T1B=(void**)_T1A;_T1C=_check_null(_T1B);_T1D=i;{void*_T4B=_T1C[_T1D];struct _fat_ptr _T4C;void*_T4D;int _T4E;_T1E=(int*)_T4B;_T1F=*_T1E;if(_T1F!=0)goto _TL4E;{struct Cyc_Lexgen_Perform_Lexgen_Automata_struct*_T4F=(struct Cyc_Lexgen_Perform_Lexgen_Automata_struct*)_T4B;_T4E=_T4F->f1;}{int m=_T4E;_T20=base;_T21=_T20.curr;_T22=(int*)_T21;_T23=i;_T24=m + 1;
_T22[_T23]=- _T24;goto _LL0;}_TL4E:{struct Cyc_Lexgen_Shift_Lexgen_Automata_struct*_T4F=(struct Cyc_Lexgen_Shift_Lexgen_Automata_struct*)_T4B;_T25=_T4F->f1;_T4D=(void*)_T25;_T4C=_T4F->f2;}{void*trans=_T4D;struct _fat_ptr move=_T4C;{int _T4F;_T26=trans;_T27=(int*)_T26;_T28=*_T27;if(_T28!=0)goto _TL50;goto _LL5;_TL50: _T29=trans;{struct Cyc_Lexgen_Remember_Lexgen_Automata_trans_struct*_T50=(struct Cyc_Lexgen_Remember_Lexgen_Automata_trans_struct*)_T29;_T4F=_T50->f1;}{int m=_T4F;_T2A=backtrk;_T2B=i;_T2C=_check_fat_subscript(_T2A,sizeof(int),_T2B);_T2D=(int*)_T2C;
# 130
*_T2D=m;goto _LL5;}_LL5:;}{
# 132
struct _tuple3*_T4F=Cyc_Compact_pack_moves(i,move);int _T50;int _T51;{struct _tuple3 _T52=*_T4F;_T51=_T52.f0;_T50=_T52.f1;}{int b=_T51;int d=_T50;_T2E=base;_T2F=_T2E.curr;_T30=(int*)_T2F;_T31=i;
_T30[_T31]=b;_T32=defaultX;_T33=_T32.curr;_T34=(int*)_T33;_T35=i;
_T34[_T35]=d;goto _LL0;}}}_LL0:;}
# 124
i=i + 1;goto _TL4D;_TL4C:;}{struct Cyc_Compact_Lex_tables*_T4B=_cycalloc(sizeof(struct Cyc_Compact_Lex_tables));
# 137
_T4B->base=base;_T4B->backtrk=backtrk;_T4B->defaultX=defaultX;_T38=Cyc_Compact_last_used;{unsigned _T4C=(unsigned)_T38;_T3A=_check_times(_T4C,sizeof(int));{int*_T4D=_cycalloc_atomic(_T3A);{unsigned _T4E=_T4C;unsigned i;i=0;_TL55: if(i < _T4E)goto _TL53;else{goto _TL54;}_TL53: _T3B=i;_T3C=Cyc_Compact_trans;_T3D=i;_T3E=(int)_T3D;_T3F=_check_fat_subscript(_T3C,sizeof(int),_T3E);_T40=(int*)_T3F;
_T4D[_T3B]=*_T40;i=i + 1;goto _TL55;_TL54:;}_T39=(int*)_T4D;}_T37=_tag_fat(_T39,sizeof(int),_T4C);}_T4B->trans=_T37;_T42=Cyc_Compact_last_used;{unsigned _T4C=(unsigned)_T42;_T44=_check_times(_T4C,sizeof(int));{int*_T4D=_cycalloc_atomic(_T44);{unsigned _T4E=_T4C;unsigned i;i=0;_TL59: if(i < _T4E)goto _TL57;else{goto _TL58;}_TL57: _T45=i;_T46=Cyc_Compact_check;_T47=i;_T48=(int)_T47;_T49=_check_fat_subscript(_T46,sizeof(int),_T48);_T4A=(int*)_T49;
_T4D[_T45]=*_T4A;i=i + 1;goto _TL59;_TL58:;}_T43=(int*)_T4D;}_T41=_tag_fat(_T43,sizeof(int),_T4C);}_T4B->check=_T41;_T36=(struct Cyc_Compact_Lex_tables*)_T4B;}
# 137
return _T36;}}}}}
