#include <cyc_include.h>
 extern char Cyc_Core_Invalid_argument[17U];struct Cyc_Core_Invalid_argument_exn_struct{char*tag;struct _fat_ptr f1;};struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 364 "../../../include/list.h"
extern struct _fat_ptr Cyc_List_to_array(struct Cyc_List_List*);
# 371
extern struct Cyc_List_List*Cyc_List_from_array(struct _fat_ptr);extern char Cyc_Array_Array_mismatch[15U];struct Cyc_Array_Array_mismatch_exn_struct{char*tag;};
# 59 "array.cyc"
void Cyc_Array_qsort(int(*less_eq)(void**,void**),struct _fat_ptr arr,int len){int _T0;unsigned _T1;struct _fat_ptr _T2;unsigned _T3;struct Cyc_Core_Invalid_argument_exn_struct*_T4;void*_T5;int _T6;struct _fat_ptr _T7;int _T8;int _T9;int _TA;int _TB;unsigned char*_TC;void**_TD;struct _fat_ptr _TE;unsigned char*_TF;void**_T10;int _T11;int _T12;int _T13;int _T14;struct _fat_ptr _T15;int _T16;unsigned char*_T17;void**_T18;struct _fat_ptr _T19;unsigned char*_T1A;void**_T1B;int _T1C;struct _fat_ptr _T1D;int _T1E;struct _fat_ptr _T1F;unsigned char*_T20;unsigned char*_T21;void**_T22;struct _fat_ptr _T23;int _T24;struct _fat_ptr _T25;unsigned char*_T26;unsigned char*_T27;void**_T28;int _T29;struct _fat_ptr _T2A;int _T2B;unsigned char*_T2C;void**_T2D;struct _fat_ptr _T2E;unsigned char*_T2F;void**_T30;int _T31;struct _fat_ptr _T32;int _T33;unsigned char*_T34;void**_T35;struct _fat_ptr _T36;unsigned char*_T37;void**_T38;int _T39;struct _fat_ptr _T3A;int _T3B;struct _fat_ptr _T3C;unsigned char*_T3D;unsigned char*_T3E;void**_T3F;struct _fat_ptr _T40;int _T41;struct _fat_ptr _T42;unsigned char*_T43;unsigned char*_T44;void**_T45;int _T46;struct _fat_ptr _T47;unsigned char*_T48;void**_T49;int _T4A;struct _fat_ptr _T4B;unsigned char*_T4C;void**_T4D;int _T4E;struct _fat_ptr _T4F;int _T50;unsigned char*_T51;void**_T52;struct _fat_ptr _T53;unsigned char*_T54;void**_T55;int _T56;struct _fat_ptr _T57;int _T58;struct _fat_ptr _T59;unsigned char*_T5A;unsigned char*_T5B;void**_T5C;struct _fat_ptr _T5D;int _T5E;struct _fat_ptr _T5F;unsigned char*_T60;unsigned char*_T61;void**_T62;int _T63;struct _fat_ptr _T64;int _T65;unsigned char*_T66;void**_T67;struct _fat_ptr _T68;unsigned char*_T69;void**_T6A;int _T6B;struct _fat_ptr _T6C;unsigned char*_T6D;void**_T6E;int _T6F;struct _fat_ptr _T70;unsigned char*_T71;void**_T72;int _T73;struct _fat_ptr _T74;int _T75;struct _fat_ptr _T76;unsigned char*_T77;unsigned char*_T78;void**_T79;struct _fat_ptr _T7A;int _T7B;struct _fat_ptr _T7C;unsigned char*_T7D;unsigned char*_T7E;void**_T7F;int _T80;struct _fat_ptr _T81;int _T82;struct _fat_ptr _T83;unsigned char*_T84;unsigned char*_T85;void**_T86;struct _fat_ptr _T87;int _T88;struct _fat_ptr _T89;unsigned char*_T8A;unsigned char*_T8B;void**_T8C;int _T8D;struct _fat_ptr _T8E;int _T8F;unsigned char*_T90;void**_T91;struct _fat_ptr _T92;unsigned char*_T93;void**_T94;int _T95;struct _fat_ptr _T96;int _T97;unsigned char*_T98;void**_T99;struct _fat_ptr _T9A;unsigned char*_T9B;void**_T9C;int _T9D;struct _fat_ptr _T9E;unsigned char*_T9F;void**_TA0;int _TA1;struct _fat_ptr _TA2;unsigned char*_TA3;void**_TA4;int _TA5;struct _fat_ptr _TA6;int _TA7;unsigned char*_TA8;void**_TA9;struct _fat_ptr _TAA;unsigned char*_TAB;void**_TAC;int _TAD;int _TAE;int _TAF;int*_TB0;int _TB1;char*_TB2;int*_TB3;int*_TB4;int _TB5;char*_TB6;int*_TB7;int*_TB8;int _TB9;char*_TBA;int*_TBB;int*_TBC;int _TBD;char*_TBE;int*_TBF;struct _fat_ptr _TC0;int _TC1;struct _fat_ptr _TC2;unsigned char*_TC3;unsigned char*_TC4;void**_TC5;struct _fat_ptr _TC6;int _TC7;struct _fat_ptr _TC8;struct _fat_ptr _TC9;unsigned char*_TCA;unsigned char*_TCB;void**_TCC;int _TCD;struct _fat_ptr _TCE;int _TCF;unsigned char*_TD0;void**_TD1;struct _fat_ptr _TD2;unsigned char*_TD3;void**_TD4;int _TD5;struct _fat_ptr _TD6;int _TD7;unsigned char*_TD8;void**_TD9;struct _fat_ptr _TDA;unsigned char*_TDB;void**_TDC;int _TDD;int*_TDE;int _TDF;char*_TE0;int*_TE1;int*_TE2;int _TE3;char*_TE4;int*_TE5;
# 62
int base_ofs=0;
# 64
void*temp;
int sp[40U];
int sp_ofs;
int i;int j;int limit_ofs;
# 69
if(base_ofs < 0)goto _TL2;else{goto _TL4;}_TL4: _T0=base_ofs + len;_T1=(unsigned)_T0;_T2=arr;_T3=_get_fat_size(_T2,sizeof(void*));if(_T1 > _T3)goto _TL2;else{goto _TL3;}_TL3: if(len < 0)goto _TL2;else{goto _TL0;}
_TL2:{struct Cyc_Core_Invalid_argument_exn_struct*_TE6=_cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));_TE6->tag=Cyc_Core_Invalid_argument;_TE6->f1=_tag_fat("Array::qsort",sizeof(char),13U);_T4=(struct Cyc_Core_Invalid_argument_exn_struct*)_TE6;}_T5=(void*)_T4;_throw(_T5);goto _TL1;_TL0: _TL1:
# 72
 limit_ofs=base_ofs + len;
sp_ofs=0;_TL8:
# 75
 if(1)goto _TL6;else{goto _TL7;}
