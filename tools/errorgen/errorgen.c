#include <cyc_include.h>
struct Cyc___cycFILE;
# 100 "../../library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stdout;
extern struct Cyc___cycFILE*Cyc_stdin;
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 129
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 138
extern int Cyc_fclose(struct Cyc___cycFILE*);
# 149
extern int Cyc_fgetc(struct Cyc___cycFILE*);
# 161
extern struct Cyc___cycFILE*Cyc_fopen(const char*,const char*);
# 163
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 167
extern int Cyc_fputc(int,struct Cyc___cycFILE*);struct Cyc_IntPtr_sa_ScanfArg_struct{int tag;int*f1;};
# 194
extern int Cyc_fscanf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 245
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
# 314 "../../library/std/libc/stdio.h"
extern struct _fat_ptr Cyc_tmpnam(struct _fat_ptr);
# 318
extern int Cyc_vfprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);struct Cyc___cycFILE;
# 51 "../../library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stdout;
extern struct Cyc___cycFILE*Cyc_stdin;
extern struct Cyc___cycFILE*Cyc_stderr;
# 73 "../../library/std/cycboot.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 79
extern int Cyc_fclose(struct Cyc___cycFILE*);
# 90
extern int Cyc_fgetc(struct Cyc___cycFILE*);
# 98
extern struct Cyc___cycFILE*Cyc_fopen(const char*,const char*);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 104
extern int Cyc_fputc(int,struct Cyc___cycFILE*);
# 157 "../../library/std/cycboot.h"
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
# 224 "../../library/std/cycboot.h"
extern int Cyc_vfprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 318 "../../library/std/cycboot.h"
extern int system(const char*);
extern void exit(int);
# 49 "../../library/std/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);struct Cyc_Hashtable_Table;
# 42 "../../library/std/hashtable.h"
extern struct Cyc_Hashtable_Table*Cyc_Hashtable_create(int,int(*)(void*,void*),int(*)(void*));
# 53
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*,void*,void*);
# 59
extern void**Cyc_Hashtable_lookup_opt(struct Cyc_Hashtable_Table*,void*);
# 25 "errorgen.cyc"
static void Cyc_error(struct _fat_ptr fmt,struct _fat_ptr args){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;
# 27
Cyc_vfprintf(Cyc_stderr,fmt,args);_T0=Cyc_stderr;_T1=
_tag_fat("\n",sizeof(char),2U);_T2=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);
exit(1);}struct _tuple3{int f0;int f1;};
# 32
static int Cyc_cmp_pair(struct _tuple3*x,struct _tuple3*y){struct _tuple3*_T0;struct _tuple3*_T1;int _T2;int _T3;_T0=x;{
struct _tuple3 _T4=*_T0;int _T5;int _T6;_T6=_T4.f0;_T5=_T4.f1;{int s1=_T6;int t1=_T5;_T1=y;{
struct _tuple3 _T7=*_T1;int _T8;int _T9;_T9=_T7.f0;_T8=_T7.f1;{int s2=_T9;int t2=_T8;
int s=s1 - s2;
int t=t1 - t2;
if(s!=0)goto _TL0;_T2=t;return _T2;_TL0: _T3=s;
return _T3;}}}}}
# 41
static int Cyc_hash_pair(struct _tuple3*x){struct _tuple3*_T0;int _T1;int _T2;int _T3;_T0=x;{
struct _tuple3 _T4=*_T0;int _T5;int _T6;_T6=_T4.f0;_T5=_T4.f1;{int s=_T6;int t=_T5;
if(!(s << 16))goto _TL2;_T1=1;goto _TL3;_TL2: _T3=t;if(!_T3)goto _TL4;_T2=65535;goto _TL5;_TL4: _T2=0;_TL5: _T1=_T2;_TL3: return _T1;}}}
# 46
int Cyc_main(int argc,struct _fat_ptr argv){struct Cyc_Hashtable_Table*(*_T0)(int,int(*)(struct _tuple3*,struct _tuple3*),int(*)(struct _tuple3*));struct Cyc_Hashtable_Table*(*_T1)(int,int(*)(void*,void*),int(*)(void*));struct _fat_ptr*_T2;struct _fat_ptr _T3;unsigned char*_T4;struct _fat_ptr*_T5;unsigned char*_T6;char*_T7;struct _fat_ptr _T8;unsigned char*_T9;struct _fat_ptr*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;int _TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;unsigned _T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct _fat_ptr _T13;unsigned char*_T14;struct _fat_ptr*_T15;struct _fat_ptr*_T16;struct _fat_ptr*_T17;struct _fat_ptr _T18;unsigned char*_T19;struct _fat_ptr*_T1A;unsigned char*_T1B;char*_T1C;struct _fat_ptr _T1D;unsigned char*_T1E;struct _fat_ptr*_T1F;struct _fat_ptr _T20;unsigned char*_T21;unsigned char*_T22;const char*_T23;struct Cyc_String_pa_PrintArg_struct _T24;struct _fat_ptr _T25;struct _fat_ptr _T26;struct _fat_ptr _T27;struct Cyc_String_pa_PrintArg_struct _T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;struct _fat_ptr _T2C;struct Cyc_String_pa_PrintArg_struct _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;unsigned char*_T31;unsigned char*_T32;const char*_T33;struct Cyc_String_pa_PrintArg_struct _T34;struct _fat_ptr _T35;struct _fat_ptr _T36;int _T37;int _T38;int _T39;int _T3A;struct _fat_ptr _T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;struct Cyc_String_pa_PrintArg_struct _T3E;struct Cyc_String_pa_PrintArg_struct _T3F;struct Cyc_String_pa_PrintArg_struct _T40;struct _fat_ptr _T41;struct _fat_ptr _T42;struct _fat_ptr _T43;unsigned char*_T44;unsigned char*_T45;const char*_T46;struct _fat_ptr _T47;unsigned char*_T48;unsigned char*_T49;const char*_T4A;struct Cyc_String_pa_PrintArg_struct _T4B;struct _fat_ptr _T4C;struct _fat_ptr _T4D;int _T4E;struct Cyc_IntPtr_sa_ScanfArg_struct _T4F;struct Cyc_IntPtr_sa_ScanfArg_struct _T50;struct Cyc___cycFILE*_T51;struct _fat_ptr _T52;struct _fat_ptr _T53;struct Cyc_Int_pa_PrintArg_struct _T54;int _T55;struct _fat_ptr _T56;struct _fat_ptr _T57;struct _tuple3*_T58;struct _tuple3*_T59;int*(*_T5A)(struct Cyc_Hashtable_Table*,struct _tuple3*);void**(*_T5B)(struct Cyc_Hashtable_Table*,void*);struct Cyc_Int_pa_PrintArg_struct _T5C;int*_T5D;int _T5E;struct Cyc_Int_pa_PrintArg_struct _T5F;int _T60;struct _fat_ptr _T61;struct _fat_ptr _T62;void(*_T63)(struct Cyc_Hashtable_Table*,struct _tuple3*,int);void(*_T64)(struct Cyc_Hashtable_Table*,void*,void*);struct Cyc_Int_pa_PrintArg_struct _T65;int _T66;struct Cyc_Int_pa_PrintArg_struct _T67;int _T68;struct _fat_ptr _T69;struct _fat_ptr _T6A;int _T6B;int _T6C;struct _fat_ptr _T6D;struct _fat_ptr _T6E;struct _fat_ptr _T6F;struct _fat_ptr _T70;
struct _fat_ptr compiler=_tag_fat("cyclone",sizeof(char),8U);
struct Cyc___cycFILE*inf=Cyc_stdin;
int lineno=1;_T1=Cyc_Hashtable_create;{
# 51
struct Cyc_Hashtable_Table*(*_T71)(int,int(*)(struct _tuple3*,struct _tuple3*),int(*)(struct _tuple3*))=(struct Cyc_Hashtable_Table*(*)(int,int(*)(struct _tuple3*,struct _tuple3*),int(*)(struct _tuple3*)))_T1;_T0=_T71;}{struct Cyc_Hashtable_Table*table=_T0(101,Cyc_cmp_pair,Cyc_hash_pair);_T2=& argv;
# 53
_fat_ptr_inplace_plus(_T2,sizeof(struct _fat_ptr),1);_T3=argv;_T4=_check_fat_subscript(_T3,sizeof(struct _fat_ptr),0U);_T5=(struct _fat_ptr*)_T4;_T6=_T5->curr;_T7=(char*)_T6;
if(_T7==0)goto _TL6;_T8=argv;_T9=_T8.curr;_TA=(struct _fat_ptr*)_T9;_TB=*_TA;_TC=_tag_fat("-c",sizeof(char),3U);_TD=Cyc_strcmp(_TB,_TC);if(_TD!=0)goto _TL6;_TE=& argv;
_fat_ptr_inplace_plus(_TE,sizeof(struct _fat_ptr),1);_TF=argv;_T10=
_get_fat_size(_TF,sizeof(struct _fat_ptr));if(_T10 >= 1U)goto _TL8;_T11=_tag_fat("missing compiler argument",sizeof(char),26U);_T12=_tag_fat(0U,sizeof(void*),0);Cyc_error(_T11,_T12);goto _TL9;_TL8: _TL9: _T13=argv;_T14=_T13.curr;_T15=(struct _fat_ptr*)_T14;_T16=
_check_null(_T15);compiler=*_T16;_T17=& argv;
_fat_ptr_inplace_plus(_T17,sizeof(struct _fat_ptr),1);goto _TL7;_TL6: _TL7: _T18=argv;_T19=_check_fat_subscript(_T18,sizeof(struct _fat_ptr),0U);_T1A=(struct _fat_ptr*)_T19;_T1B=_T1A->curr;_T1C=(char*)_T1B;
# 60
if(_T1C==0)goto _TLA;_T1D=argv;_T1E=_T1D.curr;_T1F=(struct _fat_ptr*)_T1E;{
struct _fat_ptr infile=*_T1F;_T20=infile;_T21=_untag_fat_ptr_check_bound(_T20,sizeof(char),1U);_T22=_check_null(_T21);_T23=(const char*)_T22;{
# 65
struct Cyc___cycFILE*i=Cyc_fopen(_T23,"r");
if(i!=0)goto _TLC;{struct Cyc_String_pa_PrintArg_struct _T71;_T71.tag=0;_T71.f1=infile;_T24=_T71;}{struct Cyc_String_pa_PrintArg_struct _T71=_T24;void*_T72[1];_T72[0]=& _T71;_T25=_tag_fat("cannot find input file %s",sizeof(char),26U);_T26=_tag_fat(_T72,sizeof(void*),1);Cyc_error(_T25,_T26);}goto _TLD;_TLC: _TLD:
 inf=i;}}goto _TLB;_TLA: _TLB:{struct Cyc_String_pa_PrintArg_struct _T71;_T71.tag=0;_T29=
# 69
_tag_fat(0,0,0);_T71.f1=Cyc_tmpnam(_T29);_T28=_T71;}{struct Cyc_String_pa_PrintArg_struct _T71=_T28;void*_T72[1];_T72[0]=& _T71;_T2A=_tag_fat("%s.cyc",sizeof(char),7U);_T2B=_tag_fat(_T72,sizeof(void*),1);_T27=Cyc_aprintf(_T2A,_T2B);}{struct _fat_ptr tmpname=_T27;{struct Cyc_String_pa_PrintArg_struct _T71;_T71.tag=0;
_T71.f1=tmpname;_T2D=_T71;}{struct Cyc_String_pa_PrintArg_struct _T71=_T2D;void*_T72[1];_T72[0]=& _T71;_T2E=_tag_fat("%s.output",sizeof(char),10U);_T2F=_tag_fat(_T72,sizeof(void*),1);_T2C=Cyc_aprintf(_T2E,_T2F);}{struct _fat_ptr tmpname2=_T2C;
# 76
_TLE: if(1)goto _TLF;else{goto _TL10;}
_TLF: _T30=tmpname;_T31=_untag_fat_ptr_check_bound(_T30,sizeof(char),1U);_T32=_check_null(_T31);_T33=(const char*)_T32;{struct Cyc___cycFILE*tmp=Cyc_fopen(_T33,"w");
if(tmp!=0)goto _TL11;{struct Cyc_String_pa_PrintArg_struct _T71;_T71.tag=0;_T71.f1=tmpname;_T34=_T71;}{struct Cyc_String_pa_PrintArg_struct _T71=_T34;void*_T72[1];_T72[0]=& _T71;_T35=_tag_fat("cannot open file %s",sizeof(char),20U);_T36=_tag_fat(_T72,sizeof(void*),1);Cyc_error(_T35,_T36);}goto _TL12;_TL11: _TL12: {
int c=Cyc_fgetc(inf);
# 81
_TL13: if(c==32)goto _TL14;else{goto _TL18;}_TL18: if(c==9)goto _TL14;else{goto _TL17;}_TL17: if(c==10)goto _TL14;else{goto _TL16;}_TL16: if(c==13)goto _TL14;else{goto _TL15;}
_TL14: if(c!=10)goto _TL19;lineno=lineno + 1;goto _TL1A;_TL19: _TL1A:
 c=Cyc_fgetc(inf);goto _TL13;_TL15: _T37=c;_T38=- 1;
# 86
if(_T37!=_T38)goto _TL1B;Cyc_fclose(inf);Cyc_fclose(tmp);exit(0);goto _TL1C;_TL1B: _TL1C:
# 88
 _TL1D: if(1)goto _TL1E;else{goto _TL1F;}
_TL1E: if(c==47)goto _TL20;_T39=c;_T3A=- 1;
if(_T39!=_T3A)goto _TL22;_T3B=_tag_fat("unexpected end-of-file",sizeof(char),23U);_T3C=_tag_fat(0U,sizeof(void*),0);Cyc_error(_T3B,_T3C);goto _TL23;_TL22: _TL23:
 if(c!=10)goto _TL24;lineno=lineno + 1;goto _TL25;_TL24: _TL25:
 Cyc_fputc(c,tmp);
c=Cyc_fgetc(inf);goto _TL21;
# 95
_TL20: c=Cyc_fgetc(inf);
if(c!=42)goto _TL26;goto _TL1F;_TL26:
 Cyc_fputc(47,tmp);_TL21: goto _TL1D;_TL1F:
# 100
 Cyc_fclose(tmp);{struct Cyc_String_pa_PrintArg_struct _T71;_T71.tag=0;
# 102
_T71.f1=compiler;_T3E=_T71;}{struct Cyc_String_pa_PrintArg_struct _T71=_T3E;{struct Cyc_String_pa_PrintArg_struct _T72;_T72.tag=0;_T72.f1=tmpname;_T3F=_T72;}{struct Cyc_String_pa_PrintArg_struct _T72=_T3F;{struct Cyc_String_pa_PrintArg_struct _T73;_T73.tag=0;_T73.f1=tmpname2;_T40=_T73;}{struct Cyc_String_pa_PrintArg_struct _T73=_T40;void*_T74[3];_T74[0]=& _T71;_T74[1]=& _T72;_T74[2]=& _T73;_T41=
# 101
_tag_fat("%s -c --parsestate -stopafter-parse %s > %s",sizeof(char),44U);_T42=_tag_fat(_T74,sizeof(void*),3);_T3D=Cyc_aprintf(_T41,_T42);}}}{struct _fat_ptr command=_T3D;_T43=command;_T44=_untag_fat_ptr_check_bound(_T43,sizeof(char),1U);_T45=_check_null(_T44);_T46=(const char*)_T45;{
# 108
int j=system(_T46);_T47=tmpname2;_T48=_untag_fat_ptr_check_bound(_T47,sizeof(char),1U);_T49=_check_null(_T48);_T4A=(const char*)_T49;
# 112
tmp=Cyc_fopen(_T4A,"r");
if(tmp!=0)goto _TL28;{struct Cyc_String_pa_PrintArg_struct _T71;_T71.tag=0;_T71.f1=tmpname2;_T4B=_T71;}{struct Cyc_String_pa_PrintArg_struct _T71=_T4B;void*_T72[1];_T72[0]=& _T71;_T4C=_tag_fat("unable to open %s!",sizeof(char),19U);_T4D=_tag_fat(_T72,sizeof(void*),1);Cyc_error(_T4C,_T4D);}goto _TL29;_TL28: _TL29: {
int state;int token;{struct Cyc_IntPtr_sa_ScanfArg_struct _T71;_T71.tag=2;
_T71.f1=& state;_T4F=_T71;}{struct Cyc_IntPtr_sa_ScanfArg_struct _T71=_T4F;{struct Cyc_IntPtr_sa_ScanfArg_struct _T72;_T72.tag=2;_T72.f1=& token;_T50=_T72;}{struct Cyc_IntPtr_sa_ScanfArg_struct _T72=_T50;void*_T73[2];_T73[0]=& _T71;_T73[1]=& _T72;_T51=tmp;_T52=_tag_fat("parse error: state [%d], token [%d]\n",sizeof(char),37U);_T53=_tag_fat(_T73,sizeof(void*),2);_T4E=Cyc_fscanf(_T51,_T52,_T53);}}{int i=_T4E;
if(i==2)goto _TL2A;{struct Cyc_Int_pa_PrintArg_struct _T71;_T71.tag=1;_T55=i;_T71.f1=(unsigned long)_T55;_T54=_T71;}{struct Cyc_Int_pa_PrintArg_struct _T71=_T54;void*_T72[1];_T72[0]=& _T71;_T56=_tag_fat("misread compiler output with fscanf = %d",sizeof(char),41U);_T57=_tag_fat(_T72,sizeof(void*),1);Cyc_error(_T56,_T57);}goto _TL2B;_TL2A: _TL2B:
 Cyc_fclose(tmp);
c=Cyc_fgetc(inf);
# 121
if(c==36)goto _TL2C;token=- 1;goto _TL2D;_TL2C: c=Cyc_fgetc(inf);_TL2D: {
# 124
struct _tuple3*p;p=_cycalloc(sizeof(struct _tuple3));_T58=p;_T58->f0=state;_T59=p;_T59->f1=token;_T5B=Cyc_Hashtable_lookup_opt;{
int*(*_T71)(struct Cyc_Hashtable_Table*,struct _tuple3*)=(int*(*)(struct Cyc_Hashtable_Table*,struct _tuple3*))_T5B;_T5A=_T71;}{int*r=_T5A(table,p);
if(r==0)goto _TL2E;{struct Cyc_Int_pa_PrintArg_struct _T71;_T71.tag=1;_T5D=r;_T5E=*_T5D;
_T71.f1=(unsigned long)_T5E;_T5C=_T71;}{struct Cyc_Int_pa_PrintArg_struct _T71=_T5C;{struct Cyc_Int_pa_PrintArg_struct _T72;_T72.tag=1;_T60=lineno;_T72.f1=(unsigned long)_T60;_T5F=_T72;}{struct Cyc_Int_pa_PrintArg_struct _T72=_T5F;void*_T73[2];_T73[0]=& _T71;_T73[1]=& _T72;_T61=_tag_fat("duplicate parse states for input lines %d and %d\n",sizeof(char),50U);_T62=_tag_fat(_T73,sizeof(void*),2);Cyc_error(_T61,_T62);}}goto _TL2F;
# 129
_TL2E: _T64=Cyc_Hashtable_insert;{void(*_T71)(struct Cyc_Hashtable_Table*,struct _tuple3*,int)=(void(*)(struct Cyc_Hashtable_Table*,struct _tuple3*,int))_T64;_T63=_T71;}_T63(table,p,lineno);_TL2F:{struct Cyc_Int_pa_PrintArg_struct _T71;_T71.tag=1;_T66=state;
# 132
_T71.f1=(unsigned long)_T66;_T65=_T71;}{struct Cyc_Int_pa_PrintArg_struct _T71=_T65;{struct Cyc_Int_pa_PrintArg_struct _T72;_T72.tag=1;_T68=token;_T72.f1=(unsigned long)_T68;_T67=_T72;}{struct Cyc_Int_pa_PrintArg_struct _T72=_T67;void*_T73[2];_T73[0]=& _T71;_T73[1]=& _T72;_T69=_tag_fat("{.state = %d, .token = %d, .msg = \"",sizeof(char),36U);_T6A=_tag_fat(_T73,sizeof(void*),2);Cyc_printf(_T69,_T6A);}}
# 134
_TL30: if(c==32)goto _TL31;else{goto _TL35;}_TL35: if(c==9)goto _TL31;else{goto _TL34;}_TL34: if(c==10)goto _TL31;else{goto _TL33;}_TL33: if(c==13)goto _TL31;else{goto _TL32;}
_TL31: if(c!=10)goto _TL36;lineno=lineno + 1;goto _TL37;_TL36: _TL37:
 c=Cyc_fgetc(inf);goto _TL30;_TL32:
# 139
 _TL38: if(1)goto _TL39;else{goto _TL3A;}
_TL39: if(c==42)goto _TL3B;_T6B=c;_T6C=- 1;
if(_T6B!=_T6C)goto _TL3D;_T6D=_tag_fat("unexpected end-of-file\n",sizeof(char),24U);_T6E=_tag_fat(0U,sizeof(void*),0);Cyc_error(_T6D,_T6E);goto _TL3E;_TL3D: _TL3E:
 if(c!=10)goto _TL3F;lineno=lineno + 1;goto _TL40;_TL3F: _TL40:
 Cyc_fputc(c,Cyc_stdout);
c=Cyc_fgetc(inf);goto _TL3C;
# 146
_TL3B: c=Cyc_fgetc(inf);
if(c!=47)goto _TL41;goto _TL3A;_TL41:
 Cyc_fputc(42,Cyc_stdout);_TL3C: goto _TL38;_TL3A: _T6F=
# 151
_tag_fat("\"},\n",sizeof(char),5U);_T70=_tag_fat(0U,sizeof(void*),0);Cyc_printf(_T6F,_T70);}}}}}}}}goto _TLE;_TL10:;}}}}
