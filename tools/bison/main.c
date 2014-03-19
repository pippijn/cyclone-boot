#include <cyc_include.h>
 struct Cyc___cycFILE;
# 102 "../../library/stdlib/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 129
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 163
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 132 "../../library/stdlib/libc/stdlib.h"
extern void*abort (void);struct Cyc___cycFILE;
# 53 "../../library/stdlib/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 73 "../../library/stdlib/cycboot.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 320 "../../library/stdlib/cycboot.h"
extern void*abort (void);
# 25 "main.cyc"
extern int Cyc_lineno;
extern int Cyc_verboseflag;
extern struct _fat_ptr Cyc_infile;
# 29
int Cyc_failure;
# 32
struct _fat_ptr Cyc_program_name;
# 34
extern void Cyc_getargs(int,struct _fat_ptr);extern void Cyc_openfiles (void);extern void Cyc_reader (void);extern void Cyc_reduce_grammar (void);
extern void Cyc_set_derives (void);extern void Cyc_set_nullable (void);extern void Cyc_generate_states (void);
extern void Cyc_lalr (void);extern void Cyc_initialize_conflicts (void);extern void Cyc_verbose (void);extern void Cyc_terse (void);
extern void Cyc_output (void);extern void Cyc_done(int);
# 42
extern void GC_blacklist_warn_clear (void);
# 44
int Cyc_main(int argc,struct _fat_ptr argv){struct _fat_ptr _T0;unsigned char*_T1;struct _fat_ptr*_T2;int _T3;int _T4;
# 50
GC_blacklist_warn_clear();_T0=argv;_T1=_check_fat_subscript(_T0,sizeof(struct _fat_ptr),0);_T2=(struct _fat_ptr*)_T1;
# 52
Cyc_program_name=*_T2;
Cyc_failure=0;
Cyc_lineno=0;
Cyc_getargs(argc,argv);
Cyc_openfiles();
# 61
Cyc_reader();_T3=Cyc_failure;
if(!_T3)goto _TL0;
Cyc_done(Cyc_failure);goto _TL1;_TL0: _TL1:
# 67
 Cyc_reduce_grammar();
# 70
Cyc_set_derives();
Cyc_set_nullable();
# 75
Cyc_generate_states();
# 78
Cyc_lalr();
# 83
Cyc_initialize_conflicts();_T4=Cyc_verboseflag;
# 86
if(!_T4)goto _TL2;
Cyc_verbose();goto _TL3;
# 89
_TL2: Cyc_terse();_TL3:
# 92
 Cyc_output();
Cyc_done(Cyc_failure);
return 0;}
# 103
struct _fat_ptr Cyc_printable_version(char c){char _T0;int _T1;char _T2;int _T3;struct _fat_ptr _T4;struct Cyc_Int_pa_PrintArg_struct _T5;char _T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc_Int_pa_PrintArg_struct _TA;char _TB;int _TC;struct _fat_ptr _TD;struct _fat_ptr _TE;struct _fat_ptr _TF;
# 107
static struct _fat_ptr buf;_T0=c;_T1=(int)_T0;
if(_T1 < 32)goto _TL6;else{goto _TL7;}_TL7: _T2=c;_T3=(int)_T2;if(_T3 >= 127)goto _TL6;else{goto _TL4;}
_TL6:{struct Cyc_Int_pa_PrintArg_struct _T10;_T10.tag=1;_T6=c;_T10.f1=(unsigned)_T6;_T5=_T10;}{struct Cyc_Int_pa_PrintArg_struct _T10=_T5;void*_T11[1];_T11[0]=& _T10;_T7=_tag_fat("\\%o",sizeof(char),4U);_T8=_tag_fat(_T11,sizeof(void*),1);_T4=Cyc_aprintf(_T7,_T8);}buf=_T4;goto _TL5;
# 112
_TL4:{struct Cyc_Int_pa_PrintArg_struct _T10;_T10.tag=1;_TB=c;_TC=(int)_TB;_T10.f1=(unsigned long)_TC;_TA=_T10;}{struct Cyc_Int_pa_PrintArg_struct _T10=_TA;void*_T11[1];_T11[0]=& _T10;_TD=_tag_fat("%c",sizeof(char),3U);_TE=_tag_fat(_T11,sizeof(void*),1);_T9=Cyc_aprintf(_TD,_TE);}buf=_T9;_TL5: _TF=buf;
# 114
return _TF;}
# 120
struct _fat_ptr Cyc_int_to_string(int i){struct _fat_ptr _T0;struct Cyc_Int_pa_PrintArg_struct _T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;
# 123
static struct _fat_ptr buf;{struct Cyc_Int_pa_PrintArg_struct _T6;_T6.tag=1;_T2=i;
_T6.f1=(unsigned long)_T2;_T1=_T6;}{struct Cyc_Int_pa_PrintArg_struct _T6=_T1;void*_T7[1];_T7[0]=& _T6;_T3=_tag_fat("%d",sizeof(char),3U);_T4=_tag_fat(_T7,sizeof(void*),1);_T0=Cyc_aprintf(_T3,_T4);}buf=_T0;_T5=buf;
return _T5;}
# 130
void Cyc_fatal(struct _fat_ptr s){struct _fat_ptr _T0;unsigned char*_T1;char*_T2;struct Cyc_String_pa_PrintArg_struct _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc_String_pa_PrintArg_struct _T7;struct Cyc_Int_pa_PrintArg_struct _T8;int _T9;struct Cyc_String_pa_PrintArg_struct _TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;_T0=Cyc_infile;_T1=_T0.curr;_T2=(char*)_T1;
# 135
if(_T2!=0)goto _TL8;{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag=0;
_TE.f1=s;_T3=_TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T3;void*_TF[1];_TF[0]=& _TE;_T4=Cyc_stderr;_T5=_tag_fat("fatal error: %s\n",sizeof(char),17U);_T6=_tag_fat(_TF,sizeof(void*),1);Cyc_fprintf(_T4,_T5,_T6);}goto _TL9;
# 138
_TL8:{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag=0;_TE.f1=Cyc_infile;_T7=_TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T7;{struct Cyc_Int_pa_PrintArg_struct _TF;_TF.tag=1;_T9=Cyc_lineno;_TF.f1=(unsigned long)_T9;_T8=_TF;}{struct Cyc_Int_pa_PrintArg_struct _TF=_T8;{struct Cyc_String_pa_PrintArg_struct _T10;_T10.tag=0;_T10.f1=s;_TA=_T10;}{struct Cyc_String_pa_PrintArg_struct _T10=_TA;void*_T11[3];_T11[0]=& _TE;_T11[1]=& _TF;_T11[2]=& _T10;_TB=Cyc_stderr;_TC=_tag_fat("\"%s\", line %d: %s\n",sizeof(char),19U);_TD=_tag_fat(_T11,sizeof(void*),3);Cyc_fprintf(_TB,_TC,_TD);}}}_TL9:
 Cyc_done(1);}