_TL6: _T6=limit_ofs - base_ofs;if(_T6 <= 3)goto _TL9;_T7=arr;_T8=limit_ofs - base_ofs;_T9=_T8 / 2;_TA=base_ofs;_TB=_T9 + _TA;_TC=_check_fat_subscript(_T7,sizeof(void*),_TB);_TD=(void**)_TC;
# 78
temp=*_TD;_TE=arr;_TF=_TE.curr;_T10=(void**)_TF;_T11=limit_ofs - base_ofs;_T12=_T11 / 2;_T13=base_ofs;_T14=_T12 + _T13;_T15=arr;_T16=base_ofs;_T17=_check_fat_subscript(_T15,sizeof(void*),_T16);_T18=(void**)_T17;_T10[_T14]=*_T18;_T19=arr;_T1A=_T19.curr;_T1B=(void**)_T1A;_T1C=base_ofs;_T1B[_T1C]=temp;
i=base_ofs + 1;
j=limit_ofs - 1;_T1D=arr;_T1E=i;_T1F=
_fat_ptr_plus(_T1D,sizeof(void*),_T1E);_T20=_untag_fat_ptr_check_bound(_T1F,sizeof(void*),1U);_T21=_check_null(_T20);_T22=(void**)_T21;_T23=arr;_T24=j;_T25=_fat_ptr_plus(_T23,sizeof(void*),_T24);_T26=_untag_fat_ptr_check_bound(_T25,sizeof(void*),1U);_T27=_check_null(_T26);_T28=(void**)_T27;_T29=less_eq(_T22,_T28);if(_T29 <= 0)goto _TLB;_T2A=arr;_T2B=i;_T2C=_check_fat_subscript(_T2A,sizeof(void*),_T2B);_T2D=(void**)_T2C;
temp=*_T2D;_T2E=arr;_T2F=_T2E.curr;_T30=(void**)_T2F;_T31=i;_T32=arr;_T33=j;_T34=_check_fat_subscript(_T32,sizeof(void*),_T33);_T35=(void**)_T34;_T30[_T31]=*_T35;_T36=arr;_T37=_T36.curr;_T38=(void**)_T37;_T39=j;_T38[_T39]=temp;goto _TLC;_TLB: _TLC: _T3A=arr;_T3B=base_ofs;_T3C=
_fat_ptr_plus(_T3A,sizeof(void*),_T3B);_T3D=_untag_fat_ptr_check_bound(_T3C,sizeof(void*),1U);_T3E=_check_null(_T3D);_T3F=(void**)_T3E;_T40=arr;_T41=j;_T42=_fat_ptr_plus(_T40,sizeof(void*),_T41);_T43=_untag_fat_ptr(_T42,sizeof(void*),1U);_T44=_check_null(_T43);_T45=(void**)_T44;_T46=less_eq(_T3F,_T45);if(_T46 <= 0)goto _TLD;_T47=arr;_T48=_T47.curr;_T49=(void**)_T48;_T4A=base_ofs;
temp=_T49[_T4A];_T4B=arr;_T4C=_T4B.curr;_T4D=(void**)_T4C;_T4E=base_ofs;_T4F=arr;_T50=j;_T51=_check_fat_subscript(_T4F,sizeof(void*),_T50);_T52=(void**)_T51;_T4D[_T4E]=*_T52;_T53=arr;_T54=_T53.curr;_T55=(void**)_T54;_T56=j;_T55[_T56]=temp;goto _TLE;_TLD: _TLE: _T57=arr;_T58=i;_T59=
_fat_ptr_plus(_T57,sizeof(void*),_T58);_T5A=_untag_fat_ptr(_T59,sizeof(void*),1U);_T5B=_check_null(_T5A);_T5C=(void**)_T5B;_T5D=arr;_T5E=base_ofs;_T5F=_fat_ptr_plus(_T5D,sizeof(void*),_T5E);_T60=_untag_fat_ptr(_T5F,sizeof(void*),1U);_T61=_check_null(_T60);_T62=(void**)_T61;_T63=less_eq(_T5C,_T62);if(_T63 <= 0)goto _TLF;_T64=arr;_T65=i;_T66=_check_fat_subscript(_T64,sizeof(void*),_T65);_T67=(void**)_T66;
temp=*_T67;_T68=arr;_T69=_T68.curr;_T6A=(void**)_T69;_T6B=i;_T6C=arr;_T6D=_T6C.curr;_T6E=(void**)_T6D;_T6F=base_ofs;_T6A[_T6B]=_T6E[_T6F];_T70=arr;_T71=_T70.curr;_T72=(void**)_T71;_T73=base_ofs;_T72[_T73]=temp;goto _TL10;_TLF: _TL10: _TL14:
 if(1)goto _TL12;else{goto _TL13;}
_TL12:
 _TL15: i=i + 1;_T74=arr;_T75=i;_T76=
_fat_ptr_plus(_T74,sizeof(void*),_T75);_T77=_untag_fat_ptr_check_bound(_T76,sizeof(void*),1U);_T78=_check_null(_T77);_T79=(void**)_T78;_T7A=arr;_T7B=base_ofs;_T7C=_fat_ptr_plus(_T7A,sizeof(void*),_T7B);_T7D=_untag_fat_ptr(_T7C,sizeof(void*),1U);_T7E=_check_null(_T7D);_T7F=(void**)_T7E;_T80=less_eq(_T79,_T7F);
# 88
if(_T80 < 0)goto _TL15;else{goto _TL16;}_TL16:
# 92
 _TL17: j=j + -1;_T81=arr;_T82=j;_T83=
_fat_ptr_plus(_T81,sizeof(void*),_T82);_T84=_untag_fat_ptr_check_bound(_T83,sizeof(void*),1U);_T85=_check_null(_T84);_T86=(void**)_T85;_T87=arr;_T88=base_ofs;_T89=_fat_ptr_plus(_T87,sizeof(void*),_T88);_T8A=_untag_fat_ptr(_T89,sizeof(void*),1U);_T8B=_check_null(_T8A);_T8C=(void**)_T8B;_T8D=less_eq(_T86,_T8C);
# 91
if(_T8D > 0)goto _TL17;else{goto _TL18;}_TL18:
# 94
 if(i <= j)goto _TL19;goto _TL13;_TL19: _T8E=arr;_T8F=i;_T90=_check_fat_subscript(_T8E,sizeof(void*),_T8F);_T91=(void**)_T90;
