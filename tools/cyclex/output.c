#include <cyc_include.h>

# 98 "../../library/std/core.h"
struct _fat_ptr Cyc_Core_new_string(unsigned);struct Cyc___cycFILE;
# 102 "../../library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 129
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 149
extern int Cyc_fgetc(struct Cyc___cycFILE*);
# 163
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 198
extern int Cyc_fseek(struct Cyc___cycFILE*,long,int);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};struct Cyc_Syntax_Location{int start_pos;int end_pos;int start_line;int start_col;};struct _tuple4{struct _fat_ptr f0;struct _fat_ptr f1;};struct Cyc_Lexgen_Automata_entry{struct _fat_ptr name;struct _fat_ptr type;struct _tuple4*extra_arg;int initial_state;struct Cyc_List_List*actions;};struct Cyc_Compact_Lex_tables{struct _fat_ptr base;struct _fat_ptr backtrk;struct _fat_ptr defaultX;struct _fat_ptr trans;struct _fat_ptr check;};extern char Cyc_Output_Table_overflow[15U];struct Cyc_Output_Table_overflow_exn_struct{char*tag;int f1;};
# 8 "output.cyc"
static struct _fat_ptr Cyc_Output_copy_buffer={(void*)0,(void*)0,(void*)(0 + 0)};
# 18 "output.cyc"
void Cyc_Output_copy_chars(struct Cyc___cycFILE*ic,struct Cyc___cycFILE*oc,int start,int stop){int _T0;char _T1;int _T2;struct Cyc_Int_pa_PrintArg_struct _T3;char _T4;int _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;
int i=start;_TL3: if(i < stop)goto _TL1;else{goto _TL2;}
_TL1: _T0=Cyc_fgetc(ic);{char c=(char)_T0;_T1=c;_T2=(int)_T1;
if(_T2==13)goto _TL4;{struct Cyc_Int_pa_PrintArg_struct _T9;_T9.tag=1;_T4=c;_T5=(int)_T4;
_T9.f1=(unsigned long)_T5;_T3=_T9;}{struct Cyc_Int_pa_PrintArg_struct _T9=_T3;void*_TA[1];_TA[0]=& _T9;_T6=oc;_T7=_tag_fat("%c",sizeof(char),3U);_T8=_tag_fat(_TA,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}goto _TL5;_TL4: _TL5:;}
# 19
i=i + 1;goto _TL3;_TL2:;}
# 26
void Cyc_Output_copy_chunk(struct _fat_ptr sourcename,struct Cyc___cycFILE*ic,struct Cyc___cycFILE*oc,struct Cyc_Syntax_Location*loc){struct Cyc_Syntax_Location*_T0;int _T1;struct Cyc_Syntax_Location*_T2;int _T3;struct Cyc_Int_pa_PrintArg_struct _T4;struct Cyc_Syntax_Location*_T5;int _T6;struct Cyc_String_pa_PrintArg_struct _T7;struct Cyc___cycFILE*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;int _TB;struct Cyc_Syntax_Location*_TC;int _TD;struct Cyc_Int_pa_PrintArg_struct _TE;struct Cyc___cycFILE*_TF;struct _fat_ptr _T10;struct _fat_ptr _T11;struct Cyc___cycFILE*_T12;struct Cyc_Syntax_Location*_T13;int _T14;struct Cyc___cycFILE*_T15;struct Cyc___cycFILE*_T16;struct Cyc_Syntax_Location*_T17;int _T18;struct Cyc_Syntax_Location*_T19;int _T1A;_T0=loc;_T1=_T0->start_pos;_T2=loc;_T3=_T2->end_pos;
if(_T1 >= _T3)goto _TL6;{struct Cyc_Int_pa_PrintArg_struct _T1B;_T1B.tag=1;_T5=loc;_T6=_T5->start_line;
_T1B.f1=(unsigned long)_T6;_T4=_T1B;}{struct Cyc_Int_pa_PrintArg_struct _T1B=_T4;{struct Cyc_String_pa_PrintArg_struct _T1C;_T1C.tag=0;_T1C.f1=sourcename;_T7=_T1C;}{struct Cyc_String_pa_PrintArg_struct _T1C=_T7;void*_T1D[2];_T1D[0]=& _T1B;_T1D[1]=& _T1C;_T8=oc;_T9=_tag_fat("#line %d \"%s\"\n",sizeof(char),15U);_TA=_tag_fat(_T1D,sizeof(void*),2);Cyc_fprintf(_T8,_T9,_TA);}}{
int i=1;_TLB: _TB=i;_TC=loc;_TD=_TC->start_col;if(_TB <= _TD)goto _TL9;else{goto _TLA;}
_TL9:{struct Cyc_Int_pa_PrintArg_struct _T1B;_T1B.tag=1;_T1B.f1=32U;_TE=_T1B;}{struct Cyc_Int_pa_PrintArg_struct _T1B=_TE;void*_T1C[1];_T1C[0]=& _T1B;_TF=oc;_T10=_tag_fat("%c",sizeof(char),3U);_T11=_tag_fat(_T1C,sizeof(void*),1);Cyc_fprintf(_TF,_T10,_T11);}
# 29
i=i + 1;goto _TLB;_TLA:;}_T12=ic;_T13=loc;_T14=_T13->start_pos;
# 31
Cyc_fseek(_T12,_T14,0);_T15=ic;_T16=oc;_T17=loc;_T18=_T17->start_pos;_T19=loc;_T1A=_T19->end_pos;
Cyc_Output_copy_chars(_T15,_T16,_T18,_T1A);goto _TL7;_TL6: _TL7:;}
# 36
void Cyc_Output_output_array(struct Cyc___cycFILE*oc,struct _fat_ptr v){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;int _T3;unsigned _T4;struct _fat_ptr _T5;unsigned _T6;unsigned _T7;struct Cyc_Int_pa_PrintArg_struct _T8;struct _fat_ptr _T9;int _TA;unsigned char*_TB;int*_TC;int _TD;struct Cyc___cycFILE*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc_Int_pa_PrintArg_struct _T11;struct _fat_ptr _T12;unsigned char*_T13;int*_T14;int*_T15;struct _fat_ptr _T16;unsigned _T17;unsigned _T18;int _T19;int _T1A;struct Cyc___cycFILE*_T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;_T0=oc;_T1=
_tag_fat("{",sizeof(char),2U);_T2=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);{
int i=0;_TLF: _T3=i;_T4=(unsigned)_T3;_T5=v;_T6=_get_fat_size(_T5,sizeof(int));_T7=_T6 - 1U;if(_T4 < _T7)goto _TLD;else{goto _TLE;}
_TLD:{struct Cyc_Int_pa_PrintArg_struct _T1E;_T1E.tag=1;_T9=v;_TA=i;_TB=_check_fat_subscript(_T9,sizeof(int),_TA);_TC=(int*)_TB;_TD=*_TC;_T1E.f1=(unsigned long)_TD;_T8=_T1E;}{struct Cyc_Int_pa_PrintArg_struct _T1E=_T8;void*_T1F[1];_T1F[0]=& _T1E;_TE=oc;_TF=_tag_fat("%d,",sizeof(char),4U);_T10=_tag_fat(_T1F,sizeof(void*),1);Cyc_fprintf(_TE,_TF,_T10);}
# 38
i=i + 1;goto _TLF;_TLE:;}{struct Cyc_Int_pa_PrintArg_struct _T1E;_T1E.tag=1;_T12=v;_T13=_T12.curr;_T14=(int*)_T13;_T15=
# 40
_check_null(_T14);_T16=v;_T17=_get_fat_size(_T16,sizeof(int));_T18=_T17 - 1U;_T19=(int)_T18;_T1A=_T15[_T19];_T1E.f1=(unsigned long)_T1A;_T11=_T1E;}{struct Cyc_Int_pa_PrintArg_struct _T1E=_T11;void*_T1F[1];_T1F[0]=& _T1E;_T1B=oc;_T1C=_tag_fat("%d}",sizeof(char),4U);_T1D=_tag_fat(_T1F,sizeof(void*),1);Cyc_fprintf(_T1B,_T1C,_T1D);}}
# 43
void Cyc_Output_output_tables(struct Cyc___cycFILE*oc,struct Cyc_Compact_Lex_tables*tbl){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc___cycFILE*_T3;struct Cyc_Compact_Lex_tables*_T4;struct _fat_ptr _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc___cycFILE*_T9;struct Cyc_Compact_Lex_tables*_TA;struct _fat_ptr _TB;struct Cyc___cycFILE*_TC;struct _fat_ptr _TD;struct _fat_ptr _TE;struct Cyc___cycFILE*_TF;struct Cyc_Compact_Lex_tables*_T10;struct _fat_ptr _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc___cycFILE*_T15;struct Cyc_Compact_Lex_tables*_T16;struct _fat_ptr _T17;struct Cyc___cycFILE*_T18;struct _fat_ptr _T19;struct _fat_ptr _T1A;struct Cyc___cycFILE*_T1B;struct Cyc_Compact_Lex_tables*_T1C;struct _fat_ptr _T1D;struct Cyc___cycFILE*_T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct Cyc___cycFILE*_T21;struct _fat_ptr _T22;struct _fat_ptr _T23;_T0=oc;_T1=
_tag_fat("const int lex_base[] = ",sizeof(char),24U);_T2=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);_T3=oc;_T4=tbl;_T5=_T4->base;Cyc_Output_output_array(_T3,_T5);_T6=oc;_T7=
_tag_fat(";\nconst int lex_backtrk[] = ",sizeof(char),29U);_T8=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T6,_T7,_T8);_T9=oc;_TA=tbl;_TB=_TA->backtrk;Cyc_Output_output_array(_T9,_TB);_TC=oc;_TD=
_tag_fat(";\nconst int lex_default[] = ",sizeof(char),29U);_TE=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TC,_TD,_TE);_TF=oc;_T10=tbl;_T11=_T10->defaultX;Cyc_Output_output_array(_TF,_T11);_T12=oc;_T13=
_tag_fat(";\nconst int lex_trans[] = ",sizeof(char),27U);_T14=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T12,_T13,_T14);_T15=oc;_T16=tbl;_T17=_T16->trans;Cyc_Output_output_array(_T15,_T17);_T18=oc;_T19=
_tag_fat(";\nconst int lex_check[] = ",sizeof(char),27U);_T1A=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T18,_T19,_T1A);_T1B=oc;_T1C=tbl;_T1D=_T1C->check;Cyc_Output_output_array(_T1B,_T1D);_T1E=oc;_T1F=
_tag_fat(";\n",sizeof(char),3U);_T20=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1E,_T1F,_T20);_T21=oc;_T22=
# 108
_tag_fat("     int lex_engine(int start_state, Lexbuf<`a> lbuf) {\n\n       int state, base, backtrk;\n       int c;\n       state = start_state;\n\n       if (state >= 0) {\n\t lbuf->lex_last_pos = lbuf->lex_start_pos = lbuf->lex_curr_pos;\n\t lbuf->lex_last_action = -1;\n       } else {\n\t state = -state-1;\n       }\n       while (true) {\n\t base = lex_base[state];\n\t if (base < 0) return -base-1;\n\t backtrk = lex_backtrk[state];\n\t if (backtrk >= 0) {\n\t   lbuf->lex_last_pos    = lbuf->lex_curr_pos;\n\t   lbuf->lex_last_action = backtrk;\n\t }\n\t if (lbuf->lex_curr_pos >= lbuf->lex_buffer_len) {\n\t   if (!lbuf->lex_eof_reached)\n\t     return -state-1;\n\t   else\n\t     c = 256;\n\t } else {\n\t   c = (int) (lbuf->lex_buffer[lbuf->lex_curr_pos++]);\n\t   if (c==EOF) c=256;\n          else if (c < 0) c = 256 + c;\n\t }\n\t if (lex_check[base+c]==state)\n\t   state = lex_trans[base+c];\n\t else\n\t   state = lex_default[state];\n\t if (state < 0) {\n\t   lbuf->lex_curr_pos = lbuf->lex_last_pos;\n\t   if (lbuf->lex_last_action == -1)\n\t     throw new Error(\"empty token\");\n\t   else {\n\t     return lbuf->lex_last_action;\n\t   }\n\t } else {\n\t   if (c == 256) lbuf->lex_eof_reached = false;\n\t }\n       }\n  }\n",sizeof(char),1157U);_T23=_tag_fat(0U,sizeof(void*),0);
# 51
Cyc_fprintf(_T21,_T22,_T23);}struct _tuple6{int f0;struct Cyc_Syntax_Location*f1;};
# 111
void Cyc_Output_output_entry(struct _fat_ptr sourcename,struct Cyc___cycFILE*ic,struct Cyc___cycFILE*oc,struct Cyc_Lexgen_Automata_entry*e){struct Cyc_Lexgen_Automata_entry*_T0;struct _tuple4*_T1;struct _fat_ptr _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct Cyc_Lexgen_Automata_entry*_T4;struct _tuple4*_T5;struct _tuple4 _T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc_String_pa_PrintArg_struct _TA;struct Cyc_Lexgen_Automata_entry*_TB;struct _tuple4*_TC;struct _tuple4*_TD;struct _tuple4 _TE;struct Cyc_String_pa_PrintArg_struct _TF;struct Cyc_Lexgen_Automata_entry*_T10;struct _tuple4*_T11;struct _tuple4 _T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct Cyc_Lexgen_Automata_entry*_T16;struct _fat_ptr _T17;unsigned char*_T18;char*_T19;struct Cyc_Lexgen_Automata_entry*_T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct Cyc_String_pa_PrintArg_struct _T1D;struct Cyc_Lexgen_Automata_entry*_T1E;struct Cyc_String_pa_PrintArg_struct _T1F;struct Cyc___cycFILE*_T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct Cyc___cycFILE*_T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct Cyc___cycFILE*_T26;struct _fat_ptr _T27;struct _fat_ptr _T28;struct Cyc_Lexgen_Automata_entry*_T29;struct Cyc_List_List*_T2A;void*_T2B;struct Cyc_Int_pa_PrintArg_struct _T2C;int _T2D;struct Cyc___cycFILE*_T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;struct Cyc_List_List*_T31;struct Cyc_String_pa_PrintArg_struct _T32;struct Cyc_Lexgen_Automata_entry*_T33;struct Cyc_String_pa_PrintArg_struct _T34;struct Cyc___cycFILE*_T35;struct _fat_ptr _T36;struct _fat_ptr _T37;struct Cyc___cycFILE*_T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;struct Cyc_String_pa_PrintArg_struct _T3B;struct Cyc_Lexgen_Automata_entry*_T3C;struct _fat_ptr _T3D;unsigned char*_T3E;char*_T3F;struct Cyc_Lexgen_Automata_entry*_T40;struct _fat_ptr _T41;struct _fat_ptr _T42;struct Cyc_String_pa_PrintArg_struct _T43;struct Cyc_Lexgen_Automata_entry*_T44;struct Cyc_String_pa_PrintArg_struct _T45;struct Cyc_String_pa_PrintArg_struct _T46;struct Cyc_Lexgen_Automata_entry*_T47;struct Cyc_Int_pa_PrintArg_struct _T48;struct Cyc_Lexgen_Automata_entry*_T49;int _T4A;struct Cyc_String_pa_PrintArg_struct _T4B;struct Cyc___cycFILE*_T4C;struct _fat_ptr _T4D;struct _fat_ptr _T4E;
# 113
struct _fat_ptr extra_formal=_tag_fat("",sizeof(char),1U);
struct _fat_ptr extra_actual=_tag_fat("",sizeof(char),1U);_T0=e;_T1=_T0->extra_arg;
if(_T1==0)goto _TL10;{struct Cyc_String_pa_PrintArg_struct _T4F;_T4F.tag=0;_T4=e;_T5=_T4->extra_arg;_T6=*_T5;
_T4F.f1=_T6.f1;_T3=_T4F;}{struct Cyc_String_pa_PrintArg_struct _T4F=_T3;void*_T50[1];_T50[0]=& _T4F;_T7=_tag_fat(", %s",sizeof(char),5U);_T8=_tag_fat(_T50,sizeof(void*),1);_T2=Cyc_aprintf(_T7,_T8);}extra_actual=_T2;{struct Cyc_String_pa_PrintArg_struct _T4F;_T4F.tag=0;_TB=e;_TC=_TB->extra_arg;_TD=
_check_null(_TC);_TE=*_TD;_T4F.f1=_TE.f0;_TA=_T4F;}{struct Cyc_String_pa_PrintArg_struct _T4F=_TA;{struct Cyc_String_pa_PrintArg_struct _T50;_T50.tag=0;_T10=e;_T11=_T10->extra_arg;_T12=*_T11;_T50.f1=_T12.f1;_TF=_T50;}{struct Cyc_String_pa_PrintArg_struct _T50=_TF;void*_T51[2];_T51[0]=& _T4F;_T51[1]=& _T50;_T13=_tag_fat(", %s %s",sizeof(char),8U);_T14=_tag_fat(_T51,sizeof(void*),2);_T9=Cyc_aprintf(_T13,_T14);}}extra_formal=_T9;goto _TL11;_TL10: _TL11:{struct Cyc_String_pa_PrintArg_struct _T4F;_T4F.tag=0;_T16=e;_T17=_T16->type;_T18=_T17.curr;_T19=(char*)_T18;
# 120
if(_T19==0)goto _TL12;_T1A=e;_T1B=_T1A->type;_T4F.f1=_T1B;goto _TL13;_TL12: _T1C=_tag_fat("int",sizeof(char),4U);_T4F.f1=_T1C;_TL13: _T15=_T4F;}{struct Cyc_String_pa_PrintArg_struct _T4F=_T15;{struct Cyc_String_pa_PrintArg_struct _T50;_T50.tag=0;_T1E=e;
_T50.f1=_T1E->name;_T1D=_T50;}{struct Cyc_String_pa_PrintArg_struct _T50=_T1D;{struct Cyc_String_pa_PrintArg_struct _T51;_T51.tag=0;
_T51.f1=extra_formal;_T1F=_T51;}{struct Cyc_String_pa_PrintArg_struct _T51=_T1F;void*_T52[3];_T52[0]=& _T4F;_T52[1]=& _T50;_T52[2]=& _T51;_T20=oc;_T21=
# 119
_tag_fat("%s %s_rec(Lexbuf<`a> lexbuf, int lexstate%s) {\n",sizeof(char),48U);_T22=_tag_fat(_T52,sizeof(void*),3);Cyc_fprintf(_T20,_T21,_T22);}}}_T23=oc;_T24=
# 125
_tag_fat("  lexstate = lex_engine(lexstate,lexbuf);\n",sizeof(char),43U);_T25=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T23,_T24,_T25);_T26=oc;_T27=
_tag_fat("  switch (lexstate) {\n",sizeof(char),23U);_T28=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T26,_T27,_T28);_T29=e;{
struct Cyc_List_List*actions=_T29->actions;_TL17: if(actions!=0)goto _TL15;else{goto _TL16;}
_TL15: _T2A=actions;_T2B=_T2A->hd;{struct _tuple6*_T4F=(struct _tuple6*)_T2B;struct Cyc_Syntax_Location*_T50;int _T51;{struct _tuple6 _T52=*_T4F;_T51=_T52.f0;_T50=_T52.f1;}{int num=_T51;struct Cyc_Syntax_Location*loc=_T50;{struct Cyc_Int_pa_PrintArg_struct _T52;_T52.tag=1;_T2D=num;
_T52.f1=(unsigned long)_T2D;_T2C=_T52;}{struct Cyc_Int_pa_PrintArg_struct _T52=_T2C;void*_T53[1];_T53[0]=& _T52;_T2E=oc;_T2F=_tag_fat("\ncase %d: \n",sizeof(char),12U);_T30=_tag_fat(_T53,sizeof(void*),1);Cyc_fprintf(_T2E,_T2F,_T30);}
Cyc_Output_copy_chunk(sourcename,ic,oc,loc);}}_T31=actions;
# 127
actions=_T31->tl;goto _TL17;_TL16:;}{struct Cyc_String_pa_PrintArg_struct _T4F;_T4F.tag=0;_T33=e;
# 136
_T4F.f1=_T33->name;_T32=_T4F;}{struct Cyc_String_pa_PrintArg_struct _T4F=_T32;{struct Cyc_String_pa_PrintArg_struct _T50;_T50.tag=0;
_T50.f1=extra_actual;_T34=_T50;}{struct Cyc_String_pa_PrintArg_struct _T50=_T34;void*_T51[2];_T51[0]=& _T4F;_T51[1]=& _T50;_T35=oc;_T36=
# 135
_tag_fat(" default:\n   lexbuf->refill_buff(lexbuf);\n   return %s_rec(lexbuf, lexstate%s);\n",sizeof(char),81U);_T37=_tag_fat(_T51,sizeof(void*),2);Cyc_fprintf(_T35,_T36,_T37);}}_T38=oc;_T39=
# 138
_tag_fat("  }\n throw new Error(\"some action didn't return!\");\n}\n",sizeof(char),55U);_T3A=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T38,_T39,_T3A);{struct Cyc_String_pa_PrintArg_struct _T4F;_T4F.tag=0;_T3C=e;_T3D=_T3C->type;_T3E=_T3D.curr;_T3F=(char*)_T3E;
# 140
if(_T3F==0)goto _TL18;_T40=e;_T41=_T40->type;_T4F.f1=_T41;goto _TL19;_TL18: _T42=_tag_fat("int",sizeof(char),4U);_T4F.f1=_T42;_TL19: _T3B=_T4F;}{struct Cyc_String_pa_PrintArg_struct _T4F=_T3B;{struct Cyc_String_pa_PrintArg_struct _T50;_T50.tag=0;_T44=e;
_T50.f1=_T44->name;_T43=_T50;}{struct Cyc_String_pa_PrintArg_struct _T50=_T43;{struct Cyc_String_pa_PrintArg_struct _T51;_T51.tag=0;_T51.f1=extra_formal;_T45=_T51;}{struct Cyc_String_pa_PrintArg_struct _T51=_T45;{struct Cyc_String_pa_PrintArg_struct _T52;_T52.tag=0;_T47=e;
_T52.f1=_T47->name;_T46=_T52;}{struct Cyc_String_pa_PrintArg_struct _T52=_T46;{struct Cyc_Int_pa_PrintArg_struct _T53;_T53.tag=1;_T49=e;_T4A=_T49->initial_state;_T53.f1=(unsigned long)_T4A;_T48=_T53;}{struct Cyc_Int_pa_PrintArg_struct _T53=_T48;{struct Cyc_String_pa_PrintArg_struct _T54;_T54.tag=0;_T54.f1=extra_actual;_T4B=_T54;}{struct Cyc_String_pa_PrintArg_struct _T54=_T4B;void*_T55[6];_T55[0]=& _T4F;_T55[1]=& _T50;_T55[2]=& _T51;_T55[3]=& _T52;_T55[4]=& _T53;_T55[5]=& _T54;_T4C=oc;_T4D=
# 139
_tag_fat("%s %s(Lexbuf<`a> lexbuf%s) { return %s_rec(lexbuf,%d%s); }\n",sizeof(char),60U);_T4E=_tag_fat(_T55,sizeof(void*),6);Cyc_fprintf(_T4C,_T4D,_T4E);}}}}}}}char Cyc_Output_Table_overflow[15U]="Table_overflow";
# 147
void Cyc_Output_output_lexdef(struct _fat_ptr sourcename,struct Cyc___cycFILE*ic,struct Cyc___cycFILE*oc,struct Cyc_Syntax_Location*header,struct Cyc_Compact_Lex_tables*tables,struct Cyc_List_List*entry_points,struct Cyc_Syntax_Location*trailer){struct Cyc_Int_pa_PrintArg_struct _T0;struct Cyc_Compact_Lex_tables*_T1;struct _fat_ptr _T2;unsigned _T3;int _T4;struct Cyc_Int_pa_PrintArg_struct _T5;struct Cyc_Compact_Lex_tables*_T6;struct _fat_ptr _T7;unsigned _T8;int _T9;struct Cyc_Int_pa_PrintArg_struct _TA;struct Cyc_Compact_Lex_tables*_TB;struct _fat_ptr _TC;unsigned _TD;struct Cyc_Compact_Lex_tables*_TE;struct _fat_ptr _TF;unsigned _T10;unsigned _T11;struct Cyc_Compact_Lex_tables*_T12;struct _fat_ptr _T13;unsigned _T14;unsigned _T15;struct Cyc_Compact_Lex_tables*_T16;struct _fat_ptr _T17;unsigned _T18;unsigned _T19;struct Cyc_Compact_Lex_tables*_T1A;struct _fat_ptr _T1B;unsigned _T1C;unsigned _T1D;unsigned _T1E;int _T1F;struct Cyc___cycFILE*_T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct Cyc_Compact_Lex_tables*_T23;struct _fat_ptr _T24;unsigned _T25;struct Cyc_Output_Table_overflow_exn_struct*_T26;void*_T27;struct Cyc___cycFILE*_T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;struct Cyc___cycFILE*_T2C;struct Cyc___cycFILE*_T2D;struct Cyc_List_List*_T2E;void*_T2F;struct Cyc_Lexgen_Automata_entry*_T30;struct Cyc_List_List*_T31;struct Cyc___cycFILE*_T32;struct _fat_ptr _T33;struct _fat_ptr _T34;
# 154
Cyc_Output_copy_buffer=Cyc_Core_new_string(1024U);{struct Cyc_Int_pa_PrintArg_struct _T35;_T35.tag=1;_T1=tables;_T2=_T1->base;_T3=
# 156
_get_fat_size(_T2,sizeof(int));_T4=(int)_T3;_T35.f1=(unsigned long)_T4;_T0=_T35;}{struct Cyc_Int_pa_PrintArg_struct _T35=_T0;{struct Cyc_Int_pa_PrintArg_struct _T36;_T36.tag=1;_T6=tables;_T7=_T6->trans;_T8=
_get_fat_size(_T7,sizeof(int));_T9=(int)_T8;_T36.f1=(unsigned long)_T9;_T5=_T36;}{struct Cyc_Int_pa_PrintArg_struct _T36=_T5;{struct Cyc_Int_pa_PrintArg_struct _T37;_T37.tag=1;_TB=tables;_TC=_TB->base;_TD=
_get_fat_size(_TC,sizeof(int));_TE=tables;_TF=_TE->backtrk;_T10=_get_fat_size(_TF,sizeof(int));_T11=_TD + _T10;_T12=tables;_T13=_T12->defaultX;_T14=
_get_fat_size(_T13,sizeof(int));_T15=_T11 + _T14;_T16=tables;_T17=_T16->trans;_T18=_get_fat_size(_T17,sizeof(int));_T19=_T15 + _T18;_T1A=tables;_T1B=_T1A->check;_T1C=
_get_fat_size(_T1B,sizeof(int));_T1D=_T19 + _T1C;_T1E=2U * _T1D;_T1F=(int)_T1E;
# 158
_T37.f1=(unsigned long)_T1F;_TA=_T37;}{struct Cyc_Int_pa_PrintArg_struct _T37=_TA;void*_T38[3];_T38[0]=& _T35;_T38[1]=& _T36;_T38[2]=& _T37;_T20=Cyc_stderr;_T21=
# 155
_tag_fat("%d states, %d transitions, table size %d bytes\n",sizeof(char),48U);_T22=_tag_fat(_T38,sizeof(void*),3);Cyc_fprintf(_T20,_T21,_T22);}}}_T23=tables;_T24=_T23->trans;_T25=
# 161
_get_fat_size(_T24,sizeof(int));if(_T25 <= 32768U)goto _TL1A;{struct Cyc_Output_Table_overflow_exn_struct*_T35=_cycalloc(sizeof(struct Cyc_Output_Table_overflow_exn_struct));_T35->tag=Cyc_Output_Table_overflow;
_T35->f1=0;_T26=(struct Cyc_Output_Table_overflow_exn_struct*)_T35;}_T27=(void*)_T26;_throw(_T27);goto _TL1B;_TL1A: _TL1B:
 Cyc_Output_copy_chunk(sourcename,ic,oc,header);_T28=oc;_T29=
_tag_fat("using Lexing {\n\n",sizeof(char),17U);_T2A=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T28,_T29,_T2A);
Cyc_Output_output_tables(oc,tables);
_TL1F: if(entry_points!=0)goto _TL1D;else{goto _TL1E;}
_TL1D: _T2B=sourcename;_T2C=ic;_T2D=oc;_T2E=entry_points;_T2F=_T2E->hd;_T30=(struct Cyc_Lexgen_Automata_entry*)_T2F;Cyc_Output_output_entry(_T2B,_T2C,_T2D,_T30);_T31=entry_points;
# 166
entry_points=_T31->tl;goto _TL1F;_TL1E: _T32=oc;_T33=
# 168
_tag_fat("\n}\n",sizeof(char),4U);_T34=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T32,_T33,_T34);
Cyc_Output_copy_chunk(sourcename,ic,oc,trailer);}
