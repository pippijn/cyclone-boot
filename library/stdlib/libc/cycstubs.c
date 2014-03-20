#include <cyc_include.h>
 extern char Cyc_Core_Failure[8U];struct Cyc_Core_Failure_exn_struct{char*tag;struct _fat_ptr f1;};
# 355 "../core.h"
struct _fat_ptr Cyc_Core_mkfat(void*,unsigned,unsigned);struct Cyc_in_addr{unsigned s_addr;};
# 8 "cycstubs.cyc"
extern unsigned __stub_htonl(unsigned);
extern unsigned short __stub_htons(unsigned short);
extern unsigned __stub_ntohl(unsigned);
extern unsigned short __stub_ntohs(unsigned short);
# 13
unsigned Cyc_htonl(unsigned x){unsigned _T0;_T0=
__stub_htonl(x);return _T0;}
# 16
unsigned short Cyc_htons(unsigned short x){unsigned short _T0;_T0=
__stub_htons(x);return _T0;}
# 19
unsigned Cyc_ntohl(unsigned x){unsigned _T0;_T0=
__stub_ntohl(x);return _T0;}
# 22
unsigned short Cyc_ntohs(unsigned short x){unsigned short _T0;_T0=
__stub_ntohs(x);return _T0;}struct Cyc_dirent{unsigned long d_ino;long d_off;unsigned short d_reclen;unsigned char d_type;char d_name[256U];};struct Cyc___cycDIR;struct __abstractDIR;struct Cyc___cycDIR{struct __abstractDIR*dir;};
# 38 "cycstubs.cyc"
extern int closedir(struct __abstractDIR*);
# 40
int Cyc_closedir(struct Cyc___cycDIR*d){struct Cyc___cycDIR*_T0;struct __abstractDIR*_T1;int _T2;_T0=d;_T1=_T0->dir;_T2=
closedir(_T1);return _T2;}
# 45
extern struct __abstractDIR*opendir(const char*);static char _TmpG0[32U]="opendir called with NULL string";
# 47
static struct Cyc_Core_Failure_exn_struct Cyc___opendir_failure={Cyc_Core_Failure,{(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 32U}};
# 49
struct Cyc___cycDIR*Cyc_opendir(const char*f){struct Cyc___cycDIR*_T0;struct __abstractDIR*_T1;unsigned _T2;struct Cyc___cycDIR*_T3;
struct __abstractDIR*cd=opendir(f);_T1=cd;_T2=(unsigned)_T1;
# 52
if(!_T2)goto _TL0;{struct Cyc___cycDIR*_T4=_cycalloc(sizeof(struct Cyc___cycDIR));_T4->dir=cd;_T3=(struct Cyc___cycDIR*)_T4;}_T0=_T3;goto _TL1;_TL0: _T0=0;_TL1: return _T0;}
# 56
extern struct Cyc_dirent*readdir(struct __abstractDIR*);
# 58
struct Cyc_dirent*Cyc_readdir(struct Cyc___cycDIR*d){struct Cyc___cycDIR*_T0;struct __abstractDIR*_T1;struct Cyc_dirent*_T2;_T0=d;_T1=_T0->dir;_T2=
readdir(_T1);return _T2;}
# 63
extern void rewinddir(struct __abstractDIR*);
# 65
void Cyc_rewinddir(struct Cyc___cycDIR*d){struct Cyc___cycDIR*_T0;struct __abstractDIR*_T1;_T0=d;_T1=_T0->dir;
rewinddir(_T1);return rewinddir(_T1);}
# 70
extern void seekdir(struct __abstractDIR*,long);
# 72
void Cyc_seekdir(struct Cyc___cycDIR*d,long x){struct Cyc___cycDIR*_T0;struct __abstractDIR*_T1;long _T2;_T0=d;_T1=_T0->dir;_T2=x;
seekdir(_T1,_T2);return seekdir(_T1,_T2);}
# 77
extern long telldir(struct __abstractDIR*);
# 79
long Cyc_telldir(struct Cyc___cycDIR*d){struct Cyc___cycDIR*_T0;struct __abstractDIR*_T1;long _T2;_T0=d;_T1=_T0->dir;_T2=
telldir(_T1);return _T2;}struct Cyc_flock{short l_type;short l_whence;long l_start;long l_len;int l_pid;};struct Cyc_Flock_FcntlArg_struct{int tag;struct Cyc_flock*f1;};struct Cyc_Long_FcntlArg_struct{int tag;long f1;};
# 87 "cycstubs.cyc"
extern int fcntl(int,int);
extern int fcntl_with_arg(int,int,long);
extern int fcntl_with_lock(int,int,struct Cyc_flock*);
extern int open_without_mode(const char*,int);
extern int open_with_mode(const char*,int,unsigned);static char _TmpG1[21U]="fcntl: too many args";
# 93
static struct Cyc_Core_Failure_exn_struct Cyc___fcntl_failure={Cyc_Core_Failure,{(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 21U}};
# 95
int Cyc_fcntl(int fd,int cmd,struct _fat_ptr argv){struct _fat_ptr _T0;unsigned _T1;int _T2;struct _fat_ptr _T3;unsigned _T4;struct Cyc_Core_Failure_exn_struct*_T5;struct Cyc_Core_Failure_exn_struct*_T6;struct _fat_ptr _T7;unsigned char*_T8;void**_T9;void**_TA;int*_TB;int _TC;int _TD;int _TE;_T0=argv;_T1=
_get_fat_size(_T0,sizeof(void*));if(_T1!=0U)goto _TL2;_T2=fcntl(fd,cmd);return _T2;
_TL2: _T3=argv;_T4=_get_fat_size(_T3,sizeof(void*));if(_T4==1U)goto _TL4;_T5=& Cyc___fcntl_failure;_T6=(struct Cyc_Core_Failure_exn_struct*)_T5;_throw(_T6);goto _TL5;
_TL4: _T7=argv;_T8=_T7.curr;_T9=(void**)_T8;_TA=_check_null(_T9);{void*_TF=_TA[0];struct Cyc_flock*_T10;long _T11;_TB=(int*)_TF;_TC=*_TB;if(_TC!=1)goto _TL6;{struct Cyc_Long_FcntlArg_struct*_T12=(struct Cyc_Long_FcntlArg_struct*)_TF;_T11=_T12->f1;}{long arg=_T11;_TD=
fcntl_with_arg(fd,cmd,arg);return _TD;}_TL6:{struct Cyc_Flock_FcntlArg_struct*_T12=(struct Cyc_Flock_FcntlArg_struct*)_TF;_T10=_T12->f1;}{struct Cyc_flock*lock=_T10;_TE=
fcntl_with_lock(fd,cmd,lock);return _TE;};}_TL5:;}
# 104
int Cyc_open(const char*s,int i,struct _fat_ptr ms){struct _fat_ptr _T0;unsigned _T1;const char*_T2;int _T3;struct _fat_ptr _T4;unsigned char*_T5;unsigned*_T6;unsigned*_T7;unsigned _T8;int _T9;int _TA;_T0=ms;_T1=
# 107
_get_fat_size(_T0,sizeof(unsigned));if(_T1 < 1U)goto _TL8;_T2=s;_T3=i;_T4=ms;_T5=_T4.curr;_T6=(unsigned*)_T5;_T7=
_check_null(_T6);_T8=_T7[0];_T9=open_with_mode(_T2,_T3,_T8);return _T9;
# 110
_TL8: _TA=open_without_mode(s,i);return _TA;}struct Cyc_pollfd{int fd;short events;short revents;};
# 117 "cycstubs.cyc"
extern int poll(struct Cyc_pollfd*,unsigned long,int);static char _TmpG2[22U]="poll called with NULL";
# 119
static struct Cyc_Core_Failure_exn_struct Cyc___poll_failure_1={Cyc_Core_Failure,{(unsigned char*)_TmpG2,(unsigned char*)_TmpG2,(unsigned char*)_TmpG2 + 22U}};static char _TmpG3[39U]="poll called with out-of-bounds pointer";
# 121
static struct Cyc_Core_Failure_exn_struct Cyc___poll_failure_2={Cyc_Core_Failure,{(unsigned char*)_TmpG3,(unsigned char*)_TmpG3,(unsigned char*)_TmpG3 + 39U}};
# 123
int Cyc_poll(struct _fat_ptr a,unsigned long b,int c){struct _fat_ptr _T0;unsigned char*_T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;struct _fat_ptr _T5;unsigned _T6;struct Cyc_Core_Failure_exn_struct*_T7;struct Cyc_Core_Failure_exn_struct*_T8;struct _fat_ptr _T9;unsigned char*_TA;struct Cyc_pollfd*_TB;unsigned long _TC;unsigned long _TD;int _TE;unsigned long _TF;int _T10;int _T11;int _T12;_T0=a;_T1=_T0.curr;_T2=(unsigned)_T1;
if(_T2)goto _TLA;else{goto _TLC;}_TLC: _T3=& Cyc___poll_failure_1;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TLB;_TLA: _TLB: _T5=a;_T6=
_get_fat_size(_T5,sizeof(struct Cyc_pollfd));{int len=(int)_T6;
if(len >= 1)goto _TLD;_T7=& Cyc___poll_failure_2;_T8=(struct Cyc_Core_Failure_exn_struct*)_T7;_throw(_T8);goto _TLE;_TLD: _TLE: _T9=a;_TA=_untag_fat_ptr(_T9,sizeof(struct Cyc_pollfd),0U);_TB=(struct Cyc_pollfd*)_TA;_TD=b;_TE=len;_TF=(unsigned long)_TE;
# 128
if(_TD >= _TF)goto _TLF;_TC=b;goto _TL10;_TLF: _T10=len;_TC=(unsigned long)_T10;_TL10: _T11=c;_T12=
# 127
poll(_TB,_TC,_T11);return _T12;}}struct _tuple0{unsigned long __val[1024U / (8U * sizeof(unsigned long))];};union Cyc_sigval{int sival_int;void*sival_ptr;};struct _tuple1{int si_pid;unsigned si_uid;};struct _tuple2{int si_tid;int si_overrun;union Cyc_sigval si_sigval;};struct _tuple3{int si_pid;unsigned si_uid;union Cyc_sigval si_sigval;};struct _tuple4{int si_pid;unsigned si_uid;int si_status;long si_utime;long si_stime;};struct _tuple5{void*si_addr;};struct _tuple6{long si_band;int si_fd;};struct _tuple7{void*_call_addr;int _syscall;unsigned _arch;};union _tuple8{int _pad[128U / sizeof(int)- 3U];struct _tuple1 _kill;struct _tuple2 _timer;struct _tuple3 _rt;struct _tuple4 _sigchld;struct _tuple5 _sigfault;struct _tuple6 _sigpoll;struct _tuple7 _sigsys;};struct _tuple9{int si_signo;int si_errno;int si_code;union _tuple8 _sifields;};union _tuple10{void(*sa_handler)(int);void(*sa_sigaction)(int,struct _tuple9*,void*);};struct Cyc_sigaction{union _tuple10 __sigaction_handler;struct _tuple0 sa_mask;int sa_flags;void(*sa_restorer)(void);};
# 332 "../../../library/stdlib/libc/signal.h"
extern void Cyc_SIG_DFL(int);
extern void Cyc_SIG_ERR(int);
extern void Cyc_SIG_IGN(int);
# 136 "cycstubs.cyc"
extern void(*signal_SIG_DFL(int))(int);
extern void(*signal_SIG_ERR(int))(int);
# 141
extern void(*signal_SIG_IGN(int))(int);
extern void(*signal_SIG_HANDLER(int,void(*)(int)))(int);
# 144
void(*Cyc_signal(int a,void(*b)(int)))(int){void(*_T0)(int);void(*_T1)(int);void(*_T2)(int);void(*_T3)(int);void(*_T4)(int);void(*_T5)(int);void(*_T6)(int);void(*_T7)(int);void(*_T8)(int);int _T9;void(*_TA)(int);void(*_TB)(int);_T0=b;_T1=Cyc_SIG_DFL;
if(_T0!=_T1)goto _TL11;_T2=signal_SIG_DFL(a);return _T2;_TL11: _T3=b;_T4=Cyc_SIG_ERR;
if(_T3!=_T4)goto _TL13;_T5=signal_SIG_ERR(a);return _T5;_TL13: _T6=b;_T7=Cyc_SIG_IGN;
# 150
if(_T6!=_T7)goto _TL15;_T8=signal_SIG_IGN(a);return _T8;_TL15: _T9=a;_TA=b;_TB=
signal_SIG_HANDLER(_T9,_TA);return _TB;}
# 155
extern int sigaction(int,const struct Cyc_sigaction*,struct Cyc_sigaction*);
# 157
extern int sigaction_wrap(struct Cyc_sigaction*);
extern int sigaction_unwrap(struct Cyc_sigaction*);
# 160
int Cyc_sigaction(int sig,struct Cyc_sigaction*act,struct Cyc_sigaction*oact){int _T0;
# 162
if(act==0)goto _TL17;sigaction_unwrap(act);goto _TL18;_TL17: _TL18: {
int ret=sigaction(sig,act,oact);
# 166
if(act==0)goto _TL19;sigaction_wrap(act);goto _TL1A;_TL19: _TL1A:
 if(oact==0)goto _TL1B;sigaction_wrap(oact);goto _TL1C;_TL1B: _TL1C: _T0=ret;
return _T0;}}union _tuple12{unsigned __wch;char __wchb[4U];};struct _tuple13{int __count;union _tuple12 __value;};struct _tuple14{long __pos;struct _tuple13 __state;};struct Cyc___cycFILE;struct __abstractFILE;
# 330 "../../../library/stdlib/libc/stdio.h"
extern struct _fat_ptr Cyc_vrprintf(struct _RegionHandle*,struct _fat_ptr,struct _fat_ptr);extern char Cyc_FileCloseError[15U];struct Cyc_FileCloseError_exn_struct{char*tag;};extern char Cyc_FileOpenError[14U];struct Cyc_FileOpenError_exn_struct{char*tag;struct _fat_ptr f1;};struct __abstractFILE;struct Cyc___cycFILE{struct __abstractFILE*file;};
# 182 "cycstubs.cyc"
struct Cyc___cycFILE*Cyc_fromCfile(struct __abstractFILE*cf){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;unsigned _T2;struct Cyc___cycFILE*_T3;_T1=cf;_T2=(unsigned)_T1;
if(!_T2)goto _TL1D;{struct Cyc___cycFILE*_T4=_cycalloc(sizeof(struct Cyc___cycFILE));_T4->file=cf;_T3=(struct Cyc___cycFILE*)_T4;}_T0=_T3;goto _TL1E;_TL1D: _T0=0;_TL1E: return _T0;}
# 187
extern void clearerr(struct __abstractFILE*);
# 189
void Cyc_clearerr(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);clearerr(_T2);return clearerr(_T2);}
# 194
extern int fclose(struct __abstractFILE*);static char _TmpG4[28U]="fclose: FILE already closed";
# 196
static struct Cyc_Core_Failure_exn_struct Cyc___fclose_failure={Cyc_Core_Failure,{(unsigned char*)_TmpG4,(unsigned char*)_TmpG4,(unsigned char*)_TmpG4 + 28U}};
# 198
int Cyc_fclose(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct Cyc_Core_Failure_exn_struct*_T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc___cycFILE*_T4;struct __abstractFILE*_T5;struct Cyc___cycFILE*_T6;int _T7;_T0=f;_T1=_T0->file;
if(_T1!=0)goto _TL1F;_T2=& Cyc___fclose_failure;_T3=(struct Cyc_Core_Failure_exn_struct*)_T2;_throw(_T3);goto _TL20;_TL1F: _TL20: _T4=f;_T5=_T4->file;{
int retc=fclose(_T5);_T6=f;
_T6->file=0;_T7=retc;
return _T7;}}
# 206
extern struct __abstractFILE*fdopen(int,const char*);
# 208
struct Cyc___cycFILE*Cyc_fdopen(int i,const char*s){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;unsigned _T2;struct Cyc___cycFILE*_T3;
struct __abstractFILE*cf=fdopen(i,s);_T1=cf;_T2=(unsigned)_T1;
# 211
if(!_T2)goto _TL21;{struct Cyc___cycFILE*_T4=_cycalloc(sizeof(struct Cyc___cycFILE));_T4->file=cf;_T3=(struct Cyc___cycFILE*)_T4;}_T0=_T3;goto _TL22;_TL21: _T0=0;_TL22: return _T0;}
# 215
extern int feof(struct __abstractFILE*);
# 217
int Cyc_feof(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=feof(_T2);return _T3;}
# 222
extern int ferror(struct __abstractFILE*);
# 224
int Cyc_ferror(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=ferror(_T2);return _T3;}
# 229
extern int fflush(struct __abstractFILE*);
# 231
int Cyc_fflush(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;unsigned _T1;struct Cyc___cycFILE*_T2;struct __abstractFILE*_T3;int _T4;int _T5;_T0=f;_T1=(unsigned)_T0;
if(!_T1)goto _TL23;_T2=f;_T3=_T2->file;_T4=
fflush(_T3);return _T4;
_TL23: _T5=fflush(0);return _T5;}
# 238
extern int fgetc(struct __abstractFILE*);
# 240
int Cyc_fgetc(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=fgetc(_T2);return _T3;}
# 245
extern int fgetpos(struct __abstractFILE*,struct _tuple14*);
# 247
int Cyc_fgetpos(struct Cyc___cycFILE*f,struct _tuple14*x){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;struct _tuple14*_T3;int _T4;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=x;_T4=fgetpos(_T2,_T3);return _T4;}
# 252
extern char*fgets(char*,int,struct __abstractFILE*);static char _TmpG5[30U]="fgets called with NULL string";
# 254
static struct Cyc_Core_Failure_exn_struct Cyc___fgets_failure_1={Cyc_Core_Failure,{(unsigned char*)_TmpG5,(unsigned char*)_TmpG5,(unsigned char*)_TmpG5 + 30U}};static char _TmpG6[27U]="fgets: buffer insufficient";
# 256
static struct Cyc_Core_Failure_exn_struct Cyc___fgets_failure_2={Cyc_Core_Failure,{(unsigned char*)_TmpG6,(unsigned char*)_TmpG6,(unsigned char*)_TmpG6 + 27U}};
# 258
struct _fat_ptr Cyc_fgets(struct _fat_ptr s,int n,struct Cyc___cycFILE*f){struct _fat_ptr _T0;unsigned char*_T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;struct _fat_ptr _T5;unsigned char*_T6;struct _fat_ptr _T7;unsigned _T8;int _T9;unsigned _TA;struct Cyc_Core_Failure_exn_struct*_TB;struct Cyc_Core_Failure_exn_struct*_TC;char*_TD;int _TE;struct Cyc___cycFILE*_TF;struct __abstractFILE*_T10;struct __abstractFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;_T0=s;_T1=_T0.curr;_T2=(unsigned)_T1;
if(_T2)goto _TL25;else{goto _TL27;}_TL27: _T3=& Cyc___fgets_failure_1;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TL26;_TL25: _TL26: {
char*result;_T5=s;_T6=_untag_fat_ptr_check_bound(_T5,sizeof(char),1U);{
char*buffer=(char*)_T6;_T7=s;{
unsigned len=_get_fat_size(_T7,sizeof(char));_T8=len;_T9=n;_TA=(unsigned)_T9;
if(_T8 >= _TA)goto _TL28;_TB=& Cyc___fgets_failure_2;_TC=(struct Cyc_Core_Failure_exn_struct*)_TB;_throw(_TC);goto _TL29;_TL28: _TL29: _TD=buffer;_TE=n;_TF=f;_T10=_TF->file;_T11=
# 265
_check_null(_T10);result=fgets(_TD,_TE,_T11);
if(result!=0)goto _TL2A;_T12=
_tag_fat(0,0,0);return _T12;
# 269
_TL2A: _T13=s;return _T13;}}}}
# 273
extern int fileno(struct __abstractFILE*);
# 275
int Cyc_fileno(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=fileno(_T2);return _T3;}
# 281
extern void flockfile(struct __abstractFILE*);
# 283
void Cyc_flockfile(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);flockfile(_T2);return flockfile(_T2);}
# 289
extern struct __abstractFILE*fopen(const char*,const char*);
# 291
struct Cyc___cycFILE*Cyc_fopen(const char*name,const char*type){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;unsigned _T2;struct Cyc___cycFILE*_T3;
struct __abstractFILE*cf=fopen(name,type);_T1=cf;_T2=(unsigned)_T1;
# 294
if(!_T2)goto _TL2C;{struct Cyc___cycFILE*_T4=_cycalloc(sizeof(struct Cyc___cycFILE));_T4->file=cf;_T3=(struct Cyc___cycFILE*)_T4;}_T0=_T3;goto _TL2D;_TL2C: _T0=0;_TL2D: return _T0;}
# 298
extern int fputc(int,struct __abstractFILE*);
# 300
int Cyc_fputc(int x,struct Cyc___cycFILE*f){int _T0;struct Cyc___cycFILE*_T1;struct __abstractFILE*_T2;struct __abstractFILE*_T3;int _T4;_T0=x;_T1=f;_T2=_T1->file;_T3=
_check_null(_T2);_T4=fputc(_T0,_T3);return _T4;}
# 305
extern int fputs(const char*,struct __abstractFILE*);
# 307
int Cyc_fputs(const char*x,struct Cyc___cycFILE*f){const char*_T0;struct Cyc___cycFILE*_T1;struct __abstractFILE*_T2;struct __abstractFILE*_T3;int _T4;_T0=x;_T1=f;_T2=_T1->file;_T3=
_check_null(_T2);_T4=fputs(_T0,_T3);return _T4;}
# 312
extern unsigned fread(char*,unsigned,unsigned,struct __abstractFILE*);static char _TmpG7[27U]="fread: buffer insufficient";
# 314
static struct Cyc_Core_Failure_exn_struct Cyc___fread_failure={Cyc_Core_Failure,{(unsigned char*)_TmpG7,(unsigned char*)_TmpG7,(unsigned char*)_TmpG7 + 27U}};
# 316
unsigned Cyc_fread(struct _fat_ptr ptr,unsigned size,unsigned nmemb,struct Cyc___cycFILE*f){unsigned _T0;struct _fat_ptr _T1;unsigned _T2;unsigned _T3;unsigned _T4;struct Cyc_Core_Failure_exn_struct*_T5;struct Cyc_Core_Failure_exn_struct*_T6;struct _fat_ptr _T7;unsigned char*_T8;char*_T9;unsigned _TA;unsigned _TB;struct Cyc___cycFILE*_TC;struct __abstractFILE*_TD;struct __abstractFILE*_TE;unsigned _TF;
if(size==0U)goto _TL30;else{goto _TL31;}_TL31: _T0=nmemb;_T1=ptr;_T2=_get_fat_size(_T1,sizeof(char));_T3=size;_T4=_T2 / _T3;if(_T0 > _T4)goto _TL30;else{goto _TL2E;}
_TL30: _T5=& Cyc___fread_failure;_T6=(struct Cyc_Core_Failure_exn_struct*)_T5;_throw(_T6);goto _TL2F;_TL2E: _TL2F: _T7=ptr;_T8=_untag_fat_ptr_check_bound(_T7,sizeof(char),1U);_T9=(char*)_T8;_TA=size;_TB=nmemb;_TC=f;_TD=_TC->file;_TE=
_check_null(_TD);_TF=fread(_T9,_TA,_TB,_TE);return _TF;}
# 323
extern struct __abstractFILE*freopen(const char*,const char*,struct __abstractFILE*);
# 326
struct Cyc___cycFILE*Cyc_r_freopen(struct _RegionHandle*r,const char*filename,const char*modes,struct Cyc___cycFILE*f){const char*_T0;const char*_T1;struct Cyc___cycFILE*_T2;struct __abstractFILE*_T3;struct __abstractFILE*_T4;struct Cyc___cycFILE*_T5;struct __abstractFILE*_T6;unsigned _T7;struct Cyc___cycFILE*_T8;struct _RegionHandle*_T9;_T0=filename;_T1=modes;_T2=f;_T3=_T2->file;_T4=
# 328
_check_null(_T3);{struct __abstractFILE*cf=freopen(_T0,_T1,_T4);_T6=cf;_T7=(unsigned)_T6;
if(!_T7)goto _TL32;_T9=r;{struct Cyc___cycFILE*_TA=_region_malloc(_T9,0U,sizeof(struct Cyc___cycFILE));_TA->file=cf;_T8=(struct Cyc___cycFILE*)_TA;}_T5=_T8;goto _TL33;_TL32: _T5=0;_TL33: return _T5;}}
# 332
struct Cyc___cycFILE*Cyc_freopen(const char*filename,const char*modes,struct Cyc___cycFILE*f){const char*_T0;const char*_T1;struct Cyc___cycFILE*_T2;struct __abstractFILE*_T3;struct __abstractFILE*_T4;struct Cyc___cycFILE*_T5;struct __abstractFILE*_T6;unsigned _T7;struct Cyc___cycFILE*_T8;_T0=filename;_T1=modes;_T2=f;_T3=_T2->file;_T4=
# 334
_check_null(_T3);{struct __abstractFILE*cf=freopen(_T0,_T1,_T4);_T6=cf;_T7=(unsigned)_T6;
if(!_T7)goto _TL34;{struct Cyc___cycFILE*_T9=_cycalloc(sizeof(struct Cyc___cycFILE));_T9->file=cf;_T8=(struct Cyc___cycFILE*)_T9;}_T5=_T8;goto _TL35;_TL34: _T5=0;_TL35: return _T5;}}
# 340
extern int fseek(struct __abstractFILE*,long,int);
# 342
int Cyc_fseek(struct Cyc___cycFILE*a,long b,int c){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;long _T3;int _T4;int _T5;_T0=a;_T1=_T0->file;_T2=
_check_null(_T1);_T3=b;_T4=c;_T5=fseek(_T2,_T3,_T4);return _T5;}
# 348
extern int fseeko(struct __abstractFILE*,long,int);
# 350
int Cyc_fseeko(struct Cyc___cycFILE*a,long b,int c){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;long _T3;int _T4;int _T5;_T0=a;_T1=_T0->file;_T2=
_check_null(_T1);_T3=b;_T4=c;_T5=fseeko(_T2,_T3,_T4);return _T5;}
# 356
extern int fsetpos(struct __abstractFILE*,const struct _tuple14*);
# 358
int Cyc_fsetpos(struct Cyc___cycFILE*f,const struct _tuple14*b){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;const struct _tuple14*_T3;int _T4;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=b;_T4=fsetpos(_T2,_T3);return _T4;}
# 363
extern long ftell(struct __abstractFILE*);
# 365
long Cyc_ftell(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;long _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=ftell(_T2);return _T3;}
# 371
extern long ftello(struct __abstractFILE*);
# 373
long Cyc_ftello(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;long _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=ftello(_T2);return _T3;}
# 380
extern int ftrylockfile(struct __abstractFILE*);
# 382
int Cyc_ftrylockfile(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=ftrylockfile(_T2);return _T3;}
# 389
extern void funlockfile(struct __abstractFILE*);
# 391
void Cyc_funlockfile(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);funlockfile(_T2);return funlockfile(_T2);}
# 397
extern unsigned fwrite(const char*,unsigned,unsigned,struct __abstractFILE*);static char _TmpG8[31U]="fwrite called with NULL string";
# 399
static struct Cyc_Core_Failure_exn_struct Cyc___fwrite_failure_1={Cyc_Core_Failure,{(unsigned char*)_TmpG8,(unsigned char*)_TmpG8,(unsigned char*)_TmpG8 + 31U}};static char _TmpG9[28U]="fwrite: buffer insufficient";
# 401
static struct Cyc_Core_Failure_exn_struct Cyc___fwrite_failure_2={Cyc_Core_Failure,{(unsigned char*)_TmpG9,(unsigned char*)_TmpG9,(unsigned char*)_TmpG9 + 28U}};
# 403
unsigned Cyc_fwrite(struct _fat_ptr ptr,unsigned size,unsigned nmemb,struct Cyc___cycFILE*f){struct _fat_ptr _T0;unsigned char*_T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;unsigned _T5;struct _fat_ptr _T6;unsigned _T7;struct Cyc_Core_Failure_exn_struct*_T8;struct Cyc_Core_Failure_exn_struct*_T9;struct _fat_ptr _TA;unsigned char*_TB;const char*_TC;unsigned _TD;unsigned _TE;struct Cyc___cycFILE*_TF;struct __abstractFILE*_T10;struct __abstractFILE*_T11;unsigned _T12;_T0=ptr;_T1=_T0.curr;_T2=(unsigned)_T1;
if(_T2)goto _TL36;else{goto _TL38;}_TL38: _T3=& Cyc___fwrite_failure_1;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TL37;
# 406
_TL36: _T5=size * nmemb;_T6=ptr;_T7=_get_fat_size(_T6,sizeof(char));if(_T5 <= _T7)goto _TL39;_T8=& Cyc___fwrite_failure_2;_T9=(struct Cyc_Core_Failure_exn_struct*)_T8;_throw(_T9);goto _TL3A;_TL39: _TL3A: _TA=ptr;_TB=_untag_fat_ptr_check_bound(_TA,sizeof(char),1U);_TC=(const char*)_TB;_TD=size;_TE=nmemb;_TF=f;_T10=_TF->file;_T11=
_check_null(_T10);_T12=fwrite(_TC,_TD,_TE,_T11);return _T12;_TL37:;}
# 412
extern int getc(struct __abstractFILE*);
# 414
int Cyc_getc(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=getc(_T2);return _T3;}
# 419
extern int getchar (void);
# 421
int Cyc_getchar (void){int _T0;_T0=
getchar();return _T0;}
# 427
extern int getc_unlocked(struct __abstractFILE*);
# 429
int Cyc_getc_unlocked(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=getc_unlocked(_T2);return _T3;}
# 436
extern int __CYCLONE_GETCHAR_UNLOCKED (void);
# 438
int Cyc_getchar_unlocked (void){int _T0;_T0=
__CYCLONE_GETCHAR_UNLOCKED();return _T0;}
# 444
extern int pclose(struct __abstractFILE*);
# 446
int Cyc_pclose(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=pclose(_T2);return _T3;}
# 451
extern struct __abstractFILE*popen(const char*,const char*);
# 453
struct Cyc___cycFILE*Cyc_popen(const char*name,const char*type){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;unsigned _T2;struct Cyc___cycFILE*_T3;
struct __abstractFILE*cf=popen(name,type);_T1=cf;_T2=(unsigned)_T1;
# 456
if(!_T2)goto _TL3B;{struct Cyc___cycFILE*_T4=_cycalloc(sizeof(struct Cyc___cycFILE));_T4->file=cf;_T3=(struct Cyc___cycFILE*)_T4;}_T0=_T3;goto _TL3C;_TL3B: _T0=0;_TL3C: return _T0;}
# 460
extern int putc(int,struct __abstractFILE*);
# 462
int Cyc_putc(int x,struct Cyc___cycFILE*f){int _T0;struct Cyc___cycFILE*_T1;struct __abstractFILE*_T2;struct __abstractFILE*_T3;int _T4;_T0=x;_T1=f;_T2=_T1->file;_T3=
_check_null(_T2);_T4=putc(_T0,_T3);return _T4;}
# 468
extern int putc_unlocked(int,struct __abstractFILE*);
# 470
int Cyc_putc_unlocked(int x,struct Cyc___cycFILE*f){int _T0;struct Cyc___cycFILE*_T1;struct __abstractFILE*_T2;struct __abstractFILE*_T3;int _T4;_T0=x;_T1=f;_T2=_T1->file;_T3=
_check_null(_T2);_T4=putc_unlocked(_T0,_T3);return _T4;}
# 476
extern void rewind(struct __abstractFILE*);
# 478
void Cyc_rewind(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);rewind(_T2);return rewind(_T2);}
# 483
extern int setvbuf(struct __abstractFILE*,char*,int,unsigned);static char _TmpGA[24U]="setvbuf: buffer is NULL";
# 485
static struct Cyc_Core_Failure_exn_struct Cyc___setvbuf_failure_1={Cyc_Core_Failure,{(unsigned char*)_TmpGA,(unsigned char*)_TmpGA,(unsigned char*)_TmpGA + 24U}};static char _TmpGB[29U]="setvbuf: buffer insufficient";
# 487
static struct Cyc_Core_Failure_exn_struct Cyc___setvbuf_failure_2={Cyc_Core_Failure,{(unsigned char*)_TmpGB,(unsigned char*)_TmpGB,(unsigned char*)_TmpGB + 29U}};
# 489
int Cyc_setvbuf(struct Cyc___cycFILE*f,struct _fat_ptr buf,int type,unsigned size){struct _fat_ptr _T0;unsigned char*_T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;struct _fat_ptr _T5;unsigned char*_T6;unsigned _T7;struct _fat_ptr _T8;unsigned _T9;unsigned _TA;struct Cyc_Core_Failure_exn_struct*_TB;struct Cyc_Core_Failure_exn_struct*_TC;struct Cyc___cycFILE*_TD;struct __abstractFILE*_TE;struct __abstractFILE*_TF;struct _fat_ptr _T10;unsigned char*_T11;char*_T12;int _T13;unsigned _T14;int _T15;_T0=buf;_T1=_T0.curr;_T2=(unsigned)_T1;
if(_T2)goto _TL3D;else{goto _TL3F;}_TL3F: if(type==2)goto _TL3D;_T3=& Cyc___setvbuf_failure_1;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TL3E;_TL3D: _TL3E: _T5=buf;_T6=_T5.curr;_T7=(unsigned)_T6;
if(!_T7)goto _TL40;_T8=buf;_T9=_get_fat_size(_T8,sizeof(char));_TA=size;if(_T9 >= _TA)goto _TL40;_TB=& Cyc___setvbuf_failure_2;_TC=(struct Cyc_Core_Failure_exn_struct*)_TB;_throw(_TC);goto _TL41;_TL40: _TL41: _TD=f;_TE=_TD->file;_TF=
_check_null(_TE);_T10=buf;_T11=_untag_fat_ptr_check_bound(_T10,sizeof(char),1U);_T12=(char*)_T11;_T13=type;_T14=size;_T15=setvbuf(_TF,_T12,_T13,_T14);return _T15;}
# 495
void Cyc_setbuf(struct Cyc___cycFILE*f,struct _fat_ptr buf){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;int _T2;struct _fat_ptr _T3;unsigned char*_T4;unsigned _T5;_T0=f;_T1=buf;_T3=buf;_T4=_T3.curr;_T5=(unsigned)_T4;
if(!_T5)goto _TL42;_T2=0;goto _TL43;_TL42: _T2=2;_TL43: Cyc_setvbuf(_T0,_T1,_T2,8192U);
return;}
# 525 "cycstubs.cyc"
extern int ungetc(int,struct __abstractFILE*);
# 527
int Cyc_ungetc(int x,struct Cyc___cycFILE*f){int _T0;struct Cyc___cycFILE*_T1;struct __abstractFILE*_T2;struct __abstractFILE*_T3;int _T4;_T0=x;_T1=f;_T2=_T1->file;_T3=
_check_null(_T2);_T4=ungetc(_T0,_T3);return _T4;}
# 532
extern int getw(struct __abstractFILE*);
# 534
int Cyc_getw(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;struct __abstractFILE*_T1;struct __abstractFILE*_T2;int _T3;_T0=f;_T1=_T0->file;_T2=
_check_null(_T1);_T3=getw(_T2);return _T3;}
# 539
extern int putw(int,struct __abstractFILE*);
# 541
int Cyc_putw(int x,struct Cyc___cycFILE*f){int _T0;struct Cyc___cycFILE*_T1;struct __abstractFILE*_T2;struct __abstractFILE*_T3;int _T4;_T0=x;_T1=f;_T2=_T1->file;_T3=
_check_null(_T2);_T4=putw(_T0,_T3);return _T4;}char Cyc_FileCloseError[15U]="FileCloseError";char Cyc_FileOpenError[14U]="FileOpenError";
# 550
struct Cyc___cycFILE*Cyc_file_open(struct _fat_ptr fname,struct _fat_ptr mode){struct _fat_ptr _T0;unsigned char*_T1;unsigned char*_T2;const char*_T3;struct _fat_ptr _T4;unsigned char*_T5;unsigned char*_T6;const char*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;unsigned _TA;char*_TB;unsigned _TC;unsigned _TD;struct _fat_ptr _TE;unsigned char*_TF;const char*_T10;unsigned _T11;int _T12;struct Cyc_FileOpenError_exn_struct*_T13;void*_T14;struct Cyc___cycFILE*_T15;_T0=fname;_T1=_untag_fat_ptr_check_bound(_T0,sizeof(char),1U);_T2=_check_null(_T1);_T3=(const char*)_T2;_T4=mode;_T5=_untag_fat_ptr_check_bound(_T4,sizeof(char),1U);_T6=_check_null(_T5);_T7=(const char*)_T6;{
struct Cyc___cycFILE*f=Cyc_fopen(_T3,_T7);
if(f!=0)goto _TL44;_T9=fname;_TA=
_get_fat_size(_T9,sizeof(char));{unsigned _T16=_TA + 1U;_TC=_check_times(_T16,sizeof(char));{char*_T17=_cycalloc_atomic(_TC);{unsigned _T18=_T16;unsigned i;i=0;_TL49: if(i < _T18)goto _TL47;else{goto _TL48;}_TL47: _TD=i;_TE=fname;_TF=_TE.curr;_T10=(const char*)_TF;_T11=i;_T12=(int)_T11;_T17[_TD]=_T10[_T12];i=i + 1;goto _TL49;_TL48: _T17[_T18]=0;}_TB=(char*)_T17;}_T8=_tag_fat(_TB,sizeof(char),_T16);}{struct _fat_ptr fn=_T8;{struct Cyc_FileOpenError_exn_struct*_T16=_cycalloc(sizeof(struct Cyc_FileOpenError_exn_struct));_T16->tag=Cyc_FileOpenError;
_T16->f1=fn;_T13=(struct Cyc_FileOpenError_exn_struct*)_T16;}_T14=(void*)_T13;_throw(_T14);}goto _TL45;_TL44: _TL45: _T15=f;
# 556
return _T15;}}
# 559
struct Cyc_FileCloseError_exn_struct Cyc_FileCloseError_val={Cyc_FileCloseError};
void Cyc_file_close(struct Cyc___cycFILE*f){int _T0;struct Cyc_FileCloseError_exn_struct*_T1;struct Cyc_FileCloseError_exn_struct*_T2;_T0=
Cyc_fclose(f);if(_T0==0)goto _TL4A;_T1=& Cyc_FileCloseError_val;_T2=(struct Cyc_FileCloseError_exn_struct*)_T1;_throw(_T2);goto _TL4B;_TL4A: _TL4B:;}
# 567 "cycstubs.cyc"
void Cyc_free(struct _fat_ptr ptr){;}
# 570
extern void qsort(void*,unsigned,unsigned,int(*)(const void*,const void*));static char _TmpGC[23U]="qsort called with NULL";
# 573
static struct Cyc_Core_Failure_exn_struct Cyc___qsort_failure_1={Cyc_Core_Failure,{(unsigned char*)_TmpGC,(unsigned char*)_TmpGC,(unsigned char*)_TmpGC + 23U}};static char _TmpGD[42U]="qsort called with insufficient array size";
# 575
static struct Cyc_Core_Failure_exn_struct Cyc___qsort_failure_2={Cyc_Core_Failure,{(unsigned char*)_TmpGD,(unsigned char*)_TmpGD,(unsigned char*)_TmpGD + 42U}};
# 577
void Cyc_qsort(struct _fat_ptr tab,unsigned nmemb,unsigned szmemb,int(*compar)(const void*,const void*)){struct _fat_ptr _T0;unsigned char*_T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;struct _fat_ptr _T5;unsigned _T6;unsigned _T7;struct Cyc_Core_Failure_exn_struct*_T8;struct Cyc_Core_Failure_exn_struct*_T9;struct _fat_ptr _TA;unsigned char*_TB;void*_TC;unsigned _TD;unsigned _TE;int(*_TF)(const void*,const void*);_T0=tab;_T1=_T0.curr;_T2=(unsigned)_T1;
# 579
if(_T2)goto _TL4C;else{goto _TL4E;}_TL4E: _T3=& Cyc___qsort_failure_1;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TL4D;_TL4C: _TL4D: _T5=tab;_T6=
_get_fat_size(_T5,sizeof(void));_T7=nmemb;if(_T6 >= _T7)goto _TL4F;_T8=& Cyc___qsort_failure_2;_T9=(struct Cyc_Core_Failure_exn_struct*)_T8;_throw(_T9);goto _TL50;_TL4F: _TL50: _TA=tab;_TB=_untag_fat_ptr_check_bound(_TA,sizeof(void),1U);_TC=(void*)_TB;_TD=nmemb;_TE=szmemb;_TF=compar;
qsort(_TC,_TD,_TE,_TF);}
# 589 "cycstubs.cyc"
extern char*__stub_mmap(char*,unsigned,int,int,int,long);
# 592
extern int munmap(const char*,unsigned);static char _TmpGE[42U]="mmap called with illegal start/prot/flags";
# 594
static struct Cyc_Core_Failure_exn_struct Cyc___mmap_failure={Cyc_Core_Failure,{(unsigned char*)_TmpGE,(unsigned char*)_TmpGE,(unsigned char*)_TmpGE + 42U}};
# 596
struct _fat_ptr Cyc_mmap(struct _fat_ptr ignored,unsigned length,int prot,int flags,int fd,long offset){struct Cyc_Core_Failure_exn_struct*_T0;struct Cyc_Core_Failure_exn_struct*_T1;struct _fat_ptr _T2;struct _fat_ptr(*_T3)(char*,unsigned,unsigned);struct _fat_ptr(*_T4)(void*,unsigned,unsigned);char*_T5;unsigned _T6;struct _fat_ptr _T7;
# 599
if(prot==4)goto _TL53;else{goto _TL55;}_TL55: if(flags & 2)goto _TL56;else{goto _TL54;}_TL56: if(flags & 1)goto _TL53;else{goto _TL54;}_TL54: if(flags & 256)goto _TL53;else{goto _TL51;}
# 605
_TL53: _T0=& Cyc___mmap_failure;_T1=(struct Cyc_Core_Failure_exn_struct*)_T0;_throw(_T1);goto _TL52;
_TL51: if(!(flags & 16))goto _TL57;_T2=
_tag_fat(0,0,0);return _T2;
# 609
_TL57:{unsigned _T8;_T8=length;{unsigned l=_T8;
char*buf=__stub_mmap(0,l,prot,flags,fd,offset);_T4=Cyc_Core_mkfat;{
struct _fat_ptr(*_T9)(char*,unsigned,unsigned)=(struct _fat_ptr(*)(char*,unsigned,unsigned))_T4;_T3=_T9;}_T5=_check_null(buf);_T6=l;_T7=_T3(_T5,sizeof(char),_T6);return _T7;}}_TL52:;}
# 617
int Cyc_munmap(struct _fat_ptr start,unsigned length){struct _fat_ptr _T0;unsigned char*_T1;const char*_T2;unsigned _T3;int _T4;_T0=start;_T1=_untag_fat_ptr_check_bound(_T0,sizeof(char),1U);_T2=(const char*)_T1;_T3=length;_T4=
# 619
munmap(_T2,_T3);return _T4;}struct Cyc_timespec{long tv_sec;long tv_nsec;};struct Cyc_timeval{long tv_sec;long tv_usec;};struct _tuple17{long __fds_bits[(unsigned)(1024 / (8 * (int)sizeof(long)))];};
# 626 "cycstubs.cyc"
extern int pselect(int,struct _tuple17*,struct _tuple17*,struct _tuple17*,const struct Cyc_timespec*,const struct _tuple0*);
# 236 "../../../library/stdlib/libc/errno.h"
extern int*__CYCLONE_ERRNO (void);
# 630 "cycstubs.cyc"
extern int Cyc_pselect(int a,struct _tuple17*b,struct _tuple17*c,struct _tuple17*d,const struct Cyc_timespec*e,const struct _tuple0*f){int*_T0;int*_T1;int _T2;int _T3;
# 633
if(a < 0)goto _TL5B;else{goto _TL5C;}_TL5C: if(a > 1024)goto _TL5B;else{goto _TL59;}
_TL5B: _T0=__CYCLONE_ERRNO();_T1=_check_null(_T0);*_T1=22;_T2=- 1;
return _T2;_TL59: _T3=
# 637
pselect(a,b,c,d,e,f);return _T3;}
# 642
extern int select(int,struct _tuple17*,struct _tuple17*,struct _tuple17*,struct Cyc_timeval*);
# 645 "cycstubs.cyc"
extern int Cyc_select(int a,struct _tuple17*b,struct _tuple17*c,struct _tuple17*d,struct Cyc_timeval*e){int*_T0;int*_T1;int _T2;int _T3;
# 648
if(a < 0)goto _TL5F;else{goto _TL60;}_TL60: if(a > 1024)goto _TL5F;else{goto _TL5D;}
_TL5F: _T0=__CYCLONE_ERRNO();_T1=_check_null(_T0);*_T1=22;_T2=- 1;
return _T2;_TL5D: _T3=
# 652
select(a,b,c,d,e);return _T3;}
# 656
extern void __stub_FD_CLR(int,struct _tuple17*);
extern int __stub_FD_ISSET(int,struct _tuple17*);
extern void __stub_FD_SET(int,struct _tuple17*);
extern void __stub_FD_ZERO(struct _tuple17*);
# 661
void Cyc_FD_CLR(int a,struct _tuple17*b){
if(a < 0)goto _TL63;else{goto _TL64;}_TL64: if(a > 1024)goto _TL63;else{goto _TL61;}_TL63: return;_TL61:
 __stub_FD_CLR(a,b);return __stub_FD_CLR(a,b);}