# 96
temp=*_T91;_T92=arr;_T93=_T92.curr;_T94=(void**)_T93;_T95=i;_T96=arr;_T97=j;_T98=_check_fat_subscript(_T96,sizeof(void*),_T97);_T99=(void**)_T98;_T94[_T95]=*_T99;_T9A=arr;_T9B=_T9A.curr;_T9C=(void**)_T9B;_T9D=j;_T9C[_T9D]=temp;goto _TL14;_TL13: _T9E=arr;_T9F=_T9E.curr;_TA0=(void**)_T9F;_TA1=base_ofs;
# 98
temp=_TA0[_TA1];_TA2=arr;_TA3=_TA2.curr;_TA4=(void**)_TA3;_TA5=base_ofs;_TA6=arr;_TA7=j;_TA8=_check_fat_subscript(_TA6,sizeof(void*),_TA7);_TA9=(void**)_TA8;_TA4[_TA5]=*_TA9;_TAA=arr;_TAB=_TAA.curr;_TAC=(void**)_TAB;_TAD=j;_TAC[_TAD]=temp;_TAE=j - base_ofs;_TAF=limit_ofs - i;
# 100
if(_TAE <= _TAF)goto _TL1B;_TB0=sp;_TB1=sp_ofs;_TB2=_check_known_subscript_notnull(_TB0,40U,sizeof(int),_TB1);_TB3=(int*)_TB2;
*_TB3=base_ofs;_TB4=sp;_TB5=sp_ofs + 1;_TB6=_check_known_subscript_notnull(_TB4,40U,sizeof(int),_TB5);_TB7=(int*)_TB6;
*_TB7=j;
base_ofs=i;goto _TL1C;
# 105
_TL1B: _TB8=sp;_TB9=sp_ofs;_TBA=_check_known_subscript_notnull(_TB8,40U,sizeof(int),_TB9);_TBB=(int*)_TBA;*_TBB=i;_TBC=sp;_TBD=sp_ofs + 1;_TBE=_check_known_subscript_notnull(_TBC,40U,sizeof(int),_TBD);_TBF=(int*)_TBE;
*_TBF=limit_ofs;
limit_ofs=j;_TL1C:
# 109
 sp_ofs=sp_ofs + 2;goto _TLA;
# 111
_TL9: j=base_ofs;i=j + 1;_TL20: if(i < limit_ofs)goto _TL1E;else{goto _TL1F;}
_TL1E: _TL24: _TC0=arr;_TC1=j;_TC2=_fat_ptr_plus(_TC0,sizeof(void*),_TC1);_TC3=_untag_fat_ptr_check_bound(_TC2,sizeof(void*),1U);_TC4=_check_null(_TC3);_TC5=(void**)_TC4;_TC6=arr;_TC7=j;_TC8=_fat_ptr_plus(_TC6,sizeof(void*),_TC7);_TC9=_fat_ptr_plus(_TC8,sizeof(void*),1);_TCA=_untag_fat_ptr_check_bound(_TC9,sizeof(void*),1U);_TCB=_check_null(_TCA);_TCC=(void**)_TCB;_TCD=less_eq(_TC5,_TCC);if(_TCD > 0)goto _TL22;else{goto _TL23;}
_TL22: _TCE=arr;_TCF=j;_TD0=_check_fat_subscript(_TCE,sizeof(void*),_TCF);_TD1=(void**)_TD0;temp=*_TD1;_TD2=arr;_TD3=_TD2.curr;_TD4=(void**)_TD3;_TD5=j;_TD6=arr;_TD7=j + 1;_TD8=_check_fat_subscript(_TD6,sizeof(void*),_TD7);_TD9=(void**)_TD8;_TD4[_TD5]=*_TD9;_TDA=arr;_TDB=_TDA.curr;_TDC=(void**)_TDB;_TDD=j + 1;_TDC[_TDD]=temp;
if(j!=base_ofs)goto _TL25;goto _TL23;_TL25:
# 112
 j=j + -1;goto _TL24;_TL23:
# 111
 j=i;i=i + 1;goto _TL20;_TL1F:
# 117
 if(sp_ofs==0)goto _TL27;
