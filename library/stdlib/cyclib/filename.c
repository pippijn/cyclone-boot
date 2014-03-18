#include <cyc_setjmp.h>
#include <cyc_include.h>

# 95 "../../../include/core.h"
 struct _fat_ptr Cyc_Core_new_string(unsigned);extern char Cyc_Core_Invalid_argument[17U];struct Cyc_Core_Invalid_argument_exn_struct{char*tag;struct _fat_ptr f1;};
# 62 "../../../include/string.h"
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
# 110 "../../../include/string.h"
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
# 35 "filename.cyc"
struct _fat_ptr Cyc_Filename_concat(struct _fat_ptr s1,struct _fat_ptr s2){struct _fat_ptr _T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;_T0=s1;_T1=
_tag_fat("/",sizeof(char),2U);_T2=s2;_T3=Cyc_strconcat(_T1,_T2);_T4=Cyc_strconcat(_T0,_T3);return _T4;}
# 39
struct _fat_ptr Cyc_Filename_chop_extension(struct _fat_ptr filename){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;const char*_T6;char _T7;int _T8;struct Cyc_Core_Invalid_argument_exn_struct*_T9;void*_TA;struct _fat_ptr _TB;int _TC;unsigned long _TD;struct _fat_ptr _TE;_T0=filename;_T1=
_get_fat_size(_T0,sizeof(char));_T2=_T1 - 1U;{int i=(int)_T2;
_TL0: if(i >= 0)goto _TL3;else{goto _TL2;}_TL3: _T3=filename;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(char),_T4);_T6=(const char*)_T5;_T7=*_T6;_T8=(int)_T7;if(_T8!=46)goto _TL1;else{goto _TL2;}
_TL1: i=i + -1;goto _TL0;_TL2:
 if(i >= 0)goto _TL4;{struct Cyc_Core_Invalid_argument_exn_struct*_TF=_cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));_TF->tag=Cyc_Core_Invalid_argument;
_TF->f1=_tag_fat("chop_extension",sizeof(char),15U);_T9=(struct Cyc_Core_Invalid_argument_exn_struct*)_TF;}_TA=(void*)_T9;_throw(_TA);goto _TL5;_TL4: _TL5: _TB=filename;_TC=i;_TD=(unsigned long)_TC;_TE=
Cyc_substring(_TB,0,_TD);return _TE;}}
# 50
struct _fat_ptr Cyc_Filename_dirname(struct _fat_ptr filename){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;const char*_T6;char _T7;int _T8;struct _fat_ptr _T9;struct _fat_ptr _TA;int _TB;unsigned long _TC;struct _fat_ptr _TD;_T0=filename;_T1=
_get_fat_size(_T0,sizeof(char));_T2=_T1 - 1U;{int i=(int)_T2;
_TL6: if(i >= 0)goto _TL9;else{goto _TL8;}_TL9: _T3=filename;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(char),_T4);_T6=(const char*)_T5;_T7=*_T6;_T8=(int)_T7;if(_T8!=47)goto _TL7;else{goto _TL8;}
_TL7: i=i + -1;goto _TL6;_TL8:
 if(i >= 0)goto _TLA;_T9=Cyc_Core_new_string(0U);return _T9;_TLA: _TA=filename;_TB=i;_TC=(unsigned long)_TB;_TD=
Cyc_substring(_TA,0,_TC);return _TD;}}
# 59
struct _fat_ptr Cyc_Filename_basename(struct _fat_ptr filename){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;const char*_T6;char _T7;int _T8;struct _fat_ptr _T9;int _TA;struct _fat_ptr _TB;unsigned _TC;int _TD;unsigned _TE;unsigned _TF;struct _fat_ptr _T10;_T0=filename;_T1=
_get_fat_size(_T0,sizeof(char));_T2=_T1 - 1U;{int i=(int)_T2;
_TLC: if(i >= 0)goto _TLF;else{goto _TLE;}_TLF: _T3=filename;_T4=i;_T5=_check_fat_subscript(_T3,sizeof(char),_T4);_T6=(const char*)_T5;_T7=*_T6;_T8=(int)_T7;if(_T8!=47)goto _TLD;else{goto _TLE;}
_TLD: i=i + -1;goto _TLC;_TLE: _T9=filename;_TA=i + 1;_TB=filename;_TC=
_get_fat_size(_TB,sizeof(char));_TD=i + 1;_TE=(unsigned)_TD;_TF=_TC - _TE;_T10=Cyc_substring(_T9,_TA,_TF);return _T10;}}
# 66
int Cyc_Filename_check_suffix(struct _fat_ptr filename,struct _fat_ptr suffix){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;struct _fat_ptr _T3;unsigned _T4;unsigned _T5;struct _fat_ptr _T6;int _T7;int _T8;unsigned char*_T9;const char*_TA;char _TB;int _TC;struct _fat_ptr _TD;int _TE;int _TF;unsigned char*_T10;const char*_T11;char _T12;int _T13;_T0=filename;_T1=
_get_fat_size(_T0,sizeof(char));_T2=_T1 - 1U;{int i=(int)_T2;_T3=suffix;_T4=
_get_fat_size(_T3,sizeof(char));_T5=_T4 - 1U;{int j=(int)_T5;
_TL10: if(i >= 0)goto _TL13;else{goto _TL12;}_TL13: if(j >= 0)goto _TL11;else{goto _TL12;}
_TL11: _T6=filename;_T7=i;i=_T7 + -1;_T8=_T7;_T9=_check_fat_subscript(_T6,sizeof(char),_T8);_TA=(const char*)_T9;_TB=*_TA;_TC=(int)_TB;_TD=suffix;_TE=j;j=_TE + -1;_TF=_TE;_T10=_check_fat_subscript(_TD,sizeof(char),_TF);_T11=(const char*)_T10;_T12=*_T11;_T13=(int)_T12;if(_TC==_T13)goto _TL14;return 0;_TL14: goto _TL10;_TL12:
 if(j < 0)goto _TL16;return 0;_TL16:
 return 1;}}}
