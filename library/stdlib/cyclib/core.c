#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};
# 132 "../../../include/core.h"
struct _RegionHandle*Cyc_Core_current_handle (void);extern char Cyc_Core_Not_found[10U];struct Cyc_Core_Not_found_exn_struct{char*tag;};
# 180
extern unsigned Cyc_Core_unique_qual;
# 220 "../../../include/core.h"
struct _fat_ptr Cyc_Core_autorelease_handle(struct _RegionHandle*,struct _fat_ptr);struct Cyc_Core_ThinRes{void*arr;unsigned nelts;};char Cyc_Core_Invalid_argument[17U]="Invalid_argument";char Cyc_Core_SysError[9U]="SysError";char Cyc_Core_Failure[8U]="Failure";char Cyc_Core_Impossible[11U]="Impossible";char Cyc_Core_Not_found[10U]="Not_found";
# 31 "core.cyc"
struct Cyc_Core_Not_found_exn_struct Cyc_Core_Not_found_val={Cyc_Core_Not_found};char Cyc_Core_Unreachable[12U]="Unreachable";
# 34
struct Cyc_Core_Opt*Cyc_Core_opt_map(void*(*f)(void*),struct Cyc_Core_Opt*o){struct Cyc_Core_Opt*_T0;struct Cyc_Core_Opt*_T1;unsigned _T2;struct Cyc_Core_Opt*_T3;void*_T4;
if(o!=0)goto _TL0;_T0=0;goto _TL1;_TL0: _T2=Cyc_Core_unique_qual;{struct Cyc_Core_Opt*_T5=_aqual_malloc(_T2,sizeof(struct Cyc_Core_Opt));_T3=o;_T4=_T3->v;_T5->v=f(_T4);_T1=(struct Cyc_Core_Opt*)_T5;}_T0=_T1;_TL1: return _T0;}
# 38
struct _fat_ptr Cyc_Core_new_string(unsigned i){struct _fat_ptr _T0;void*_T1;{unsigned _T2=i;_T1=_cyccalloc_atomic(sizeof(char),_T2);_T0=_tag_fat(_T1,sizeof(char),_T2);}
return _T0;}
# 42
struct _fat_ptr Cyc_Core_rnew_string(struct _RegionHandle*r,unsigned i){struct _fat_ptr _T0;struct _RegionHandle*_T1;void*_T2;{unsigned _T3=i;_T1=r;_T2=_region_calloc(_T1,0U,sizeof(char),_T3);_T0=_tag_fat(_T2,sizeof(char),_T3);}
return _T0;}
# 45
struct _fat_ptr Cyc_Core_rqnew_string(struct _RegionHandle*r,unsigned q,unsigned i){struct _fat_ptr _T0;struct _RegionHandle*_T1;unsigned _T2;void*_T3;{unsigned _T4=i;_T1=r;_T2=q;_T3=_region_calloc(_T1,_T2,sizeof(char),_T4);_T0=_tag_fat(_T3,sizeof(char),_T4);}
return _T0;}
# 49
int Cyc_Core_true_f(void*x){return 1;}
int Cyc_Core_false_f(void*x){return 0;}
# 52
int Cyc_Core_intcmp(int a,int b){int _T0;_T0=a - b;return _T0;}
int Cyc_Core_charcmp(char a,char b){char _T0;int _T1;char _T2;int _T3;int _T4;_T0=a;_T1=(int)_T0;_T2=b;_T3=(int)_T2;_T4=_T1 - _T3;return _T4;}
int Cyc_Core_nptrcmp(void*a,void*b){int _T0;
if(a!=b)goto _TL2;return 0;_TL2:
 if(a <= b)goto _TL4;return 1;_TL4: _T0=- 1;
return _T0;}
# 59
int Cyc_Core_ptrcmp(void*a,void*b){int _T0;_T0=
Cyc_Core_nptrcmp(a,b);return _T0;}struct _tuple0{void*f0;void*f1;};
# 63
void*Cyc_Core_fst(struct _tuple0*pair){struct _tuple0*_T0;struct _tuple0 _T1;void*_T2;_T0=pair;_T1=*_T0;_T2=_T1.f0;return _T2;}
void*Cyc_Core_snd(struct _tuple0*pair){struct _tuple0*_T0;struct _tuple0 _T1;void*_T2;_T0=pair;_T1=*_T0;_T2=_T1.f1;return _T2;}struct _tuple1{void*f0;void*f1;void*f2;};
void*Cyc_Core_third(struct _tuple1*triple){struct _tuple1*_T0;struct _tuple1 _T1;void*_T2;_T0=triple;_T1=*_T0;_T2=_T1.f2;return _T2;}
# 67
void*Cyc_Core_identity(void*x){void*_T0;_T0=x;return _T0;}
# 69
struct _fat_ptr Cyc_Core_autorelease(struct _fat_ptr ptr){struct _RegionHandle*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;_T0=
Cyc_Core_current_handle();_T1=ptr;_T2=Cyc_Core_autorelease_handle(_T0,_T1);return _T2;}
# 76
struct _fat_ptr Cyc_Core_mkfat(void*arr,unsigned s,unsigned n){
# 78
struct _fat_ptr res;
res.curr=arr;
res.base=arr;
res.last_plus_one=arr + s * n;
return res;}
# 84
void*Cyc_Core_arrcast(struct _fat_ptr dyn,unsigned bd,unsigned sz){
# 89
if(bd >> 20 || sz >> 12)
return 0;{
unsigned char*ptrbd=dyn.curr + bd * sz;
if(((ptrbd < dyn.curr || dyn.curr==0)|| dyn.curr < dyn.base)|| ptrbd > dyn.last_plus_one)
# 96
return 0;
return dyn.curr;}}
# 99
struct Cyc_Core_ThinRes Cyc_Core_mkthin(struct _fat_ptr dyn,unsigned sz){
struct Cyc_Core_ThinRes res;
res.arr=dyn.curr;
res.nelts=_get_fat_size(dyn,sz);
return res;}
# 108
unsigned Cyc_Core_arr_prevsize(struct _fat_ptr arr,unsigned elt_sz){
unsigned char*_get_arr_size_curr=arr.curr;
unsigned char*_get_arr_size_base=arr.base;
if(
_get_arr_size_curr < _get_arr_size_base || _get_arr_size_curr >= arr.last_plus_one)return 0;else{return(_get_arr_size_curr - _get_arr_size_base)/ elt_sz;}}
