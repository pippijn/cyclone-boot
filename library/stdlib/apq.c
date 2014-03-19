#include <cyc_include.h>
 struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};
# 73 "../../library/stdlib/cycboot.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 7 "../../library/stdlib/ap.h"
extern struct Cyc_AP_T*Cyc_AP_zero;
extern struct Cyc_AP_T*Cyc_AP_one;
# 10
extern struct Cyc_AP_T*Cyc_AP_fromint(long);
extern struct Cyc_AP_T*Cyc_AP_fromstr(const char*,int);
# 13
extern char*Cyc_AP_tostr(struct Cyc_AP_T*,int);
extern struct Cyc_AP_T*Cyc_AP_neg(struct Cyc_AP_T*);
extern struct Cyc_AP_T*Cyc_AP_abs(struct Cyc_AP_T*);
extern struct Cyc_AP_T*Cyc_AP_add(struct Cyc_AP_T*,struct Cyc_AP_T*);
extern struct Cyc_AP_T*Cyc_AP_sub(struct Cyc_AP_T*,struct Cyc_AP_T*);
extern struct Cyc_AP_T*Cyc_AP_mul(struct Cyc_AP_T*,struct Cyc_AP_T*);
extern struct Cyc_AP_T*Cyc_AP_div(struct Cyc_AP_T*,struct Cyc_AP_T*);
# 32
extern int Cyc_AP_cmp(struct Cyc_AP_T*,struct Cyc_AP_T*);
# 34
extern struct Cyc_AP_T*Cyc_AP_gcd(struct Cyc_AP_T*,struct Cyc_AP_T*);
extern struct Cyc_AP_T*Cyc_AP_lcm(struct Cyc_AP_T*,struct Cyc_AP_T*);struct Cyc_APQ_T{struct Cyc_AP_T*n;struct Cyc_AP_T*d;};char Cyc_Invalid_argument[17U]="Invalid_argument";struct Cyc_Invalid_argument_exn_struct{char*tag;struct _fat_ptr f1;};
# 13 "apq.cyc"
struct Cyc_APQ_T*Cyc_reduce(struct Cyc_APQ_T*q){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_AP_T*_T2;int _T3;struct Cyc_APQ_T*_T4;struct Cyc_APQ_T*_T5;struct Cyc_AP_T*_T6;struct Cyc_APQ_T*_T7;struct Cyc_APQ_T*_T8;struct Cyc_AP_T*_T9;struct Cyc_APQ_T*_TA;struct Cyc_AP_T*_TB;struct Cyc_AP_T*_TC;struct Cyc_APQ_T*_TD;struct Cyc_AP_T*_TE;int _TF;struct Cyc_APQ_T*_T10;void*_T11;struct Cyc_APQ_T*_T12;struct Cyc_APQ_T*_T13;struct Cyc_AP_T*_T14;struct Cyc_AP_T*_T15;struct Cyc_APQ_T*_T16;struct Cyc_APQ_T*_T17;struct Cyc_AP_T*_T18;struct Cyc_AP_T*_T19;struct Cyc_APQ_T*_T1A;_T0=
_check_null(q);_T1=_T0->d;_T2=Cyc_AP_zero;_T3=Cyc_AP_cmp(_T1,_T2);if(_T3 >= 0)goto _TL0;_T4=q;_T5=q;_T6=_T5->d;
_T4->d=Cyc_AP_neg(_T6);_T7=q;_T8=q;_T9=_T8->n;
_T7->n=Cyc_AP_neg(_T9);goto _TL1;_TL0: _TL1: _TA=q;_TB=_TA->n;_TC=
# 18
Cyc_AP_abs(_TB);_TD=q;_TE=_TD->d;{struct Cyc_AP_T*gcd=Cyc_AP_gcd(_TC,_TE);_TF=
Cyc_AP_cmp(gcd,Cyc_AP_one);if(_TF!=0)goto _TL2;_T10=q;
return _T10;_TL2: _T11=_cycalloc(sizeof(struct Cyc_APQ_T));{
struct Cyc_APQ_T*newq=(struct Cyc_APQ_T*)_T11;_T12=newq;_T13=q;_T14=_T13->n;_T15=gcd;
_T12->n=Cyc_AP_div(_T14,_T15);_T16=newq;_T17=q;_T18=_T17->d;_T19=gcd;
_T16->d=Cyc_AP_div(_T18,_T19);_T1A=newq;
return _T1A;}}}
# 27
struct Cyc_APQ_T*Cyc_APQ_fromint(int i){void*_T0;struct Cyc_APQ_T*_T1;struct Cyc_APQ_T*_T2;struct Cyc_APQ_T*_T3;_T0=_cycalloc(sizeof(struct Cyc_APQ_T));{
struct Cyc_APQ_T*q=(struct Cyc_APQ_T*)_T0;_T1=q;
_T1->n=Cyc_AP_fromint(i);_T2=q;
_T2->d=Cyc_AP_one;_T3=q;
return _T3;}}
# 34
struct Cyc_APQ_T*Cyc_APQ_fromAP(struct Cyc_AP_T*n,struct Cyc_AP_T*d){int _T0;struct Cyc_Invalid_argument_exn_struct*_T1;void*_T2;void*_T3;struct Cyc_APQ_T*_T4;struct Cyc_APQ_T*_T5;struct Cyc_APQ_T*_T6;_T0=
Cyc_AP_cmp(d,Cyc_AP_zero);if(_T0!=0)goto _TL4;{struct Cyc_Invalid_argument_exn_struct*_T7=_cycalloc(sizeof(struct Cyc_Invalid_argument_exn_struct));_T7->tag=Cyc_Invalid_argument;_T7->f1=_tag_fat("APQ_fromAP: divide by zero",sizeof(char),27U);_T1=(struct Cyc_Invalid_argument_exn_struct*)_T7;}_T2=(void*)_T1;_throw(_T2);goto _TL5;_TL4: _TL5: _T3=_cycalloc(sizeof(struct Cyc_APQ_T));{
struct Cyc_APQ_T*q=(struct Cyc_APQ_T*)_T3;_T4=q;
_T4->n=n;_T5=q;
_T5->d=d;_T6=
Cyc_reduce(q);return _T6;}}
# 42
struct Cyc_APQ_T*Cyc_APQ_fromstr(struct _fat_ptr str,int base){void*_T0;struct _fat_ptr _T1;unsigned char*_T2;const char*_T3;char _T4;int _T5;struct _fat_ptr _T6;unsigned char*_T7;const char*_T8;char _T9;int _TA;struct _fat_ptr*_TB;struct Cyc_APQ_T*_TC;struct _fat_ptr _TD;unsigned char*_TE;const char*_TF;int _T10;struct _fat_ptr _T11;unsigned char*_T12;const char*_T13;char _T14;int _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;unsigned char*_T18;const char*_T19;int _T1A;int _T1B;struct Cyc_APQ_T*_T1C;struct Cyc_Invalid_argument_exn_struct*_T1D;void*_T1E;struct Cyc_APQ_T*_T1F;struct Cyc_APQ_T*_T20;_T0=_cycalloc(sizeof(struct Cyc_APQ_T));{
struct Cyc_APQ_T*q=(struct Cyc_APQ_T*)_T0;
struct _fat_ptr s=str;
_TL6: _T1=s;_T2=_check_fat_subscript(_T1,sizeof(char),0U);_T3=(const char*)_T2;_T4=*_T3;_T5=(int)_T4;if(_T5)goto _TL9;else{goto _TL8;}_TL9: _T6=s;_T7=_T6.curr;_T8=(const char*)_T7;_T9=*_T8;_TA=(int)_T9;if(_TA!=47)goto _TL7;else{goto _TL8;}_TL7: _TB=& s;_fat_ptr_inplace_plus(_TB,sizeof(char),1);goto _TL6;_TL8: _TC=q;_TD=str;_TE=_untag_fat_ptr_check_bound(_TD,sizeof(char),1U);_TF=(const char*)_TE;_T10=base;
_TC->n=Cyc_AP_fromstr(_TF,_T10);_T11=s;_T12=_T11.curr;_T13=(const char*)_T12;_T14=*_T13;_T15=(int)_T14;
if(!_T15)goto _TLA;_T16=s;_T17=
_fat_ptr_plus(_T16,sizeof(char),1);_T18=_untag_fat_ptr_check_bound(_T17,sizeof(char),1U);_T19=(const char*)_T18;_T1A=base;{struct Cyc_AP_T*d=Cyc_AP_fromstr(_T19,_T1A);_T1B=
Cyc_AP_cmp(d,Cyc_AP_zero);if(!_T1B)goto _TLC;_T1C=q;
_T1C->d=d;goto _TLD;
_TLC:{struct Cyc_Invalid_argument_exn_struct*_T21=_cycalloc(sizeof(struct Cyc_Invalid_argument_exn_struct));_T21->tag=Cyc_Invalid_argument;_T21->f1=_tag_fat("APQ_fromstr: malformed string",sizeof(char),30U);_T1D=(struct Cyc_Invalid_argument_exn_struct*)_T21;}_T1E=(void*)_T1D;_throw(_T1E);_TLD:;}goto _TLB;
# 54
_TLA: _T1F=q;_T1F->d=Cyc_AP_one;_TLB: _T20=
Cyc_reduce(q);return _T20;}}
# 58
struct _fat_ptr Cyc_APQ_tostr(struct Cyc_APQ_T*q,int base){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_AP_T*_T2;int _T3;struct _fat_ptr _T4;struct Cyc_APQ_T*_T5;struct Cyc_AP_T*_T6;int _T7;void*_T8;void*_T9;unsigned _TA;struct _fat_ptr _TB;struct Cyc_String_pa_PrintArg_struct _TC;struct _fat_ptr _TD;struct Cyc_APQ_T*_TE;struct Cyc_AP_T*_TF;int _T10;void*_T11;void*_T12;unsigned _T13;struct Cyc_String_pa_PrintArg_struct _T14;struct _fat_ptr _T15;struct Cyc_APQ_T*_T16;struct Cyc_AP_T*_T17;int _T18;void*_T19;void*_T1A;unsigned _T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;_T0=
_check_null(q);_T1=_T0->d;_T2=Cyc_AP_one;_T3=Cyc_AP_cmp(_T1,_T2);if(_T3!=0)goto _TLE;_T5=q;_T6=_T5->n;_T7=base;{char*_T1E=
Cyc_AP_tostr(_T6,_T7);_T8=(void*)_T1E;_T9=(void*)_T1E;_TA=_get_zero_arr_size_char(_T9,1U);_T4=_tag_fat(_T8,sizeof(char),_TA);}return _T4;_TLE:{struct Cyc_String_pa_PrintArg_struct _T1E;_T1E.tag=0;_TE=q;_TF=_TE->n;_T10=base;{char*_T1F=
Cyc_AP_tostr(_TF,_T10);_T11=(void*)_T1F;_T12=(void*)_T1F;_T13=_get_zero_arr_size_char(_T12,1U);_TD=_tag_fat(_T11,sizeof(char),_T13);}_T1E.f1=_TD;_TC=_T1E;}{struct Cyc_String_pa_PrintArg_struct _T1E=_TC;{struct Cyc_String_pa_PrintArg_struct _T1F;_T1F.tag=0;_T16=q;_T17=_T16->d;_T18=base;{char*_T20=Cyc_AP_tostr(_T17,_T18);_T19=(void*)_T20;_T1A=(void*)_T20;_T1B=_get_zero_arr_size_char(_T1A,1U);_T15=_tag_fat(_T19,sizeof(char),_T1B);}_T1F.f1=_T15;_T14=_T1F;}{struct Cyc_String_pa_PrintArg_struct _T1F=_T14;void*_T20[2];_T20[0]=& _T1E;_T20[1]=& _T1F;_T1C=_tag_fat("%s/%s",sizeof(char),6U);_T1D=_tag_fat(_T20,sizeof(void*),2);_TB=Cyc_aprintf(_T1C,_T1D);}}return _TB;}
# 64
struct Cyc_APQ_T*Cyc_APQ_neg(struct Cyc_APQ_T*q){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_AP_T*_T2;struct Cyc_APQ_T*_T3;struct Cyc_AP_T*_T4;struct Cyc_APQ_T*_T5;_T0=
_check_null(q);_T1=_T0->n;_T2=Cyc_AP_neg(_T1);_T3=q;_T4=_T3->d;_T5=Cyc_APQ_fromAP(_T2,_T4);return _T5;}
# 68
struct Cyc_APQ_T*Cyc_APQ_abs(struct Cyc_APQ_T*q){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_AP_T*_T2;struct Cyc_APQ_T*_T3;struct Cyc_AP_T*_T4;struct Cyc_APQ_T*_T5;_T0=
_check_null(q);_T1=_T0->n;_T2=Cyc_AP_abs(_T1);_T3=q;_T4=_T3->d;_T5=Cyc_APQ_fromAP(_T2,_T4);return _T5;}
# 72
struct Cyc_APQ_T*Cyc_APQ_add(struct Cyc_APQ_T*p,struct Cyc_APQ_T*q){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_APQ_T*_T2;struct Cyc_AP_T*_T3;struct Cyc_AP_T*_T4;struct Cyc_APQ_T*_T5;struct Cyc_AP_T*_T6;struct Cyc_AP_T*_T7;struct Cyc_APQ_T*_T8;struct Cyc_AP_T*_T9;struct Cyc_APQ_T*_TA;struct Cyc_AP_T*_TB;struct Cyc_AP_T*_TC;struct Cyc_AP_T*_TD;struct Cyc_APQ_T*_TE;struct Cyc_AP_T*_TF;struct Cyc_AP_T*_T10;struct Cyc_AP_T*_T11;struct Cyc_AP_T*_T12;struct Cyc_AP_T*_T13;struct Cyc_APQ_T*_T14;_T0=
_check_null(p);_T1=_T0->d;_T2=_check_null(q);_T3=_T2->d;{struct Cyc_AP_T*d=Cyc_AP_lcm(_T1,_T3);_T4=d;_T5=p;_T6=_T5->d;{
struct Cyc_AP_T*px=Cyc_AP_div(_T4,_T6);_T7=d;_T8=q;_T9=_T8->d;{
struct Cyc_AP_T*qx=Cyc_AP_div(_T7,_T9);_TA=p;_TB=_TA->n;_TC=px;_TD=
Cyc_AP_mul(_TB,_TC);_TE=q;_TF=_TE->n;_T10=qx;_T11=Cyc_AP_mul(_TF,_T10);_T12=Cyc_AP_add(_TD,_T11);_T13=d;_T14=Cyc_APQ_fromAP(_T12,_T13);return _T14;}}}}
# 79
struct Cyc_APQ_T*Cyc_APQ_sub(struct Cyc_APQ_T*p,struct Cyc_APQ_T*q){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_APQ_T*_T2;struct Cyc_AP_T*_T3;struct Cyc_AP_T*_T4;struct Cyc_APQ_T*_T5;struct Cyc_AP_T*_T6;struct Cyc_AP_T*_T7;struct Cyc_APQ_T*_T8;struct Cyc_AP_T*_T9;struct Cyc_APQ_T*_TA;struct Cyc_AP_T*_TB;struct Cyc_AP_T*_TC;struct Cyc_AP_T*_TD;struct Cyc_APQ_T*_TE;struct Cyc_AP_T*_TF;struct Cyc_AP_T*_T10;struct Cyc_AP_T*_T11;struct Cyc_AP_T*_T12;struct Cyc_AP_T*_T13;struct Cyc_APQ_T*_T14;_T0=
_check_null(p);_T1=_T0->d;_T2=_check_null(q);_T3=_T2->d;{struct Cyc_AP_T*d=Cyc_AP_lcm(_T1,_T3);_T4=d;_T5=p;_T6=_T5->d;{
struct Cyc_AP_T*px=Cyc_AP_div(_T4,_T6);_T7=d;_T8=q;_T9=_T8->d;{
struct Cyc_AP_T*qx=Cyc_AP_div(_T7,_T9);_TA=p;_TB=_TA->n;_TC=px;_TD=
Cyc_AP_mul(_TB,_TC);_TE=q;_TF=_TE->n;_T10=qx;_T11=Cyc_AP_mul(_TF,_T10);_T12=Cyc_AP_sub(_TD,_T11);_T13=d;_T14=Cyc_APQ_fromAP(_T12,_T13);return _T14;}}}}
# 86
struct Cyc_APQ_T*Cyc_APQ_mul(struct Cyc_APQ_T*p,struct Cyc_APQ_T*q){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_APQ_T*_T2;struct Cyc_AP_T*_T3;struct Cyc_AP_T*_T4;struct Cyc_APQ_T*_T5;struct Cyc_AP_T*_T6;struct Cyc_APQ_T*_T7;struct Cyc_AP_T*_T8;struct Cyc_AP_T*_T9;struct Cyc_APQ_T*_TA;_T0=
_check_null(p);_T1=_T0->n;_T2=_check_null(q);_T3=_T2->n;_T4=Cyc_AP_mul(_T1,_T3);_T5=p;_T6=_T5->d;_T7=q;_T8=_T7->d;_T9=Cyc_AP_mul(_T6,_T8);_TA=Cyc_APQ_fromAP(_T4,_T9);return _TA;}
# 90
struct Cyc_APQ_T*Cyc_APQ_div(struct Cyc_APQ_T*p,struct Cyc_APQ_T*q){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_AP_T*_T2;int _T3;struct Cyc_Invalid_argument_exn_struct*_T4;void*_T5;struct Cyc_APQ_T*_T6;struct Cyc_AP_T*_T7;struct Cyc_APQ_T*_T8;struct Cyc_AP_T*_T9;struct Cyc_AP_T*_TA;struct Cyc_APQ_T*_TB;struct Cyc_AP_T*_TC;struct Cyc_APQ_T*_TD;struct Cyc_AP_T*_TE;struct Cyc_AP_T*_TF;struct Cyc_APQ_T*_T10;_T0=
_check_null(q);_T1=_T0->n;_T2=Cyc_AP_zero;_T3=Cyc_AP_cmp(_T1,_T2);if(_T3!=0)goto _TL10;{struct Cyc_Invalid_argument_exn_struct*_T11=_cycalloc(sizeof(struct Cyc_Invalid_argument_exn_struct));_T11->tag=Cyc_Invalid_argument;_T11->f1=_tag_fat("APQ_div: divide by zero",sizeof(char),24U);_T4=(struct Cyc_Invalid_argument_exn_struct*)_T11;}_T5=(void*)_T4;_throw(_T5);goto _TL11;_TL10: _TL11: _T6=
_check_null(p);_T7=_T6->n;_T8=q;_T9=_T8->d;_TA=Cyc_AP_mul(_T7,_T9);_TB=p;_TC=_TB->d;_TD=q;_TE=_TD->n;_TF=Cyc_AP_mul(_TC,_TE);_T10=Cyc_APQ_fromAP(_TA,_TF);return _T10;}
# 95
int Cyc_APQ_cmp(struct Cyc_APQ_T*p,struct Cyc_APQ_T*q){struct Cyc_APQ_T*_T0;struct Cyc_AP_T*_T1;struct Cyc_APQ_T*_T2;struct Cyc_AP_T*_T3;struct Cyc_AP_T*_T4;struct Cyc_APQ_T*_T5;struct Cyc_AP_T*_T6;struct Cyc_AP_T*_T7;struct Cyc_APQ_T*_T8;struct Cyc_AP_T*_T9;struct Cyc_APQ_T*_TA;struct Cyc_AP_T*_TB;struct Cyc_AP_T*_TC;struct Cyc_AP_T*_TD;struct Cyc_APQ_T*_TE;struct Cyc_AP_T*_TF;struct Cyc_AP_T*_T10;struct Cyc_AP_T*_T11;int _T12;_T0=
_check_null(p);_T1=_T0->d;_T2=_check_null(q);_T3=_T2->d;{struct Cyc_AP_T*d=Cyc_AP_lcm(_T1,_T3);_T4=d;_T5=p;_T6=_T5->d;{
struct Cyc_AP_T*px=Cyc_AP_div(_T4,_T6);_T7=d;_T8=q;_T9=_T8->d;{
struct Cyc_AP_T*qx=Cyc_AP_div(_T7,_T9);_TA=p;_TB=_TA->n;_TC=px;_TD=
Cyc_AP_mul(_TB,_TC);_TE=q;_TF=_TE->n;_T10=qx;_T11=Cyc_AP_mul(_TF,_T10);_T12=Cyc_AP_cmp(_TD,_T11);return _T12;}}}}