# 146
void Cyc_fatals(struct _fat_ptr fmt,struct _fat_ptr x1){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;
# 149
struct _fat_ptr buffer;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag=0;
_T4.f1=x1;_T1=_T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T1;void*_T5[1];_T5[0]=& _T4;_T2=fmt;_T3=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_aprintf(_T2,_T3);}buffer=_T0;
Cyc_fatal(buffer);}
# 156
void Cyc_warn(struct _fat_ptr s){struct _fat_ptr _T0;unsigned char*_T1;char*_T2;struct Cyc_String_pa_PrintArg_struct _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc_String_pa_PrintArg_struct _T7;struct Cyc_Int_pa_PrintArg_struct _T8;int _T9;struct Cyc_String_pa_PrintArg_struct _TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;_T0=Cyc_infile;_T1=_T0.curr;_T2=(char*)_T1;
# 160
if(_T2!=0)goto _TLA;{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag=0;
_TE.f1=s;_T3=_TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T3;void*_TF[1];_TF[0]=& _TE;_T4=Cyc_stderr;_T5=_tag_fat("error: %s\n",sizeof(char),11U);_T6=_tag_fat(_TF,sizeof(void*),1);Cyc_fprintf(_T4,_T5,_T6);}goto _TLB;
# 163
_TLA:{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag=0;
_TE.f1=Cyc_infile;_T7=_TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T7;{struct Cyc_Int_pa_PrintArg_struct _TF;_TF.tag=1;_T9=Cyc_lineno;_TF.f1=(unsigned long)_T9;_T8=_TF;}{struct Cyc_Int_pa_PrintArg_struct _TF=_T8;{struct Cyc_String_pa_PrintArg_struct _T10;_T10.tag=0;_T10.f1=s;_TA=_T10;}{struct Cyc_String_pa_PrintArg_struct _T10=_TA;void*_T11[3];_T11[0]=& _TE;_T11[1]=& _TF;_T11[2]=& _T10;_TB=Cyc_stderr;_TC=
# 163
_tag_fat("(\"%s\", line %d) error: %s\n",sizeof(char),27U);_TD=_tag_fat(_T11,sizeof(void*),3);Cyc_fprintf(_TB,_TC,_TD);}}}_TLB:
# 166
 Cyc_failure=1;}
