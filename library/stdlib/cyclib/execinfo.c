#include <cyc_include.h>
 extern char Cyc_Core_Failure[8U];struct Cyc_Core_Failure_exn_struct{char*tag;struct _fat_ptr f1;};
# 158 "../../../library/stdlib/libc/stdlib.h"
extern void exit(int);struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 129 "../../../library/stdlib/libc/stdio.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 241
extern void perror(const char*);
# 245
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
# 251
extern int putchar(int);
# 287
extern int Cyc_sprintf(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
# 112 "../../../library/stdlib/libc/sys/wait.h"
extern int waitpid(int,int*,int);
# 315 "../../../library/stdlib/libc/signal.h"
extern int kill(int,int);
# 651 "../../../library/stdlib/libc/unistd.h"
extern int close(int);
# 658
extern int dup2(int,int);
# 676
extern int execvp(const char*,const char**);
# 686
extern int fork (void);
# 725 "../../../library/stdlib/libc/unistd.h"
extern int getpid (void);
# 754
extern int pipe(int*);
# 762
extern int Cyc_read(int,struct _fat_ptr,unsigned);
# 815
extern int Cyc_write(int,struct _fat_ptr,unsigned);
# 32 "execinfo.cyc"
extern int backtrace(int*,int);
# 38
int Cyc_Execinfo_backtrace(struct _fat_ptr array,int size){int _T0;unsigned _T1;struct _fat_ptr _T2;unsigned _T3;struct Cyc_Core_Failure_exn_struct*_T4;void*_T5;struct _fat_ptr _T6;unsigned char*_T7;int*_T8;int _T9;int _TA;_T0=size;_T1=(unsigned)_T0;_T2=array;_T3=
# 40
_get_fat_size(_T2,sizeof(int));if(_T1 <= _T3)goto _TL0;{struct Cyc_Core_Failure_exn_struct*_TB=_cycalloc(sizeof(struct Cyc_Core_Failure_exn_struct));_TB->tag=Cyc_Core_Failure;
_TB->f1=_tag_fat("backtrace: size > numelts(array)",sizeof(char),33U);_T4=(struct Cyc_Core_Failure_exn_struct*)_TB;}_T5=(void*)_T4;_throw(_T5);goto _TL1;_TL0: _TL1: _T6=array;_T7=_untag_fat_ptr_check_bound(_T6,sizeof(int),1U);_T8=(int*)_T7;_T9=size;_TA=
backtrace(_T8,_T9);return _TA;}
# 52
int Cyc_Execinfo_bt (void){int*_T0;unsigned _T1;int*_T2;int*_T3;int*_T4;int*_T5;int _T6;int _T7;int _T8;int*_T9;int _TA;int _TB;int*_TC;int _TD;int*_TE;int _TF;int _T10;int*_T11;int _T12;const char**_T13;const char**_T14;const char**_T15;const char**_T16;const char**_T17;const char**_T18;struct _fat_ptr _T19;unsigned char*_T1A;const char**_T1B;struct _fat_ptr _T1C;struct Cyc_Int_pa_PrintArg_struct _T1D;int _T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;unsigned char*_T21;unsigned _T22;unsigned char*_T23;const char**_T24;int _T25;int _T26;int*_T27;int _T28;int*_T29;int _T2A;int*_T2B;int _T2C;int*_T2D;int _T2E;int*_T2F;int _T30;int*_T31;int _T32;int*_T33;int*_T34;int*_T35;struct _fat_ptr _T36;int _T37;int _T38;struct Cyc_Int_pa_PrintArg_struct _T39;int*_T3A;int _T3B;char*_T3C;int*_T3D;int _T3E;char*_T3F;struct _fat_ptr _T40;struct _fat_ptr _T41;struct _fat_ptr _T42;int _T43;char*_T44;struct _fat_ptr _T45;int _T46;unsigned _T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct _fat_ptr _T4A;struct _fat_ptr _T4B;int _T4C;char*_T4D;struct _fat_ptr _T4E;char _T4F;int _T50;char _T51;int _T52;char _T53;int _T54;int _T55;int _T56;struct Cyc_Int_pa_PrintArg_struct _T57;int*_T58;int _T59;char*_T5A;int*_T5B;int _T5C;char*_T5D;struct _fat_ptr _T5E;struct _fat_ptr _T5F;struct _fat_ptr _T60;struct Cyc_String_pa_PrintArg_struct _T61;char*_T62;struct _fat_ptr _T63;struct _fat_ptr _T64;int _T65;int _T66;int _T67;struct _fat_ptr _T68;struct _fat_ptr _T69;int _T6A;char*_T6B;struct _fat_ptr _T6C;char _T6D;int _T6E;char _T6F;int _T70;
int bt[20U];{unsigned _T71=20U;unsigned i;i=0;_TL5: if(i < _T71)goto _TL3;else{goto _TL4;}_TL3: _T0=bt;_T1=i;_T0[_T1]=0;i=i + 1;goto _TL5;_TL4:;}{
int pid;int self_pid;
# 56
int tochild[2U];_T2=tochild;_T2[0]=0;_T3=tochild;_T3[1]=0;{int fromchild[2U];_T4=fromchild;_T4[0]=0;_T5=fromchild;_T5[1]=0;_T6=
pipe(tochild);if(_T6)goto _TL8;else{goto _TL9;}_TL9: _T7=pipe(fromchild);if(_T7)goto _TL8;else{goto _TL6;}_TL8: return 1;_TL6:
# 59
 self_pid=getpid();
# 61
pid=fork();_T8=pid;if(_T8!=0)goto _TLA;_T9=tochild;_TA=_T9[0];_TB=
dup2(_TA,0);if(_TB >= 0)goto _TLC;
perror("dup failed in backtrace");
exit(1);goto _TLD;_TLC: _TLD: _TC=tochild;_TD=_TC[1];
# 66
close(_TD);_TE=fromchild;_TF=_TE[1];_T10=
dup2(_TF,1);if(_T10 >= 0)goto _TLE;
perror("dup failed in backtrace");
exit(1);goto _TLF;_TLE: _TLF: _T11=fromchild;_T12=_T11[0];
# 71
close(_T12);{
# 73
const char*args[5U];_T13=args;_T13[0]="addr2line";_T14=args;_T14[1]="--functions";_T15=args;_T15[2]="-e";_T16=args;_T16[3]="";_T17=args;_T17[4]=0;_T18=args;_T19=_tag_fat(_T18,sizeof(const char*),5U);{struct _fat_ptr _T71=_fat_ptr_plus(_T19,sizeof(const char*),3);_T1A=_check_fat_subscript(_T71,sizeof(const char*),0U);_T1B=(const char**)_T1A;{const char*_T72=*_T1B;{struct Cyc_Int_pa_PrintArg_struct _T73;_T73.tag=1;_T1E=self_pid;
_T73.f1=(unsigned long)_T1E;_T1D=_T73;}{struct Cyc_Int_pa_PrintArg_struct _T73=_T1D;void*_T74[1];_T74[0]=& _T73;_T1F=_tag_fat("/proc/%d/exe",sizeof(char),13U);_T20=_tag_fat(_T74,sizeof(void*),1);_T1C=Cyc_aprintf(_T1F,_T20);}_T21=_untag_fat_ptr_check_bound(_T1C,sizeof(char),1U);{const char*_T73=(const char*)_T21;_T22=_get_fat_size(_T71,sizeof(const char*));if(_T22!=1U)goto _TL10;if(_T72!=0)goto _TL10;if(_T73==0)goto _TL10;_throw_arraybounds();goto _TL11;_TL10: _TL11: _T23=_T71.curr;_T24=(const char**)_T23;*_T24=_T73;}}}_T25=
execvp("addr2line",args);_T26=- 1;if(_T25!=_T26)goto _TL12;
perror("execlp failed during backtrace");goto _TL13;_TL12: _TL13:
# 78
 exit(1);}goto _TLB;
# 80
_TLA: if(pid >= 0)goto _TL14;_T27=tochild;_T28=_T27[0];
close(_T28);_T29=tochild;_T2A=_T29[1];close(_T2A);_T2B=fromchild;_T2C=_T2B[0];
close(_T2C);_T2D=fromchild;_T2E=_T2D[1];close(_T2E);
return 1;_TL14: _TLB: _T2F=tochild;_T30=_T2F[0];
# 87
close(_T30);_T31=fromchild;_T32=_T31[1];
close(_T32);_T33=fromchild;{
int infd=_T33[0];_T34=tochild;{
int outfd=_T34[1];_T35=bt;_T36=
# 93
_tag_fat(_T35,sizeof(int),20U);_T37=(int)20U;{int n=Cyc_Execinfo_backtrace(_T36,_T37);{
# 95
int c=0;_TL19: if(c < n)goto _TL17;else{goto _TL18;}
_TL17:{char buf[100U];{struct Cyc_Int_pa_PrintArg_struct _T71;_T71.tag=1;_T3A=bt;_T3B=c;_T3C=_check_known_subscript_notnull(_T3A,20U,sizeof(int),_T3B);_T3D=(int*)_T3C;_T3E=*_T3D;
_T71.f1=(unsigned)_T3E;_T39=_T71;}{struct Cyc_Int_pa_PrintArg_struct _T71=_T39;void*_T72[1];_T72[0]=& _T71;_T3F=buf;_T40=_tag_fat(_T3F,sizeof(char),100U);_T41=_tag_fat("%#x\n",sizeof(char),5U);_T42=_tag_fat(_T72,sizeof(void*),1);_T38=Cyc_sprintf(_T40,_T41,_T42);}{int len=_T38;_T43=outfd;_T44=buf;_T45=
_tag_fat(_T44,sizeof(char),100U);_T46=len;_T47=(unsigned)_T46;Cyc_write(_T43,_T45,_T47);}}
# 95
c=c + 1;goto _TL19;_TL18:;}_T48=
# 104
_tag_fat("Backtrace:\n  Function          Location\n  ----------------  --------------------------------\n",sizeof(char),94U);_T49=_tag_fat(0U,sizeof(void*),0);
# 102
Cyc_printf(_T48,_T49);{
# 105
int c=0;_TL1D: if(c < n)goto _TL1B;else{goto _TL1C;}
_TL1B:{int unknown=1;
char d;
int ret;int pos=0;_T4A=
# 110
_tag_fat("  ",sizeof(char),3U);_T4B=_tag_fat(0U,sizeof(void*),0);Cyc_printf(_T4A,_T4B);
# 112
_TL1E: _T4C=infd;_T4D=& d;_T4E=_tag_fat(_T4D,sizeof(char),1U);ret=Cyc_read(_T4C,_T4E,1U);_T4F=d;_T50=(int)_T4F;
if(_T50!=10)goto _TL20;goto _TL1F;_TL20: _T51=d;_T52=(int)_T51;
if(_T52==63)goto _TL22;unknown=0;goto _TL23;_TL22: _TL23:
 pos=pos + 1;_T53=d;_T54=(int)_T53;
putchar(_T54);
# 111
if(1)goto _TL1E;else{goto _TL1F;}_TL1F: _T55=unknown;
# 119
if(!_T55)goto _TL24;{
char buf[100U];{struct Cyc_Int_pa_PrintArg_struct _T71;_T71.tag=1;_T58=bt;_T59=c;_T5A=_check_known_subscript_notnull(_T58,20U,sizeof(int),_T59);_T5B=(int*)_T5A;_T5C=*_T5B;
_T71.f1=(unsigned)_T5C;_T57=_T71;}{struct Cyc_Int_pa_PrintArg_struct _T71=_T57;void*_T72[1];_T72[0]=& _T71;_T5D=buf;_T5E=_tag_fat(_T5D,sizeof(char),100U);_T5F=_tag_fat("(%#x)",sizeof(char),6U);_T60=_tag_fat(_T72,sizeof(void*),1);_T56=Cyc_sprintf(_T5E,_T5F,_T60);}{int len=_T56;{struct Cyc_String_pa_PrintArg_struct _T71;_T71.tag=0;_T62=buf;
_T71.f1=_tag_fat(_T62,sizeof(char),100U);_T61=_T71;}{struct Cyc_String_pa_PrintArg_struct _T71=_T61;void*_T72[1];_T72[0]=& _T71;_T63=_tag_fat("%s",sizeof(char),3U);_T64=_tag_fat(_T72,sizeof(void*),1);Cyc_printf(_T63,_T64);}_T65=len;
pos=pos + _T65;}}goto _TL25;_TL24: _TL25:
# 126
 _TL26: _T66=pos;pos=_T66 + 1;_T67=_T66;if(_T67 < 16)goto _TL27;else{goto _TL28;}
_TL27: putchar(32);goto _TL26;_TL28: _T68=
_tag_fat("  ",sizeof(char),3U);_T69=_tag_fat(0U,sizeof(void*),0);Cyc_printf(_T68,_T69);
# 131
_TL29: _T6A=infd;_T6B=& d;_T6C=_tag_fat(_T6B,sizeof(char),1U);ret=Cyc_read(_T6A,_T6C,1U);_T6D=d;_T6E=(int)_T6D;
if(_T6E!=10)goto _TL2B;goto _TL2A;_TL2B: _T6F=d;_T70=(int)_T6F;
putchar(_T70);
# 130
if(1)goto _TL29;else{goto _TL2A;}_TL2A:
# 135
 putchar(10);}
# 105
c=c + 1;goto _TL1D;_TL1C:;}
# 138
close(infd);
if(infd==outfd)goto _TL2D;
close(outfd);goto _TL2E;_TL2D: _TL2E:
# 142
 kill(pid,15);
waitpid(pid,0,0);
return 0;}}}}}}
