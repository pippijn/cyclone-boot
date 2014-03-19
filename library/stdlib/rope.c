#include <cyc_include.h>

# 95 "../../include/core.h"
 struct _fat_ptr Cyc_Core_new_string(unsigned);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 61 "../../include/list.h"
extern int Cyc_List_length(struct Cyc_List_List*);struct Cyc_Rope_Rope_node;
# 38 "../../include/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 49 "../../include/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
# 72
extern struct _fat_ptr Cyc_strncpy(struct _fat_ptr,struct _fat_ptr,unsigned long);struct Cyc_Rope_String_rope_Rope_R_struct{int tag;struct _fat_ptr f1;};struct Cyc_Rope_Array_rope_Rope_R_struct{int tag;struct _fat_ptr f1;};struct Cyc_Rope_Rope_node{void*v;};
# 33 "rope.cyc"
struct Cyc_Rope_Rope_node*Cyc_Rope_from_string(struct _fat_ptr s){struct Cyc_Rope_Rope_node*_T0;struct Cyc_Rope_String_rope_Rope_R_struct*_T1;{struct Cyc_Rope_Rope_node*_T2=_cycalloc(sizeof(struct Cyc_Rope_Rope_node));{struct Cyc_Rope_String_rope_Rope_R_struct*_T3=_cycalloc(sizeof(struct Cyc_Rope_String_rope_Rope_R_struct));_T3->tag=0;
_T3->f1=s;_T1=(struct Cyc_Rope_String_rope_Rope_R_struct*)_T3;}_T2->v=(void*)_T1;_T0=(struct Cyc_Rope_Rope_node*)_T2;}return _T0;}
# 36
struct Cyc_Rope_Rope_node*Cyc_Rope_concat(struct Cyc_Rope_Rope_node*r1,struct Cyc_Rope_Rope_node*r2){struct Cyc_Rope_Rope_node*_T0;struct Cyc_Rope_Array_rope_Rope_R_struct*_T1;struct Cyc_Rope_Rope_node**_T2;struct Cyc_Rope_Rope_node**_T3;unsigned _T4;{struct Cyc_Rope_Rope_node*_T5=_cycalloc(sizeof(struct Cyc_Rope_Rope_node));{struct Cyc_Rope_Array_rope_Rope_R_struct*_T6=_cycalloc(sizeof(struct Cyc_Rope_Array_rope_Rope_R_struct));_T6->tag=1;{unsigned _T7=2;_T4=_check_times(_T7,sizeof(struct Cyc_Rope_Rope_node*));{struct Cyc_Rope_Rope_node**_T8=_cycalloc(_T4);
_T8[0]=r1;_T8[1]=r2;_T3=(struct Cyc_Rope_Rope_node**)_T8;}_T2=_T3;}_T6->f1=_tag_fat(_T2,sizeof(struct Cyc_Rope_Rope_node*),2U);_T1=(struct Cyc_Rope_Array_rope_Rope_R_struct*)_T6;}_T5->v=(void*)_T1;_T0=(struct Cyc_Rope_Rope_node*)_T5;}return _T0;}
# 39
struct Cyc_Rope_Rope_node*Cyc_Rope_concata(struct _fat_ptr rs){struct Cyc_Rope_Rope_node*_T0;struct Cyc_Rope_Array_rope_Rope_R_struct*_T1;{struct Cyc_Rope_Rope_node*_T2=_cycalloc(sizeof(struct Cyc_Rope_Rope_node));{struct Cyc_Rope_Array_rope_Rope_R_struct*_T3=_cycalloc(sizeof(struct Cyc_Rope_Array_rope_Rope_R_struct));_T3->tag=1;
_T3->f1=rs;_T1=(struct Cyc_Rope_Array_rope_Rope_R_struct*)_T3;}_T2->v=(void*)_T1;_T0=(struct Cyc_Rope_Rope_node*)_T2;}return _T0;}
# 42
struct Cyc_Rope_Rope_node*Cyc_Rope_concatl(struct Cyc_List_List*l){struct Cyc_Rope_Rope_node*_T0;struct Cyc_Rope_Array_rope_Rope_R_struct*_T1;struct _fat_ptr _T2;int _T3;struct Cyc_Rope_Rope_node**_T4;unsigned _T5;unsigned _T6;struct Cyc_Rope_Rope_node*_T7;struct Cyc_List_List*_T8;void*_T9;struct Cyc_List_List*_TA;{struct Cyc_Rope_Rope_node*_TB=_cycalloc(sizeof(struct Cyc_Rope_Rope_node));{struct Cyc_Rope_Array_rope_Rope_R_struct*_TC=_cycalloc(sizeof(struct Cyc_Rope_Array_rope_Rope_R_struct));_TC->tag=1;_T3=
Cyc_List_length(l);{unsigned _TD=(unsigned)_T3;_T5=_check_times(_TD,sizeof(struct Cyc_Rope_Rope_node*));{struct Cyc_Rope_Rope_node**_TE=_cycalloc(_T5);{unsigned _TF=_TD;unsigned i;i=0;_TL3: if(i < _TF)goto _TL1;else{goto _TL2;}_TL1: _T6=i;_T8=
_check_null(l);_T9=_T8->hd;{struct Cyc_Rope_Rope_node*r=(struct Cyc_Rope_Rope_node*)_T9;_TA=l;l=_TA->tl;_T7=r;}_TE[_T6]=_T7;i=i + 1;goto _TL3;_TL2:;}_T4=(struct Cyc_Rope_Rope_node**)_TE;}_T2=
# 43
_tag_fat(_T4,sizeof(struct Cyc_Rope_Rope_node*),_TD);}_TC->f1=_T2;_T1=(struct Cyc_Rope_Array_rope_Rope_R_struct*)_TC;}_TB->v=(void*)_T1;_T0=(struct Cyc_Rope_Rope_node*)_TB;}return _T0;}
# 47
unsigned Cyc_Rope_length(struct Cyc_Rope_Rope_node*r){struct Cyc_Rope_Rope_node*_T0;int*_T1;int _T2;unsigned long _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;unsigned char*_T6;struct Cyc_Rope_Rope_node**_T7;struct Cyc_Rope_Rope_node**_T8;unsigned _T9;int _TA;struct Cyc_Rope_Rope_node*_TB;unsigned _TC;unsigned _TD;_T0=r;{
void*_TE=_T0->v;struct _fat_ptr _TF;_T1=(int*)_TE;_T2=*_T1;if(_T2!=0)goto _TL4;{struct Cyc_Rope_String_rope_Rope_R_struct*_T10=(struct Cyc_Rope_String_rope_Rope_R_struct*)_TE;_TF=_T10->f1;}{struct _fat_ptr ss=_TF;_T3=
Cyc_strlen(ss);return _T3;}_TL4:{struct Cyc_Rope_Array_rope_Rope_R_struct*_T10=(struct Cyc_Rope_Array_rope_Rope_R_struct*)_TE;_TF=_T10->f1;}{struct _fat_ptr rs=_TF;
# 51
unsigned total=0U;_T4=rs;{unsigned sz=_get_fat_size(_T4,sizeof(struct Cyc_Rope_Rope_node*));{
unsigned i=0U;_TL9: if(i < sz)goto _TL7;else{goto _TL8;}
_TL7: _T5=rs;_T6=_T5.curr;_T7=(struct Cyc_Rope_Rope_node**)_T6;_T8=_check_null(_T7);_T9=i;_TA=(int)_T9;_TB=_T8[_TA];_TC=Cyc_Rope_length(_TB);total=total + _TC;
# 52
i=i + 1;goto _TL9;_TL8:;}_TD=total;
# 54
return _TD;}};}}
# 58
static unsigned Cyc_Rope_flatten_it(struct _fat_ptr s,unsigned i,struct Cyc_Rope_Rope_node*r){struct Cyc_Rope_Rope_node*_T0;int*_T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;unsigned _T5;int _T6;struct _fat_ptr _T7;struct _fat_ptr _T8;unsigned long _T9;unsigned long _TA;struct _fat_ptr _TB;int _TC;unsigned _TD;unsigned _TE;struct _fat_ptr _TF;unsigned _T10;struct _fat_ptr _T11;unsigned char*_T12;struct Cyc_Rope_Rope_node**_T13;struct Cyc_Rope_Rope_node**_T14;int _T15;struct Cyc_Rope_Rope_node*_T16;unsigned _T17;_T0=r;{
void*_T18=_T0->v;struct _fat_ptr _T19;_T1=(int*)_T18;_T2=*_T1;if(_T2!=0)goto _TLA;{struct Cyc_Rope_String_rope_Rope_R_struct*_T1A=(struct Cyc_Rope_String_rope_Rope_R_struct*)_T18;_T19=_T1A->f1;}{struct _fat_ptr ss=_T19;
# 61
unsigned long len=Cyc_strlen(ss);_T3=s;_T4=
_fat_ptr_decrease_size(_T3,sizeof(char),1U);_T5=i;_T6=(int)_T5;_T7=_fat_ptr_plus(_T4,sizeof(char),_T6);_T8=ss;_T9=len;Cyc_strncpy(_T7,_T8,_T9);_TA=i + len;
return _TA;}_TLA:{struct Cyc_Rope_Array_rope_Rope_R_struct*_T1A=(struct Cyc_Rope_Array_rope_Rope_R_struct*)_T18;_T19=_T1A->f1;}{struct _fat_ptr rs=_T19;_TB=rs;{
# 65
unsigned len=_get_fat_size(_TB,sizeof(struct Cyc_Rope_Rope_node*));{
int j=0;_TLF: _TC=j;_TD=(unsigned)_TC;_TE=len;if(_TD < _TE)goto _TLD;else{goto _TLE;}
_TLD: _TF=s;_T10=i;_T11=rs;_T12=_T11.curr;_T13=(struct Cyc_Rope_Rope_node**)_T12;_T14=_check_null(_T13);_T15=j;_T16=_T14[_T15];i=Cyc_Rope_flatten_it(_TF,_T10,_T16);
# 66
j=j + 1;goto _TLF;_TLE:;}_T17=i;
# 68
return _T17;}};}}
# 72
struct _fat_ptr Cyc_Rope_to_string(struct Cyc_Rope_Rope_node*r){unsigned _T0;unsigned _T1;struct Cyc_Rope_Rope_node*_T2;struct Cyc_Rope_String_rope_Rope_R_struct*_T3;struct _fat_ptr _T4;_T0=
Cyc_Rope_length(r);_T1=_T0 + 1U;{struct _fat_ptr s=Cyc_Core_new_string(_T1);
Cyc_Rope_flatten_it(s,0U,r);_T2=r;{struct Cyc_Rope_String_rope_Rope_R_struct*_T5=_cycalloc(sizeof(struct Cyc_Rope_String_rope_Rope_R_struct));_T5->tag=0;
# 76
_T5->f1=s;_T3=(struct Cyc_Rope_String_rope_Rope_R_struct*)_T5;}_T2->v=(void*)_T3;_T4=s;
return _T4;}}
# 80
int Cyc_Rope_cmp(struct Cyc_Rope_Rope_node*r1,struct Cyc_Rope_Rope_node*r2){struct _fat_ptr _T0;struct _fat_ptr _T1;int _T2;_T0=
Cyc_Rope_to_string(r1);_T1=Cyc_Rope_to_string(r2);_T2=Cyc_strcmp(_T0,_T1);return _T2;}