# 171
void Cyc_warni(struct _fat_ptr fmt,int x1){struct _fat_ptr _T0;struct Cyc_Int_pa_PrintArg_struct _T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;
# 174
struct _fat_ptr buffer;{struct Cyc_Int_pa_PrintArg_struct _T5;_T5.tag=1;_T2=x1;
_T5.f1=(unsigned long)_T2;_T1=_T5;}{struct Cyc_Int_pa_PrintArg_struct _T5=_T1;void*_T6[1];_T6[0]=& _T5;_T3=fmt;_T4=_tag_fat(_T6,sizeof(void*),1);_T0=Cyc_aprintf(_T3,_T4);}buffer=_T0;
Cyc_warn(buffer);}
# 181
void Cyc_warns(struct _fat_ptr fmt,struct _fat_ptr x1){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;
# 184
struct _fat_ptr buffer;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag=0;
_T4.f1=x1;_T1=_T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T1;void*_T5[1];_T5[0]=& _T4;_T2=fmt;_T3=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_aprintf(_T2,_T3);}buffer=_T0;
Cyc_warn(buffer);}
# 191
void Cyc_warnss(struct _fat_ptr fmt,struct _fat_ptr x1,struct _fat_ptr x2){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;
# 194
struct _fat_ptr buffer;{struct Cyc_String_pa_PrintArg_struct _T5;_T5.tag=0;
_T5.f1=x1;_T1=_T5;}{struct Cyc_String_pa_PrintArg_struct _T5=_T1;{struct Cyc_String_pa_PrintArg_struct _T6;_T6.tag=0;_T6.f1=x2;_T2=_T6;}{struct Cyc_String_pa_PrintArg_struct _T6=_T2;void*_T7[2];_T7[0]=& _T5;_T7[1]=& _T6;_T3=fmt;_T4=_tag_fat(_T7,sizeof(void*),2);_T0=Cyc_aprintf(_T3,_T4);}}buffer=_T0;
Cyc_warn(buffer);}
# 200
void Cyc_warnsss(struct _fat_ptr fmt,struct _fat_ptr x1,struct _fat_ptr x2,struct _fat_ptr x3){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;
# 203
struct _fat_ptr buffer;{struct Cyc_String_pa_PrintArg_struct _T6;_T6.tag=0;
_T6.f1=x1;_T1=_T6;}{struct Cyc_String_pa_PrintArg_struct _T6=_T1;{struct Cyc_String_pa_PrintArg_struct _T7;_T7.tag=0;_T7.f1=x2;_T2=_T7;}{struct Cyc_String_pa_PrintArg_struct _T7=_T2;{struct Cyc_String_pa_PrintArg_struct _T8;_T8.tag=0;_T8.f1=x3;_T3=_T8;}{struct Cyc_String_pa_PrintArg_struct _T8=_T3;void*_T9[3];_T9[0]=& _T6;_T9[1]=& _T7;_T9[2]=& _T8;_T4=fmt;_T5=_tag_fat(_T9,sizeof(void*),3);_T0=Cyc_aprintf(_T4,_T5);}}}buffer=_T0;
Cyc_warn(buffer);}
# 211
void Cyc_toomany(struct _fat_ptr s){struct _fat_ptr _T0;struct Cyc_Int_pa_PrintArg_struct _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;
# 214
struct _fat_ptr buffer;{struct Cyc_Int_pa_PrintArg_struct _T5;_T5.tag=1;
_T5.f1=32767U;_T1=_T5;}{struct Cyc_Int_pa_PrintArg_struct _T5=_T1;{struct Cyc_String_pa_PrintArg_struct _T6;_T6.tag=0;_T6.f1=s;_T2=_T6;}{struct Cyc_String_pa_PrintArg_struct _T6=_T2;void*_T7[2];_T7[0]=& _T5;_T7[1]=& _T6;_T3=_tag_fat("limit of %d exceeded, too many %s",sizeof(char),34U);_T4=_tag_fat(_T7,sizeof(void*),2);_T0=Cyc_aprintf(_T3,_T4);}}buffer=_T0;
Cyc_fatal(buffer);}
# 221
void Cyc_berror(struct _fat_ptr s){struct Cyc_String_pa_PrintArg_struct _T0;struct Cyc___cycFILE*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;int(*_T4)(void);void*(*_T5)(void);{struct Cyc_String_pa_PrintArg_struct _T6;_T6.tag=0;
# 224
_T6.f1=s;_T0=_T6;}{struct Cyc_String_pa_PrintArg_struct _T6=_T0;void*_T7[1];_T7[0]=& _T6;_T1=Cyc_stderr;_T2=_tag_fat("internal error, %s\n",sizeof(char),20U);_T3=_tag_fat(_T7,sizeof(void*),1);Cyc_fprintf(_T1,_T2,_T3);}_T5=abort;{
int(*_T6)(void)=(int(*)(void))_T5;_T4=_T6;}_T4();}
