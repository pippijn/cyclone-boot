#include <cyc_include.h>

# 28 "warshall.cyc"
 void Cyc_TC(struct _fat_ptr R,int n){int _T0;int _T1;int _T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;unsigned _T7;unsigned _T8;int _T9;struct _fat_ptr _TA;unsigned char*_TB;unsigned*_TC;struct _fat_ptr _TD;unsigned char*_TE;unsigned*_TF;struct _fat_ptr _T10;unsigned char*_T11;unsigned*_T12;struct _fat_ptr _T13;unsigned char*_T14;unsigned*_T15;struct _fat_ptr _T16;unsigned char*_T17;unsigned*_T18;unsigned _T19;unsigned _T1A;unsigned _T1B;int _T1C;struct _fat_ptr _T1D;int _T1E;int _T1F;int _T20;struct _fat_ptr _T21;unsigned char*_T22;unsigned*_T23;struct _fat_ptr _T24;unsigned char*_T25;unsigned*_T26;struct _fat_ptr*_T27;struct _fat_ptr _T28;unsigned char*_T29;unsigned*_T2A;struct _fat_ptr*_T2B;struct _fat_ptr _T2C;unsigned char*_T2D;unsigned*_T2E;unsigned _T2F;struct _fat_ptr _T30;int _T31;unsigned _T32;unsigned _T33;int _T34;struct _fat_ptr _T35;int _T36;unsigned _T37;unsigned _T38;int _T39;struct _fat_ptr*_T3A;struct _fat_ptr _T3B;int _T3C;unsigned _T3D;unsigned _T3E;int _T3F;
# 30
register int rowsize;
register unsigned mask;
struct _fat_ptr rowj;
struct _fat_ptr rp;
struct _fat_ptr rend;
struct _fat_ptr ccol;
# 37
struct _fat_ptr relend;
struct _fat_ptr cword;
struct _fat_ptr rowi;_T0=n + 32;_T1=_T0 - 1;_T2=_T1 / 32;_T3=(unsigned)_T2;_T4=_T3 * sizeof(unsigned);
# 41
rowsize=(int)_T4;_T5=R;_T6=n * rowsize;_T7=(unsigned)_T6;_T8=_T7 / sizeof(unsigned);_T9=(int)_T8;
# 46
relend=_fat_ptr_plus(_T5,sizeof(unsigned),_T9);
# 48
cword=R;
mask=1U;
rowi=R;
_TL0: _TA=rowi;_TB=_TA.curr;_TC=(unsigned*)_TB;_TD=relend;_TE=_TD.curr;_TF=(unsigned*)_TE;if(_TC < _TF)goto _TL1;else{goto _TL2;}
# 53
_TL1: ccol=cword;
rowj=R;
# 56
_TL3: _T10=rowj;_T11=_T10.curr;_T12=(unsigned*)_T11;_T13=relend;_T14=_T13.curr;_T15=(unsigned*)_T14;if(_T12 < _T15)goto _TL4;else{goto _TL5;}
# 58
_TL4: _T16=ccol;_T17=_check_fat_subscript(_T16,sizeof(unsigned),0U);_T18=(unsigned*)_T17;_T19=*_T18;_T1A=mask;_T1B=_T19 & _T1A;_T1C=(int)_T1B;if(!_T1C)goto _TL6;
# 60
rp=rowi;_T1D=rowj;_T1E=rowsize;_T1F=(int)sizeof(unsigned);_T20=_T1E / _T1F;
# 64
rend=_fat_ptr_plus(_T1D,sizeof(unsigned),_T20);
# 66
_TL8: _T21=rowj;_T22=_T21.curr;_T23=(unsigned*)_T22;_T24=rend;_T25=_T24.curr;_T26=(unsigned*)_T25;if(_T23 < _T26)goto _TL9;else{goto _TLA;}
_TL9: _T27=& rowj;_T28=_fat_ptr_inplace_plus_post(_T27,sizeof(unsigned),1);_T29=_check_fat_subscript(_T28,sizeof(unsigned),0U);_T2A=(unsigned*)_T29;_T2B=& rp;_T2C=_fat_ptr_inplace_plus_post(_T2B,sizeof(unsigned),1);_T2D=_check_fat_subscript(_T2C,sizeof(unsigned),0U);_T2E=(unsigned*)_T2D;_T2F=*_T2E;*_T2A=*_T2A | _T2F;goto _TL8;_TLA: goto _TL7;
# 74
_TL6: _T30=rowj;_T31=rowsize;_T32=(unsigned)_T31;_T33=_T32 / sizeof(unsigned);_T34=(int)_T33;rowj=_fat_ptr_plus(_T30,sizeof(unsigned),_T34);_TL7: _T35=ccol;_T36=rowsize;_T37=(unsigned)_T36;_T38=_T37 / sizeof(unsigned);_T39=(int)_T38;
# 80
ccol=_fat_ptr_plus(_T35,sizeof(unsigned),_T39);goto _TL3;_TL5:
# 83
 mask=mask << 1U;
if(mask!=0U)goto _TLB;
# 86
mask=1U;_T3A=& cword;
_fat_ptr_inplace_plus(_T3A,sizeof(unsigned),1);goto _TLC;_TLB: _TLC: _T3B=rowi;_T3C=rowsize;_T3D=(unsigned)_T3C;_T3E=_T3D / sizeof(unsigned);_T3F=(int)_T3E;
# 92
rowi=_fat_ptr_plus(_T3B,sizeof(unsigned),_T3F);goto _TL0;_TL2:;}
# 101
void Cyc_RTC(struct _fat_ptr R,int n){int _T0;int _T1;int _T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;unsigned _T7;unsigned _T8;int _T9;struct _fat_ptr _TA;unsigned char*_TB;unsigned*_TC;struct _fat_ptr _TD;unsigned char*_TE;unsigned*_TF;struct _fat_ptr _T10;unsigned char*_T11;unsigned*_T12;unsigned _T13;struct _fat_ptr*_T14;struct _fat_ptr _T15;int _T16;unsigned _T17;unsigned _T18;int _T19;
# 103
register int rowsize;
register unsigned mask;
struct _fat_ptr rp;
struct _fat_ptr relend;
# 108
Cyc_TC(R,n);_T0=n + 32;_T1=_T0 - 1;_T2=_T1 / 32;_T3=(unsigned)_T2;_T4=_T3 * sizeof(unsigned);
# 110
rowsize=(int)_T4;_T5=R;_T6=n * rowsize;_T7=(unsigned)_T6;_T8=_T7 / sizeof(unsigned);_T9=(int)_T8;
# 114
relend=_fat_ptr_plus(_T5,sizeof(unsigned),_T9);
# 116
mask=1U;
rp=R;
_TLD: _TA=rp;_TB=_TA.curr;_TC=(unsigned*)_TB;_TD=relend;_TE=_TD.curr;_TF=(unsigned*)_TE;if(_TC < _TF)goto _TLE;else{goto _TLF;}
# 120
_TLE: _T10=rp;_T11=_check_fat_subscript(_T10,sizeof(unsigned),0U);_T12=(unsigned*)_T11;_T13=mask;*_T12=*_T12 | _T13;
# 122
mask=mask << 1U;
if(mask!=0U)goto _TL10;
# 125
mask=1U;_T14=& rp;
_fat_ptr_inplace_plus(_T14,sizeof(unsigned),1);goto _TL11;_TL10: _TL11: _T15=rp;_T16=rowsize;_T17=(unsigned)_T16;_T18=_T17 / sizeof(unsigned);_T19=(int)_T18;
# 131
rp=_fat_ptr_plus(_T15,sizeof(unsigned),_T19);goto _TLD;_TLF:;}
