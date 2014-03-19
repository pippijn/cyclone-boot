#include <cyc_include.h>
 extern char Cyc_Core_Invalid_argument[17U];struct Cyc_Core_Invalid_argument_exn_struct{char*tag;struct _fat_ptr f1;};extern char Cyc_Core_Failure[8U];struct Cyc_Core_Failure_exn_struct{char*tag;struct _fat_ptr f1;};
# 321 "../../library/stdlib/core.h"
void Cyc_Core_rethrow(void*);
# 325
const char*Cyc_Core_get_exn_name(void*);
# 327
const char*Cyc_Core_get_exn_filename (void);
# 334
int Cyc_Core_get_exn_lineno (void);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 54 "../../library/stdlib/list.h"
extern struct Cyc_List_List*Cyc_List_list(struct _fat_ptr);
# 76
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);
# 172
extern struct Cyc_List_List*Cyc_List_rev(struct Cyc_List_List*);
# 178
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);
# 184
extern struct Cyc_List_List*Cyc_List_append(struct Cyc_List_List*,struct Cyc_List_List*);
# 391
extern struct Cyc_List_List*Cyc_List_filter(int(*)(void*),struct Cyc_List_List*);struct Cyc_Arg_Unit_spec_Arg_Spec_struct{int tag;void(*f1)(void);};struct Cyc_Arg_Flag_spec_Arg_Spec_struct{int tag;void(*f1)(struct _fat_ptr);};struct Cyc_Arg_Set_spec_Arg_Spec_struct{int tag;int*f1;};struct Cyc_Arg_Clear_spec_Arg_Spec_struct{int tag;int*f1;};struct Cyc_Arg_String_spec_Arg_Spec_struct{int tag;void(*f1)(struct _fat_ptr);};struct Cyc_Arg_Int_spec_Arg_Spec_struct{int tag;void(*f1)(int);};
# 66 "../../library/stdlib/arg.h"
extern void Cyc_Arg_usage(struct Cyc_List_List*,struct _fat_ptr);
# 69
extern int Cyc_Arg_current;
# 71
extern void Cyc_Arg_parse(struct Cyc_List_List*,void(*)(struct _fat_ptr),int(*)(struct _fat_ptr),struct _fat_ptr,struct _fat_ptr);struct Cyc___cycFILE;
# 51 "../../library/stdlib/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stdout;
# 53
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 73
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 79
extern int Cyc_fclose(struct Cyc___cycFILE*);
# 88
extern int Cyc_fflush(struct Cyc___cycFILE*);
# 98
extern struct Cyc___cycFILE*Cyc_fopen(const char*,const char*);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 157 "../../library/stdlib/cycboot.h"
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
# 167
extern int remove(const char*);
# 271 "../../library/stdlib/cycboot.h"
extern struct Cyc___cycFILE*Cyc_file_open(struct _fat_ptr,struct _fat_ptr);
extern void Cyc_file_close(struct Cyc___cycFILE*);
# 313
extern char*getenv(const char*);
# 318
extern int system(const char*);
extern void exit(int);struct Cyc_timeval{long tv_sec;long tv_usec;};
# 328
extern int gettimeofday(struct Cyc_timeval*,void*);
# 38 "../../library/stdlib/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 49 "../../library/stdlib/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
# 51
extern int Cyc_strncmp(struct _fat_ptr,struct _fat_ptr,unsigned long);
# 62
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
# 64
extern struct _fat_ptr Cyc_strconcat_l(struct Cyc_List_List*);
# 66
extern struct _fat_ptr Cyc_str_sepstr(struct Cyc_List_List*,struct _fat_ptr);
# 105 "../../library/stdlib/string.h"
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
# 110
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
# 121
extern struct _fat_ptr Cyc_strchr(struct _fat_ptr,char);
# 30 "../../library/stdlib/filename.h"
extern struct _fat_ptr Cyc_Filename_concat(struct _fat_ptr,struct _fat_ptr);
# 34
extern struct _fat_ptr Cyc_Filename_chop_extension(struct _fat_ptr);
# 40
extern struct _fat_ptr Cyc_Filename_dirname(struct _fat_ptr);
# 43
extern struct _fat_ptr Cyc_Filename_basename(struct _fat_ptr);
# 46
extern int Cyc_Filename_check_suffix(struct _fat_ptr,struct _fat_ptr);
# 48 "../../library/stdlib/position.h"
extern int Cyc_Position_use_gcc_style_location;
# 13 "../../library/compiler/bansheeif.h"
int Cyc_BansheeIf_banshee_init (void);
# 29
int Cyc_BansheeIf_discharge_implications (void);
# 25 "../../library/compiler/parse.h"
struct Cyc_List_List*Cyc_Parse_parse_file(struct Cyc___cycFILE*);extern char Cyc_Parse_Exit[5U];struct Cyc_Parse_Exit_exn_struct{char*tag;};struct Cyc_Absynpp_Params{int expand_typedefs;int qvar_to_Cids;int add_cyc_prefix;int to_VC;int decls_first;int rewrite_temp_tvars;int print_all_tvars;int print_all_kinds;int print_all_effects;int print_using_stmts;int print_externC_stmts;int print_full_evars;int print_zeroterm;int generate_line_directives;int use_curr_namespace;struct Cyc_List_List*curr_namespace;int gen_clean_cyclone;};
# 54 "../../library/compiler/absynpp.h"
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params*);
# 56
extern struct Cyc_Absynpp_Params Cyc_Absynpp_cyc_params_r;extern struct Cyc_Absynpp_Params Cyc_Absynpp_cyci_params_r;extern struct Cyc_Absynpp_Params Cyc_Absynpp_c_params_r;extern struct Cyc_Absynpp_Params Cyc_Absynpp_tc_params_r;
# 58
void Cyc_Absynpp_decllist2file(struct Cyc_List_List*,struct Cyc___cycFILE*);
# 26 "../../library/compiler/absyndump.h"
void Cyc_Absyndump_set_params(struct Cyc_Absynpp_Params*);
void Cyc_Absyndump_dumpdecllist2file(struct Cyc_List_List*,struct Cyc___cycFILE*);
void Cyc_Absyndump_dump_interface(struct Cyc_List_List*,struct Cyc___cycFILE*);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};
# 29 "../../library/compiler/binding.h"
void Cyc_Binding_resolve_all(struct Cyc_List_List*);struct Cyc_Tcenv_Genv{struct Cyc_Dict_Dict aggrdecls;struct Cyc_Dict_Dict datatypedecls;struct Cyc_Dict_Dict enumdecls;struct Cyc_Dict_Dict typedefs;struct Cyc_Dict_Dict ordinaries;};struct Cyc_Tcenv_Fenv;struct Cyc_Tcenv_Tenv{struct Cyc_List_List*ns;struct Cyc_Tcenv_Genv*ae;struct Cyc_Tcenv_Fenv*le;int allow_valueof: 1;int in_extern_c_include: 1;int in_tempest: 1;int tempest_generalize: 1;int in_extern_c_inc_repeat: 1;};
# 68 "../../library/compiler/tcenv.h"
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_tc_init (void);
# 38 "../../library/compiler/currgn.h"
void Cyc_CurRgn_adjust_all(struct Cyc_List_List*);
# 29 "../../library/compiler/tc.h"
void Cyc_Tc_tc(struct Cyc_Tcenv_Tenv*,int,struct Cyc_List_List*);
# 33
struct Cyc_List_List*Cyc_Tc_treeshake(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*);struct Cyc_Hashtable_Table;
# 35 "../../library/compiler/toc.h"
struct Cyc_List_List*Cyc_Toc_toc(struct Cyc_Hashtable_Table*,struct Cyc_List_List*);
# 48
void Cyc_Toc_finish (void);
# 26 "../../library/compiler/remove_aggregates.h"
struct Cyc_List_List*Cyc_RemoveAggrs_remove_aggrs(struct Cyc_List_List*);
# 25 "../../library/compiler/remove_labels.h"
struct Cyc_List_List*Cyc_RemoveLabels_remove_unused_labels(struct Cyc_List_List*);
# 29 "../../library/compiler/rename_temps.h"
struct Cyc_List_List*Cyc_RenameTemps_rename(struct Cyc_List_List*);
# 29 "../../library/compiler/remove_casts.h"
struct Cyc_List_List*Cyc_RemoveCasts_remove_casts(struct Cyc_List_List*);
# 27 "../../library/compiler/toseqc.h"
extern struct Cyc_List_List*Cyc_Toseqc_toseqc(struct Cyc_List_List*);
# 27 "../../library/compiler/tovc.h"
extern int Cyc_Tovc_elim_array_initializers;
struct Cyc_List_List*Cyc_Tovc_tovc(struct Cyc_List_List*);
# 29 "../../library/compiler/low_treeshake.h"
struct Cyc_List_List*Cyc_LowTreeShake_shake(struct Cyc_List_List*);struct Cyc_JumpAnalysis_Jump_Anal_Result{struct Cyc_Hashtable_Table*pop_tables;struct Cyc_Hashtable_Table*succ_tables;struct Cyc_Hashtable_Table*pat_pop_tables;};
# 46 "../../library/compiler/jump_analysis.h"
struct Cyc_JumpAnalysis_Jump_Anal_Result*Cyc_JumpAnalysis_jump_analysis(struct Cyc_List_List*);
# 32 "../../library/compiler/new_control_flow.h"
void Cyc_NewControlFlow_cf_check(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*);
# 40 "../../library/compiler/insert_checks.h"
void Cyc_InsertChecks_insert_checks(struct Cyc_List_List*,struct Cyc_JumpAnalysis_Jump_Anal_Result*,int);struct Cyc_Interface_I;
# 36 "../../library/compiler/interface.h"
struct Cyc_Interface_I*Cyc_Interface_empty (void);
# 45 "../../library/compiler/interface.h"
struct Cyc_Interface_I*Cyc_Interface_final (void);
# 49
struct Cyc_Interface_I*Cyc_Interface_extract(struct Cyc_Tcenv_Genv*,struct Cyc_List_List*);struct _tuple11{struct _fat_ptr f0;struct _fat_ptr f1;};
# 57
int Cyc_Interface_is_subinterface(struct Cyc_Interface_I*,struct Cyc_Interface_I*,struct _tuple11*);
# 72 "../../library/compiler/interface.h"
struct Cyc_Interface_I*Cyc_Interface_get_and_merge_list(struct Cyc_Interface_I*(*)(void*),struct Cyc_List_List*,struct Cyc_List_List*);
# 78
struct Cyc_Interface_I*Cyc_Interface_parse(struct Cyc___cycFILE*);
# 81
void Cyc_Interface_save(struct Cyc_Interface_I*,struct Cyc___cycFILE*);
# 84
struct Cyc_Interface_I*Cyc_Interface_load(struct Cyc___cycFILE*);
# 27 "../../library/compiler/warn.h"
extern void Cyc_Warn_reset(struct _fat_ptr);
# 31
extern int Cyc_Warn_max_errors;
# 33
extern int Cyc_Warn_error_p (void);
# 37
void Cyc_Warn_warn(unsigned,struct _fat_ptr,struct _fat_ptr);
# 39
void Cyc_Warn_flush_warnings (void);
# 26 "../../library/compiler/flags.h"
extern int Cyc_Flags_verbose;
# 30
extern int Cyc_Flags_porting_c_code;
# 34
extern int Cyc_Flags_no_regions;
# 36
extern int Cyc_Flags_no_reaps;
# 38
extern int Cyc_Flags_infstats;
extern int Cyc_Flags_override_fat;
extern int Cyc_Flags_interproc;
extern int Cyc_Flags_resolve;
extern int Cyc_Flags_no_merge;
extern int Cyc_Flags_tags;
# 46
extern int Cyc_Flags_no_register;
# 49
extern int Cyc_Flags_warn_override;
# 59
extern int Cyc_Flags_warn_alias_coerce;
# 63
extern int Cyc_Flags_warn_region_coerce;
# 66
extern int Cyc_Flags_warn_lose_unique;
# 70
extern int Cyc_Flags_warn_bounds_checks;
# 74
extern int Cyc_Flags_warn_all_null_deref;
# 77
extern int Cyc_Flags_warn_assert;
# 81
extern int Cyc_Flags_noexpand_r;
# 86
extern int Cyc_Flags_allpaths;
# 92
extern int Cyc_Flags_print_unprovable;
# 98
extern int Cyc_Flags_tovc_r;
enum Cyc_Flags_C_Compilers{Cyc_Flags_Gcc_c =0U,Cyc_Flags_Vc_c =1U};
# 103
extern enum Cyc_Flags_C_Compilers Cyc_Flags_c_compiler;
# 113 "../../library/compiler/flags.h"
enum Cyc_Flags_Cyclone_Passes{Cyc_Flags_Cpp =0U,Cyc_Flags_Parsing =1U,Cyc_Flags_Binding =2U,Cyc_Flags_CurrentRegion =3U,Cyc_Flags_TypeChecking =4U,Cyc_Flags_Jumps =5U,Cyc_Flags_FlowAnalysis =6U,Cyc_Flags_VCGen =7U,Cyc_Flags_CheckInsertion =8U,Cyc_Flags_Toc =9U,Cyc_Flags_AggregateRemoval =10U,Cyc_Flags_LabelRemoval =11U,Cyc_Flags_TempRename =12U,Cyc_Flags_CastRemoval =13U,Cyc_Flags_EvalOrder =14U,Cyc_Flags_CCompiler =15U,Cyc_Flags_AllPasses =16U};
# 132
extern enum Cyc_Flags_Cyclone_Passes Cyc_Flags_stop_after_pass;
# 134
void Cyc_Flags_set_cpponly (void);
void Cyc_Flags_set_parseonly (void);
void Cyc_Flags_set_crgnonly (void);
void Cyc_Flags_set_tconly (void);
void Cyc_Flags_set_cfonly (void);
void Cyc_Flags_set_toconly (void);
# 145
extern int Cyc_Flags_compile_for_boot;
# 149
extern int Cyc_Flags_print_parser_state_and_token;
# 153
extern unsigned Cyc_Flags_max_vc_summary;
# 157
extern unsigned Cyc_Flags_max_vc_paths;
# 162
extern unsigned Cyc_Flags_max_vc_term_size;
# 164
void Cyc_Flags_set_all_warnings (void);
# 168
extern int Cyc_Flags_better_widen;
# 29 "../../library/compiler/specsfile.h"
extern struct _fat_ptr Cyc_Specsfile_target_arch;
extern void Cyc_Specsfile_set_target_arch(struct _fat_ptr);
extern struct Cyc_List_List*Cyc_Specsfile_cyclone_exec_path;
extern void Cyc_Specsfile_add_cyclone_exec_path(struct _fat_ptr);
# 34
extern struct Cyc_List_List*Cyc_Specsfile_read_specs(struct _fat_ptr);
extern struct _fat_ptr Cyc_Specsfile_split_specs(struct _fat_ptr);
extern struct _fat_ptr Cyc_Specsfile_get_spec(struct Cyc_List_List*,struct _fat_ptr);
# 38
extern struct _fat_ptr Cyc_Specsfile_def_lib_path;
extern struct _fat_ptr Cyc_Specsfile_parse_b(struct Cyc_List_List*,void(*)(struct _fat_ptr),int(*)(struct _fat_ptr),struct _fat_ptr,struct _fat_ptr);
# 44
extern struct _fat_ptr Cyc_Specsfile_find_in_arch_path(struct _fat_ptr);
extern struct _fat_ptr Cyc_Specsfile_find_in_exec_path(struct _fat_ptr);
# 38 "../../library/compiler/cifc.h"
void Cyc_Cifc_set_inst_tvar (void);
# 9 "interproc.h"
void Cyc_Interproc_set_inference_prefix(struct _fat_ptr);
void Cyc_Interproc_dump_tags(struct _fat_ptr,struct Cyc_List_List*);
void Cyc_Interproc_close_tags_file (void);
struct Cyc_List_List*Cyc_Interproc_resolve_all(struct _fat_ptr,struct Cyc_List_List*);
struct Cyc_List_List*Cyc_Interproc_binding_cvar_resolution(struct Cyc_List_List*);
void Cyc_Interproc_emit_decls(struct _fat_ptr,struct Cyc_List_List*);
void Cyc_Interproc_inference_statistics (void);
# 31 "../../library/compiler/lower.h"
extern struct Cyc_List_List*Cyc_Lower_lower(struct Cyc_List_List*);
# 51 "cyclone.cyc"
void Cyc_Port_port(struct Cyc_List_List*);
# 54
void Cyc_Lex_pos_init (void);
void Cyc_Lex_lex_init(int);
# 62
static int Cyc_pp_r=0;
static int Cyc_noshake_r=0;
static int Cyc_noprint_r=0;
static int Cyc_ic_r=0;
static int Cyc_stop_after_objectfile_r=0;
static int Cyc_stop_after_asmfile_r=0;
static int Cyc_elim_se_r=0;
static int Cyc_save_temps_r=0;
static int Cyc_save_c_r=0;
static int Cyc_nogc_r=0;
static int Cyc_pa_r=0;
static int Cyc_pg_r=0;
static int Cyc_nocheck_r=0;
static int Cyc_add_cyc_namespace_r=1;
static int Cyc_generate_line_directives_r=1;
static int Cyc_print_full_evars_r=0;
static int Cyc_print_all_tvars_r=0;
static int Cyc_print_all_kinds_r=0;
static int Cyc_print_all_effects_r=0;
static int Cyc_generate_interface_r=0;
static int Cyc_toseqc_r=1;
static int Cyc_pthread_r=0;
static int Cyc_vcgen_r=1;
static int Cyc_nolower_r=0;
# 88
static struct Cyc_List_List*Cyc_ccargs=0;
static void Cyc_add_ccarg(struct _fat_ptr s){struct Cyc_List_List*_T0;struct _fat_ptr*_T1;{struct Cyc_List_List*_T2=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T3=_cycalloc(sizeof(struct _fat_ptr));
*_T3=s;_T1=(struct _fat_ptr*)_T3;}_T2->hd=_T1;_T2->tl=Cyc_ccargs;_T0=(struct Cyc_List_List*)_T2;}Cyc_ccargs=_T0;}
# 96
void Cyc_set_c_compiler(struct _fat_ptr s){struct _fat_ptr _T0;struct _fat_ptr _T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;int _T6;struct _fat_ptr _T7;_T0=s;_T1=
_tag_fat("vc",sizeof(char),3U);_T2=Cyc_strcmp(_T0,_T1);if(_T2!=0)goto _TL0;
Cyc_Flags_c_compiler=1U;_T3=
_tag_fat("-DVC_C",sizeof(char),7U);Cyc_add_ccarg(_T3);goto _TL1;
# 101
_TL0: _T4=s;_T5=_tag_fat("gcc",sizeof(char),4U);_T6=Cyc_strcmp(_T4,_T5);if(_T6!=0)goto _TL2;
Cyc_Flags_c_compiler=0U;_T7=
_tag_fat("-DGCC_C",sizeof(char),8U);Cyc_add_ccarg(_T7);goto _TL3;_TL2: _TL3: _TL1:;}
# 108
void Cyc_set_port_c_code (void){
Cyc_Flags_porting_c_code=1;
Cyc_Warn_max_errors=65535;
Cyc_save_c_r=1;
Cyc_Flags_set_parseonly();}
# 115
static struct _fat_ptr*Cyc_output_file=0;
static void Cyc_set_output_file(struct _fat_ptr s){struct _fat_ptr*_T0;{struct _fat_ptr*_T1=_cycalloc(sizeof(struct _fat_ptr));
*_T1=s;_T0=(struct _fat_ptr*)_T1;}Cyc_output_file=_T0;}
# 120
static struct _fat_ptr Cyc_specified_interface={(void*)0,(void*)0,(void*)(0 + 0)};
static void Cyc_set_specified_interface(struct _fat_ptr s){
Cyc_specified_interface=s;}
# 130
extern char*Cdef_lib_path;
extern char*Carch;
extern char*Cversion;static char _TmpG0[1U]="";
# 135
static struct _fat_ptr Cyc_cpp={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 1U};
static void Cyc_set_cpp(struct _fat_ptr s){
Cyc_cpp=s;}
# 140
static struct Cyc_List_List*Cyc_cppargs=0;
static void Cyc_add_cpparg(struct _fat_ptr s){struct Cyc_List_List*_T0;struct _fat_ptr*_T1;{struct Cyc_List_List*_T2=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T3=_cycalloc(sizeof(struct _fat_ptr));
*_T3=s;_T1=(struct _fat_ptr*)_T3;}_T2->hd=_T1;_T2->tl=Cyc_cppargs;_T0=(struct Cyc_List_List*)_T2;}Cyc_cppargs=_T0;}
# 146
static void Cyc_add_cpp_and_ccarg(struct _fat_ptr s){
Cyc_add_cpparg(s);
Cyc_add_ccarg(s);}
# 151
static void Cyc_add_iprefix(struct _fat_ptr s){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag=0;
_T4.f1=s;_T1=_T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T1;void*_T5[1];_T5[0]=& _T4;_T2=_tag_fat("-iprefix %s",sizeof(char),12U);_T3=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_aprintf(_T2,_T3);}Cyc_add_cpparg(_T0);}
# 154
static void Cyc_add_iwithprefix(struct _fat_ptr s){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag=0;
_T4.f1=s;_T1=_T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T1;void*_T5[1];_T5[0]=& _T4;_T2=_tag_fat("-iwithprefix %s",sizeof(char),16U);_T3=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_aprintf(_T2,_T3);}Cyc_add_cpparg(_T0);}
# 157
static void Cyc_add_iwithprefixbefore(struct _fat_ptr s){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag=0;
_T4.f1=s;_T1=_T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T1;void*_T5[1];_T5[0]=& _T4;_T2=_tag_fat("-iwithprefixbefore %s",sizeof(char),22U);_T3=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_aprintf(_T2,_T3);}Cyc_add_cpparg(_T0);}
# 160
static void Cyc_add_isystem(struct _fat_ptr s){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag=0;
_T4.f1=s;_T1=_T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T1;void*_T5[1];_T5[0]=& _T4;_T2=_tag_fat("-isystem %s",sizeof(char),12U);_T3=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_aprintf(_T2,_T3);}Cyc_add_cpparg(_T0);}
# 163
static void Cyc_add_idirafter(struct _fat_ptr s){struct _fat_ptr _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag=0;
_T4.f1=s;_T1=_T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T1;void*_T5[1];_T5[0]=& _T4;_T2=_tag_fat("-idirafter %s",sizeof(char),14U);_T3=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_aprintf(_T2,_T3);}Cyc_add_cpparg(_T0);}
# 167
static void Cyc_set_many_errors (void){
Cyc_Warn_max_errors=65535;}static char _TmpG1[20U]="_see_cycspecs_file_";
# 171
static struct _fat_ptr Cyc_def_inc_path={(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 20U};
# 174
static void Cyc_print_version (void){struct Cyc_String_pa_PrintArg_struct _T0;struct _fat_ptr _T1;void*_T2;void*_T3;unsigned _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc_String_pa_PrintArg_struct _T7;struct _fat_ptr _T8;void*_T9;void*_TA;unsigned _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct Cyc_String_pa_PrintArg_struct _TE;struct _fat_ptr _TF;void*_T10;void*_T11;unsigned _T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;{struct Cyc_String_pa_PrintArg_struct _T18;_T18.tag=0;{char*_T19=Cversion;_T2=(void*)_T19;_T3=(void*)_T19;_T4=_get_zero_arr_size_char(_T3,1U);_T1=_tag_fat(_T2,sizeof(char),_T4);}
_T18.f1=_T1;_T0=_T18;}{struct Cyc_String_pa_PrintArg_struct _T18=_T0;void*_T19[1];_T19[0]=& _T18;_T5=_tag_fat("The Cyclone compiler, version %s\n",sizeof(char),34U);_T6=_tag_fat(_T19,sizeof(void*),1);Cyc_printf(_T5,_T6);}{struct Cyc_String_pa_PrintArg_struct _T18;_T18.tag=0;{char*_T19=Carch;_T9=(void*)_T19;_TA=(void*)_T19;_TB=_get_zero_arr_size_char(_TA,1U);_T8=_tag_fat(_T9,sizeof(char),_TB);}
_T18.f1=_T8;_T7=_T18;}{struct Cyc_String_pa_PrintArg_struct _T18=_T7;void*_T19[1];_T19[0]=& _T18;_TC=_tag_fat("Compiled for architecture: %s\n",sizeof(char),31U);_TD=_tag_fat(_T19,sizeof(void*),1);Cyc_printf(_TC,_TD);}{struct Cyc_String_pa_PrintArg_struct _T18;_T18.tag=0;{char*_T19=Cdef_lib_path;_T10=(void*)_T19;_T11=(void*)_T19;_T12=_get_zero_arr_size_char(_T11,1U);_TF=_tag_fat(_T10,sizeof(char),_T12);}
_T18.f1=_TF;_TE=_T18;}{struct Cyc_String_pa_PrintArg_struct _T18=_TE;void*_T19[1];_T19[0]=& _T18;_T13=_tag_fat("Standard library directory: %s\n",sizeof(char),32U);_T14=_tag_fat(_T19,sizeof(void*),1);Cyc_printf(_T13,_T14);}{struct Cyc_String_pa_PrintArg_struct _T18;_T18.tag=0;
# 179
_T18.f1=Cyc_def_inc_path;_T15=_T18;}{struct Cyc_String_pa_PrintArg_struct _T18=_T15;void*_T19[1];_T19[0]=& _T18;_T16=_tag_fat("Standard include directory: %s\n",sizeof(char),32U);_T17=_tag_fat(_T19,sizeof(void*),1);Cyc_printf(_T16,_T17);}
exit(0);}
# 183
static int Cyc_is_cyclone_sourcefile(struct _fat_ptr s){struct _fat_ptr _T0;unsigned long _T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;int _T5;int _T6;
unsigned long len=Cyc_strlen(s);
if(len > 4U)goto _TL4;return 0;_TL4: _T0=s;_T1=len - 4U;_T2=(int)_T1;_T3=
_fat_ptr_plus(_T0,sizeof(char),_T2);_T4=_tag_fat(".cyc",sizeof(char),5U);_T5=Cyc_strcmp(_T3,_T4);_T6=_T5==0;return _T6;}
# 199 "cyclone.cyc"
static struct Cyc_List_List*Cyc_libargs=0;
static void Cyc_add_libarg(struct _fat_ptr s){struct _fat_ptr _T0;struct _fat_ptr _T1;int _T2;struct _fat_ptr _T3;int _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;int _T7;struct _fat_ptr _T8;struct _fat_ptr _T9;int _TA;struct Cyc_List_List*_TB;struct _fat_ptr*_TC;_T0=s;_T1=
_tag_fat("-lxml",sizeof(char),6U);_T2=Cyc_strcmp(_T0,_T1);if(_T2!=0)goto _TL6;_T4=Cyc_pa_r;
if(!_T4)goto _TL8;_T3=_tag_fat("-lxml_a",sizeof(char),8U);goto _TL9;_TL8: _T3=s;_TL9: Cyc_add_ccarg(_T3);goto _TL7;
_TL6: _T5=s;_T6=_tag_fat("-lcyc",sizeof(char),6U);_T7=Cyc_strncmp(_T5,_T6,5U);if(_T7!=0)goto _TLA;
Cyc_add_ccarg(s);goto _TLB;
# 206
_TLA: _T8=s;_T9=_tag_fat("-lpthread",sizeof(char),10U);_TA=Cyc_strncmp(_T8,_T9,9U);if(_TA!=0)goto _TLC;
Cyc_pthread_r=1;goto _TLD;_TLC: _TLD:{struct Cyc_List_List*_TD=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_TE=_cycalloc(sizeof(struct _fat_ptr));
*_TE=s;_TC=(struct _fat_ptr*)_TE;}_TD->hd=_TC;_TD->tl=Cyc_libargs;_TB=(struct Cyc_List_List*)_TD;}Cyc_libargs=_TB;_TLB: _TL7:;}
# 212
static void Cyc_add_marg(struct _fat_ptr s){
Cyc_add_ccarg(s);}
# 216
static void Cyc_set_save_temps (void){struct _fat_ptr _T0;
Cyc_save_temps_r=1;_T0=
_tag_fat("-save-temps",sizeof(char),12U);Cyc_add_ccarg(_T0);}
# 221
static int Cyc_produce_dependencies=0;
static void Cyc_set_produce_dependencies (void){struct _fat_ptr _T0;
Cyc_Flags_stop_after_pass=0U;
Cyc_produce_dependencies=1;_T0=
_tag_fat("-M",sizeof(char),3U);Cyc_add_cpparg(_T0);}
# 228
static struct _fat_ptr*Cyc_dependencies_target=0;
static void Cyc_set_dependencies_target(struct _fat_ptr s){struct _fat_ptr*_T0;{struct _fat_ptr*_T1=_cycalloc(sizeof(struct _fat_ptr));
*_T1=s;_T0=(struct _fat_ptr*)_T1;}Cyc_dependencies_target=_T0;}
# 233
static void Cyc_set_stop_after_objectfile (void){struct _fat_ptr _T0;
Cyc_stop_after_objectfile_r=1;_T0=
_tag_fat("-c",sizeof(char),3U);Cyc_add_ccarg(_T0);}
# 238
static void Cyc_set_nocppprecomp (void){struct _fat_ptr _T0;_T0=
_tag_fat("-no-cpp-precomp",sizeof(char),16U);Cyc_add_cpp_and_ccarg(_T0);}
# 242
static void Cyc_clear_lineno (void){
Cyc_generate_line_directives_r=0;
Cyc_set_save_temps();}
# 246
static void Cyc_set_elim_se (void){
Cyc_elim_se_r=1;}
# 249
static void Cyc_set_tovc (void){struct _fat_ptr _T0;
Cyc_Flags_tovc_r=1;_T0=
_tag_fat("-DCYC_ANSI_OUTPUT",sizeof(char),18U);Cyc_add_ccarg(_T0);
Cyc_set_elim_se();}
# 254
static void Cyc_set_notoseqc (void){
Cyc_toseqc_r=0;}
# 257
static void Cyc_set_noboundschecks (void){struct _fat_ptr _T0;_T0=
_tag_fat("-DNO_CYC_BOUNDS_CHECKS",sizeof(char),23U);Cyc_add_ccarg(_T0);}
# 260
static void Cyc_set_nonullchecks (void){struct _fat_ptr _T0;_T0=
_tag_fat("-DNO_CYC_NULL_CHECKS",sizeof(char),21U);Cyc_add_ccarg(_T0);}
# 263
static void Cyc_set_nochecks (void){
Cyc_set_noboundschecks();
Cyc_set_nonullchecks();
Cyc_nocheck_r=1;}
# 269
static void Cyc_set_nocyc (void){struct _fat_ptr _T0;
Cyc_add_cyc_namespace_r=0;_T0=
_tag_fat("-DNO_CYC_PREFIX",sizeof(char),16U);Cyc_add_ccarg(_T0);}
# 274
static void Cyc_set_pa (void){struct _fat_ptr _T0;struct _fat_ptr _T1;
Cyc_pa_r=1;_T0=
_tag_fat("-DCYC_REGION_PROFILE",sizeof(char),21U);Cyc_add_ccarg(_T0);_T1=
_tag_fat("-DCYC_REGION_PROFILE",sizeof(char),21U);Cyc_add_cpparg(_T1);}
# 280
static void Cyc_set_noreaps (void){struct _fat_ptr _T0;
# 283
Cyc_Flags_no_reaps=1;_T0=
_tag_fat("-D_CYC_INTERNAL_DISABLE_REAPS",sizeof(char),30U);Cyc_add_cpparg(_T0);}
# 287
static int Cyc_binit_done=0;
# 289
static void Cyc_set_resolve (void){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;_T0=Cyc_binit_done;
if(_T0)goto _TLE;else{goto _TL10;}
_TL10: Cyc_binit_done=1;_T1=
Cyc_BansheeIf_banshee_init();if(!_T1)goto _TL11;
Cyc_Flags_resolve=1;goto _TL12;
# 296
_TL11: _T2=_tag_fat("Interprocedural inference is not supported by this build of Cyclone; ignoring --inf option",sizeof(char),91U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(0U,_T2,_T3);_TL12: goto _TLF;_TLE: _TLF:;}
# 301
static void Cyc_set_interproc (void){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;_T0=Cyc_binit_done;
if(_T0)goto _TL13;else{goto _TL15;}
_TL15: Cyc_binit_done=1;_T1=
Cyc_BansheeIf_banshee_init();if(!_T1)goto _TL16;
Cyc_Flags_interproc=1;goto _TL17;
# 308
_TL16: _T2=_tag_fat("Interprocedural inference is not supported by this build of Cyclone; ignoring --inf option",sizeof(char),91U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(0U,_T2,_T3);_TL17: goto _TL14;_TL13: _TL14:;}
# 312
static void Cyc_set_ovfat (void){int _T0;int _T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;_T0=Cyc_Flags_interproc;
if(!_T0)goto _TL18;_T1=Cyc_Flags_resolve;if(_T1)goto _TL18;else{goto _TL1A;}
_TL1A: Cyc_Flags_override_fat=1;goto _TL19;_TL18: _TL19: _T2=Cyc_Flags_resolve;
if(!_T2)goto _TL1B;_T3=
_tag_fat("Incompatible options --ovfat and --resolve",sizeof(char),43U);_T4=_tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(0U,_T3,_T4);goto _TL1C;_TL1B: _TL1C:;}
# 318
static void Cyc_set_infstats (void){struct _fat_ptr _T0;struct _fat_ptr _T1;
Cyc_set_interproc();
Cyc_Flags_infstats=1;_T0=
_tag_fat("--infstats causes all other options to be ignored",sizeof(char),50U);_T1=_tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(0U,_T0,_T1);}
# 324
static void Cyc_set_nomerge (void){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;int _T4;_T0=Cyc_binit_done;
if(_T0)goto _TL1D;else{goto _TL1F;}
_TL1F: Cyc_binit_done=1;_T1=
Cyc_BansheeIf_banshee_init();if(!_T1)goto _TL20;
Cyc_Flags_interproc=1;
Cyc_Flags_no_merge=1;goto _TL21;
# 332
_TL20: _T2=_tag_fat("Interprocedural inference is not supported by this build of Cyclone; ignoring --nomerge option",sizeof(char),95U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(0U,_T2,_T3);_TL21: goto _TL1E;
# 335
_TL1D: _T4=Cyc_Flags_interproc;if(!_T4)goto _TL22;
Cyc_Flags_no_merge=1;
Cyc_Flags_stop_after_pass=6U;goto _TL23;_TL22: _TL23: _TL1E:;}
# 341
static void Cyc_set_tags (void){
Cyc_Flags_tags=1;
Cyc_Flags_stop_after_pass=1U;}
# 346
static void Cyc_set_pg (void){struct _fat_ptr _T0;
Cyc_pg_r=1;_T0=
_tag_fat("-pg",sizeof(char),4U);Cyc_add_ccarg(_T0);}
# 351
static void Cyc_set_stop_after_asmfile (void){struct _fat_ptr _T0;
Cyc_stop_after_asmfile_r=1;_T0=
_tag_fat("-S",sizeof(char),3U);Cyc_add_ccarg(_T0);}
# 357
enum Cyc_inputtype{Cyc_DEFAULTINPUT =0U,Cyc_CYCLONEFILE =1U};
# 361
static enum Cyc_inputtype Cyc_intype=Cyc_DEFAULTINPUT;
static void Cyc_set_inputtype(struct _fat_ptr s){struct _fat_ptr _T0;struct _fat_ptr _T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;int _T5;struct Cyc_String_pa_PrintArg_struct _T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;_T0=s;_T1=
_tag_fat("cyc",sizeof(char),4U);_T2=Cyc_strcmp(_T0,_T1);if(_T2!=0)goto _TL24;
Cyc_intype=1U;goto _TL25;
_TL24: _T3=s;_T4=_tag_fat("none",sizeof(char),5U);_T5=Cyc_strcmp(_T3,_T4);if(_T5!=0)goto _TL26;
Cyc_intype=0U;goto _TL27;
# 368
_TL26:{struct Cyc_String_pa_PrintArg_struct _TA;_TA.tag=0;_TA.f1=s;_T6=_TA;}{struct Cyc_String_pa_PrintArg_struct _TA=_T6;void*_TB[1];_TB[0]=& _TA;_T7=Cyc_stderr;_T8=_tag_fat("Input type '%s' not supported\n",sizeof(char),31U);_T9=_tag_fat(_TB,sizeof(void*),1);Cyc_fprintf(_T7,_T8,_T9);}_TL27: _TL25:;}
# 371
struct _fat_ptr Cyc_make_base_filename(struct _fat_ptr s,struct _fat_ptr*output_file){struct _fat_ptr _T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;unsigned long _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;
if(output_file!=0)goto _TL28;_T0=s;goto _TL29;_TL28: _T1=output_file;_T0=*_T1;_TL29: {struct _fat_ptr outdir=Cyc_Filename_dirname(_T0);_T2=
Cyc_Filename_basename(s);{struct _fat_ptr base=Cyc_Filename_chop_extension(_T2);_T4=
# 377
Cyc_strlen(outdir);if(_T4 <= 0U)goto _TL2A;_T3=Cyc_Filename_concat(outdir,base);goto _TL2B;_TL2A: _T3=base;_TL2B: {struct _fat_ptr basename=_T3;_T5=basename;_T6=_T5;
return _T6;}}}}
# 383
static struct Cyc_List_List*Cyc_cyclone_files=0;
# 385
static int Cyc_gcc_optarg=0;
static void Cyc_add_other(struct _fat_ptr s){enum Cyc_inputtype _T0;int _T1;int _T2;struct Cyc_List_List*_T3;struct _fat_ptr*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;
# 388
if(Cyc_gcc_optarg <= 0)goto _TL2C;
Cyc_add_ccarg(s);
Cyc_gcc_optarg=Cyc_gcc_optarg + -1;goto _TL2D;
_TL2C: _T0=Cyc_intype;_T1=(int)_T0;if(_T1==1)goto _TL30;else{goto _TL31;}_TL31: _T2=Cyc_is_cyclone_sourcefile(s);if(_T2)goto _TL30;else{goto _TL2E;}
# 393
_TL30:{struct Cyc_List_List*_T7=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T8=_cycalloc(sizeof(struct _fat_ptr));*_T8=s;_T4=(struct _fat_ptr*)_T8;}_T7->hd=_T4;_T7->tl=Cyc_cyclone_files;_T3=(struct Cyc_List_List*)_T7;}Cyc_cyclone_files=_T3;{
# 399
struct _fat_ptr basename=Cyc_make_base_filename(s,0);_T5=basename;_T6=
_tag_fat(".c",sizeof(char),3U);{struct _fat_ptr cfile=Cyc_strconcat(_T5,_T6);
Cyc_add_ccarg(cfile);}}goto _TL2F;
# 403
_TL2E: Cyc_add_ccarg(s);_TL2F: _TL2D:;}
# 408
static int Cyc_assume_gcc_flag=1;struct _tuple12{struct _fat_ptr flag;int optargs;};static char _TmpG2[3U]="-s";static char _TmpG3[3U]="-O";static char _TmpG4[4U]="-O0";static char _TmpG5[4U]="-O2";static char _TmpG6[4U]="-O3";static char _TmpG7[21U]="-fomit-frame-pointer";static char _TmpG8[13U]="-fno-builtin";static char _TmpG9[3U]="-g";static char _TmpGA[3U]="-p";static char _TmpGB[8U]="-static";
static int Cyc_add_other_flag(struct _fat_ptr s){int _T0;int _T1;unsigned _T2;struct _tuple12*_T3;int _T4;struct _tuple12 _T5;struct _fat_ptr _T6;struct _fat_ptr _T7;int _T8;struct _tuple12*_T9;int _TA;struct _tuple12 _TB;
static struct _tuple12 known_gcc_flags[10U]={{.flag={(unsigned char*)_TmpG2,(unsigned char*)_TmpG2,(unsigned char*)_TmpG2 + 3U},.optargs=0},{.flag={(unsigned char*)_TmpG3,(unsigned char*)_TmpG3,(unsigned char*)_TmpG3 + 3U},.optargs=0},{.flag={(unsigned char*)_TmpG4,(unsigned char*)_TmpG4,(unsigned char*)_TmpG4 + 4U},.optargs=0},{.flag={(unsigned char*)_TmpG5,(unsigned char*)_TmpG5,(unsigned char*)_TmpG5 + 4U},.optargs=0},{.flag={(unsigned char*)_TmpG6,(unsigned char*)_TmpG6,(unsigned char*)_TmpG6 + 4U},.optargs=0},{.flag={(unsigned char*)_TmpG7,(unsigned char*)_TmpG7,(unsigned char*)_TmpG7 + 21U},.optargs=0},{.flag={(unsigned char*)_TmpG8,(unsigned char*)_TmpG8,(unsigned char*)_TmpG8 + 13U},.optargs=0},{.flag={(unsigned char*)_TmpG9,(unsigned char*)_TmpG9,(unsigned char*)_TmpG9 + 3U},.optargs=0},{.flag={(unsigned char*)_TmpGA,(unsigned char*)_TmpGA,(unsigned char*)_TmpGA + 3U},.optargs=0},{.flag={(unsigned char*)_TmpGB,(unsigned char*)_TmpGB,(unsigned char*)_TmpGB + 8U},.optargs=0}};_T0=Cyc_assume_gcc_flag;
# 422
if(!_T0)goto _TL32;
Cyc_add_ccarg(s);
return 1;
# 426
_TL32:{int i=0;_TL37: _T1=i;_T2=(unsigned)_T1;if(_T2 < 10U)goto _TL35;else{goto _TL36;}
_TL35: _T3=known_gcc_flags;_T4=i;_T5=_T3[_T4];_T6=_T5.flag;_T7=s;_T8=Cyc_strcmp(_T6,_T7);if(_T8)goto _TL38;else{goto _TL3A;}
_TL3A: Cyc_add_ccarg(s);_T9=known_gcc_flags;_TA=i;_TB=_T9[_TA];
Cyc_gcc_optarg=_TB.optargs;goto _TL36;_TL38:
# 426
 i=i + 1;goto _TL37;_TL36:;}
# 432
return 0;}
# 436
static void Cyc_noassume_gcc_flag (void){
Cyc_assume_gcc_flag=0;}
# 440
static void Cyc_remove_file(struct _fat_ptr s){int _T0;struct _fat_ptr _T1;unsigned char*_T2;unsigned char*_T3;const char*_T4;_T0=Cyc_save_temps_r;
if(_T0)goto _TL3B;else{goto _TL3D;}
_TL3D: _T1=s;_T2=_untag_fat_ptr_check_bound(_T1,sizeof(char),1U);_T3=_check_null(_T2);_T4=(const char*)_T3;remove(_T4);goto _TL3C;_TL3B: _TL3C:;}
# 447
int Cyc_compile_failure=0;
# 449
struct Cyc___cycFILE*Cyc_try_file_open(struct _fat_ptr filename,struct _fat_ptr mode,struct _fat_ptr msg_part){struct _handler_cons*_T0;int _T1;void*_T2;struct Cyc_String_pa_PrintArg_struct _T3;struct Cyc_String_pa_PrintArg_struct _T4;struct Cyc___cycFILE*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct _handler_cons _T8;_T0=& _T8;_push_handler(_T0);{int _T9=0;_T1=setjmp(_T8.handler);if(!_T1)goto _TL3E;_T9=1;goto _TL3F;_TL3E: _TL3F: if(_T9)goto _TL40;else{goto _TL42;}_TL42:{struct Cyc___cycFILE*_TA=
Cyc_file_open(filename,mode);_npop_handler(0);return _TA;}_pop_handler();goto _TL41;_TL40: _T2=Cyc_Core_get_exn_thrown();{void*_TA=(void*)_T2;
# 452
Cyc_compile_failure=1;{struct Cyc_String_pa_PrintArg_struct _TB;_TB.tag=0;
_TB.f1=msg_part;_T3=_TB;}{struct Cyc_String_pa_PrintArg_struct _TB=_T3;{struct Cyc_String_pa_PrintArg_struct _TC;_TC.tag=0;_TC.f1=filename;_T4=_TC;}{struct Cyc_String_pa_PrintArg_struct _TC=_T4;void*_TD[2];_TD[0]=& _TB;_TD[1]=& _TC;_T5=Cyc_stderr;_T6=_tag_fat("\nError: couldn't open %s %s\n",sizeof(char),29U);_T7=_tag_fat(_TD,sizeof(void*),2);Cyc_fprintf(_T5,_T6,_T7);}}
Cyc_fflush(Cyc_stderr);
return 0;;}_TL41:;}}struct _tuple13{void*f0;const char*f1;int f2;};
# 459
struct _tuple13*Cyc_uncaught_exn=0;
# 461
extern void CYCALLOCPROFILE_mark(const char*);
# 463
void*Cyc_do_stage(struct _fat_ptr stage_name,struct Cyc_List_List*tds,void*(*f)(void*,struct Cyc_List_List*),void*env,void*onfail){struct _fat_ptr _T0;unsigned char*_T1;const char*_T2;int _T3;struct Cyc_timeval*_T4;struct Cyc_timeval*_T5;struct _handler_cons*_T6;int _T7;void*_T8;int _T9;struct Cyc_String_pa_PrintArg_struct _TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct _tuple13*_TE;int _TF;int _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;int _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct Cyc___cycFILE*_T16;struct _fat_ptr _T17;struct _fat_ptr _T18;struct Cyc_timeval*_T19;struct Cyc_timeval*_T1A;struct Cyc_timeval _T1B;long _T1C;struct Cyc_timeval _T1D;long _T1E;struct Cyc_timeval _T1F;long _T20;struct Cyc_Int_pa_PrintArg_struct _T21;struct Cyc_timeval _T22;long _T23;struct Cyc_Int_pa_PrintArg_struct _T24;struct Cyc_timeval _T25;long _T26;struct Cyc___cycFILE*_T27;struct _fat_ptr _T28;struct _fat_ptr _T29;void*_T2A;_T0=stage_name;_T1=_untag_fat_ptr_check_bound(_T0,sizeof(char),1U);_T2=(const char*)_T1;
# 465
CYCALLOCPROFILE_mark(_T2);{
struct Cyc_timeval start;struct Cyc_timeval end;_T3=Cyc_Flags_verbose;
if(!_T3)goto _TL43;_T4=& start;_T5=(struct Cyc_timeval*)_T4;
gettimeofday(_T5,0);goto _TL44;_TL43: _TL44: {
# 470
void*ans;{struct _handler_cons _T2B;_T6=& _T2B;_push_handler(_T6);{int _T2C=0;_T7=setjmp(_T2B.handler);if(!_T7)goto _TL45;_T2C=1;goto _TL46;_TL45: _TL46: if(_T2C)goto _TL47;else{goto _TL49;}_TL49:
 ans=f(env,tds);_pop_handler();goto _TL48;_TL47: _T8=Cyc_Core_get_exn_thrown();{void*_T2D=(void*)_T8;void*_T2E;_T2E=_T2D;{void*x=_T2E;
# 473
ans=onfail;_T9=
Cyc_Warn_error_p();if(!_T9)goto _TL4A;goto _LL0;_TL4A:
# 476
 Cyc_compile_failure=1;{struct Cyc_String_pa_PrintArg_struct _T2F;_T2F.tag=0;
_T2F.f1=stage_name;_TA=_T2F;}{struct Cyc_String_pa_PrintArg_struct _T2F=_TA;void*_T30[1];_T30[0]=& _T2F;_TB=Cyc_stderr;_TC=_tag_fat("COMPILER STAGE %s (unexpected exception) \n",sizeof(char),43U);_TD=_tag_fat(_T30,sizeof(void*),1);Cyc_fprintf(_TB,_TC,_TD);}{struct _tuple13*_T2F=_cycalloc(sizeof(struct _tuple13));
_T2F->f0=x;_T2F->f1=Cyc_Core_get_exn_filename();_T2F->f2=Cyc_Core_get_exn_lineno();_TE=(struct _tuple13*)_T2F;}Cyc_uncaught_exn=_TE;goto _LL0;}_LL0:;}_TL48:;}}_TF=
# 481
Cyc_Warn_error_p();if(!_TF)goto _TL4C;
Cyc_compile_failure=1;goto _TL4D;_TL4C: _TL4D: _T10=Cyc_compile_failure;
if(!_T10)goto _TL4E;_T11=Cyc_stderr;_T12=
_tag_fat("\nCOMPILATION FAILED!\n",sizeof(char),22U);_T13=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T11,_T12,_T13);
Cyc_fflush(Cyc_stderr);goto _TL4F;
_TL4E: _T14=Cyc_Flags_verbose;if(!_T14)goto _TL50;{struct Cyc_String_pa_PrintArg_struct _T2B;_T2B.tag=0;
_T2B.f1=stage_name;_T15=_T2B;}{struct Cyc_String_pa_PrintArg_struct _T2B=_T15;void*_T2C[1];_T2C[0]=& _T2B;_T16=Cyc_stderr;_T17=_tag_fat("%s completed ",sizeof(char),14U);_T18=_tag_fat(_T2C,sizeof(void*),1);Cyc_fprintf(_T16,_T17,_T18);}_T19=& end;_T1A=(struct Cyc_timeval*)_T19;
gettimeofday(_T1A,0);_T1B=start;_T1C=_T1B.tv_sec;
end.tv_sec=end.tv_sec - _T1C;_T1D=start;_T1E=_T1D.tv_usec;
end.tv_usec=end.tv_usec - _T1E;_T1F=end;_T20=_T1F.tv_usec;
if(_T20 >= 0)goto _TL52;
end.tv_usec=end.tv_usec + 1000000;
end.tv_sec=end.tv_sec + -1;goto _TL53;_TL52: _TL53:{struct Cyc_Int_pa_PrintArg_struct _T2B;_T2B.tag=1;_T22=end;_T23=_T22.tv_sec;
# 495
_T2B.f1=(unsigned long)_T23;_T21=_T2B;}{struct Cyc_Int_pa_PrintArg_struct _T2B=_T21;{struct Cyc_Int_pa_PrintArg_struct _T2C;_T2C.tag=1;_T25=end;_T26=_T25.tv_usec;_T2C.f1=(unsigned long)_T26;_T24=_T2C;}{struct Cyc_Int_pa_PrintArg_struct _T2C=_T24;void*_T2D[2];_T2D[0]=& _T2B;_T2D[1]=& _T2C;_T27=Cyc_stderr;_T28=_tag_fat("(%d.%06d secs)\n",sizeof(char),16U);_T29=_tag_fat(_T2D,sizeof(void*),2);Cyc_fprintf(_T27,_T28,_T29);}}
Cyc_fflush(Cyc_stderr);goto _TL51;_TL50: _TL51: _TL4F: _T2A=ans;
# 498
return _T2A;}}}
# 501
struct Cyc_List_List*Cyc_do_parse(struct Cyc___cycFILE*f,struct Cyc_List_List*ignore){struct _handler_cons*_T0;int _T1;void*_T2;struct Cyc_Parse_Exit_exn_struct*_T3;char*_T4;char*_T5;struct Cyc_List_List*_T6;
Cyc_Lex_lex_init(1);
Cyc_Lex_pos_init();{
struct Cyc_List_List*ans=0;{struct _handler_cons _T7;_T0=& _T7;_push_handler(_T0);{int _T8=0;_T1=setjmp(_T7.handler);if(!_T1)goto _TL54;_T8=1;goto _TL55;_TL54: _TL55: if(_T8)goto _TL56;else{goto _TL58;}_TL58:
# 506
 ans=Cyc_Parse_parse_file(f);
Cyc_file_close(f);_pop_handler();goto _TL57;_TL56: _T2=Cyc_Core_get_exn_thrown();{void*_T9=(void*)_T2;void*_TA;_T3=(struct Cyc_Parse_Exit_exn_struct*)_T9;_T4=_T3->tag;_T5=Cyc_Parse_Exit;if(_T4!=_T5)goto _TL59;
# 509
Cyc_file_close(f);Cyc_compile_failure=1;goto _LL0;_TL59: _TA=_T9;{void*e=_TA;
Cyc_file_close(f);Cyc_Core_rethrow(e);}_LL0:;}_TL57:;}}
# 512
Cyc_Lex_lex_init(1);_T6=ans;
return _T6;}}
# 516
int Cyc_do_binding(int ignore,struct Cyc_List_List*tds){
Cyc_Binding_resolve_all(tds);
return 1;}
# 521
struct Cyc_List_List*Cyc_do_interproc_binding(struct _fat_ptr*filename,struct Cyc_List_List*tds){struct _fat_ptr*_T0;struct _fat_ptr _T1;struct Cyc_List_List*_T2;struct Cyc_List_List*_T3;_T0=filename;_T1=*_T0;_T2=tds;_T3=
Cyc_Interproc_resolve_all(_T1,_T2);return _T3;}
# 525
struct Cyc_List_List*Cyc_do_interproc_resolution(int ig,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0=
Cyc_Interproc_binding_cvar_resolution(tds);return _T0;}
# 529
int Cyc_do_adjust(int ignore,struct Cyc_List_List*tds){
Cyc_CurRgn_adjust_all(tds);
return 1;}
# 534
struct Cyc_List_List*Cyc_do_typecheck(struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*tds){int _T0;struct Cyc_List_List*_T1;
# 536
Cyc_Tc_tc(te,1,tds);_T0=Cyc_noshake_r;
if(_T0)goto _TL5B;else{goto _TL5D;}
_TL5D: tds=Cyc_Tc_treeshake(te,tds);goto _TL5C;_TL5B: _TL5C: _T1=tds;
return _T1;}
# 542
struct Cyc_JumpAnalysis_Jump_Anal_Result*Cyc_do_jumpanalysis(int ignore,struct Cyc_List_List*tds){struct Cyc_JumpAnalysis_Jump_Anal_Result*_T0;_T0=
# 544
Cyc_JumpAnalysis_jump_analysis(tds);return _T0;}
# 547
struct Cyc_List_List*Cyc_do_cfcheck(struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;
# 549
Cyc_NewControlFlow_cf_check(tables,tds);_T0=tds;
return _T0;}
# 553
int Cyc_do_insert_checks(struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,struct Cyc_List_List*tds){
Cyc_InsertChecks_insert_checks(tds,tables,Cyc_vcgen_r);
return 1;}struct _tuple14{struct Cyc_Tcenv_Tenv*f0;struct Cyc___cycFILE*f1;struct Cyc___cycFILE*f2;};
# 560
struct Cyc_List_List*Cyc_do_interface(struct _tuple14*params,struct Cyc_List_List*tds){struct _tuple14*_T0;struct Cyc_Tcenv_Tenv*_T1;struct Cyc_Tcenv_Genv*_T2;struct Cyc_List_List*_T3;struct Cyc_Interface_I*_T4;struct Cyc_Interface_I*_T5;struct _tuple11*_T6;int _T7;struct Cyc_List_List*_T8;struct Cyc___cycFILE*_T9;struct Cyc___cycFILE*_TA;struct Cyc_Tcenv_Tenv*_TB;_T0=params;{struct _tuple14 _TC=*_T0;_TB=_TC.f0;_TA=_TC.f1;_T9=_TC.f2;}{struct Cyc_Tcenv_Tenv*te=_TB;struct Cyc___cycFILE*fi=_TA;struct Cyc___cycFILE*fo=_T9;_T1=te;_T2=_T1->ae;_T3=tds;{
# 563
struct Cyc_Interface_I*i1=Cyc_Interface_extract(_T2,_T3);
if(fi!=0)goto _TL5E;
Cyc_Interface_save(i1,fo);goto _TL5F;
# 567
_TL5E:{struct Cyc_Interface_I*i0=Cyc_Interface_parse(fi);_T4=i0;_T5=i1;{struct _tuple11*_TC=_cycalloc(sizeof(struct _tuple11));
_TC->f0=_tag_fat("written interface",sizeof(char),18U);_TC->f1=_tag_fat("maximal interface",sizeof(char),18U);_T6=(struct _tuple11*)_TC;}_T7=Cyc_Interface_is_subinterface(_T4,_T5,_T6);if(_T7)goto _TL60;else{goto _TL62;}
_TL62: Cyc_compile_failure=1;goto _TL61;
# 571
_TL60: Cyc_Interface_save(i0,fo);_TL61:;}_TL5F: _T8=tds;
# 573
return _T8;}}}
# 576
struct Cyc_List_List*Cyc_do_translate(struct Cyc_Hashtable_Table*pops,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0=
# 579
Cyc_Toc_toc(pops,tds);return _T0;}
# 581
struct Cyc_List_List*Cyc_do_removeaggrs(int ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0=
Cyc_RemoveAggrs_remove_aggrs(tds);return _T0;}
# 584
struct Cyc_List_List*Cyc_do_removelabs(int ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0=
Cyc_RemoveLabels_remove_unused_labels(tds);return _T0;}
# 587
struct Cyc_List_List*Cyc_do_temprename(int ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0=
Cyc_RenameTemps_rename(tds);return _T0;}
# 590
struct Cyc_List_List*Cyc_do_castremove(int ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0=
Cyc_RemoveCasts_remove_casts(tds);return _T0;}
# 593
struct Cyc_List_List*Cyc_do_lower(int ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0=
Cyc_Lower_lower(tds);return _T0;}
# 597
struct Cyc_List_List*Cyc_do_toseqc(int ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0=
Cyc_Toseqc_toseqc(tds);return _T0;}
# 600
struct Cyc_List_List*Cyc_do_tovc(int ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;
Cyc_Tovc_elim_array_initializers=Cyc_Flags_tovc_r;_T0=
Cyc_Tovc_tovc(tds);return _T0;}
# 604
struct Cyc_List_List*Cyc_do_lowtreeshake(int ignore,struct Cyc_List_List*tds){int _T0;struct Cyc_List_List*_T1;struct Cyc_List_List*_T2;_T0=Cyc_noshake_r;
if(_T0)goto _TL63;else{goto _TL65;}
_TL65: _T1=Cyc_LowTreeShake_shake(tds);return _T1;
_TL63: _T2=tds;return _T2;}
# 612
static struct Cyc_List_List*Cyc_cfiles=0;
static void Cyc_remove_cfiles (void){int _T0;struct Cyc_List_List*_T1;void*_T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;struct Cyc_List_List*_T5;_T0=Cyc_save_c_r;
if(_T0)goto _TL66;else{goto _TL68;}
_TL68: _TL6C: if(Cyc_cfiles!=0)goto _TL6A;else{goto _TL6B;}
_TL6A: _T1=Cyc_cfiles;_T2=_T1->hd;_T3=(struct _fat_ptr*)_T2;_T4=*_T3;Cyc_remove_file(_T4);_T5=
# 615
_check_null(Cyc_cfiles);Cyc_cfiles=_T5->tl;goto _TL6C;_TL6B: goto _TL67;_TL66: _TL67:;}
# 618
static void Cyc_find_fail(struct _fat_ptr file){struct Cyc_Core_Failure_exn_struct*_T0;struct _fat_ptr _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;void*_T5;
Cyc_compile_failure=1;
Cyc_remove_cfiles();{struct Cyc_Core_Failure_exn_struct*_T6=_cycalloc(sizeof(struct Cyc_Core_Failure_exn_struct));_T6->tag=Cyc_Core_Failure;{struct Cyc_String_pa_PrintArg_struct _T7;_T7.tag=0;
_T7.f1=file;_T2=_T7;}{struct Cyc_String_pa_PrintArg_struct _T7=_T2;void*_T8[1];_T8[0]=& _T7;_T3=_tag_fat("Error: can't find internal compiler file %s\n",sizeof(char),45U);_T4=_tag_fat(_T8,sizeof(void*),1);_T1=Cyc_aprintf(_T3,_T4);}_T6->f1=_T1;_T0=(struct Cyc_Core_Failure_exn_struct*)_T6;}_T5=(void*)_T0;_throw(_T5);}
# 623
static struct _fat_ptr Cyc_find_in_arch_path(struct _fat_ptr s){struct _fat_ptr _T0;unsigned char*_T1;unsigned _T2;struct _fat_ptr _T3;
struct _fat_ptr r=Cyc_Specsfile_find_in_arch_path(s);_T0=r;_T1=_T0.curr;_T2=(unsigned)_T1;
if(_T2)goto _TL6D;else{goto _TL6F;}_TL6F: Cyc_find_fail(s);goto _TL6E;_TL6D: _TL6E: _T3=r;
return _T3;}
# 628
static struct _fat_ptr Cyc_find_in_exec_path(struct _fat_ptr s){struct _fat_ptr _T0;unsigned char*_T1;unsigned _T2;struct _fat_ptr _T3;
struct _fat_ptr r=Cyc_Specsfile_find_in_exec_path(s);_T0=r;_T1=_T0.curr;_T2=(unsigned)_T1;
if(_T2)goto _TL70;else{goto _TL72;}_TL72: Cyc_find_fail(s);goto _TL71;_TL70: _TL71: _T3=r;
return _T3;}struct _tuple15{struct Cyc___cycFILE*f0;struct _fat_ptr f1;};
# 634
struct Cyc_List_List*Cyc_do_print(struct _tuple15*env,struct Cyc_List_List*tds){struct _tuple15*_T0;struct Cyc_Absynpp_Params _T1;enum Cyc_Flags_Cyclone_Passes _T2;int _T3;enum Cyc_Flags_Cyclone_Passes _T4;int _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;int _T9;struct Cyc_Absynpp_Params*_TA;struct Cyc_Absynpp_Params*_TB;struct Cyc_Absynpp_Params*_TC;struct Cyc_Absynpp_Params*_TD;struct Cyc_List_List*_TE;struct _fat_ptr _TF;struct Cyc___cycFILE*_T10;_T0=env;{struct _tuple15 _T11=*_T0;_T10=_T11.f0;_TF=_T11.f1;}{struct Cyc___cycFILE*out_file=_T10;struct _fat_ptr cfile=_TF;_T2=Cyc_Flags_stop_after_pass;_T3=(int)_T2;
# 637
if(_T3 >= 9)goto _TL73;_T1=Cyc_Absynpp_cyc_params_r;goto _TL74;_TL73: _T1=Cyc_Absynpp_c_params_r;_TL74: {struct Cyc_Absynpp_Params params_r=_T1;
params_r.expand_typedefs=!Cyc_Flags_noexpand_r;
params_r.to_VC=Cyc_Flags_tovc_r;
params_r.add_cyc_prefix=Cyc_add_cyc_namespace_r;
params_r.generate_line_directives=Cyc_generate_line_directives_r;
params_r.print_full_evars=Cyc_print_full_evars_r;
params_r.print_all_tvars=Cyc_print_all_tvars_r;
params_r.print_all_kinds=Cyc_print_all_kinds_r;
params_r.print_all_effects=Cyc_print_all_effects_r;_T4=Cyc_Flags_stop_after_pass;_T5=(int)_T4;
# 647
if(_T5 <= 6)goto _TL75;_T6=out_file;_T7=
_tag_fat("#include <cyc_include.h>\n",sizeof(char),26U);_T8=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T6,_T7,_T8);goto _TL76;_TL75: _TL76: _T9=Cyc_pp_r;
# 650
if(!_T9)goto _TL77;_TA=& params_r;_TB=(struct Cyc_Absynpp_Params*)_TA;
Cyc_Absynpp_set_params(_TB);
Cyc_Absynpp_decllist2file(tds,out_file);goto _TL78;
# 654
_TL77: _TC=& params_r;_TD=(struct Cyc_Absynpp_Params*)_TC;Cyc_Absyndump_set_params(_TD);
Cyc_Absyndump_dumpdecllist2file(tds,out_file);_TL78:
# 657
 Cyc_fflush(out_file);_TE=tds;
return _TE;}}}
# 662
static struct Cyc_List_List*Cyc_split_by_char(struct _fat_ptr s,char c){struct _fat_ptr _T0;unsigned char*_T1;char*_T2;struct _fat_ptr _T3;unsigned char*_T4;char*_T5;struct Cyc_List_List*_T6;struct _fat_ptr*_T7;struct Cyc_List_List*_T8;struct _fat_ptr*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;struct _fat_ptr _TC;unsigned char*_TD;struct _fat_ptr _TE;unsigned char*_TF;int _T10;int _T11;unsigned long _T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct _fat_ptr _T15;unsigned char*_T16;struct _fat_ptr _T17;unsigned char*_T18;int _T19;int _T1A;unsigned long _T1B;struct _fat_ptr _T1C;struct Cyc_List_List*_T1D;_T0=s;_T1=_T0.curr;_T2=(char*)_T1;
if(_T2!=0)goto _TL79;return 0;_TL79: {
struct Cyc_List_List*result=0;
unsigned long len=Cyc_strlen(s);
# 667
_TL7B: if(len > 0U)goto _TL7C;else{goto _TL7D;}
_TL7C:{struct _fat_ptr end=Cyc_strchr(s,c);_T3=end;_T4=_T3.curr;_T5=(char*)_T4;
if(_T5!=0)goto _TL7E;{struct Cyc_List_List*_T1E=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T1F=_cycalloc(sizeof(struct _fat_ptr));
*_T1F=s;_T7=(struct _fat_ptr*)_T1F;}_T1E->hd=_T7;_T1E->tl=result;_T6=(struct Cyc_List_List*)_T1E;}result=_T6;goto _TL7D;
# 673
_TL7E:{struct Cyc_List_List*_T1E=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T1F=_cycalloc(sizeof(struct _fat_ptr));_TA=s;_TB=end;_TC=_TB;_TD=_TC.curr;_TE=s;_TF=_TE.curr;_T10=_TD - _TF;_T11=_T10 / sizeof(char);_T12=(unsigned long)_T11;_T13=Cyc_substring(_TA,0,_T12);*_T1F=_T13;_T9=(struct _fat_ptr*)_T1F;}_T1E->hd=_T9;_T1E->tl=result;_T8=(struct Cyc_List_List*)_T1E;}result=_T8;_T14=end;_T15=_T14;_T16=_T15.curr;_T17=s;_T18=_T17.curr;_T19=_T16 - _T18;_T1A=_T19 / sizeof(char);_T1B=(unsigned long)_T1A;
len=len - _T1B;_T1C=end;
s=_fat_ptr_plus(_T1C,sizeof(char),1);;}goto _TL7B;_TL7D: _T1D=
# 678
Cyc_List_imp_rev(result);return _T1D;}}
# 683
static struct Cyc_List_List*Cyc_add_subdir(struct Cyc_List_List*dirs,struct _fat_ptr subdir){struct Cyc_List_List*_T0;struct _fat_ptr*_T1;struct Cyc_List_List*_T2;void*_T3;struct _fat_ptr*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;
# 685
struct Cyc_List_List*l=0;
_TL83: if(dirs!=0)goto _TL81;else{goto _TL82;}
_TL81:{struct Cyc_List_List*_TA=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_TB=_cycalloc(sizeof(struct _fat_ptr));_T2=dirs;_T3=_T2->hd;_T4=(struct _fat_ptr*)_T3;_T5=*_T4;_T6=subdir;_T7=Cyc_Filename_concat(_T5,_T6);*_TB=_T7;_T1=(struct _fat_ptr*)_TB;}_TA->hd=_T1;_TA->tl=l;_T0=(struct Cyc_List_List*)_TA;}l=_T0;_T8=dirs;
# 686
dirs=_T8->tl;goto _TL83;_TL82:
# 688
 l=Cyc_List_imp_rev(l);_T9=l;