# 75
struct _fat_ptr Cyc_Filename_gnuify(struct _fat_ptr filename){int _T0;struct _fat_ptr _T1;unsigned _T2;struct _fat_ptr _T3;unsigned char*_T4;const char*_T5;const char*_T6;char _T7;int _T8;int _T9;struct _fat_ptr _TA;unsigned _TB;unsigned _TC;struct _fat_ptr _TD;int _TE;unsigned _TF;char*_T10;unsigned _T11;unsigned _T12;struct _fat_ptr _T13;unsigned char*_T14;char*_T15;char _T16;struct _fat_ptr _T17;unsigned char*_T18;char*_T19;unsigned _T1A;unsigned char*_T1B;char*_T1C;unsigned _T1D;unsigned char*_T1E;char*_T1F;struct _fat_ptr _T20;unsigned char*_T21;char*_T22;struct _fat_ptr _T23;unsigned char*_T24;const char*_T25;const char*_T26;unsigned _T27;unsigned char*_T28;char*_T29;struct _fat_ptr _T2A;unsigned _T2B;struct _fat_ptr _T2C;int _T2D;unsigned _T2E;char*_T2F;unsigned _T30;unsigned _T31;struct _fat_ptr _T32;int _T33;int _T34;unsigned char*_T35;const char*_T36;struct _fat_ptr _T37;int _T38;int _T39;unsigned char*_T3A;char*_T3B;char _T3C;char _T3D;int _T3E;unsigned _T3F;unsigned char*_T40;char*_T41;struct _fat_ptr _T42;_T1=filename;_T2=
_get_fat_size(_T1,sizeof(char));if(_T2 <= 1U)goto _TL18;_T3=filename;_T4=_T3.curr;_T5=(const char*)_T4;_T6=_check_null(_T5);_T7=_T6[1];_T8=(int)_T7;_T0=_T8==58;goto _TL19;_TL18: _T0=0;_TL19: {int has_drive_name=_T0;
int i;int j;
struct _fat_ptr ans;
int ans_sz;_T9=has_drive_name;
if(!_T9)goto _TL1A;_TA=filename;_TB=
_get_fat_size(_TA,sizeof(char));_TC=_TB + 1U;ans_sz=(int)_TC;_TE=ans_sz;_TF=(unsigned)_TE;{unsigned _T43=_TF + 1U;_T11=_check_times(_T43,sizeof(char));{char*_T44=_cycalloc_atomic(_T11);{unsigned _T45=_T43;unsigned k;k=0;_TL1F: if(k < _T45)goto _TL1D;else{goto _TL1E;}_TL1D: _T12=k;
_T44[_T12]='\000';k=k + 1;goto _TL1F;_TL1E: _T44[_T45]=0;}_T10=(char*)_T44;}_TD=_tag_fat(_T10,sizeof(char),_T43);}ans=_TD;_T13=ans;{struct _fat_ptr _T43=_fat_ptr_plus(_T13,sizeof(char),0);_T14=_T43.curr;_T15=(char*)_T14;{char _T44=*_T15;_T17=ans;{struct _fat_ptr _T45=_fat_ptr_plus(_T17,sizeof(char),1);_T18=_check_fat_subscript(_T45,sizeof(char),0U);_T19=(char*)_T18;{char _T46=*_T19;char _T47='/';_T1A=_get_fat_size(_T45,sizeof(char));if(_T1A!=1U)goto _TL20;if(_T46!=0)goto _TL20;if(_T47==0)goto _TL20;_throw_arraybounds();goto _TL21;_TL20: _TL21: _T1B=_T45.curr;_T1C=(char*)_T1B;*_T1C=_T47;_T16=*_T1C;}}{char _T45=_T16;_T1D=_get_fat_size(_T43,sizeof(char));if(_T1D!=1U)goto _TL22;if(_T44!=0)goto _TL22;if(_T45==0)goto _TL22;_throw_arraybounds();goto _TL23;_TL22: _TL23: _T1E=_T43.curr;_T1F=(char*)_T1E;*_T1F=_T45;}}}_T20=ans;{struct _fat_ptr _T43=_fat_ptr_plus(_T20,sizeof(char),2);_T21=_check_fat_subscript(_T43,sizeof(char),0U);_T22=(char*)_T21;{char _T44=*_T22;_T23=filename;_T24=_T23.curr;_T25=(const char*)_T24;_T26=
# 84
_check_null(_T25);{char _T45=_T26[0];_T27=_get_fat_size(_T43,sizeof(char));if(_T27!=1U)goto _TL24;if(_T44!=0)goto _TL24;if(_T45==0)goto _TL24;_throw_arraybounds();goto _TL25;_TL24: _TL25: _T28=_T43.curr;_T29=(char*)_T28;*_T29=_T45;}}}
i=3;
j=2;goto _TL1B;
# 88
_TL1A: _T2A=filename;_T2B=_get_fat_size(_T2A,sizeof(char));ans_sz=(int)_T2B;_T2D=ans_sz;_T2E=(unsigned)_T2D;{unsigned _T43=_T2E + 1U;_T30=_check_times(_T43,sizeof(char));{char*_T44=_cycalloc_atomic(_T30);{unsigned _T45=_T43;unsigned k;k=0;_TL29: if(k < _T45)goto _TL27;else{goto _TL28;}_TL27: _T31=k;
_T44[_T31]='\000';k=k + 1;goto _TL29;_TL28: _T44[_T45]=0;}_T2F=(char*)_T44;}_T2C=_tag_fat(_T2F,sizeof(char),_T43);}ans=_T2C;
i=0;
j=0;_TL1B:
# 93
 _TL2A: if(i < ans_sz)goto _TL2B;else{goto _TL2C;}
_TL2B: _T32=filename;_T33=j;j=_T33 + 1;_T34=_T33;_T35=_check_fat_subscript(_T32,sizeof(char),_T34);_T36=(const char*)_T35;{char c=*_T36;_T37=ans;_T38=i;
i=_T38 + 1;_T39=_T38;{struct _fat_ptr _T43=_fat_ptr_plus(_T37,sizeof(char),_T39);_T3A=_check_fat_subscript(_T43,sizeof(char),0U);_T3B=(char*)_T3A;{char _T44=*_T3B;_T3D=c;_T3E=(int)_T3D;if(_T3E!=92)goto _TL2D;_T3C='/';goto _TL2E;_TL2D: _T3C=c;_TL2E: {char _T45=_T3C;_T3F=_get_fat_size(_T43,sizeof(char));if(_T3F!=1U)goto _TL2F;if(_T44!=0)goto _TL2F;if(_T45==0)goto _TL2F;_throw_arraybounds();goto _TL30;_TL2F: _TL30: _T40=_T43.curr;_T41=(char*)_T40;*_T41=_T45;}}}}goto _TL2A;_TL2C: _T42=ans;
# 97
return _T42;}}
