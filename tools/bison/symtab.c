#include <cyc_include.h>

# 49 "../../library/stdlib/string.h"
 extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
# 105 "../../library/stdlib/string.h"
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);struct Cyc_bucket{struct Cyc_bucket*link;struct Cyc_bucket*next;struct _fat_ptr tag;struct _fat_ptr type_name;short value;short prec;short assoc;short user_token_number;struct Cyc_bucket*_alias;char class;};
# 54 "symtab.h"
extern struct _fat_ptr Cyc_symtab;
extern struct Cyc_bucket*Cyc_firstsymbol;
# 78 "gram.h"
extern int Cyc_nsyms;
# 28 "symtab.cyc"
struct _fat_ptr Cyc_symtab;
struct Cyc_bucket*Cyc_firstsymbol;
struct Cyc_bucket*Cyc_lastsymbol;
# 34
int Cyc_hash(struct _fat_ptr key){struct _fat_ptr _T0;unsigned char*_T1;const char*_T2;char _T3;int _T4;int _T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;unsigned char*_T8;const char*_T9;char _TA;int _TB;int _TC;int _TD;
# 36
struct _fat_ptr cp;
register int k;
# 39
cp=key;
k=0;
_TL0: _T0=cp;_T1=_check_fat_subscript(_T0,sizeof(char),0U);_T2=(const char*)_T1;_T3=*_T2;_T4=(int)_T3;if(_T4)goto _TL1;else{goto _TL2;}
_TL1: _T5=k << 1;_T6=& cp;_T7=_fat_ptr_inplace_plus_post(_T6,sizeof(char),1);_T8=_T7.curr;_T9=(const char*)_T8;_TA=*_T9;_TB=(int)_TA;_TC=_T5 ^ _TB;k=_TC & 16383;goto _TL0;_TL2: _TD=k % 1009;
# 44
return _TD;}
# 49
struct _fat_ptr Cyc_copys(struct _fat_ptr s){struct _fat_ptr _T0;
# 64 "symtab.cyc"
struct _fat_ptr result=Cyc_strdup(s);_T0=result;
return _T0;}
# 69
void Cyc_tabinit (void){struct Cyc_bucket**_T0;struct Cyc_bucket**_T1;unsigned _T2;unsigned _T3;{unsigned _T4=1009U;_T2=_check_times(_T4,sizeof(struct Cyc_bucket*));{struct Cyc_bucket**_T5=_cycalloc(_T2);{unsigned _T6=_T4;unsigned _new2p_cyclone;_new2p_cyclone=0;_TL6: if(_new2p_cyclone < _T6)goto _TL4;else{goto _TL5;}_TL4: _T3=_new2p_cyclone;
# 73
_T5[_T3]=0;_new2p_cyclone=_new2p_cyclone + 1;goto _TL6;_TL5:;}_T1=(struct Cyc_bucket**)_T5;}_T0=_T1;}Cyc_symtab=_tag_fat(_T0,sizeof(struct Cyc_bucket*),1009U);
# 75
Cyc_firstsymbol=0;
Cyc_lastsymbol=0;}
# 80
struct Cyc_bucket*Cyc_getsym(struct _fat_ptr key){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct Cyc_bucket**_T3;struct _fat_ptr _T4;struct Cyc_bucket*_T5;struct _fat_ptr _T6;int _T7;struct Cyc_bucket*_T8;void*_T9;struct Cyc_bucket*_TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;struct Cyc_bucket**_TE;struct Cyc_bucket*_TF;struct Cyc_bucket*_T10;struct Cyc_bucket*_T11;struct Cyc_bucket*_T12;struct Cyc_bucket*_T13;struct Cyc_bucket*_T14;struct Cyc_bucket*_T15;struct Cyc_bucket*_T16;struct Cyc_bucket*_T17;struct Cyc_bucket*_T18;struct _fat_ptr _T19;int _T1A;unsigned char*_T1B;struct Cyc_bucket**_T1C;struct Cyc_bucket*_T1D;
# 82
register int hashval;
struct Cyc_bucket*bp;
register int found;
# 86
hashval=Cyc_hash(key);_T0=Cyc_symtab;_T1=hashval;_T2=_check_fat_subscript(_T0,sizeof(struct Cyc_bucket*),_T1);_T3=(struct Cyc_bucket**)_T2;
bp=*_T3;
# 89
found=0;
_TL7: if(bp!=0)goto _TLA;else{goto _TL9;}_TLA: if(found==0)goto _TL8;else{goto _TL9;}
# 92
_TL8: _T4=key;_T5=bp;_T6=_T5->tag;_T7=Cyc_strcmp(_T4,_T6);if(_T7!=0)goto _TLB;
found=1;goto _TLC;
# 95
_TLB: _T8=bp;bp=_T8->link;_TLC: goto _TL7;_TL9:
# 98
 if(found!=0)goto _TLD;
# 100
Cyc_nsyms=Cyc_nsyms + 1;_T9=_cycalloc(sizeof(struct Cyc_bucket));
# 102
bp=(struct Cyc_bucket*)_T9;_TA=bp;_TB=Cyc_symtab;_TC=hashval;_TD=_check_fat_subscript(_TB,sizeof(struct Cyc_bucket*),_TC);_TE=(struct Cyc_bucket**)_TD;
_TA->link=*_TE;_TF=bp;
_TF->next=0;_T10=bp;
_T10->tag=Cyc_copys(key);_T11=bp;
_T11->class='\000';_T12=bp;
_T12->value=0;_T13=bp;
_T13->type_name=_tag_fat(0,0,0);_T14=bp;
_T14->prec=0;_T15=bp;
_T15->assoc=0;_T16=bp;
_T16->user_token_number=0;_T17=bp;
_T17->_alias=0;
# 115
if(Cyc_firstsymbol!=0)goto _TLF;
# 117
Cyc_firstsymbol=bp;
Cyc_lastsymbol=bp;goto _TL10;
# 122
_TLF: _T18=_check_null(Cyc_lastsymbol);_T18->next=bp;
Cyc_lastsymbol=bp;_TL10: _T19=Cyc_symtab;_T1A=hashval;_T1B=_check_fat_subscript(_T19,sizeof(struct Cyc_bucket*),_T1A);_T1C=(struct Cyc_bucket**)_T1B;
# 126
*_T1C=bp;goto _TLE;_TLD: _TLE: _T1D=bp;
# 128
return _T1D;}
# 133
void Cyc_free_symtab (void){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct Cyc_bucket**_T3;struct Cyc_bucket*_T4;unsigned _T5;struct Cyc_bucket*_T6;struct _fat_ptr _T7;int _T8;unsigned char*_T9;struct Cyc_bucket**_TA;
# 137
register int i;
register struct Cyc_bucket*bp;register struct Cyc_bucket*bptmp;
# 140
i=0;_TL14: if(i < 1009)goto _TL12;else{goto _TL13;}
# 142
_TL12: _T0=Cyc_symtab;_T1=i;_T2=_check_fat_subscript(_T0,sizeof(struct Cyc_bucket*),_T1);_T3=(struct Cyc_bucket**)_T2;bp=*_T3;
_TL15: _T4=bp;_T5=(unsigned)_T4;if(_T5)goto _TL16;else{goto _TL17;}
# 145
_TL16: _T6=bp;bptmp=_T6->link;
# 152
bp=0;
bp=bptmp;goto _TL15;_TL17: _T7=Cyc_symtab;_T8=i;_T9=_check_fat_subscript(_T7,sizeof(struct Cyc_bucket*),_T8);_TA=(struct Cyc_bucket**)_T9;
# 155
*_TA=0;
# 140
i=i + 1;goto _TL14;_TL13:
# 157
 Cyc_symtab=_tag_fat(0,0,0);}