# 665
int Cyc_FD_ISSET(int a,struct _tuple17*b){int _T0;
if(a < 0)goto _TL67;else{goto _TL68;}_TL68: if(a > 1024)goto _TL67;else{goto _TL65;}_TL67: return 0;_TL65: _T0=
__stub_FD_ISSET(a,b);return _T0;}
# 669
void Cyc_FD_SET(int a,struct _tuple17*b){
if(a < 0)goto _TL6B;else{goto _TL6C;}_TL6C: if(a > 1024)goto _TL6B;else{goto _TL69;}_TL6B: return;_TL69:
 __stub_FD_SET(a,b);return __stub_FD_SET(a,b);}
# 673
void Cyc_FD_ZERO(struct _tuple17*a){
__stub_FD_ZERO(a);return __stub_FD_ZERO(a);}struct Cyc_sockaddr{unsigned short sa_family;char sa_data[14U];};struct Cyc_linger{int l_onoff;int l_linger;};struct Cyc_SA_sockaddr_in_SockAddr_struct{int tag;struct Cyc_sockaddr_in*f1;};struct Cyc_SA_socklenptr_SockAddr_struct{int tag;unsigned*f1;};struct Cyc_SA_socklen_SockAddr_struct{int tag;unsigned f1;};struct Cyc_SO_int_SockOpt_struct{int tag;int*f1;};struct Cyc_SO_timeval_SockOpt_struct{int tag;struct Cyc_timeval*f1;};struct Cyc_SO_linger_SockOpt_struct{int tag;struct Cyc_linger*f1;};struct Cyc_SO_socklenptr_SockOpt_struct{int tag;unsigned*f1;};struct Cyc_SO_socklen_SockOpt_struct{int tag;unsigned f1;};extern char Cyc_SocketError[12U];struct Cyc_SocketError_exn_struct{char*tag;};struct Cyc_sockaddr_in{unsigned short sin_family;unsigned short sin_port;struct Cyc_in_addr sin_addr;unsigned char sin_zero[((sizeof(struct Cyc_sockaddr)- sizeof(unsigned short))- sizeof(unsigned short))- sizeof(struct Cyc_in_addr)];};char Cyc_SocketError[12U]="SocketError";
# 683 "cycstubs.cyc"
struct Cyc_SocketError_exn_struct Cyc_SocketError_val={Cyc_SocketError};
# 686
extern int accept_in(int,const struct Cyc_sockaddr_in*,unsigned*);struct _tuple19{void*f0;void*f1;};
# 688
int Cyc_accept(int fd,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;int _TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;int _T14;struct Cyc_SocketError_exn_struct*_T15;struct Cyc_SocketError_exn_struct*_T16;_T0=ap;_T1=
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL6D;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL6E;_TL6D: _TL6E:{struct _tuple19 _T17;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T17.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T17.f1=_TB[1];_T4=_T17;}{struct _tuple19 _T17=_T4;unsigned*_T18;struct Cyc_sockaddr_in*_T19;_TC=_T17.f0;_TD=(int*)_TC;_TE=*_TD;if(_TE!=0)goto _TL6F;_TF=_T17.f1;_T10=(int*)_TF;_T11=*_T10;if(_T11!=1)goto _TL71;_T12=_T17.f0;{struct Cyc_SA_sockaddr_in_SockAddr_struct*_T1A=(struct Cyc_SA_sockaddr_in_SockAddr_struct*)_T12;_T19=_T1A->f1;}_T13=_T17.f1;{struct Cyc_SA_socklenptr_SockAddr_struct*_T1A=(struct Cyc_SA_socklenptr_SockAddr_struct*)_T13;_T18=_T1A->f1;}{struct Cyc_sockaddr_in*x=_T19;unsigned*y=_T18;_T14=
# 692
accept_in(fd,x,y);return _T14;}_TL71: goto _LL3;_TL6F: _LL3: _T15=& Cyc_SocketError_val;_T16=(struct Cyc_SocketError_exn_struct*)_T15;_throw(_T16);;}}
# 698
extern int bind_in(int,const struct Cyc_sockaddr_in*,unsigned);
# 700
int Cyc_bind(int fd,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;int _TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;int _T14;struct Cyc_SocketError_exn_struct*_T15;struct Cyc_SocketError_exn_struct*_T16;_T0=ap;_T1=
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL73;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL74;_TL73: _TL74:{struct _tuple19 _T17;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T17.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T17.f1=_TB[1];_T4=_T17;}{struct _tuple19 _T17=_T4;unsigned _T18;struct Cyc_sockaddr_in*_T19;_TC=_T17.f0;_TD=(int*)_TC;_TE=*_TD;if(_TE!=0)goto _TL75;_TF=_T17.f1;_T10=(int*)_TF;_T11=*_T10;if(_T11!=2)goto _TL77;_T12=_T17.f0;{struct Cyc_SA_sockaddr_in_SockAddr_struct*_T1A=(struct Cyc_SA_sockaddr_in_SockAddr_struct*)_T12;_T19=_T1A->f1;}_T13=_T17.f1;{struct Cyc_SA_socklen_SockAddr_struct*_T1A=(struct Cyc_SA_socklen_SockAddr_struct*)_T13;_T18=_T1A->f1;}{struct Cyc_sockaddr_in*x=_T19;unsigned y=_T18;_T14=
# 704
bind_in(fd,x,y);return _T14;}_TL77: goto _LL3;_TL75: _LL3: _T15=& Cyc_SocketError_val;_T16=(struct Cyc_SocketError_exn_struct*)_T15;_throw(_T16);;}}
# 710
extern int connect_in(int,const struct Cyc_sockaddr_in*,unsigned);
# 712
int Cyc_connect(int fd,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;int _TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;int _T14;struct Cyc_SocketError_exn_struct*_T15;struct Cyc_SocketError_exn_struct*_T16;_T0=ap;_T1=
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL79;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL7A;_TL79: _TL7A:{struct _tuple19 _T17;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T17.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T17.f1=_TB[1];_T4=_T17;}{struct _tuple19 _T17=_T4;unsigned _T18;struct Cyc_sockaddr_in*_T19;_TC=_T17.f0;_TD=(int*)_TC;_TE=*_TD;if(_TE!=0)goto _TL7B;_TF=_T17.f1;_T10=(int*)_TF;_T11=*_T10;if(_T11!=2)goto _TL7D;_T12=_T17.f0;{struct Cyc_SA_sockaddr_in_SockAddr_struct*_T1A=(struct Cyc_SA_sockaddr_in_SockAddr_struct*)_T12;_T19=_T1A->f1;}_T13=_T17.f1;{struct Cyc_SA_socklen_SockAddr_struct*_T1A=(struct Cyc_SA_socklen_SockAddr_struct*)_T13;_T18=_T1A->f1;}{struct Cyc_sockaddr_in*x=_T19;unsigned y=_T18;_T14=
# 716
connect_in(fd,x,y);return _T14;}_TL7D: goto _LL3;_TL7B: _LL3: _T15=& Cyc_SocketError_val;_T16=(struct Cyc_SocketError_exn_struct*)_T15;_throw(_T16);;}}
# 722
extern int getpeername_in(int,const struct Cyc_sockaddr_in*,unsigned*);
# 724
int Cyc_getpeername(int fd,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;int _TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;int _T14;struct Cyc_SocketError_exn_struct*_T15;struct Cyc_SocketError_exn_struct*_T16;_T0=ap;_T1=
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL7F;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL80;_TL7F: _TL80:{struct _tuple19 _T17;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T17.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T17.f1=_TB[1];_T4=_T17;}{struct _tuple19 _T17=_T4;unsigned*_T18;struct Cyc_sockaddr_in*_T19;_TC=_T17.f0;_TD=(int*)_TC;_TE=*_TD;if(_TE!=0)goto _TL81;_TF=_T17.f1;_T10=(int*)_TF;_T11=*_T10;if(_T11!=1)goto _TL83;_T12=_T17.f0;{struct Cyc_SA_sockaddr_in_SockAddr_struct*_T1A=(struct Cyc_SA_sockaddr_in_SockAddr_struct*)_T12;_T19=_T1A->f1;}_T13=_T17.f1;{struct Cyc_SA_socklenptr_SockAddr_struct*_T1A=(struct Cyc_SA_socklenptr_SockAddr_struct*)_T13;_T18=_T1A->f1;}{struct Cyc_sockaddr_in*x=_T19;unsigned*y=_T18;_T14=
# 728
getpeername_in(fd,x,y);return _T14;}_TL83: goto _LL3;_TL81: _LL3: _T15=& Cyc_SocketError_val;_T16=(struct Cyc_SocketError_exn_struct*)_T15;_throw(_T16);;}}
# 734
extern int getsockname_in(int,const struct Cyc_sockaddr_in*,unsigned*);
# 736
int Cyc_getsockname(int fd,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;int _TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;int _T14;struct Cyc_SocketError_exn_struct*_T15;struct Cyc_SocketError_exn_struct*_T16;_T0=ap;_T1=
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL85;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL86;_TL85: _TL86:{struct _tuple19 _T17;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T17.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T17.f1=_TB[1];_T4=_T17;}{struct _tuple19 _T17=_T4;unsigned*_T18;struct Cyc_sockaddr_in*_T19;_TC=_T17.f0;_TD=(int*)_TC;_TE=*_TD;if(_TE!=0)goto _TL87;_TF=_T17.f1;_T10=(int*)_TF;_T11=*_T10;if(_T11!=1)goto _TL89;_T12=_T17.f0;{struct Cyc_SA_sockaddr_in_SockAddr_struct*_T1A=(struct Cyc_SA_sockaddr_in_SockAddr_struct*)_T12;_T19=_T1A->f1;}_T13=_T17.f1;{struct Cyc_SA_socklenptr_SockAddr_struct*_T1A=(struct Cyc_SA_socklenptr_SockAddr_struct*)_T13;_T18=_T1A->f1;}{struct Cyc_sockaddr_in*x=_T19;unsigned*y=_T18;_T14=
# 740
getsockname_in(fd,x,y);return _T14;}_TL89: goto _LL3;_TL87: _LL3: _T15=& Cyc_SocketError_val;_T16=(struct Cyc_SocketError_exn_struct*)_T15;_throw(_T16);;}}
# 746
extern int getsockopt_int(int,int,int,int*,unsigned*);
extern int getsockopt_timeval(int,int,int,struct Cyc_timeval*,unsigned*);
# 749
int Cyc_getsockopt(int fd,int level,int optname,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;unsigned _TE;void*_TF;int*_T10;unsigned _T11;void*_T12;void*_T13;int _T14;void*_T15;void*_T16;int _T17;int _T18;int _T19;int*_T1A;int*_T1B;unsigned*_T1C;int _T1D;void*_T1E;int*_T1F;unsigned _T20;void*_T21;void*_T22;int _T23;void*_T24;void*_T25;int _T26;int _T27;int _T28;struct Cyc_timeval*_T29;int*_T2A;unsigned*_T2B;int _T2C;struct Cyc_SocketError_exn_struct*_T2D;struct Cyc_SocketError_exn_struct*_T2E;_T0=ap;_T1=
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL8B;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL8C;_TL8B: _TL8C:{struct _tuple19 _T2F;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T2F.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T2F.f1=_TB[1];_T4=_T2F;}{struct _tuple19 _T2F=_T4;struct Cyc_timeval*_T30;int*_T31;unsigned*_T32;int*_T33;_TC=_T2F.f0;_TD=(int*)_TC;_TE=*_TD;switch(_TE){case 0: _TF=_T2F.f1;_T10=(int*)_TF;_T11=*_T10;switch(_T11){case 3: _T12=_T2F.f0;{struct Cyc_SO_int_SockOpt_struct*_T34=(struct Cyc_SO_int_SockOpt_struct*)_T12;_T33=_T34->f1;}_T13=_T2F.f1;{struct Cyc_SO_socklenptr_SockOpt_struct*_T34=(struct Cyc_SO_socklenptr_SockOpt_struct*)_T13;_T32=_T34->f1;}{int*x=_T33;unsigned*y=_T32;_T14=
# 753
getsockopt_int(fd,level,optname,x,y);return _T14;}case 0: _T15=_T2F.f0;{struct Cyc_SO_int_SockOpt_struct*_T34=(struct Cyc_SO_int_SockOpt_struct*)_T15;_T33=_T34->f1;}_T16=_T2F.f1;{struct Cyc_SO_int_SockOpt_struct*_T34=(struct Cyc_SO_int_SockOpt_struct*)_T16;_T31=_T34->f1;}{int*x=_T33;int*y=_T31;_T17=fd;_T18=level;_T19=optname;_T1A=x;_T1B=y;_T1C=(unsigned*)_T1B;_T1D=
# 755
getsockopt_int(_T17,_T18,_T19,_T1A,_T1C);return _T1D;}default: goto _LL9;};case 1: _T1E=_T2F.f1;_T1F=(int*)_T1E;_T20=*_T1F;switch(_T20){case 3: _T21=_T2F.f0;{struct Cyc_SO_timeval_SockOpt_struct*_T34=(struct Cyc_SO_timeval_SockOpt_struct*)_T21;_T30=_T34->f1;}_T22=_T2F.f1;{struct Cyc_SO_socklenptr_SockOpt_struct*_T34=(struct Cyc_SO_socklenptr_SockOpt_struct*)_T22;_T32=_T34->f1;}{struct Cyc_timeval*x=_T30;unsigned*y=_T32;_T23=
# 757
getsockopt_timeval(fd,level,optname,x,y);return _T23;}case 0: _T24=_T2F.f0;{struct Cyc_SO_timeval_SockOpt_struct*_T34=(struct Cyc_SO_timeval_SockOpt_struct*)_T24;_T30=_T34->f1;}_T25=_T2F.f1;{struct Cyc_SO_int_SockOpt_struct*_T34=(struct Cyc_SO_int_SockOpt_struct*)_T25;_T33=_T34->f1;}{struct Cyc_timeval*x=_T30;int*y=_T33;_T26=fd;_T27=level;_T28=optname;_T29=x;_T2A=y;_T2B=(unsigned*)_T2A;_T2C=
# 759
getsockopt_timeval(_T26,_T27,_T28,_T29,_T2B);return _T2C;}default: goto _LL9;};default: _LL9: _T2D=& Cyc_SocketError_val;_T2E=(struct Cyc_SocketError_exn_struct*)_T2D;_throw(_T2E);};}}
# 765
extern int recv_wrapped(int,struct _fat_ptr,unsigned,int);
# 769
int Cyc_recv(int fd,struct _fat_ptr buf,unsigned n,int flags){int _T0;_T0=
recv_wrapped(fd,buf,n,flags);return _T0;}
# 774
extern int recvfrom_in(int,struct _fat_ptr,unsigned,int,const struct Cyc_sockaddr_in*,unsigned*);
# 777
int Cyc_recvfrom(int fd,struct _fat_ptr buf,unsigned n,int flags,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;int _TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;int _T14;struct Cyc_SocketError_exn_struct*_T15;struct Cyc_SocketError_exn_struct*_T16;_T0=ap;_T1=
# 779
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL90;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL91;_TL90: _TL91:{struct _tuple19 _T17;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T17.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T17.f1=_TB[1];_T4=_T17;}{struct _tuple19 _T17=_T4;unsigned*_T18;struct Cyc_sockaddr_in*_T19;_TC=_T17.f0;_TD=(int*)_TC;_TE=*_TD;if(_TE!=0)goto _TL92;_TF=_T17.f1;_T10=(int*)_TF;_T11=*_T10;if(_T11!=1)goto _TL94;_T12=_T17.f0;{struct Cyc_SA_sockaddr_in_SockAddr_struct*_T1A=(struct Cyc_SA_sockaddr_in_SockAddr_struct*)_T12;_T19=_T1A->f1;}_T13=_T17.f1;{struct Cyc_SA_socklenptr_SockAddr_struct*_T1A=(struct Cyc_SA_socklenptr_SockAddr_struct*)_T13;_T18=_T1A->f1;}{struct Cyc_sockaddr_in*x=_T19;unsigned*y=_T18;_T14=
# 782
recvfrom_in(fd,buf,n,flags,x,y);return _T14;}_TL94: goto _LL3;_TL92: _LL3: _T15=& Cyc_SocketError_val;_T16=(struct Cyc_SocketError_exn_struct*)_T15;_throw(_T16);;}}
# 788
extern int send_wrapped(int,struct _fat_ptr,unsigned,int);
# 790
int Cyc_send(int fd,struct _fat_ptr buf,unsigned n,int flags){int _T0;_T0=
send_wrapped(fd,buf,n,flags);return _T0;}
# 795
extern int sendto_in(int,struct _fat_ptr,unsigned,int,const struct Cyc_sockaddr_in*,unsigned);
# 798
int Cyc_sendto(int fd,struct _fat_ptr buf,unsigned n,int flags,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;int _TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;int _T14;struct Cyc_SocketError_exn_struct*_T15;struct Cyc_SocketError_exn_struct*_T16;_T0=ap;_T1=
# 800
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL96;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL97;_TL96: _TL97:{struct _tuple19 _T17;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T17.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T17.f1=_TB[1];_T4=_T17;}{struct _tuple19 _T17=_T4;unsigned _T18;struct Cyc_sockaddr_in*_T19;_TC=_T17.f0;_TD=(int*)_TC;_TE=*_TD;if(_TE!=0)goto _TL98;_TF=_T17.f1;_T10=(int*)_TF;_T11=*_T10;if(_T11!=2)goto _TL9A;_T12=_T17.f0;{struct Cyc_SA_sockaddr_in_SockAddr_struct*_T1A=(struct Cyc_SA_sockaddr_in_SockAddr_struct*)_T12;_T19=_T1A->f1;}_T13=_T17.f1;{struct Cyc_SA_socklen_SockAddr_struct*_T1A=(struct Cyc_SA_socklen_SockAddr_struct*)_T13;_T18=_T1A->f1;}{struct Cyc_sockaddr_in*x=_T19;unsigned y=_T18;_T14=
# 803
sendto_in(fd,buf,n,flags,x,y);return _T14;}_TL9A: goto _LL3;_TL98: _LL3: _T15=& Cyc_SocketError_val;_T16=(struct Cyc_SocketError_exn_struct*)_T15;_throw(_T16);;}}
# 809
extern int setsockopt_int(int,int,int,const int*,unsigned);
extern int setsockopt_timeval(int,int,int,const struct Cyc_timeval*,unsigned);
extern int setsockopt_linger(int,int,int,const struct Cyc_linger*,unsigned);
# 813
int Cyc_setsockopt(int fd,int level,int optname,struct _fat_ptr ap){struct _fat_ptr _T0;unsigned _T1;struct Cyc_SocketError_exn_struct*_T2;struct Cyc_SocketError_exn_struct*_T3;struct _tuple19 _T4;struct _fat_ptr _T5;unsigned char*_T6;void**_T7;void**_T8;struct _fat_ptr _T9;unsigned char*_TA;void**_TB;void*_TC;int*_TD;unsigned _TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;int _T14;void*_T15;int*_T16;int _T17;void*_T18;void*_T19;int _T1A;void*_T1B;int*_T1C;int _T1D;void*_T1E;void*_T1F;int _T20;struct Cyc_SocketError_exn_struct*_T21;struct Cyc_SocketError_exn_struct*_T22;_T0=ap;_T1=
_get_fat_size(_T0,sizeof(void*));if(_T1==2U)goto _TL9C;_T2=& Cyc_SocketError_val;_T3=(struct Cyc_SocketError_exn_struct*)_T2;_throw(_T3);goto _TL9D;_TL9C: _TL9D:{struct _tuple19 _T23;_T5=ap;_T6=_T5.curr;_T7=(void**)_T6;_T8=
_check_null(_T7);_T23.f0=_T8[0];_T9=ap;_TA=_T9.curr;_TB=(void**)_TA;_T23.f1=_TB[1];_T4=_T23;}{struct _tuple19 _T23=_T4;struct Cyc_linger*_T24;struct Cyc_timeval*_T25;unsigned _T26;int*_T27;_TC=_T23.f0;_TD=(int*)_TC;_TE=*_TD;switch(_TE){case 0: _TF=_T23.f1;_T10=(int*)_TF;_T11=*_T10;if(_T11!=4)goto _TL9F;_T12=_T23.f0;{struct Cyc_SO_int_SockOpt_struct*_T28=(struct Cyc_SO_int_SockOpt_struct*)_T12;_T27=_T28->f1;}_T13=_T23.f1;{struct Cyc_SO_socklen_SockOpt_struct*_T28=(struct Cyc_SO_socklen_SockOpt_struct*)_T13;_T26=_T28->f1;}{int*x=_T27;unsigned y=_T26;_T14=
# 817
setsockopt_int(fd,level,optname,x,y);return _T14;}_TL9F: goto _LL7;case 1: _T15=_T23.f1;_T16=(int*)_T15;_T17=*_T16;if(_T17!=4)goto _TLA1;_T18=_T23.f0;{struct Cyc_SO_timeval_SockOpt_struct*_T28=(struct Cyc_SO_timeval_SockOpt_struct*)_T18;_T25=_T28->f1;}_T19=_T23.f1;{struct Cyc_SO_socklen_SockOpt_struct*_T28=(struct Cyc_SO_socklen_SockOpt_struct*)_T19;_T26=_T28->f1;}{struct Cyc_timeval*x=_T25;unsigned y=_T26;_T1A=
# 819
setsockopt_timeval(fd,level,optname,x,y);return _T1A;}_TLA1: goto _LL7;case 2: _T1B=_T23.f1;_T1C=(int*)_T1B;_T1D=*_T1C;if(_T1D!=4)goto _TLA3;_T1E=_T23.f0;{struct Cyc_SO_linger_SockOpt_struct*_T28=(struct Cyc_SO_linger_SockOpt_struct*)_T1E;_T24=_T28->f1;}_T1F=_T23.f1;{struct Cyc_SO_socklen_SockOpt_struct*_T28=(struct Cyc_SO_socklen_SockOpt_struct*)_T1F;_T26=_T28->f1;}{struct Cyc_linger*x=_T24;unsigned y=_T26;_T20=
# 821
setsockopt_linger(fd,level,optname,x,y);return _T20;}_TLA3: goto _LL7;default: _LL7: _T21=& Cyc_SocketError_val;_T22=(struct Cyc_SocketError_exn_struct*)_T21;_throw(_T22);};}}struct Cyc_timezone{int tz_minuteswest;int tz_dsttime;};
# 830 "cycstubs.cyc"
extern int gettimeofday(struct Cyc_timeval*,struct Cyc_timezone*);
# 832
int Cyc_gettimeofday(struct Cyc_timeval*a,struct Cyc_timezone*b){int _T0;_T0=
gettimeofday(a,0);return _T0;}
# 840 "cycstubs.cyc"
extern void __syslog_str(int,const char*);
# 843
void Cyc_syslog(int x,struct _fat_ptr y,struct _fat_ptr z){int _T0;struct _fat_ptr _T1;unsigned char*_T2;unsigned char*_T3;const char*_T4;struct _RegionHandle _T5=_new_region(0U,"r");struct _RegionHandle*r=& _T5;_push_region(r);{
# 846
struct _fat_ptr m=Cyc_vrprintf(r,y,z);_T0=x;_T1=m;_T2=_untag_fat_ptr_check_bound(_T1,sizeof(char),1U);_T3=_check_null(_T2);_T4=(const char*)_T3;
__syslog_str(_T0,_T4);}_pop_region();}
# 849
void Cyc_vsyslog(int x,struct _fat_ptr y,struct _fat_ptr z){int _T0;struct _fat_ptr _T1;unsigned char*_T2;unsigned char*_T3;const char*_T4;struct _RegionHandle _T5=_new_region(0U,"r");struct _RegionHandle*r=& _T5;_push_region(r);{
# 852
struct _fat_ptr m=Cyc_vrprintf(r,y,z);_T0=x;_T1=m;_T2=_untag_fat_ptr_check_bound(_T1,sizeof(char),1U);_T3=_check_null(_T2);_T4=(const char*)_T3;
__syslog_str(_T0,_T4);}_pop_region();}struct Cyc_tm{int tm_sec;int tm_min;int tm_hour;int tm_mday;int tm_mon;int tm_year;int tm_wday;int tm_yday;int tm_isdst;long tm_gmtoff;const char*tm_zone;};
# 860 "cycstubs.cyc"
extern unsigned strftime(char*,unsigned,const char*,const struct Cyc_tm*);static char _TmpGF[27U]="fgets: buffer insufficient";
# 863
static struct Cyc_Core_Failure_exn_struct Cyc___strftime_failure={Cyc_Core_Failure,{(unsigned char*)_TmpGF,(unsigned char*)_TmpGF,(unsigned char*)_TmpGF + 27U}};
# 865
unsigned Cyc_strftime(struct _fat_ptr s,unsigned maxsize,struct _fat_ptr fmt,const struct Cyc_tm*t){unsigned _T0;struct _fat_ptr _T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;struct _fat_ptr _T5;unsigned char*_T6;char*_T7;unsigned _T8;struct _fat_ptr _T9;unsigned char*_TA;const char*_TB;const struct Cyc_tm*_TC;unsigned _TD;_T0=maxsize;_T1=s;_T2=
# 867
_get_fat_size(_T1,sizeof(char));if(_T0 <= _T2)goto _TLA5;_T3=& Cyc___strftime_failure;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TLA6;_TLA5: _TLA6: _T5=s;_T6=_untag_fat_ptr_check_bound(_T5,sizeof(char),1U);_T7=(char*)_T6;_T8=maxsize;_T9=fmt;_TA=_untag_fat_ptr_check_bound(_T9,sizeof(char),1U);_TB=(const char*)_TA;_TC=t;_TD=
strftime(_T7,_T8,_TB,_TC);return _TD;}
# 676 "../../../library/stdlib/libc/unistd.h"
extern int execvp(const char*,const char**);static char _TmpG10[36U]="execlp arg list not NULL-terminated";
# 887 "cycstubs.cyc"
static struct Cyc_Core_Failure_exn_struct Cyc___execlp_failure={Cyc_Core_Failure,{(unsigned char*)_TmpG10,(unsigned char*)_TmpG10,(unsigned char*)_TmpG10 + 36U}};
# 889
int Cyc_execlp(const char*path,const char*arg0,struct _fat_ptr argv){struct _fat_ptr _T0;struct _fat_ptr _T1;unsigned _T2;unsigned _T3;int _T4;unsigned char*_T5;const char**_T6;const char*_T7;struct Cyc_Core_Failure_exn_struct*_T8;struct Cyc_Core_Failure_exn_struct*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;unsigned _TC;const char**_TD;struct _RegionHandle*_TE;unsigned _TF;unsigned _T10;struct _fat_ptr _T11;unsigned char*_T12;const char**_T13;unsigned _T14;unsigned char*_T15;const char**_T16;int _T17;unsigned _T18;struct _fat_ptr _T19;unsigned _T1A;unsigned _T1B;struct _fat_ptr _T1C;int _T1D;unsigned char*_T1E;const char**_T1F;struct _fat_ptr _T20;unsigned char*_T21;const char**_T22;int _T23;unsigned _T24;unsigned char*_T25;const char**_T26;const char*_T27;struct _fat_ptr _T28;unsigned char*_T29;const char**_T2A;_T0=argv;_T1=argv;_T2=
_get_fat_size(_T1,sizeof(const char*));_T3=_T2 - 1U;_T4=(int)_T3;_T5=_check_fat_subscript(_T0,sizeof(const char*),_T4);_T6=(const char**)_T5;_T7=*_T6;if(_T7==0)goto _TLA7;_T8=& Cyc___execlp_failure;_T9=(struct Cyc_Core_Failure_exn_struct*)_T8;_throw(_T9);goto _TLA8;_TLA7: _TLA8: {struct _RegionHandle _T2B=_new_region(0U,"r2");struct _RegionHandle*r2=& _T2B;_push_region(r2);_TB=argv;_TC=
# 894
_get_fat_size(_TB,sizeof(const char*));{unsigned _T2C=_TC + 1U;_TE=r2;_TF=_check_times(_T2C,sizeof(const char*));{const char**_T2D=_region_malloc(_TE,0U,_TF);{unsigned _T2E=_T2C;unsigned i;i=0;_TLAC: if(i < _T2E)goto _TLAA;else{goto _TLAB;}_TLAA: _T10=i;_T2D[_T10]=0;i=i + 1;goto _TLAC;_TLAB: _T2D[_T2E]=0;}_TD=(const char**)_T2D;}_TA=_tag_fat(_TD,sizeof(const char*),_T2C);}{
# 893
struct _fat_ptr newargs=_TA;_T11=newargs;{struct _fat_ptr _T2C=_fat_ptr_plus(_T11,sizeof(const char*),0);_T12=_T2C.curr;_T13=(const char**)_T12;{const char*_T2D=*_T13;const char*_T2E=arg0;_T14=_get_fat_size(_T2C,sizeof(const char*));if(_T14!=1U)goto _TLAD;if(_T2D!=0)goto _TLAD;if(_T2E==0)goto _TLAD;_throw_arraybounds();goto _TLAE;_TLAD: _TLAE: _T15=_T2C.curr;_T16=(const char**)_T15;*_T16=_T2E;}}{
# 896
int i=0;_TLB2: _T17=i;_T18=(unsigned)_T17;_T19=argv;_T1A=_get_fat_size(_T19,sizeof(const char*));_T1B=_T1A - 1U;if(_T18 < _T1B)goto _TLB0;else{goto _TLB1;}
_TLB0: _T1C=newargs;_T1D=i + 1;{struct _fat_ptr _T2C=_fat_ptr_plus(_T1C,sizeof(const char*),_T1D);_T1E=_T2C.curr;_T1F=(const char**)_T1E;{const char*_T2D=*_T1F;_T20=argv;_T21=_T20.curr;_T22=(const char**)_T21;_T23=i;{const char*_T2E=_T22[_T23];_T24=_get_fat_size(_T2C,sizeof(const char*));if(_T24!=1U)goto _TLB3;if(_T2D!=0)goto _TLB3;if(_T2E==0)goto _TLB3;_throw_arraybounds();goto _TLB4;_TLB3: _TLB4: _T25=_T2C.curr;_T26=(const char**)_T25;*_T26=_T2E;}}}
# 896
i=i + 1;goto _TLB2;_TLB1:;}_T27=path;_T28=newargs;_T29=_untag_fat_ptr(_T28,sizeof(const char*),1U);_T2A=(const char**)_T29;{int _T2C=
# 898
execvp(_T27,_T2A);_npop_handler(0);return _T2C;}}_pop_region();}}
# 930 "cycstubs.cyc"
extern char*getcwd(char*,unsigned);static char _TmpG11[29U]="getcwd: invalid buf argument";
# 932
static struct Cyc_Core_Failure_exn_struct Cyc___getcwd_failure={Cyc_Core_Failure,{(unsigned char*)_TmpG11,(unsigned char*)_TmpG11,(unsigned char*)_TmpG11 + 29U}};
# 934
struct _fat_ptr Cyc_getcwd(struct _fat_ptr buf,unsigned size){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;struct _fat_ptr _T5;unsigned char*_T6;char*_T7;unsigned _T8;struct _fat_ptr _T9;char*_TA;unsigned _TB;_T0=buf;_T1=
_get_fat_size(_T0,sizeof(char));_T2=size;if(_T1 >= _T2)goto _TLB5;_T3=& Cyc___getcwd_failure;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TLB6;_TLB5: _TLB6: _T5=buf;_T6=_untag_fat_ptr_check_bound(_T5,sizeof(char),1U);_T7=(char*)_T6;_T8=size;{
char*response=getcwd(_T7,_T8);_TA=response;_TB=(unsigned)_TA;
if(!_TB)goto _TLB7;_T9=buf;goto _TLB8;_TLB7: _T9=_tag_fat(0,0,0);_TLB8: return _T9;}}
# 941
extern int gethostname(char*,unsigned);static char _TmpG12[34U]="gethostname: called with NULL buf";
# 943
static struct Cyc_Core_Failure_exn_struct Cyc___gethostname_failure_1={Cyc_Core_Failure,{(unsigned char*)_TmpG12,(unsigned char*)_TmpG12,(unsigned char*)_TmpG12 + 34U}};static char _TmpG13[46U]="gethostname: called with count > numelts(buf)";
# 945
static struct Cyc_Core_Failure_exn_struct Cyc___gethostname_failure_2={Cyc_Core_Failure,{(unsigned char*)_TmpG13,(unsigned char*)_TmpG13,(unsigned char*)_TmpG13 + 46U}};
# 947
int Cyc_gethostname(struct _fat_ptr buf,unsigned count){struct _fat_ptr _T0;unsigned char*_T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;unsigned _T5;struct _fat_ptr _T6;unsigned _T7;struct Cyc_Core_Failure_exn_struct*_T8;struct Cyc_Core_Failure_exn_struct*_T9;struct _fat_ptr _TA;unsigned char*_TB;char*_TC;unsigned _TD;int _TE;_T0=buf;_T1=_T0.curr;_T2=(unsigned)_T1;
if(_T2)goto _TLB9;else{goto _TLBB;}_TLBB: _T3=& Cyc___gethostname_failure_1;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TLBA;
# 950
_TLB9: _T5=count;_T6=buf;_T7=_get_fat_size(_T6,sizeof(char));if(_T5 <= _T7)goto _TLBC;_T8=& Cyc___gethostname_failure_2;_T9=(struct Cyc_Core_Failure_exn_struct*)_T8;_throw(_T9);goto _TLBD;_TLBC: _TLBD: _TA=buf;_TB=_untag_fat_ptr_check_bound(_TA,sizeof(char),1U);_TC=(char*)_TB;_TD=count;_TE=
gethostname(_TC,_TD);return _TE;_TLBA:;}
# 956
extern int read(int,char*,unsigned);static char _TmpG14[39U]="read: called with count > numelts(buf)";
# 958
static struct Cyc_Core_Failure_exn_struct Cyc___read_failure={Cyc_Core_Failure,{(unsigned char*)_TmpG14,(unsigned char*)_TmpG14,(unsigned char*)_TmpG14 + 39U}};
# 960
int Cyc_read(int fd,struct _fat_ptr buf,unsigned count){unsigned _T0;struct _fat_ptr _T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;int _T5;struct _fat_ptr _T6;unsigned char*_T7;char*_T8;unsigned _T9;int _TA;_T0=count;_T1=buf;_T2=
_get_fat_size(_T1,sizeof(char));if(_T0 <= _T2)goto _TLBE;_T3=& Cyc___read_failure;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TLBF;_TLBE: _TLBF: _T5=fd;_T6=buf;_T7=_untag_fat_ptr_check_bound(_T6,sizeof(char),1U);_T8=(char*)_T7;_T9=count;_TA=
read(_T5,_T8,_T9);return _TA;}
# 966
extern int write(int,const char*,unsigned);static char _TmpG15[40U]="write: called with count > numelts(buf)";
# 968
static struct Cyc_Core_Failure_exn_struct Cyc___write_failure={Cyc_Core_Failure,{(unsigned char*)_TmpG15,(unsigned char*)_TmpG15,(unsigned char*)_TmpG15 + 40U}};
# 970
int Cyc_write(int fd,struct _fat_ptr buf,unsigned count){unsigned _T0;struct _fat_ptr _T1;unsigned _T2;struct Cyc_Core_Failure_exn_struct*_T3;struct Cyc_Core_Failure_exn_struct*_T4;int _T5;struct _fat_ptr _T6;unsigned char*_T7;unsigned char*_T8;const char*_T9;unsigned _TA;int _TB;_T0=count;_T1=buf;_T2=
_get_fat_size(_T1,sizeof(char));if(_T0 <= _T2)goto _TLC0;_T3=& Cyc___write_failure;_T4=(struct Cyc_Core_Failure_exn_struct*)_T3;_throw(_T4);goto _TLC1;_TLC0: _TLC1: _T5=fd;_T6=buf;_T7=_untag_fat_ptr_check_bound(_T6,sizeof(char),1U);_T8=_check_null(_T7);_T9=(const char*)_T8;_TA=count;_TB=
write(_T5,_T9,_TA);return _TB;}