return _T9;}
# 693
static int Cyc_is_other_special(char c){char _T0;int _T1;_T0=c;_T1=(int)_T0;switch(_T1){case 92: goto _LL4;case 34: _LL4: goto _LL6;case 59: _LL6: goto _LL8;case 38: _LL8: goto _LLA;case 40: _LLA: goto _LLC;case 41: _LLC: goto _LLE;case 124: _LLE: goto _LL10;case 94: _LL10: goto _LL12;case 60: _LL12: goto _LL14;case 62: _LL14: goto _LL16;case 10: _LL16: goto _LL18;case 9: _LL18:
# 709
 return 1;default:
 return 0;};}
# 715
static struct _fat_ptr Cyc_sh_escape_string(struct _fat_ptr s){int _T0;unsigned long _T1;unsigned long _T2;struct _fat_ptr _T3;unsigned char*_T4;const char*_T5;const char*_T6;int _T7;char _T8;int _T9;int _TA;struct _fat_ptr _TB;struct Cyc_List_List*_TC;struct _fat_ptr*_TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;struct _fat_ptr*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;unsigned long _T13;int _T14;unsigned long _T15;unsigned long _T16;int _T17;unsigned long _T18;struct _fat_ptr _T19;unsigned long _T1A;char*_T1B;unsigned _T1C;unsigned _T1D;int _T1E;unsigned long _T1F;unsigned long _T20;struct _fat_ptr _T21;unsigned char*_T22;const char*_T23;const char*_T24;int _T25;char _T26;int _T27;int _T28;struct _fat_ptr _T29;int _T2A;int _T2B;unsigned char*_T2C;char*_T2D;unsigned _T2E;unsigned char*_T2F;char*_T30;struct _fat_ptr _T31;int _T32;int _T33;unsigned char*_T34;char*_T35;unsigned _T36;unsigned char*_T37;char*_T38;struct _fat_ptr _T39;
unsigned long len=Cyc_strlen(s);
# 719
int single_quotes=0;
int other_special=0;{
int i=0;_TL88: _T0=i;_T1=(unsigned long)_T0;_T2=len;if(_T1 < _T2)goto _TL86;else{goto _TL87;}
_TL86: _T3=s;_T4=_T3.curr;_T5=(const char*)_T4;_T6=_check_null(_T5);_T7=i;{char c=_T6[_T7];_T8=c;_T9=(int)_T8;
if(_T9!=39)goto _TL89;single_quotes=single_quotes + 1;goto _TL8A;
_TL89: _TA=Cyc_is_other_special(c);if(!_TA)goto _TL8B;other_special=other_special + 1;goto _TL8C;_TL8B: _TL8C: _TL8A:;}
# 721
i=i + 1;goto _TL88;_TL87:;}
# 728
if(single_quotes!=0)goto _TL8D;if(other_special!=0)goto _TL8D;_TB=s;
return _TB;_TL8D:
# 732
 if(single_quotes!=0)goto _TL8F;{struct _fat_ptr*_T3A[3];{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));
*_T3B=_tag_fat("'",sizeof(char),2U);_TD=(struct _fat_ptr*)_T3B;}_T3A[0]=_TD;{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));_TF=s;*_T3B=_TF;_TE=(struct _fat_ptr*)_T3B;}_T3A[1]=_TE;{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));*_T3B=_tag_fat("'",sizeof(char),2U);_T10=(struct _fat_ptr*)_T3B;}_T3A[2]=_T10;_T11=_tag_fat(_T3A,sizeof(struct _fat_ptr*),3);_TC=Cyc_List_list(_T11);}_T12=Cyc_strconcat_l(_TC);return _T12;_TL8F: _T13=len;_T14=single_quotes;_T15=(unsigned long)_T14;_T16=_T13 + _T15;_T17=other_special;_T18=(unsigned long)_T17;{
# 736
unsigned long len2=_T16 + _T18;_T1A=len2 + 1U;{unsigned _T3A=_T1A + 1U;_T1C=_check_times(_T3A,sizeof(char));{char*_T3B=_cycalloc_atomic(_T1C);{unsigned _T3C=_T3A;unsigned i;i=0;_TL94: if(i < _T3C)goto _TL92;else{goto _TL93;}_TL92: _T1D=i;
_T3B[_T1D]='\000';i=i + 1;goto _TL94;_TL93: _T3B[_T3C]=0;}_T1B=(char*)_T3B;}_T19=_tag_fat(_T1B,sizeof(char),_T3A);}{struct _fat_ptr s2=_T19;
int i=0;
int j=0;
_TL98: _T1E=i;_T1F=(unsigned long)_T1E;_T20=len;if(_T1F < _T20)goto _TL96;else{goto _TL97;}
_TL96: _T21=s;_T22=_T21.curr;_T23=(const char*)_T22;_T24=_check_null(_T23);_T25=i;{char c=_T24[_T25];_T26=c;_T27=(int)_T26;
if(_T27==39)goto _TL9B;else{goto _TL9C;}_TL9C: _T28=Cyc_is_other_special(c);if(_T28)goto _TL9B;else{goto _TL99;}
_TL9B: _T29=s2;_T2A=j;j=_T2A + 1;_T2B=_T2A;{struct _fat_ptr _T3A=_fat_ptr_plus(_T29,sizeof(char),_T2B);_T2C=_check_fat_subscript(_T3A,sizeof(char),0U);_T2D=(char*)_T2C;{char _T3B=*_T2D;char _T3C='\\';_T2E=_get_fat_size(_T3A,sizeof(char));if(_T2E!=1U)goto _TL9D;if(_T3B!=0)goto _TL9D;if(_T3C==0)goto _TL9D;_throw_arraybounds();goto _TL9E;_TL9D: _TL9E: _T2F=_T3A.curr;_T30=(char*)_T2F;*_T30=_T3C;}}goto _TL9A;_TL99: _TL9A: _T31=s2;_T32=j;
j=_T32 + 1;_T33=_T32;{struct _fat_ptr _T3A=_fat_ptr_plus(_T31,sizeof(char),_T33);_T34=_check_fat_subscript(_T3A,sizeof(char),0U);_T35=(char*)_T34;{char _T3B=*_T35;char _T3C=c;_T36=_get_fat_size(_T3A,sizeof(char));if(_T36!=1U)goto _TL9F;if(_T3B!=0)goto _TL9F;if(_T3C==0)goto _TL9F;_throw_arraybounds();goto _TLA0;_TL9F: _TLA0: _T37=_T3A.curr;_T38=(char*)_T37;*_T38=_T3C;}}}
# 740
i=i + 1;goto _TL98;_TL97: _T39=s2;
# 746
return _T39;}}}
# 748
static struct _fat_ptr*Cyc_sh_escape_stringptr(struct _fat_ptr*sp){struct _fat_ptr*_T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;{struct _fat_ptr*_T3=_cycalloc(sizeof(struct _fat_ptr));_T1=sp;_T2=*_T1;
*_T3=Cyc_sh_escape_string(_T2);_T0=(struct _fat_ptr*)_T3;}return _T0;}
# 751
static struct _fat_ptr Cyc_get_cppargs_string (void){struct _fat_ptr _T0;unsigned char*_T1;char*_T2;struct Cyc_List_List*_T3;struct _fat_ptr*_T4;struct _fat_ptr _T5;struct Cyc_List_List*(*_T6)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T7)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;
static struct _fat_ptr cppargs_string={(void*)0,(void*)0,(void*)(0 + 0)};_T0=cppargs_string;_T1=_T0.curr;_T2=(char*)_T1;
if(_T2!=0)goto _TLA1;{struct Cyc_List_List*_TB=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_TC=_cycalloc(sizeof(struct _fat_ptr));_T5=
# 755
_tag_fat("",sizeof(char),1U);*_TC=_T5;_T4=(struct _fat_ptr*)_TC;}_TB->hd=_T4;_T7=Cyc_List_map;{
struct Cyc_List_List*(*_TC)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*))_T7;_T6=_TC;}_T8=Cyc_List_rev(Cyc_cppargs);_TB->tl=_T6(Cyc_sh_escape_stringptr,_T8);_T3=(struct Cyc_List_List*)_TB;}_T9=
_tag_fat(" ",sizeof(char),2U);
# 754
cppargs_string=
Cyc_str_sepstr(_T3,_T9);goto _TLA2;_TLA1: _TLA2: _TA=cppargs_string;
# 758
return _TA;}
# 761
struct Cyc_List_List*Cyc_Cyclone_parse_file(struct _fat_ptr filename){struct _fat_ptr _T0;struct _fat_ptr _T1;struct _fat_ptr*_T2;int _T3;struct Cyc_String_pa_PrintArg_struct _T4;struct Cyc___cycFILE*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct _fat_ptr _TA;int _TB;struct Cyc___cycFILE*_TC;unsigned _TD;struct Cyc_List_List*_TE;struct _fat_ptr _TF;unsigned long _T10;struct Cyc_List_List*_T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;void*_T14;void*_T15;unsigned _T16;struct Cyc_List_List*_T17;struct Cyc_List_List*_T18;struct Cyc_List_List*_T19;struct _fat_ptr*_T1A;struct _fat_ptr _T1B;struct Cyc_List_List*(*_T1C)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T1D)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T1E;struct _fat_ptr _T1F;enum Cyc_Flags_Cyclone_Passes _T20;int _T21;struct _fat_ptr _T22;struct _fat_ptr _T23;struct Cyc_String_pa_PrintArg_struct _T24;struct _fat_ptr*_T25;struct _fat_ptr _T26;struct _fat_ptr _T27;struct _fat_ptr _T28;struct Cyc_String_pa_PrintArg_struct _T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;int _T2C;struct _fat_ptr _T2D;struct Cyc_String_pa_PrintArg_struct _T2E;struct _fat_ptr*_T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;struct _fat_ptr _T32;struct Cyc_String_pa_PrintArg_struct _T33;struct Cyc_String_pa_PrintArg_struct _T34;struct Cyc_String_pa_PrintArg_struct _T35;struct Cyc_String_pa_PrintArg_struct _T36;struct Cyc_String_pa_PrintArg_struct _T37;struct Cyc_String_pa_PrintArg_struct _T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;int _T3B;struct Cyc_String_pa_PrintArg_struct _T3C;struct Cyc___cycFILE*_T3D;struct _fat_ptr _T3E;struct _fat_ptr _T3F;struct _fat_ptr _T40;unsigned char*_T41;unsigned char*_T42;const char*_T43;int _T44;struct Cyc___cycFILE*_T45;struct _fat_ptr _T46;struct _fat_ptr _T47;enum Cyc_Flags_Cyclone_Passes _T48;int _T49;enum Cyc_Flags_Cyclone_Passes _T4A;int _T4B;struct _fat_ptr _T4C;struct _fat_ptr _T4D;struct _fat_ptr _T4E;int _T4F;enum Cyc_Flags_Cyclone_Passes _T50;int _T51;struct Cyc_List_List*(*_T52)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*);struct _fat_ptr _T53;struct Cyc_List_List*_T54;struct Cyc___cycFILE*_T55;struct Cyc_List_List*_T56;struct Cyc_List_List*_T57;
struct _fat_ptr basename=Cyc_make_base_filename(filename,Cyc_output_file);_T0=basename;_T1=
_tag_fat(".cyp",sizeof(char),5U);{struct _fat_ptr preprocfile=Cyc_strconcat(_T0,_T1);
# 767
struct _fat_ptr*preprocfileptr;preprocfileptr=_cycalloc(sizeof(struct _fat_ptr));_T2=preprocfileptr;*_T2=preprocfile;_T3=Cyc_Flags_verbose;
# 769
if(!_T3)goto _TLA3;{struct Cyc_String_pa_PrintArg_struct _T58;_T58.tag=0;_T58.f1=filename;_T4=_T58;}{struct Cyc_String_pa_PrintArg_struct _T58=_T4;void*_T59[1];_T59[0]=& _T58;_T5=Cyc_stderr;_T6=_tag_fat("Compiling %s\n",sizeof(char),14U);_T7=_tag_fat(_T59,sizeof(void*),1);Cyc_fprintf(_T5,_T6,_T7);}goto _TLA4;_TLA3: _TLA4: _T8=filename;_T9=
# 772
_tag_fat("r",sizeof(char),2U);_TA=_tag_fat("input file",sizeof(char),11U);{struct Cyc___cycFILE*f0=Cyc_try_file_open(_T8,_T9,_TA);_TB=Cyc_compile_failure;
if(_TB)goto _TLA7;else{goto _TLA8;}_TLA8: _TC=f0;_TD=(unsigned)_TC;if(_TD)goto _TLA5;else{goto _TLA7;}
_TLA7: return 0;_TLA5:
 Cyc_fclose(f0);{
# 780
struct _fat_ptr cppargs_string=Cyc_get_cppargs_string();
# 788
struct Cyc_List_List*stdinc_dirs=Cyc_add_subdir(Cyc_Specsfile_cyclone_exec_path,Cyc_Specsfile_target_arch);_TE=stdinc_dirs;_TF=
_tag_fat("include",sizeof(char),8U);stdinc_dirs=Cyc_add_subdir(_TE,_TF);_T10=
Cyc_strlen(Cyc_def_inc_path);if(_T10 <= 0U)goto _TLA9;{struct Cyc_List_List*_T58=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T59=_cycalloc(sizeof(struct _fat_ptr));
*_T59=Cyc_def_inc_path;_T12=(struct _fat_ptr*)_T59;}_T58->hd=_T12;_T58->tl=stdinc_dirs;_T11=(struct Cyc_List_List*)_T58;}stdinc_dirs=_T11;goto _TLAA;_TLA9: _TLAA: {
char*cyclone_include_path=getenv("CYCLONE_INCLUDE_PATH");
if(cyclone_include_path==0)goto _TLAB;{char*_T58=cyclone_include_path;_T14=(void*)_T58;_T15=(void*)_T58;_T16=_get_zero_arr_size_char(_T15,1U);_T13=_tag_fat(_T14,sizeof(char),_T16);}_T17=
Cyc_split_by_char(_T13,':');_T18=stdinc_dirs;stdinc_dirs=Cyc_List_append(_T17,_T18);goto _TLAC;_TLAB: _TLAC:{struct Cyc_List_List*_T58=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T59=_cycalloc(sizeof(struct _fat_ptr));_T1B=
# 796
_tag_fat("",sizeof(char),1U);*_T59=_T1B;_T1A=(struct _fat_ptr*)_T59;}_T58->hd=_T1A;_T1D=Cyc_List_map;{
struct Cyc_List_List*(*_T59)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*))_T1D;_T1C=_T59;}_T1E=stdinc_dirs;_T58->tl=_T1C(Cyc_sh_escape_stringptr,_T1E);_T19=(struct Cyc_List_List*)_T58;}_T1F=
_tag_fat(" -I",sizeof(char),4U);{
# 795
struct _fat_ptr stdinc_string=
Cyc_str_sepstr(_T19,_T1F);
# 799
struct _fat_ptr ofile_string;_T20=Cyc_Flags_stop_after_pass;_T21=(int)_T20;
if(_T21 > 0)goto _TLAD;
if(Cyc_output_file!=0)goto _TLAF;_T22=_tag_fat("",sizeof(char),1U);goto _TLB0;_TLAF:{struct Cyc_String_pa_PrintArg_struct _T58;_T58.tag=0;_T25=Cyc_output_file;_T58.f1=*_T25;_T24=_T58;}{struct Cyc_String_pa_PrintArg_struct _T58=_T24;void*_T59[1];_T59[0]=& _T58;_T26=_tag_fat(" > %s",sizeof(char),6U);_T27=_tag_fat(_T59,sizeof(void*),1);_T23=Cyc_aprintf(_T26,_T27);}_T22=_T23;_TLB0: ofile_string=_T22;goto _TLAE;
# 803
_TLAD:{struct Cyc_String_pa_PrintArg_struct _T58;_T58.tag=0;_T58.f1=Cyc_sh_escape_string(preprocfile);_T29=_T58;}{struct Cyc_String_pa_PrintArg_struct _T58=_T29;void*_T59[1];_T59[0]=& _T58;_T2A=_tag_fat(" > %s",sizeof(char),6U);_T2B=_tag_fat(_T59,sizeof(void*),1);_T28=Cyc_aprintf(_T2A,_T2B);}ofile_string=_T28;_TLAE: {
# 805
struct _fat_ptr fixup_string;_T2C=Cyc_produce_dependencies;
if(!_T2C)goto _TLB1;
# 809
if(Cyc_dependencies_target!=0)goto _TLB3;
# 813
fixup_string=_tag_fat(" | sed 's/^\\(.*\\)\\.cyc\\.o:/\\1.o:/'",sizeof(char),35U);goto _TLB4;
# 818
_TLB3:{struct Cyc_String_pa_PrintArg_struct _T58;_T58.tag=0;_T2F=Cyc_dependencies_target;
_T58.f1=*_T2F;_T2E=_T58;}{struct Cyc_String_pa_PrintArg_struct _T58=_T2E;void*_T59[1];_T59[0]=& _T58;_T30=
# 818
_tag_fat(" | sed 's/^.*\\.cyc\\.o:/%s:/'",sizeof(char),29U);_T31=_tag_fat(_T59,sizeof(void*),1);_T2D=Cyc_aprintf(_T30,_T31);}fixup_string=_T2D;_TLB4: goto _TLB2;
# 821
_TLB1: fixup_string=_tag_fat("",sizeof(char),1U);_TLB2:{struct Cyc_String_pa_PrintArg_struct _T58;_T58.tag=0;
# 824
_T58.f1=Cyc_cpp;_T33=_T58;}{struct Cyc_String_pa_PrintArg_struct _T58=_T33;{struct Cyc_String_pa_PrintArg_struct _T59;_T59.tag=0;_T59.f1=cppargs_string;_T34=_T59;}{struct Cyc_String_pa_PrintArg_struct _T59=_T34;{struct Cyc_String_pa_PrintArg_struct _T5A;_T5A.tag=0;_T5A.f1=stdinc_string;_T35=_T5A;}{struct Cyc_String_pa_PrintArg_struct _T5A=_T35;{struct Cyc_String_pa_PrintArg_struct _T5B;_T5B.tag=0;
_T5B.f1=Cyc_sh_escape_string(filename);_T36=_T5B;}{struct Cyc_String_pa_PrintArg_struct _T5B=_T36;{struct Cyc_String_pa_PrintArg_struct _T5C;_T5C.tag=0;_T5C.f1=fixup_string;_T37=_T5C;}{struct Cyc_String_pa_PrintArg_struct _T5C=_T37;{struct Cyc_String_pa_PrintArg_struct _T5D;_T5D.tag=0;_T5D.f1=ofile_string;_T38=_T5D;}{struct Cyc_String_pa_PrintArg_struct _T5D=_T38;void*_T5E[6];_T5E[0]=& _T58;_T5E[1]=& _T59;_T5E[2]=& _T5A;_T5E[3]=& _T5B;_T5E[4]=& _T5C;_T5E[5]=& _T5D;_T39=
# 823
_tag_fat("%s %s%s %s%s%s",sizeof(char),15U);_T3A=_tag_fat(_T5E,sizeof(void*),6);_T32=Cyc_aprintf(_T39,_T3A);}}}}}}{struct _fat_ptr cmd=_T32;_T3B=Cyc_Flags_verbose;
# 827
if(!_T3B)goto _TLB5;{struct Cyc_String_pa_PrintArg_struct _T58;_T58.tag=0;_T58.f1=cmd;_T3C=_T58;}{struct Cyc_String_pa_PrintArg_struct _T58=_T3C;void*_T59[1];_T59[0]=& _T58;_T3D=Cyc_stderr;_T3E=_tag_fat("%s\n",sizeof(char),4U);_T3F=_tag_fat(_T59,sizeof(void*),1);Cyc_fprintf(_T3D,_T3E,_T3F);}goto _TLB6;_TLB5: _TLB6: _T40=cmd;_T41=_untag_fat_ptr_check_bound(_T40,sizeof(char),1U);_T42=_check_null(_T41);_T43=(const char*)_T42;_T44=
system(_T43);if(_T44==0)goto _TLB7;
Cyc_compile_failure=1;_T45=Cyc_stderr;_T46=
_tag_fat("\nError: preprocessing\n",sizeof(char),23U);_T47=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T45,_T46,_T47);_T48=Cyc_Flags_stop_after_pass;_T49=(int)_T48;
if(_T49 <= 0)goto _TLB9;Cyc_remove_file(preprocfile);goto _TLBA;_TLB9: _TLBA:
 return 0;_TLB7: _T4A=Cyc_Flags_stop_after_pass;_T4B=(int)_T4A;
# 834
if(_T4B > 0)goto _TLBB;return 0;_TLBB:
# 837
 Cyc_Warn_reset(preprocfile);_T4C=preprocfile;_T4D=
_tag_fat("r",sizeof(char),2U);_T4E=_tag_fat("file",sizeof(char),5U);{struct Cyc___cycFILE*in_file=Cyc_try_file_open(_T4C,_T4D,_T4E);
# 840
struct Cyc_List_List*tds=0;_T4F=Cyc_compile_failure;
# 843
if(_T4F)goto _TLBD;else{goto _TLBF;}_TLBF: _T50=Cyc_Flags_stop_after_pass;_T51=(int)_T50;if(_T51 < 1)goto _TLBD;{
struct Cyc_List_List*(*_T58)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*))Cyc_do_stage;_T52=_T58;}_T53=_tag_fat("parsing",sizeof(char),8U);_T54=tds;_T55=_check_null(in_file);_T56=tds;tds=_T52(_T53,_T54,Cyc_do_parse,_T55,_T56);goto _TLBE;_TLBD: _TLBE: _T57=tds;
return _T57;}}}}}}}}}
# 848
static void Cyc_process_file(struct _fat_ptr filename){struct _fat_ptr _T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;unsigned char*_T4;char*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct _fat_ptr _TA;struct _fat_ptr _TB;int _TC;int _TD;int _TE;int _TF;int _T10;enum Cyc_Flags_Cyclone_Passes _T11;int _T12;int _T13;struct Cyc_List_List*(*_T14)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _fat_ptr*,struct Cyc_List_List*),struct _fat_ptr*,struct Cyc_List_List*);struct _fat_ptr _T15;struct Cyc_List_List*_T16;struct _fat_ptr*_T17;struct _fat_ptr*_T18;int _T19;struct Cyc_List_List*(*_T1A)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*);struct _fat_ptr _T1B;struct Cyc_List_List*_T1C;int(*_T1D)(struct _fat_ptr,struct Cyc_List_List*,int(*)(int,struct Cyc_List_List*),int,int);struct _fat_ptr _T1E;struct Cyc_List_List*_T1F;int _T20;enum Cyc_Flags_Cyclone_Passes _T21;int _T22;int(*_T23)(struct _fat_ptr,struct Cyc_List_List*,int(*)(int,struct Cyc_List_List*),int,int);struct _fat_ptr _T24;struct Cyc_List_List*_T25;int _T26;enum Cyc_Flags_Cyclone_Passes _T27;int _T28;struct Cyc_List_List*(*_T29)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*),struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*);struct _fat_ptr _T2A;struct Cyc_List_List*_T2B;struct Cyc_Tcenv_Tenv*_T2C;struct Cyc_List_List*_T2D;int _T2E;enum Cyc_Flags_Cyclone_Passes _T2F;int _T30;struct Cyc_JumpAnalysis_Jump_Anal_Result*(*_T31)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_JumpAnalysis_Jump_Anal_Result*(*)(int,struct Cyc_List_List*),int,struct Cyc_JumpAnalysis_Jump_Anal_Result*);struct _fat_ptr _T32;struct Cyc_List_List*_T33;int _T34;enum Cyc_Flags_Cyclone_Passes _T35;int _T36;struct Cyc_List_List*(*_T37)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*);struct _fat_ptr _T38;struct Cyc_List_List*_T39;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T3A;struct Cyc_List_List*_T3B;int _T3C;enum Cyc_Flags_Cyclone_Passes _T3D;int _T3E;int(*_T3F)(struct _fat_ptr,struct Cyc_List_List*,int(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,int);struct _fat_ptr _T40;struct Cyc_List_List*_T41;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T42;int _T43;int _T44;enum Cyc_Flags_Cyclone_Passes _T45;int _T46;struct _fat_ptr _T47;struct _fat_ptr _T48;unsigned char*_T49;unsigned char*_T4A;void*_T4B;void*_T4C;unsigned _T4D;struct _fat_ptr _T4E;struct _fat_ptr _T4F;struct Cyc_Absynpp_Params*_T50;struct Cyc_Absynpp_Params*_T51;struct Cyc_Absynpp_Params*_T52;struct Cyc_Absynpp_Params*_T53;int _T54;int _T55;struct _fat_ptr _T56;unsigned char*_T57;const char*_T58;struct _fat_ptr _T59;struct _fat_ptr _T5A;struct _fat_ptr _T5B;struct _tuple14 _T5C;struct Cyc_List_List*(*_T5D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _tuple14*,struct Cyc_List_List*),struct _tuple14*,struct Cyc_List_List*);struct _fat_ptr _T5E;struct Cyc_List_List*_T5F;struct _tuple14*_T60;struct Cyc_List_List*_T61;int _T62;int _T63;int _T64;struct Cyc___cycFILE*_T65;struct _fat_ptr _T66;struct _fat_ptr _T67;int _T68;enum Cyc_Flags_Cyclone_Passes _T69;int _T6A;struct Cyc_List_List*(*_T6B)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Hashtable_Table*,struct Cyc_List_List*),struct Cyc_Hashtable_Table*,struct Cyc_List_List*);struct _fat_ptr _T6C;struct Cyc_List_List*_T6D;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T6E;struct Cyc_Hashtable_Table*_T6F;struct Cyc_List_List*_T70;int _T71;enum Cyc_Flags_Cyclone_Passes _T72;int _T73;struct Cyc_List_List*(*_T74)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*);struct _fat_ptr _T75;struct Cyc_List_List*_T76;struct Cyc_List_List*_T77;int _T78;int _T79;enum Cyc_Flags_Cyclone_Passes _T7A;int _T7B;struct Cyc_List_List*(*_T7C)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*);struct _fat_ptr _T7D;struct Cyc_List_List*_T7E;struct Cyc_List_List*_T7F;int _T80;enum Cyc_Flags_Cyclone_Passes _T81;int _T82;struct Cyc_List_List*(*_T83)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*);struct _fat_ptr _T84;struct Cyc_List_List*_T85;struct Cyc_List_List*_T86;int _T87;enum Cyc_Flags_Cyclone_Passes _T88;int _T89;int _T8A;enum Cyc_Flags_Cyclone_Passes _T8B;int _T8C;struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*);struct _fat_ptr _T8E;struct Cyc_List_List*_T8F;struct Cyc_List_List*_T90;int _T91;enum Cyc_Flags_Cyclone_Passes _T92;int _T93;struct Cyc_List_List*(*_T94)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*);struct _fat_ptr _T95;struct Cyc_List_List*_T96;struct Cyc_List_List*_T97;int _T98;enum Cyc_Flags_Cyclone_Passes _T99;int _T9A;struct Cyc_List_List*(*_T9B)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*);struct _fat_ptr _T9C;struct Cyc_List_List*_T9D;struct Cyc_List_List*_T9E;int _T9F;int _TA0;int _TA1;int _TA2;enum Cyc_Flags_Cyclone_Passes _TA3;int _TA4;struct Cyc_String_pa_PrintArg_struct _TA5;struct _fat_ptr _TA6;void*_TA7;void*_TA8;unsigned _TA9;struct Cyc_String_pa_PrintArg_struct _TAA;struct _fat_ptr _TAB;void*_TAC;void*_TAD;unsigned _TAE;struct Cyc_Int_pa_PrintArg_struct _TAF;int _TB0;struct Cyc___cycFILE*_TB1;struct _fat_ptr _TB2;struct _fat_ptr _TB3;int _TB4;int _TB5;enum Cyc_Flags_Cyclone_Passes _TB6;int _TB7;enum Cyc_Flags_Cyclone_Passes _TB8;int _TB9;struct _fat_ptr*_TBA;struct _fat_ptr _TBB;struct _fat_ptr _TBC;struct _fat_ptr _TBD;enum Cyc_Flags_Cyclone_Passes _TBE;int _TBF;struct _fat_ptr*_TC0;struct _fat_ptr _TC1;struct _fat_ptr _TC2;struct _fat_ptr _TC3;struct _fat_ptr _TC4;struct _fat_ptr _TC5;struct _fat_ptr _TC6;int _TC7;struct Cyc___cycFILE*_TC8;unsigned _TC9;int _TCA;struct _tuple15*_TCB;struct _tuple15*_TCC;struct Cyc_List_List*(*_TCD)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _tuple15*,struct Cyc_List_List*),struct _tuple15*,struct Cyc_List_List*);struct _fat_ptr _TCE;struct Cyc_List_List*_TCF;struct _tuple15*_TD0;struct Cyc_List_List*_TD1;struct Cyc_List_List*_TD2;struct _fat_ptr*_TD3;
struct _fat_ptr basename=Cyc_make_base_filename(filename,Cyc_output_file);_T0=basename;_T1=
_tag_fat(".cyp",sizeof(char),5U);{struct _fat_ptr preprocfile=Cyc_strconcat(_T0,_T1);_T3=Cyc_specified_interface;_T4=_T3.curr;_T5=(char*)_T4;
if(_T5==0)goto _TLC0;_T2=Cyc_specified_interface;goto _TLC1;_TLC0: _T6=basename;_T7=
_tag_fat(".cyci",sizeof(char),6U);_T2=Cyc_strconcat(_T6,_T7);_TLC1: {
# 851
struct _fat_ptr interfacefile=_T2;_T8=basename;_T9=
# 853
_tag_fat(".cycio",sizeof(char),7U);{struct _fat_ptr interfaceobjfile=Cyc_strconcat(_T8,_T9);_TA=
Cyc_make_base_filename(filename,0);_TB=_tag_fat(".c",sizeof(char),3U);{struct _fat_ptr cfile=Cyc_strconcat(_TA,_TB);
# 856
struct Cyc_List_List*tds=Cyc_Cyclone_parse_file(filename);_TC=Cyc_compile_failure;
# 858
if(_TC)goto _TLC2;else{goto _TLC4;}_TLC4: _TD=Cyc_Flags_tags;if(!_TD)goto _TLC2;
Cyc_Interproc_dump_tags(filename,tds);
Cyc_remove_file(preprocfile);
return;_TLC2: _TE=Cyc_compile_failure;
# 865
if(_TE)goto _TLC5;else{goto _TLC7;}_TLC7: _TF=Cyc_Flags_porting_c_code;if(!_TF)goto _TLC5;
Cyc_Port_port(tds);
Cyc_remove_file(preprocfile);
return;_TLC5: _T10=Cyc_compile_failure;
# 873
if(_T10)goto _TLC8;else{goto _TLCA;}_TLCA: _T11=Cyc_Flags_stop_after_pass;_T12=(int)_T11;if(_T12 < 2)goto _TLC8;_T13=Cyc_Flags_interproc;
if(!_T13)goto _TLCB;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _fat_ptr*,struct Cyc_List_List*),struct _fat_ptr*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _fat_ptr*,struct Cyc_List_List*),struct _fat_ptr*,struct Cyc_List_List*))Cyc_do_stage;_T14=_TD4;}_T15=_tag_fat("interproc_binding",sizeof(char),18U);_T16=tds;_T17=& filename;_T18=(struct _fat_ptr*)_T17;tds=_T14(_T15,_T16,Cyc_do_interproc_binding,_T18,0);goto _TLCC;
# 877
_TLCB: _T19=Cyc_Flags_resolve;if(!_T19)goto _TLCD;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*))Cyc_do_stage;_T1A=_TD4;}_T1B=_tag_fat("interproc_resolution",sizeof(char),21U);_T1C=tds;tds=_T1A(_T1B,_T1C,Cyc_do_interproc_resolution,1,0);goto _TLCE;
# 881
_TLCD:{int(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,int(*)(int,struct Cyc_List_List*),int,int)=(int(*)(struct _fat_ptr,struct Cyc_List_List*,int(*)(int,struct Cyc_List_List*),int,int))Cyc_do_stage;_T1D=_TD4;}_T1E=_tag_fat("binding",sizeof(char),8U);_T1F=tds;_T1D(_T1E,_T1F,Cyc_do_binding,1,1);_TLCE: _TLCC: goto _TLC9;_TLC8: _TLC9: {
# 885
struct Cyc_JumpAnalysis_Jump_Anal_Result*jump_tables=0;
struct Cyc_Tcenv_Tenv*te=Cyc_Tcenv_tc_init();_T20=Cyc_compile_failure;
# 889
if(_T20)goto _TLCF;else{goto _TLD1;}_TLD1: _T21=Cyc_Flags_stop_after_pass;_T22=(int)_T21;if(_T22 < 3)goto _TLCF;{
int(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,int(*)(int,struct Cyc_List_List*),int,int)=(int(*)(struct _fat_ptr,struct Cyc_List_List*,int(*)(int,struct Cyc_List_List*),int,int))Cyc_do_stage;_T23=_TD4;}_T24=_tag_fat("current region resolution",sizeof(char),26U);_T25=tds;_T23(_T24,_T25,Cyc_do_adjust,1,1);goto _TLD0;_TLCF: _TLD0: _T26=Cyc_compile_failure;
# 893
if(_T26)goto _TLD2;else{goto _TLD4;}_TLD4: _T27=Cyc_Flags_stop_after_pass;_T28=(int)_T27;if(_T28 < 4)goto _TLD2;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*),struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*),struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*))Cyc_do_stage;_T29=_TD4;}_T2A=_tag_fat("type checking",sizeof(char),14U);_T2B=tds;_T2C=te;_T2D=tds;tds=_T29(_T2A,_T2B,Cyc_do_typecheck,_T2C,_T2D);goto _TLD3;_TLD2: _TLD3: _T2E=Cyc_compile_failure;
# 897
if(_T2E)goto _TLD5;else{goto _TLD7;}_TLD7: _T2F=Cyc_Flags_stop_after_pass;_T30=(int)_T2F;if(_T30 < 5)goto _TLD5;{
struct Cyc_JumpAnalysis_Jump_Anal_Result*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_JumpAnalysis_Jump_Anal_Result*(*)(int,struct Cyc_List_List*),int,struct Cyc_JumpAnalysis_Jump_Anal_Result*)=(struct Cyc_JumpAnalysis_Jump_Anal_Result*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_JumpAnalysis_Jump_Anal_Result*(*)(int,struct Cyc_List_List*),int,struct Cyc_JumpAnalysis_Jump_Anal_Result*))Cyc_do_stage;_T31=_TD4;}_T32=_tag_fat("jump checking",sizeof(char),14U);_T33=tds;jump_tables=_T31(_T32,_T33,Cyc_do_jumpanalysis,1,0);goto _TLD6;_TLD5: _TLD6: _T34=Cyc_compile_failure;
# 901
if(_T34)goto _TLD8;else{goto _TLDA;}_TLDA: _T35=Cyc_Flags_stop_after_pass;_T36=(int)_T35;if(_T36 < 6)goto _TLD8;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*))Cyc_do_stage;_T37=_TD4;}_T38=_tag_fat("control-flow checking",sizeof(char),22U);_T39=tds;_T3A=_check_null(jump_tables);_T3B=tds;tds=_T37(_T38,_T39,Cyc_do_cfcheck,_T3A,_T3B);goto _TLD9;_TLD8: _TLD9: _T3C=Cyc_compile_failure;
# 905
if(_T3C)goto _TLDB;else{goto _TLDD;}_TLDD: _T3D=Cyc_Flags_stop_after_pass;_T3E=(int)_T3D;if(_T3E < 8)goto _TLDB;{
int(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,int(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,int)=(int(*)(struct _fat_ptr,struct Cyc_List_List*,int(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,int))Cyc_do_stage;_T3F=_TD4;}_T40=_tag_fat("check insertion",sizeof(char),16U);_T41=tds;_T42=_check_null(jump_tables);_T3F(_T40,_T41,Cyc_do_insert_checks,_T42,1);goto _TLDC;_TLDB: _TLDC: _T43=Cyc_compile_failure;
# 909
if(_T43)goto _TLDE;else{goto _TLE0;}_TLE0: _T44=Cyc_generate_interface_r;if(!_T44)goto _TLDE;_T45=Cyc_Flags_stop_after_pass;_T46=(int)_T45;if(_T46 < 9)goto _TLDE;_T48=interfacefile;_T49=_untag_fat_ptr_check_bound(_T48,sizeof(char),1U);_T4A=_check_null(_T49);{const char*_TD4=(const char*)_T4A;_T4B=(void*)_TD4;_T4C=(void*)_TD4;_T4D=_get_zero_arr_size_char(_T4C,1U);_T47=_tag_fat(_T4B,sizeof(char),_T4D);}_T4E=
# 911
_tag_fat("w",sizeof(char),2U);_T4F=_tag_fat("interface file",sizeof(char),15U);{struct Cyc___cycFILE*inter_file=Cyc_try_file_open(_T47,_T4E,_T4F);
if(inter_file!=0)goto _TLE1;
Cyc_compile_failure=1;goto _TLE2;
# 915
_TLE1: _T50=& Cyc_Absynpp_cyci_params_r;_T51=(struct Cyc_Absynpp_Params*)_T50;Cyc_Absyndump_set_params(_T51);
Cyc_Absyndump_dump_interface(tds,inter_file);
Cyc_fclose(inter_file);_T52=& Cyc_Absynpp_tc_params_r;_T53=(struct Cyc_Absynpp_Params*)_T52;
Cyc_Absynpp_set_params(_T53);_TLE2: _T54=Cyc_compile_failure;
# 922
if(_T54)goto _TLE3;else{goto _TLE5;}_TLE5: _T55=Cyc_ic_r;if(!_T55)goto _TLE3;_T56=interfacefile;_T57=_untag_fat_ptr(_T56,sizeof(char),1U);_T58=(const char*)_T57;{
struct Cyc___cycFILE*inter_file=Cyc_fopen(_T58,"r");_T59=interfaceobjfile;_T5A=
_tag_fat("w",sizeof(char),2U);_T5B=_tag_fat("interface object file",sizeof(char),22U);{struct Cyc___cycFILE*inter_objfile=Cyc_try_file_open(_T59,_T5A,_T5B);
if(inter_objfile!=0)goto _TLE6;
Cyc_compile_failure=1;goto _TLE7;
# 928
_TLE6: Cyc_Warn_reset(interfacefile);{struct _tuple14 _TD4;
_TD4.f0=te;_TD4.f1=inter_file;_TD4.f2=inter_objfile;_T5C=_TD4;}{struct _tuple14 int_env=_T5C;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _tuple14*,struct Cyc_List_List*),struct _tuple14*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _tuple14*,struct Cyc_List_List*),struct _tuple14*,struct Cyc_List_List*))Cyc_do_stage;_T5D=_TD4;}_T5E=_tag_fat("interface checking",sizeof(char),19U);_T5F=tds;_T60=& int_env;_T61=tds;tds=_T5D(_T5E,_T5F,Cyc_do_interface,_T60,_T61);
if(inter_file==0)goto _TLE8;
Cyc_file_close(inter_file);goto _TLE9;_TLE8: _TLE9:
 Cyc_file_close(inter_objfile);}_TLE7:;}}goto _TLE4;_TLE3: _TLE4:;}goto _TLDF;_TLDE: _TLDF: _T62=Cyc_Flags_interproc;