sp_ofs=sp_ofs - 2;_TDE=sp;_TDF=sp_ofs;_TE0=_check_known_subscript_notnull(_TDE,40U,sizeof(int),_TDF);_TE1=(int*)_TE0;
base_ofs=*_TE1;_TE2=sp;_TE3=sp_ofs + 1;_TE4=_check_known_subscript_notnull(_TE2,40U,sizeof(int),_TE3);_TE5=(int*)_TE4;
limit_ofs=*_TE5;goto _TL28;
# 122
_TL27: goto _TL7;_TL28: _TLA: goto _TL8;_TL7:;}
# 140 "array.cyc"
void Cyc_Array_msort(int(*less_eq)(void**,void**),struct _fat_ptr arr,int len){int _T0;unsigned _T1;struct _fat_ptr _T2;unsigned _T3;struct Cyc_Core_Invalid_argument_exn_struct*_T4;void*_T5;struct _fat_ptr _T6;int _T7;void**_T8;unsigned _T9;unsigned _TA;struct _fat_ptr _TB;unsigned char*_TC;void**_TD;void**_TE;int _TF;int _T10;int _T11;int _T12;int _T13;int _T14;int _T15;int _T16;int _T17;int _T18;struct _fat_ptr _T19;int _T1A;struct _fat_ptr _T1B;unsigned char*_T1C;unsigned char*_T1D;void**_T1E;struct _fat_ptr _T1F;int _T20;struct _fat_ptr _T21;unsigned char*_T22;unsigned char*_T23;void**_T24;int _T25;struct _fat_ptr _T26;int _T27;int _T28;unsigned char*_T29;void**_T2A;struct _fat_ptr _T2B;int _T2C;int _T2D;unsigned char*_T2E;void**_T2F;struct _fat_ptr _T30;int _T31;int _T32;unsigned char*_T33;void**_T34;struct _fat_ptr _T35;int _T36;int _T37;unsigned char*_T38;void**_T39;struct _fat_ptr _T3A;int _T3B;int _T3C;unsigned char*_T3D;void**_T3E;struct _fat_ptr _T3F;int _T40;int _T41;unsigned char*_T42;void**_T43;struct _fat_ptr _T44;int _T45;int _T46;unsigned char*_T47;void**_T48;struct _fat_ptr _T49;int _T4A;int _T4B;unsigned char*_T4C;void**_T4D;int _T4E;int _T4F;int _T50;struct _fat_ptr _T51;unsigned char*_T52;void**_T53;int _T54;struct _fat_ptr _T55;unsigned char*_T56;void**_T57;int _T58;_T0=len;_T1=(unsigned)_T0;_T2=arr;_T3=
# 142
_get_fat_size(_T2,sizeof(void*));if(_T1 > _T3)goto _TL2B;else{goto _TL2C;}_TL2C: if(len < 0)goto _TL2B;else{goto _TL29;}
_TL2B:{struct Cyc_Core_Invalid_argument_exn_struct*_T59=_cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));_T59->tag=Cyc_Core_Invalid_argument;_T59->f1=_tag_fat("Array::msort",sizeof(char),13U);_T4=(struct Cyc_Core_Invalid_argument_exn_struct*)_T59;}_T5=(void*)_T4;_throw(_T5);goto _TL2A;_TL29: _TL2A: _T7=len;{unsigned _T59=(unsigned)_T7;_T9=_check_times(_T59,sizeof(void*));{void**_T5A=_cycalloc(_T9);{unsigned _T5B=_T59;unsigned i;i=0;_TL30: if(i < _T5B)goto _TL2E;else{goto _TL2F;}_TL2E: _TA=i;_TB=arr;_TC=_TB.curr;_TD=(void**)_TC;_TE=
# 145
_check_null(_TD);_T5A[_TA]=_TE[0];i=i + 1;goto _TL30;_TL2F:;}_T8=(void**)_T5A;}_T6=_tag_fat(_T8,sizeof(void*),_T59);}{struct _fat_ptr from=_T6;
struct _fat_ptr to=arr;
struct _fat_ptr swap;
# 149
int swapped=0;
# 151
int stepsize;
# 153
int start;
# 155
int lstart;int lend;int rstart;int rend;
# 158
int dest;
# 162
stepsize=1;_TL34: if(stepsize < len)goto _TL32;else{goto _TL33;}
_TL32: swap=from;
from=to;
to=swap;
dest=0;
# 168
start=0;_TL38: if(start < len)goto _TL36;else{goto _TL37;}
_TL36: lstart=start;_T10=start + stepsize;_T11=len;
if(_T10 >= _T11)goto _TL39;_TF=start + stepsize;goto _TL3A;_TL39: _TF=len;_TL3A: rstart=_TF;
lend=rstart;_T13=start;_T14=stepsize * 2;_T15=_T13 + _T14;_T16=len;
if(_T15 >= _T16)goto _TL3B;_T17=start;_T18=stepsize * 2;_T12=_T17 + _T18;goto _TL3C;_TL3B: _T12=len;_TL3C: rend=_T12;
# 174
_TL3D: if(lstart < lend)goto _TL40;else{goto _TL3F;}_TL40: if(rstart < rend)goto _TL3E;else{goto _TL3F;}
_TL3E: _T19=from;_T1A=lstart;_T1B=_fat_ptr_plus(_T19,sizeof(void*),_T1A);_T1C=_untag_fat_ptr_check_bound(_T1B,sizeof(void*),1U);_T1D=_check_null(_T1C);_T1E=(void**)_T1D;_T1F=from;_T20=rstart;_T21=_fat_ptr_plus(_T1F,sizeof(void*),_T20);_T22=_untag_fat_ptr_check_bound(_T21,sizeof(void*),1U);_T23=_check_null(_T22);_T24=(void**)_T23;_T25=less_eq(_T1E,_T24);if(_T25 > 0)goto _TL41;_T26=to;_T27=dest;
dest=_T27 + 1;_T28=_T27;_T29=_check_fat_subscript(_T26,sizeof(void*),_T28);_T2A=(void**)_T29;_T2B=from;_T2C=lstart;lstart=_T2C + 1;_T2D=_T2C;_T2E=_check_fat_subscript(_T2B,sizeof(void*),_T2D);_T2F=(void**)_T2E;*_T2A=*_T2F;goto _TL42;
# 178
_TL41: _T30=to;_T31=dest;dest=_T31 + 1;_T32=_T31;_T33=_check_fat_subscript(_T30,sizeof(void*),_T32);_T34=(void**)_T33;_T35=from;_T36=rstart;rstart=_T36 + 1;_T37=_T36;_T38=_check_fat_subscript(_T35,sizeof(void*),_T37);_T39=(void**)_T38;*_T34=*_T39;_TL42: goto _TL3D;_TL3F:
# 183
 _TL43: if(lstart < lend)goto _TL44;else{goto _TL45;}
_TL44: _T3A=to;_T3B=dest;dest=_T3B + 1;_T3C=_T3B;_T3D=_check_fat_subscript(_T3A,sizeof(void*),_T3C);_T3E=(void**)_T3D;_T3F=from;_T40=lstart;lstart=_T40 + 1;_T41=_T40;_T42=_check_fat_subscript(_T3F,sizeof(void*),_T41);_T43=(void**)_T42;*_T3E=*_T43;goto _TL43;_TL45:
# 186
 _TL46: if(rstart < rend)goto _TL47;else{goto _TL48;}
_TL47: _T44=to;_T45=dest;dest=_T45 + 1;_T46=_T45;_T47=_check_fat_subscript(_T44,sizeof(void*),_T46);_T48=(void**)_T47;_T49=from;_T4A=rstart;rstart=_T4A + 1;_T4B=_T4A;_T4C=_check_fat_subscript(_T49,sizeof(void*),_T4B);_T4D=(void**)_T4C;*_T48=*_T4D;goto _TL46;_TL48: _T4E=start;_T4F=stepsize * 2;
# 168
start=_T4E + _T4F;goto _TL38;_TL37:
# 162
 stepsize=stepsize * 2;goto _TL34;_TL33: _T50=swapped;
# 192
if(!_T50)goto _TL49;{
int i=0;_TL4E: if(i < len)goto _TL4C;else{goto _TL4D;}_TL4C: _T51=from;_T52=_T51.curr;_T53=(void**)_T52;_T54=i;_T55=to;_T56=_T55.curr;_T57=(void**)_T56;_T58=i;_T53[_T54]=_T57[_T58];i=i + 1;goto _TL4E;_TL4D:;}goto _TL4A;_TL49: _TL4A:;}}
# 206 "array.cyc"
struct _fat_ptr Cyc_Array_from_list(struct Cyc_List_List*x){struct _fat_ptr _T0;_T0=
Cyc_List_to_array(x);return _T0;}
# 210
struct Cyc_List_List*Cyc_Array_to_list(struct _fat_ptr x){struct Cyc_List_List*_T0;_T0=
Cyc_List_from_array(x);return _T0;}
# 215
struct _fat_ptr Cyc_Array_copy(struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;void**_T4;unsigned _T5;unsigned _T6;struct _fat_ptr _T7;unsigned char*_T8;void**_T9;void**_TA;unsigned _TB;int _TC;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T3=sx;{unsigned _TD=(unsigned)_T3;_T5=_check_times(_TD,sizeof(void*));{void**_TE=_cycalloc(_T5);{unsigned _TF=_TD;unsigned i;i=0;_TL52: if(i < _TF)goto _TL50;else{goto _TL51;}_TL50: _T6=i;_T7=x;_T8=_T7.curr;_T9=(void**)_T8;_TA=
_check_null(_T9);_TB=i;_TC=(int)_TB;_TE[_T6]=_TA[_TC];i=i + 1;goto _TL52;_TL51:;}_T4=(void**)_TE;}_T2=_tag_fat(_T4,sizeof(void*),_TD);}return _T2;}}
# 221
struct _fat_ptr Cyc_Array_map(void*(*f)(void*),struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;void**_T4;unsigned _T5;unsigned _T6;struct _fat_ptr _T7;unsigned char*_T8;void**_T9;void**_TA;unsigned _TB;int _TC;void*_TD;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T3=sx;{unsigned _TE=(unsigned)_T3;_T5=_check_times(_TE,sizeof(void*));{void**_TF=_cycalloc(_T5);{unsigned _T10=_TE;unsigned i;i=0;_TL56: if(i < _T10)goto _TL54;else{goto _TL55;}_TL54: _T6=i;_T7=x;_T8=_T7.curr;_T9=(void**)_T8;_TA=
_check_null(_T9);_TB=i;_TC=(int)_TB;_TD=_TA[_TC];_TF[_T6]=f(_TD);i=i + 1;goto _TL56;_TL55:;}_T4=(void**)_TF;}_T2=_tag_fat(_T4,sizeof(void*),_TE);}return _T2;}}
# 227
struct _fat_ptr Cyc_Array_map_c(void*(*f)(void*,void*),void*env,struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;void**_T4;unsigned _T5;unsigned _T6;void*_T7;struct _fat_ptr _T8;unsigned char*_T9;void**_TA;void**_TB;unsigned _TC;int _TD;void*_TE;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T3=sx;{unsigned _TF=(unsigned)_T3;_T5=_check_times(_TF,sizeof(void*));{void**_T10=_cycalloc(_T5);{unsigned _T11=_TF;unsigned i;i=0;_TL5A: if(i < _T11)goto _TL58;else{goto _TL59;}_TL58: _T6=i;_T7=env;_T8=x;_T9=_T8.curr;_TA=(void**)_T9;_TB=
_check_null(_TA);_TC=i;_TD=(int)_TC;_TE=_TB[_TD];_T10[_T6]=f(_T7,_TE);i=i + 1;goto _TL5A;_TL59:;}_T4=(void**)_T10;}_T2=_tag_fat(_T4,sizeof(void*),_TF);}return _T2;}}
# 234
void Cyc_Array_imp_map(void*(*f)(void*),struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;unsigned char*_T3;void**_T4;int _T5;struct _fat_ptr _T6;int _T7;unsigned char*_T8;void**_T9;void*_TA;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;
int i=0;_TL5E: if(i < sx)goto _TL5C;else{goto _TL5D;}_TL5C: _T2=x;_T3=_T2.curr;_T4=(void**)_T3;_T5=i;_T6=x;_T7=i;_T8=_check_fat_subscript(_T6,sizeof(void*),_T7);_T9=(void**)_T8;_TA=*_T9;_T4[_T5]=f(_TA);i=i + 1;goto _TL5E;_TL5D:;}}
# 238
void Cyc_Array_imp_map_c(void*(*f)(void*,void*),void*env,struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;unsigned char*_T3;void**_T4;int _T5;void*_T6;struct _fat_ptr _T7;int _T8;unsigned char*_T9;void**_TA;void*_TB;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;
int i=0;_TL62: if(i < sx)goto _TL60;else{goto _TL61;}_TL60: _T2=x;_T3=_T2.curr;_T4=(void**)_T3;_T5=i;_T6=env;_T7=x;_T8=i;_T9=_check_fat_subscript(_T7,sizeof(void*),_T8);_TA=(void**)_T9;_TB=*_TA;_T4[_T5]=f(_T6,_TB);i=i + 1;goto _TL62;_TL61:;}}char Cyc_Array_Array_mismatch[15U]="Array_mismatch";
# 245
static struct Cyc_Array_Array_mismatch_exn_struct Cyc_Array_Array_mismatch_val={Cyc_Array_Array_mismatch};
# 250
struct _fat_ptr Cyc_Array_map2(void*(*f)(void*,void*),struct _fat_ptr x,struct _fat_ptr y){struct _fat_ptr _T0;unsigned _T1;int _T2;unsigned _T3;struct _fat_ptr _T4;unsigned _T5;struct Cyc_Array_Array_mismatch_exn_struct*_T6;struct Cyc_Array_Array_mismatch_exn_struct*_T7;struct _fat_ptr _T8;int _T9;void**_TA;unsigned _TB;unsigned _TC;struct _fat_ptr _TD;unsigned char*_TE;void**_TF;void**_T10;unsigned _T11;int _T12;void*_T13;struct _fat_ptr _T14;unsigned char*_T15;void**_T16;void**_T17;unsigned _T18;int _T19;void*_T1A;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T2=sx;_T3=(unsigned)_T2;_T4=y;_T5=
_get_fat_size(_T4,sizeof(void*));if(_T3==_T5)goto _TL63;_T6=& Cyc_Array_Array_mismatch_val;_T7=(struct Cyc_Array_Array_mismatch_exn_struct*)_T6;_throw(_T7);goto _TL64;_TL63: _TL64: _T9=sx;{unsigned _T1B=(unsigned)_T9;_TB=_check_times(_T1B,sizeof(void*));{void**_T1C=_cycalloc(_TB);{unsigned _T1D=_T1B;unsigned i;i=0;_TL68: if(i < _T1D)goto _TL66;else{goto _TL67;}_TL66: _TC=i;_TD=x;_TE=_TD.curr;_TF=(void**)_TE;_T10=
_check_null(_TF);_T11=i;_T12=(int)_T11;_T13=_T10[_T12];_T14=y;_T15=_T14.curr;_T16=(void**)_T15;_T17=_check_null(_T16);_T18=i;_T19=(int)_T18;_T1A=_T17[_T19];_T1C[_TC]=f(_T13,_T1A);i=i + 1;goto _TL68;_TL67:;}_TA=(void**)_T1C;}_T8=_tag_fat(_TA,sizeof(void*),_T1B);}return _T8;}}
# 261
void Cyc_Array_app(void*(*f)(void*),struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;unsigned char*_T4;void**_T5;void*_T6;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;
int i=0;_TL6C: if(i < sx)goto _TL6A;else{goto _TL6B;}_TL6A: _T2=x;_T3=i;_T4=_check_fat_subscript(_T2,sizeof(void*),_T3);_T5=(void**)_T4;_T6=*_T5;f(_T6);i=i + 1;goto _TL6C;_TL6B:;}}
# 265
void Cyc_Array_app_c(void*(*f)(void*,void*),void*env,struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;void*_T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;void**_T6;void*_T7;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;
int i=0;_TL70: if(i < sx)goto _TL6E;else{goto _TL6F;}_TL6E: _T2=env;_T3=x;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(void*),_T4);_T6=(void**)_T5;_T7=*_T6;f(_T2,_T7);i=i + 1;goto _TL70;_TL6F:;}}
# 273
void Cyc_Array_iter(void(*f)(void*),struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;unsigned char*_T4;void**_T5;void*_T6;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;
int i=0;_TL74: if(i < sx)goto _TL72;else{goto _TL73;}_TL72: _T2=x;_T3=i;_T4=_check_fat_subscript(_T2,sizeof(void*),_T3);_T5=(void**)_T4;_T6=*_T5;f(_T6);i=i + 1;goto _TL74;_TL73:;}}
# 279
void Cyc_Array_iter_c(void(*f)(void*,void*),void*env,struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;void*_T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;void**_T6;void*_T7;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;
int i=0;_TL78: if(i < sx)goto _TL76;else{goto _TL77;}_TL76: _T2=env;_T3=x;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(void*),_T4);_T6=(void**)_T5;_T7=*_T6;f(_T2,_T7);i=i + 1;goto _TL78;_TL77:;}}
# 286
void Cyc_Array_app2(void*(*f)(void*,void*),struct _fat_ptr x,struct _fat_ptr y){struct _fat_ptr _T0;unsigned _T1;int _T2;unsigned _T3;struct _fat_ptr _T4;unsigned _T5;struct Cyc_Array_Array_mismatch_exn_struct*_T6;struct Cyc_Array_Array_mismatch_exn_struct*_T7;struct _fat_ptr _T8;int _T9;unsigned char*_TA;void**_TB;void*_TC;struct _fat_ptr _TD;unsigned char*_TE;void**_TF;void**_T10;int _T11;void*_T12;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T2=sx;_T3=(unsigned)_T2;_T4=y;_T5=
_get_fat_size(_T4,sizeof(void*));if(_T3==_T5)goto _TL79;_T6=& Cyc_Array_Array_mismatch_val;_T7=(struct Cyc_Array_Array_mismatch_exn_struct*)_T6;_throw(_T7);goto _TL7A;_TL79: _TL7A: {
int i=0;_TL7E: if(i < sx)goto _TL7C;else{goto _TL7D;}_TL7C: _T8=x;_T9=i;_TA=_check_fat_subscript(_T8,sizeof(void*),_T9);_TB=(void**)_TA;_TC=*_TB;_TD=y;_TE=_TD.curr;_TF=(void**)_TE;_T10=_check_null(_TF);_T11=i;_T12=_T10[_T11];f(_TC,_T12);i=i + 1;goto _TL7E;_TL7D:;}}}
# 292
void Cyc_Array_app2_c(void*(*f)(void*,void*,void*),void*env,struct _fat_ptr x,struct _fat_ptr y){struct _fat_ptr _T0;unsigned _T1;int _T2;unsigned _T3;struct _fat_ptr _T4;unsigned _T5;struct Cyc_Array_Array_mismatch_exn_struct*_T6;struct Cyc_Array_Array_mismatch_exn_struct*_T7;void*_T8;struct _fat_ptr _T9;int _TA;unsigned char*_TB;void**_TC;void*_TD;struct _fat_ptr _TE;unsigned char*_TF;void**_T10;void**_T11;int _T12;void*_T13;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T2=sx;_T3=(unsigned)_T2;_T4=y;_T5=
_get_fat_size(_T4,sizeof(void*));if(_T3==_T5)goto _TL7F;_T6=& Cyc_Array_Array_mismatch_val;_T7=(struct Cyc_Array_Array_mismatch_exn_struct*)_T6;_throw(_T7);goto _TL80;_TL7F: _TL80: {
int i=0;_TL84: if(i < sx)goto _TL82;else{goto _TL83;}_TL82: _T8=env;_T9=x;_TA=i;_TB=_check_fat_subscript(_T9,sizeof(void*),_TA);_TC=(void**)_TB;_TD=*_TC;_TE=y;_TF=_TE.curr;_T10=(void**)_TF;_T11=_check_null(_T10);_T12=i;_T13=_T11[_T12];f(_T8,_TD,_T13);i=i + 1;goto _TL84;_TL83:;}}}
# 300
void Cyc_Array_iter2(void(*f)(void*,void*),struct _fat_ptr x,struct _fat_ptr y){struct _fat_ptr _T0;unsigned _T1;int _T2;unsigned _T3;struct _fat_ptr _T4;unsigned _T5;struct Cyc_Array_Array_mismatch_exn_struct*_T6;struct Cyc_Array_Array_mismatch_exn_struct*_T7;struct _fat_ptr _T8;int _T9;unsigned char*_TA;void**_TB;void*_TC;struct _fat_ptr _TD;unsigned char*_TE;void**_TF;void**_T10;int _T11;void*_T12;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T2=sx;_T3=(unsigned)_T2;_T4=y;_T5=
_get_fat_size(_T4,sizeof(void*));if(_T3==_T5)goto _TL85;_T6=& Cyc_Array_Array_mismatch_val;_T7=(struct Cyc_Array_Array_mismatch_exn_struct*)_T6;_throw(_T7);goto _TL86;_TL85: _TL86: {
int i=0;_TL8A: if(i < sx)goto _TL88;else{goto _TL89;}_TL88: _T8=x;_T9=i;_TA=_check_fat_subscript(_T8,sizeof(void*),_T9);_TB=(void**)_TA;_TC=*_TB;_TD=y;_TE=_TD.curr;_TF=(void**)_TE;_T10=_check_null(_TF);_T11=i;_T12=_T10[_T11];f(_TC,_T12);i=i + 1;goto _TL8A;_TL89:;}}}
# 306
void Cyc_Array_iter2_c(void(*f)(void*,void*,void*),void*env,struct _fat_ptr x,struct _fat_ptr y){struct _fat_ptr _T0;unsigned _T1;int _T2;unsigned _T3;struct _fat_ptr _T4;unsigned _T5;struct Cyc_Array_Array_mismatch_exn_struct*_T6;struct Cyc_Array_Array_mismatch_exn_struct*_T7;void*_T8;struct _fat_ptr _T9;int _TA;unsigned char*_TB;void**_TC;void*_TD;struct _fat_ptr _TE;unsigned char*_TF;void**_T10;void**_T11;int _T12;void*_T13;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T2=sx;_T3=(unsigned)_T2;_T4=y;_T5=
_get_fat_size(_T4,sizeof(void*));if(_T3==_T5)goto _TL8B;_T6=& Cyc_Array_Array_mismatch_val;_T7=(struct Cyc_Array_Array_mismatch_exn_struct*)_T6;_throw(_T7);goto _TL8C;_TL8B: _TL8C: {
int i=0;_TL90: if(i < sx)goto _TL8E;else{goto _TL8F;}_TL8E: _T8=env;_T9=x;_TA=i;_TB=_check_fat_subscript(_T9,sizeof(void*),_TA);_TC=(void**)_TB;_TD=*_TC;_TE=y;_TF=_TE.curr;_T10=(void**)_TF;_T11=_check_null(_T10);_T12=i;_T13=_T11[_T12];f(_T8,_TD,_T13);i=i + 1;goto _TL90;_TL8F:;}}}
# 317
void*Cyc_Array_fold_left(void*(*f)(void*,void*),void*accum,struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;void*_T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;void**_T6;void*_T7;void*_T8;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;{
int i=0;_TL94: if(i < sx)goto _TL92;else{goto _TL93;}
_TL92: _T2=accum;_T3=x;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(void*),_T4);_T6=(void**)_T5;_T7=*_T6;accum=f(_T2,_T7);
# 319
i=i + 1;goto _TL94;_TL93:;}_T8=accum;
# 322
return _T8;}}
# 325
void*Cyc_Array_fold_left_c(void*(*f)(void*,void*,void*),void*env,void*accum,struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;void*_T2;void*_T3;struct _fat_ptr _T4;int _T5;unsigned char*_T6;void**_T7;void*_T8;void*_T9;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;{
int i=0;_TL98: if(i < sx)goto _TL96;else{goto _TL97;}
_TL96: _T2=env;_T3=accum;_T4=x;_T5=i;_T6=_check_fat_subscript(_T4,sizeof(void*),_T5);_T7=(void**)_T6;_T8=*_T7;accum=f(_T2,_T3,_T8);
# 327
i=i + 1;goto _TL98;_TL97:;}_T9=accum;
# 330
return _T9;}}
# 336
void*Cyc_Array_fold_right(void*(*f)(void*,void*),struct _fat_ptr x,void*accum){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;void**_T6;void*_T7;void*_T8;void*_T9;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));_T2=_T1 - 1U;{int i=(int)_T2;_TL9C: if(i >= 0)goto _TL9A;else{goto _TL9B;}
_TL9A: _T3=x;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(void*),_T4);_T6=(void**)_T5;_T7=*_T6;_T8=accum;accum=f(_T7,_T8);
# 337
i=i + -1;goto _TL9C;_TL9B:;}_T9=accum;
# 340
return _T9;}
# 342
void*Cyc_Array_fold_right_c(void*(*f)(void*,void*,void*),void*env,struct _fat_ptr x,void*accum){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;void*_T3;struct _fat_ptr _T4;int _T5;unsigned char*_T6;void**_T7;void*_T8;void*_T9;void*_TA;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));_T2=_T1 - 1U;{int i=(int)_T2;_TLA0: if(i >= 0)goto _TL9E;else{goto _TL9F;}
_TL9E: _T3=env;_T4=x;_T5=i;_T6=_check_fat_subscript(_T4,sizeof(void*),_T5);_T7=(void**)_T6;_T8=*_T7;_T9=accum;accum=f(_T3,_T8,_T9);
# 343
i=i + -1;goto _TLA0;_TL9F:;}_TA=accum;
# 346
return _TA;}
# 350
struct _fat_ptr Cyc_Array_rev_copy(struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;void**_T4;unsigned _T5;unsigned _T6;struct _fat_ptr _T7;int _T8;unsigned _T9;unsigned _TA;unsigned _TB;int _TC;unsigned char*_TD;void**_TE;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;
int n=sx - 1;_T3=sx;{unsigned _TF=(unsigned)_T3;_T5=_check_times(_TF,sizeof(void*));{void**_T10=_cycalloc(_T5);{unsigned _T11=_TF;unsigned i;i=0;_TLA4: if(i < _T11)goto _TLA2;else{goto _TLA3;}_TLA2: _T6=i;_T7=x;_T8=n;_T9=(unsigned)_T8;_TA=i;_TB=_T9 - _TA;_TC=(int)_TB;_TD=_check_fat_subscript(_T7,sizeof(void*),_TC);_TE=(void**)_TD;
_T10[_T6]=*_TE;i=i + 1;goto _TLA4;_TLA3:;}_T4=(void**)_T10;}_T2=_tag_fat(_T4,sizeof(void*),_TF);}return _T2;}}
# 357
void Cyc_Array_imp_rev(struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;void**_T6;struct _fat_ptr _T7;unsigned char*_T8;void**_T9;int _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;void**_TE;struct _fat_ptr _TF;unsigned char*_T10;void**_T11;int _T12;
void*temp;
int i=0;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));_T2=_T1 - 1U;{int j=(int)_T2;
_TLA5: if(i < j)goto _TLA6;else{goto _TLA7;}
_TLA6: _T3=x;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(void*),_T4);_T6=(void**)_T5;temp=*_T6;_T7=x;_T8=_T7.curr;_T9=(void**)_T8;_TA=i;_TB=x;_TC=j;_TD=_check_fat_subscript(_TB,sizeof(void*),_TC);_TE=(void**)_TD;
_T9[_TA]=*_TE;_TF=x;_T10=_TF.curr;_T11=(void**)_T10;_T12=j;
_T11[_T12]=temp;
i=i + 1;
j=j + -1;goto _TLA5;_TLA7:;}}
# 372
int Cyc_Array_forall(int(*pred)(void*),struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;unsigned char*_T4;void**_T5;void*_T6;int _T7;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;{
int i=0;_TLAB: if(i < sx)goto _TLA9;else{goto _TLAA;}
_TLA9: _T2=x;_T3=i;_T4=_check_fat_subscript(_T2,sizeof(void*),_T3);_T5=(void**)_T4;_T6=*_T5;_T7=pred(_T6);if(_T7)goto _TLAC;else{goto _TLAE;}_TLAE: return 0;_TLAC:
# 374
 i=i + 1;goto _TLAB;_TLAA:;}
# 377
return 1;}}
# 379
int Cyc_Array_forall_c(int(*pred)(void*,void*),void*env,struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;void*_T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;void**_T6;void*_T7;int _T8;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;{
int i=0;_TLB2: if(i < sx)goto _TLB0;else{goto _TLB1;}
_TLB0: _T2=env;_T3=x;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(void*),_T4);_T6=(void**)_T5;_T7=*_T6;_T8=pred(_T2,_T7);if(_T8)goto _TLB3;else{goto _TLB5;}_TLB5: return 0;_TLB3:
# 381
 i=i + 1;goto _TLB2;_TLB1:;}
