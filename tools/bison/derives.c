#include <cyc_include.h>
 struct Cyc_shorts_tag{struct Cyc_shorts_tag*next;short value;};
# 77 "gram.h"
extern int Cyc_nrules;
extern int Cyc_nsyms;
extern int Cyc_ntokens;
extern int Cyc_nvars;
# 83
extern struct _fat_ptr Cyc_rlhs;
# 32 "derives.cyc"
struct _fat_ptr Cyc_derives;
# 35
void Cyc_set_derives (void){struct _fat_ptr _T0;int _T1;struct Cyc_shorts_tag**_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;struct _fat_ptr _T7;int _T8;struct Cyc_shorts_tag*_T9;unsigned _TA;unsigned _TB;unsigned _TC;struct _fat_ptr _TD;int _TE;unsigned char*_TF;short*_T10;short _T11;struct _fat_ptr _T12;unsigned char*_T13;struct Cyc_shorts_tag*_T14;struct _fat_ptr _T15;int _T16;unsigned char*_T17;struct Cyc_shorts_tag**_T18;struct _fat_ptr _T19;unsigned char*_T1A;struct Cyc_shorts_tag*_T1B;int _T1C;struct _fat_ptr _T1D;unsigned char*_T1E;struct Cyc_shorts_tag**_T1F;int _T20;struct _fat_ptr _T21;unsigned char*_T22;struct _fat_ptr*_T23;struct _fat_ptr _T24;int _T25;struct _fat_ptr*_T26;unsigned _T27;unsigned _T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;int _T2B;struct _fat_ptr _T2C;int _T2D;short*_T2E;unsigned _T2F;unsigned _T30;struct _fat_ptr _T31;int _T32;unsigned char*_T33;struct _fat_ptr*_T34;struct _fat_ptr _T35;int _T36;unsigned char*_T37;struct Cyc_shorts_tag**_T38;struct Cyc_shorts_tag*_T39;unsigned _T3A;struct _fat_ptr*_T3B;struct _fat_ptr _T3C;unsigned char*_T3D;short*_T3E;struct Cyc_shorts_tag*_T3F;struct Cyc_shorts_tag*_T40;struct _fat_ptr*_T41;struct _fat_ptr _T42;unsigned char*_T43;short*_T44;struct _fat_ptr _T45;int _T46;
# 38
register int i;
register int lhs;
struct _fat_ptr p;
register struct Cyc_shorts_tag*p1;
struct _fat_ptr q;
struct _fat_ptr dset;
struct _fat_ptr delts;_T1=Cyc_nvars;{unsigned _T47=(unsigned)_T1;_T3=_check_times(_T47,sizeof(struct Cyc_shorts_tag*));{struct Cyc_shorts_tag**_T48=_cycalloc(_T3);{unsigned _T49=_T47;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL3: if(_new2p_cyclone < _T49)goto _TL1;else{goto _TL2;}_TL1: _T4=_new2p_cyclone;
# 46
_T48[_T4]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TL3;_TL2:;}_T2=(struct Cyc_shorts_tag**)_T48;}_T0=_tag_fat(_T2,sizeof(struct Cyc_shorts_tag*),_T47);}_T5=_T0;_T6=- Cyc_ntokens;dset=_fat_ptr_plus(_T5,sizeof(struct Cyc_shorts_tag*),_T6);_T8=Cyc_nrules + 1;{unsigned _T47=(unsigned)_T8;_TA=_check_times(_T47,sizeof(struct Cyc_shorts_tag));{struct Cyc_shorts_tag*_T48=_cycalloc(_TA);{unsigned _T49=_T47;unsigned _temp_;_temp_=0;_TL7: if(_temp_ < _T49)goto _TL5;else{goto _TL6;}_TL5: _TB=_temp_;
# 48
_T48[_TB].next=0;_TC=_temp_;_T48[_TC].value=0;_temp_=_temp_ + 1;goto _TL7;_TL6:;}_T9=(struct Cyc_shorts_tag*)_T48;}_T7=_tag_fat(_T9,sizeof(struct Cyc_shorts_tag),_T47);}delts=_T7;
# 50
p=delts;
# 52
i=Cyc_nrules;_TLB: if(i > 0)goto _TL9;else{goto _TLA;}
# 54
_TL9: _TD=Cyc_rlhs;_TE=i;_TF=_check_fat_subscript(_TD,sizeof(short),_TE);_T10=(short*)_TF;_T11=*_T10;lhs=(int)_T11;
if(lhs < 0)goto _TLC;_T12=p;_T13=_check_fat_subscript(_T12,sizeof(struct Cyc_shorts_tag),0U);_T14=(struct Cyc_shorts_tag*)_T13;_T15=dset;_T16=lhs;_T17=_check_fat_subscript(_T15,sizeof(struct Cyc_shorts_tag*),_T16);_T18=(struct Cyc_shorts_tag**)_T17;
# 57
_T14->next=*_T18;_T19=p;_T1A=_T19.curr;_T1B=(struct Cyc_shorts_tag*)_T1A;_T1C=i;
_T1B->value=(short)_T1C;_T1D=dset;_T1E=_T1D.curr;_T1F=(struct Cyc_shorts_tag**)_T1E;_T20=lhs;_T21=p;_T22=_untag_fat_ptr(_T21,sizeof(struct Cyc_shorts_tag),1U);
_T1F[_T20]=(struct Cyc_shorts_tag*)_T22;_T23=& p;
_fat_ptr_inplace_plus(_T23,sizeof(struct Cyc_shorts_tag),1);goto _TLD;_TLC: _TLD:
# 52
 i=i + -1;goto _TLB;_TLA: _T25=Cyc_nvars;{unsigned _T47=(unsigned)_T25;_T27=_check_times(_T47,sizeof(struct _fat_ptr));{struct _fat_ptr*_T48=_cycalloc(_T27);{unsigned _T49=_T47;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL11: if(_new2p_cyclone < _T49)goto _TLF;else{goto _TL10;}_TLF: _T28=_new2p_cyclone;_T29=
# 64
_tag_fat(0,0,0);_T48[_T28]=_T29;_new2p_cyclone=_new2p_cyclone + 1;goto _TL11;_TL10:;}_T26=(struct _fat_ptr*)_T48;}_T24=_tag_fat(_T26,sizeof(struct _fat_ptr),_T47);}_T2A=_T24;_T2B=- Cyc_ntokens;Cyc_derives=_fat_ptr_plus(_T2A,sizeof(struct _fat_ptr),_T2B);_T2D=Cyc_nvars + Cyc_nrules;{unsigned _T47=(unsigned)_T2D;_T2F=_check_times(_T47,sizeof(short));{short*_T48=_cycalloc_atomic(_T2F);{unsigned _T49=_T47;unsigned _new2_cyclone;_new2_cyclone=0;_TL15: if(_new2_cyclone < _T49)goto _TL13;else{goto _TL14;}_TL13: _T30=_new2_cyclone;
_T48[_T30]=0;_new2_cyclone=_new2_cyclone + 1;goto _TL15;_TL14:;}_T2E=(short*)_T48;}_T2C=_tag_fat(_T2E,sizeof(short),_T47);}q=_T2C;
# 67
i=Cyc_ntokens;_TL19: if(i < Cyc_nsyms)goto _TL17;else{goto _TL18;}
# 69
_TL17: _T31=Cyc_derives;_T32=i;_T33=_check_fat_subscript(_T31,sizeof(struct _fat_ptr),_T32);_T34=(struct _fat_ptr*)_T33;*_T34=q;_T35=dset;_T36=i;_T37=_check_fat_subscript(_T35,sizeof(struct Cyc_shorts_tag*),_T36);_T38=(struct Cyc_shorts_tag**)_T37;
p1=*_T38;
_TL1A: _T39=p1;_T3A=(unsigned)_T39;if(_T3A)goto _TL1B;else{goto _TL1C;}
# 73
_TL1B: _T3B=& q;_T3C=_fat_ptr_inplace_plus_post(_T3B,sizeof(short),1);_T3D=_check_fat_subscript(_T3C,sizeof(short),0U);_T3E=(short*)_T3D;_T3F=p1;*_T3E=_T3F->value;_T40=p1;
p1=_T40->next;goto _TL1A;_TL1C: _T41=& q;_T42=
# 76
_fat_ptr_inplace_plus_post(_T41,sizeof(short),1);_T43=_check_fat_subscript(_T42,sizeof(short),0U);_T44=(short*)_T43;*_T44=- 1;
# 67
i=i + 1;goto _TL19;_TL18: _T45=dset;_T46=Cyc_ntokens;
# 84
dset=_fat_ptr_plus(_T45,sizeof(struct Cyc_shorts_tag*),_T46);
dset=_tag_fat(0,0,0);
delts=_tag_fat(0,0,0);}
# 90
void Cyc_free_derives (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;int _T5;_T0=Cyc_derives;_T1=Cyc_ntokens;_T2=_check_fat_subscript(_T0,sizeof(struct _fat_ptr),_T1);_T3=(struct _fat_ptr*)_T2;
# 93
*_T3=_tag_fat(0,0,0);_T4=Cyc_derives;_T5=Cyc_ntokens;
Cyc_derives=_fat_ptr_plus(_T4,sizeof(struct _fat_ptr),_T5);
Cyc_derives=_tag_fat(0,0,0);}