# 937
if(_T62)goto _TLEC;else{goto _TLED;}_TLED: _T63=Cyc_Flags_resolve;if(_T63)goto _TLEC;else{goto _TLEA;}
_TLEC: Cyc_BansheeIf_discharge_implications();_T64=
Cyc_Warn_error_p();if(!_T64)goto _TLEE;
Cyc_compile_failure=1;_T65=Cyc_stderr;_T66=
_tag_fat("\nCOMPILATION FAILED!\n",sizeof(char),22U);_T67=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T65,_T66,_T67);
Cyc_fflush(Cyc_stderr);goto _TLEF;_TLEE: _TLEF: goto _TLEB;_TLEA: _TLEB: _T68=Cyc_compile_failure;
# 947
if(_T68)goto _TLF0;else{goto _TLF2;}_TLF2: _T69=Cyc_Flags_stop_after_pass;_T6A=(int)_T69;if(_T6A < 9)goto _TLF0;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Hashtable_Table*,struct Cyc_List_List*),struct Cyc_Hashtable_Table*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Hashtable_Table*,struct Cyc_List_List*),struct Cyc_Hashtable_Table*,struct Cyc_List_List*))Cyc_do_stage;_T6B=_TD4;}_T6C=_tag_fat("translation to C",sizeof(char),17U);_T6D=tds;_T6E=_check_null(jump_tables);_T6F=_T6E->pop_tables;_T70=tds;tds=_T6B(_T6C,_T6D,Cyc_do_translate,_T6F,_T70);goto _TLF1;_TLF0: _TLF1: _T71=Cyc_compile_failure;
# 951
if(_T71)goto _TLF3;else{goto _TLF5;}_TLF5: _T72=Cyc_Flags_stop_after_pass;_T73=(int)_T72;if(_T73 < 10)goto _TLF3;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*))Cyc_do_stage;_T74=_TD4;}_T75=_tag_fat("aggregate removal",sizeof(char),18U);_T76=tds;_T77=tds;tds=_T74(_T75,_T76,Cyc_do_removeaggrs,1,_T77);goto _TLF4;_TLF3: _TLF4: _T78=Cyc_compile_failure;
# 955
if(_T78)goto _TLF6;else{goto _TLF8;}_TLF8: _T79=Cyc_nolower_r;if(_T79)goto _TLF6;else{goto _TLF9;}_TLF9: _T7A=Cyc_Flags_stop_after_pass;_T7B=(int)_T7A;if(_T7B < 10)goto _TLF6;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*))Cyc_do_stage;_T7C=_TD4;}_T7D=_tag_fat("lowering C code",sizeof(char),16U);_T7E=tds;_T7F=tds;tds=_T7C(_T7D,_T7E,Cyc_do_lower,1,_T7F);goto _TLF7;_TLF6: _TLF7: _T80=Cyc_compile_failure;
# 959
if(_T80)goto _TLFA;else{goto _TLFC;}_TLFC: _T81=Cyc_Flags_stop_after_pass;_T82=(int)_T81;if(_T82 < 11)goto _TLFA;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*))Cyc_do_stage;_T83=_TD4;}_T84=_tag_fat("unused label removal",sizeof(char),21U);_T85=tds;_T86=tds;tds=_T83(_T84,_T85,Cyc_do_removelabs,1,_T86);goto _TLFB;_TLFA: _TLFB: _T87=Cyc_compile_failure;
# 965
if(_T87)goto _TLFD;else{goto _TLFF;}_TLFF: _T88=Cyc_Flags_stop_after_pass;_T89=(int)_T88;if(_T89 < 9)goto _TLFD;
Cyc_Toc_finish();goto _TLFE;_TLFD: _TLFE: _T8A=Cyc_compile_failure;
# 968
if(_T8A)goto _TL100;else{goto _TL102;}_TL102: _T8B=Cyc_Flags_stop_after_pass;_T8C=(int)_T8B;if(_T8C < 14)goto _TL100;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*))Cyc_do_stage;_T8D=_TD4;}_T8E=_tag_fat("low treeshaking",sizeof(char),16U);_T8F=tds;_T90=tds;tds=_T8D(_T8E,_T8F,Cyc_do_lowtreeshake,1,_T90);goto _TL101;_TL100: _TL101: _T91=Cyc_compile_failure;
# 971
if(_T91)goto _TL103;else{goto _TL105;}_TL105: _T92=Cyc_Flags_stop_after_pass;_T93=(int)_T92;if(_T93 < 12)goto _TL103;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*))Cyc_do_stage;_T94=_TD4;}_T95=_tag_fat("renaming temporaries",sizeof(char),21U);_T96=tds;_T97=tds;tds=_T94(_T95,_T96,Cyc_do_temprename,1,_T97);goto _TL104;_TL103: _TL104: _T98=Cyc_compile_failure;
# 974
if(_T98)goto _TL106;else{goto _TL108;}_TL108: _T99=Cyc_Flags_stop_after_pass;_T9A=(int)_T99;if(_T9A < 13)goto _TL106;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(int,struct Cyc_List_List*),int,struct Cyc_List_List*))Cyc_do_stage;_T9B=_TD4;}_T9C=_tag_fat("removing casts",sizeof(char),15U);_T9D=tds;_T9E=tds;tds=_T9B(_T9C,_T9D,Cyc_do_castremove,1,_T9E);goto _TL107;_TL106: _TL107: _T9F=Cyc_compile_failure;
# 980
if(_T9F)goto _TL109;else{goto _TL10B;}_TL10B: _TA0=Cyc_Flags_interproc;if(!_TA0)goto _TL109;_TA1=Cyc_Flags_no_merge;if(!_TA1)goto _TL109;
# 983
Cyc_Interproc_emit_decls(filename,tds);goto _TL10A;_TL109: _TL10A: _TA2=Cyc_compile_failure;
# 985
if(_TA2)goto _TL10C;else{goto _TL10E;}
_TL10E: Cyc_Warn_flush_warnings();goto _TL10D;_TL10C: _TL10D: _TA3=Cyc_Flags_stop_after_pass;_TA4=(int)_TA3;
if(_TA4 <= 0)goto _TL10F;
Cyc_remove_file(preprocfile);goto _TL110;_TL10F: _TL110:
 if(Cyc_uncaught_exn==0)goto _TL111;{
struct _tuple13*_TD4=Cyc_uncaught_exn;int _TD5;const char*_TD6;void*_TD7;{struct _tuple13 _TD8=*_TD4;_TD7=_TD8.f0;_TD6=_TD8.f1;_TD5=_TD8.f2;}{void*e=_TD7;const char*fn=_TD6;int line=_TD5;{struct Cyc_String_pa_PrintArg_struct _TD8;_TD8.tag=0;{const char*_TD9=
# 992
Cyc_Core_get_exn_name(e);_TA7=(void*)_TD9;_TA8=(void*)_TD9;_TA9=_get_zero_arr_size_char(_TA8,1U);_TA6=_tag_fat(_TA7,sizeof(char),_TA9);}_TD8.f1=_TA6;_TA5=_TD8;}{struct Cyc_String_pa_PrintArg_struct _TD8=_TA5;{struct Cyc_String_pa_PrintArg_struct _TD9;_TD9.tag=0;{const char*_TDA=fn;_TAC=(void*)_TDA;_TAD=(void*)_TDA;_TAE=_get_zero_arr_size_char(_TAD,1U);_TAB=_tag_fat(_TAC,sizeof(char),_TAE);}_TD9.f1=_TAB;_TAA=_TD9;}{struct Cyc_String_pa_PrintArg_struct _TD9=_TAA;{struct Cyc_Int_pa_PrintArg_struct _TDA;_TDA.tag=1;_TB0=line;_TDA.f1=(unsigned long)_TB0;_TAF=_TDA;}{struct Cyc_Int_pa_PrintArg_struct _TDA=_TAF;void*_TDB[3];_TDB[0]=& _TD8;_TDB[1]=& _TD9;_TDB[2]=& _TDA;_TB1=Cyc_stderr;_TB2=
# 991
_tag_fat("uncaught exception: %s from %s, line %d\n",sizeof(char),41U);_TB3=_tag_fat(_TDB,sizeof(void*),3);Cyc_fprintf(_TB1,_TB2,_TB3);}}}
# 993
Cyc_fflush(Cyc_stderr);
return;}}_TL111: _TB4=Cyc_Flags_interproc;
# 997
if(!_TB4)goto _TL113;_TB5=Cyc_Flags_resolve;if(_TB5)goto _TL113;else{goto _TL115;}
_TL115: return;_TL113: {
# 1000
struct Cyc___cycFILE*out_file;_TB6=Cyc_Flags_stop_after_pass;_TB7=(int)_TB6;
if(_TB7 > 0)goto _TL116;
return;_TL116: _TB8=Cyc_Flags_stop_after_pass;_TB9=(int)_TB8;
# 1004
if(_TB9 > 6)goto _TL118;
if(Cyc_output_file==0)goto _TL11A;_TBA=Cyc_output_file;_TBB=*_TBA;_TBC=
_tag_fat("w",sizeof(char),2U);_TBD=_tag_fat("output file",sizeof(char),12U);out_file=Cyc_try_file_open(_TBB,_TBC,_TBD);goto _TL11B;
# 1008
_TL11A: out_file=Cyc_stdout;_TL11B: goto _TL119;
_TL118: _TBE=Cyc_Flags_stop_after_pass;_TBF=(int)_TBE;if(_TBF >= 15)goto _TL11C;if(Cyc_output_file==0)goto _TL11C;_TC0=Cyc_output_file;_TC1=*_TC0;_TC2=
_tag_fat("w",sizeof(char),2U);_TC3=_tag_fat("output file",sizeof(char),12U);out_file=Cyc_try_file_open(_TC1,_TC2,_TC3);goto _TL11D;
# 1012
_TL11C: _TC4=cfile;_TC5=_tag_fat("w",sizeof(char),2U);_TC6=_tag_fat("output file",sizeof(char),12U);out_file=Cyc_try_file_open(_TC4,_TC5,_TC6);_TL11D: _TL119: _TC7=Cyc_compile_failure;
# 1014
if(_TC7)goto _TL120;else{goto _TL121;}_TL121: _TC8=out_file;_TC9=(unsigned)_TC8;if(_TC9)goto _TL11E;else{goto _TL120;}_TL120: return;_TL11E: _TCA=Cyc_noprint_r;
# 1016
if(_TCA)goto _TL122;else{goto _TL124;}
_TL124:{struct _tuple15*env;env=_cycalloc(sizeof(struct _tuple15));_TCB=env;_TCB->f0=out_file;_TCC=env;_TCC->f1=cfile;{
struct Cyc_List_List*(*_TD4)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _tuple15*,struct Cyc_List_List*),struct _tuple15*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct _tuple15*,struct Cyc_List_List*),struct _tuple15*,struct Cyc_List_List*))Cyc_do_stage;_TCD=_TD4;}_TCE=_tag_fat("printing",sizeof(char),9U);_TCF=tds;_TD0=env;_TD1=tds;tds=_TCD(_TCE,_TCF,Cyc_do_print,_TD0,_TD1);
Cyc_file_close(out_file);{struct Cyc_List_List*_TD4=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_TD5=_cycalloc(sizeof(struct _fat_ptr));
*_TD5=Cyc_strdup(cfile);_TD3=(struct _fat_ptr*)_TD5;}_TD4->hd=_TD3;_TD4->tl=Cyc_cfiles;_TD2=(struct Cyc_List_List*)_TD4;}Cyc_cfiles=_TD2;}goto _TL123;_TL122: _TL123:;}}}}}}}static char _TmpGC[8U]="<final>";
# 1024
static struct _fat_ptr Cyc_final_str={(unsigned char*)_TmpGC,(unsigned char*)_TmpGC,(unsigned char*)_TmpGC + 8U};
static struct _fat_ptr*Cyc_final_strptr=(struct _fat_ptr*)& Cyc_final_str;
# 1027
static struct Cyc_Interface_I*Cyc_read_cycio(struct _fat_ptr*n){struct Cyc_Interface_I*_T0;struct _handler_cons*_T1;int _T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;void*_T5;struct Cyc_Core_Invalid_argument_exn_struct*_T6;char*_T7;char*_T8;struct _fat_ptr*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct _fat_ptr _TE;struct Cyc_Interface_I*_TF;
if(n!=Cyc_final_strptr)goto _TL125;_T0=
Cyc_Interface_final();return _T0;_TL125: {
struct _fat_ptr basename;{struct _handler_cons _T10;_T1=& _T10;_push_handler(_T1);{int _T11=0;_T2=setjmp(_T10.handler);if(!_T2)goto _TL127;_T11=1;goto _TL128;_TL127: _TL128: if(_T11)goto _TL129;else{goto _TL12B;}_TL12B: _T3=n;_T4=*_T3;
basename=Cyc_Filename_chop_extension(_T4);_pop_handler();goto _TL12A;_TL129: _T5=Cyc_Core_get_exn_thrown();{void*_T12=(void*)_T5;void*_T13;_T6=(struct Cyc_Core_Invalid_argument_exn_struct*)_T12;_T7=_T6->tag;_T8=Cyc_Core_Invalid_argument;if(_T7!=_T8)goto _TL12C;_T9=n;
basename=*_T9;goto _LL0;_TL12C: _T13=_T12;{void*exn=_T13;_rethrow(exn);}_LL0:;}_TL12A:;}}_TA=basename;_TB=
# 1034
_tag_fat(".cycio",sizeof(char),7U);{struct _fat_ptr nf=Cyc_strconcat(_TA,_TB);_TC=nf;_TD=
_tag_fat("rb",sizeof(char),3U);_TE=_tag_fat("interface object file",sizeof(char),22U);{struct Cyc___cycFILE*f=Cyc_try_file_open(_TC,_TD,_TE);
if(f!=0)goto _TL12E;
Cyc_compile_failure=1;
Cyc_remove_cfiles();
exit(1);goto _TL12F;_TL12E: _TL12F:
# 1041
 Cyc_Warn_reset(nf);{
struct Cyc_Interface_I*i=Cyc_Interface_load(f);
Cyc_file_close(f);_TF=i;
return _TF;}}}}}
# 1047
static int Cyc_is_cfile(struct _fat_ptr*n){struct _fat_ptr*_T0;struct _fat_ptr _T1;unsigned char*_T2;const char*_T3;char _T4;int _T5;int _T6;_T0=n;_T1=*_T0;_T2=_check_fat_subscript(_T1,sizeof(char),0);_T3=(const char*)_T2;_T4=*_T3;_T5=(int)_T4;_T6=_T5!=45;
return _T6;}
# 1051
static void Cyc_set_max_vc_summary(int n){int _T0;_T0=n;
Cyc_Flags_max_vc_summary=(unsigned)_T0;}
# 1054
static void Cyc_set_max_vc_paths(int n){int _T0;_T0=n;
Cyc_Flags_max_vc_paths=(unsigned)_T0;}
# 1057
static void Cyc_set_max_vc_term_size(int n){int _T0;_T0=n;
Cyc_Flags_max_vc_term_size=(unsigned)_T0;}
# 1061
extern void GC_blacklist_warn_clear (void);struct _tuple16{struct _fat_ptr f0;int f1;struct _fat_ptr f2;void*f3;struct _fat_ptr f4;};
# 1071
void Cyc_print_options (void);
# 1079
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt1_spec={3,& Cyc_Flags_verbose};static char _TmpGD[3U]="-v";static char _TmpGE[1U]="";static char _TmpGF[35U]="print compilation stages verbosely";struct _tuple16 Cyc_opt1_tuple={.f0={(unsigned char*)_TmpGD,(unsigned char*)_TmpGD,(unsigned char*)_TmpGD + 3U},.f1=0,.f2={(unsigned char*)_TmpGE,(unsigned char*)_TmpGE,(unsigned char*)_TmpGE + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt1_spec),.f4={(unsigned char*)_TmpGF,(unsigned char*)_TmpGF,(unsigned char*)_TmpGF + 35U}};struct Cyc_List_List Cyc_opt1={(void*)& Cyc_opt1_tuple,0};
# 1081
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt2_spec={0,Cyc_print_version};static char _TmpG10[10U]="--version";static char _TmpG11[1U]="";static char _TmpG12[35U]="Print version information and exit";struct _tuple16 Cyc_opt2_tuple={.f0={(unsigned char*)_TmpG10,(unsigned char*)_TmpG10,(unsigned char*)_TmpG10 + 10U},.f1=0,.f2={(unsigned char*)_TmpG11,(unsigned char*)_TmpG11,(unsigned char*)_TmpG11 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt2_spec),.f4={(unsigned char*)_TmpG12,(unsigned char*)_TmpG12,(unsigned char*)_TmpG12 + 35U}};struct Cyc_List_List Cyc_opt2={(void*)& Cyc_opt2_tuple,0};
# 1084
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt3_spec={5,Cyc_set_output_file};static char _TmpG13[3U]="-o";static char _TmpG14[8U]=" <file>";static char _TmpG15[35U]="Set the output file name to <file>";struct _tuple16 Cyc_opt3_tuple={.f0={(unsigned char*)_TmpG13,(unsigned char*)_TmpG13,(unsigned char*)_TmpG13 + 3U},.f1=0,.f2={(unsigned char*)_TmpG14,(unsigned char*)_TmpG14,(unsigned char*)_TmpG14 + 8U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt3_spec),.f4={(unsigned char*)_TmpG15,(unsigned char*)_TmpG15,(unsigned char*)_TmpG15 + 35U}};struct Cyc_List_List Cyc_opt3={(void*)& Cyc_opt3_tuple,0};
# 1087
struct Cyc_Arg_Flag_spec_Arg_Spec_struct Cyc_opt4_spec={1,Cyc_add_cpparg};static char _TmpG16[3U]="-D";static char _TmpG17[17U]="<name>[=<value>]";static char _TmpG18[32U]="Pass definition to preprocessor";struct _tuple16 Cyc_opt4_tuple={.f0={(unsigned char*)_TmpG16,(unsigned char*)_TmpG16,(unsigned char*)_TmpG16 + 3U},.f1=1,.f2={(unsigned char*)_TmpG17,(unsigned char*)_TmpG17,(unsigned char*)_TmpG17 + 17U},.f3=(void*)((struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)& Cyc_opt4_spec),.f4={(unsigned char*)_TmpG18,(unsigned char*)_TmpG18,(unsigned char*)_TmpG18 + 32U}};struct Cyc_List_List Cyc_opt4={(void*)& Cyc_opt4_tuple,0};
# 1090
struct Cyc_Arg_Flag_spec_Arg_Spec_struct Cyc_opt5_spec={1,Cyc_Specsfile_add_cyclone_exec_path};static char _TmpG19[3U]="-B";static char _TmpG1A[7U]="<file>";static char _TmpG1B[60U]="Add to the list of directories to search for compiler files";struct _tuple16 Cyc_opt5_tuple={.f0={(unsigned char*)_TmpG19,(unsigned char*)_TmpG19,(unsigned char*)_TmpG19 + 3U},.f1=1,.f2={(unsigned char*)_TmpG1A,(unsigned char*)_TmpG1A,(unsigned char*)_TmpG1A + 7U},.f3=(void*)((struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)& Cyc_opt5_spec),.f4={(unsigned char*)_TmpG1B,(unsigned char*)_TmpG1B,(unsigned char*)_TmpG1B + 60U}};struct Cyc_List_List Cyc_opt5={(void*)& Cyc_opt5_tuple,0};
# 1093
struct Cyc_Arg_Flag_spec_Arg_Spec_struct Cyc_opt6_spec={1,Cyc_add_cpparg};static char _TmpG1C[3U]="-I";static char _TmpG1D[6U]="<dir>";static char _TmpG1E[59U]="Add to the list of directories to search for include files";struct _tuple16 Cyc_opt6_tuple={.f0={(unsigned char*)_TmpG1C,(unsigned char*)_TmpG1C,(unsigned char*)_TmpG1C + 3U},.f1=1,.f2={(unsigned char*)_TmpG1D,(unsigned char*)_TmpG1D,(unsigned char*)_TmpG1D + 6U},.f3=(void*)((struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)& Cyc_opt6_spec),.f4={(unsigned char*)_TmpG1E,(unsigned char*)_TmpG1E,(unsigned char*)_TmpG1E + 59U}};struct Cyc_List_List Cyc_opt6={(void*)& Cyc_opt6_tuple,0};
# 1096
struct Cyc_Arg_Flag_spec_Arg_Spec_struct Cyc_opt7_spec={1,Cyc_add_ccarg};static char _TmpG1F[3U]="-L";static char _TmpG20[6U]="<dir>";static char _TmpG21[38U]="Add to the list of directories for -l";struct _tuple16 Cyc_opt7_tuple={.f0={(unsigned char*)_TmpG1F,(unsigned char*)_TmpG1F,(unsigned char*)_TmpG1F + 3U},.f1=1,.f2={(unsigned char*)_TmpG20,(unsigned char*)_TmpG20,(unsigned char*)_TmpG20 + 6U},.f3=(void*)((struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)& Cyc_opt7_spec),.f4={(unsigned char*)_TmpG21,(unsigned char*)_TmpG21,(unsigned char*)_TmpG21 + 38U}};struct Cyc_List_List Cyc_opt7={(void*)& Cyc_opt7_tuple,0};
# 1099
struct Cyc_Arg_Flag_spec_Arg_Spec_struct Cyc_opt8_spec={1,Cyc_add_libarg};static char _TmpG22[3U]="-l";static char _TmpG23[10U]="<libname>";static char _TmpG24[13U]="Library file";struct _tuple16 Cyc_opt8_tuple={.f0={(unsigned char*)_TmpG22,(unsigned char*)_TmpG22,(unsigned char*)_TmpG22 + 3U},.f1=1,.f2={(unsigned char*)_TmpG23,(unsigned char*)_TmpG23,(unsigned char*)_TmpG23 + 10U},.f3=(void*)((struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)& Cyc_opt8_spec),.f4={(unsigned char*)_TmpG24,(unsigned char*)_TmpG24,(unsigned char*)_TmpG24 + 13U}};struct Cyc_List_List Cyc_opt8={(void*)& Cyc_opt8_tuple,0};
# 1102
struct Cyc_Arg_Flag_spec_Arg_Spec_struct Cyc_opt9_spec={1,Cyc_add_marg};static char _TmpG25[3U]="-m";static char _TmpG26[9U]="<option>";static char _TmpG27[52U]="GCC specific: pass machine-dependent flag on to gcc";struct _tuple16 Cyc_opt9_tuple={.f0={(unsigned char*)_TmpG25,(unsigned char*)_TmpG25,(unsigned char*)_TmpG25 + 3U},.f1=1,.f2={(unsigned char*)_TmpG26,(unsigned char*)_TmpG26,(unsigned char*)_TmpG26 + 9U},.f3=(void*)((struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)& Cyc_opt9_spec),.f4={(unsigned char*)_TmpG27,(unsigned char*)_TmpG27,(unsigned char*)_TmpG27 + 52U}};struct Cyc_List_List Cyc_opt9={(void*)& Cyc_opt9_tuple,0};
# 1105
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt10_spec={0,Cyc_set_stop_after_objectfile};static char _TmpG28[3U]="-c";static char _TmpG29[1U]="";static char _TmpG2A[61U]="Produce an object file instead of an executable; do not link";struct _tuple16 Cyc_opt10_tuple={.f0={(unsigned char*)_TmpG28,(unsigned char*)_TmpG28,(unsigned char*)_TmpG28 + 3U},.f1=0,.f2={(unsigned char*)_TmpG29,(unsigned char*)_TmpG29,(unsigned char*)_TmpG29 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt10_spec),.f4={(unsigned char*)_TmpG2A,(unsigned char*)_TmpG2A,(unsigned char*)_TmpG2A + 61U}};struct Cyc_List_List Cyc_opt10={(void*)& Cyc_opt10_tuple,0};
# 1108
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt11_spec={5,Cyc_set_inputtype};static char _TmpG2B[3U]="-x";static char _TmpG2C[12U]=" <language>";static char _TmpG2D[49U]="Specify <language> for the following input files";struct _tuple16 Cyc_opt11_tuple={.f0={(unsigned char*)_TmpG2B,(unsigned char*)_TmpG2B,(unsigned char*)_TmpG2B + 3U},.f1=0,.f2={(unsigned char*)_TmpG2C,(unsigned char*)_TmpG2C,(unsigned char*)_TmpG2C + 12U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt11_spec),.f4={(unsigned char*)_TmpG2D,(unsigned char*)_TmpG2D,(unsigned char*)_TmpG2D + 49U}};struct Cyc_List_List Cyc_opt11={(void*)& Cyc_opt11_tuple,0};
# 1111
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt12_spec={0,Cyc_set_pa};static char _TmpG2E[4U]="-pa";static char _TmpG2F[1U]="";static char _TmpG30[33U]="Compile for profiling with aprof";struct _tuple16 Cyc_opt12_tuple={.f0={(unsigned char*)_TmpG2E,(unsigned char*)_TmpG2E,(unsigned char*)_TmpG2E + 4U},.f1=0,.f2={(unsigned char*)_TmpG2F,(unsigned char*)_TmpG2F,(unsigned char*)_TmpG2F + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt12_spec),.f4={(unsigned char*)_TmpG30,(unsigned char*)_TmpG30,(unsigned char*)_TmpG30 + 33U}};struct Cyc_List_List Cyc_opt12={(void*)& Cyc_opt12_tuple,0};
# 1114
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt13_spec={0,Cyc_set_stop_after_asmfile};static char _TmpG31[3U]="-S";static char _TmpG32[1U]="";static char _TmpG33[35U]="Stop after producing assembly code";struct _tuple16 Cyc_opt13_tuple={.f0={(unsigned char*)_TmpG31,(unsigned char*)_TmpG31,(unsigned char*)_TmpG31 + 3U},.f1=0,.f2={(unsigned char*)_TmpG32,(unsigned char*)_TmpG32,(unsigned char*)_TmpG32 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt13_spec),.f4={(unsigned char*)_TmpG33,(unsigned char*)_TmpG33,(unsigned char*)_TmpG33 + 35U}};struct Cyc_List_List Cyc_opt13={(void*)& Cyc_opt13_tuple,0};
# 1117
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt14_spec={0,Cyc_set_produce_dependencies};static char _TmpG34[3U]="-M";static char _TmpG35[1U]="";static char _TmpG36[21U]="Produce dependencies";struct _tuple16 Cyc_opt14_tuple={.f0={(unsigned char*)_TmpG34,(unsigned char*)_TmpG34,(unsigned char*)_TmpG34 + 3U},.f1=0,.f2={(unsigned char*)_TmpG35,(unsigned char*)_TmpG35,(unsigned char*)_TmpG35 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt14_spec),.f4={(unsigned char*)_TmpG36,(unsigned char*)_TmpG36,(unsigned char*)_TmpG36 + 21U}};struct Cyc_List_List Cyc_opt14={(void*)& Cyc_opt14_tuple,0};
# 1120
struct Cyc_Arg_Flag_spec_Arg_Spec_struct Cyc_opt15_spec={1,Cyc_add_cpparg};static char _TmpG37[4U]="-MG";static char _TmpG38[1U]="";static char _TmpG39[68U]="When producing dependencies assume that missing files are generated";struct _tuple16 Cyc_opt15_tuple={.f0={(unsigned char*)_TmpG37,(unsigned char*)_TmpG37,(unsigned char*)_TmpG37 + 4U},.f1=0,.f2={(unsigned char*)_TmpG38,(unsigned char*)_TmpG38,(unsigned char*)_TmpG38 + 1U},.f3=(void*)((struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)& Cyc_opt15_spec),.f4={(unsigned char*)_TmpG39,(unsigned char*)_TmpG39,(unsigned char*)_TmpG39 + 68U}};struct Cyc_List_List Cyc_opt15={(void*)& Cyc_opt15_tuple,0};
# 1124
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt16_spec={5,Cyc_set_dependencies_target};static char _TmpG3A[4U]="-MT";static char _TmpG3B[10U]=" <target>";static char _TmpG3C[29U]="Give target for dependencies";struct _tuple16 Cyc_opt16_tuple={.f0={(unsigned char*)_TmpG3A,(unsigned char*)_TmpG3A,(unsigned char*)_TmpG3A + 4U},.f1=0,.f2={(unsigned char*)_TmpG3B,(unsigned char*)_TmpG3B,(unsigned char*)_TmpG3B + 10U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt16_spec),.f4={(unsigned char*)_TmpG3C,(unsigned char*)_TmpG3C,(unsigned char*)_TmpG3C + 29U}};struct Cyc_List_List Cyc_opt16={(void*)& Cyc_opt16_tuple,0};
# 1127
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt17_spec={5,Cyc_Specsfile_set_target_arch};static char _TmpG3D[3U]="-b";static char _TmpG3E[10U]="<machine>";static char _TmpG3F[19U]="Set target machine";struct _tuple16 Cyc_opt17_tuple={.f0={(unsigned char*)_TmpG3D,(unsigned char*)_TmpG3D,(unsigned char*)_TmpG3D + 3U},.f1=0,.f2={(unsigned char*)_TmpG3E,(unsigned char*)_TmpG3E,(unsigned char*)_TmpG3E + 10U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt17_spec),.f4={(unsigned char*)_TmpG3F,(unsigned char*)_TmpG3F,(unsigned char*)_TmpG3F + 19U}};struct Cyc_List_List Cyc_opt17={(void*)& Cyc_opt17_tuple,0};
# 1130
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt18_spec={3,& Cyc_Flags_warn_lose_unique};static char _TmpG40[14U]="-Wlose-unique";static char _TmpG41[1U]="";static char _TmpG42[49U]="Try to warn when a unique pointer might get lost";struct _tuple16 Cyc_opt18_tuple={.f0={(unsigned char*)_TmpG40,(unsigned char*)_TmpG40,(unsigned char*)_TmpG40 + 14U},.f1=0,.f2={(unsigned char*)_TmpG41,(unsigned char*)_TmpG41,(unsigned char*)_TmpG41 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt18_spec),.f4={(unsigned char*)_TmpG42,(unsigned char*)_TmpG42,(unsigned char*)_TmpG42 + 49U}};struct Cyc_List_List Cyc_opt18={(void*)& Cyc_opt18_tuple,0};
# 1133
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt19_spec={3,& Cyc_Flags_warn_override};static char _TmpG43[11U]="-Woverride";static char _TmpG44[1U]="";static char _TmpG45[58U]="Warn when a local variable overrides an existing variable";struct _tuple16 Cyc_opt19_tuple={.f0={(unsigned char*)_TmpG43,(unsigned char*)_TmpG43,(unsigned char*)_TmpG43 + 11U},.f1=0,.f2={(unsigned char*)_TmpG44,(unsigned char*)_TmpG44,(unsigned char*)_TmpG44 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt19_spec),.f4={(unsigned char*)_TmpG45,(unsigned char*)_TmpG45,(unsigned char*)_TmpG45 + 58U}};struct Cyc_List_List Cyc_opt19={(void*)& Cyc_opt19_tuple,0};
# 1136
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt20_spec={0,Cyc_Flags_set_all_warnings};static char _TmpG46[6U]="-Wall";static char _TmpG47[1U]="";static char _TmpG48[21U]="Turn on all warnings";struct _tuple16 Cyc_opt20_tuple={.f0={(unsigned char*)_TmpG46,(unsigned char*)_TmpG46,(unsigned char*)_TmpG46 + 6U},.f1=0,.f2={(unsigned char*)_TmpG47,(unsigned char*)_TmpG47,(unsigned char*)_TmpG47 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt20_spec),.f4={(unsigned char*)_TmpG48,(unsigned char*)_TmpG48,(unsigned char*)_TmpG48 + 21U}};struct Cyc_List_List Cyc_opt20={(void*)& Cyc_opt20_tuple,0};
# 1139
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt21_spec={0,Cyc_Flags_set_cpponly};static char _TmpG49[3U]="-E";static char _TmpG4A[1U]="";static char _TmpG4B[25U]="Stop after preprocessing";struct _tuple16 Cyc_opt21_tuple={.f0={(unsigned char*)_TmpG49,(unsigned char*)_TmpG49,(unsigned char*)_TmpG49 + 3U},.f1=0,.f2={(unsigned char*)_TmpG4A,(unsigned char*)_TmpG4A,(unsigned char*)_TmpG4A + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt21_spec),.f4={(unsigned char*)_TmpG4B,(unsigned char*)_TmpG4B,(unsigned char*)_TmpG4B + 25U}};struct Cyc_List_List Cyc_opt21={(void*)& Cyc_opt21_tuple,0};
# 1142
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt22_spec={0,Cyc_Flags_set_parseonly};static char _TmpG4C[17U]="-stopafter-parse";static char _TmpG4D[1U]="";static char _TmpG4E[19U]="Stop after parsing";struct _tuple16 Cyc_opt22_tuple={.f0={(unsigned char*)_TmpG4C,(unsigned char*)_TmpG4C,(unsigned char*)_TmpG4C + 17U},.f1=0,.f2={(unsigned char*)_TmpG4D,(unsigned char*)_TmpG4D,(unsigned char*)_TmpG4D + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt22_spec),.f4={(unsigned char*)_TmpG4E,(unsigned char*)_TmpG4E,(unsigned char*)_TmpG4E + 19U}};struct Cyc_List_List Cyc_opt22={(void*)& Cyc_opt22_tuple,0};
# 1145
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt23_spec={0,Cyc_Flags_set_tconly};static char _TmpG4F[14U]="-stopafter-tc";static char _TmpG50[1U]="";static char _TmpG51[25U]="Stop after type checking";struct _tuple16 Cyc_opt23_tuple={.f0={(unsigned char*)_TmpG4F,(unsigned char*)_TmpG4F,(unsigned char*)_TmpG4F + 14U},.f1=0,.f2={(unsigned char*)_TmpG50,(unsigned char*)_TmpG50,(unsigned char*)_TmpG50 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt23_spec),.f4={(unsigned char*)_TmpG51,(unsigned char*)_TmpG51,(unsigned char*)_TmpG51 + 25U}};struct Cyc_List_List Cyc_opt23={(void*)& Cyc_opt23_tuple,0};
# 1148
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt24_spec={3,& Cyc_noprint_r};static char _TmpG52[9U]="-noprint";static char _TmpG53[1U]="";static char _TmpG54[42U]="Do not print output (when stopping early)";struct _tuple16 Cyc_opt24_tuple={.f0={(unsigned char*)_TmpG52,(unsigned char*)_TmpG52,(unsigned char*)_TmpG52 + 9U},.f1=0,.f2={(unsigned char*)_TmpG53,(unsigned char*)_TmpG53,(unsigned char*)_TmpG53 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt24_spec),.f4={(unsigned char*)_TmpG54,(unsigned char*)_TmpG54,(unsigned char*)_TmpG54 + 42U}};struct Cyc_List_List Cyc_opt24={(void*)& Cyc_opt24_tuple,0};
# 1151
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt25_spec={0,Cyc_Flags_set_cfonly};static char _TmpG55[14U]="-stopafter-cf";static char _TmpG56[1U]="";static char _TmpG57[33U]="Stop after control-flow checking";struct _tuple16 Cyc_opt25_tuple={.f0={(unsigned char*)_TmpG55,(unsigned char*)_TmpG55,(unsigned char*)_TmpG55 + 14U},.f1=0,.f2={(unsigned char*)_TmpG56,(unsigned char*)_TmpG56,(unsigned char*)_TmpG56 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt25_spec),.f4={(unsigned char*)_TmpG57,(unsigned char*)_TmpG57,(unsigned char*)_TmpG57 + 33U}};struct Cyc_List_List Cyc_opt25={(void*)& Cyc_opt25_tuple,0};
# 1154
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt26_spec={0,Cyc_Flags_set_toconly};static char _TmpG58[15U]="-stopafter-toc";static char _TmpG59[1U]="";static char _TmpG5A[28U]="Stop after translation to C";struct _tuple16 Cyc_opt26_tuple={.f0={(unsigned char*)_TmpG58,(unsigned char*)_TmpG58,(unsigned char*)_TmpG58 + 15U},.f1=0,.f2={(unsigned char*)_TmpG59,(unsigned char*)_TmpG59,(unsigned char*)_TmpG59 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt26_spec),.f4={(unsigned char*)_TmpG5A,(unsigned char*)_TmpG5A,(unsigned char*)_TmpG5A + 28U}};struct Cyc_List_List Cyc_opt26={(void*)& Cyc_opt26_tuple,0};
# 1157
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt27_spec={3,& Cyc_ic_r};static char _TmpG5B[4U]="-ic";static char _TmpG5C[1U]="";static char _TmpG5D[26U]="Activate the link-checker";struct _tuple16 Cyc_opt27_tuple={.f0={(unsigned char*)_TmpG5B,(unsigned char*)_TmpG5B,(unsigned char*)_TmpG5B + 4U},.f1=0,.f2={(unsigned char*)_TmpG5C,(unsigned char*)_TmpG5C,(unsigned char*)_TmpG5C + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt27_spec),.f4={(unsigned char*)_TmpG5D,(unsigned char*)_TmpG5D,(unsigned char*)_TmpG5D + 26U}};struct Cyc_List_List Cyc_opt27={(void*)& Cyc_opt27_tuple,0};
# 1160
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt28_spec={3,& Cyc_pp_r};static char _TmpG5E[4U]="-pp";static char _TmpG5F[1U]="";static char _TmpG60[47U]="Pretty print the C code that Cyclone generates";struct _tuple16 Cyc_opt28_tuple={.f0={(unsigned char*)_TmpG5E,(unsigned char*)_TmpG5E,(unsigned char*)_TmpG5E + 4U},.f1=0,.f2={(unsigned char*)_TmpG5F,(unsigned char*)_TmpG5F,(unsigned char*)_TmpG5F + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt28_spec),.f4={(unsigned char*)_TmpG60,(unsigned char*)_TmpG60,(unsigned char*)_TmpG60 + 47U}};struct Cyc_List_List Cyc_opt28={(void*)& Cyc_opt28_tuple,0};
# 1163
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt29_spec={4,& Cyc_pp_r};static char _TmpG61[4U]="-up";static char _TmpG62[1U]="";static char _TmpG63[55U]="Ugly print the C code that Cyclone generates (default)";struct _tuple16 Cyc_opt29_tuple={.f0={(unsigned char*)_TmpG61,(unsigned char*)_TmpG61,(unsigned char*)_TmpG61 + 4U},.f1=0,.f2={(unsigned char*)_TmpG62,(unsigned char*)_TmpG62,(unsigned char*)_TmpG62 + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt29_spec),.f4={(unsigned char*)_TmpG63,(unsigned char*)_TmpG63,(unsigned char*)_TmpG63 + 55U}};struct Cyc_List_List Cyc_opt29={(void*)& Cyc_opt29_tuple,0};
# 1166
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt30_spec={3,& Cyc_elim_se_r};static char _TmpG64[28U]="-elim-statement-expressions";static char _TmpG65[1U]="";static char _TmpG66[66U]="Avoid statement expressions in C output (implies --inline-checks)";struct _tuple16 Cyc_opt30_tuple={.f0={(unsigned char*)_TmpG64,(unsigned char*)_TmpG64,(unsigned char*)_TmpG64 + 28U},.f1=0,.f2={(unsigned char*)_TmpG65,(unsigned char*)_TmpG65,(unsigned char*)_TmpG65 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt30_spec),.f4={(unsigned char*)_TmpG66,(unsigned char*)_TmpG66,(unsigned char*)_TmpG66 + 66U}};struct Cyc_List_List Cyc_opt30={(void*)& Cyc_opt30_tuple,0};
# 1170
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt31_spec={4,& Cyc_elim_se_r};static char _TmpG67[31U]="-no-elim-statement-expressions";static char _TmpG68[1U]="";static char _TmpG69[47U]="Do not avoid statement expressions in C output";struct _tuple16 Cyc_opt31_tuple={.f0={(unsigned char*)_TmpG67,(unsigned char*)_TmpG67,(unsigned char*)_TmpG67 + 31U},.f1=0,.f2={(unsigned char*)_TmpG68,(unsigned char*)_TmpG68,(unsigned char*)_TmpG68 + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt31_spec),.f4={(unsigned char*)_TmpG69,(unsigned char*)_TmpG69,(unsigned char*)_TmpG69 + 47U}};struct Cyc_List_List Cyc_opt31={(void*)& Cyc_opt31_tuple,0};
# 1173
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt32_spec={0,Cyc_set_tovc};static char _TmpG6A[8U]="-un-gcc";static char _TmpG6B[1U]="";static char _TmpG6C[57U]="Avoid gcc extensions in C output (except for attributes)";struct _tuple16 Cyc_opt32_tuple={.f0={(unsigned char*)_TmpG6A,(unsigned char*)_TmpG6A,(unsigned char*)_TmpG6A + 8U},.f1=0,.f2={(unsigned char*)_TmpG6B,(unsigned char*)_TmpG6B,(unsigned char*)_TmpG6B + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt32_spec),.f4={(unsigned char*)_TmpG6C,(unsigned char*)_TmpG6C,(unsigned char*)_TmpG6C + 57U}};struct Cyc_List_List Cyc_opt32={(void*)& Cyc_opt32_tuple,0};
# 1176
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt33_spec={5,Cyc_set_c_compiler};static char _TmpG6D[8U]="-c-comp";static char _TmpG6E[12U]=" <compiler>";static char _TmpG6F[40U]="Produce C output for the given compiler";struct _tuple16 Cyc_opt33_tuple={.f0={(unsigned char*)_TmpG6D,(unsigned char*)_TmpG6D,(unsigned char*)_TmpG6D + 8U},.f1=0,.f2={(unsigned char*)_TmpG6E,(unsigned char*)_TmpG6E,(unsigned char*)_TmpG6E + 12U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt33_spec),.f4={(unsigned char*)_TmpG6F,(unsigned char*)_TmpG6F,(unsigned char*)_TmpG6F + 40U}};struct Cyc_List_List Cyc_opt33={(void*)& Cyc_opt33_tuple,0};
# 1179
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt34_spec={0,Cyc_set_save_temps};static char _TmpG70[12U]="-save-temps";static char _TmpG71[1U]="";static char _TmpG72[29U]="Don't delete temporary files";struct _tuple16 Cyc_opt34_tuple={.f0={(unsigned char*)_TmpG70,(unsigned char*)_TmpG70,(unsigned char*)_TmpG70 + 12U},.f1=0,.f2={(unsigned char*)_TmpG71,(unsigned char*)_TmpG71,(unsigned char*)_TmpG71 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt34_spec),.f4={(unsigned char*)_TmpG72,(unsigned char*)_TmpG72,(unsigned char*)_TmpG72 + 29U}};struct Cyc_List_List Cyc_opt34={(void*)& Cyc_opt34_tuple,0};
# 1182
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt35_spec={3,& Cyc_save_c_r};static char _TmpG73[8U]="-save-c";static char _TmpG74[1U]="";static char _TmpG75[31U]="Don't delete temporary C files";struct _tuple16 Cyc_opt35_tuple={.f0={(unsigned char*)_TmpG73,(unsigned char*)_TmpG73,(unsigned char*)_TmpG73 + 8U},.f1=0,.f2={(unsigned char*)_TmpG74,(unsigned char*)_TmpG74,(unsigned char*)_TmpG74 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt35_spec),.f4={(unsigned char*)_TmpG75,(unsigned char*)_TmpG75,(unsigned char*)_TmpG75 + 31U}};struct Cyc_List_List Cyc_opt35={(void*)& Cyc_opt35_tuple,0};
# 1185
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt36_spec={0,Cyc_clear_lineno};static char _TmpG76[11U]="--nolineno";static char _TmpG77[1U]="";static char _TmpG78[63U]="Don't generate line numbers for debugging (automatic with -pp)";struct _tuple16 Cyc_opt36_tuple={.f0={(unsigned char*)_TmpG76,(unsigned char*)_TmpG76,(unsigned char*)_TmpG76 + 11U},.f1=0,.f2={(unsigned char*)_TmpG77,(unsigned char*)_TmpG77,(unsigned char*)_TmpG77 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt36_spec),.f4={(unsigned char*)_TmpG78,(unsigned char*)_TmpG78,(unsigned char*)_TmpG78 + 63U}};struct Cyc_List_List Cyc_opt36={(void*)& Cyc_opt36_tuple,0};
# 1188
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt37_spec={0,Cyc_set_nochecks};static char _TmpG79[11U]="--nochecks";static char _TmpG7A[1U]="";static char _TmpG7B[27U]="Disable bounds/null checks";struct _tuple16 Cyc_opt37_tuple={.f0={(unsigned char*)_TmpG79,(unsigned char*)_TmpG79,(unsigned char*)_TmpG79 + 11U},.f1=0,.f2={(unsigned char*)_TmpG7A,(unsigned char*)_TmpG7A,(unsigned char*)_TmpG7A + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt37_spec),.f4={(unsigned char*)_TmpG7B,(unsigned char*)_TmpG7B,(unsigned char*)_TmpG7B + 27U}};struct Cyc_List_List Cyc_opt37={(void*)& Cyc_opt37_tuple,0};
# 1191
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt38_spec={0,Cyc_set_nonullchecks};static char _TmpG7C[15U]="--nonullchecks";static char _TmpG7D[1U]="";static char _TmpG7E[20U]="Disable null checks";struct _tuple16 Cyc_opt38_tuple={.f0={(unsigned char*)_TmpG7C,(unsigned char*)_TmpG7C,(unsigned char*)_TmpG7C + 15U},.f1=0,.f2={(unsigned char*)_TmpG7D,(unsigned char*)_TmpG7D,(unsigned char*)_TmpG7D + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt38_spec),.f4={(unsigned char*)_TmpG7E,(unsigned char*)_TmpG7E,(unsigned char*)_TmpG7E + 20U}};struct Cyc_List_List Cyc_opt38={(void*)& Cyc_opt38_tuple,0};
# 1194
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt39_spec={0,Cyc_set_noboundschecks};static char _TmpG7F[17U]="--noboundschecks";static char _TmpG80[1U]="";static char _TmpG81[22U]="Disable bounds checks";struct _tuple16 Cyc_opt39_tuple={.f0={(unsigned char*)_TmpG7F,(unsigned char*)_TmpG7F,(unsigned char*)_TmpG7F + 17U},.f1=0,.f2={(unsigned char*)_TmpG80,(unsigned char*)_TmpG80,(unsigned char*)_TmpG80 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt39_spec),.f4={(unsigned char*)_TmpG81,(unsigned char*)_TmpG81,(unsigned char*)_TmpG81 + 22U}};struct Cyc_List_List Cyc_opt39={(void*)& Cyc_opt39_tuple,0};
# 1197
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt41_spec={5,Cyc_set_cpp};static char _TmpG82[9U]="-use-cpp";static char _TmpG83[7U]="<path>";static char _TmpG84[35U]="Indicate which preprocessor to use";struct _tuple16 Cyc_opt41_tuple={.f0={(unsigned char*)_TmpG82,(unsigned char*)_TmpG82,(unsigned char*)_TmpG82 + 9U},.f1=0,.f2={(unsigned char*)_TmpG83,(unsigned char*)_TmpG83,(unsigned char*)_TmpG83 + 7U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt41_spec),.f4={(unsigned char*)_TmpG84,(unsigned char*)_TmpG84,(unsigned char*)_TmpG84 + 35U}};struct Cyc_List_List Cyc_opt41={(void*)& Cyc_opt41_tuple,0};
# 1200
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt42_spec={0,Cyc_set_nocppprecomp};static char _TmpG85[16U]="-no-cpp-precomp";static char _TmpG86[1U]="";static char _TmpG87[40U]="Don't do smart preprocessing (mac only)";struct _tuple16 Cyc_opt42_tuple={.f0={(unsigned char*)_TmpG85,(unsigned char*)_TmpG85,(unsigned char*)_TmpG85 + 16U},.f1=0,.f2={(unsigned char*)_TmpG86,(unsigned char*)_TmpG86,(unsigned char*)_TmpG86 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt42_spec),.f4={(unsigned char*)_TmpG87,(unsigned char*)_TmpG87,(unsigned char*)_TmpG87 + 40U}};struct Cyc_List_List Cyc_opt42={(void*)& Cyc_opt42_tuple,0};
# 1203
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt43_spec={0,Cyc_set_nocyc};static char _TmpG88[7U]="-nocyc";static char _TmpG89[1U]="";static char _TmpG8A[33U]="Don't add implicit namespace Cyc";struct _tuple16 Cyc_opt43_tuple={.f0={(unsigned char*)_TmpG88,(unsigned char*)_TmpG88,(unsigned char*)_TmpG88 + 7U},.f1=0,.f2={(unsigned char*)_TmpG89,(unsigned char*)_TmpG89,(unsigned char*)_TmpG89 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt43_spec),.f4={(unsigned char*)_TmpG8A,(unsigned char*)_TmpG8A,(unsigned char*)_TmpG8A + 33U}};struct Cyc_List_List Cyc_opt43={(void*)& Cyc_opt43_tuple,0};
# 1206
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt44_spec={3,& Cyc_nogc_r};static char _TmpG8B[6U]="-nogc";static char _TmpG8C[1U]="";static char _TmpG8D[36U]="Don't link in the garbage collector";struct _tuple16 Cyc_opt44_tuple={.f0={(unsigned char*)_TmpG8B,(unsigned char*)_TmpG8B,(unsigned char*)_TmpG8B + 6U},.f1=0,.f2={(unsigned char*)_TmpG8C,(unsigned char*)_TmpG8C,(unsigned char*)_TmpG8C + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt44_spec),.f4={(unsigned char*)_TmpG8D,(unsigned char*)_TmpG8D,(unsigned char*)_TmpG8D + 36U}};struct Cyc_List_List Cyc_opt44={(void*)& Cyc_opt44_tuple,0};
# 1209
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt45_spec={3,& Cyc_noshake_r};static char _TmpG8E[16U]="-noremoveunused";static char _TmpG8F[1U]="";static char _TmpG90[49U]="Don't remove externed variables that aren't used";struct _tuple16 Cyc_opt45_tuple={.f0={(unsigned char*)_TmpG8E,(unsigned char*)_TmpG8E,(unsigned char*)_TmpG8E + 16U},.f1=0,.f2={(unsigned char*)_TmpG8F,(unsigned char*)_TmpG8F,(unsigned char*)_TmpG8F + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt45_spec),.f4={(unsigned char*)_TmpG90,(unsigned char*)_TmpG90,(unsigned char*)_TmpG90 + 49U}};struct Cyc_List_List Cyc_opt45={(void*)& Cyc_opt45_tuple,0};
# 1212
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt46_spec={3,& Cyc_Flags_noexpand_r};static char _TmpG91[18U]="-noexpandtypedefs";static char _TmpG92[1U]="";static char _TmpG93[41U]="Don't expand typedefs in pretty printing";struct _tuple16 Cyc_opt46_tuple={.f0={(unsigned char*)_TmpG91,(unsigned char*)_TmpG91,(unsigned char*)_TmpG91 + 18U},.f1=0,.f2={(unsigned char*)_TmpG92,(unsigned char*)_TmpG92,(unsigned char*)_TmpG92 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt46_spec),.f4={(unsigned char*)_TmpG93,(unsigned char*)_TmpG93,(unsigned char*)_TmpG93 + 41U}};struct Cyc_List_List Cyc_opt46={(void*)& Cyc_opt46_tuple,0};
# 1215
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt47_spec={3,& Cyc_print_all_tvars_r};static char _TmpG94[15U]="-printalltvars";static char _TmpG95[1U]="";static char _TmpG96[57U]="Print all type variables (even implicit default effects)";struct _tuple16 Cyc_opt47_tuple={.f0={(unsigned char*)_TmpG94,(unsigned char*)_TmpG94,(unsigned char*)_TmpG94 + 15U},.f1=0,.f2={(unsigned char*)_TmpG95,(unsigned char*)_TmpG95,(unsigned char*)_TmpG95 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt47_spec),.f4={(unsigned char*)_TmpG96,(unsigned char*)_TmpG96,(unsigned char*)_TmpG96 + 57U}};struct Cyc_List_List Cyc_opt47={(void*)& Cyc_opt47_tuple,0};
# 1218
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt48_spec={3,& Cyc_print_all_kinds_r};static char _TmpG97[15U]="-printallkinds";static char _TmpG98[1U]="";static char _TmpG99[37U]="Always print kinds of type variables";struct _tuple16 Cyc_opt48_tuple={.f0={(unsigned char*)_TmpG97,(unsigned char*)_TmpG97,(unsigned char*)_TmpG97 + 15U},.f1=0,.f2={(unsigned char*)_TmpG98,(unsigned char*)_TmpG98,(unsigned char*)_TmpG98 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt48_spec),.f4={(unsigned char*)_TmpG99,(unsigned char*)_TmpG99,(unsigned char*)_TmpG99 + 37U}};struct Cyc_List_List Cyc_opt48={(void*)& Cyc_opt48_tuple,0};
# 1221
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt49_spec={3,& Cyc_print_full_evars_r};static char _TmpG9A[16U]="-printfullevars";static char _TmpG9B[1U]="";static char _TmpG9C[50U]="Print full information for evars (type debugging)";struct _tuple16 Cyc_opt49_tuple={.f0={(unsigned char*)_TmpG9A,(unsigned char*)_TmpG9A,(unsigned char*)_TmpG9A + 16U},.f1=0,.f2={(unsigned char*)_TmpG9B,(unsigned char*)_TmpG9B,(unsigned char*)_TmpG9B + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt49_spec),.f4={(unsigned char*)_TmpG9C,(unsigned char*)_TmpG9C,(unsigned char*)_TmpG9C + 50U}};struct Cyc_List_List Cyc_opt49={(void*)& Cyc_opt49_tuple,0};
# 1224
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt50_spec={3,& Cyc_print_all_effects_r};static char _TmpG9D[17U]="-printalleffects";static char _TmpG9E[1U]="";static char _TmpG9F[45U]="Print effects for functions (type debugging)";struct _tuple16 Cyc_opt50_tuple={.f0={(unsigned char*)_TmpG9D,(unsigned char*)_TmpG9D,(unsigned char*)_TmpG9D + 17U},.f1=0,.f2={(unsigned char*)_TmpG9E,(unsigned char*)_TmpG9E,(unsigned char*)_TmpG9E + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt50_spec),.f4={(unsigned char*)_TmpG9F,(unsigned char*)_TmpG9F,(unsigned char*)_TmpG9F + 45U}};struct Cyc_List_List Cyc_opt50={(void*)& Cyc_opt50_tuple,0};
# 1227
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt52_spec={3,& Cyc_Flags_compile_for_boot};static char _TmpGA0[18U]="-compile-for-boot";static char _TmpGA1[1U]="";static char _TmpGA2[71U]="Compile using the special boot library instead of the standard library";struct _tuple16 Cyc_opt52_tuple={.f0={(unsigned char*)_TmpGA0,(unsigned char*)_TmpGA0,(unsigned char*)_TmpGA0 + 18U},.f1=0,.f2={(unsigned char*)_TmpGA1,(unsigned char*)_TmpGA1,(unsigned char*)_TmpGA1 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt52_spec),.f4={(unsigned char*)_TmpGA2,(unsigned char*)_TmpGA2,(unsigned char*)_TmpGA2 + 71U}};struct Cyc_List_List Cyc_opt52={(void*)& Cyc_opt52_tuple,0};
# 1230
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt54_spec={3,& Cyc_Flags_warn_bounds_checks};static char _TmpGA3[18U]="-warnboundschecks";static char _TmpGA4[1U]="";static char _TmpGA5[44U]="Warn when bounds checks can't be eliminated";struct _tuple16 Cyc_opt54_tuple={.f0={(unsigned char*)_TmpGA3,(unsigned char*)_TmpGA3,(unsigned char*)_TmpGA3 + 18U},.f1=0,.f2={(unsigned char*)_TmpGA4,(unsigned char*)_TmpGA4,(unsigned char*)_TmpGA4 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt54_spec),.f4={(unsigned char*)_TmpGA5,(unsigned char*)_TmpGA5,(unsigned char*)_TmpGA5 + 44U}};struct Cyc_List_List Cyc_opt54={(void*)& Cyc_opt54_tuple,0};
# 1233
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt55_spec={3,& Cyc_Flags_warn_all_null_deref};static char _TmpGA6[16U]="-warnnullchecks";static char _TmpGA7[1U]="";static char _TmpGA8[45U]="Warn when any null check can't be eliminated";struct _tuple16 Cyc_opt55_tuple={.f0={(unsigned char*)_TmpGA6,(unsigned char*)_TmpGA6,(unsigned char*)_TmpGA6 + 16U},.f1=0,.f2={(unsigned char*)_TmpGA7,(unsigned char*)_TmpGA7,(unsigned char*)_TmpGA7 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt55_spec),.f4={(unsigned char*)_TmpGA8,(unsigned char*)_TmpGA8,(unsigned char*)_TmpGA8 + 45U}};struct Cyc_List_List Cyc_opt55={(void*)& Cyc_opt55_tuple,0};
# 1236
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt56_spec={3,& Cyc_Flags_warn_alias_coerce};static char _TmpGA9[19U]="-warnaliascoercion";static char _TmpGAA[1U]="";static char _TmpGAB[41U]="Warn when any alias coercion is inserted";struct _tuple16 Cyc_opt56_tuple={.f0={(unsigned char*)_TmpGA9,(unsigned char*)_TmpGA9,(unsigned char*)_TmpGA9 + 19U},.f1=0,.f2={(unsigned char*)_TmpGAA,(unsigned char*)_TmpGAA,(unsigned char*)_TmpGAA + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt56_spec),.f4={(unsigned char*)_TmpGAB,(unsigned char*)_TmpGAB,(unsigned char*)_TmpGAB + 41U}};struct Cyc_List_List Cyc_opt56={(void*)& Cyc_opt56_tuple,0};
# 1239
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt57_spec={3,& Cyc_Flags_warn_region_coerce};static char _TmpGAC[18U]="-warnregioncoerce";static char _TmpGAD[1U]="";static char _TmpGAE[42U]="Warn when any region coercion is inserted";struct _tuple16 Cyc_opt57_tuple={.f0={(unsigned char*)_TmpGAC,(unsigned char*)_TmpGAC,(unsigned char*)_TmpGAC + 18U},.f1=0,.f2={(unsigned char*)_TmpGAD,(unsigned char*)_TmpGAD,(unsigned char*)_TmpGAD + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt57_spec),.f4={(unsigned char*)_TmpGAE,(unsigned char*)_TmpGAE,(unsigned char*)_TmpGAE + 42U}};struct Cyc_List_List Cyc_opt57={(void*)& Cyc_opt57_tuple,0};
# 1242
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt58_spec={3,& Cyc_Flags_no_register};static char _TmpGAF[12U]="-noregister";static char _TmpGB0[1U]="";static char _TmpGB1[39U]="Treat register storage class as public";struct _tuple16 Cyc_opt58_tuple={.f0={(unsigned char*)_TmpGAF,(unsigned char*)_TmpGAF,(unsigned char*)_TmpGAF + 12U},.f1=0,.f2={(unsigned char*)_TmpGB0,(unsigned char*)_TmpGB0,(unsigned char*)_TmpGB0 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt58_spec),.f4={(unsigned char*)_TmpGB1,(unsigned char*)_TmpGB1,(unsigned char*)_TmpGB1 + 39U}};struct Cyc_List_List Cyc_opt58={(void*)& Cyc_opt58_tuple,0};
# 1245
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt59_spec={4,& Cyc_Position_use_gcc_style_location};static char _TmpGB2[18U]="-detailedlocation";static char _TmpGB3[1U]="";static char _TmpGB4[58U]="Try to give more detailed location information for errors";struct _tuple16 Cyc_opt59_tuple={.f0={(unsigned char*)_TmpGB2,(unsigned char*)_TmpGB2,(unsigned char*)_TmpGB2 + 18U},.f1=0,.f2={(unsigned char*)_TmpGB3,(unsigned char*)_TmpGB3,(unsigned char*)_TmpGB3 + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt59_spec),.f4={(unsigned char*)_TmpGB4,(unsigned char*)_TmpGB4,(unsigned char*)_TmpGB4 + 58U}};struct Cyc_List_List Cyc_opt59={(void*)& Cyc_opt59_tuple,0};
# 1248
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt60_spec={0,Cyc_set_port_c_code};static char _TmpGB5[6U]="-port";static char _TmpGB6[1U]="";static char _TmpGB7[38U]="Suggest how to port C code to Cyclone";struct _tuple16 Cyc_opt60_tuple={.f0={(unsigned char*)_TmpGB5,(unsigned char*)_TmpGB5,(unsigned char*)_TmpGB5 + 6U},.f1=0,.f2={(unsigned char*)_TmpGB6,(unsigned char*)_TmpGB6,(unsigned char*)_TmpGB6 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt60_spec),.f4={(unsigned char*)_TmpGB7,(unsigned char*)_TmpGB7,(unsigned char*)_TmpGB7 + 38U}};struct Cyc_List_List Cyc_opt60={(void*)& Cyc_opt60_tuple,0};
# 1251
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt61_spec={3,& Cyc_Flags_no_regions};static char _TmpGB8[11U]="-noregions";static char _TmpGB9[1U]="";static char _TmpGBA[39U]="Generate code that doesn't use regions";struct _tuple16 Cyc_opt61_tuple={.f0={(unsigned char*)_TmpGB8,(unsigned char*)_TmpGB8,(unsigned char*)_TmpGB8 + 11U},.f1=0,.f2={(unsigned char*)_TmpGB9,(unsigned char*)_TmpGB9,(unsigned char*)_TmpGB9 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt61_spec),.f4={(unsigned char*)_TmpGBA,(unsigned char*)_TmpGBA,(unsigned char*)_TmpGBA + 39U}};struct Cyc_List_List Cyc_opt61={(void*)& Cyc_opt61_tuple,0};
# 1254
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt62_spec={5,Cyc_add_iprefix};static char _TmpGBB[9U]="-iprefix";static char _TmpGBC[9U]="<prefix>";static char _TmpGBD[67U]="Specify <prefix> as the prefix for subsequent -iwithprefix options";struct _tuple16 Cyc_opt62_tuple={.f0={(unsigned char*)_TmpGBB,(unsigned char*)_TmpGBB,(unsigned char*)_TmpGBB + 9U},.f1=0,.f2={(unsigned char*)_TmpGBC,(unsigned char*)_TmpGBC,(unsigned char*)_TmpGBC + 9U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt62_spec),.f4={(unsigned char*)_TmpGBD,(unsigned char*)_TmpGBD,(unsigned char*)_TmpGBD + 67U}};struct Cyc_List_List Cyc_opt62={(void*)& Cyc_opt62_tuple,0};
# 1257
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt63_spec={5,Cyc_add_iwithprefix};static char _TmpGBE[13U]="-iwithprefix";static char _TmpGBF[6U]="<dir>";static char _TmpGC0[47U]="Add <prefix>/<dir> to the second include path.";struct _tuple16 Cyc_opt63_tuple={.f0={(unsigned char*)_TmpGBE,(unsigned char*)_TmpGBE,(unsigned char*)_TmpGBE + 13U},.f1=0,.f2={(unsigned char*)_TmpGBF,(unsigned char*)_TmpGBF,(unsigned char*)_TmpGBF + 6U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt63_spec),.f4={(unsigned char*)_TmpGC0,(unsigned char*)_TmpGC0,(unsigned char*)_TmpGC0 + 47U}};struct Cyc_List_List Cyc_opt63={(void*)& Cyc_opt63_tuple,0};
# 1260
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt64_spec={5,Cyc_add_iwithprefixbefore};static char _TmpGC1[19U]="-iwithprefixbefore";static char _TmpGC2[6U]="<dir>";static char _TmpGC3[45U]="Add <prefix>/<dir> to the main include path.";struct _tuple16 Cyc_opt64_tuple={.f0={(unsigned char*)_TmpGC1,(unsigned char*)_TmpGC1,(unsigned char*)_TmpGC1 + 19U},.f1=0,.f2={(unsigned char*)_TmpGC2,(unsigned char*)_TmpGC2,(unsigned char*)_TmpGC2 + 6U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt64_spec),.f4={(unsigned char*)_TmpGC3,(unsigned char*)_TmpGC3,(unsigned char*)_TmpGC3 + 45U}};struct Cyc_List_List Cyc_opt64={(void*)& Cyc_opt64_tuple,0};
# 1263
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt65_spec={5,Cyc_add_isystem};static char _TmpGC4[9U]="-isystem";static char _TmpGC5[6U]="<dir>";static char _TmpGC6[90U]="Add <dir> to the beginning of the second include path and treat it as a\nsystem directory.";struct _tuple16 Cyc_opt65_tuple={.f0={(unsigned char*)_TmpGC4,(unsigned char*)_TmpGC4,(unsigned char*)_TmpGC4 + 9U},.f1=0,.f2={(unsigned char*)_TmpGC5,(unsigned char*)_TmpGC5,(unsigned char*)_TmpGC5 + 6U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt65_spec),.f4={(unsigned char*)_TmpGC6,(unsigned char*)_TmpGC6,(unsigned char*)_TmpGC6 + 90U}};struct Cyc_List_List Cyc_opt65={(void*)& Cyc_opt65_tuple,0};
# 1266
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt66_spec={5,Cyc_add_idirafter};static char _TmpGC7[11U]="-idirafter";static char _TmpGC8[6U]="<dir>";static char _TmpGC9[46U]="Add the directory to the second include path.";struct _tuple16 Cyc_opt66_tuple={.f0={(unsigned char*)_TmpGC7,(unsigned char*)_TmpGC7,(unsigned char*)_TmpGC7 + 11U},.f1=0,.f2={(unsigned char*)_TmpGC8,(unsigned char*)_TmpGC8,(unsigned char*)_TmpGC8 + 6U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt66_spec),.f4={(unsigned char*)_TmpGC9,(unsigned char*)_TmpGC9,(unsigned char*)_TmpGC9 + 46U}};struct Cyc_List_List Cyc_opt66={(void*)& Cyc_opt66_tuple,0};
# 1269
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt67_spec={3,& Cyc_generate_interface_r};static char _TmpGCA[15U]="--geninterface";static char _TmpGCB[1U]="";static char _TmpGCC[25U]="Generate interface files";struct _tuple16 Cyc_opt67_tuple={.f0={(unsigned char*)_TmpGCA,(unsigned char*)_TmpGCA,(unsigned char*)_TmpGCA + 15U},.f1=0,.f2={(unsigned char*)_TmpGCB,(unsigned char*)_TmpGCB,(unsigned char*)_TmpGCB + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt67_spec),.f4={(unsigned char*)_TmpGCC,(unsigned char*)_TmpGCC,(unsigned char*)_TmpGCC + 25U}};struct Cyc_List_List Cyc_opt67={(void*)& Cyc_opt67_tuple,0};
# 1272
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt68_spec={5,Cyc_set_specified_interface};static char _TmpGCD[12U]="--interface";static char _TmpGCE[8U]=" <file>";static char _TmpGCF[37U]="Set the interface file to be <file>.";struct _tuple16 Cyc_opt68_tuple={.f0={(unsigned char*)_TmpGCD,(unsigned char*)_TmpGCD,(unsigned char*)_TmpGCD + 12U},.f1=0,.f2={(unsigned char*)_TmpGCE,(unsigned char*)_TmpGCE,(unsigned char*)_TmpGCE + 8U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt68_spec),.f4={(unsigned char*)_TmpGCF,(unsigned char*)_TmpGCF,(unsigned char*)_TmpGCF + 37U}};struct Cyc_List_List Cyc_opt68={(void*)& Cyc_opt68_tuple,0};
# 1275
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt69_spec={0,Cyc_set_many_errors};static char _TmpGD0[13U]="--manyerrors";static char _TmpGD1[1U]="";static char _TmpGD2[36U]="don't stop after only a few errors.";struct _tuple16 Cyc_opt69_tuple={.f0={(unsigned char*)_TmpGD0,(unsigned char*)_TmpGD0,(unsigned char*)_TmpGD0 + 13U},.f1=0,.f2={(unsigned char*)_TmpGD1,(unsigned char*)_TmpGD1,(unsigned char*)_TmpGD1 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt69_spec),.f4={(unsigned char*)_TmpGD2,(unsigned char*)_TmpGD2,(unsigned char*)_TmpGD2 + 36U}};struct Cyc_List_List Cyc_opt69={(void*)& Cyc_opt69_tuple,0};
# 1278
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt70_spec={3,& Cyc_Flags_print_parser_state_and_token};static char _TmpGD3[13U]="--parsestate";static char _TmpGD4[1U]="";static char _TmpGD5[50U]="print the parse state and token on a syntax error";struct _tuple16 Cyc_opt70_tuple={.f0={(unsigned char*)_TmpGD3,(unsigned char*)_TmpGD3,(unsigned char*)_TmpGD3 + 13U},.f1=0,.f2={(unsigned char*)_TmpGD4,(unsigned char*)_TmpGD4,(unsigned char*)_TmpGD4 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt70_spec),.f4={(unsigned char*)_TmpGD5,(unsigned char*)_TmpGD5,(unsigned char*)_TmpGD5 + 50U}};struct Cyc_List_List Cyc_opt70={(void*)& Cyc_opt70_tuple,0};
# 1281
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt71_spec={0,Cyc_noassume_gcc_flag};static char _TmpGD6[22U]="-known-gcc-flags-only";static char _TmpGD7[1U]="";static char _TmpGD8[57U]="do not assume that unknown flags should be passed to gcc";struct _tuple16 Cyc_opt71_tuple={.f0={(unsigned char*)_TmpGD6,(unsigned char*)_TmpGD6,(unsigned char*)_TmpGD6 + 22U},.f1=0,.f2={(unsigned char*)_TmpGD7,(unsigned char*)_TmpGD7,(unsigned char*)_TmpGD7 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt71_spec),.f4={(unsigned char*)_TmpGD8,(unsigned char*)_TmpGD8,(unsigned char*)_TmpGD8 + 57U}};struct Cyc_List_List Cyc_opt71={(void*)& Cyc_opt71_tuple,0};
# 1284
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt72_spec={0,Cyc_print_options};static char _TmpGD9[6U]="-help";static char _TmpGDA[1U]="";static char _TmpGDB[32U]="print out the available options";struct _tuple16 Cyc_opt72_tuple={.f0={(unsigned char*)_TmpGD9,(unsigned char*)_TmpGD9,(unsigned char*)_TmpGD9 + 6U},.f1=0,.f2={(unsigned char*)_TmpGDA,(unsigned char*)_TmpGDA,(unsigned char*)_TmpGDA + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt72_spec),.f4={(unsigned char*)_TmpGDB,(unsigned char*)_TmpGDB,(unsigned char*)_TmpGDB + 32U}};struct Cyc_List_List Cyc_opt72={(void*)& Cyc_opt72_tuple,0};
# 1287
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt73_spec={0,Cyc_print_options};static char _TmpGDC[7U]="-usage";static char _TmpGDD[1U]="";static char _TmpGDE[32U]="print out the available options";struct _tuple16 Cyc_opt73_tuple={.f0={(unsigned char*)_TmpGDC,(unsigned char*)_TmpGDC,(unsigned char*)_TmpGDC + 7U},.f1=0,.f2={(unsigned char*)_TmpGDD,(unsigned char*)_TmpGDD,(unsigned char*)_TmpGDD + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt73_spec),.f4={(unsigned char*)_TmpGDE,(unsigned char*)_TmpGDE,(unsigned char*)_TmpGDE + 32U}};struct Cyc_List_List Cyc_opt73={(void*)& Cyc_opt73_tuple,0};
# 1290
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt74_spec={0,Cyc_set_notoseqc};static char _TmpGDF[10U]="-no-seq-c";static char _TmpGE0[1U]="";static char _TmpGE1[71U]="Do not force left-to-right evaluation order of generated code (unsafe)";struct _tuple16 Cyc_opt74_tuple={.f0={(unsigned char*)_TmpGDF,(unsigned char*)_TmpGDF,(unsigned char*)_TmpGDF + 10U},.f1=0,.f2={(unsigned char*)_TmpGE0,(unsigned char*)_TmpGE0,(unsigned char*)_TmpGE0 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt74_spec),.f4={(unsigned char*)_TmpGE1,(unsigned char*)_TmpGE1,(unsigned char*)_TmpGE1 + 71U}};struct Cyc_List_List Cyc_opt74={(void*)& Cyc_opt74_tuple,0};
# 1293
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt75_spec={0,Cyc_set_pg};static char _TmpGE2[4U]="-pg";static char _TmpGE3[1U]="";static char _TmpGE4[33U]="Compile for profiling with gprof";struct _tuple16 Cyc_opt75_tuple={.f0={(unsigned char*)_TmpGE2,(unsigned char*)_TmpGE2,(unsigned char*)_TmpGE2 + 4U},.f1=0,.f2={(unsigned char*)_TmpGE3,(unsigned char*)_TmpGE3,(unsigned char*)_TmpGE3 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt75_spec),.f4={(unsigned char*)_TmpGE4,(unsigned char*)_TmpGE4,(unsigned char*)_TmpGE4 + 33U}};struct Cyc_List_List Cyc_opt75={(void*)& Cyc_opt75_tuple,0};
# 1296
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt76_spec={4,& Cyc_vcgen_r};static char _TmpGE5[10U]="--novcgen";static char _TmpGE6[1U]="";static char _TmpGE7[39U]="do not compute verification-conditions";struct _tuple16 Cyc_opt76_tuple={.f0={(unsigned char*)_TmpGE5,(unsigned char*)_TmpGE5,(unsigned char*)_TmpGE5 + 10U},.f1=0,.f2={(unsigned char*)_TmpGE6,(unsigned char*)_TmpGE6,(unsigned char*)_TmpGE6 + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt76_spec),.f4={(unsigned char*)_TmpGE7,(unsigned char*)_TmpGE7,(unsigned char*)_TmpGE7 + 39U}};struct Cyc_List_List Cyc_opt76={(void*)& Cyc_opt76_tuple,0};
# 1299
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt77_spec={0,Cyc_Cifc_set_inst_tvar};static char _TmpGE8[17U]="--cifc-inst-tvar";static char _TmpGE9[1U]="";static char _TmpGEA[59U]="instantiate type variables instead of introducing new ones";struct _tuple16 Cyc_opt77_tuple={.f0={(unsigned char*)_TmpGE8,(unsigned char*)_TmpGE8,(unsigned char*)_TmpGE8 + 17U},.f1=0,.f2={(unsigned char*)_TmpGE9,(unsigned char*)_TmpGE9,(unsigned char*)_TmpGE9 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt77_spec),.f4={(unsigned char*)_TmpGEA,(unsigned char*)_TmpGEA,(unsigned char*)_TmpGEA + 59U}};struct Cyc_List_List Cyc_opt77={(void*)& Cyc_opt77_tuple,0};
# 1302
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt78_spec={0,Cyc_Flags_set_crgnonly};static char _TmpGEB[16U]="-stopafter-crgn";static char _TmpGEC[1U]="";static char _TmpGED[19U]="Stop after currrgn";struct _tuple16 Cyc_opt78_tuple={.f0={(unsigned char*)_TmpGEB,(unsigned char*)_TmpGEB,(unsigned char*)_TmpGEB + 16U},.f1=0,.f2={(unsigned char*)_TmpGEC,(unsigned char*)_TmpGEC,(unsigned char*)_TmpGEC + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt78_spec),.f4={(unsigned char*)_TmpGED,(unsigned char*)_TmpGED,(unsigned char*)_TmpGED + 19U}};struct Cyc_List_List Cyc_opt78={(void*)& Cyc_opt78_tuple,0};
# 1305
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt79_spec={3,& Cyc_Flags_allpaths};static char _TmpGEE[11U]="--allpaths";static char _TmpGEF[1U]="";static char _TmpGF0[62U]="analyze all forward paths in verification-condition generator";struct _tuple16 Cyc_opt79_tuple={.f0={(unsigned char*)_TmpGEE,(unsigned char*)_TmpGEE,(unsigned char*)_TmpGEE + 11U},.f1=0,.f2={(unsigned char*)_TmpGEF,(unsigned char*)_TmpGEF,(unsigned char*)_TmpGEF + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt79_spec),.f4={(unsigned char*)_TmpGF0,(unsigned char*)_TmpGF0,(unsigned char*)_TmpGF0 + 62U}};struct Cyc_List_List Cyc_opt79={(void*)& Cyc_opt79_tuple,0};
# 1307
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt80_spec={4,& Cyc_Flags_allpaths};static char _TmpGF1[13U]="--mergepaths";static char _TmpGF2[1U]="";static char _TmpGF3[71U]="merge paths at join-points within the verification-condition generator";struct _tuple16 Cyc_opt80_tuple={.f0={(unsigned char*)_TmpGF1,(unsigned char*)_TmpGF1,(unsigned char*)_TmpGF1 + 13U},.f1=0,.f2={(unsigned char*)_TmpGF2,(unsigned char*)_TmpGF2,(unsigned char*)_TmpGF2 + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt80_spec),.f4={(unsigned char*)_TmpGF3,(unsigned char*)_TmpGF3,(unsigned char*)_TmpGF3 + 71U}};struct Cyc_List_List Cyc_opt80={(void*)& Cyc_opt80_tuple,0};
# 1309
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt81_spec={0,Cyc_set_noreaps};static char _TmpGF4[9U]="-noreaps";static char _TmpGF5[1U]="";static char _TmpGF6[37U]="Generate code that doesn't use reaps";struct _tuple16 Cyc_opt81_tuple={.f0={(unsigned char*)_TmpGF4,(unsigned char*)_TmpGF4,(unsigned char*)_TmpGF4 + 9U},.f1=0,.f2={(unsigned char*)_TmpGF5,(unsigned char*)_TmpGF5,(unsigned char*)_TmpGF5 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt81_spec),.f4={(unsigned char*)_TmpGF6,(unsigned char*)_TmpGF6,(unsigned char*)_TmpGF6 + 37U}};struct Cyc_List_List Cyc_opt81={(void*)& Cyc_opt81_tuple,0};
# 1312
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt82_spec={3,& Cyc_Flags_print_unprovable};static char _TmpGF7[13U]="--unprovable";static char _TmpGF8[1U]="";static char _TmpGF9[38U]="print assertions that were unprovable";struct _tuple16 Cyc_opt82_tuple={.f0={(unsigned char*)_TmpGF7,(unsigned char*)_TmpGF7,(unsigned char*)_TmpGF7 + 13U},.f1=0,.f2={(unsigned char*)_TmpGF8,(unsigned char*)_TmpGF8,(unsigned char*)_TmpGF8 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt82_spec),.f4={(unsigned char*)_TmpGF9,(unsigned char*)_TmpGF9,(unsigned char*)_TmpGF9 + 38U}};struct Cyc_List_List Cyc_opt82={(void*)& Cyc_opt82_tuple,0};
# 1315
struct Cyc_Arg_Int_spec_Arg_Spec_struct Cyc_opt83_spec={6,Cyc_set_max_vc_summary};static char _TmpGFA[17U]="--max_vc_summary";static char _TmpGFB[1U]="";static char _TmpGFC[62U]="controls the maximum size of post-conditions inlined by vcgen";struct _tuple16 Cyc_opt83_tuple={.f0={(unsigned char*)_TmpGFA,(unsigned char*)_TmpGFA,(unsigned char*)_TmpGFA + 17U},.f1=0,.f2={(unsigned char*)_TmpGFB,(unsigned char*)_TmpGFB,(unsigned char*)_TmpGFB + 1U},.f3=(void*)((struct Cyc_Arg_Int_spec_Arg_Spec_struct*)& Cyc_opt83_spec),.f4={(unsigned char*)_TmpGFC,(unsigned char*)_TmpGFC,(unsigned char*)_TmpGFC + 62U}};struct Cyc_List_List Cyc_opt83={(void*)& Cyc_opt83_tuple,0};
# 1317
struct Cyc_Arg_Int_spec_Arg_Spec_struct Cyc_opt84_spec={6,Cyc_set_max_vc_paths};static char _TmpGFD[15U]="--max_vc_paths";static char _TmpGFE[1U]="";static char _TmpGFF[67U]="controls the maximum number of paths explored by constraint solver";struct _tuple16 Cyc_opt84_tuple={.f0={(unsigned char*)_TmpGFD,(unsigned char*)_TmpGFD,(unsigned char*)_TmpGFD + 15U},.f1=0,.f2={(unsigned char*)_TmpGFE,(unsigned char*)_TmpGFE,(unsigned char*)_TmpGFE + 1U},.f3=(void*)((struct Cyc_Arg_Int_spec_Arg_Spec_struct*)& Cyc_opt84_spec),.f4={(unsigned char*)_TmpGFF,(unsigned char*)_TmpGFF,(unsigned char*)_TmpGFF + 67U}};struct Cyc_List_List Cyc_opt84={(void*)& Cyc_opt84_tuple,0};
# 1319
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt85_spec={0,Cyc_set_interproc};static char _TmpG100[6U]="--inf";static char _TmpG101[1U]="";static char _TmpG102[35U]="Use interprocedural type inference";struct _tuple16 Cyc_opt85_tuple={.f0={(unsigned char*)_TmpG100,(unsigned char*)_TmpG100,(unsigned char*)_TmpG100 + 6U},.f1=0,.f2={(unsigned char*)_TmpG101,(unsigned char*)_TmpG101,(unsigned char*)_TmpG101 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt85_spec),.f4={(unsigned char*)_TmpG102,(unsigned char*)_TmpG102,(unsigned char*)_TmpG102 + 35U}};struct Cyc_List_List Cyc_opt85={(void*)& Cyc_opt85_tuple,0};
# 1322
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt86_spec={0,Cyc_set_nomerge};static char _TmpG103[10U]="--nomerge";static char _TmpG104[1U]="";static char _TmpG105[37U]="Do not merge multiple files into one";struct _tuple16 Cyc_opt86_tuple={.f0={(unsigned char*)_TmpG103,(unsigned char*)_TmpG103,(unsigned char*)_TmpG103 + 10U},.f1=0,.f2={(unsigned char*)_TmpG104,(unsigned char*)_TmpG104,(unsigned char*)_TmpG104 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt86_spec),.f4={(unsigned char*)_TmpG105,(unsigned char*)_TmpG105,(unsigned char*)_TmpG105 + 37U}};struct Cyc_List_List Cyc_opt86={(void*)& Cyc_opt86_tuple,0};
# 1325
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt87_spec={0,Cyc_set_resolve};static char _TmpG106[10U]="--resolve";static char _TmpG107[1U]="";static char _TmpG108[29U]="Resolve constraint variables";struct _tuple16 Cyc_opt87_tuple={.f0={(unsigned char*)_TmpG106,(unsigned char*)_TmpG106,(unsigned char*)_TmpG106 + 10U},.f1=0,.f2={(unsigned char*)_TmpG107,(unsigned char*)_TmpG107,(unsigned char*)_TmpG107 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt87_spec),.f4={(unsigned char*)_TmpG108,(unsigned char*)_TmpG108,(unsigned char*)_TmpG108 + 29U}};struct Cyc_List_List Cyc_opt87={(void*)& Cyc_opt87_tuple,0};
# 1328
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt88_spec={0,Cyc_set_ovfat};static char _TmpG109[8U]="--ovfat";static char _TmpG10A[1U]="";static char _TmpG10B[65U]="Override '?' annotations in the source with constraint variables";struct _tuple16 Cyc_opt88_tuple={.f0={(unsigned char*)_TmpG109,(unsigned char*)_TmpG109,(unsigned char*)_TmpG109 + 8U},.f1=0,.f2={(unsigned char*)_TmpG10A,(unsigned char*)_TmpG10A,(unsigned char*)_TmpG10A + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt88_spec),.f4={(unsigned char*)_TmpG10B,(unsigned char*)_TmpG10B,(unsigned char*)_TmpG10B + 65U}};struct Cyc_List_List Cyc_opt88={(void*)& Cyc_opt88_tuple,0};
# 1331
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt89_spec={0,Cyc_set_infstats};static char _TmpG10C[11U]="--infstats";static char _TmpG10D[1U]="";static char _TmpG10E[71U]="Dump statistics for the result of inference -- reads <pfx>/.cych/cvars";struct _tuple16 Cyc_opt89_tuple={.f0={(unsigned char*)_TmpG10C,(unsigned char*)_TmpG10C,(unsigned char*)_TmpG10C + 11U},.f1=0,.f2={(unsigned char*)_TmpG10D,(unsigned char*)_TmpG10D,(unsigned char*)_TmpG10D + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt89_spec),.f4={(unsigned char*)_TmpG10E,(unsigned char*)_TmpG10E,(unsigned char*)_TmpG10E + 71U}};struct Cyc_List_List Cyc_opt89={(void*)& Cyc_opt89_tuple,0};
# 1334
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt90_spec={0,Cyc_set_tags};static char _TmpG10F[7U]="--tags";static char _TmpG110[1U]="";static char _TmpG111[65U]="Generate a TAGS file for use with interprocedural type inference";struct _tuple16 Cyc_opt90_tuple={.f0={(unsigned char*)_TmpG10F,(unsigned char*)_TmpG10F,(unsigned char*)_TmpG10F + 7U},.f1=0,.f2={(unsigned char*)_TmpG110,(unsigned char*)_TmpG110,(unsigned char*)_TmpG110 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt90_spec),.f4={(unsigned char*)_TmpG111,(unsigned char*)_TmpG111,(unsigned char*)_TmpG111 + 65U}};struct Cyc_List_List Cyc_opt90={(void*)& Cyc_opt90_tuple,0};
# 1337
struct Cyc_Arg_Int_spec_Arg_Spec_struct Cyc_opt91_spec={6,Cyc_set_max_vc_term_size};static char _TmpG112[19U]="--max_vc_term_size";static char _TmpG113[1U]="";static char _TmpG114[71U]="controls the maximum size of terms considered by the constraint solver";struct _tuple16 Cyc_opt91_tuple={.f0={(unsigned char*)_TmpG112,(unsigned char*)_TmpG112,(unsigned char*)_TmpG112 + 19U},.f1=0,.f2={(unsigned char*)_TmpG113,(unsigned char*)_TmpG113,(unsigned char*)_TmpG113 + 1U},.f3=(void*)((struct Cyc_Arg_Int_spec_Arg_Spec_struct*)& Cyc_opt91_spec),.f4={(unsigned char*)_TmpG114,(unsigned char*)_TmpG114,(unsigned char*)_TmpG114 + 71U}};struct Cyc_List_List Cyc_opt91={(void*)& Cyc_opt91_tuple,0};
# 1339
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt92_spec={3,& Cyc_Flags_warn_assert};static char _TmpG115[13U]="--warnassert";static char _TmpG116[1U]="";static char _TmpG117[43U]="Warn when an assert might fail at run-time";struct _tuple16 Cyc_opt92_tuple={.f0={(unsigned char*)_TmpG115,(unsigned char*)_TmpG115,(unsigned char*)_TmpG115 + 13U},.f1=0,.f2={(unsigned char*)_TmpG116,(unsigned char*)_TmpG116,(unsigned char*)_TmpG116 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt92_spec),.f4={(unsigned char*)_TmpG117,(unsigned char*)_TmpG117,(unsigned char*)_TmpG117 + 43U}};struct Cyc_List_List Cyc_opt92={(void*)& Cyc_opt92_tuple,0};
# 1342
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt93_spec={5,Cyc_Interproc_set_inference_prefix};static char _TmpG118[8U]="-infpfx";static char _TmpG119[7U]=" <dir>";static char _TmpG11A[72U]="Give a directory within which inference temporary files will be stored.";struct _tuple16 Cyc_opt93_tuple={.f0={(unsigned char*)_TmpG118,(unsigned char*)_TmpG118,(unsigned char*)_TmpG118 + 8U},.f1=0,.f2={(unsigned char*)_TmpG119,(unsigned char*)_TmpG119,(unsigned char*)_TmpG119 + 7U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt93_spec),.f4={(unsigned char*)_TmpG11A,(unsigned char*)_TmpG11A,(unsigned char*)_TmpG11A + 72U}};struct Cyc_List_List Cyc_opt93={(void*)& Cyc_opt93_tuple,0};
# 1345
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt94_spec={3,& Cyc_nolower_r};static char _TmpG11B[11U]="--no-lower";static char _TmpG11C[1U]="";static char _TmpG11D[25U]="Do not lower the C code.";struct _tuple16 Cyc_opt94_tuple={.f0={(unsigned char*)_TmpG11B,(unsigned char*)_TmpG11B,(unsigned char*)_TmpG11B + 11U},.f1=0,.f2={(unsigned char*)_TmpG11C,(unsigned char*)_TmpG11C,(unsigned char*)_TmpG11C + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt94_spec),.f4={(unsigned char*)_TmpG11D,(unsigned char*)_TmpG11D,(unsigned char*)_TmpG11D + 25U}};struct Cyc_List_List Cyc_opt94={(void*)& Cyc_opt94_tuple,0};
# 1348
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt95_spec={3,& Cyc_Flags_better_widen};static char _TmpG11E[15U]="--better-widen";static char _TmpG11F[1U]="";static char _TmpG120[55U]="Construct better loop invariants within vcgen analysis";struct _tuple16 Cyc_opt95_tuple={.f0={(unsigned char*)_TmpG11E,(unsigned char*)_TmpG11E,(unsigned char*)_TmpG11E + 15U},.f1=0,.f2={(unsigned char*)_TmpG11F,(unsigned char*)_TmpG11F,(unsigned char*)_TmpG11F + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt95_spec),.f4={(unsigned char*)_TmpG120,(unsigned char*)_TmpG120,(unsigned char*)_TmpG120 + 55U}};struct Cyc_List_List Cyc_opt95={(void*)& Cyc_opt95_tuple,0};
# 1352
struct Cyc_List_List*Cyc_global_options[92U]={(struct Cyc_List_List*)& Cyc_opt1,(struct Cyc_List_List*)& Cyc_opt2,(struct Cyc_List_List*)& Cyc_opt3,(struct Cyc_List_List*)& Cyc_opt4,(struct Cyc_List_List*)& Cyc_opt5,(struct Cyc_List_List*)& Cyc_opt6,(struct Cyc_List_List*)& Cyc_opt7,(struct Cyc_List_List*)& Cyc_opt8,(struct Cyc_List_List*)& Cyc_opt9,(struct Cyc_List_List*)& Cyc_opt10,(struct Cyc_List_List*)& Cyc_opt11,(struct Cyc_List_List*)& Cyc_opt12,(struct Cyc_List_List*)& Cyc_opt13,(struct Cyc_List_List*)& Cyc_opt14,(struct Cyc_List_List*)& Cyc_opt15,(struct Cyc_List_List*)& Cyc_opt16,(struct Cyc_List_List*)& Cyc_opt17,(struct Cyc_List_List*)& Cyc_opt18,(struct Cyc_List_List*)& Cyc_opt19,(struct Cyc_List_List*)& Cyc_opt20,(struct Cyc_List_List*)& Cyc_opt21,(struct Cyc_List_List*)& Cyc_opt22,(struct Cyc_List_List*)& Cyc_opt23,(struct Cyc_List_List*)& Cyc_opt24,(struct Cyc_List_List*)& Cyc_opt25,(struct Cyc_List_List*)& Cyc_opt26,(struct Cyc_List_List*)& Cyc_opt27,(struct Cyc_List_List*)& Cyc_opt28,(struct Cyc_List_List*)& Cyc_opt29,(struct Cyc_List_List*)& Cyc_opt30,(struct Cyc_List_List*)& Cyc_opt31,(struct Cyc_List_List*)& Cyc_opt32,(struct Cyc_List_List*)& Cyc_opt33,(struct Cyc_List_List*)& Cyc_opt34,(struct Cyc_List_List*)& Cyc_opt35,(struct Cyc_List_List*)& Cyc_opt36,(struct Cyc_List_List*)& Cyc_opt37,(struct Cyc_List_List*)& Cyc_opt38,(struct Cyc_List_List*)& Cyc_opt39,(struct Cyc_List_List*)& Cyc_opt41,(struct Cyc_List_List*)& Cyc_opt42,(struct Cyc_List_List*)& Cyc_opt43,(struct Cyc_List_List*)& Cyc_opt44,(struct Cyc_List_List*)& Cyc_opt45,(struct Cyc_List_List*)& Cyc_opt46,(struct Cyc_List_List*)& Cyc_opt47,(struct Cyc_List_List*)& Cyc_opt48,(struct Cyc_List_List*)& Cyc_opt49,(struct Cyc_List_List*)& Cyc_opt50,(struct Cyc_List_List*)& Cyc_opt52,(struct Cyc_List_List*)& Cyc_opt54,(struct Cyc_List_List*)& Cyc_opt55,(struct Cyc_List_List*)& Cyc_opt56,(struct Cyc_List_List*)& Cyc_opt57,(struct Cyc_List_List*)& Cyc_opt58,(struct Cyc_List_List*)& Cyc_opt59,(struct Cyc_List_List*)& Cyc_opt60,(struct Cyc_List_List*)& Cyc_opt61,(struct Cyc_List_List*)& Cyc_opt62,(struct Cyc_List_List*)& Cyc_opt63,(struct Cyc_List_List*)& Cyc_opt64,(struct Cyc_List_List*)& Cyc_opt65,(struct Cyc_List_List*)& Cyc_opt66,(struct Cyc_List_List*)& Cyc_opt67,(struct Cyc_List_List*)& Cyc_opt68,(struct Cyc_List_List*)& Cyc_opt69,(struct Cyc_List_List*)& Cyc_opt70,(struct Cyc_List_List*)& Cyc_opt71,(struct Cyc_List_List*)& Cyc_opt72,(struct Cyc_List_List*)& Cyc_opt73,(struct Cyc_List_List*)& Cyc_opt74,(struct Cyc_List_List*)& Cyc_opt75,(struct Cyc_List_List*)& Cyc_opt76,(struct Cyc_List_List*)& Cyc_opt77,(struct Cyc_List_List*)& Cyc_opt78,(struct Cyc_List_List*)& Cyc_opt79,(struct Cyc_List_List*)& Cyc_opt80,(struct Cyc_List_List*)& Cyc_opt81,(struct Cyc_List_List*)& Cyc_opt82,(struct Cyc_List_List*)& Cyc_opt83,(struct Cyc_List_List*)& Cyc_opt84,(struct Cyc_List_List*)& Cyc_opt85,(struct Cyc_List_List*)& Cyc_opt86,(struct Cyc_List_List*)& Cyc_opt87,(struct Cyc_List_List*)& Cyc_opt88,(struct Cyc_List_List*)& Cyc_opt89,(struct Cyc_List_List*)& Cyc_opt90,(struct Cyc_List_List*)& Cyc_opt91,(struct Cyc_List_List*)& Cyc_opt92,(struct Cyc_List_List*)& Cyc_opt93,(struct Cyc_List_List*)& Cyc_opt94,(struct Cyc_List_List*)& Cyc_opt95};
# 1365
void Cyc_print_options (void){struct Cyc_List_List**_T0;struct Cyc_List_List*_T1;struct _fat_ptr _T2;_T0=Cyc_global_options;_T1=_T0[0];_T2=
_tag_fat("<program.cyc>",sizeof(char),14U);Cyc_Arg_usage(_T1,_T2);}
# 1370
int Cyc_main(int argc,struct _fat_ptr argv){int _T0;unsigned _T1;struct Cyc_List_List**_T2;int _T3;char*_T4;struct Cyc_List_List**_T5;struct Cyc_List_List*_T6;struct Cyc_List_List**_T7;int _T8;struct Cyc_List_List**_T9;struct Cyc_List_List*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;int _TE;struct Cyc_String_pa_PrintArg_struct _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_List_List*_T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct _fat_ptr _T16;unsigned char*_T17;struct _fat_ptr*_T18;struct Cyc_List_List*_T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;struct Cyc_List_List*_T1C;struct _fat_ptr _T1D;struct Cyc_List_List*_T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;unsigned char*_T21;unsigned _T22;struct Cyc_List_List*_T23;struct _fat_ptr _T24;struct Cyc_List_List*_T25;struct _fat_ptr _T26;struct _fat_ptr _T27;int _T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;int _T2B;const char*_T2C;int _T2D;struct _fat_ptr _T2E;struct Cyc_String_pa_PrintArg_struct _T2F;struct Cyc_String_pa_PrintArg_struct _T30;struct Cyc_String_pa_PrintArg_struct _T31;struct _fat_ptr _T32;void*_T33;void*_T34;unsigned _T35;struct Cyc_String_pa_PrintArg_struct _T36;struct _fat_ptr _T37;struct _fat_ptr _T38;struct Cyc___cycFILE*_T39;struct _fat_ptr _T3A;struct _fat_ptr _T3B;struct _handler_cons*_T3C;int _T3D;struct Cyc_List_List*_T3E;void*_T3F;struct _fat_ptr*_T40;struct _fat_ptr _T41;int _T42;struct Cyc_List_List*_T43;void*_T44;int _T45;int _T46;enum Cyc_Flags_Cyclone_Passes _T47;int _T48;struct _fat_ptr _T49;unsigned char*_T4A;unsigned _T4B;struct Cyc_List_List*_T4C;unsigned _T4D;struct Cyc_List_List*_T4E;struct _fat_ptr*_T4F;struct _fat_ptr _T50;struct _fat_ptr _T51;struct _fat_ptr _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct Cyc_List_List*(*_T55)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T56)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T57;struct Cyc_List_List*_T58;struct _fat_ptr _T59;struct Cyc_List_List*_T5A;struct _fat_ptr*_T5B;struct Cyc_List_List*(*_T5C)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T5D)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T5E;struct _fat_ptr _T5F;int _T60;int _T61;int _T62;struct _fat_ptr*_T63;struct _fat_ptr _T64;struct _fat_ptr _T65;int _T66;int _T67;struct _fat_ptr*_T68;struct _fat_ptr _T69;struct _fat_ptr _T6A;int _T6B;struct _fat_ptr _T6C;int _T6D;int _T6E;int _T6F;int _T70;int _T71;int _T72;struct _fat_ptr _T73;int _T74;int _T75;struct _fat_ptr _T76;struct Cyc_String_pa_PrintArg_struct _T77;struct Cyc_String_pa_PrintArg_struct _T78;struct Cyc_String_pa_PrintArg_struct _T79;struct _fat_ptr _T7A;struct _fat_ptr _T7B;struct _fat_ptr _T7C;struct Cyc_String_pa_PrintArg_struct _T7D;struct Cyc_String_pa_PrintArg_struct _T7E;struct Cyc_String_pa_PrintArg_struct _T7F;struct _fat_ptr _T80;struct _fat_ptr _T81;int _T82;struct _handler_cons*_T83;int _T84;struct Cyc_List_List*(*_T85)(int(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T86)(int(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T87;struct Cyc_List_List*(*_T88)(int(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T89)(int(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T8A;struct Cyc_List_List*_T8B;struct Cyc_List_List*_T8C;int _T8D;struct Cyc_List_List*_T8E;struct Cyc_Interface_I*(*_T8F)(struct Cyc_Interface_I*(*)(struct _fat_ptr*),struct Cyc_List_List*,struct Cyc_List_List*);struct Cyc_Interface_I*(*_T90)(struct Cyc_Interface_I*(*)(void*),struct Cyc_List_List*,struct Cyc_List_List*);struct Cyc_List_List*_T91;struct Cyc_List_List*_T92;struct Cyc___cycFILE*_T93;struct _fat_ptr _T94;struct _fat_ptr _T95;int _T96;struct _fat_ptr _T97;struct Cyc_String_pa_PrintArg_struct _T98;struct _fat_ptr*_T99;struct _fat_ptr _T9A;struct _fat_ptr _T9B;struct _fat_ptr _T9C;struct _fat_ptr _T9D;struct _fat_ptr _T9E;struct _fat_ptr _T9F;struct Cyc_Interface_I*_TA0;struct Cyc_Interface_I*_TA1;struct _tuple11*_TA2;int _TA3;struct Cyc___cycFILE*_TA4;struct _fat_ptr _TA5;struct _fat_ptr _TA6;void*_TA7;struct Cyc_String_pa_PrintArg_struct _TA8;struct _fat_ptr _TA9;void*_TAA;void*_TAB;unsigned _TAC;struct Cyc_String_pa_PrintArg_struct _TAD;struct _fat_ptr _TAE;void*_TAF;void*_TB0;unsigned _TB1;struct Cyc_Int_pa_PrintArg_struct _TB2;int _TB3;struct Cyc___cycFILE*_TB4;struct _fat_ptr _TB5;struct _fat_ptr _TB6;struct _fat_ptr _TB7;struct Cyc_String_pa_PrintArg_struct _TB8;struct _fat_ptr*_TB9;struct _fat_ptr _TBA;struct _fat_ptr _TBB;struct _fat_ptr _TBC;struct _fat_ptr _TBD;struct Cyc_String_pa_PrintArg_struct _TBE;struct Cyc_String_pa_PrintArg_struct _TBF;struct Cyc_String_pa_PrintArg_struct _TC0;struct Cyc_String_pa_PrintArg_struct _TC1;struct Cyc_String_pa_PrintArg_struct _TC2;struct Cyc_String_pa_PrintArg_struct _TC3;struct _fat_ptr _TC4;struct _fat_ptr _TC5;int _TC6;struct Cyc_String_pa_PrintArg_struct _TC7;struct Cyc___cycFILE*_TC8;struct _fat_ptr _TC9;struct _fat_ptr _TCA;struct _fat_ptr _TCB;unsigned char*_TCC;unsigned char*_TCD;const char*_TCE;int _TCF;struct Cyc___cycFILE*_TD0;struct _fat_ptr _TD1;struct _fat_ptr _TD2;int _TD3;int _TD4;
# 1373
GC_blacklist_warn_clear();{
# 1376
struct _fat_ptr optstring=_tag_fat("Options:",sizeof(char),9U);{
# 1378
int i=1;_TL133: _T0=i;_T1=(unsigned)_T0;if(_T1 < 92U)goto _TL131;else{goto _TL132;}
_TL131: _T2=Cyc_global_options;_T3=i - 1;_T4=_check_known_subscript_notnull(_T2,92U,sizeof(struct Cyc_List_List*),_T3);_T5=(struct Cyc_List_List**)_T4;_T6=*_T5;_T7=Cyc_global_options;_T8=i;_T6->tl=_T7[_T8];
# 1378
i=i + 1;goto _TL133;_TL132:;}_T9=Cyc_global_options;{
# 1380
struct Cyc_List_List*options=_T9[0];_TA=options;_TB=optstring;_TC=argv;{
# 1382
struct _fat_ptr otherargs=Cyc_Specsfile_parse_b(_TA,Cyc_add_other,Cyc_add_other_flag,_TB,_TC);_TD=
# 1388
_tag_fat("cycspecs",sizeof(char),9U);{struct _fat_ptr specs_file=Cyc_find_in_arch_path(_TD);_TE=Cyc_Flags_verbose;
if(!_TE)goto _TL134;{struct Cyc_String_pa_PrintArg_struct _TD5;_TD5.tag=0;_TD5.f1=specs_file;_TF=_TD5;}{struct Cyc_String_pa_PrintArg_struct _TD5=_TF;void*_TD6[1];_TD6[0]=& _TD5;_T10=Cyc_stderr;_T11=_tag_fat("Reading from specs file %s\n",sizeof(char),28U);_T12=_tag_fat(_TD6,sizeof(void*),1);Cyc_fprintf(_T10,_T11,_T12);}goto _TL135;_TL134: _TL135: {
struct Cyc_List_List*specs=Cyc_Specsfile_read_specs(specs_file);_T13=specs;_T14=
# 1392
_tag_fat("cyclone",sizeof(char),8U);_T15=Cyc_Specsfile_get_spec(_T13,_T14);{struct _fat_ptr args_from_specs_file=Cyc_Specsfile_split_specs(_T15);_T16=args_from_specs_file;_T17=_T16.curr;_T18=(struct _fat_ptr*)_T17;
if(_T18==0)goto _TL136;
Cyc_Arg_current=0;_T19=options;_T1A=optstring;_T1B=args_from_specs_file;
Cyc_Arg_parse(_T19,Cyc_add_other,Cyc_add_other_flag,_T1A,_T1B);goto _TL137;_TL136: _TL137: _T1C=specs;_T1D=
# 1397
_tag_fat("cyclone_target_cflags",sizeof(char),22U);{struct _fat_ptr target_cflags=Cyc_Specsfile_get_spec(_T1C,_T1D);_T1E=specs;_T1F=
_tag_fat("cyclone_cc",sizeof(char),11U);{struct _fat_ptr cyclone_cc=Cyc_Specsfile_get_spec(_T1E,_T1F);_T20=cyclone_cc;_T21=_T20.curr;_T22=(unsigned)_T21;
if(_T22)goto _TL138;else{goto _TL13A;}_TL13A: cyclone_cc=_tag_fat("gcc",sizeof(char),4U);goto _TL139;_TL138: _TL139: _T23=specs;_T24=
_tag_fat("cyclone_inc_path",sizeof(char),17U);Cyc_def_inc_path=Cyc_Specsfile_get_spec(_T23,_T24);
# 1403
Cyc_Arg_current=0;_T25=options;_T26=optstring;_T27=otherargs;
Cyc_Arg_parse(_T25,Cyc_add_other,Cyc_add_other_flag,_T26,_T27);_T28=Cyc_Flags_infstats;
if(!_T28)goto _TL13B;
Cyc_Lex_lex_init(1);
Cyc_Lex_pos_init();
Cyc_Interproc_inference_statistics();
return 0;_TL13B: _T29=Cyc_cpp;_T2A=
# 1411
_tag_fat("",sizeof(char),1U);_T2B=Cyc_strcmp(_T29,_T2A);if(_T2B!=0)goto _TL13D;_T2D=Cyc_produce_dependencies;
# 1427 "cyclone.cyc"
if(!_T2D)goto _TL13F;_T2C="";goto _TL140;_TL13F: _T2C=" -E";_TL140:{const char*dash_E=_T2C;{struct Cyc_String_pa_PrintArg_struct _TD5;_TD5.tag=0;
# 1429
_TD5.f1=cyclone_cc;_T2F=_TD5;}{struct Cyc_String_pa_PrintArg_struct _TD5=_T2F;{struct Cyc_String_pa_PrintArg_struct _TD6;_TD6.tag=0;_TD6.f1=target_cflags;_T30=_TD6;}{struct Cyc_String_pa_PrintArg_struct _TD6=_T30;{struct Cyc_String_pa_PrintArg_struct _TD7;_TD7.tag=0;{const char*_TD8=dash_E;_T33=(void*)_TD8;_T34=(void*)_TD8;_T35=_get_zero_arr_size_char(_T34,1U);_T32=_tag_fat(_T33,sizeof(char),_T35);}_TD7.f1=_T32;_T31=_TD7;}{struct Cyc_String_pa_PrintArg_struct _TD7=_T31;{struct Cyc_String_pa_PrintArg_struct _TD8;_TD8.tag=0;_TD8.f1=specs_file;_T36=_TD8;}{struct Cyc_String_pa_PrintArg_struct _TD8=_T36;void*_TD9[4];_TD9[0]=& _TD5;_TD9[1]=& _TD6;_TD9[2]=& _TD7;_TD9[3]=& _TD8;_T37=
# 1428
_tag_fat("%s %s -w -x c%s -specs %s",sizeof(char),26U);_T38=_tag_fat(_TD9,sizeof(void*),4);_T2E=Cyc_aprintf(_T37,_T38);}}}}Cyc_set_cpp(_T2E);}goto _TL13E;_TL13D: _TL13E:
# 1431
 if(Cyc_cyclone_files!=0)goto _TL141;if(Cyc_ccargs!=0)goto _TL141;_T39=Cyc_stderr;_T3A=
_tag_fat("missing file\n",sizeof(char),14U);_T3B=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T39,_T3A,_T3B);
exit(1);goto _TL142;_TL141: _TL142:{struct _handler_cons _TD5;_T3C=& _TD5;_push_handler(_T3C);{int _TD6=0;_T3D=setjmp(_TD5.handler);if(!_T3D)goto _TL143;_TD6=1;goto _TL144;_TL143: _TL144: if(_TD6)goto _TL145;else{goto _TL147;}_TL147:{
# 1438
struct Cyc_List_List*l=Cyc_List_rev(Cyc_cyclone_files);_TL14B: if(l!=0)goto _TL149;else{goto _TL14A;}
_TL149: _T3E=l;_T3F=_T3E->hd;_T40=(struct _fat_ptr*)_T3F;_T41=*_T40;Cyc_process_file(_T41);_T42=Cyc_compile_failure;
if(!_T42)goto _TL14C;{int _TD7=1;_npop_handler(0);return _TD7;}_TL14C: _T43=l;
# 1438
l=_T43->tl;goto _TL14B;_TL14A:;}_pop_handler();goto _TL146;_TL145: _T44=Cyc_Core_get_exn_thrown();{void*_TD7=(void*)_T44;void*_TD8;_TD8=_TD7;{void*x=_TD8;_T45=Cyc_compile_failure;
# 1443
if(!_T45)goto _TL14E;return 1;_TL14E:
 Cyc_Core_rethrow(x);};}_TL146:;}}_T46=Cyc_Flags_tags;
# 1446
if(!_T46)goto _TL150;
Cyc_Interproc_close_tags_file();goto _TL151;_TL150: _TL151: _T47=Cyc_Flags_stop_after_pass;_T48=(int)_T47;
# 1450
if(_T48 >= 15)goto _TL152;return 0;_TL152:
# 1456
 if(Cyc_ccargs!=0)goto _TL154;return 0;_TL154: _T49=Cyc_Specsfile_target_arch;_T4A=_T49.curr;_T4B=(unsigned)_T4A;
# 1459
if(!_T4B)goto _TL156;_T4C=Cyc_Specsfile_cyclone_exec_path;_T4D=(unsigned)_T4C;if(!_T4D)goto _TL156;{struct Cyc_List_List*_TD5=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_TD6=_cycalloc(sizeof(struct _fat_ptr));
*_TD6=_tag_fat("",sizeof(char),1U);_T4F=(struct _fat_ptr*)_TD6;}_TD5->hd=_T4F;
_TD5->tl=Cyc_add_subdir(Cyc_Specsfile_cyclone_exec_path,Cyc_Specsfile_target_arch);_T4E=(struct Cyc_List_List*)_TD5;}_T50=
_tag_fat(" -L",sizeof(char),4U);_T51=
# 1460
Cyc_str_sepstr(_T4E,_T50);Cyc_add_ccarg(_T51);goto _TL157;_TL156: _TL157: _T52=
# 1463
_tag_fat("-L",sizeof(char),3U);_T53=Cyc_Specsfile_def_lib_path;_T54=Cyc_strconcat(_T52,_T53);Cyc_add_ccarg(_T54);
Cyc_ccargs=Cyc_List_rev(Cyc_ccargs);_T56=Cyc_List_map;{
struct Cyc_List_List*(*_TD5)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*))_T56;_T55=_TD5;}_T57=Cyc_ccargs;_T58=_T55(Cyc_sh_escape_stringptr,_T57);_T59=_tag_fat(" ",sizeof(char),2U);{struct _fat_ptr ccargs_string=Cyc_str_sepstr(_T58,_T59);
Cyc_libargs=Cyc_List_rev(Cyc_libargs);{struct Cyc_List_List*_TD5=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_TD6=_cycalloc(sizeof(struct _fat_ptr));
*_TD6=_tag_fat("",sizeof(char),1U);_T5B=(struct _fat_ptr*)_TD6;}_TD5->hd=_T5B;_T5D=Cyc_List_map;{
struct Cyc_List_List*(*_TD6)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*))_T5D;_T5C=_TD6;}_T5E=Cyc_libargs;_TD5->tl=_T5C(Cyc_sh_escape_stringptr,_T5E);_T5A=(struct Cyc_List_List*)_TD5;}_T5F=_tag_fat(" ",sizeof(char),2U);{
# 1467
struct _fat_ptr libargs_string=Cyc_str_sepstr(_T5A,_T5F);
# 1470
struct Cyc_List_List*stdlib;
struct _fat_ptr stdlib_string;_T61=Cyc_stop_after_asmfile_r;
# 1473
if(_T61)goto _TL15A;else{goto _TL15C;}_TL15C: _T62=Cyc_stop_after_objectfile_r;if(_T62)goto _TL15A;else{goto _TL15B;}_TL15B: if(Cyc_output_file!=0)goto _TL15D;else{goto _TL158;}_TL15D: _T63=Cyc_output_file;_T64=*_T63;_T65=
# 1475
_tag_fat(".a",sizeof(char),3U);_T66=Cyc_Filename_check_suffix(_T64,_T65);
# 1473
if(_T66)goto _TL15A;else{goto _TL158;}_TL15A: _T60=1;goto _TL159;_TL158:
# 1476
 if(Cyc_output_file==0)goto _TL15E;_T68=Cyc_output_file;_T69=*_T68;_T6A=_tag_fat(".lib",sizeof(char),5U);_T67=Cyc_Filename_check_suffix(_T69,_T6A);goto _TL15F;_TL15E: _T67=0;_TL15F: _T60=_T67;_TL159: {
# 1472
int is_not_executable=_T60;_T6B=is_not_executable;
# 1477
if(!_T6B)goto _TL160;
stdlib=0;_T6C=
_tag_fat("",sizeof(char),1U);stdlib_string=_T6C;goto _TL161;
# 1482
_TL160:{struct _fat_ptr libcyc_flag;
struct _fat_ptr nogc_filename;
struct _fat_ptr runtime_filename;
struct _fat_ptr gc_filename;_T6D=Cyc_pa_r;
if(!_T6D)goto _TL162;
libcyc_flag=_tag_fat("-lcyc_a",sizeof(char),8U);
nogc_filename=_tag_fat("nogc_a.a",sizeof(char),9U);
runtime_filename=_tag_fat("runtime_cyc_a.a",sizeof(char),16U);goto _TL163;
_TL162: _T6E=Cyc_nocheck_r;if(!_T6E)goto _TL164;
libcyc_flag=_tag_fat("-lcyc_nocheck",sizeof(char),14U);
nogc_filename=_tag_fat("nogc.a",sizeof(char),7U);
runtime_filename=_tag_fat("runtime_cyc.a",sizeof(char),14U);goto _TL165;
_TL164: _T6F=Cyc_pg_r;if(!_T6F)goto _TL166;
libcyc_flag=_tag_fat("-lcyc_pg",sizeof(char),9U);
runtime_filename=_tag_fat("runtime_cyc_pg.a",sizeof(char),17U);
nogc_filename=_tag_fat("nogc_pg.a",sizeof(char),10U);goto _TL167;
_TL166: _T70=Cyc_Flags_compile_for_boot;if(!_T70)goto _TL168;
# 1500
libcyc_flag=_tag_fat("-lcycboot",sizeof(char),10U);
nogc_filename=_tag_fat("nogc.a",sizeof(char),7U);
runtime_filename=_tag_fat("runtime_cyc.a",sizeof(char),14U);goto _TL169;
_TL168: _T71=Cyc_pthread_r;if(!_T71)goto _TL16A;
libcyc_flag=_tag_fat("-lcyc",sizeof(char),6U);
nogc_filename=_tag_fat("nogc_pthread.a",sizeof(char),15U);
runtime_filename=_tag_fat("runtime_cyc_pthread.a",sizeof(char),22U);goto _TL16B;
# 1508
_TL16A: libcyc_flag=_tag_fat("-lcyc",sizeof(char),6U);
nogc_filename=_tag_fat("nogc.a",sizeof(char),7U);
runtime_filename=_tag_fat("runtime_cyc.a",sizeof(char),14U);_TL16B: _TL169: _TL167: _TL165: _TL163: _T72=Cyc_pthread_r;
# 1512
if(_T72)goto _TL16C;else{goto _TL16E;}
_TL16E: gc_filename=_tag_fat("gc.a",sizeof(char),5U);goto _TL16D;
# 1515
_TL16C: gc_filename=_tag_fat("gc_pthread.a",sizeof(char),13U);_TL16D: _T74=Cyc_nogc_r;
# 1517
if(!_T74)goto _TL16F;_T73=Cyc_find_in_arch_path(nogc_filename);goto _TL170;_TL16F: _T73=Cyc_find_in_arch_path(gc_filename);_TL170: {struct _fat_ptr gc=_T73;
struct _fat_ptr runtime=Cyc_find_in_arch_path(runtime_filename);
# 1520
stdlib=0;_T75=Cyc_nogc_r;
if(!_T75)goto _TL171;{struct Cyc_String_pa_PrintArg_struct _TD5;_TD5.tag=0;
_TD5.f1=libcyc_flag;_T77=_TD5;}{struct Cyc_String_pa_PrintArg_struct _TD5=_T77;{struct Cyc_String_pa_PrintArg_struct _TD6;_TD6.tag=0;_TD6.f1=runtime;_T78=_TD6;}{struct Cyc_String_pa_PrintArg_struct _TD6=_T78;{struct Cyc_String_pa_PrintArg_struct _TD7;_TD7.tag=0;_TD7.f1=gc;_T79=_TD7;}{struct Cyc_String_pa_PrintArg_struct _TD7=_T79;void*_TD8[3];_TD8[0]=& _TD5;_TD8[1]=& _TD6;_TD8[2]=& _TD7;_T7A=_tag_fat(" %s %s %s ",sizeof(char),11U);_T7B=_tag_fat(_TD8,sizeof(void*),3);_T76=Cyc_aprintf(_T7A,_T7B);}}}stdlib_string=_T76;goto _TL172;
# 1524
_TL171:{struct Cyc_String_pa_PrintArg_struct _TD5;_TD5.tag=0;_TD5.f1=libcyc_flag;_T7D=_TD5;}{struct Cyc_String_pa_PrintArg_struct _TD5=_T7D;{struct Cyc_String_pa_PrintArg_struct _TD6;_TD6.tag=0;_TD6.f1=runtime;_T7E=_TD6;}{struct Cyc_String_pa_PrintArg_struct _TD6=_T7E;{struct Cyc_String_pa_PrintArg_struct _TD7;_TD7.tag=0;_TD7.f1=gc;_T7F=_TD7;}{struct Cyc_String_pa_PrintArg_struct _TD7=_T7F;void*_TD8[3];_TD8[0]=& _TD5;_TD8[1]=& _TD6;_TD8[2]=& _TD7;_T80=_tag_fat(" %s %s %s -DCYC_GC_PTHREAD_REDIRECTS ",sizeof(char),38U);_T81=_tag_fat(_TD8,sizeof(void*),3);_T7C=Cyc_aprintf(_T80,_T81);}}}stdlib_string=_T7C;_TL172:;}}_TL161: _T82=Cyc_ic_r;
# 1527
if(!_T82)goto _TL173;{struct _handler_cons _TD5;_T83=& _TD5;_push_handler(_T83);{int _TD6=0;_T84=setjmp(_TD5.handler);if(!_T84)goto _TL175;_TD6=1;goto _TL176;_TL175: _TL176: if(_TD6)goto _TL177;else{goto _TL179;}_TL179: _T86=Cyc_List_filter;{
struct Cyc_List_List*(*_TD7)(int(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(int(*)(struct _fat_ptr*),struct Cyc_List_List*))_T86;_T85=_TD7;}_T87=Cyc_ccargs;Cyc_ccargs=_T85(Cyc_is_cfile,_T87);_T89=Cyc_List_filter;{
struct Cyc_List_List*(*_TD7)(int(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(int(*)(struct _fat_ptr*),struct Cyc_List_List*))_T89;_T88=_TD7;}_T8A=Cyc_libargs;Cyc_libargs=_T88(Cyc_is_cfile,_T8A);_T8B=stdlib;_T8C=
Cyc_List_append(Cyc_ccargs,Cyc_libargs);{struct Cyc_List_List*lf=Cyc_List_append(_T8B,_T8C);_T8D=is_not_executable;
if(_T8D)goto _TL17A;else{goto _TL17C;}
_TL17C:{struct Cyc_List_List*_TD7=_cycalloc(sizeof(struct Cyc_List_List));_TD7->hd=Cyc_final_strptr;_TD7->tl=lf;_T8E=(struct Cyc_List_List*)_TD7;}lf=_T8E;goto _TL17B;_TL17A: _TL17B: _T90=Cyc_Interface_get_and_merge_list;{
# 1534
struct Cyc_Interface_I*(*_TD7)(struct Cyc_Interface_I*(*)(struct _fat_ptr*),struct Cyc_List_List*,struct Cyc_List_List*)=(struct Cyc_Interface_I*(*)(struct Cyc_Interface_I*(*)(struct _fat_ptr*),struct Cyc_List_List*,struct Cyc_List_List*))_T90;_T8F=_TD7;}_T91=lf;_T92=lf;{struct Cyc_Interface_I*i=_T8F(Cyc_read_cycio,_T91,_T92);
if(i!=0)goto _TL17D;_T93=Cyc_stderr;_T94=
_tag_fat("Error: interfaces incompatible\n",sizeof(char),32U);_T95=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T93,_T94,_T95);
Cyc_compile_failure=1;
Cyc_remove_cfiles();{int _TD7=1;_npop_handler(0);return _TD7;}_TL17D: _T96=is_not_executable;
# 1541
if(!_T96)goto _TL17F;
if(Cyc_output_file==0)goto _TL181;{struct Cyc_String_pa_PrintArg_struct _TD7;_TD7.tag=0;_T99=Cyc_output_file;_T9A=*_T99;
_TD7.f1=Cyc_Filename_chop_extension(_T9A);_T98=_TD7;}{struct Cyc_String_pa_PrintArg_struct _TD7=_T98;void*_TD8[1];_TD8[0]=& _TD7;_T9B=_tag_fat("%s.cycio",sizeof(char),9U);_T9C=_tag_fat(_TD8,sizeof(void*),1);_T97=Cyc_aprintf(_T9B,_T9C);}{struct _fat_ptr output_file_io=_T97;_T9D=output_file_io;_T9E=
_tag_fat("wb",sizeof(char),3U);_T9F=_tag_fat("interface object file",sizeof(char),22U);{struct Cyc___cycFILE*f=Cyc_try_file_open(_T9D,_T9E,_T9F);
if(f!=0)goto _TL183;
Cyc_compile_failure=1;
Cyc_remove_cfiles();{int _TD7=1;_npop_handler(0);return _TD7;}_TL183:
# 1550
 Cyc_Interface_save(i,f);
Cyc_file_close(f);}}goto _TL182;_TL181: _TL182: goto _TL180;
# 1554
_TL17F: _TA0=Cyc_Interface_empty();_TA1=i;{struct _tuple11*_TD7=_cycalloc(sizeof(struct _tuple11));
_TD7->f0=_tag_fat("empty interface",sizeof(char),16U);_TD7->f1=_tag_fat("global interface",sizeof(char),17U);_TA2=(struct _tuple11*)_TD7;}_TA3=
# 1554
Cyc_Interface_is_subinterface(_TA0,_TA1,_TA2);if(_TA3)goto _TL185;else{goto _TL187;}
# 1556
_TL187: _TA4=Cyc_stderr;_TA5=_tag_fat("Error: some objects are still undefined\n",sizeof(char),41U);_TA6=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TA4,_TA5,_TA6);
Cyc_compile_failure=1;
Cyc_remove_cfiles();{int _TD7=1;_npop_handler(0);return _TD7;}_TL185: _TL180:;}}_pop_handler();goto _TL178;_TL177: _TA7=Cyc_Core_get_exn_thrown();{void*_TD7=(void*)_TA7;void*_TD8;_TD8=_TD7;{void*e=_TD8;{struct Cyc_String_pa_PrintArg_struct _TD9;_TD9.tag=0;{const char*_TDA=
# 1564
Cyc_Core_get_exn_name(e);_TAA=(void*)_TDA;_TAB=(void*)_TDA;_TAC=_get_zero_arr_size_char(_TAB,1U);_TA9=_tag_fat(_TAA,sizeof(char),_TAC);}_TD9.f1=_TA9;_TA8=_TD9;}{struct Cyc_String_pa_PrintArg_struct _TD9=_TA8;{struct Cyc_String_pa_PrintArg_struct _TDA;_TDA.tag=0;{const char*_TDB=Cyc_Core_get_exn_filename();_TAF=(void*)_TDB;_TB0=(void*)_TDB;_TB1=_get_zero_arr_size_char(_TB0,1U);_TAE=_tag_fat(_TAF,sizeof(char),_TB1);}_TDA.f1=_TAE;_TAD=_TDA;}{struct Cyc_String_pa_PrintArg_struct _TDA=_TAD;{struct Cyc_Int_pa_PrintArg_struct _TDB;_TDB.tag=1;_TB3=Cyc_Core_get_exn_lineno();_TDB.f1=(unsigned long)_TB3;_TB2=_TDB;}{struct Cyc_Int_pa_PrintArg_struct _TDB=_TB2;void*_TDC[3];_TDC[0]=& _TD9;_TDC[1]=& _TDA;_TDC[2]=& _TDB;_TB4=Cyc_stderr;_TB5=_tag_fat("INTERNAL COMPILER FAILURE:  exception %s from around %s:%d thrown.\n  Please send bug report to cyclone-bugs-l@lists.cs.cornell.edu",sizeof(char),131U);_TB6=_tag_fat(_TDC,sizeof(void*),3);Cyc_fprintf(_TB4,_TB5,_TB6);}}}
Cyc_compile_failure=1;
Cyc_remove_cfiles();
return 1;};}_TL178:;}}goto _TL174;_TL173: _TL174: {
# 1570
struct _fat_ptr outfile_str=_tag_fat("",sizeof(char),1U);
if(Cyc_output_file==0)goto _TL188;{struct Cyc_String_pa_PrintArg_struct _TD5;_TD5.tag=0;_TB9=Cyc_output_file;_TBA=*_TB9;
_TD5.f1=Cyc_sh_escape_string(_TBA);_TB8=_TD5;}{struct Cyc_String_pa_PrintArg_struct _TD5=_TB8;void*_TD6[1];_TD6[0]=& _TD5;_TBB=_tag_fat(" -o %s",sizeof(char),7U);_TBC=_tag_fat(_TD6,sizeof(void*),1);_TB7=Cyc_aprintf(_TBB,_TBC);}outfile_str=_TB7;goto _TL189;_TL188: _TL189:{struct Cyc_String_pa_PrintArg_struct _TD5;_TD5.tag=0;
# 1576
_TD5.f1=cyclone_cc;_TBE=_TD5;}{struct Cyc_String_pa_PrintArg_struct _TD5=_TBE;{struct Cyc_String_pa_PrintArg_struct _TD6;_TD6.tag=0;_TD6.f1=target_cflags;_TBF=_TD6;}{struct Cyc_String_pa_PrintArg_struct _TD6=_TBF;{struct Cyc_String_pa_PrintArg_struct _TD7;_TD7.tag=0;
_TD7.f1=ccargs_string;_TC0=_TD7;}{struct Cyc_String_pa_PrintArg_struct _TD7=_TC0;{struct Cyc_String_pa_PrintArg_struct _TD8;_TD8.tag=0;_TD8.f1=outfile_str;_TC1=_TD8;}{struct Cyc_String_pa_PrintArg_struct _TD8=_TC1;{struct Cyc_String_pa_PrintArg_struct _TD9;_TD9.tag=0;
_TD9.f1=stdlib_string;_TC2=_TD9;}{struct Cyc_String_pa_PrintArg_struct _TD9=_TC2;{struct Cyc_String_pa_PrintArg_struct _TDA;_TDA.tag=0;_TDA.f1=libargs_string;_TC3=_TDA;}{struct Cyc_String_pa_PrintArg_struct _TDA=_TC3;void*_TDB[6];_TDB[0]=& _TD5;_TDB[1]=& _TD6;_TDB[2]=& _TD7;_TDB[3]=& _TD8;_TDB[4]=& _TD9;_TDB[5]=& _TDA;_TC4=
# 1575
_tag_fat("%s %s %s%s %s%s",sizeof(char),16U);_TC5=_tag_fat(_TDB,sizeof(void*),6);_TBD=Cyc_aprintf(_TC4,_TC5);}}}}}}{
# 1574
struct _fat_ptr cccmd=_TBD;_TC6=Cyc_Flags_verbose;
# 1579
if(!_TC6)goto _TL18A;{struct Cyc_String_pa_PrintArg_struct _TD5;_TD5.tag=0;_TD5.f1=cccmd;_TC7=_TD5;}{struct Cyc_String_pa_PrintArg_struct _TD5=_TC7;void*_TD6[1];_TD6[0]=& _TD5;_TC8=Cyc_stderr;_TC9=_tag_fat("%s\n",sizeof(char),4U);_TCA=_tag_fat(_TD6,sizeof(void*),1);Cyc_fprintf(_TC8,_TC9,_TCA);}Cyc_fflush(Cyc_stderr);goto _TL18B;_TL18A: _TL18B: _TCB=cccmd;_TCC=_untag_fat_ptr_check_bound(_TCB,sizeof(char),1U);_TCD=_check_null(_TCC);_TCE=(const char*)_TCD;_TCF=
system(_TCE);if(_TCF==0)goto _TL18C;_TD0=Cyc_stderr;_TD1=
_tag_fat("Error: C compiler failed\n",sizeof(char),26U);_TD2=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TD0,_TD1,_TD2);
Cyc_compile_failure=1;
Cyc_remove_cfiles();
return 1;_TL18C:
# 1586
 Cyc_remove_cfiles();_TD4=Cyc_compile_failure;
# 1588
if(!_TD4)goto _TL18E;_TD3=1;goto _TL18F;_TL18E: _TD3=0;_TL18F: return _TD3;}}}}}}}}}}}}}}