# 384
return 1;}}
# 389
int Cyc_Array_exists(int(*pred)(void*),struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;unsigned char*_T4;void**_T5;void*_T6;int _T7;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;{
int i=0;_TLB9: if(i < sx)goto _TLB7;else{goto _TLB8;}
_TLB7: _T2=x;_T3=i;_T4=_check_fat_subscript(_T2,sizeof(void*),_T3);_T5=(void**)_T4;_T6=*_T5;_T7=pred(_T6);if(!_T7)goto _TLBA;return 1;_TLBA:
# 391
 i=i + 1;goto _TLB9;_TLB8:;}
# 394
return 0;}}
# 396
int Cyc_Array_exists_c(int(*pred)(void*,void*),void*env,struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;void*_T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;void**_T6;void*_T7;int _T8;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;{
int i=0;_TLBF: if(i < sx)goto _TLBD;else{goto _TLBE;}
_TLBD: _T2=env;_T3=x;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(void*),_T4);_T6=(void**)_T5;_T7=*_T6;_T8=pred(_T2,_T7);if(!_T8)goto _TLC0;return 1;_TLC0:
# 398
 i=i + 1;goto _TLBF;_TLBE:;}
# 401
return 0;}}struct _tuple0{void*f0;void*f1;};
# 406
struct _fat_ptr Cyc_Array_zip(struct _fat_ptr x,struct _fat_ptr y){struct _fat_ptr _T0;unsigned _T1;int _T2;unsigned _T3;struct _fat_ptr _T4;unsigned _T5;struct Cyc_Array_Array_mismatch_exn_struct*_T6;struct Cyc_Array_Array_mismatch_exn_struct*_T7;struct _fat_ptr _T8;int _T9;struct _tuple0*_TA;unsigned _TB;unsigned _TC;struct _fat_ptr _TD;unsigned char*_TE;void**_TF;void**_T10;unsigned _T11;int _T12;unsigned _T13;struct _fat_ptr _T14;unsigned char*_T15;void**_T16;void**_T17;unsigned _T18;int _T19;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;_T2=sx;_T3=(unsigned)_T2;_T4=y;_T5=
_get_fat_size(_T4,sizeof(void*));if(_T3==_T5)goto _TLC2;_T6=& Cyc_Array_Array_mismatch_val;_T7=(struct Cyc_Array_Array_mismatch_exn_struct*)_T6;_throw(_T7);goto _TLC3;_TLC2: _TLC3: _T9=sx;{unsigned _T1A=(unsigned)_T9;_TB=_check_times(_T1A,sizeof(struct _tuple0));{struct _tuple0*_T1B=_cycalloc(_TB);{unsigned _T1C=_T1A;unsigned i;i=0;_TLC7: if(i < _T1C)goto _TLC5;else{goto _TLC6;}_TLC5: _TC=i;_TD=x;_TE=_TD.curr;_TF=(void**)_TE;_T10=
# 410
_check_null(_TF);_T11=i;_T12=(int)_T11;_T1B[_TC].f0=_T10[_T12];_T13=i;_T14=y;_T15=_T14.curr;_T16=(void**)_T15;_T17=_check_null(_T16);_T18=i;_T19=(int)_T18;_T1B[_T13].f1=_T17[_T19];i=i + 1;goto _TLC7;_TLC6:;}_TA=(struct _tuple0*)_T1B;}_T8=_tag_fat(_TA,sizeof(struct _tuple0),_T1A);}return _T8;}}struct _tuple1{struct _fat_ptr f0;struct _fat_ptr f1;};
# 414
struct _tuple1 Cyc_Array_split(struct _fat_ptr x){struct _fat_ptr _T0;unsigned _T1;struct _tuple1 _T2;struct _fat_ptr _T3;int _T4;void**_T5;unsigned _T6;unsigned _T7;struct _fat_ptr _T8;unsigned char*_T9;struct _tuple0*_TA;struct _tuple0*_TB;unsigned _TC;int _TD;struct _tuple0 _TE;struct _fat_ptr _TF;int _T10;void**_T11;unsigned _T12;unsigned _T13;struct _fat_ptr _T14;unsigned char*_T15;struct _tuple0*_T16;struct _tuple0*_T17;unsigned _T18;int _T19;struct _tuple0 _T1A;_T0=x;_T1=
_get_fat_size(_T0,sizeof(struct _tuple0));{int sx=(int)_T1;{struct _tuple1 _T1B;_T4=sx;{unsigned _T1C=(unsigned)_T4;_T6=_check_times(_T1C,sizeof(void*));{void**_T1D=_cycalloc(_T6);{unsigned _T1E=_T1C;unsigned i;i=0;_TLCB: if(i < _T1E)goto _TLC9;else{goto _TLCA;}_TLC9: _T7=i;_T8=x;_T9=_T8.curr;_TA=(struct _tuple0*)_T9;_TB=
_check_null(_TA);_TC=i;_TD=(int)_TC;_TE=_TB[_TD];_T1D[_T7]=_TE.f0;i=i + 1;goto _TLCB;_TLCA:;}_T5=(void**)_T1D;}_T3=_tag_fat(_T5,sizeof(void*),_T1C);}_T1B.f0=_T3;_T10=sx;{unsigned _T1C=(unsigned)_T10;_T12=_check_times(_T1C,sizeof(void*));{void**_T1D=_cycalloc(_T12);{unsigned _T1E=_T1C;unsigned i;i=0;_TLCF: if(i < _T1E)goto _TLCD;else{goto _TLCE;}_TLCD: _T13=i;_T14=x;_T15=_T14.curr;_T16=(struct _tuple0*)_T15;_T17=
_check_null(_T16);_T18=i;_T19=(int)_T18;_T1A=_T17[_T19];_T1D[_T13]=_T1A.f1;i=i + 1;goto _TLCF;_TLCE:;}_T11=(void**)_T1D;}_TF=_tag_fat(_T11,sizeof(void*),_T1C);}_T1B.f1=_TF;_T2=_T1B;}
# 416
return _T2;}}
# 423
int Cyc_Array_memq(struct _fat_ptr l,void*x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;unsigned char*_T4;void**_T5;void*_T6;void*_T7;_T0=l;_T1=
_get_fat_size(_T0,sizeof(void*));{int s=(int)_T1;{
int i=0;_TLD3: if(i < s)goto _TLD1;else{goto _TLD2;}
_TLD1: _T2=l;_T3=i;_T4=_check_fat_subscript(_T2,sizeof(void*),_T3);_T5=(void**)_T4;_T6=*_T5;_T7=x;if(_T6!=_T7)goto _TLD4;return 1;_TLD4:
# 425
 i=i + 1;goto _TLD3;_TLD2:;}
# 428
return 0;}}
# 431
int Cyc_Array_mem(int(*compare)(void*,void*),struct _fat_ptr l,void*x){struct _fat_ptr _T0;unsigned _T1;struct _fat_ptr _T2;int _T3;unsigned char*_T4;void**_T5;void*_T6;void*_T7;int _T8;_T0=l;_T1=
_get_fat_size(_T0,sizeof(void*));{int s=(int)_T1;{
int i=0;_TLD9: if(i < s)goto _TLD7;else{goto _TLD8;}
_TLD7: _T2=l;_T3=i;_T4=_check_fat_subscript(_T2,sizeof(void*),_T3);_T5=(void**)_T4;_T6=*_T5;_T7=x;_T8=compare(_T6,_T7);if(0!=_T8)goto _TLDA;return 1;_TLDA:
# 433
 i=i + 1;goto _TLD9;_TLD8:;}
# 436
return 0;}}
# 442
struct _fat_ptr Cyc_Array_extract(struct _fat_ptr x,int start,int*n_opt){struct _fat_ptr _T0;unsigned _T1;int _T2;int*_T3;int _T4;int _T5;int _T6;int _T7;struct Cyc_Core_Invalid_argument_exn_struct*_T8;void*_T9;struct _fat_ptr _TA;int _TB;void**_TC;unsigned _TD;unsigned _TE;struct _fat_ptr _TF;int _T10;unsigned _T11;unsigned _T12;unsigned _T13;int _T14;unsigned char*_T15;void**_T16;_T0=x;_T1=
_get_fat_size(_T0,sizeof(void*));{int sx=(int)_T1;
if(n_opt!=0)goto _TLDC;_T2=sx - start;goto _TLDD;_TLDC: _T3=n_opt;_T2=*_T3;_TLDD: {int n=_T2;
# 446
if(start < 0)goto _TLE0;else{goto _TLE2;}_TLE2: if(n <= 0)goto _TLE0;else{goto _TLE1;}_TLE1: _T4=start;if(n_opt!=0)goto _TLE3;_T5=0;goto _TLE4;_TLE3: _T5=n;_TLE4: _T6=_T4 + _T5;_T7=sx;if(_T6 > _T7)goto _TLE0;else{goto _TLDE;}
_TLE0:{struct Cyc_Core_Invalid_argument_exn_struct*_T17=_cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));_T17->tag=Cyc_Core_Invalid_argument;_T17->f1=_tag_fat("Array::extract",sizeof(char),15U);_T8=(struct Cyc_Core_Invalid_argument_exn_struct*)_T17;}_T9=(void*)_T8;_throw(_T9);goto _TLDF;_TLDE: _TLDF: _TB=n;{unsigned _T17=(unsigned)_TB;_TD=_check_times(_T17,sizeof(void*));{void**_T18=_cycalloc(_TD);{unsigned _T19=_T17;unsigned i;i=0;_TLE8: if(i < _T19)goto _TLE6;else{goto _TLE7;}_TLE6: _TE=i;_TF=x;_T10=start;_T11=(unsigned)_T10;_T12=i;_T13=_T11 + _T12;_T14=(int)_T13;_T15=_check_fat_subscript(_TF,sizeof(void*),_T14);_T16=(void**)_T15;
# 449
_T18[_TE]=*_T16;i=i + 1;goto _TLE8;_TLE7:;}_TC=(void**)_T18;}_TA=_tag_fat(_TC,sizeof(void*),_T17);}return _TA;}}}
