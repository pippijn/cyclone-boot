#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};extern char Cyc_Core_Invalid_argument[17U];struct Cyc_Core_Invalid_argument_exn_struct{char*tag;struct _fat_ptr f1;};extern char Cyc_Core_Failure[8U];struct Cyc_Core_Failure_exn_struct{char*tag;struct _fat_ptr f1;};extern char Cyc_Core_Impossible[11U];struct Cyc_Core_Impossible_exn_struct{char*tag;struct _fat_ptr f1;};extern char Cyc_Core_Not_found[10U];struct Cyc_Core_Not_found_exn_struct{char*tag;};
# 176 "../../library/stdlib/core.h"
extern struct _RegionHandle*Cyc_Core_heap_region;
# 325 "../../library/stdlib/core.h"
void Cyc_Core_rethrow(void*);
# 38 "../../library/stdlib/cycboot.h"
extern int Cyc_open(const char*,int,struct _fat_ptr);struct Cyc___cycFILE;
# 51
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
# 104
extern int Cyc_fputc(int,struct Cyc___cycFILE*);
# 106
extern int Cyc_fputs(const char*,struct Cyc___cycFILE*);
# 224 "../../library/stdlib/cycboot.h"
extern int Cyc_vfprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 300 "../../library/stdlib/cycboot.h"
extern int isspace(int);
# 310
extern int toupper(int);
# 318
extern int system(const char*);
extern void exit(int);
# 331
extern int mkdir(const char*,unsigned short);
# 334
extern int close(int);
extern int chdir(const char*);
extern struct _fat_ptr Cyc_getcwd(struct _fat_ptr,unsigned long);extern char Cyc_Lexing_Error[6U];struct Cyc_Lexing_Error_exn_struct{char*tag;struct _fat_ptr f1;};struct Cyc_Lexing_lexbuf{void(*refill_buff)(struct Cyc_Lexing_lexbuf*);void*refill_state;struct _fat_ptr lex_buffer;int lex_buffer_len;int lex_abs_pos;int lex_start_pos;int lex_curr_pos;int lex_last_pos;int lex_last_action;int lex_eof_reached;};
# 78 "../../library/stdlib/lexing.h"
extern struct Cyc_Lexing_lexbuf*Cyc_Lexing_from_file(struct Cyc___cycFILE*);
# 82
extern struct _fat_ptr Cyc_Lexing_lexeme(struct Cyc_Lexing_lexbuf*);
extern char Cyc_Lexing_lexeme_char(struct Cyc_Lexing_lexbuf*,int);
extern int Cyc_Lexing_lexeme_start(struct Cyc_Lexing_lexbuf*);
extern int Cyc_Lexing_lexeme_end(struct Cyc_Lexing_lexbuf*);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 54 "../../library/stdlib/list.h"
extern struct Cyc_List_List*Cyc_List_list(struct _fat_ptr);
# 76
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);
# 172
extern struct Cyc_List_List*Cyc_List_rev(struct Cyc_List_List*);
# 178
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);
# 184
extern struct Cyc_List_List*Cyc_List_append(struct Cyc_List_List*,struct Cyc_List_List*);struct _tuple0{struct Cyc_List_List*f0;struct Cyc_List_List*f1;};
# 294
extern struct _tuple0 Cyc_List_split(struct Cyc_List_List*);
# 322
extern int Cyc_List_mem(int(*)(void*,void*),struct Cyc_List_List*,void*);struct Cyc_Iter_Iter{void*env;int(*next)(void*,void*);};
# 37 "../../library/stdlib/iter.h"
int Cyc_Iter_next(struct Cyc_Iter_Iter,void*);struct Cyc_Set_Set;
# 51 "../../library/stdlib/set.h"
extern struct Cyc_Set_Set*Cyc_Set_empty(int(*)(void*,void*));
# 65
extern struct Cyc_Set_Set*Cyc_Set_insert(struct Cyc_Set_Set*,void*);
# 77
extern struct Cyc_Set_Set*Cyc_Set_union_two(struct Cyc_Set_Set*,struct Cyc_Set_Set*);
# 84
extern struct Cyc_Set_Set*Cyc_Set_diff(struct Cyc_Set_Set*,struct Cyc_Set_Set*);
# 87
extern struct Cyc_Set_Set*Cyc_Set_delete(struct Cyc_Set_Set*,void*);
# 96
extern int Cyc_Set_cardinality(struct Cyc_Set_Set*);
# 99
extern int Cyc_Set_is_empty(struct Cyc_Set_Set*);
# 102
extern int Cyc_Set_member(struct Cyc_Set_Set*,void*);
# 139
extern void*Cyc_Set_choose(struct Cyc_Set_Set*);
# 143
extern struct Cyc_Iter_Iter Cyc_Set_make_iter(struct _RegionHandle*,struct Cyc_Set_Set*);
# 38 "../../library/stdlib/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 49 "../../library/stdlib/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr*,struct _fat_ptr*);
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
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);struct Cyc_Hashtable_Table;
# 39 "../../library/stdlib/hashtable.h"
extern struct Cyc_Hashtable_Table*Cyc_Hashtable_create(int,int(*)(void*,void*),int(*)(void*));
# 50
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*,void*,void*);
# 52
extern void*Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table*,void*);
# 86
extern int Cyc_Hashtable_hash_stringptr(struct _fat_ptr*);
# 30 "../../library/stdlib/filename.h"
extern struct _fat_ptr Cyc_Filename_concat(struct _fat_ptr,struct _fat_ptr);
# 34
extern struct _fat_ptr Cyc_Filename_chop_extension(struct _fat_ptr);
# 40
extern struct _fat_ptr Cyc_Filename_dirname(struct _fat_ptr);
# 43
extern struct _fat_ptr Cyc_Filename_basename(struct _fat_ptr);struct Cyc_Arg_Unit_spec_Arg_Spec_struct{int tag;void(*f1)(void);};struct Cyc_Arg_Flag_spec_Arg_Spec_struct{int tag;void(*f1)(struct _fat_ptr);};struct Cyc_Arg_Set_spec_Arg_Spec_struct{int tag;int*f1;};struct Cyc_Arg_String_spec_Arg_Spec_struct{int tag;void(*f1)(struct _fat_ptr);};
# 66 "../../library/stdlib/arg.h"
extern void Cyc_Arg_usage(struct Cyc_List_List*,struct _fat_ptr);
# 69
extern int Cyc_Arg_current;
# 71
extern void Cyc_Arg_parse(struct Cyc_List_List*,void(*)(struct _fat_ptr),int(*)(struct _fat_ptr),struct _fat_ptr,struct _fat_ptr);struct Cyc_Buffer_t;
# 50 "../../library/stdlib/buffer.h"
extern struct Cyc_Buffer_t*Cyc_Buffer_create(unsigned);
# 58
extern struct _fat_ptr Cyc_Buffer_contents(struct Cyc_Buffer_t*);
# 81
extern void Cyc_Buffer_add_char(struct Cyc_Buffer_t*,char);
# 92 "../../library/stdlib/buffer.h"
extern void Cyc_Buffer_add_string(struct Cyc_Buffer_t*,struct _fat_ptr);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple1{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 140 "../../library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U};struct Cyc_Absyn_Tqual{int print_const: 1;int q_volatile: 1;int q_restrict: 1;int real_const: 1;unsigned loc;};
# 163
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;int inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;int c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct _tuple3{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;struct Cyc_Core_Opt*f2;};struct _union_AggrInfo_UnknownAggr{int tag;struct _tuple3 val;};struct _union_AggrInfo_KnownAggr{int tag;struct Cyc_Absyn_Aggrdecl**val;};union Cyc_Absyn_AggrInfo{struct _union_AggrInfo_UnknownAggr UnknownAggr;struct _union_AggrInfo_KnownAggr KnownAggr;};struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_TypeDecl{void*r;unsigned loc;};struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct{int tag;struct _tuple1*f1;struct Cyc_Absyn_Enumdecl*f2;};struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_AggrInfo f1;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct{int tag;enum Cyc_Absyn_AggrKind f1;int f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_TypedefType_Absyn_Type_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_Typedefdecl*f3;void*f4;};struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct{int tag;struct Cyc_Absyn_TypeDecl*f1;void**f2;};struct Cyc_Absyn_TypeofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};
# 526 "../../library/compiler/absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};
# 533
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct{int tag;struct _fat_ptr*f1;};
# 551
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};
# 566
enum Cyc_Absyn_MallocKind{Cyc_Absyn_Malloc =0U,Cyc_Absyn_Calloc =1U,Cyc_Absyn_Vmalloc =2U};struct Cyc_Absyn_MallocInfo{enum Cyc_Absyn_MallocKind mknd;struct Cyc_Absyn_Exp*rgn;struct Cyc_Absyn_Exp*aqual;void**elt_type;struct Cyc_Absyn_Exp*num_elts;int fat_result;int inline_call;};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;int f4;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;int f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;int f3;int f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;int f3;int f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct _tuple9{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_MallocInfo f1;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;};struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;int escapes;int is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;int is_inline;struct _tuple1*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;int escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;int tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;int expected_mem_kind;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;int is_extensible;};struct Cyc_Absyn_Enumfield{struct _tuple1*name;struct Cyc_Absyn_Exp*tag;unsigned loc;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Typedefdecl{struct _tuple1*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;int extern_c;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Typedefdecl*f1;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1166 "../../library/compiler/absyn.h"
struct Cyc_Absyn_Decl*Cyc_Absyn_new_decl(void*,unsigned);
# 1224
struct Cyc_Absyn_Decl*Cyc_Absyn_lookup_decl(struct Cyc_List_List*,struct _fat_ptr*);struct _tuple12{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;};
# 1230
struct _tuple12 Cyc_Absyn_aggr_kinded_name(union Cyc_Absyn_AggrInfo);
# 1238
struct _tuple1*Cyc_Absyn_binding2qvar(void*);struct Cyc_Absynpp_Params{int expand_typedefs;int qvar_to_Cids;int add_cyc_prefix;int to_VC;int decls_first;int rewrite_temp_tvars;int print_all_tvars;int print_all_kinds;int print_all_effects;int print_using_stmts;int print_externC_stmts;int print_full_evars;int print_zeroterm;int generate_line_directives;int use_curr_namespace;struct Cyc_List_List*curr_namespace;int gen_clean_cyclone;};
# 54 "../../library/compiler/absynpp.h"
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params*);
# 56
extern struct Cyc_Absynpp_Params Cyc_Absynpp_cyc_params_r;
# 58
void Cyc_Absynpp_decllist2file(struct Cyc_List_List*,struct Cyc___cycFILE*);
# 63
struct _fat_ptr Cyc_Absynpp_typ2string(void*);
# 27 "../../library/compiler/warn.h"
extern void Cyc_Warn_reset(struct _fat_ptr);
extern int Cyc_Warn_print_warnings;
# 25 "../../library/compiler/parse.h"
struct Cyc_List_List*Cyc_Parse_parse_file(struct Cyc___cycFILE*);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};extern char Cyc_Dict_Absent[7U];struct Cyc_Dict_Absent_exn_struct{char*tag;};struct Cyc_Tcenv_Genv{struct Cyc_Dict_Dict aggrdecls;struct Cyc_Dict_Dict datatypedecls;struct Cyc_Dict_Dict enumdecls;struct Cyc_Dict_Dict typedefs;struct Cyc_Dict_Dict ordinaries;};struct Cyc_Tcenv_Fenv;struct Cyc_Tcenv_Tenv{struct Cyc_List_List*ns;struct Cyc_Tcenv_Genv*ae;struct Cyc_Tcenv_Fenv*le;int allow_valueof: 1;int in_extern_c_include: 1;int in_tempest: 1;int tempest_generalize: 1;int in_extern_c_inc_repeat: 1;};
# 68 "../../library/compiler/tcenv.h"
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_tc_init (void);
# 29 "../../library/compiler/tc.h"
void Cyc_Tc_tc(struct Cyc_Tcenv_Tenv*,int,struct Cyc_List_List*);
# 29 "../../library/compiler/binding.h"
void Cyc_Binding_resolve_all(struct Cyc_List_List*);
# 30 "../../library/compiler/specsfile.h"
extern void Cyc_Specsfile_set_target_arch(struct _fat_ptr);
# 32
extern void Cyc_Specsfile_add_cyclone_exec_path(struct _fat_ptr);
# 34
extern struct Cyc_List_List*Cyc_Specsfile_read_specs(struct _fat_ptr);
# 36
extern struct _fat_ptr Cyc_Specsfile_get_spec(struct Cyc_List_List*,struct _fat_ptr);
# 39
extern struct _fat_ptr Cyc_Specsfile_parse_b(struct Cyc_List_List*,void(*)(struct _fat_ptr),int(*)(struct _fat_ptr),struct _fat_ptr,struct _fat_ptr);
# 44
extern struct _fat_ptr Cyc_Specsfile_find_in_arch_path(struct _fat_ptr);
# 78 "buildlib.cyl"
extern void Cyc_Lex_lex_init(int);static char _TmpG0[4U]="gcc";
# 88
static struct _fat_ptr Cyc_cyclone_cc={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 4U};static char _TmpG1[1U]="";
static struct _fat_ptr Cyc_target_cflags={(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 1U};
# 91
static int Cyc_do_setjmp=0;
static int Cyc_verbose=0;
# 94
struct Cyc___cycFILE*Cyc_log_file=0;
struct Cyc___cycFILE*Cyc_cstubs_file=0;
struct Cyc___cycFILE*Cyc_cycstubs_file=0;
# 98
int Cyc_log(struct _fat_ptr fmt,struct _fat_ptr ap){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc___cycFILE*_T3;int _T4;
# 101
if(Cyc_log_file!=0)goto _TL0;_T0=Cyc_stderr;_T1=
_tag_fat("Internal error: log file is NULL\n",sizeof(char),34U);_T2=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);
exit(1);goto _TL1;_TL0: _TL1: {
# 105
int x=Cyc_vfprintf(Cyc_log_file,fmt,ap);_T3=
_check_null(Cyc_log_file);Cyc_fflush(_T3);_T4=x;
return _T4;}}
# 110
static struct _fat_ptr*Cyc_current_source=0;
static struct Cyc_List_List*Cyc_current_args=0;
static struct Cyc_Set_Set**Cyc_current_targets=0;
static void Cyc_add_target(struct _fat_ptr*sptr){struct Cyc_Set_Set**_T0;struct Cyc_Set_Set*(*_T1)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T2)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T3;struct Cyc_Set_Set*_T4;struct _fat_ptr*_T5;{struct Cyc_Set_Set**_T6=_cycalloc(sizeof(struct Cyc_Set_Set*));_T2=Cyc_Set_insert;{
struct Cyc_Set_Set*(*_T7)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T2;_T1=_T7;}_T3=_check_null(Cyc_current_targets);_T4=*_T3;_T5=sptr;*_T6=_T1(_T4,_T5);_T0=(struct Cyc_Set_Set**)_T6;}Cyc_current_targets=_T0;}
# 116
static struct Cyc_Set_Set**Cyc_headers_to_do=0;struct _tuple13{struct _fat_ptr*f0;struct Cyc_Set_Set*f1;};
# 120
struct _tuple13*Cyc_line(struct Cyc_Lexing_lexbuf*);
int Cyc_macroname(struct Cyc_Lexing_lexbuf*);
int Cyc_args(struct Cyc_Lexing_lexbuf*);
int Cyc_token(struct Cyc_Lexing_lexbuf*);
int Cyc_string(struct Cyc_Lexing_lexbuf*);
# 126
struct Cyc___cycFILE*Cyc_slurp_out=0;
# 128
int Cyc_slurp_string(struct Cyc_Lexing_lexbuf*);
# 130
int Cyc_asm_string(struct Cyc_Lexing_lexbuf*);
int Cyc_asm_comment(struct Cyc_Lexing_lexbuf*);struct _tuple14{struct _fat_ptr f0;struct _fat_ptr*f1;};
# 134
struct _tuple14*Cyc_suck_line(struct Cyc_Lexing_lexbuf*);
int Cyc_suck_macroname(struct Cyc_Lexing_lexbuf*);
int Cyc_suck_restofline(struct Cyc_Lexing_lexbuf*);
struct _fat_ptr Cyc_current_line={(void*)0,(void*)0,(void*)(0 + 0)};struct _tuple15{struct _fat_ptr f0;struct _fat_ptr f1;};struct _tuple16{struct _fat_ptr*f0;struct _fat_ptr*f1;};struct _tuple17{struct _fat_ptr f0;struct Cyc_List_List*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;struct Cyc_List_List*f5;struct Cyc_List_List*f6;struct Cyc_List_List*f7;};
# 150
struct _tuple17*Cyc_spec(struct Cyc_Lexing_lexbuf*);
int Cyc_commands(struct Cyc_Lexing_lexbuf*);
int Cyc_snarfsymbols(struct Cyc_Lexing_lexbuf*);
int Cyc_block(struct Cyc_Lexing_lexbuf*);
int Cyc_block_string(struct Cyc_Lexing_lexbuf*);
int Cyc_block_comment(struct Cyc_Lexing_lexbuf*);
struct _fat_ptr Cyc_current_headerfile={(void*)0,(void*)0,(void*)(0 + 0)};
struct Cyc_List_List*Cyc_snarfed_symbols=0;
struct Cyc_List_List*Cyc_current_symbols=0;
struct Cyc_List_List*Cyc_current_user_defs=0;
struct Cyc_List_List*Cyc_current_cstubs=0;
struct Cyc_List_List*Cyc_current_cycstubs=0;
struct Cyc_List_List*Cyc_current_hstubs=0;
struct Cyc_List_List*Cyc_current_omit_symbols=0;
struct Cyc_List_List*Cyc_current_cpp=0;
struct Cyc_Buffer_t*Cyc_specbuf=0;
struct _fat_ptr Cyc_current_symbol={(void*)0,(void*)0,(void*)(0 + 0)};
int Cyc_rename_current_symbol=0;
int Cyc_braces_to_match=0;
int Cyc_parens_to_match=0;
# 171
int Cyc_numdef=0;
# 173
static struct Cyc_List_List*Cyc_cppargs=0;static char _TmpG2[14U]="BUILDLIB_sym_";
# 175
struct _fat_ptr Cyc_user_prefix={(unsigned char*)_TmpG2,(unsigned char*)_TmpG2,(unsigned char*)_TmpG2 + 14U};
static struct _fat_ptr*Cyc_add_user_prefix(struct _fat_ptr*symbol){struct _fat_ptr _T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr*_T4;_T0=Cyc_user_prefix;_T1=symbol;_T2=*_T1;_T3=
Cyc_strconcat(_T0,_T2);{struct _fat_ptr s=_T3;{struct _fat_ptr*_T5=_cycalloc(sizeof(struct _fat_ptr));
*_T5=s;_T4=(struct _fat_ptr*)_T5;}return _T4;}}
# 180
static struct _fat_ptr Cyc_remove_user_prefix(struct _fat_ptr symbol){int _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;unsigned _T7;int _T8;unsigned long _T9;unsigned _TA;unsigned long _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;
unsigned prefix_len=Cyc_strlen(Cyc_user_prefix);_T0=
Cyc_strncmp(symbol,Cyc_user_prefix,prefix_len);if(_T0==0)goto _TL2;{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag=0;
_TE.f1=symbol;_T1=_TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T1;void*_TF[1];_TF[0]=& _TE;_T2=Cyc_stderr;_T3=_tag_fat("Internal error: bad user type name %s\n",sizeof(char),39U);_T4=_tag_fat(_TF,sizeof(void*),1);Cyc_fprintf(_T2,_T3,_T4);}_T5=symbol;
return _T5;_TL2: _T6=symbol;_T7=prefix_len;_T8=(int)_T7;_T9=
# 186
Cyc_strlen(symbol);_TA=prefix_len;_TB=_T9 - _TA;_TC=Cyc_substring(_T6,_T8,_TB);_TD=_TC;return _TD;}
# 189
static void Cyc_rename_decl(struct Cyc_Absyn_Decl*d){struct Cyc_Absyn_Decl*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Aggrdecl*_T3;struct _tuple1*_T4;struct _fat_ptr*_T5;struct Cyc_Absyn_Aggrdecl*_T6;struct _tuple1*_T7;struct _tuple1 _T8;struct _fat_ptr*_T9;struct _fat_ptr _TA;struct Cyc_Absyn_Enumdecl*_TB;struct _tuple1*_TC;struct _fat_ptr*_TD;struct Cyc_Absyn_Enumdecl*_TE;struct _tuple1*_TF;struct _tuple1 _T10;struct _fat_ptr*_T11;struct _fat_ptr _T12;struct Cyc_Absyn_Typedefdecl*_T13;struct _tuple1*_T14;struct _fat_ptr*_T15;struct Cyc_Absyn_Typedefdecl*_T16;struct _tuple1*_T17;struct _tuple1 _T18;struct _fat_ptr*_T19;struct _fat_ptr _T1A;struct Cyc___cycFILE*_T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;_T0=d;{
void*_T1E=_T0->r;struct Cyc_Absyn_Typedefdecl*_T1F;struct Cyc_Absyn_Enumdecl*_T20;struct Cyc_Absyn_Aggrdecl*_T21;_T1=(int*)_T1E;_T2=*_T1;switch(_T2){case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T22=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T1E;_T21=_T22->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T21;_T3=ad;_T4=_T3->name;{struct _fat_ptr*_T22=_cycalloc(sizeof(struct _fat_ptr));_T6=ad;_T7=_T6->name;_T8=*_T7;_T9=_T8.f1;_TA=*_T9;
# 192
*_T22=Cyc_remove_user_prefix(_TA);_T5=(struct _fat_ptr*)_T22;}(*_T4).f1=_T5;goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T22=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T1E;_T20=_T22->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T20;_TB=ed;_TC=_TB->name;{struct _fat_ptr*_T22=_cycalloc(sizeof(struct _fat_ptr));_TE=ed;_TF=_TE->name;_T10=*_TF;_T11=_T10.f1;_T12=*_T11;
# 194
*_T22=Cyc_remove_user_prefix(_T12);_TD=(struct _fat_ptr*)_T22;}(*_TC).f1=_TD;goto _LL0;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T22=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T1E;_T1F=_T22->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T1F;_T13=td;_T14=_T13->name;{struct _fat_ptr*_T22=_cycalloc(sizeof(struct _fat_ptr));_T16=td;_T17=_T16->name;_T18=*_T17;_T19=_T18.f1;_T1A=*_T19;
# 196
*_T22=Cyc_remove_user_prefix(_T1A);_T15=(struct _fat_ptr*)_T22;}(*_T14).f1=_T15;goto _LL0;}default: _T1B=Cyc_stderr;_T1C=
# 198
_tag_fat("Error in .cys file: bad user-defined type definition\n",sizeof(char),54U);_T1D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1B,_T1C,_T1D);
exit(1);}_LL0:;}}
# 205
const int Cyc_lex_base[490U]={0,0,75,192,305,310,311,166,312,91,27,384,28,523,637,715,829,325,92,- 3,0,- 1,- 2,- 8,- 3,1,- 2,323,- 4,2,166,- 5,605,907,312,- 6,- 8,- 4,16,945,- 3,1021,29,11,1135,- 4,13,1250,223,- 14,317,12,- 2,216,20,27,29,34,50,49,71,55,66,101,101,100,108,95,386,112,104,105,123,126,397,112,134,190,399,1365,1480,414,205,213,233,219,224,224,245,525,1595,- 9,1710,654,- 10,233,253,684,1825,- 7,1940,720,722,- 11,432,370,379,2018,2095,2172,2253,434,465,381,2328,253,253,253,251,247,257,0,13,4,2409,5,462,2417,2482,475,- 4,- 3,49,467,6,2443,7,491,2505,2543,499,- 29,1162,1167,273,264,267,271,281,284,290,291,- 26,584,285,270,282,278,304,314,311,316,311,325,328,335,381,- 24,392,392,404,414,422,415,- 28,448,453,449,459,467,468,- 20,448,464,472,468,479,474,476,492,519,505,501,501,524,554,- 22,546,544,549,561,558,581,559,581,584,572,582,576,576,- 27,586,584,587,603,611,593,595,611,618,619,829,4,620,622,617,607,608,625,628,637,621,637,639,5,20,- 16,640,642,633,634,632,654,643,640,645,661,645,659,651,646,678,657,665,671,667,696,713,714,23,51,- 18,701,731,727,738,739,753,754,1,53,812,53,809,751,751,759,760,824,817,763,764,792,789,770,771,826,827,829,776,777,1078,800,801,802,814,777,775,790,796,797,879,880,881,- 15,828,830,912,924,925,872,873,928,929,937,- 12,884,885,940,941,942,889,890,945,946,947,- 13,877,876,890,893,906,920,936,938,944,946,1038,1039,- 17,986,987,1142,1121,1123,- 19,1277,986,987,1011,1010,1009,1004,1007,1039,1041,1042,1055,1371,1048,1049,1047,1061,1482,1395,1066,1068,1058,1060,1058,1071,1487,1065,1070,1068,1082,1597,- 7,- 8,8,1259,2575,9,1339,2599,2637,1563,1279,- 49,1253,- 2,1132,- 4,1134,1235,1599,1135,1234,1222,1676,1137,2664,2707,1168,1167,1170,1213,2777,1209,1217,- 36,- 42,- 37,2852,1218,- 40,- 25,1219,- 45,- 39,- 48,2927,2956,1695,1225,1236,1791,2966,2996,1811,1906,3029,3060,3098,1229,1320,3168,3206,1339,1349,1341,1353,1421,1431,- 6,- 34,1248,3138,- 47,- 30,- 32,- 46,- 31,- 33,1258,3246,1269,1304,1925,1343,1344,1346,1356,1359,1360,1361,1362,1363,3319,3403,- 23,- 21,2472,1367,- 41,- 38,- 35,1509,3485,2,3568,1366,15,1309,1309,1310,1318,1349,1397,4};
const int Cyc_lex_backtrk[490U]={- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,2,- 1,- 1,- 1,- 1,2,- 1,8,- 1,3,5,- 1,- 1,6,5,- 1,- 1,- 1,7,6,- 1,6,5,2,0,- 1,- 1,0,2,- 1,12,13,- 1,13,13,13,13,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,11,12,2,4,4,- 1,0,0,0,2,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,2,2,8,3,5,- 1,6,5,- 1,- 1,6,5,2,8,3,5,- 1,6,5,- 1,28,28,28,28,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,24,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,20,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,22,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,6,1,9,2,4,- 1,5,4,- 1,- 1,2,- 1,48,- 1,48,48,48,48,48,48,48,48,5,7,48,48,48,48,0,48,48,- 1,- 1,- 1,0,43,- 1,- 1,42,- 1,- 1,- 1,9,7,- 1,7,7,- 1,8,9,- 1,- 1,9,5,6,5,5,- 1,4,4,4,6,6,5,5,- 1,- 1,- 1,9,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,2,- 1,1,2,1,1,- 1,- 1,- 1,- 1,- 1,- 1,- 1};
const int Cyc_lex_default[490U]={- 1,- 1,- 1,388,377,141,23,99,23,19,- 1,- 1,12,31,49,35,36,23,19,0,- 1,0,0,0,0,- 1,0,- 1,0,- 1,- 1,0,- 1,- 1,- 1,0,0,0,- 1,- 1,0,- 1,42,- 1,- 1,0,- 1,- 1,- 1,0,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,0,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,0,104,- 1,- 1,- 1,- 1,- 1,111,111,111,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,- 1,133,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,271,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,344,344,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,0,- 1,0,- 1,- 1,454,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,0,- 1,- 1,0,0,- 1,0,0,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,- 1,- 1,0,0,0,0,0,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,- 1,- 1,0,0,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1};
const int Cyc_lex_trans[3825U]={0,0,0,0,0,0,0,0,0,0,22,19,28,482,19,28,19,28,36,19,48,48,46,46,48,22,46,0,0,0,0,0,21,270,21,483,21,22,- 1,- 1,22,- 1,- 1,48,223,46,235,22,480,480,480,480,480,480,480,480,480,480,31,104,22,236,115,42,260,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,31,261,271,273,480,133,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,478,478,478,478,478,478,478,478,478,478,122,20,75,22,69,57,58,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,59,60,61,62,478,63,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,64,65,130,389,390,389,389,390,131,22,66,67,68,70,71,132,34,34,34,34,34,34,34,34,72,73,389,391,392,74,76,393,394,395,48,48,396,397,48,398,399,400,401,402,402,402,402,402,402,402,402,402,403,77,404,405,406,48,19,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,19,- 1,- 1,408,407,78,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,378,409,102,379,142,142,24,24,142,134,123,105,105,82,95,105,83,85,28,86,24,29,84,25,380,87,88,142,89,22,26,26,21,21,105,96,97,143,116,117,118,119,120,121,26,35,35,35,35,35,35,35,35,153,146,147,30,30,30,30,30,30,30,30,105,105,148,149,105,150,151,152,197,113,113,113,113,113,191,113,68,68,381,182,68,211,212,105,135,124,144,74,74,79,79,74,113,79,113,175,168,161,27,68,162,31,163,21,81,81,145,164,81,165,74,166,79,114,114,114,114,114,114,114,114,114,114,- 1,32,- 1,- 1,81,- 1,22,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,- 1,167,- 1,- 1,114,- 1,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,169,170,28,129,129,129,129,129,129,129,129,171,172,19,173,31,35,35,35,35,35,35,35,35,174,106,106,90,90,106,35,90,140,140,140,140,140,140,140,140,35,35,35,35,35,35,35,35,106,176,90,177,178,179,91,180,181,183,184,21,21,21,107,108,107,107,107,107,107,107,107,107,107,107,21,185,186,187,188,189,190,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,36,192,193,194,107,195,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,50,50,91,196,50,198,199,33,33,33,33,33,33,33,33,33,33,93,93,200,201,93,202,50,33,33,33,33,33,33,203,204,205,206,207,154,155,156,51,157,93,208,- 1,158,- 1,209,210,98,98,340,52,98,159,160,213,214,33,33,33,33,33,33,215,216,217,218,219,220,221,224,98,237,226,227,225,- 1,228,- 1,43,43,229,230,43,101,101,102,102,101,231,102,53,232,233,234,238,54,55,327,274,262,242,43,56,239,240,243,101,244,102,245,241,246,247,248,249,250,251,44,44,44,44,44,44,44,44,44,44,252,253,254,255,94,256,28,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,257,99,258,259,44,263,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,221,221,45,264,221,36,265,103,266,267,268,269,91,275,276,272,277,278,279,289,281,282,283,221,284,37,280,285,286,287,288,222,49,290,291,321,316,310,38,39,39,39,39,39,39,39,39,39,39,305,297,298,299,300,301,21,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,302,303,304,306,39,307,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,308,22,33,33,33,33,33,33,33,33,33,33,309,103,311,312,313,314,31,33,33,33,33,33,33,315,317,318,319,320,94,322,323,324,325,326,328,329,330,331,41,41,41,41,41,41,41,41,41,41,332,33,33,33,33,33,33,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,333,334,335,336,41,337,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,- 1,41,41,41,41,41,41,41,41,41,41,338,339,341,342,359,354,21,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,350,351,352,353,41,99,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,46,46,292,355,46,356,293,342,342,357,358,342,360,361,362,294,363,295,- 1,372,345,367,368,46,369,370,371,364,364,373,342,364,346,346,374,375,346,376,343,47,47,47,47,47,47,47,47,47,47,152,364,476,453,296,445,346,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,420,417,210,418,47,416,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,22,46,46,365,477,46,477,477,347,449,387,387,412,366,387,474,174,414,348,141,410,415,419,349,46,450,451,477,346,346,387,387,346,387,387,21,448,452,475,167,47,47,47,47,47,47,47,47,47,47,181,346,36,387,36,21,35,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,411,36,345,36,47,35,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,22,79,79,347,- 1,79,- 1,358,358,471,261,358,103,348,386,386,386,386,386,386,386,386,315,35,79,326,49,304,236,339,358,364,364,196,21,364,484,485,19,486,80,80,80,80,80,80,80,80,80,80,487,31,31,99,364,35,99,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,31,31,99,488,80,99,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,31,81,81,363,363,81,365,363,371,371,489,0,371,0,0,0,366,0,444,444,0,0,0,0,81,0,363,0,0,0,477,371,477,477,31,0,0,0,0,28,80,80,80,80,80,80,80,80,80,80,444,444,0,477,0,0,0,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,0,0,0,0,80,0,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,35,90,90,376,376,90,- 1,376,31,31,31,31,31,31,31,31,0,0,0,0,0,0,0,0,90,0,376,0,0,0,0,0,0,0,35,- 1,0,0,0,0,92,92,92,92,92,92,92,92,92,92,0,0,0,0,0,0,0,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,0,0,0,0,92,455,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,91,93,93,0,446,93,447,447,447,447,447,447,447,447,447,447,0,0,0,0,426,0,426,0,93,427,427,427,427,427,427,427,427,427,427,0,0,0,0,0,92,92,92,92,92,92,92,92,92,92,0,0,0,0,0,0,0,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,0,0,0,0,92,0,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,94,98,98,0,0,98,427,427,427,427,427,427,427,427,427,427,0,0,0,0,0,430,- 1,430,98,0,431,431,431,431,431,431,431,431,431,431,0,0,0,0,100,100,100,100,100,100,100,100,100,100,0,0,0,0,0,0,0,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,0,0,0,0,100,0,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,99,101,101,0,0,101,431,431,431,431,431,431,431,431,431,431,196,0,0,0,0,0,0,0,101,472,472,472,472,472,472,472,472,0,0,0,0,0,0,0,100,100,100,100,100,100,100,100,100,100,0,0,0,0,0,0,0,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,0,0,0,0,100,0,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,36,109,109,109,109,109,109,109,109,109,109,109,109,22,0,0,0,0,0,0,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,0,0,0,0,109,0,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,110,109,109,109,109,109,109,109,109,109,109,22,0,0,0,0,0,0,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,0,0,0,0,109,0,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,22,0,0,0,0,0,0,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,- 1,0,0,- 1,109,0,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,0,0,0,0,110,110,110,110,110,110,110,110,110,110,110,110,112,0,0,0,0,0,0,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,0,0,0,0,110,0,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,114,114,114,114,114,114,114,114,114,114,0,0,0,0,0,0,0,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,28,0,0,125,114,0,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,0,0,28,0,0,136,126,126,126,126,126,126,126,126,128,128,128,128,128,128,128,128,128,128,0,0,0,0,0,0,0,128,128,128,128,128,128,0,0,0,137,137,137,137,137,137,137,137,0,0,0,0,0,0,0,31,0,0,- 1,0,196,0,0,128,128,128,128,128,128,473,473,473,473,473,473,473,473,0,127,128,128,128,128,128,128,128,128,128,128,31,0,0,0,0,0,0,128,128,128,128,128,128,139,139,139,139,139,139,139,139,139,139,138,0,0,0,0,0,0,139,139,139,139,139,139,0,0,0,128,128,128,128,128,128,19,0,0,382,0,0,139,139,139,139,139,139,139,139,139,139,0,139,139,139,139,139,139,139,139,139,139,139,139,0,0,0,0,0,0,0,0,0,383,383,383,383,383,383,383,383,0,0,0,0,0,0,0,0,0,139,139,139,139,139,139,0,385,385,385,385,385,385,385,385,385,385,0,0,0,0,0,0,0,385,385,385,385,385,385,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,385,385,385,385,385,385,385,385,385,385,384,385,385,385,385,385,385,385,385,385,385,385,385,0,0,421,0,432,432,432,432,432,432,432,432,433,433,0,0,0,0,0,0,0,0,0,0,0,423,385,385,385,385,385,385,434,0,0,0,0,0,0,0,0,435,0,0,436,421,0,422,422,422,422,422,422,422,422,422,422,423,0,0,0,0,0,0,434,0,0,0,423,0,0,0,0,435,0,424,436,0,0,0,0,0,0,0,425,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,423,0,0,0,0,0,0,424,0,0,0,0,0,0,0,0,425,413,413,413,413,413,413,413,413,413,413,0,0,0,0,0,0,0,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,0,0,0,0,413,0,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,0,0,0,0,0,0,0,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,0,0,0,0,413,0,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,428,428,428,428,428,428,428,428,428,428,0,0,0,0,0,0,0,0,0,0,0,429,94,0,0,0,0,421,94,422,422,422,422,422,422,422,422,422,422,427,427,427,427,427,427,427,427,427,427,0,423,0,0,429,94,0,0,424,0,0,94,91,0,0,0,0,425,91,0,428,428,428,428,428,428,428,428,428,428,0,0,0,423,0,0,0,0,0,0,424,429,94,0,91,0,0,0,94,425,91,0,0,431,431,431,431,431,431,431,431,431,431,0,0,0,0,0,0,0,0,0,0,429,94,94,0,0,0,0,94,94,421,0,432,432,432,432,432,432,432,432,433,433,0,0,0,0,0,0,0,0,0,0,0,423,0,94,0,0,0,0,442,94,0,0,0,0,0,0,421,443,433,433,433,433,433,433,433,433,433,433,0,0,0,0,0,423,0,0,0,0,0,423,442,0,0,0,0,0,440,0,0,443,0,0,0,0,0,441,0,0,447,447,447,447,447,447,447,447,447,447,0,0,0,423,0,0,0,0,0,0,440,429,94,0,0,0,0,0,94,441,437,437,437,437,437,437,437,437,437,437,0,0,0,0,0,0,0,437,437,437,437,437,437,429,94,0,0,0,0,0,94,0,0,0,0,0,0,0,437,437,437,437,437,437,437,437,437,437,0,437,437,437,437,437,437,437,437,437,437,437,437,0,0,0,456,0,438,0,0,457,0,0,0,0,0,439,0,0,458,458,458,458,458,458,458,458,0,437,437,437,437,437,437,459,0,0,0,0,438,0,0,0,0,0,0,0,0,439,0,0,0,0,0,0,0,0,0,0,0,0,0,0,460,0,0,0,0,461,462,0,0,0,463,0,0,0,0,0,0,0,464,0,0,0,465,0,466,0,467,0,468,469,469,469,469,469,469,469,469,469,469,0,0,0,0,0,0,0,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,0,0,0,0,0,0,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,470,0,0,0,0,0,0,0,0,469,469,469,469,469,469,469,469,469,469,0,0,0,0,0,0,0,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,0,0,0,0,0,0,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,19,0,0,479,0,0,0,478,478,478,478,478,478,478,478,478,478,0,0,0,0,0,0,0,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,0,0,0,0,478,0,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,481,0,0,0,0,0,0,0,480,480,480,480,480,480,480,480,480,480,0,0,0,0,0,0,0,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,0,0,0,0,480,0,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const int Cyc_lex_check[3825U]={- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,25,29,0,123,125,134,136,379,382,43,43,46,46,43,482,46,- 1,- 1,- 1,- 1,- 1,121,269,479,0,489,10,12,42,10,12,42,43,222,46,234,20,1,1,1,1,1,1,1,1,1,1,38,51,122,235,10,38,259,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,132,260,270,272,1,132,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,9,18,54,46,55,56,57,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,58,59,60,61,2,62,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,63,64,7,3,3,3,3,3,7,7,65,66,67,69,70,7,30,30,30,30,30,30,30,30,71,72,3,3,3,73,75,3,3,3,48,48,3,3,48,3,3,3,3,3,3,3,3,3,3,3,3,3,3,76,3,3,3,48,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,10,12,42,3,3,77,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,3,82,4,5,5,6,8,5,6,8,50,50,53,83,50,53,84,27,85,17,27,53,17,4,86,87,5,88,5,6,8,9,18,50,95,96,5,115,116,117,118,119,120,17,34,34,34,34,34,34,34,34,144,145,146,27,27,27,27,27,27,27,27,105,105,147,148,105,149,150,151,155,106,106,113,113,106,156,113,68,68,4,157,68,154,154,105,6,8,5,74,74,78,78,74,106,78,113,158,159,160,17,68,161,27,162,7,81,81,5,163,81,164,74,165,78,11,11,11,11,11,11,11,11,11,11,104,27,111,104,81,111,3,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,112,166,133,112,11,133,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,168,169,68,126,126,126,126,126,126,126,126,170,171,74,172,78,129,129,129,129,129,129,129,129,173,13,13,89,89,13,81,89,137,137,137,137,137,137,137,137,140,140,140,140,140,140,140,140,13,175,89,176,177,178,4,179,180,182,183,5,6,8,13,13,13,13,13,13,13,13,13,13,13,13,17,184,185,186,187,188,189,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,190,191,192,193,13,194,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,14,14,89,195,14,197,198,32,32,32,32,32,32,32,32,32,32,93,93,199,200,93,201,14,32,32,32,32,32,32,202,203,204,205,206,153,153,153,14,153,93,207,104,153,111,208,209,97,97,211,14,97,153,153,212,213,32,32,32,32,32,32,214,215,216,217,218,219,220,223,97,224,225,226,223,112,227,133,15,15,228,229,15,101,101,102,102,101,230,102,14,231,232,233,237,14,14,238,239,240,241,15,14,237,237,242,101,243,102,244,237,245,246,247,248,249,250,15,15,15,15,15,15,15,15,15,15,251,252,253,254,93,255,13,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,256,97,257,258,15,262,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,221,221,15,263,221,101,264,102,265,266,267,268,273,274,275,271,276,277,278,279,280,281,282,221,283,16,278,284,285,286,287,221,288,289,290,292,293,294,16,16,16,16,16,16,16,16,16,16,16,295,296,297,298,299,300,14,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,301,302,303,305,16,306,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,307,16,33,33,33,33,33,33,33,33,33,33,308,309,310,311,312,313,15,33,33,33,33,33,33,314,316,317,318,319,320,321,322,323,324,325,327,328,329,330,39,39,39,39,39,39,39,39,39,39,331,33,33,33,33,33,33,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,332,333,334,335,39,336,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,271,41,41,41,41,41,41,41,41,41,41,337,338,340,341,347,348,16,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,349,350,351,352,41,353,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,44,44,291,354,44,355,291,342,342,356,357,342,359,360,361,291,362,291,343,365,344,366,367,44,368,369,370,142,142,372,342,142,143,143,373,374,143,375,342,44,44,44,44,44,44,44,44,44,44,391,142,393,396,291,400,143,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,403,404,404,404,44,405,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,47,47,142,389,47,389,389,143,398,380,380,408,142,380,394,406,406,143,397,409,414,417,143,47,398,398,389,346,346,387,387,346,380,387,380,446,397,394,454,47,47,47,47,47,47,47,47,47,47,456,346,424,387,425,387,434,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,409,424,457,425,47,434,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,79,79,346,343,79,344,358,358,459,460,358,461,346,383,383,383,383,383,383,383,383,462,435,79,463,464,465,466,467,358,364,364,473,481,364,483,484,358,485,79,79,79,79,79,79,79,79,79,79,486,438,439,440,364,435,441,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,438,439,440,487,79,441,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,80,80,363,363,80,364,363,371,371,488,- 1,371,- 1,- 1,- 1,364,- 1,442,443,- 1,- 1,- 1,- 1,80,- 1,363,- 1,- 1,- 1,477,371,477,477,363,- 1,- 1,- 1,- 1,371,80,80,80,80,80,80,80,80,80,80,442,443,- 1,477,- 1,- 1,- 1,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,- 1,- 1,- 1,- 1,80,- 1,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,90,90,376,376,90,395,376,386,386,386,386,386,386,386,386,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,90,- 1,376,- 1,- 1,- 1,- 1,- 1,- 1,- 1,376,395,- 1,- 1,- 1,- 1,90,90,90,90,90,90,90,90,90,90,- 1,- 1,- 1,- 1,- 1,- 1,- 1,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,- 1,- 1,- 1,- 1,90,395,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,92,92,- 1,399,92,399,399,399,399,399,399,399,399,399,399,- 1,- 1,- 1,- 1,423,- 1,423,- 1,92,423,423,423,423,423,423,423,423,423,423,- 1,- 1,- 1,- 1,- 1,92,92,92,92,92,92,92,92,92,92,- 1,- 1,- 1,- 1,- 1,- 1,- 1,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,- 1,- 1,- 1,- 1,92,- 1,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,92,98,98,- 1,- 1,98,426,426,426,426,426,426,426,426,426,426,- 1,- 1,- 1,- 1,- 1,429,395,429,98,- 1,429,429,429,429,429,429,429,429,429,429,- 1,- 1,- 1,- 1,98,98,98,98,98,98,98,98,98,98,- 1,- 1,- 1,- 1,- 1,- 1,- 1,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,- 1,- 1,- 1,- 1,98,- 1,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,100,100,- 1,- 1,100,430,430,430,430,430,430,430,430,430,430,458,- 1,- 1,- 1,- 1,- 1,- 1,- 1,100,458,458,458,458,458,458,458,458,- 1,- 1,- 1,- 1,- 1,- 1,- 1,100,100,100,100,100,100,100,100,100,100,- 1,- 1,- 1,- 1,- 1,- 1,- 1,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,- 1,- 1,- 1,- 1,100,- 1,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,107,107,107,107,107,107,107,107,107,107,107,107,107,- 1,- 1,- 1,- 1,- 1,- 1,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,- 1,- 1,- 1,- 1,107,- 1,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,108,108,108,108,108,108,108,108,108,108,108,108,108,- 1,- 1,- 1,- 1,- 1,- 1,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,- 1,- 1,- 1,- 1,108,- 1,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,109,109,109,109,109,109,109,109,109,109,109,109,109,- 1,- 1,- 1,- 1,- 1,- 1,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,110,- 1,- 1,110,109,- 1,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,- 1,- 1,- 1,- 1,110,110,110,110,110,110,110,110,110,110,110,110,110,- 1,- 1,- 1,- 1,- 1,- 1,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,- 1,- 1,- 1,- 1,110,- 1,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,114,114,114,114,114,114,114,114,114,114,- 1,- 1,- 1,- 1,- 1,- 1,- 1,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,124,- 1,- 1,124,114,- 1,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,- 1,- 1,135,- 1,- 1,135,124,124,124,124,124,124,124,124,127,127,127,127,127,127,127,127,127,127,- 1,- 1,- 1,- 1,- 1,- 1,- 1,127,127,127,127,127,127,- 1,- 1,- 1,135,135,135,135,135,135,135,135,- 1,- 1,- 1,- 1,- 1,- 1,- 1,124,- 1,- 1,110,- 1,472,- 1,- 1,127,127,127,127,127,127,472,472,472,472,472,472,472,472,- 1,124,128,128,128,128,128,128,128,128,128,128,135,- 1,- 1,- 1,- 1,- 1,- 1,128,128,128,128,128,128,138,138,138,138,138,138,138,138,138,138,135,- 1,- 1,- 1,- 1,- 1,- 1,138,138,138,138,138,138,- 1,- 1,- 1,128,128,128,128,128,128,381,- 1,- 1,381,- 1,- 1,139,139,139,139,139,139,139,139,139,139,- 1,138,138,138,138,138,138,139,139,139,139,139,139,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,381,381,381,381,381,381,381,381,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,139,139,139,139,139,139,- 1,384,384,384,384,384,384,384,384,384,384,- 1,- 1,- 1,- 1,- 1,- 1,- 1,384,384,384,384,384,384,- 1,- 1,381,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,385,385,385,385,385,385,385,385,385,385,381,384,384,384,384,384,384,385,385,385,385,385,385,- 1,- 1,401,- 1,401,401,401,401,401,401,401,401,401,401,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,401,385,385,385,385,385,385,401,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,401,- 1,- 1,401,402,- 1,402,402,402,402,402,402,402,402,402,402,401,- 1,- 1,- 1,- 1,- 1,- 1,401,- 1,- 1,- 1,402,- 1,- 1,- 1,- 1,401,- 1,402,401,- 1,- 1,- 1,- 1,- 1,- 1,- 1,402,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,402,- 1,- 1,- 1,- 1,- 1,- 1,402,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,402,407,407,407,407,407,407,407,407,407,407,- 1,- 1,- 1,- 1,- 1,- 1,- 1,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,- 1,- 1,- 1,- 1,407,- 1,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,407,413,413,413,413,413,413,413,413,413,413,- 1,- 1,- 1,- 1,- 1,- 1,- 1,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,- 1,- 1,- 1,- 1,413,- 1,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,413,421,421,421,421,421,421,421,421,421,421,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,421,421,- 1,- 1,- 1,- 1,422,421,422,422,422,422,422,422,422,422,422,422,427,427,427,427,427,427,427,427,427,427,- 1,422,- 1,- 1,421,421,- 1,- 1,422,- 1,- 1,421,427,- 1,- 1,- 1,- 1,422,427,- 1,428,428,428,428,428,428,428,428,428,428,- 1,- 1,- 1,422,- 1,- 1,- 1,- 1,- 1,- 1,422,428,428,- 1,427,- 1,- 1,- 1,428,422,427,- 1,- 1,431,431,431,431,431,431,431,431,431,431,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,428,428,431,- 1,- 1,- 1,- 1,428,431,432,- 1,432,432,432,432,432,432,432,432,432,432,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,432,- 1,431,- 1,- 1,- 1,- 1,432,431,- 1,- 1,- 1,- 1,- 1,- 1,433,432,433,433,433,433,433,433,433,433,433,433,- 1,- 1,- 1,- 1,- 1,432,- 1,- 1,- 1,- 1,- 1,433,432,- 1,- 1,- 1,- 1,- 1,433,- 1,- 1,432,- 1,- 1,- 1,- 1,- 1,433,- 1,- 1,447,447,447,447,447,447,447,447,447,447,- 1,- 1,- 1,433,- 1,- 1,- 1,- 1,- 1,- 1,433,447,447,- 1,- 1,- 1,- 1,- 1,447,433,436,436,436,436,436,436,436,436,436,436,- 1,- 1,- 1,- 1,- 1,- 1,- 1,436,436,436,436,436,436,447,447,- 1,- 1,- 1,- 1,- 1,447,- 1,- 1,- 1,- 1,- 1,- 1,- 1,437,437,437,437,437,437,437,437,437,437,- 1,436,436,436,436,436,436,437,437,437,437,437,437,- 1,- 1,- 1,455,- 1,437,- 1,- 1,455,- 1,- 1,- 1,- 1,- 1,437,- 1,- 1,455,455,455,455,455,455,455,455,- 1,437,437,437,437,437,437,455,- 1,- 1,- 1,- 1,437,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,437,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,455,- 1,- 1,- 1,- 1,455,455,- 1,- 1,- 1,455,- 1,- 1,- 1,- 1,- 1,- 1,- 1,455,- 1,- 1,- 1,455,- 1,455,- 1,455,- 1,455,468,468,468,468,468,468,468,468,468,468,- 1,- 1,- 1,- 1,- 1,- 1,- 1,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,- 1,- 1,- 1,- 1,- 1,- 1,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,468,469,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,469,469,469,469,469,469,469,469,469,469,- 1,- 1,- 1,- 1,- 1,- 1,- 1,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,- 1,- 1,- 1,- 1,- 1,- 1,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,469,478,- 1,- 1,478,- 1,- 1,- 1,478,478,478,478,478,478,478,478,478,478,- 1,- 1,- 1,- 1,- 1,- 1,- 1,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,- 1,- 1,- 1,- 1,478,- 1,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,478,480,- 1,- 1,- 1,- 1,- 1,- 1,- 1,480,480,480,480,480,480,480,480,480,480,- 1,- 1,- 1,- 1,- 1,- 1,- 1,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,- 1,- 1,- 1,- 1,480,- 1,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,480,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1};
int Cyc_lex_engine(int start_state,struct Cyc_Lexing_lexbuf*lbuf){struct Cyc_Lexing_lexbuf*_T0;struct Cyc_Lexing_lexbuf*_T1;struct Cyc_Lexing_lexbuf*_T2;struct Cyc_Lexing_lexbuf*_T3;int _T4;const int*_T5;int _T6;const char*_T7;const int*_T8;int _T9;int _TA;const int*_TB;int _TC;struct Cyc_Lexing_lexbuf*_TD;struct Cyc_Lexing_lexbuf*_TE;struct Cyc_Lexing_lexbuf*_TF;struct Cyc_Lexing_lexbuf*_T10;int _T11;struct Cyc_Lexing_lexbuf*_T12;int _T13;struct Cyc_Lexing_lexbuf*_T14;int _T15;int _T16;int _T17;struct Cyc_Lexing_lexbuf*_T18;struct _fat_ptr _T19;struct Cyc_Lexing_lexbuf*_T1A;int _T1B;int _T1C;unsigned char*_T1D;char*_T1E;char _T1F;int _T20;int _T21;const int*_T22;int _T23;const char*_T24;const int*_T25;int _T26;int _T27;const int*_T28;int _T29;const int*_T2A;int _T2B;struct Cyc_Lexing_lexbuf*_T2C;struct Cyc_Lexing_lexbuf*_T2D;struct Cyc_Lexing_lexbuf*_T2E;int _T2F;int _T30;struct Cyc_Lexing_Error_exn_struct*_T31;void*_T32;struct Cyc_Lexing_lexbuf*_T33;int _T34;struct Cyc_Lexing_lexbuf*_T35;
# 212
int state;int base;int backtrk;
int c;
state=start_state;
# 216
if(state < 0)goto _TL5;_T0=lbuf;_T1=lbuf;_T2=lbuf;
_T1->lex_start_pos=_T2->lex_curr_pos;_T0->lex_last_pos=_T1->lex_start_pos;_T3=lbuf;
_T3->lex_last_action=- 1;goto _TL6;
# 220
_TL5: _T4=- state;state=_T4 - 1;_TL6:
# 222
 _TL7: if(1)goto _TL8;else{goto _TL9;}
_TL8: _T5=Cyc_lex_base;_T6=state;_T7=_check_known_subscript_notnull(_T5,490U,sizeof(int),_T6);_T8=(const int*)_T7;base=*_T8;
if(base >= 0)goto _TLA;_T9=- base;_TA=_T9 - 1;return _TA;_TLA: _TB=Cyc_lex_backtrk;_TC=state;
backtrk=_TB[_TC];
if(backtrk < 0)goto _TLC;_TD=lbuf;_TE=lbuf;
_TD->lex_last_pos=_TE->lex_curr_pos;_TF=lbuf;
_TF->lex_last_action=backtrk;goto _TLD;_TLC: _TLD: _T10=lbuf;_T11=_T10->lex_curr_pos;_T12=lbuf;_T13=_T12->lex_buffer_len;
# 230
if(_T11 < _T13)goto _TLE;_T14=lbuf;_T15=_T14->lex_eof_reached;
if(_T15)goto _TL10;else{goto _TL12;}
_TL12: _T16=- state;_T17=_T16 - 1;return _T17;
# 234
_TL10: c=256;goto _TLF;
# 236
_TLE: _T18=lbuf;_T19=_T18->lex_buffer;_T1A=lbuf;_T1B=_T1A->lex_curr_pos;_T1A->lex_curr_pos=_T1B + 1;_T1C=_T1B;_T1D=_check_fat_subscript(_T19,sizeof(char),_T1C);_T1E=(char*)_T1D;_T1F=*_T1E;c=(int)_T1F;_T20=c;_T21=- 1;
if(_T20!=_T21)goto _TL13;c=256;goto _TL14;
_TL13: if(c >= 0)goto _TL15;c=256 + c;goto _TL16;_TL15: _TL16: _TL14: _TLF: _T22=Cyc_lex_check;_T23=base + c;_T24=_check_known_subscript_notnull(_T22,3825U,sizeof(int),_T23);_T25=(const int*)_T24;_T26=*_T25;_T27=state;
# 240
if(_T26!=_T27)goto _TL17;_T28=Cyc_lex_trans;_T29=base + c;
state=_T28[_T29];goto _TL18;
# 243
_TL17: _T2A=Cyc_lex_default;_T2B=state;state=_T2A[_T2B];_TL18:
 if(state >= 0)goto _TL19;_T2C=lbuf;_T2D=lbuf;
_T2C->lex_curr_pos=_T2D->lex_last_pos;_T2E=lbuf;_T2F=_T2E->lex_last_action;_T30=- 1;
if(_T2F!=_T30)goto _TL1B;{struct Cyc_Lexing_Error_exn_struct*_T36=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T36->tag=Cyc_Lexing_Error;
_T36->f1=_tag_fat("empty token",sizeof(char),12U);_T31=(struct Cyc_Lexing_Error_exn_struct*)_T36;}_T32=(void*)_T31;_throw(_T32);goto _TL1C;
# 249
_TL1B: _T33=lbuf;_T34=_T33->lex_last_action;return _T34;_TL1C: goto _TL1A;
# 252
_TL19: if(c!=256)goto _TL1D;_T35=lbuf;_T35->lex_eof_reached=0;goto _TL1E;_TL1D: _TL1E: _TL1A: goto _TL7;_TL9:;}
# 256
struct _tuple13*Cyc_line_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct Cyc_Set_Set**_T2;struct Cyc_Set_Set*(*_T3)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T4)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T5;struct Cyc_Set_Set*_T6;struct Cyc_List_List*_T7;void*_T8;struct _fat_ptr*_T9;struct Cyc_List_List*_TA;struct _tuple13*_TB;struct Cyc_Set_Set**_TC;struct _tuple13*_TD;struct Cyc_Lexing_lexbuf*_TE;void(*_TF)(struct Cyc_Lexing_lexbuf*);struct _tuple13*_T10;struct Cyc_Lexing_Error_exn_struct*_T11;void*_T12;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:
# 214 "buildlib.cyl"
 Cyc_macroname(lexbuf);
_TL23: if(Cyc_current_args!=0)goto _TL21;else{goto _TL22;}
_TL21:{struct Cyc_Set_Set**_T13=_cycalloc(sizeof(struct Cyc_Set_Set*));_T4=Cyc_Set_delete;{struct Cyc_Set_Set*(*_T14)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T4;_T3=_T14;}_T5=_check_null(Cyc_current_targets);_T6=*_T5;_T7=Cyc_current_args;_T8=_T7->hd;_T9=(struct _fat_ptr*)_T8;*_T13=_T3(_T6,_T9);_T2=(struct Cyc_Set_Set**)_T13;}Cyc_current_targets=_T2;_TA=
# 215
_check_null(Cyc_current_args);Cyc_current_args=_TA->tl;goto _TL23;_TL22:{struct _tuple13*_T13=_cycalloc(sizeof(struct _tuple13));
# 219
_T13->f0=_check_null(Cyc_current_source);_TC=_check_null(Cyc_current_targets);_T13->f1=*_TC;_TB=(struct _tuple13*)_T13;}return _TB;case 1: _TD=
# 222 "buildlib.cyl"
Cyc_line(lexbuf);return _TD;case 2:
# 224
 return 0;default: _TE=lexbuf;_TF=_TE->refill_buff;
_TF(lexbuf);_T10=
Cyc_line_rec(lexbuf,lexstate);return _T10;}{struct Cyc_Lexing_Error_exn_struct*_T13=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T13->tag=Cyc_Lexing_Error;
# 228
_T13->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T11=(struct Cyc_Lexing_Error_exn_struct*)_T13;}_T12=(void*)_T11;_throw(_T12);}
# 230
struct _tuple13*Cyc_line(struct Cyc_Lexing_lexbuf*lexbuf){struct _tuple13*_T0;_T0=Cyc_line_rec(lexbuf,0);return _T0;}
int Cyc_macroname_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;int _T4;int _T5;int _T6;int _T7;unsigned long _T8;struct _fat_ptr _T9;struct Cyc_Set_Set**_TA;struct Cyc_Set_Set*(*_TB)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_TC)(int(*)(void*,void*));int(*_TD)(struct _fat_ptr*,struct _fat_ptr*);struct _fat_ptr*_TE;struct _fat_ptr _TF;int _T10;int _T11;int _T12;int _T13;unsigned long _T14;struct _fat_ptr _T15;struct Cyc_Set_Set**_T16;struct Cyc_Set_Set*(*_T17)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T18)(int(*)(void*,void*));int(*_T19)(struct _fat_ptr*,struct _fat_ptr*);struct _fat_ptr*_T1A;struct _fat_ptr _T1B;struct Cyc_Set_Set**_T1C;struct Cyc_Set_Set*(*_T1D)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T1E)(int(*)(void*,void*));int(*_T1F)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Lexing_lexbuf*_T20;void(*_T21)(struct Cyc_Lexing_lexbuf*);int _T22;struct Cyc_Lexing_Error_exn_struct*_T23;void*_T24;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:{struct _fat_ptr*_T25=_cycalloc(sizeof(struct _fat_ptr));_T3=
# 228 "buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);_T4=
Cyc_Lexing_lexeme_end(lexbuf);_T5=Cyc_Lexing_lexeme_start(lexbuf);_T6=_T4 - _T5;_T7=_T6 - 2;_T8=(unsigned long)_T7;_T9=
# 228
Cyc_substring(_T3,0,_T8);*_T25=_T9;_T2=(struct _fat_ptr*)_T25;}Cyc_current_source=_T2;
# 230
Cyc_current_args=0;{struct Cyc_Set_Set**_T25=_cycalloc(sizeof(struct Cyc_Set_Set*));_TC=Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T26)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_TC;_TB=_T26;}_TD=Cyc_strptrcmp;*_T25=_TB(_TD);_TA=(struct Cyc_Set_Set**)_T25;}Cyc_current_targets=_TA;
Cyc_token(lexbuf);
return 0;case 1:{struct _fat_ptr*_T25=_cycalloc(sizeof(struct _fat_ptr));_TF=
# 236
Cyc_Lexing_lexeme(lexbuf);_T10=
Cyc_Lexing_lexeme_end(lexbuf);_T11=Cyc_Lexing_lexeme_start(lexbuf);_T12=_T10 - _T11;_T13=_T12 - 1;_T14=(unsigned long)_T13;_T15=
# 236
Cyc_substring(_TF,0,_T14);*_T25=_T15;_TE=(struct _fat_ptr*)_T25;}Cyc_current_source=_TE;
# 238
Cyc_current_args=0;{struct Cyc_Set_Set**_T25=_cycalloc(sizeof(struct Cyc_Set_Set*));_T18=Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T26)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T18;_T17=_T26;}_T19=Cyc_strptrcmp;*_T25=_T17(_T19);_T16=(struct Cyc_Set_Set**)_T25;}Cyc_current_targets=_T16;
Cyc_args(lexbuf);
return 0;case 2:{struct _fat_ptr*_T25=_cycalloc(sizeof(struct _fat_ptr));_T1B=
# 244
Cyc_Lexing_lexeme(lexbuf);*_T25=_T1B;_T1A=(struct _fat_ptr*)_T25;}Cyc_current_source=_T1A;
Cyc_current_args=0;{struct Cyc_Set_Set**_T25=_cycalloc(sizeof(struct Cyc_Set_Set*));_T1E=Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T26)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T1E;_T1D=_T26;}_T1F=Cyc_strptrcmp;*_T25=_T1D(_T1F);_T1C=(struct Cyc_Set_Set**)_T25;}Cyc_current_targets=_T1C;
Cyc_token(lexbuf);
return 0;default: _T20=lexbuf;_T21=_T20->refill_buff;
# 250
_T21(lexbuf);_T22=
Cyc_macroname_rec(lexbuf,lexstate);return _T22;}{struct Cyc_Lexing_Error_exn_struct*_T25=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T25->tag=Cyc_Lexing_Error;
# 253
_T25->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T23=(struct Cyc_Lexing_Error_exn_struct*)_T25;}_T24=(void*)_T23;_throw(_T24);}
# 255
int Cyc_macroname(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_macroname_rec(lexbuf,1);return _T0;}
int Cyc_args_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;int _T4;int _T5;int _T6;int _T7;unsigned long _T8;struct _fat_ptr _T9;struct Cyc_List_List*_TA;int _TB;struct _fat_ptr*_TC;struct _fat_ptr _TD;int _TE;int _TF;int _T10;int _T11;unsigned long _T12;struct _fat_ptr _T13;struct Cyc_List_List*_T14;int _T15;struct _fat_ptr*_T16;struct _fat_ptr _T17;int _T18;int _T19;int _T1A;int _T1B;unsigned long _T1C;struct _fat_ptr _T1D;struct Cyc_List_List*_T1E;int _T1F;struct Cyc_Lexing_lexbuf*_T20;void(*_T21)(struct Cyc_Lexing_lexbuf*);int _T22;struct Cyc_Lexing_Error_exn_struct*_T23;void*_T24;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:  {
# 253 "buildlib.cyl"
struct _fat_ptr*a;a=_cycalloc(sizeof(struct _fat_ptr));_T2=a;_T3=Cyc_Lexing_lexeme(lexbuf);_T4=
Cyc_Lexing_lexeme_end(lexbuf);_T5=Cyc_Lexing_lexeme_start(lexbuf);_T6=_T4 - _T5;_T7=_T6 - 2;_T8=(unsigned long)_T7;_T9=
# 253
Cyc_substring(_T3,0,_T8);*_T2=_T9;{struct Cyc_List_List*_T25=_cycalloc(sizeof(struct Cyc_List_List));
# 255
_T25->hd=a;_T25->tl=Cyc_current_args;_TA=(struct Cyc_List_List*)_T25;}Cyc_current_args=_TA;_TB=
Cyc_args(lexbuf);return _TB;}case 1:  {
# 259
struct _fat_ptr*a;a=_cycalloc(sizeof(struct _fat_ptr));_TC=a;_TD=Cyc_Lexing_lexeme(lexbuf);_TE=
Cyc_Lexing_lexeme_end(lexbuf);_TF=Cyc_Lexing_lexeme_start(lexbuf);_T10=_TE - _TF;_T11=_T10 - 1;_T12=(unsigned long)_T11;_T13=
# 259
Cyc_substring(_TD,0,_T12);*_TC=_T13;{struct Cyc_List_List*_T25=_cycalloc(sizeof(struct Cyc_List_List));
# 261
_T25->hd=a;_T25->tl=Cyc_current_args;_T14=(struct Cyc_List_List*)_T25;}Cyc_current_args=_T14;_T15=
Cyc_args(lexbuf);return _T15;}case 2:  {
# 265
struct _fat_ptr*a;a=_cycalloc(sizeof(struct _fat_ptr));_T16=a;_T17=Cyc_Lexing_lexeme(lexbuf);_T18=
Cyc_Lexing_lexeme_end(lexbuf);_T19=Cyc_Lexing_lexeme_start(lexbuf);_T1A=_T18 - _T19;_T1B=_T1A - 1;_T1C=(unsigned long)_T1B;_T1D=
# 265
Cyc_substring(_T17,0,_T1C);*_T16=_T1D;{struct Cyc_List_List*_T25=_cycalloc(sizeof(struct Cyc_List_List));
# 267
_T25->hd=a;_T25->tl=Cyc_current_args;_T1E=(struct Cyc_List_List*)_T25;}Cyc_current_args=_T1E;_T1F=
Cyc_token(lexbuf);return _T1F;}default: _T20=lexbuf;_T21=_T20->refill_buff;
# 270
_T21(lexbuf);_T22=
Cyc_args_rec(lexbuf,lexstate);return _T22;}{struct Cyc_Lexing_Error_exn_struct*_T25=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T25->tag=Cyc_Lexing_Error;
# 273
_T25->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T23=(struct Cyc_Lexing_Error_exn_struct*)_T25;}_T24=(void*)_T23;_throw(_T24);}
# 275
int Cyc_args(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_args_rec(lexbuf,2);return _T0;}
int Cyc_token_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;int _T4;int _T5;int _T6;int _T7;int _T8;int _T9;int _TA;int _TB;int _TC;int _TD;int _TE;int _TF;int _T10;int _T11;int _T12;int _T13;int _T14;int _T15;int _T16;int _T17;int _T18;int _T19;int _T1A;int _T1B;int _T1C;int _T1D;int _T1E;int _T1F;int _T20;int _T21;int _T22;int _T23;int _T24;int _T25;int _T26;int _T27;int _T28;int _T29;int _T2A;int _T2B;int _T2C;int _T2D;int _T2E;int _T2F;int _T30;int _T31;int _T32;int _T33;struct Cyc_Lexing_lexbuf*_T34;void(*_T35)(struct Cyc_Lexing_lexbuf*);int _T36;struct Cyc_Lexing_Error_exn_struct*_T37;void*_T38;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:{struct _fat_ptr*_T39=_cycalloc(sizeof(struct _fat_ptr));_T3=
# 274 "buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);*_T39=_T3;_T2=(struct _fat_ptr*)_T39;}Cyc_add_target(_T2);_T4=Cyc_token(lexbuf);return _T4;case 1:
# 277 "buildlib.cyl"
 return 0;case 2: _T5=
# 280 "buildlib.cyl"
Cyc_token(lexbuf);return _T5;case 3:
# 283 "buildlib.cyl"
 Cyc_string(lexbuf);_T6=Cyc_token(lexbuf);return _T6;case 4: _T7=
# 286 "buildlib.cyl"
Cyc_token(lexbuf);return _T7;case 5: _T8=
# 288
Cyc_token(lexbuf);return _T8;case 6: _T9=
# 290
Cyc_token(lexbuf);return _T9;case 7: _TA=
# 292
Cyc_token(lexbuf);return _TA;case 8: _TB=
# 295 "buildlib.cyl"
Cyc_token(lexbuf);return _TB;case 9: _TC=
# 298 "buildlib.cyl"
Cyc_token(lexbuf);return _TC;case 10: _TD=
# 301 "buildlib.cyl"
Cyc_token(lexbuf);return _TD;case 11: _TE=
# 303
Cyc_token(lexbuf);return _TE;case 12: _TF=
# 305
Cyc_token(lexbuf);return _TF;case 13: _T10=
# 307
Cyc_token(lexbuf);return _T10;case 14: _T11=
# 309
Cyc_token(lexbuf);return _T11;case 15: _T12=
# 311
Cyc_token(lexbuf);return _T12;case 16: _T13=
# 313
Cyc_token(lexbuf);return _T13;case 17: _T14=
# 315
Cyc_token(lexbuf);return _T14;case 18: _T15=
# 317
Cyc_token(lexbuf);return _T15;case 19: _T16=
# 319
Cyc_token(lexbuf);return _T16;case 20: _T17=
# 321
Cyc_token(lexbuf);return _T17;case 21: _T18=
# 323
Cyc_token(lexbuf);return _T18;case 22: _T19=
# 325
Cyc_token(lexbuf);return _T19;case 23: _T1A=
# 327
Cyc_token(lexbuf);return _T1A;case 24: _T1B=
# 330 "buildlib.cyl"
Cyc_token(lexbuf);return _T1B;case 25: _T1C=
# 332
Cyc_token(lexbuf);return _T1C;case 26: _T1D=
# 334
Cyc_token(lexbuf);return _T1D;case 27: _T1E=
# 336
Cyc_token(lexbuf);return _T1E;case 28: _T1F=
# 338
Cyc_token(lexbuf);return _T1F;case 29: _T20=
# 340
Cyc_token(lexbuf);return _T20;case 30: _T21=
# 342
Cyc_token(lexbuf);return _T21;case 31: _T22=
# 344
Cyc_token(lexbuf);return _T22;case 32: _T23=
# 346
Cyc_token(lexbuf);return _T23;case 33: _T24=
# 348
Cyc_token(lexbuf);return _T24;case 34: _T25=
# 350
Cyc_token(lexbuf);return _T25;case 35: _T26=
# 352
Cyc_token(lexbuf);return _T26;case 36: _T27=
# 354
Cyc_token(lexbuf);return _T27;case 37: _T28=
# 356
Cyc_token(lexbuf);return _T28;case 38: _T29=
# 358
Cyc_token(lexbuf);return _T29;case 39: _T2A=
# 360
Cyc_token(lexbuf);return _T2A;case 40: _T2B=
# 362
Cyc_token(lexbuf);return _T2B;case 41: _T2C=
# 364
Cyc_token(lexbuf);return _T2C;case 42: _T2D=
# 366
Cyc_token(lexbuf);return _T2D;case 43: _T2E=
# 368
Cyc_token(lexbuf);return _T2E;case 44: _T2F=
# 370
Cyc_token(lexbuf);return _T2F;case 45: _T30=
# 372
Cyc_token(lexbuf);return _T30;case 46: _T31=
# 374
Cyc_token(lexbuf);return _T31;case 47: _T32=
# 376
Cyc_token(lexbuf);return _T32;case 48: _T33=
# 379 "buildlib.cyl"
Cyc_token(lexbuf);return _T33;default: _T34=lexbuf;_T35=_T34->refill_buff;
_T35(lexbuf);_T36=
Cyc_token_rec(lexbuf,lexstate);return _T36;}{struct Cyc_Lexing_Error_exn_struct*_T39=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T39->tag=Cyc_Lexing_Error;
# 383
_T39->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T37=(struct Cyc_Lexing_Error_exn_struct*)_T39;}_T38=(void*)_T37;_throw(_T38);}
# 385
int Cyc_token(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_token_rec(lexbuf,3);return _T0;}
int Cyc_string_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;int _T2;int _T3;int _T4;int _T5;int _T6;int _T7;int _T8;struct Cyc_Lexing_lexbuf*_T9;void(*_TA)(struct Cyc_Lexing_lexbuf*);int _TB;struct Cyc_Lexing_Error_exn_struct*_TC;void*_TD;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0: _T2=
# 384 "buildlib.cyl"
Cyc_string(lexbuf);return _T2;case 1:
# 385 "buildlib.cyl"
 return 0;case 2: _T3=
# 386 "buildlib.cyl"
Cyc_string(lexbuf);return _T3;case 3: _T4=
# 387 "buildlib.cyl"
Cyc_string(lexbuf);return _T4;case 4: _T5=
# 390 "buildlib.cyl"
Cyc_string(lexbuf);return _T5;case 5: _T6=
# 393 "buildlib.cyl"
Cyc_string(lexbuf);return _T6;case 6: _T7=
# 395
Cyc_string(lexbuf);return _T7;case 7:
# 396 "buildlib.cyl"
 return 0;case 8:
# 397 "buildlib.cyl"
 return 0;case 9: _T8=
# 398 "buildlib.cyl"
Cyc_string(lexbuf);return _T8;default: _T9=lexbuf;_TA=_T9->refill_buff;
_TA(lexbuf);_TB=
Cyc_string_rec(lexbuf,lexstate);return _TB;}{struct Cyc_Lexing_Error_exn_struct*_TE=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_TE->tag=Cyc_Lexing_Error;
# 402
_TE->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_TC=(struct Cyc_Lexing_Error_exn_struct*)_TE;}_TD=(void*)_TC;_throw(_TD);}
# 404
int Cyc_string(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_string_rec(lexbuf,4);return _T0;}
int Cyc_slurp_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct Cyc___cycFILE*_T2;int _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct _fat_ptr _T18;struct _fat_ptr _T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;struct _fat_ptr _T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct _fat_ptr _T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct _fat_ptr _T26;struct _fat_ptr _T27;struct _fat_ptr _T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;struct Cyc___cycFILE*_T2B;struct Cyc___cycFILE*_T2C;struct Cyc___cycFILE*_T2D;struct Cyc___cycFILE*_T2E;struct Cyc___cycFILE*_T2F;struct Cyc___cycFILE*_T30;struct Cyc___cycFILE*_T31;struct Cyc___cycFILE*_T32;char _T33;int _T34;struct Cyc___cycFILE*_T35;struct Cyc_Lexing_lexbuf*_T36;void(*_T37)(struct Cyc_Lexing_lexbuf*);int _T38;struct Cyc_Lexing_Error_exn_struct*_T39;void*_T3A;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:
# 407 "buildlib.cyl"
 return 0;case 1: _T2=
# 409
_check_null(Cyc_slurp_out);Cyc_fputc(34,_T2);
_TL29: _T3=Cyc_slurp_string(lexbuf);if(_T3)goto _TL2A;else{goto _TL2B;}_TL2A: goto _TL29;_TL2B:
 return 1;case 2: _T4=
# 416 "buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs("*__IGNORE_FOR_CYCLONE_MALLOC(",_T4);_T5=
_tag_fat("Warning: declaration of malloc sidestepped\n",sizeof(char),44U);_T6=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T5,_T6);
return 1;case 3: _T7=
# 422 "buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs(" __IGNORE_FOR_CYCLONE_MALLOC(",_T7);_T8=
_tag_fat("Warning: declaration of malloc sidestepped\n",sizeof(char),44U);_T9=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T8,_T9);
return 1;case 4: _TA=
# 428 "buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs("*__IGNORE_FOR_CYCLONE_CALLOC(",_TA);_TB=
_tag_fat("Warning: declaration of calloc sidestepped\n",sizeof(char),44U);_TC=_tag_fat(0U,sizeof(void*),0);Cyc_log(_TB,_TC);
return 1;case 5: _TD=
# 434 "buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs(" __IGNORE_FOR_CYCLONE_CALLOC(",_TD);_TE=
_tag_fat("Warning: declaration of calloc sidestepped\n",sizeof(char),44U);_TF=_tag_fat(0U,sizeof(void*),0);Cyc_log(_TE,_TF);
return 1;case 6: _T10=
# 438
_check_null(Cyc_slurp_out);Cyc_fputs("__region",_T10);_T11=
_tag_fat("Warning: use of region sidestepped\n",sizeof(char),36U);_T12=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T11,_T12);
return 1;case 7: _T13=
# 442
_tag_fat("Warning: use of __extension__ deleted\n",sizeof(char),39U);_T14=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T13,_T14);
return 1;case 8: _T15=
# 446 "buildlib.cyl"
_tag_fat("Warning: use of nonnull attribute deleted\n",sizeof(char),43U);_T16=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T15,_T16);
return 1;case 9: _T17=
# 451 "buildlib.cyl"
_tag_fat("Warning: use of mode HI deleted\n",sizeof(char),33U);_T18=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T17,_T18);
return 1;case 10: _T19=
# 454
_tag_fat("Warning: use of mode SI deleted\n",sizeof(char),33U);_T1A=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T19,_T1A);
return 1;case 11: _T1B=
# 457
_tag_fat("Warning: use of mode QI deleted\n",sizeof(char),33U);_T1C=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T1B,_T1C);
return 1;case 12: _T1D=
# 460
_tag_fat("Warning: use of mode DI deleted\n",sizeof(char),33U);_T1E=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T1D,_T1E);
return 1;case 13: _T1F=
# 463
_tag_fat("Warning: use of mode DI deleted\n",sizeof(char),33U);_T20=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T1F,_T20);
return 1;case 14: _T21=
# 466
_tag_fat("Warning: use of mode word deleted\n",sizeof(char),35U);_T22=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T21,_T22);
return 1;case 15: _T23=
# 469
_tag_fat("Warning: use of __attribute__((deprecated)) deleted\n",sizeof(char),53U);_T24=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T23,_T24);
return 1;case 16: _T25=
# 472
_tag_fat("Warning: use of __attribute__((__deprecated__)) deleted\n",sizeof(char),57U);_T26=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T25,_T26);
return 1;case 17: _T27=
# 475
_tag_fat("Warning: use of __attribute__((__transparent_union__)) deleted\n",sizeof(char),64U);_T28=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T27,_T28);
return 1;case 18: _T29=
# 478
_tag_fat("Warning: use of __asm__ on declaration deleted\n",sizeof(char),48U);_T2A=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T29,_T2A);
return 1;case 19: _T2B=
# 481
_check_null(Cyc_slurp_out);Cyc_fputs("inline",_T2B);return 1;case 20: _T2C=
# 483
_check_null(Cyc_slurp_out);Cyc_fputs("inline",_T2C);return 1;case 21: _T2D=
# 485
_check_null(Cyc_slurp_out);Cyc_fputs("const",_T2D);return 1;case 22: _T2E=
# 487
_check_null(Cyc_slurp_out);Cyc_fputs("const",_T2E);return 1;case 23: _T2F=
# 489
_check_null(Cyc_slurp_out);Cyc_fputs("signed",_T2F);return 1;case 24: _T30=
# 491
_check_null(Cyc_slurp_out);Cyc_fputs("signed",_T30);return 1;case 25: _T31=
# 493
_check_null(Cyc_slurp_out);Cyc_fputs("signed",_T31);return 1;case 26: _T32=
# 498 "buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs("int",_T32);return 1;case 27:
# 500
 return 1;case 28: _T33=
# 502
Cyc_Lexing_lexeme_char(lexbuf,0);_T34=(int)_T33;_T35=_check_null(Cyc_slurp_out);Cyc_fputc(_T34,_T35);return 1;default: _T36=lexbuf;_T37=_T36->refill_buff;
_T37(lexbuf);_T38=
Cyc_slurp_rec(lexbuf,lexstate);return _T38;}{struct Cyc_Lexing_Error_exn_struct*_T3B=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T3B->tag=Cyc_Lexing_Error;
# 506
_T3B->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T39=(struct Cyc_Lexing_Error_exn_struct*)_T3B;}_T3A=(void*)_T39;_throw(_T3A);}
# 508
int Cyc_slurp(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_slurp_rec(lexbuf,5);return _T0;}
int Cyc_slurp_string_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct Cyc_String_pa_PrintArg_struct _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc_String_pa_PrintArg_struct _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc_String_pa_PrintArg_struct _TD;struct Cyc___cycFILE*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc_String_pa_PrintArg_struct _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct Cyc___cycFILE*_T16;struct _fat_ptr _T17;struct _fat_ptr _T18;struct Cyc_String_pa_PrintArg_struct _T19;struct Cyc___cycFILE*_T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct Cyc_String_pa_PrintArg_struct _T1D;struct Cyc___cycFILE*_T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct Cyc_Lexing_lexbuf*_T21;void(*_T22)(struct Cyc_Lexing_lexbuf*);int _T23;struct Cyc_Lexing_Error_exn_struct*_T24;void*_T25;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:
# 506 "buildlib.cyl"
 return 0;case 1: _T2=
# 508
_check_null(Cyc_slurp_out);Cyc_fputc(34,_T2);return 0;case 2: _T3=
# 510
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T4=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T3,_T4);{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag=0;
_T26.f1=Cyc_Lexing_lexeme(lexbuf);_T5=_T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T5;void*_T27[1];_T27[0]=& _T26;_T6=_check_null(Cyc_slurp_out);_T7=_tag_fat("%s",sizeof(char),3U);_T8=_tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}return 1;case 3:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag=0;
# 513
_T26.f1=Cyc_Lexing_lexeme(lexbuf);_T9=_T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T9;void*_T27[1];_T27[0]=& _T26;_TA=_check_null(Cyc_slurp_out);_TB=_tag_fat("%s",sizeof(char),3U);_TC=_tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_TA,_TB,_TC);}return 1;case 4:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag=0;
# 515
_T26.f1=Cyc_Lexing_lexeme(lexbuf);_TD=_T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_TD;void*_T27[1];_T27[0]=& _T26;_TE=_check_null(Cyc_slurp_out);_TF=_tag_fat("%s",sizeof(char),3U);_T10=_tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_TE,_TF,_T10);}return 1;case 5:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag=0;
# 517
_T26.f1=Cyc_Lexing_lexeme(lexbuf);_T11=_T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T11;void*_T27[1];_T27[0]=& _T26;_T12=_check_null(Cyc_slurp_out);_T13=_tag_fat("%s",sizeof(char),3U);_T14=_tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T12,_T13,_T14);}return 1;case 6:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag=0;
# 519
_T26.f1=Cyc_Lexing_lexeme(lexbuf);_T15=_T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T15;void*_T27[1];_T27[0]=& _T26;_T16=_check_null(Cyc_slurp_out);_T17=_tag_fat("%s",sizeof(char),3U);_T18=_tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T16,_T17,_T18);}return 1;case 7:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag=0;
# 521
_T26.f1=Cyc_Lexing_lexeme(lexbuf);_T19=_T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T19;void*_T27[1];_T27[0]=& _T26;_T1A=_check_null(Cyc_slurp_out);_T1B=_tag_fat("%s",sizeof(char),3U);_T1C=_tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T1A,_T1B,_T1C);}return 1;case 8:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag=0;
# 523
_T26.f1=Cyc_Lexing_lexeme(lexbuf);_T1D=_T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T1D;void*_T27[1];_T27[0]=& _T26;_T1E=_check_null(Cyc_slurp_out);_T1F=_tag_fat("%s",sizeof(char),3U);_T20=_tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T1E,_T1F,_T20);}return 1;default: _T21=lexbuf;_T22=_T21->refill_buff;
_T22(lexbuf);_T23=
Cyc_slurp_string_rec(lexbuf,lexstate);return _T23;}{struct Cyc_Lexing_Error_exn_struct*_T26=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T26->tag=Cyc_Lexing_Error;
# 527
_T26->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T24=(struct Cyc_Lexing_Error_exn_struct*)_T26;}_T25=(void*)_T24;_throw(_T25);}
# 529
int Cyc_slurp_string(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_slurp_string_rec(lexbuf,6);return _T0;}
int Cyc_asmtok_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;int _T2;int _T3;struct Cyc_Lexing_lexbuf*_T4;void(*_T5)(struct Cyc_Lexing_lexbuf*);int _T6;struct Cyc_Lexing_Error_exn_struct*_T7;void*_T8;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:
# 533 "buildlib.cyl"
 return 0;case 1:
# 535
 if(Cyc_parens_to_match!=1)goto _TL2E;return 0;_TL2E:
 Cyc_parens_to_match=Cyc_parens_to_match + -1;
return 1;case 2:
# 539
 Cyc_parens_to_match=Cyc_parens_to_match + 1;
return 1;case 3:
# 542
 _TL30: _T2=Cyc_asm_string(lexbuf);if(_T2)goto _TL31;else{goto _TL32;}_TL31: goto _TL30;_TL32:
 return 1;case 4:
# 545
 _TL33: _T3=Cyc_asm_comment(lexbuf);if(_T3)goto _TL34;else{goto _TL35;}_TL34: goto _TL33;_TL35:
 return 1;case 5:
# 548
 return 1;case 6:
# 550
 return 1;default: _T4=lexbuf;_T5=_T4->refill_buff;
_T5(lexbuf);_T6=
Cyc_asmtok_rec(lexbuf,lexstate);return _T6;}{struct Cyc_Lexing_Error_exn_struct*_T9=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T9->tag=Cyc_Lexing_Error;
# 554
_T9->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T7=(struct Cyc_Lexing_Error_exn_struct*)_T9;}_T8=(void*)_T7;_throw(_T8);}
# 556
int Cyc_asmtok(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_asmtok_rec(lexbuf,7);return _T0;}
int Cyc_asm_string_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct Cyc_Lexing_lexbuf*_T6;void(*_T7)(struct Cyc_Lexing_lexbuf*);int _T8;struct Cyc_Lexing_Error_exn_struct*_T9;void*_TA;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0: _T2=
# 554 "buildlib.cyl"
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1:
# 556
 return 0;case 2: _T4=
# 558
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T5=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T4,_T5);return 1;case 3:
# 560
 return 1;case 4:
# 562
 return 1;case 5:
# 564
 return 1;case 6:
# 566
 return 1;case 7:
# 568
 return 1;case 8:
# 570
 return 1;default: _T6=lexbuf;_T7=_T6->refill_buff;
_T7(lexbuf);_T8=
Cyc_asm_string_rec(lexbuf,lexstate);return _T8;}{struct Cyc_Lexing_Error_exn_struct*_TB=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_TB->tag=Cyc_Lexing_Error;
# 574
_TB->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T9=(struct Cyc_Lexing_Error_exn_struct*)_TB;}_TA=(void*)_T9;_throw(_TA);}
# 576
int Cyc_asm_string(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_asm_string_rec(lexbuf,8);return _T0;}
int Cyc_asm_comment_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Lexing_lexbuf*_T4;void(*_T5)(struct Cyc_Lexing_lexbuf*);int _T6;struct Cyc_Lexing_Error_exn_struct*_T7;void*_T8;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0: _T2=
# 574 "buildlib.cyl"
_tag_fat("Warning: unclosed comment\n",sizeof(char),27U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1:
# 576
 return 0;case 2:
# 578
 return 1;default: _T4=lexbuf;_T5=_T4->refill_buff;
_T5(lexbuf);_T6=
Cyc_asm_comment_rec(lexbuf,lexstate);return _T6;}{struct Cyc_Lexing_Error_exn_struct*_T9=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T9->tag=Cyc_Lexing_Error;
# 582
_T9->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T7=(struct Cyc_Lexing_Error_exn_struct*)_T9;}_T8=(void*)_T7;_throw(_T8);}
# 584
int Cyc_asm_comment(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_asm_comment_rec(lexbuf,9);return _T0;}
struct _tuple14*Cyc_suck_line_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _tuple14*_T2;struct _tuple14*_T3;struct Cyc_Lexing_lexbuf*_T4;void(*_T5)(struct Cyc_Lexing_lexbuf*);struct _tuple14*_T6;struct Cyc_Lexing_Error_exn_struct*_T7;void*_T8;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:
# 586 "buildlib.cyl"
 Cyc_current_line=_tag_fat("#define ",sizeof(char),9U);
Cyc_suck_macroname(lexbuf);{struct _tuple14*_T9=_cycalloc(sizeof(struct _tuple14));
_T9->f0=Cyc_current_line;_T9->f1=_check_null(Cyc_current_source);_T2=(struct _tuple14*)_T9;}return _T2;case 1: _T3=
# 590
Cyc_suck_line(lexbuf);return _T3;case 2:
# 592
 return 0;default: _T4=lexbuf;_T5=_T4->refill_buff;
_T5(lexbuf);_T6=
Cyc_suck_line_rec(lexbuf,lexstate);return _T6;}{struct Cyc_Lexing_Error_exn_struct*_T9=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T9->tag=Cyc_Lexing_Error;
# 596
_T9->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T7=(struct Cyc_Lexing_Error_exn_struct*)_T9;}_T8=(void*)_T7;_throw(_T8);}
# 598
struct _tuple14*Cyc_suck_line(struct Cyc_Lexing_lexbuf*lexbuf){struct _tuple14*_T0;_T0=Cyc_suck_line_rec(lexbuf,10);return _T0;}
int Cyc_suck_macroname_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){struct _fat_ptr*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;int _T5;struct Cyc_Lexing_lexbuf*_T6;void(*_T7)(struct Cyc_Lexing_lexbuf*);int _T8;struct Cyc_Lexing_Error_exn_struct*_T9;void*_TA;
lexstate=Cyc_lex_engine(lexstate,lexbuf);if(lexstate!=0)goto _TL39;{struct _fat_ptr*_TB=_cycalloc(sizeof(struct _fat_ptr));_T1=
# 596 "buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);*_TB=_T1;_T0=(struct _fat_ptr*)_TB;}Cyc_current_source=_T0;_T2=Cyc_current_line;_T3=Cyc_current_source;_T4=*_T3;
Cyc_current_line=Cyc_strconcat(_T2,_T4);_T5=
Cyc_suck_restofline(lexbuf);return _T5;_TL39: _T6=lexbuf;_T7=_T6->refill_buff;
# 600
_T7(lexbuf);_T8=
Cyc_suck_macroname_rec(lexbuf,lexstate);return _T8;{struct Cyc_Lexing_Error_exn_struct*_TB=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_TB->tag=Cyc_Lexing_Error;
# 603
_TB->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T9=(struct Cyc_Lexing_Error_exn_struct*)_TB;}_TA=(void*)_T9;_throw(_TA);}
# 605
int Cyc_suck_macroname(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_suck_macroname_rec(lexbuf,11);return _T0;}
int Cyc_suck_restofline_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){struct _fat_ptr _T0;struct _fat_ptr _T1;struct Cyc_Lexing_lexbuf*_T2;void(*_T3)(struct Cyc_Lexing_lexbuf*);int _T4;struct Cyc_Lexing_Error_exn_struct*_T5;void*_T6;
lexstate=Cyc_lex_engine(lexstate,lexbuf);if(lexstate!=0)goto _TL3B;_T0=Cyc_current_line;_T1=
# 603 "buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);Cyc_current_line=Cyc_strconcat(_T0,_T1);return 0;_TL3B: _T2=lexbuf;_T3=_T2->refill_buff;
_T3(lexbuf);_T4=
Cyc_suck_restofline_rec(lexbuf,lexstate);return _T4;{struct Cyc_Lexing_Error_exn_struct*_T7=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T7->tag=Cyc_Lexing_Error;
# 607
_T7->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T5=(struct Cyc_Lexing_Error_exn_struct*)_T7;}_T6=(void*)_T5;_throw(_T6);}
# 609
int Cyc_suck_restofline(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_suck_restofline_rec(lexbuf,12);return _T0;}
struct _tuple17*Cyc_spec_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _tuple17*_T2;struct _fat_ptr _T3;int _T4;int _T5;int _T6;int _T7;unsigned long _T8;struct _fat_ptr _T9;int _TA;struct _tuple17*_TB;struct _tuple17*_TC;struct Cyc_Int_pa_PrintArg_struct _TD;char _TE;int _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_Lexing_lexbuf*_T13;void(*_T14)(struct Cyc_Lexing_lexbuf*);struct _tuple17*_T15;struct Cyc_Lexing_Error_exn_struct*_T16;void*_T17;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0: _T2=
# 610 "buildlib.cyl"
Cyc_spec(lexbuf);return _T2;case 1: _T3=
# 613
Cyc_Lexing_lexeme(lexbuf);_T4=
Cyc_Lexing_lexeme_end(lexbuf);_T5=Cyc_Lexing_lexeme_start(lexbuf);_T6=_T4 - _T5;_T7=_T6 - 1;_T8=(unsigned long)_T7;_T9=
# 613
Cyc_substring(_T3,0,_T8);
# 612
Cyc_current_headerfile=_T9;
# 615
Cyc_current_symbols=0;
Cyc_current_user_defs=0;
Cyc_current_omit_symbols=0;
Cyc_current_cstubs=0;
Cyc_current_cycstubs=0;
Cyc_current_hstubs=0;
Cyc_current_cpp=0;
_TL3E: _TA=Cyc_commands(lexbuf);if(_TA)goto _TL3F;else{goto _TL40;}_TL3F: goto _TL3E;_TL40:
 Cyc_current_hstubs=Cyc_List_imp_rev(Cyc_current_hstubs);
Cyc_current_cstubs=Cyc_List_imp_rev(Cyc_current_cstubs);
Cyc_current_cycstubs=Cyc_List_imp_rev(Cyc_current_cycstubs);
Cyc_current_cpp=Cyc_List_imp_rev(Cyc_current_cpp);{struct _tuple17*_T18=_cycalloc(sizeof(struct _tuple17));
_T18->f0=Cyc_current_headerfile;
_T18->f1=Cyc_current_symbols;
_T18->f2=Cyc_current_user_defs;
_T18->f3=Cyc_current_omit_symbols;
_T18->f4=Cyc_current_hstubs;
_T18->f5=Cyc_current_cstubs;
_T18->f6=Cyc_current_cycstubs;
_T18->f7=Cyc_current_cpp;_TB=(struct _tuple17*)_T18;}
# 627
return _TB;case 2: _TC=
# 637
Cyc_spec(lexbuf);return _TC;case 3:
# 639
 return 0;case 4:{struct Cyc_Int_pa_PrintArg_struct _T18;_T18.tag=1;_TE=
# 643
Cyc_Lexing_lexeme_char(lexbuf,0);_TF=(int)_TE;_T18.f1=(unsigned long)_TF;_TD=_T18;}{struct Cyc_Int_pa_PrintArg_struct _T18=_TD;void*_T19[1];_T19[0]=& _T18;_T10=Cyc_stderr;_T11=
# 642
_tag_fat("Error in .cys file: expected header file name, found '%c' instead\n",sizeof(char),67U);_T12=_tag_fat(_T19,sizeof(void*),1);Cyc_fprintf(_T10,_T11,_T12);}
# 644
return 0;default: _T13=lexbuf;_T14=_T13->refill_buff;
_T14(lexbuf);_T15=
Cyc_spec_rec(lexbuf,lexstate);return _T15;}{struct Cyc_Lexing_Error_exn_struct*_T18=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T18->tag=Cyc_Lexing_Error;
# 648
_T18->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T16=(struct Cyc_Lexing_Error_exn_struct*)_T18;}_T17=(void*)_T16;_throw(_T17);}
# 650
struct _tuple17*Cyc_spec(struct Cyc_Lexing_lexbuf*lexbuf){struct _tuple17*_T0;_T0=Cyc_spec_rec(lexbuf,13);return _T0;}
int Cyc_commands_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;int _T2;int _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;int _T7;struct _tuple15*_T8;struct _fat_ptr _T9;struct _tuple15*_TA;struct Cyc_Buffer_t*_TB;struct _fat_ptr _TC;struct Cyc_List_List*_TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;unsigned long _T10;int _T11;struct _fat_ptr _T12;unsigned char*_T13;char*_T14;char _T15;int _T16;int _T17;struct _fat_ptr*_T18;struct _fat_ptr _T19;unsigned char*_T1A;char*_T1B;char _T1C;int _T1D;int _T1E;struct _fat_ptr*_T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;unsigned char*_T22;struct _fat_ptr _T23;unsigned char*_T24;int _T25;int _T26;unsigned long _T27;int _T28;struct _tuple15*_T29;struct _fat_ptr _T2A;struct _tuple15*_T2B;struct Cyc_Buffer_t*_T2C;struct _fat_ptr _T2D;struct Cyc_List_List*_T2E;int _T2F;struct _tuple15*_T30;struct _fat_ptr _T31;struct _tuple15*_T32;struct Cyc_Buffer_t*_T33;struct _fat_ptr _T34;struct Cyc_List_List*_T35;struct _fat_ptr*_T36;struct _fat_ptr _T37;unsigned long _T38;int _T39;struct _fat_ptr _T3A;unsigned char*_T3B;char*_T3C;char _T3D;int _T3E;int _T3F;struct _fat_ptr*_T40;struct _fat_ptr _T41;unsigned char*_T42;char*_T43;char _T44;int _T45;int _T46;struct _fat_ptr*_T47;struct _fat_ptr _T48;struct _fat_ptr _T49;unsigned char*_T4A;struct _fat_ptr _T4B;unsigned char*_T4C;int _T4D;int _T4E;unsigned long _T4F;int _T50;struct _tuple15*_T51;struct _fat_ptr _T52;struct _tuple15*_T53;struct Cyc_Buffer_t*_T54;struct _fat_ptr _T55;struct Cyc_List_List*_T56;int _T57;struct _tuple15*_T58;struct _fat_ptr _T59;struct _tuple15*_T5A;struct Cyc_Buffer_t*_T5B;struct _fat_ptr _T5C;struct Cyc_List_List*_T5D;struct _fat_ptr*_T5E;struct _fat_ptr _T5F;unsigned long _T60;int _T61;struct _fat_ptr _T62;unsigned char*_T63;char*_T64;char _T65;int _T66;int _T67;struct _fat_ptr*_T68;struct _fat_ptr _T69;unsigned char*_T6A;char*_T6B;char _T6C;int _T6D;int _T6E;struct _fat_ptr*_T6F;struct _fat_ptr _T70;struct _fat_ptr _T71;unsigned char*_T72;struct _fat_ptr _T73;unsigned char*_T74;int _T75;int _T76;unsigned long _T77;int _T78;struct _tuple15*_T79;struct _fat_ptr _T7A;struct _tuple15*_T7B;struct Cyc_Buffer_t*_T7C;struct _fat_ptr _T7D;struct Cyc_List_List*_T7E;int _T7F;struct _fat_ptr*_T80;struct Cyc_Buffer_t*_T81;struct _fat_ptr _T82;struct Cyc_List_List*_T83;struct Cyc_Int_pa_PrintArg_struct _T84;char _T85;int _T86;struct Cyc___cycFILE*_T87;struct _fat_ptr _T88;struct _fat_ptr _T89;struct Cyc_Lexing_lexbuf*_T8A;void(*_T8B)(struct Cyc_Lexing_lexbuf*);int _T8C;struct Cyc_Lexing_Error_exn_struct*_T8D;void*_T8E;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:
# 648 "buildlib.cyl"
 return 0;case 1:
# 650
 return 0;case 2:
# 652
 Cyc_snarfed_symbols=0;
_TL42: _T2=Cyc_snarfsymbols(lexbuf);if(_T2)goto _TL43;else{goto _TL44;}_TL43: goto _TL42;_TL44:
 Cyc_current_symbols=Cyc_List_append(Cyc_snarfed_symbols,Cyc_current_symbols);
return 1;case 3:
# 657
 Cyc_snarfed_symbols=0;{
struct Cyc_List_List*tmp_user_defs=Cyc_current_user_defs;
_TL45: _T3=Cyc_snarfsymbols(lexbuf);if(_T3)goto _TL46;else{goto _TL47;}_TL46: goto _TL45;_TL47:
 if(tmp_user_defs==Cyc_current_user_defs)goto _TL48;_T4=Cyc_stderr;_T5=
# 662
_tag_fat("Error in .cys file: got optional definition in omitsymbols\n",sizeof(char),60U);_T6=_tag_fat(0U,sizeof(void*),0);
# 661
Cyc_fprintf(_T4,_T5,_T6);
# 663
return 0;_TL48:
# 665
 Cyc_current_omit_symbols=Cyc_List_append(Cyc_snarfed_symbols,Cyc_current_omit_symbols);
return 1;}case 4:
# 668
 Cyc_braces_to_match=1;
Cyc_specbuf=Cyc_Buffer_create(255U);
_TL4A: _T7=Cyc_block(lexbuf);if(_T7)goto _TL4B;else{goto _TL4C;}_TL4B: goto _TL4A;_TL4C: {
struct _tuple15*x;x=_cycalloc(sizeof(struct _tuple15));_T8=x;_T9=_tag_fat(0,0,0);_T8->f0=_T9;_TA=x;_TB=
_check_null(Cyc_specbuf);_TC=Cyc_Buffer_contents(_TB);_TA->f1=_TC;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd=x;_T8F->tl=Cyc_current_hstubs;_TD=(struct Cyc_List_List*)_T8F;}Cyc_current_hstubs=_TD;
return 1;}case 5:  {
# 676
struct _fat_ptr s=Cyc_Lexing_lexeme(lexbuf);_TE=& s;_TF=
_tag_fat("hstub",sizeof(char),6U);_T10=Cyc_strlen(_TF);_T11=(int)_T10;_fat_ptr_inplace_plus(_TE,sizeof(char),_T11);
_TL4D: _T12=s;_T13=_check_fat_subscript(_T12,sizeof(char),0U);_T14=(char*)_T13;_T15=*_T14;_T16=(int)_T15;_T17=isspace(_T16);if(_T17)goto _TL4E;else{goto _TL4F;}_TL4E: _T18=& s;_fat_ptr_inplace_plus(_T18,sizeof(char),1);goto _TL4D;_TL4F: {
struct _fat_ptr t=s;
_TL50: _T19=t;_T1A=_check_fat_subscript(_T19,sizeof(char),0U);_T1B=(char*)_T1A;_T1C=*_T1B;_T1D=(int)_T1C;_T1E=isspace(_T1D);if(_T1E)goto _TL52;else{goto _TL51;}_TL51: _T1F=& t;_fat_ptr_inplace_plus(_T1F,sizeof(char),1);goto _TL50;_TL52: _T20=s;_T21=t;_T22=_T21.curr;_T23=s;_T24=_T23.curr;_T25=_T22 - _T24;_T26=_T25 / sizeof(char);_T27=(unsigned long)_T26;{
struct _fat_ptr symbol=Cyc_substring(_T20,0,_T27);
Cyc_braces_to_match=1;
Cyc_specbuf=Cyc_Buffer_create(255U);
_TL53: _T28=Cyc_block(lexbuf);if(_T28)goto _TL54;else{goto _TL55;}_TL54: goto _TL53;_TL55: {
struct _tuple15*x;x=_cycalloc(sizeof(struct _tuple15));_T29=x;_T2A=symbol;_T29->f0=_T2A;_T2B=x;_T2C=
_check_null(Cyc_specbuf);_T2D=Cyc_Buffer_contents(_T2C);_T2B->f1=_T2D;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd=x;_T8F->tl=Cyc_current_hstubs;_T2E=(struct Cyc_List_List*)_T8F;}Cyc_current_hstubs=_T2E;
return 1;}}}}case 6:
# 690
 Cyc_braces_to_match=1;
Cyc_specbuf=Cyc_Buffer_create(255U);
_TL56: _T2F=Cyc_block(lexbuf);if(_T2F)goto _TL57;else{goto _TL58;}_TL57: goto _TL56;_TL58: {
struct _tuple15*x;x=_cycalloc(sizeof(struct _tuple15));_T30=x;_T31=_tag_fat(0,0,0);_T30->f0=_T31;_T32=x;_T33=
_check_null(Cyc_specbuf);_T34=Cyc_Buffer_contents(_T33);_T32->f1=_T34;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd=x;_T8F->tl=Cyc_current_cstubs;_T35=(struct Cyc_List_List*)_T8F;}Cyc_current_cstubs=_T35;
return 1;}case 7:  {
# 698
struct _fat_ptr s=Cyc_Lexing_lexeme(lexbuf);_T36=& s;_T37=
_tag_fat("cstub",sizeof(char),6U);_T38=Cyc_strlen(_T37);_T39=(int)_T38;_fat_ptr_inplace_plus(_T36,sizeof(char),_T39);
_TL59: _T3A=s;_T3B=_check_fat_subscript(_T3A,sizeof(char),0U);_T3C=(char*)_T3B;_T3D=*_T3C;_T3E=(int)_T3D;_T3F=isspace(_T3E);if(_T3F)goto _TL5A;else{goto _TL5B;}_TL5A: _T40=& s;_fat_ptr_inplace_plus(_T40,sizeof(char),1);goto _TL59;_TL5B: {
struct _fat_ptr t=s;
_TL5C: _T41=t;_T42=_check_fat_subscript(_T41,sizeof(char),0U);_T43=(char*)_T42;_T44=*_T43;_T45=(int)_T44;_T46=isspace(_T45);if(_T46)goto _TL5E;else{goto _TL5D;}_TL5D: _T47=& t;_fat_ptr_inplace_plus(_T47,sizeof(char),1);goto _TL5C;_TL5E: _T48=s;_T49=t;_T4A=_T49.curr;_T4B=s;_T4C=_T4B.curr;_T4D=_T4A - _T4C;_T4E=_T4D / sizeof(char);_T4F=(unsigned long)_T4E;{
struct _fat_ptr symbol=Cyc_substring(_T48,0,_T4F);
Cyc_braces_to_match=1;
Cyc_specbuf=Cyc_Buffer_create(255U);
_TL5F: _T50=Cyc_block(lexbuf);if(_T50)goto _TL60;else{goto _TL61;}_TL60: goto _TL5F;_TL61: {
struct _tuple15*x;x=_cycalloc(sizeof(struct _tuple15));_T51=x;_T52=symbol;_T51->f0=_T52;_T53=x;_T54=
_check_null(Cyc_specbuf);_T55=Cyc_Buffer_contents(_T54);_T53->f1=_T55;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd=x;_T8F->tl=Cyc_current_cstubs;_T56=(struct Cyc_List_List*)_T8F;}Cyc_current_cstubs=_T56;
return 1;}}}}case 8:
# 712
 Cyc_braces_to_match=1;
Cyc_specbuf=Cyc_Buffer_create(255U);
_TL62: _T57=Cyc_block(lexbuf);if(_T57)goto _TL63;else{goto _TL64;}_TL63: goto _TL62;_TL64: {
struct _tuple15*x;x=_cycalloc(sizeof(struct _tuple15));_T58=x;_T59=_tag_fat(0,0,0);_T58->f0=_T59;_T5A=x;_T5B=
_check_null(Cyc_specbuf);_T5C=Cyc_Buffer_contents(_T5B);_T5A->f1=_T5C;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd=x;_T8F->tl=Cyc_current_cycstubs;_T5D=(struct Cyc_List_List*)_T8F;}Cyc_current_cycstubs=_T5D;
return 1;}case 9:  {
# 720
struct _fat_ptr s=Cyc_Lexing_lexeme(lexbuf);_T5E=& s;_T5F=
_tag_fat("cycstub",sizeof(char),8U);_T60=Cyc_strlen(_T5F);_T61=(int)_T60;_fat_ptr_inplace_plus(_T5E,sizeof(char),_T61);
_TL65: _T62=s;_T63=_check_fat_subscript(_T62,sizeof(char),0U);_T64=(char*)_T63;_T65=*_T64;_T66=(int)_T65;_T67=isspace(_T66);if(_T67)goto _TL66;else{goto _TL67;}_TL66: _T68=& s;_fat_ptr_inplace_plus(_T68,sizeof(char),1);goto _TL65;_TL67: {
struct _fat_ptr t=s;
_TL68: _T69=t;_T6A=_check_fat_subscript(_T69,sizeof(char),0U);_T6B=(char*)_T6A;_T6C=*_T6B;_T6D=(int)_T6C;_T6E=isspace(_T6D);if(_T6E)goto _TL6A;else{goto _TL69;}_TL69: _T6F=& t;_fat_ptr_inplace_plus(_T6F,sizeof(char),1);goto _TL68;_TL6A: _T70=s;_T71=t;_T72=_T71.curr;_T73=s;_T74=_T73.curr;_T75=_T72 - _T74;_T76=_T75 / sizeof(char);_T77=(unsigned long)_T76;{
struct _fat_ptr symbol=Cyc_substring(_T70,0,_T77);
Cyc_braces_to_match=1;
Cyc_specbuf=Cyc_Buffer_create(255U);
_TL6B: _T78=Cyc_block(lexbuf);if(_T78)goto _TL6C;else{goto _TL6D;}_TL6C: goto _TL6B;_TL6D: {
struct _tuple15*x;x=_cycalloc(sizeof(struct _tuple15));_T79=x;_T7A=symbol;_T79->f0=_T7A;_T7B=x;_T7C=
_check_null(Cyc_specbuf);_T7D=Cyc_Buffer_contents(_T7C);_T7B->f1=_T7D;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd=x;_T8F->tl=Cyc_current_cycstubs;_T7E=(struct Cyc_List_List*)_T8F;}Cyc_current_cycstubs=_T7E;
return 1;}}}}case 10:
# 734
 Cyc_braces_to_match=1;
Cyc_specbuf=Cyc_Buffer_create(255U);
_TL6E: _T7F=Cyc_block(lexbuf);if(_T7F)goto _TL6F;else{goto _TL70;}_TL6F: goto _TL6E;_TL70: {
struct _fat_ptr*x;x=_cycalloc(sizeof(struct _fat_ptr));_T80=x;_T81=_check_null(Cyc_specbuf);_T82=Cyc_Buffer_contents(_T81);*_T80=_T82;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd=x;_T8F->tl=Cyc_current_cpp;_T83=(struct Cyc_List_List*)_T8F;}Cyc_current_cpp=_T83;
return 1;}case 11:
# 741
 return 1;case 12:
# 743
 return 1;case 13:{struct Cyc_Int_pa_PrintArg_struct _T8F;_T8F.tag=1;_T85=
# 747
Cyc_Lexing_lexeme_char(lexbuf,0);_T86=(int)_T85;_T8F.f1=(unsigned long)_T86;_T84=_T8F;}{struct Cyc_Int_pa_PrintArg_struct _T8F=_T84;void*_T90[1];_T90[0]=& _T8F;_T87=Cyc_stderr;_T88=
# 746
_tag_fat("Error in .cys file: expected command, found '%c' instead\n",sizeof(char),58U);_T89=_tag_fat(_T90,sizeof(void*),1);Cyc_fprintf(_T87,_T88,_T89);}
# 748
return 0;default: _T8A=lexbuf;_T8B=_T8A->refill_buff;
_T8B(lexbuf);_T8C=
Cyc_commands_rec(lexbuf,lexstate);return _T8C;}{struct Cyc_Lexing_Error_exn_struct*_T8F=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T8F->tag=Cyc_Lexing_Error;
# 752
_T8F->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T8D=(struct Cyc_Lexing_Error_exn_struct*)_T8F;}_T8E=(void*)_T8D;_throw(_T8E);}
# 754
int Cyc_commands(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_commands_rec(lexbuf,14);return _T0;}
int Cyc_snarfsymbols_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct Cyc_List_List*_T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;unsigned char*_T6;char*_T7;char _T8;int _T9;int _TA;struct _fat_ptr*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;unsigned char*_TE;struct _fat_ptr _TF;unsigned char*_T10;int _T11;int _T12;unsigned long _T13;int _T14;struct _tuple16*_T15;struct _fat_ptr*_T16;struct _tuple16*_T17;struct _fat_ptr*_T18;struct Cyc_Buffer_t*_T19;struct _fat_ptr _T1A;struct Cyc_List_List*_T1B;struct _fat_ptr*_T1C;struct _fat_ptr _T1D;struct Cyc_List_List*_T1E;struct Cyc___cycFILE*_T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;struct Cyc_Int_pa_PrintArg_struct _T22;char _T23;int _T24;struct Cyc___cycFILE*_T25;struct _fat_ptr _T26;struct _fat_ptr _T27;struct Cyc_Lexing_lexbuf*_T28;void(*_T29)(struct Cyc_Lexing_lexbuf*);int _T2A;struct Cyc_Lexing_Error_exn_struct*_T2B;void*_T2C;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0:{struct Cyc_List_List*_T2D=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T2E=_cycalloc(sizeof(struct _fat_ptr));_T4=
# 758 "buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);*_T2E=_T4;_T3=(struct _fat_ptr*)_T2E;}_T2D->hd=_T3;_T2D->tl=Cyc_snarfed_symbols;_T2=(struct Cyc_List_List*)_T2D;}Cyc_snarfed_symbols=_T2;
return 1;case 1:  {
# 761
struct _fat_ptr s=Cyc_Lexing_lexeme(lexbuf);
struct _fat_ptr t=s;
_TL72: _T5=t;_T6=_check_fat_subscript(_T5,sizeof(char),0U);_T7=(char*)_T6;_T8=*_T7;_T9=(int)_T8;_TA=isspace(_T9);if(_TA)goto _TL74;else{goto _TL73;}_TL73: _TB=& t;_fat_ptr_inplace_plus(_TB,sizeof(char),1);goto _TL72;_TL74: _TC=s;_TD=t;_TE=_TD.curr;_TF=s;_T10=_TF.curr;_T11=_TE - _T10;_T12=_T11 / sizeof(char);_T13=(unsigned long)_T12;
Cyc_current_symbol=Cyc_substring(_TC,0,_T13);
Cyc_rename_current_symbol=1;
Cyc_braces_to_match=1;
Cyc_specbuf=Cyc_Buffer_create(255U);
_TL75: _T14=Cyc_block(lexbuf);if(_T14)goto _TL76;else{goto _TL77;}_TL76: goto _TL75;_TL77:
# 770
 Cyc_rename_current_symbol=0;{
struct _tuple16*user_def;user_def=_cycalloc(sizeof(struct _tuple16));_T15=user_def;{struct _fat_ptr*_T2D=_cycalloc(sizeof(struct _fat_ptr));*_T2D=Cyc_current_symbol;_T16=(struct _fat_ptr*)_T2D;}_T15->f0=_T16;_T17=user_def;{struct _fat_ptr*_T2D=_cycalloc(sizeof(struct _fat_ptr));_T19=
_check_null(Cyc_specbuf);_T1A=Cyc_Buffer_contents(_T19);*_T2D=_T1A;_T18=(struct _fat_ptr*)_T2D;}_T17->f1=_T18;{struct Cyc_List_List*_T2D=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T2E=_cycalloc(sizeof(struct _fat_ptr));_T1D=Cyc_current_symbol;
*_T2E=_T1D;_T1C=(struct _fat_ptr*)_T2E;}_T2D->hd=_T1C;_T2D->tl=Cyc_snarfed_symbols;_T1B=(struct Cyc_List_List*)_T2D;}Cyc_snarfed_symbols=_T1B;{struct Cyc_List_List*_T2D=_cycalloc(sizeof(struct Cyc_List_List));
_T2D->hd=user_def;_T2D->tl=Cyc_current_user_defs;_T1E=(struct Cyc_List_List*)_T2D;}Cyc_current_user_defs=_T1E;
return 1;}}case 2:
# 777
 return 1;case 3:
# 779
 return 0;case 4: _T1F=Cyc_stderr;_T20=
# 782
_tag_fat("Error in .cys file: unexpected end-of-file\n",sizeof(char),44U);_T21=_tag_fat(0U,sizeof(void*),0);
# 781
Cyc_fprintf(_T1F,_T20,_T21);
# 783
return 0;case 5:{struct Cyc_Int_pa_PrintArg_struct _T2D;_T2D.tag=1;_T23=
# 787
Cyc_Lexing_lexeme_char(lexbuf,0);_T24=(int)_T23;_T2D.f1=(unsigned long)_T24;_T22=_T2D;}{struct Cyc_Int_pa_PrintArg_struct _T2D=_T22;void*_T2E[1];_T2E[0]=& _T2D;_T25=Cyc_stderr;_T26=
# 786
_tag_fat("Error in .cys file: expected symbol, found '%c' instead\n",sizeof(char),57U);_T27=_tag_fat(_T2E,sizeof(void*),1);Cyc_fprintf(_T25,_T26,_T27);}
# 788
return 0;default: _T28=lexbuf;_T29=_T28->refill_buff;
_T29(lexbuf);_T2A=
Cyc_snarfsymbols_rec(lexbuf,lexstate);return _T2A;}{struct Cyc_Lexing_Error_exn_struct*_T2D=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T2D->tag=Cyc_Lexing_Error;
# 792
_T2D->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T2B=(struct Cyc_Lexing_Error_exn_struct*)_T2D;}_T2C=(void*)_T2B;_throw(_T2C);}
# 794
int Cyc_snarfsymbols(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_snarfsymbols_rec(lexbuf,15);return _T0;}
int Cyc_block_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Buffer_t*_T4;struct Cyc_Buffer_t*_T5;struct Cyc_Buffer_t*_T6;int _T7;struct Cyc_Buffer_t*_T8;struct _fat_ptr _T9;int _TA;struct Cyc_Buffer_t*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;int _TE;int _TF;struct Cyc_Buffer_t*_T10;struct _fat_ptr*_T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;struct Cyc_Buffer_t*_T14;struct _fat_ptr _T15;struct Cyc_Buffer_t*_T16;char _T17;struct Cyc_Lexing_lexbuf*_T18;void(*_T19)(struct Cyc_Lexing_lexbuf*);int _T1A;struct Cyc_Lexing_Error_exn_struct*_T1B;void*_T1C;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0: _T2=
# 798 "buildlib.cyl"
_tag_fat("Warning: unclosed brace\n",sizeof(char),25U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1:
# 800
 if(Cyc_braces_to_match!=1)goto _TL79;return 0;_TL79:
 Cyc_braces_to_match=Cyc_braces_to_match + -1;_T4=
_check_null(Cyc_specbuf);Cyc_Buffer_add_char(_T4,'}');
return 1;case 2:
# 805
 Cyc_braces_to_match=Cyc_braces_to_match + 1;_T5=
_check_null(Cyc_specbuf);Cyc_Buffer_add_char(_T5,'{');
return 1;case 3: _T6=
# 809
_check_null(Cyc_specbuf);Cyc_Buffer_add_char(_T6,'"');
_TL7B: _T7=Cyc_block_string(lexbuf);if(_T7)goto _TL7C;else{goto _TL7D;}_TL7C: goto _TL7B;_TL7D:
 return 1;case 4: _T8=
# 813
_check_null(Cyc_specbuf);_T9=_tag_fat("/*",sizeof(char),3U);Cyc_Buffer_add_string(_T8,_T9);
_TL7E: _TA=Cyc_block_comment(lexbuf);if(_TA)goto _TL7F;else{goto _TL80;}_TL7F: goto _TL7E;_TL80:
 return 1;case 5: _TB=
# 817
_check_null(Cyc_specbuf);_TC=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_TB,_TC);
return 1;case 6: _TD=
# 820
Cyc_Lexing_lexeme(lexbuf);{struct _fat_ptr symbol=_TD;_TE=Cyc_rename_current_symbol;
if(!_TE)goto _TL81;_TF=Cyc_strcmp(symbol,Cyc_current_symbol);if(_TF)goto _TL81;else{goto _TL83;}
_TL83: _T10=_check_null(Cyc_specbuf);{struct _fat_ptr*_T1D=_cycalloc(sizeof(struct _fat_ptr));*_T1D=symbol;_T11=(struct _fat_ptr*)_T1D;}_T12=Cyc_add_user_prefix(_T11);_T13=*_T12;Cyc_Buffer_add_string(_T10,_T13);goto _TL82;
# 824
_TL81: _T14=_check_null(Cyc_specbuf);_T15=symbol;Cyc_Buffer_add_string(_T14,_T15);_TL82:
 return 1;}case 7: _T16=
# 827
_check_null(Cyc_specbuf);_T17=Cyc_Lexing_lexeme_char(lexbuf,0);Cyc_Buffer_add_char(_T16,_T17);
return 1;default: _T18=lexbuf;_T19=_T18->refill_buff;
_T19(lexbuf);_T1A=
Cyc_block_rec(lexbuf,lexstate);return _T1A;}{struct Cyc_Lexing_Error_exn_struct*_T1D=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T1D->tag=Cyc_Lexing_Error;
# 832
_T1D->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T1B=(struct Cyc_Lexing_Error_exn_struct*)_T1D;}_T1C=(void*)_T1B;_throw(_T1C);}
# 834
int Cyc_block(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_block_rec(lexbuf,16);return _T0;}
int Cyc_block_string_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Buffer_t*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc_Buffer_t*_T7;struct _fat_ptr _T8;struct Cyc_Buffer_t*_T9;struct _fat_ptr _TA;struct Cyc_Buffer_t*_TB;struct _fat_ptr _TC;struct Cyc_Buffer_t*_TD;struct _fat_ptr _TE;struct Cyc_Buffer_t*_TF;struct _fat_ptr _T10;struct Cyc_Buffer_t*_T11;struct _fat_ptr _T12;struct Cyc_Buffer_t*_T13;struct _fat_ptr _T14;struct Cyc_Lexing_lexbuf*_T15;void(*_T16)(struct Cyc_Lexing_lexbuf*);int _T17;struct Cyc_Lexing_Error_exn_struct*_T18;void*_T19;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0: _T2=
# 832 "buildlib.cyl"
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1: _T4=
# 834
_check_null(Cyc_specbuf);Cyc_Buffer_add_char(_T4,'"');return 0;case 2: _T5=
# 836
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T6=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T5,_T6);_T7=
_check_null(Cyc_specbuf);_T8=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T7,_T8);
return 1;case 3: _T9=
# 840
_check_null(Cyc_specbuf);_TA=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T9,_TA);
return 1;case 4: _TB=
# 843
_check_null(Cyc_specbuf);_TC=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_TB,_TC);
return 1;case 5: _TD=
# 846
_check_null(Cyc_specbuf);_TE=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_TD,_TE);
return 1;case 6: _TF=
# 849
_check_null(Cyc_specbuf);_T10=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_TF,_T10);
return 1;case 7: _T11=
# 852
_check_null(Cyc_specbuf);_T12=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T11,_T12);
return 1;case 8: _T13=
# 855
_check_null(Cyc_specbuf);_T14=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T13,_T14);
return 1;default: _T15=lexbuf;_T16=_T15->refill_buff;
_T16(lexbuf);_T17=
Cyc_block_string_rec(lexbuf,lexstate);return _T17;}{struct Cyc_Lexing_Error_exn_struct*_T1A=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T1A->tag=Cyc_Lexing_Error;
# 860
_T1A->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_T18=(struct Cyc_Lexing_Error_exn_struct*)_T1A;}_T19=(void*)_T18;_throw(_T19);}
# 862
int Cyc_block_string(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_block_string_rec(lexbuf,17);return _T0;}
int Cyc_block_comment_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Buffer_t*_T4;struct _fat_ptr _T5;struct Cyc_Buffer_t*_T6;struct _fat_ptr _T7;struct Cyc_Lexing_lexbuf*_T8;void(*_T9)(struct Cyc_Lexing_lexbuf*);int _TA;struct Cyc_Lexing_Error_exn_struct*_TB;void*_TC;
lexstate=Cyc_lex_engine(lexstate,lexbuf);_T0=lexstate;_T1=(int)_T0;switch(_T1){case 0: _T2=
# 860 "buildlib.cyl"
_tag_fat("Warning: unclosed comment\n",sizeof(char),27U);_T3=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1: _T4=
# 862
_check_null(Cyc_specbuf);_T5=_tag_fat("*/",sizeof(char),3U);Cyc_Buffer_add_string(_T4,_T5);return 0;case 2: _T6=
# 864
_check_null(Cyc_specbuf);_T7=Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T6,_T7);
return 1;default: _T8=lexbuf;_T9=_T8->refill_buff;
_T9(lexbuf);_TA=
Cyc_block_comment_rec(lexbuf,lexstate);return _TA;}{struct Cyc_Lexing_Error_exn_struct*_TD=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_TD->tag=Cyc_Lexing_Error;
# 869
_TD->f1=_tag_fat("some action didn't return!",sizeof(char),27U);_TB=(struct Cyc_Lexing_Error_exn_struct*)_TD;}_TC=(void*)_TB;_throw(_TC);}
# 871
int Cyc_block_comment(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0=Cyc_block_comment_rec(lexbuf,18);return _T0;}
# 873 "buildlib.cyl"
void Cyc_scan_type(void*,struct Cyc_Hashtable_Table*);struct _tuple18{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
void Cyc_scan_exp(struct Cyc_Absyn_Exp*e,struct Cyc_Hashtable_Table*dep){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;void*_T3;struct _tuple1*_T4;struct _tuple1 _T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Hashtable_Table*_T9;struct Cyc_List_List*_TA;struct Cyc_List_List*_TB;void*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_Hashtable_Table*_TE;struct Cyc_List_List*_TF;void*_T10;struct Cyc_Absyn_MallocInfo _T11;struct Cyc_Absyn_MallocInfo _T12;struct Cyc_Absyn_MallocInfo _T13;struct Cyc_Absyn_MallocInfo _T14;struct Cyc_Absyn_MallocInfo _T15;void**_T16;void*_T17;struct Cyc_Hashtable_Table*_T18;void*_T19;void*_T1A;void*_T1B;struct Cyc_List_List*_T1C;struct Cyc_List_List*_T1D;void*_T1E;struct Cyc_List_List*_T1F;struct Cyc___cycFILE*_T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct Cyc___cycFILE*_T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct Cyc___cycFILE*_T26;struct _fat_ptr _T27;struct _fat_ptr _T28;struct Cyc___cycFILE*_T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;struct Cyc___cycFILE*_T2C;struct _fat_ptr _T2D;struct _fat_ptr _T2E;struct Cyc___cycFILE*_T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;struct Cyc___cycFILE*_T32;struct _fat_ptr _T33;struct _fat_ptr _T34;struct Cyc___cycFILE*_T35;struct _fat_ptr _T36;struct _fat_ptr _T37;struct Cyc___cycFILE*_T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;struct Cyc___cycFILE*_T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;struct Cyc___cycFILE*_T3E;struct _fat_ptr _T3F;struct _fat_ptr _T40;struct Cyc___cycFILE*_T41;struct _fat_ptr _T42;struct _fat_ptr _T43;struct Cyc___cycFILE*_T44;struct _fat_ptr _T45;struct _fat_ptr _T46;struct Cyc___cycFILE*_T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct Cyc___cycFILE*_T4A;struct _fat_ptr _T4B;struct _fat_ptr _T4C;struct Cyc___cycFILE*_T4D;struct _fat_ptr _T4E;struct _fat_ptr _T4F;struct Cyc___cycFILE*_T50;struct _fat_ptr _T51;struct _fat_ptr _T52;struct Cyc___cycFILE*_T53;struct _fat_ptr _T54;struct _fat_ptr _T55;_T0=
_check_null(e);{void*_T56=_T0->r;struct _fat_ptr*_T57;void**_T58;enum Cyc_Absyn_MallocKind _T59;struct Cyc_List_List*_T5A;struct Cyc_Absyn_Exp*_T5B;struct Cyc_Absyn_Exp*_T5C;void*_T5D;_T1=(int*)_T56;_T2=*_T1;switch(_T2){case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T56;_T3=_T5E->f1;_T5D=(void*)_T3;}{void*b=_T5D;_T4=
# 877
Cyc_Absyn_binding2qvar(b);_T5=*_T4;{struct _fat_ptr*v=_T5.f1;
Cyc_add_target(v);
return;}}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f2;}{struct Cyc_List_List*x=_T5D;
# 881
_TL8A: if(x!=0)goto _TL88;else{goto _TL89;}
_TL88: _T6=x;_T7=_T6->hd;_T8=(struct Cyc_Absyn_Exp*)_T7;_T9=dep;Cyc_scan_exp(_T8,_T9);_TA=x;
# 881
x=_TA->tl;goto _TL8A;_TL89:
# 884
 return;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T5C=_T5E->f2;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;_T5D=e1;_T5C=e2;goto _LL8;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T5C=_T5E->f2;}_LL8: {struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;_T5D=e1;_T5C=e2;goto _LLA;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T5C=_T5E->f3;}_LLA: {struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;
# 890
Cyc_scan_exp(e1,dep);
Cyc_scan_exp(e2,dep);
return;}case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;}{struct Cyc_Absyn_Exp*e1=_T5D;_T5D=e1;goto _LLE;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;}_LLE: {struct Cyc_Absyn_Exp*e1=_T5D;_T5D=e1;goto _LL10;}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;}_LL10: {struct Cyc_Absyn_Exp*e1=_T5D;_T5D=e1;goto _LL12;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;}_LL12: {struct Cyc_Absyn_Exp*e1=_T5D;_T5D=e1;goto _LL14;}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;}_LL14: {struct Cyc_Absyn_Exp*e1=_T5D;
# 901
Cyc_scan_exp(e1,dep);
return;}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T5C=_T5E->f2;_T5B=_T5E->f3;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;struct Cyc_Absyn_Exp*e3=_T5B;
# 904
Cyc_scan_exp(e1,dep);
Cyc_scan_exp(e2,dep);
Cyc_scan_exp(e3,dep);
return;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T5C=_T5E->f2;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;_T5D=e1;_T5C=e2;goto _LL1A;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T5C=_T5E->f2;}_LL1A: {struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;
# 910
Cyc_scan_exp(e1,dep);
Cyc_scan_exp(e2,dep);
return;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T5A=_T5E->f2;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_List_List*x=_T5A;
# 914
Cyc_scan_exp(e1,dep);
_TL8E: if(x!=0)goto _TL8C;else{goto _TL8D;}
_TL8C: _TB=x;_TC=_TB->hd;_TD=(struct Cyc_Absyn_Exp*)_TC;_TE=dep;Cyc_scan_exp(_TD,_TE);_TF=x;
# 915
x=_TF->tl;goto _TL8E;_TL8D:
# 918
 return;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T56;_T10=_T5E->f1;_T5D=(void*)_T10;_T5C=_T5E->f2;}{void*t1=_T5D;struct Cyc_Absyn_Exp*e1=_T5C;
# 920
Cyc_scan_type(t1,dep);
Cyc_scan_exp(e1,dep);
return;}case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T56;_T11=_T5E->f1;_T59=_T11.mknd;_T12=_T5E->f1;_T5D=_T12.rgn;_T13=_T5E->f1;_T5C=_T13.aqual;_T14=_T5E->f1;_T58=_T14.elt_type;_T15=_T5E->f1;_T5B=_T15.num_elts;}{enum Cyc_Absyn_MallocKind mknd=_T59;struct Cyc_Absyn_Exp*ropt=_T5D;struct Cyc_Absyn_Exp*aqopt=_T5C;void**topt=_T58;struct Cyc_Absyn_Exp*e=_T5B;
# 924
if(ropt==0)goto _TL8F;Cyc_scan_exp(ropt,dep);goto _TL90;_TL8F: _TL90:
 if(aqopt==0)goto _TL91;Cyc_scan_exp(aqopt,dep);goto _TL92;_TL91: _TL92:
 if(topt==0)goto _TL93;_T16=topt;_T17=*_T16;_T18=dep;Cyc_scan_type(_T17,_T18);goto _TL94;_TL93: _TL94:
 Cyc_scan_exp(e,dep);
return;}case 37:{struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;}{struct Cyc_Absyn_Exp*e=_T5D;
# 930
Cyc_scan_exp(e,dep);return;}case 38:{struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_T56;_T19=_T5E->f1;_T5D=(void*)_T19;}{void*t1=_T5D;_T5D=t1;goto _LL26;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T56;_T1A=_T5E->f1;_T5D=(void*)_T1A;}_LL26: {void*t1=_T5D;
# 933
Cyc_scan_type(t1,dep);
return;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T57=_T5E->f2;}{struct Cyc_Absyn_Exp*e1=_T5D;struct _fat_ptr*fn=_T57;_T5D=e1;_T57=fn;goto _LL2A;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T56;_T5D=_T5E->f1;_T57=_T5E->f2;}_LL2A: {struct Cyc_Absyn_Exp*e1=_T5D;struct _fat_ptr*fn=_T57;
# 938
Cyc_scan_exp(e1,dep);
Cyc_add_target(fn);
return;}case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T56;_T1B=_T5E->f1;_T5D=(void*)_T1B;_T5A=_T5E->f2;}{void*t1=_T5D;struct Cyc_List_List*f=_T5A;
# 942
Cyc_scan_type(t1,dep);_T1C=
# 944
_check_null(f);{void*_T5E=_T1C->hd;struct _fat_ptr*_T5F;{struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct*_T60=(struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct*)_T5E;_T5F=_T60->f1;}{struct _fat_ptr*fn=_T5F;
Cyc_add_target(fn);goto _LL57;}_LL57:;}
# 947
return;}case 0:
# 949
 return;case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T56;_T5A=_T5E->f2;}{struct Cyc_List_List*x=_T5A;
# 951
_TL98: if(x!=0)goto _TL96;else{goto _TL97;}
_TL96: _T1D=x;_T1E=_T1D->hd;{struct _tuple18*_T5E=(struct _tuple18*)_T1E;struct Cyc_Absyn_Exp*_T5F;{struct _tuple18 _T60=*_T5E;_T5F=_T60.f1;}{struct Cyc_Absyn_Exp*e1=_T5F;
Cyc_scan_exp(e1,dep);}}_T1F=x;
# 951
x=_T1F->tl;goto _TL98;_TL97:
# 955
 return;}case 39:
 return;case 2: _T20=Cyc_stderr;_T21=
# 958
_tag_fat("Error: unexpected Pragma_e\n",sizeof(char),28U);_T22=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T20,_T21,_T22);
exit(1);return;case 34: _T23=Cyc_stderr;_T24=
# 961
_tag_fat("Error: unexpected Swap_e\n",sizeof(char),26U);_T25=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T23,_T24,_T25);
exit(1);return;case 36: _T26=Cyc_stderr;_T27=
# 964
_tag_fat("Error: unexpected Stmt_e\n",sizeof(char),26U);_T28=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T26,_T27,_T28);
exit(1);return;case 41: _T29=Cyc_stderr;_T2A=
# 967
_tag_fat("Error: unexpected Assert_e\n",sizeof(char),28U);_T2B=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T29,_T2A,_T2B);
exit(1);return;case 42: _T2C=Cyc_stderr;_T2D=
# 970
_tag_fat("Error: unexpected Assert_false_e\n",sizeof(char),34U);_T2E=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2C,_T2D,_T2E);
exit(1);return;case 11: _T2F=Cyc_stderr;_T30=
# 973
_tag_fat("Error: unexpected Throw_e\n",sizeof(char),27U);_T31=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2F,_T30,_T31);
exit(1);return;case 12: _T32=Cyc_stderr;_T33=
# 976
_tag_fat("Error: unexpected NoInstantiate_e\n",sizeof(char),35U);_T34=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T32,_T33,_T34);
exit(1);return;case 13: _T35=Cyc_stderr;_T36=
# 979
_tag_fat("Error: unexpected Instantiate_e\n",sizeof(char),33U);_T37=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T35,_T36,_T37);
exit(1);return;case 16: _T38=Cyc_stderr;_T39=
# 982
_tag_fat("Error: unexpected New_e\n",sizeof(char),25U);_T3A=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T38,_T39,_T3A);
exit(1);return;case 24: _T3B=Cyc_stderr;_T3C=
# 985
_tag_fat("Error: unexpected CompoundLit_e\n",sizeof(char),33U);_T3D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3B,_T3C,_T3D);
exit(1);return;case 25: _T3E=Cyc_stderr;_T3F=
# 988
_tag_fat("Error: unexpected Array_e\n",sizeof(char),27U);_T40=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3E,_T3F,_T40);
exit(1);return;case 26: _T41=Cyc_stderr;_T42=
# 991
_tag_fat("Error: unexpected Comprehension_e\n",sizeof(char),35U);_T43=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T41,_T42,_T43);
exit(1);return;case 27: _T44=Cyc_stderr;_T45=
# 994
_tag_fat("Error: unexpected ComprehensionNoinit_e\n",sizeof(char),41U);_T46=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T44,_T45,_T46);
exit(1);return;case 28: _T47=Cyc_stderr;_T48=
# 997
_tag_fat("Error: unexpected Aggregate_e\n",sizeof(char),31U);_T49=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T47,_T48,_T49);
exit(1);return;case 29: _T4A=Cyc_stderr;_T4B=
# 1000
_tag_fat("Error: unexpected AnonStruct_e\n",sizeof(char),32U);_T4C=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T4A,_T4B,_T4C);
exit(1);return;case 30: _T4D=Cyc_stderr;_T4E=
# 1003
_tag_fat("Error: unexpected Datatype_e\n",sizeof(char),30U);_T4F=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T4D,_T4E,_T4F);
exit(1);return;case 31: _T50=Cyc_stderr;_T51=
# 1006
_tag_fat("Error: unexpected Enum_e\n",sizeof(char),26U);_T52=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T50,_T51,_T52);
exit(1);return;default: _T53=Cyc_stderr;_T54=
# 1009
_tag_fat("Error: unexpected AnonEnum_e\n",sizeof(char),30U);_T55=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T53,_T54,_T55);
exit(1);return;};}}
# 1014
void Cyc_scan_exp_opt(struct Cyc_Absyn_Exp*eo,struct Cyc_Hashtable_Table*dep){struct Cyc_Absyn_Exp*_T0;unsigned _T1;_T0=eo;_T1=(unsigned)_T0;
if(!_T1)goto _TL99;Cyc_scan_exp(eo,dep);goto _TL9A;_TL99: _TL9A:
 return;}
# 1019
void Cyc_scan_decl(struct Cyc_Absyn_Decl*,struct Cyc_Hashtable_Table*);
void Cyc_scan_type(void*t,struct Cyc_Hashtable_Table*dep){void*_T0;int*_T1;unsigned _T2;void*_T3;void*_T4;void*_T5;int*_T6;unsigned _T7;void*_T8;struct _tuple1*_T9;void*_TA;struct _tuple1*_TB;struct Cyc_String_pa_PrintArg_struct _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;void*_T10;struct Cyc_Absyn_PtrInfo _T11;void*_T12;struct Cyc_Hashtable_Table*_T13;void*_T14;struct Cyc_Absyn_ArrayInfo _T15;struct Cyc_Absyn_ArrayInfo _T16;struct Cyc_Absyn_ArrayInfo _T17;void*_T18;void*_T19;struct Cyc_Absyn_FnInfo _T1A;void*_T1B;struct Cyc_Hashtable_Table*_T1C;struct Cyc_Absyn_FnInfo _T1D;struct Cyc_List_List*_T1E;void*_T1F;struct Cyc_List_List*_T20;struct Cyc_Absyn_FnInfo _T21;struct Cyc_Absyn_VarargInfo*_T22;struct Cyc_Absyn_FnInfo _T23;struct Cyc_Absyn_VarargInfo*_T24;void*_T25;struct Cyc_Hashtable_Table*_T26;void*_T27;struct Cyc_List_List*_T28;void*_T29;struct Cyc_Absyn_Aggrfield*_T2A;void*_T2B;struct Cyc_Hashtable_Table*_T2C;struct Cyc_List_List*_T2D;void*_T2E;struct Cyc_Absyn_Aggrfield*_T2F;struct Cyc_Absyn_Exp*_T30;struct Cyc_Hashtable_Table*_T31;struct Cyc_List_List*_T32;void*_T33;struct _tuple1*_T34;void*_T35;struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T36;struct Cyc_Absyn_TypeDecl*_T37;struct Cyc_Absyn_TypeDecl*_T38;void*_T39;int*_T3A;unsigned _T3B;void*_T3C;struct Cyc_Absyn_TypeDecl*_T3D;void*_T3E;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T3F;void*_T40;struct Cyc_Absyn_Decl*_T41;struct Cyc_Hashtable_Table*_T42;struct Cyc_Absyn_Aggrdecl*_T43;void*_T44;struct Cyc_Absyn_TypeDecl*_T45;void*_T46;struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T47;void*_T48;struct Cyc_Absyn_Decl*_T49;struct Cyc_Hashtable_Table*_T4A;struct Cyc_Absyn_Enumdecl*_T4B;void*_T4C;struct Cyc_Absyn_TypeDecl*_T4D;void*_T4E;struct Cyc___cycFILE*_T4F;struct _fat_ptr _T50;struct _fat_ptr _T51;struct Cyc___cycFILE*_T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct Cyc___cycFILE*_T55;struct _fat_ptr _T56;struct _fat_ptr _T57;struct Cyc___cycFILE*_T58;struct _fat_ptr _T59;struct _fat_ptr _T5A;struct Cyc___cycFILE*_T5B;struct _fat_ptr _T5C;struct _fat_ptr _T5D;struct Cyc___cycFILE*_T5E;struct _fat_ptr _T5F;struct _fat_ptr _T60;struct Cyc_Absyn_Datatypedecl*_T61;struct Cyc_Absyn_Enumdecl*_T62;struct Cyc_Absyn_Aggrdecl*_T63;struct _fat_ptr*_T64;struct Cyc_List_List*_T65;struct Cyc_Absyn_FnInfo _T66;struct Cyc_Absyn_Exp*_T67;struct Cyc_Absyn_PtrInfo _T68;void*_T69;void*_T6A;_T0=t;_T1=(int*)_T0;_T2=*_T1;switch(_T2){case 0: _T3=t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;_T4=_T6B->f1;_T6A=(void*)_T4;_T69=_T6B->f2;}{void*c=_T6A;struct Cyc_List_List*ts=_T69;struct _fat_ptr*_T6B;union Cyc_Absyn_AggrInfo _T6C;_T5=c;_T6=(int*)_T5;_T7=*_T6;switch(_T7){case 0: goto _LL23;case 1: _LL23: goto _LL25;case 21: _LL25: goto _LL27;case 2: _LL27: goto _LL29;case 3: _LL29: goto _LL2B;case 20: _LL2B:
# 1030
 return;case 24: _T8=c;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T6D=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T8;_T6C=_T6D->f1;}{union Cyc_Absyn_AggrInfo info=_T6C;
# 1032
struct _tuple12 _T6D=Cyc_Absyn_aggr_kinded_name(info);struct _fat_ptr*_T6E;_T9=_T6D.f1;{struct _tuple1 _T6F=*_T9;_T6E=_T6F.f1;}{struct _fat_ptr*v=_T6E;_T6B=v;goto _LL2F;}}case 19: _TA=c;{struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T6D=(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_TA;_TB=_T6D->f1;{struct _tuple1 _T6E=*_TB;_T6B=_T6E.f1;}}_LL2F: {struct _fat_ptr*v=_T6B;
# 1034
Cyc_add_target(v);return;}case 22: goto _LL33;case 23: _LL33: goto _LL35;case 4: _LL35: goto _LL37;case 6: _LL37: goto _LL39;case 7: _LL39: goto _LL3B;case 8: _LL3B: goto _LL3D;case 9: _LL3D: goto _LL3F;case 10: _LL3F: goto _LL41;case 5: _LL41: goto _LL43;case 11: _LL43: goto _LL45;case 12: _LL45: goto _LL47;case 13: _LL47: goto _LL49;case 14: _LL49: goto _LL4B;case 15: _LL4B: goto _LL4D;case 16: _LL4D: goto _LL4F;case 18: _LL4F: goto _LL51;default: _LL51:{struct Cyc_String_pa_PrintArg_struct _T6D;_T6D.tag=0;
# 1044
_T6D.f1=Cyc_Absynpp_typ2string(t);_TC=_T6D;}{struct Cyc_String_pa_PrintArg_struct _T6D=_TC;void*_T6E[1];_T6E[0]=& _T6D;_TD=Cyc_stderr;_TE=_tag_fat("Error: unexpected %s\n",sizeof(char),22U);_TF=_tag_fat(_T6E,sizeof(void*),1);Cyc_fprintf(_TD,_TE,_TF);}
exit(1);return;};}case 4: _T10=t;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T10;_T68=_T6B->f1;}{struct Cyc_Absyn_PtrInfo x=_T68;_T11=x;_T12=_T11.elt_type;_T13=dep;
# 1049
Cyc_scan_type(_T12,_T13);
return;}case 5: _T14=t;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T14;_T15=_T6B->f1;_T6A=_T15.elt_type;_T16=_T6B->f1;_T67=_T16.num_elts;_T17=_T6B->f1;_T69=_T17.zero_term;}{void*t=_T6A;struct Cyc_Absyn_Exp*sz=_T67;void*zt=_T69;
# 1052
Cyc_scan_type(t,dep);
Cyc_scan_exp_opt(sz,dep);
return;}case 11: _T18=t;{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_T18;_T67=_T6B->f1;}{struct Cyc_Absyn_Exp*e=_T67;
# 1056
Cyc_scan_exp(e,dep);
return;}case 6: _T19=t;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T19;_T66=_T6B->f1;}{struct Cyc_Absyn_FnInfo x=_T66;_T1A=x;_T1B=_T1A.ret_type;_T1C=dep;
# 1059
Cyc_scan_type(_T1B,_T1C);_T1D=x;{
struct Cyc_List_List*a=_T1D.args;_TLA0: if(a!=0)goto _TL9E;else{goto _TL9F;}
_TL9E: _T1E=a;_T1F=_T1E->hd;{struct _tuple9*_T6B=(struct _tuple9*)_T1F;void*_T6C;{struct _tuple9 _T6D=*_T6B;_T6C=_T6D.f2;}{void*argt=_T6C;
Cyc_scan_type(argt,dep);}}_T20=a;
# 1060
a=_T20->tl;goto _TLA0;_TL9F:;}_T21=x;_T22=_T21.cyc_varargs;
# 1064
if(_T22==0)goto _TLA1;_T23=x;_T24=_T23.cyc_varargs;_T25=_T24->type;_T26=dep;
Cyc_scan_type(_T25,_T26);goto _TLA2;_TLA1: _TLA2:
 return;}case 7: _T27=t;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T27;_T65=_T6B->f3;}{struct Cyc_List_List*sfs=_T65;
# 1068
_TLA6: if(sfs!=0)goto _TLA4;else{goto _TLA5;}
_TLA4: _T28=sfs;_T29=_T28->hd;_T2A=(struct Cyc_Absyn_Aggrfield*)_T29;_T2B=_T2A->type;_T2C=dep;Cyc_scan_type(_T2B,_T2C);_T2D=sfs;_T2E=_T2D->hd;_T2F=(struct Cyc_Absyn_Aggrfield*)_T2E;_T30=_T2F->width;_T31=dep;
Cyc_scan_exp_opt(_T30,_T31);_T32=sfs;
# 1068
sfs=_T32->tl;goto _TLA6;_TLA5:
# 1072
 return;}case 8: _T33=t;{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T33;_T34=_T6B->f1;{struct _tuple1 _T6C=*_T34;_T64=_T6C.f1;}}{struct _fat_ptr*v=_T64;
# 1074
Cyc_add_target(v);
return;}case 10: _T35=t;_T36=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T35;_T37=_T36->f1;_T38=(struct Cyc_Absyn_TypeDecl*)_T37;_T39=_T38->r;_T3A=(int*)_T39;_T3B=*_T3A;switch(_T3B){case 0: _T3C=t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T3C;_T3D=_T6B->f1;{struct Cyc_Absyn_TypeDecl _T6C=*_T3D;_T3E=_T6C.r;{struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_T6D=(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*)_T3E;_T63=_T6D->f1;}}}{struct Cyc_Absyn_Aggrdecl*x=_T63;{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T6B=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T6B->tag=5;
# 1078
_T6B->f1=x;_T3F=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T6B;}_T40=(void*)_T3F;_T41=Cyc_Absyn_new_decl(_T40,0U);_T42=dep;Cyc_scan_decl(_T41,_T42);_T43=x;{
struct _tuple1*_T6B=_T43->name;struct _fat_ptr*_T6C;{struct _tuple1 _T6D=*_T6B;_T6C=_T6D.f1;}{struct _fat_ptr*n=_T6C;
Cyc_add_target(n);
return;}}}case 1: _T44=t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T44;_T45=_T6B->f1;{struct Cyc_Absyn_TypeDecl _T6C=*_T45;_T46=_T6C.r;{struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*_T6D=(struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*)_T46;_T62=_T6D->f1;}}}{struct Cyc_Absyn_Enumdecl*x=_T62;{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T6B=_cycalloc(sizeof(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct));_T6B->tag=7;
# 1084
_T6B->f1=x;_T47=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T6B;}_T48=(void*)_T47;_T49=Cyc_Absyn_new_decl(_T48,0U);_T4A=dep;Cyc_scan_decl(_T49,_T4A);_T4B=x;{
struct _tuple1*_T6B=_T4B->name;struct _fat_ptr*_T6C;{struct _tuple1 _T6D=*_T6B;_T6C=_T6D.f1;}{struct _fat_ptr*n=_T6C;
Cyc_add_target(n);
return;}}}default: _T4C=t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T4C;_T4D=_T6B->f1;{struct Cyc_Absyn_TypeDecl _T6C=*_T4D;_T4E=_T6C.r;{struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_T6D=(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*)_T4E;_T61=_T6D->f1;}}}{struct Cyc_Absyn_Datatypedecl*dd=_T61;_T4F=Cyc_stderr;_T50=
# 1090
_tag_fat("Error: unexpected Datatype declaration\n",sizeof(char),40U);_T51=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T4F,_T50,_T51);
exit(1);return;}};case 12: _T52=Cyc_stderr;_T53=
# 1093
_tag_fat("Error: unexpected @subset type\n",sizeof(char),32U);_T54=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T52,_T53,_T54);
exit(1);return;case 3: _T55=Cyc_stderr;_T56=
# 1096
_tag_fat("Error: unexpected Cvar\n",sizeof(char),24U);_T57=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T55,_T56,_T57);
exit(1);return;case 1: _T58=Cyc_stderr;_T59=
# 1099
_tag_fat("Error: unexpected Evar\n",sizeof(char),24U);_T5A=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T58,_T59,_T5A);
exit(1);return;case 2: _T5B=Cyc_stderr;_T5C=
# 1102
_tag_fat("Error: unexpected VarType\n",sizeof(char),27U);_T5D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5B,_T5C,_T5D);
exit(1);return;default: _T5E=Cyc_stderr;_T5F=
# 1105
_tag_fat("Error: unexpected valueof_t\n",sizeof(char),29U);_T60=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5E,_T5F,_T60);
exit(1);return;};}
# 1110
void Cyc_scan_decl(struct Cyc_Absyn_Decl*d,struct Cyc_Hashtable_Table*dep){struct Cyc_Set_Set**_T0;struct Cyc_Set_Set*(*_T1)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T2)(int(*)(void*,void*));int(*_T3)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Absyn_Decl*_T4;int*_T5;unsigned _T6;struct Cyc_Absyn_Vardecl*_T7;struct Cyc_Absyn_Vardecl*_T8;void*_T9;struct Cyc_Hashtable_Table*_TA;struct Cyc_Absyn_Vardecl*_TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_Hashtable_Table*_TD;struct Cyc_Absyn_Fndecl*_TE;struct Cyc_Absyn_Fndecl*_TF;struct Cyc_Absyn_FnInfo _T10;void*_T11;struct Cyc_Hashtable_Table*_T12;struct Cyc_Absyn_Fndecl*_T13;struct Cyc_Absyn_FnInfo _T14;struct Cyc_List_List*_T15;void*_T16;struct Cyc_List_List*_T17;struct Cyc_Absyn_Fndecl*_T18;struct Cyc_Absyn_FnInfo _T19;struct Cyc_Absyn_VarargInfo*_T1A;struct Cyc_Absyn_Fndecl*_T1B;struct Cyc_Absyn_FnInfo _T1C;struct Cyc_Absyn_VarargInfo*_T1D;void*_T1E;struct Cyc_Hashtable_Table*_T1F;struct Cyc_Absyn_Fndecl*_T20;int _T21;struct Cyc_String_pa_PrintArg_struct _T22;struct _fat_ptr*_T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct Cyc_Absyn_Aggrdecl*_T26;struct Cyc_Absyn_Aggrdecl*_T27;struct Cyc_Absyn_AggrdeclImpl*_T28;unsigned _T29;struct Cyc_Absyn_Aggrdecl*_T2A;struct Cyc_Absyn_AggrdeclImpl*_T2B;struct Cyc_List_List*_T2C;void*_T2D;struct Cyc_Absyn_Aggrfield*_T2E;void*_T2F;struct Cyc_Hashtable_Table*_T30;struct Cyc_Absyn_Aggrfield*_T31;struct Cyc_Absyn_Exp*_T32;struct Cyc_Hashtable_Table*_T33;struct Cyc_List_List*_T34;struct Cyc_Absyn_Aggrdecl*_T35;struct Cyc_Absyn_AggrdeclImpl*_T36;struct Cyc_Absyn_AggrdeclImpl*_T37;struct Cyc_List_List*_T38;struct Cyc_Absyn_Enumdecl*_T39;struct Cyc_Absyn_Enumdecl*_T3A;struct Cyc_Core_Opt*_T3B;unsigned _T3C;struct Cyc_Absyn_Enumdecl*_T3D;struct Cyc_Core_Opt*_T3E;void*_T3F;struct Cyc_List_List*_T40;void*_T41;struct Cyc_Absyn_Enumfield*_T42;struct Cyc_Absyn_Exp*_T43;struct Cyc_Hashtable_Table*_T44;struct Cyc_List_List*_T45;struct Cyc_Absyn_Enumdecl*_T46;struct Cyc_Core_Opt*_T47;struct Cyc_Core_Opt*_T48;void*_T49;struct Cyc_List_List*_T4A;struct Cyc_Absyn_Typedefdecl*_T4B;struct Cyc_Absyn_Typedefdecl*_T4C;void*_T4D;unsigned _T4E;struct Cyc_Absyn_Typedefdecl*_T4F;void*_T50;struct Cyc_Hashtable_Table*_T51;struct Cyc___cycFILE*_T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct Cyc___cycFILE*_T55;struct _fat_ptr _T56;struct _fat_ptr _T57;struct Cyc___cycFILE*_T58;struct _fat_ptr _T59;struct _fat_ptr _T5A;struct Cyc___cycFILE*_T5B;struct _fat_ptr _T5C;struct _fat_ptr _T5D;struct Cyc___cycFILE*_T5E;struct _fat_ptr _T5F;struct _fat_ptr _T60;struct Cyc___cycFILE*_T61;struct _fat_ptr _T62;struct _fat_ptr _T63;struct Cyc___cycFILE*_T64;struct _fat_ptr _T65;struct _fat_ptr _T66;struct Cyc___cycFILE*_T67;struct _fat_ptr _T68;struct _fat_ptr _T69;struct Cyc___cycFILE*_T6A;struct _fat_ptr _T6B;struct _fat_ptr _T6C;struct Cyc___cycFILE*_T6D;struct _fat_ptr _T6E;struct _fat_ptr _T6F;struct Cyc___cycFILE*_T70;struct _fat_ptr _T71;struct _fat_ptr _T72;struct Cyc___cycFILE*_T73;struct _fat_ptr _T74;struct _fat_ptr _T75;struct _handler_cons*_T76;int _T77;struct Cyc_Set_Set*(*_T78)(struct Cyc_Hashtable_Table*,struct _fat_ptr*);void*(*_T79)(struct Cyc_Hashtable_Table*,void*);void*_T7A;struct Cyc_Core_Not_found_exn_struct*_T7B;char*_T7C;char*_T7D;struct Cyc_Set_Set*(*_T7E)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T7F)(int(*)(void*,void*));int(*_T80)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Set_Set**_T81;struct Cyc_Set_Set*_T82;struct Cyc_Set_Set*_T83;void(*_T84)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*);void(*_T85)(struct Cyc_Hashtable_Table*,void*,void*);
struct Cyc_Set_Set**saved_targets=Cyc_current_targets;
struct _fat_ptr*saved_source=Cyc_current_source;{struct Cyc_Set_Set**_T86=_cycalloc(sizeof(struct Cyc_Set_Set*));_T2=Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T87)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T2;_T1=_T87;}_T3=Cyc_strptrcmp;*_T86=_T1(_T3);_T0=(struct Cyc_Set_Set**)_T86;}Cyc_current_targets=_T0;_T4=d;{
void*_T86=_T4->r;struct Cyc_Absyn_Typedefdecl*_T87;struct Cyc_Absyn_Enumdecl*_T88;struct Cyc_Absyn_Aggrdecl*_T89;struct Cyc_Absyn_Fndecl*_T8A;struct Cyc_Absyn_Vardecl*_T8B;_T5=(int*)_T86;_T6=*_T5;switch(_T6){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T86;_T8B=_T8C->f1;}{struct Cyc_Absyn_Vardecl*x=_T8B;_T7=x;{
# 1116
struct _tuple1*_T8C=_T7->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D=_T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source=v;_T8=x;_T9=_T8->type;_TA=dep;
Cyc_scan_type(_T9,_TA);_TB=x;_TC=_TB->initializer;_TD=dep;
Cyc_scan_exp_opt(_TC,_TD);goto _LL0;}}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T86;_T8A=_T8C->f1;}{struct Cyc_Absyn_Fndecl*x=_T8A;_TE=x;{
# 1122
struct _tuple1*_T8C=_TE->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D=_T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source=v;_TF=x;_T10=_TF->i;_T11=_T10.ret_type;_T12=dep;
Cyc_scan_type(_T11,_T12);_T13=x;_T14=_T13->i;{
struct Cyc_List_List*a=_T14.args;_TLAC: if(a!=0)goto _TLAA;else{goto _TLAB;}
_TLAA: _T15=a;_T16=_T15->hd;{struct _tuple9*_T8E=(struct _tuple9*)_T16;void*_T8F;{struct _tuple9 _T90=*_T8E;_T8F=_T90.f2;}{void*t1=_T8F;
Cyc_scan_type(t1,dep);}}_T17=a;
# 1125
a=_T17->tl;goto _TLAC;_TLAB:;}_T18=x;_T19=_T18->i;_T1A=_T19.cyc_varargs;
# 1129
if(_T1A==0)goto _TLAD;_T1B=x;_T1C=_T1B->i;_T1D=_T1C.cyc_varargs;_T1E=_T1D->type;_T1F=dep;
Cyc_scan_type(_T1E,_T1F);goto _TLAE;_TLAD: _TLAE: _T20=x;_T21=_T20->is_inline;
if(!_T21)goto _TLAF;{struct Cyc_String_pa_PrintArg_struct _T8E;_T8E.tag=0;_T23=v;
_T8E.f1=*_T23;_T22=_T8E;}{struct Cyc_String_pa_PrintArg_struct _T8E=_T22;void*_T8F[1];_T8F[0]=& _T8E;_T24=_tag_fat("Warning: ignoring inline function %s\n",sizeof(char),38U);_T25=_tag_fat(_T8F,sizeof(void*),1);Cyc_log(_T24,_T25);}goto _TLB0;_TLAF: _TLB0: goto _LL0;}}}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T86;_T89=_T8C->f1;}{struct Cyc_Absyn_Aggrdecl*x=_T89;_T26=x;{
# 1135
struct _tuple1*_T8C=_T26->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D=_T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source=v;_T27=x;_T28=_T27->impl;_T29=(unsigned)_T28;
if(!_T29)goto _TLB1;_T2A=x;_T2B=_T2A->impl;{
struct Cyc_List_List*fs=_T2B->fields;_TLB6: if(fs!=0)goto _TLB4;else{goto _TLB5;}
_TLB4: _T2C=fs;_T2D=_T2C->hd;{struct Cyc_Absyn_Aggrfield*f=(struct Cyc_Absyn_Aggrfield*)_T2D;_T2E=f;_T2F=_T2E->type;_T30=dep;
Cyc_scan_type(_T2F,_T30);_T31=f;_T32=_T31->width;_T33=dep;
Cyc_scan_exp_opt(_T32,_T33);}_T34=fs;
# 1138
fs=_T34->tl;goto _TLB6;_TLB5:;}_T35=x;_T36=_T35->impl;_T37=
# 1145
_check_null(_T36);{struct Cyc_List_List*fs=_T37->fields;_TLBA: if(fs!=0)goto _TLB8;else{goto _TLB9;}_TLB8: _T38=fs;fs=_T38->tl;goto _TLBA;_TLB9:;}goto _TLB2;_TLB1: _TLB2: goto _LL0;}}}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T86;_T88=_T8C->f1;}{struct Cyc_Absyn_Enumdecl*x=_T88;_T39=x;{
# 1151
struct _tuple1*_T8C=_T39->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D=_T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source=v;_T3A=x;_T3B=_T3A->fields;_T3C=(unsigned)_T3B;
if(!_T3C)goto _TLBB;_T3D=x;_T3E=_T3D->fields;_T3F=_T3E->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T3F;_TLC0: if(fs!=0)goto _TLBE;else{goto _TLBF;}
_TLBE: _T40=fs;_T41=_T40->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T41;_T42=f;_T43=_T42->tag;_T44=dep;
Cyc_scan_exp_opt(_T43,_T44);}_T45=fs;
# 1154
fs=_T45->tl;goto _TLC0;_TLBF:;}_T46=x;_T47=_T46->fields;_T48=
# 1160
_check_null(_T47);_T49=_T48->v;{struct Cyc_List_List*fs=(struct Cyc_List_List*)_T49;_TLC4: if(fs!=0)goto _TLC2;else{goto _TLC3;}_TLC2: _T4A=fs;fs=_T4A->tl;goto _TLC4;_TLC3:;}goto _TLBC;_TLBB: _TLBC: goto _LL0;}}}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T86;_T87=_T8C->f1;}{struct Cyc_Absyn_Typedefdecl*x=_T87;_T4B=x;{
# 1166
struct _tuple1*_T8C=_T4B->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D=_T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source=v;_T4C=x;_T4D=_T4C->defn;_T4E=(unsigned)_T4D;
if(!_T4E)goto _TLC5;_T4F=x;_T50=_T4F->defn;_T51=dep;
Cyc_scan_type(_T50,_T51);goto _TLC6;_TLC5: _TLC6: goto _LL0;}}}case 4: _T52=Cyc_stderr;_T53=
# 1172
_tag_fat("Error: unexpected region declaration",sizeof(char),37U);_T54=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T52,_T53,_T54);
exit(1);case 13: _T55=Cyc_stderr;_T56=
# 1175
_tag_fat("Error: unexpected __cyclone_port_on__",sizeof(char),38U);_T57=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T55,_T56,_T57);
exit(1);case 14: _T58=Cyc_stderr;_T59=
# 1178
_tag_fat("Error: unexpected __cyclone_port_off__",sizeof(char),39U);_T5A=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T58,_T59,_T5A);
exit(1);case 15: _T5B=Cyc_stderr;_T5C=
# 1181
_tag_fat("Error: unexpected __tempest_on__",sizeof(char),33U);_T5D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5B,_T5C,_T5D);
exit(1);case 16: _T5E=Cyc_stderr;_T5F=
# 1184
_tag_fat("Error: unexpected __tempest_off__",sizeof(char),34U);_T60=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5E,_T5F,_T60);
exit(1);case 2: _T61=Cyc_stderr;_T62=
# 1187
_tag_fat("Error: unexpected let declaration\n",sizeof(char),35U);_T63=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T61,_T62,_T63);
exit(1);case 6: _T64=Cyc_stderr;_T65=
# 1190
_tag_fat("Error: unexpected datatype declaration\n",sizeof(char),40U);_T66=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T64,_T65,_T66);
exit(1);case 3: _T67=Cyc_stderr;_T68=
# 1193
_tag_fat("Error: unexpected let declaration\n",sizeof(char),35U);_T69=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T67,_T68,_T69);
exit(1);case 9: _T6A=Cyc_stderr;_T6B=
# 1196
_tag_fat("Error: unexpected namespace declaration\n",sizeof(char),41U);_T6C=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T6A,_T6B,_T6C);
exit(1);case 10: _T6D=Cyc_stderr;_T6E=
# 1199
_tag_fat("Error: unexpected using declaration\n",sizeof(char),37U);_T6F=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T6D,_T6E,_T6F);
exit(1);case 11: _T70=Cyc_stderr;_T71=
# 1202
_tag_fat("Error: unexpected extern \"C\" declaration\n",sizeof(char),42U);_T72=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T70,_T71,_T72);
exit(1);default: _T73=Cyc_stderr;_T74=
# 1205
_tag_fat("Error: unexpected extern \"C include\" declaration\n",sizeof(char),50U);_T75=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T73,_T74,_T75);
exit(1);}_LL0:;}{
# 1213
struct Cyc_Set_Set*old;
struct _fat_ptr*name=_check_null(Cyc_current_source);{struct _handler_cons _T86;_T76=& _T86;_push_handler(_T76);{int _T87=0;_T77=setjmp(_T86.handler);if(!_T77)goto _TLC7;_T87=1;goto _TLC8;_TLC7: _TLC8: if(_T87)goto _TLC9;else{goto _TLCB;}_TLCB: _T79=Cyc_Hashtable_lookup;{
# 1216
struct Cyc_Set_Set*(*_T88)(struct Cyc_Hashtable_Table*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Hashtable_Table*,struct _fat_ptr*))_T79;_T78=_T88;}old=_T78(dep,name);_pop_handler();goto _TLCA;_TLC9: _T7A=Cyc_Core_get_exn_thrown();{void*_T88=(void*)_T7A;void*_T89;_T7B=(struct Cyc_Core_Not_found_exn_struct*)_T88;_T7C=_T7B->tag;_T7D=Cyc_Core_Not_found;if(_T7C!=_T7D)goto _TLCC;_T7F=Cyc_Set_empty;{
# 1218
struct Cyc_Set_Set*(*_T8A)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T7F;_T7E=_T8A;}_T80=Cyc_strptrcmp;old=_T7E(_T80);goto _LL35;_TLCC: _T89=_T88;{void*exn=_T89;_rethrow(exn);}_LL35:;}_TLCA:;}}_T81=
# 1220
_check_null(Cyc_current_targets);_T82=*_T81;_T83=old;{struct Cyc_Set_Set*targets=Cyc_Set_union_two(_T82,_T83);_T85=Cyc_Hashtable_insert;{
void(*_T86)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*)=(void(*)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*))_T85;_T84=_T86;}_T84(dep,name,targets);
# 1223
Cyc_current_targets=saved_targets;
Cyc_current_source=saved_source;}}}
# 1227
struct Cyc_Hashtable_Table*Cyc_new_deps (void){struct Cyc_Hashtable_Table*(*_T0)(int,int(*)(struct _fat_ptr*,struct _fat_ptr*),int(*)(struct _fat_ptr*));struct Cyc_Hashtable_Table*(*_T1)(int,int(*)(void*,void*),int(*)(void*));int(*_T2)(struct _fat_ptr*,struct _fat_ptr*);int(*_T3)(struct _fat_ptr*);struct Cyc_Hashtable_Table*_T4;_T1=Cyc_Hashtable_create;{
struct Cyc_Hashtable_Table*(*_T5)(int,int(*)(struct _fat_ptr*,struct _fat_ptr*),int(*)(struct _fat_ptr*))=(struct Cyc_Hashtable_Table*(*)(int,int(*)(struct _fat_ptr*,struct _fat_ptr*),int(*)(struct _fat_ptr*)))_T1;_T0=_T5;}_T2=Cyc_strptrcmp;_T3=Cyc_Hashtable_hash_stringptr;_T4=_T0(107,_T2,_T3);return _T4;}
# 1231
struct Cyc_Set_Set*Cyc_find(struct Cyc_Hashtable_Table*t,struct _fat_ptr*x){struct _handler_cons*_T0;int _T1;struct Cyc_Set_Set*(*_T2)(struct Cyc_Hashtable_Table*,struct _fat_ptr*);void*(*_T3)(struct Cyc_Hashtable_Table*,void*);void*_T4;struct Cyc_Core_Not_found_exn_struct*_T5;char*_T6;char*_T7;struct Cyc_Set_Set*(*_T8)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T9)(int(*)(void*,void*));int(*_TA)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Set_Set*_TB;struct _handler_cons _TC;_T0=& _TC;_push_handler(_T0);{int _TD=0;_T1=setjmp(_TC.handler);if(!_T1)goto _TLCE;_TD=1;goto _TLCF;_TLCE: _TLCF: if(_TD)goto _TLD0;else{goto _TLD2;}_TLD2: _T3=Cyc_Hashtable_lookup;{
struct Cyc_Set_Set*(*_TE)(struct Cyc_Hashtable_Table*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Hashtable_Table*,struct _fat_ptr*))_T3;_T2=_TE;}{struct Cyc_Set_Set*_TE=_T2(t,x);_npop_handler(0);return _TE;}_pop_handler();goto _TLD1;_TLD0: _T4=Cyc_Core_get_exn_thrown();{void*_TE=(void*)_T4;void*_TF;_T5=(struct Cyc_Core_Not_found_exn_struct*)_TE;_T6=_T5->tag;_T7=Cyc_Core_Not_found;if(_T6!=_T7)goto _TLD3;_T9=Cyc_Set_empty;{
# 1234
struct Cyc_Set_Set*(*_T10)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T9;_T8=_T10;}_TA=Cyc_strptrcmp;_TB=_T8(_TA);return _TB;_TLD3: _TF=_TE;{void*exn=_TF;_rethrow(exn);};}_TLD1:;}}
# 1238
struct Cyc_Set_Set*Cyc_reachable(struct Cyc_List_List*init,struct Cyc_Hashtable_Table*t){struct Cyc_Set_Set*(*_T0)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T1)(int(*)(void*,void*));int(*_T2)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T3)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T4)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T5;struct Cyc_List_List*_T6;void*_T7;struct _fat_ptr*_T8;struct Cyc_List_List*_T9;struct _fat_ptr*_TA;int _TB;int(*_TC)(struct Cyc_Iter_Iter,struct _fat_ptr**);int(*_TD)(struct Cyc_Iter_Iter,void*);struct Cyc_Iter_Iter _TE;struct _fat_ptr**_TF;int _T10;struct Cyc_Set_Set*_T11;struct Cyc_Set_Set*_T12;struct Cyc_Set_Set*_T13;_T1=Cyc_Set_empty;{
# 1248 "buildlib.cyl"
struct Cyc_Set_Set*(*_T14)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T1;_T0=_T14;}_T2=Cyc_strptrcmp;{struct Cyc_Set_Set*emptyset=_T0(_T2);
struct Cyc_Set_Set*curr;
curr=emptyset;_TLD8: if(init!=0)goto _TLD6;else{goto _TLD7;}
_TLD6: _T4=Cyc_Set_insert;{struct Cyc_Set_Set*(*_T14)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T4;_T3=_T14;}_T5=curr;_T6=init;_T7=_T6->hd;_T8=(struct _fat_ptr*)_T7;curr=_T3(_T5,_T8);_T9=init;
# 1250
init=_T9->tl;goto _TLD8;_TLD7: {
# 1253
struct Cyc_Set_Set*delta=curr;
# 1255
struct _fat_ptr*sptr;sptr=_cycalloc(sizeof(struct _fat_ptr));_TA=sptr;*_TA=_tag_fat("",sizeof(char),1U);
_TLD9: _TB=Cyc_Set_cardinality(delta);if(_TB > 0)goto _TLDA;else{goto _TLDB;}
_TLDA:{struct Cyc_Set_Set*next=emptyset;
struct Cyc_Iter_Iter iter=Cyc_Set_make_iter(Cyc_Core_heap_region,delta);
_TLDC: _TD=Cyc_Iter_next;{int(*_T14)(struct Cyc_Iter_Iter,struct _fat_ptr**)=(int(*)(struct Cyc_Iter_Iter,struct _fat_ptr**))_TD;_TC=_T14;}_TE=iter;_TF=& sptr;_T10=_TC(_TE,_TF);if(_T10)goto _TLDD;else{goto _TLDE;}
_TLDD: _T11=next;_T12=Cyc_find(t,sptr);next=Cyc_Set_union_two(_T11,_T12);goto _TLDC;_TLDE:
 delta=Cyc_Set_diff(next,curr);
curr=Cyc_Set_union_two(curr,delta);}goto _TLD9;_TLDB: _T13=curr;
# 1264
return _T13;}}}
# 1267
enum Cyc_buildlib_mode{Cyc_NORMAL =0U,Cyc_GATHER =1U,Cyc_GATHERSCRIPT =2U,Cyc_FINISH =3U};
static enum Cyc_buildlib_mode Cyc_mode=Cyc_NORMAL;
static int Cyc_gathering (void){int _T0;enum Cyc_buildlib_mode _T1;int _T2;enum Cyc_buildlib_mode _T3;int _T4;_T1=Cyc_mode;_T2=(int)_T1;
if(_T2!=1)goto _TLDF;_T0=1;goto _TLE0;_TLDF: _T3=Cyc_mode;_T4=(int)_T3;_T0=_T4==2;_TLE0: return _T0;}
# 1273
static struct Cyc___cycFILE*Cyc_script_file=0;
int Cyc_prscript(struct _fat_ptr fmt,struct _fat_ptr ap){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;int _T3;
# 1277
if(Cyc_script_file!=0)goto _TLE1;_T0=Cyc_stderr;_T1=
_tag_fat("Internal error: script file is NULL\n",sizeof(char),37U);_T2=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);
exit(1);goto _TLE2;_TLE1: _TLE2: _T3=
# 1281
Cyc_vfprintf(Cyc_script_file,fmt,ap);return _T3;}
# 1284
int Cyc_force_directory(struct _fat_ptr d){enum Cyc_buildlib_mode _T0;int _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;unsigned char*_T7;const char*_T8;struct _fat_ptr _T9;int _TA;int _TB;struct _fat_ptr _TC;unsigned char*_TD;unsigned char*_TE;const char*_TF;int _T10;int _T11;struct Cyc_String_pa_PrintArg_struct _T12;struct Cyc___cycFILE*_T13;struct _fat_ptr _T14;struct _fat_ptr _T15;_T0=Cyc_mode;_T1=(int)_T0;
if(_T1!=2)goto _TLE3;{struct Cyc_String_pa_PrintArg_struct _T16;_T16.tag=0;
_T16.f1=d;_T2=_T16;}{struct Cyc_String_pa_PrintArg_struct _T16=_T2;{struct Cyc_String_pa_PrintArg_struct _T17;_T17.tag=0;_T17.f1=d;_T3=_T17;}{struct Cyc_String_pa_PrintArg_struct _T17=_T3;void*_T18[2];_T18[0]=& _T16;_T18[1]=& _T17;_T4=_tag_fat("if ! test -e %s; then mkdir %s; fi\n",sizeof(char),36U);_T5=_tag_fat(_T18,sizeof(void*),2);Cyc_prscript(_T4,_T5);}}goto _TLE4;
# 1291
_TLE3: _T6=d;_T7=_untag_fat_ptr_check_bound(_T6,sizeof(char),1U);_T8=(const char*)_T7;_T9=_tag_fat(0U,sizeof(unsigned short),0);{int fd=Cyc_open(_T8,0,_T9);_TA=fd;_TB=- 1;
if(_TA!=_TB)goto _TLE5;_TC=d;_TD=_untag_fat_ptr(_TC,sizeof(char),1U);_TE=_check_null(_TD);_TF=(const char*)_TE;_T10=
mkdir(_TF,448);_T11=- 1;if(_T10!=_T11)goto _TLE7;{struct Cyc_String_pa_PrintArg_struct _T16;_T16.tag=0;
_T16.f1=d;_T12=_T16;}{struct Cyc_String_pa_PrintArg_struct _T16=_T12;void*_T17[1];_T17[0]=& _T16;_T13=Cyc_stderr;_T14=_tag_fat("Error: could not create directory %s\n",sizeof(char),38U);_T15=_tag_fat(_T17,sizeof(void*),1);Cyc_fprintf(_T13,_T14,_T15);}
return 1;_TLE7: goto _TLE6;
# 1298
_TLE5: close(fd);_TLE6:;}_TLE4:
# 1300
 return 0;}
# 1303
int Cyc_force_directory_prefixes(struct _fat_ptr file){unsigned long _T0;struct Cyc_List_List*_T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;struct Cyc_List_List*_T4;void*_T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;int _T8;struct Cyc_List_List*_T9;
# 1307
struct _fat_ptr curr=Cyc_strdup(file);
# 1309
struct Cyc_List_List*x=0;
_TLE9: if(1)goto _TLEA;else{goto _TLEB;}
_TLEA: curr=Cyc_Filename_dirname(curr);_T0=
Cyc_strlen(curr);if(_T0!=0U)goto _TLEC;goto _TLEB;_TLEC:{struct Cyc_List_List*_TA=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_TB=_cycalloc(sizeof(struct _fat_ptr));_T3=curr;
*_TB=_T3;_T2=(struct _fat_ptr*)_TB;}_TA->hd=_T2;_TA->tl=x;_T1=(struct Cyc_List_List*)_TA;}x=_T1;goto _TLE9;_TLEB:
# 1316
 _TLF1: if(x!=0)goto _TLEF;else{goto _TLF0;}
_TLEF: _T4=x;_T5=_T4->hd;_T6=(struct _fat_ptr*)_T5;_T7=*_T6;_T8=Cyc_force_directory(_T7);if(!_T8)goto _TLF2;return 1;_TLF2: _T9=x;
# 1316
x=_T9->tl;goto _TLF1;_TLF0:
# 1319
 return 0;}char Cyc_NO_SUPPORT[11U]="NO_SUPPORT";struct Cyc_NO_SUPPORT_exn_struct{char*tag;struct _fat_ptr f1;};
# 1326
static int Cyc_is_other_special(char c){char _T0;int _T1;_T0=c;_T1=(int)_T0;switch(_T1){case 92: goto _LL4;case 34: _LL4: goto _LL6;case 59: _LL6: goto _LL8;case 38: _LL8: goto _LLA;case 40: _LLA: goto _LLC;case 41: _LLC: goto _LLE;case 124: _LLE: goto _LL10;case 94: _LL10: goto _LL12;case 60: _LL12: goto _LL14;case 62: _LL14: goto _LL16;case 10: _LL16: goto _LL18;case 9: _LL18:
# 1342
 return 1;default:
 return 0;};}
# 1347
static struct _fat_ptr Cyc_sh_escape_string(struct _fat_ptr s){int _T0;unsigned long _T1;unsigned long _T2;struct _fat_ptr _T3;unsigned char*_T4;const char*_T5;const char*_T6;int _T7;char _T8;int _T9;int _TA;struct _fat_ptr _TB;struct Cyc_List_List*_TC;struct _fat_ptr*_TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;struct _fat_ptr*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;unsigned long _T13;int _T14;unsigned long _T15;unsigned long _T16;int _T17;unsigned long _T18;struct _fat_ptr _T19;unsigned long _T1A;char*_T1B;unsigned _T1C;unsigned _T1D;int _T1E;unsigned long _T1F;unsigned long _T20;struct _fat_ptr _T21;unsigned char*_T22;const char*_T23;const char*_T24;int _T25;char _T26;int _T27;int _T28;struct _fat_ptr _T29;int _T2A;int _T2B;unsigned char*_T2C;char*_T2D;unsigned _T2E;unsigned char*_T2F;char*_T30;struct _fat_ptr _T31;int _T32;int _T33;unsigned char*_T34;char*_T35;unsigned _T36;unsigned char*_T37;char*_T38;struct _fat_ptr _T39;
unsigned long len=Cyc_strlen(s);
# 1351
int single_quotes=0;
int other_special=0;{
int i=0;_TLF8: _T0=i;_T1=(unsigned long)_T0;_T2=len;if(_T1 < _T2)goto _TLF6;else{goto _TLF7;}
_TLF6: _T3=s;_T4=_T3.curr;_T5=(const char*)_T4;_T6=_check_null(_T5);_T7=i;{char c=_T6[_T7];_T8=c;_T9=(int)_T8;
if(_T9!=39)goto _TLF9;single_quotes=single_quotes + 1;goto _TLFA;
_TLF9: _TA=Cyc_is_other_special(c);if(!_TA)goto _TLFB;other_special=other_special + 1;goto _TLFC;_TLFB: _TLFC: _TLFA:;}
# 1353
i=i + 1;goto _TLF8;_TLF7:;}
# 1360
if(single_quotes!=0)goto _TLFD;if(other_special!=0)goto _TLFD;_TB=s;
return _TB;_TLFD:
# 1364
 if(single_quotes!=0)goto _TLFF;{struct _fat_ptr*_T3A[3];{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));
*_T3B=_tag_fat("'",sizeof(char),2U);_TD=(struct _fat_ptr*)_T3B;}_T3A[0]=_TD;{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));_TF=s;*_T3B=_TF;_TE=(struct _fat_ptr*)_T3B;}_T3A[1]=_TE;{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));*_T3B=_tag_fat("'",sizeof(char),2U);_T10=(struct _fat_ptr*)_T3B;}_T3A[2]=_T10;_T11=_tag_fat(_T3A,sizeof(struct _fat_ptr*),3);_TC=Cyc_List_list(_T11);}_T12=Cyc_strconcat_l(_TC);return _T12;_TLFF: _T13=len;_T14=single_quotes;_T15=(unsigned long)_T14;_T16=_T13 + _T15;_T17=other_special;_T18=(unsigned long)_T17;{
# 1368
unsigned long len2=_T16 + _T18;_T1A=len2 + 1U;{unsigned _T3A=_T1A + 1U;_T1C=_check_times(_T3A,sizeof(char));{char*_T3B=_cycalloc_atomic(_T1C);{unsigned _T3C=_T3A;unsigned i;i=0;_TL104: if(i < _T3C)goto _TL102;else{goto _TL103;}_TL102: _T1D=i;
_T3B[_T1D]='\000';i=i + 1;goto _TL104;_TL103: _T3B[_T3C]=0;}_T1B=(char*)_T3B;}_T19=_tag_fat(_T1B,sizeof(char),_T3A);}{struct _fat_ptr s2=_T19;
int i=0;
int j=0;
_TL108: _T1E=i;_T1F=(unsigned long)_T1E;_T20=len;if(_T1F < _T20)goto _TL106;else{goto _TL107;}
_TL106: _T21=s;_T22=_T21.curr;_T23=(const char*)_T22;_T24=_check_null(_T23);_T25=i;{char c=_T24[_T25];_T26=c;_T27=(int)_T26;
if(_T27==39)goto _TL10B;else{goto _TL10C;}_TL10C: _T28=Cyc_is_other_special(c);if(_T28)goto _TL10B;else{goto _TL109;}
_TL10B: _T29=s2;_T2A=j;j=_T2A + 1;_T2B=_T2A;{struct _fat_ptr _T3A=_fat_ptr_plus(_T29,sizeof(char),_T2B);_T2C=_check_fat_subscript(_T3A,sizeof(char),0U);_T2D=(char*)_T2C;{char _T3B=*_T2D;char _T3C='\\';_T2E=_get_fat_size(_T3A,sizeof(char));if(_T2E!=1U)goto _TL10D;if(_T3B!=0)goto _TL10D;if(_T3C==0)goto _TL10D;_throw_arraybounds();goto _TL10E;_TL10D: _TL10E: _T2F=_T3A.curr;_T30=(char*)_T2F;*_T30=_T3C;}}goto _TL10A;_TL109: _TL10A: _T31=s2;_T32=j;
j=_T32 + 1;_T33=_T32;{struct _fat_ptr _T3A=_fat_ptr_plus(_T31,sizeof(char),_T33);_T34=_check_fat_subscript(_T3A,sizeof(char),0U);_T35=(char*)_T34;{char _T3B=*_T35;char _T3C=c;_T36=_get_fat_size(_T3A,sizeof(char));if(_T36!=1U)goto _TL10F;if(_T3B!=0)goto _TL10F;if(_T3C==0)goto _TL10F;_throw_arraybounds();goto _TL110;_TL10F: _TL110: _T37=_T3A.curr;_T38=(char*)_T37;*_T38=_T3C;}}}
# 1372
i=i + 1;goto _TL108;_TL107: _T39=s2;
# 1378
return _T39;}}}
# 1380
static struct _fat_ptr*Cyc_sh_escape_stringptr(struct _fat_ptr*sp){struct _fat_ptr*_T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;{struct _fat_ptr*_T3=_cycalloc(sizeof(struct _fat_ptr));_T1=sp;_T2=*_T1;
*_T3=Cyc_sh_escape_string(_T2);_T0=(struct _fat_ptr*)_T3;}return _T0;}
# 1385
int Cyc_process_file(const char*filename,struct Cyc_List_List*start_symbols,struct Cyc_List_List*user_defs,struct Cyc_List_List*omit_symbols,struct Cyc_List_List*hstubs,struct Cyc_List_List*cstubs,struct Cyc_List_List*cycstubs,struct Cyc_List_List*cpp_insert){struct Cyc_Set_Set**_T0;unsigned _T1;int(*_T2)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T3)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T4;struct Cyc_Set_Set*_T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;void*_T8;void*_T9;unsigned _TA;int _TB;struct Cyc_String_pa_PrintArg_struct _TC;struct _fat_ptr _TD;void*_TE;void*_TF;unsigned _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;int _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct _fat_ptr _T16;void*_T17;void*_T18;unsigned _T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;void*_T1D;void*_T1E;unsigned _T1F;struct _fat_ptr _T20;void*_T21;void*_T22;unsigned _T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct _fat_ptr _T26;unsigned char*_T27;unsigned char*_T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;unsigned _T2B;struct _fat_ptr _T2C;struct Cyc_String_pa_PrintArg_struct _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;struct Cyc_String_pa_PrintArg_struct _T32;struct _fat_ptr _T33;struct _fat_ptr _T34;unsigned char*_T35;unsigned char*_T36;struct _fat_ptr _T37;struct _fat_ptr _T38;unsigned _T39;struct _fat_ptr _T3A;struct Cyc_String_pa_PrintArg_struct _T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;struct _fat_ptr _T3E;struct _fat_ptr _T3F;struct Cyc_String_pa_PrintArg_struct _T40;struct _fat_ptr _T41;struct _fat_ptr _T42;unsigned char*_T43;unsigned char*_T44;struct _fat_ptr _T45;struct _fat_ptr _T46;unsigned _T47;struct _fat_ptr _T48;struct Cyc_String_pa_PrintArg_struct _T49;struct _fat_ptr _T4A;struct _fat_ptr _T4B;struct _fat_ptr _T4C;struct _fat_ptr _T4D;struct Cyc_String_pa_PrintArg_struct _T4E;struct _fat_ptr _T4F;struct _fat_ptr _T50;unsigned char*_T51;unsigned char*_T52;struct _handler_cons*_T53;int _T54;struct _fat_ptr _T55;void*_T56;void*_T57;unsigned _T58;int _T59;enum Cyc_buildlib_mode _T5A;int _T5B;enum Cyc_buildlib_mode _T5C;int _T5D;struct Cyc_String_pa_PrintArg_struct _T5E;struct _fat_ptr _T5F;void*_T60;void*_T61;unsigned _T62;struct _fat_ptr _T63;struct _fat_ptr _T64;struct Cyc_String_pa_PrintArg_struct _T65;struct Cyc_List_List*_T66;void*_T67;struct _fat_ptr*_T68;struct _fat_ptr _T69;struct _fat_ptr _T6A;struct Cyc_List_List*_T6B;struct Cyc_String_pa_PrintArg_struct _T6C;struct _fat_ptr _T6D;void*_T6E;void*_T6F;unsigned _T70;struct _fat_ptr _T71;struct _fat_ptr _T72;struct _fat_ptr _T73;struct _fat_ptr _T74;struct Cyc_String_pa_PrintArg_struct _T75;struct Cyc_String_pa_PrintArg_struct _T76;struct _fat_ptr _T77;void*_T78;void*_T79;unsigned _T7A;struct Cyc_String_pa_PrintArg_struct _T7B;struct _fat_ptr _T7C;void*_T7D;void*_T7E;unsigned _T7F;struct _fat_ptr _T80;struct _fat_ptr _T81;struct Cyc_String_pa_PrintArg_struct _T82;struct Cyc_String_pa_PrintArg_struct _T83;struct _fat_ptr _T84;void*_T85;void*_T86;unsigned _T87;struct Cyc_String_pa_PrintArg_struct _T88;struct _fat_ptr _T89;void*_T8A;void*_T8B;unsigned _T8C;struct _fat_ptr _T8D;struct _fat_ptr _T8E;struct Cyc_String_pa_PrintArg_struct _T8F;struct _fat_ptr _T90;void*_T91;void*_T92;unsigned _T93;struct _fat_ptr _T94;struct _fat_ptr _T95;struct Cyc___cycFILE*_T96;unsigned _T97;struct Cyc_String_pa_PrintArg_struct _T98;struct _fat_ptr _T99;void*_T9A;void*_T9B;unsigned _T9C;struct Cyc___cycFILE*_T9D;struct _fat_ptr _T9E;struct _fat_ptr _T9F;int _TA0;struct Cyc_String_pa_PrintArg_struct _TA1;struct _fat_ptr _TA2;void*_TA3;void*_TA4;unsigned _TA5;struct Cyc___cycFILE*_TA6;struct _fat_ptr _TA7;struct _fat_ptr _TA8;struct Cyc_List_List*_TA9;void*_TAA;struct _fat_ptr*_TAB;struct _fat_ptr _TAC;unsigned char*_TAD;unsigned char*_TAE;const char*_TAF;struct Cyc___cycFILE*_TB0;struct Cyc_List_List*_TB1;struct Cyc___cycFILE*_TB2;struct _fat_ptr _TB3;struct _fat_ptr _TB4;struct Cyc_String_pa_PrintArg_struct _TB5;struct _fat_ptr _TB6;void*_TB7;void*_TB8;unsigned _TB9;struct Cyc___cycFILE*_TBA;struct _fat_ptr _TBB;struct _fat_ptr _TBC;struct Cyc_List_List*_TBD;struct _fat_ptr*_TBE;struct _fat_ptr _TBF;struct Cyc_List_List*(*_TC0)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_TC1)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_TC2;struct _fat_ptr _TC3;struct _fat_ptr _TC4;struct Cyc_String_pa_PrintArg_struct _TC5;struct Cyc_String_pa_PrintArg_struct _TC6;struct Cyc_String_pa_PrintArg_struct _TC7;struct Cyc_String_pa_PrintArg_struct _TC8;struct _fat_ptr _TC9;void*_TCA;void*_TCB;unsigned _TCC;struct Cyc_String_pa_PrintArg_struct _TCD;struct _fat_ptr _TCE;void*_TCF;void*_TD0;unsigned _TD1;struct Cyc_String_pa_PrintArg_struct _TD2;int _TD3;struct _fat_ptr _TD4;struct _fat_ptr _TD5;unsigned char*_TD6;unsigned char*_TD7;int _TD8;struct Cyc_String_pa_PrintArg_struct _TD9;struct _fat_ptr _TDA;void*_TDB;void*_TDC;unsigned _TDD;struct Cyc___cycFILE*_TDE;struct _fat_ptr _TDF;struct _fat_ptr _TE0;int _TE1;struct _fat_ptr _TE2;struct Cyc_String_pa_PrintArg_struct _TE3;struct Cyc_String_pa_PrintArg_struct _TE4;struct Cyc_String_pa_PrintArg_struct _TE5;struct Cyc_String_pa_PrintArg_struct _TE6;struct _fat_ptr _TE7;void*_TE8;void*_TE9;unsigned _TEA;struct Cyc_String_pa_PrintArg_struct _TEB;struct _fat_ptr _TEC;void*_TED;void*_TEE;unsigned _TEF;struct Cyc_String_pa_PrintArg_struct _TF0;int _TF1;struct _fat_ptr _TF2;struct _fat_ptr _TF3;unsigned char*_TF4;unsigned char*_TF5;int _TF6;struct Cyc_String_pa_PrintArg_struct _TF7;struct _fat_ptr _TF8;void*_TF9;void*_TFA;unsigned _TFB;struct Cyc___cycFILE*_TFC;struct _fat_ptr _TFD;struct _fat_ptr _TFE;int _TFF;struct Cyc___cycFILE*_T100;unsigned _T101;struct Cyc_NO_SUPPORT_exn_struct*_T102;struct _fat_ptr _T103;struct Cyc_String_pa_PrintArg_struct _T104;struct _fat_ptr _T105;void*_T106;void*_T107;unsigned _T108;struct _fat_ptr _T109;struct _fat_ptr _T10A;void*_T10B;int _T10C;struct Cyc___cycFILE*_T10D;struct _fat_ptr _T10E;struct _fat_ptr _T10F;struct _tuple13*_T110;void(*_T111)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*);void(*_T112)(struct Cyc_Hashtable_Table*,void*,void*);int _T113;struct Cyc___cycFILE*_T114;struct _fat_ptr _T115;struct _fat_ptr _T116;struct Cyc___cycFILE*_T117;unsigned _T118;struct Cyc_NO_SUPPORT_exn_struct*_T119;struct _fat_ptr _T11A;struct Cyc_String_pa_PrintArg_struct _T11B;struct _fat_ptr _T11C;void*_T11D;void*_T11E;unsigned _T11F;struct _fat_ptr _T120;struct _fat_ptr _T121;void*_T122;int _T123;struct Cyc___cycFILE*_T124;struct _fat_ptr _T125;struct _fat_ptr _T126;struct Cyc___cycFILE*_T127;unsigned _T128;int _T129;int _T12A;struct Cyc___cycFILE*_T12B;struct _fat_ptr _T12C;struct _fat_ptr _T12D;struct Cyc_List_List*_T12E;void*_T12F;struct Cyc_String_pa_PrintArg_struct _T130;struct _fat_ptr*_T131;struct Cyc___cycFILE*_T132;struct _fat_ptr _T133;struct _fat_ptr _T134;struct Cyc_List_List*_T135;struct Cyc___cycFILE*_T136;enum Cyc_buildlib_mode _T137;int _T138;struct Cyc___cycFILE*_T139;unsigned _T13A;int _T13B;struct Cyc___cycFILE*_T13C;struct _fat_ptr _T13D;struct _fat_ptr _T13E;struct _fat_ptr _T13F;void*_T140;void*_T141;unsigned _T142;struct _handler_cons*_T143;int _T144;int _T145;struct Cyc___cycFILE*_T146;struct _fat_ptr _T147;struct _fat_ptr _T148;void*_T149;int _T14A;struct Cyc___cycFILE*_T14B;struct _fat_ptr _T14C;struct _fat_ptr _T14D;struct Cyc_List_List*_T14E;void*_T14F;struct Cyc_Absyn_Decl*_T150;struct Cyc_Hashtable_Table*_T151;struct Cyc_List_List*_T152;struct Cyc_List_List*(*_T153)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T154)(void*(*)(void*),struct Cyc_List_List*);struct _tuple0 _T155;struct Cyc_List_List*_T156;struct Cyc_List_List*_T157;struct Cyc_Hashtable_Table*_T158;struct Cyc_Set_Set*(*_T159)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T15A)(int(*)(void*,void*));int(*_T15B)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T15C;void*_T15D;struct Cyc_Absyn_Decl*_T15E;int*_T15F;unsigned _T160;struct Cyc_Absyn_Vardecl*_T161;struct Cyc_Set_Set*(*_T162)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T163)(struct Cyc_Set_Set*,void*);int(*_T164)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);int(*_T165)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T166)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T167;struct _fat_ptr*_T168;int _T169;struct Cyc_Absyn_Fndecl*_T16A;struct Cyc_Set_Set*(*_T16B)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T16C)(struct Cyc_Set_Set*,void*);int(*_T16D)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);int(*_T16E)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T16F)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T170;struct _fat_ptr*_T171;int _T172;struct Cyc_Absyn_Aggrdecl*_T173;struct Cyc_Absyn_Enumdecl*_T174;int(*_T175)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T176)(struct Cyc_Set_Set*,void*);int _T177;struct Cyc_List_List*_T178;struct Cyc_Absyn_Enumdecl*_T179;struct Cyc_Core_Opt*_T17A;unsigned _T17B;struct Cyc_Absyn_Enumdecl*_T17C;struct Cyc_Core_Opt*_T17D;void*_T17E;struct Cyc_List_List*_T17F;void*_T180;struct Cyc_Absyn_Enumfield*_T181;int(*_T182)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T183)(struct Cyc_Set_Set*,void*);int _T184;struct Cyc_List_List*_T185;struct Cyc_List_List*_T186;struct Cyc_Absyn_Typedefdecl*_T187;int(*_T188)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T189)(struct Cyc_Set_Set*,void*);int _T18A;struct _fat_ptr*_T18B;struct _fat_ptr _T18C;struct _fat_ptr _T18D;unsigned long _T18E;int _T18F;struct Cyc_List_List*_T190;struct Cyc_List_List*_T191;struct Cyc_List_List*_T192;int _T193;struct Cyc___cycFILE*_T194;unsigned _T195;struct _fat_ptr _T196;struct Cyc_String_pa_PrintArg_struct _T197;struct _fat_ptr _T198;void*_T199;void*_T19A;unsigned _T19B;struct _fat_ptr _T19C;struct _fat_ptr _T19D;int _T19E;unsigned _T19F;struct _fat_ptr _T1A0;unsigned _T1A1;struct _fat_ptr _T1A2;unsigned char*_T1A3;char*_T1A4;char*_T1A5;int _T1A6;char _T1A7;int _T1A8;struct _fat_ptr _T1A9;unsigned char*_T1AA;char*_T1AB;int _T1AC;char _T1AD;int _T1AE;struct _fat_ptr _T1AF;int _T1B0;unsigned char*_T1B1;char*_T1B2;unsigned _T1B3;unsigned char*_T1B4;char*_T1B5;struct _fat_ptr _T1B6;unsigned char*_T1B7;char*_T1B8;int _T1B9;char _T1BA;int _T1BB;struct _fat_ptr _T1BC;unsigned char*_T1BD;char*_T1BE;int _T1BF;char _T1C0;int _T1C1;struct _fat_ptr _T1C2;int _T1C3;unsigned char*_T1C4;char*_T1C5;struct _fat_ptr _T1C6;unsigned char*_T1C7;char*_T1C8;int _T1C9;char _T1CA;int _T1CB;int _T1CC;unsigned _T1CD;unsigned char*_T1CE;char*_T1CF;int _T1D0;struct Cyc___cycFILE*_T1D1;struct _fat_ptr _T1D2;struct _fat_ptr _T1D3;struct Cyc_String_pa_PrintArg_struct _T1D4;struct Cyc_String_pa_PrintArg_struct _T1D5;struct Cyc___cycFILE*_T1D6;struct _fat_ptr _T1D7;struct _fat_ptr _T1D8;struct Cyc_List_List*_T1D9;void*_T1DA;struct Cyc_Absyn_Decl*_T1DB;int*_T1DC;unsigned _T1DD;struct Cyc_Absyn_Vardecl*_T1DE;struct Cyc_Absyn_Fndecl*_T1DF;int _T1E0;struct Cyc_Absyn_Fndecl*_T1E1;struct Cyc_Absyn_Aggrdecl*_T1E2;struct Cyc_Absyn_Enumdecl*_T1E3;struct Cyc_Absyn_Typedefdecl*_T1E4;struct _fat_ptr*_T1E5;unsigned _T1E6;int _T1E7;int(*_T1E8)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T1E9)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T1EA;struct _fat_ptr*_T1EB;int _T1EC;struct Cyc_Core_Impossible_exn_struct*_T1ED;void*_T1EE;struct Cyc_Absyn_Decl*_T1EF;int*_T1F0;unsigned _T1F1;struct Cyc_NO_SUPPORT_exn_struct*_T1F2;void*_T1F3;struct Cyc_List_List*_T1F4;struct Cyc_List_List*_T1F5;struct Cyc_List_List*_T1F6;struct Cyc_List_List*_T1F7;struct _handler_cons*_T1F8;int _T1F9;struct Cyc_Tcenv_Tenv*_T1FA;struct Cyc_List_List*_T1FB;void*_T1FC;struct Cyc_NO_SUPPORT_exn_struct*_T1FD;void*_T1FE;struct _tuple0 _T1FF;struct Cyc_List_List*_T200;void*_T201;struct Cyc_List_List*_T202;void*_T203;struct _fat_ptr*_T204;unsigned _T205;struct Cyc_Absynpp_Params*_T206;struct Cyc_Absynpp_Params*_T207;struct _fat_ptr*_T208;unsigned _T209;struct _fat_ptr _T20A;struct Cyc_String_pa_PrintArg_struct _T20B;struct _fat_ptr*_T20C;struct _fat_ptr _T20D;struct _fat_ptr _T20E;struct Cyc_String_pa_PrintArg_struct _T20F;struct Cyc___cycFILE*_T210;struct _fat_ptr _T211;struct _fat_ptr _T212;struct Cyc_String_pa_PrintArg_struct _T213;struct Cyc___cycFILE*_T214;struct _fat_ptr _T215;struct _fat_ptr _T216;struct Cyc_List_List*_T217;struct _fat_ptr _T218;struct Cyc___cycFILE*_T219;struct Cyc___cycFILE*_T21A;struct _fat_ptr _T21B;struct _fat_ptr _T21C;struct Cyc_List_List*_T21D;struct _fat_ptr _T21E;struct Cyc___cycFILE*_T21F;struct Cyc_List_List*_T220;struct Cyc_List_List*_T221;struct Cyc___cycFILE*_T222;unsigned _T223;struct Cyc_NO_SUPPORT_exn_struct*_T224;struct _fat_ptr _T225;struct Cyc_String_pa_PrintArg_struct _T226;struct _fat_ptr _T227;void*_T228;void*_T229;unsigned _T22A;struct _fat_ptr _T22B;struct _fat_ptr _T22C;void*_T22D;struct _tuple14*_T22E;int(*_T22F)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T230)(struct Cyc_Set_Set*,void*);int _T231;struct Cyc_String_pa_PrintArg_struct _T232;struct _fat_ptr*_T233;struct Cyc___cycFILE*_T234;struct _fat_ptr _T235;struct _fat_ptr _T236;struct Cyc_String_pa_PrintArg_struct _T237;struct Cyc___cycFILE*_T238;struct _fat_ptr _T239;struct _fat_ptr _T23A;struct Cyc___cycFILE*_T23B;struct _fat_ptr _T23C;struct _fat_ptr _T23D;enum Cyc_buildlib_mode _T23E;int _T23F;struct Cyc_List_List*_T240;void*_T241;struct _fat_ptr _T242;unsigned char*_T243;char*_T244;struct _fat_ptr _T245;unsigned char*_T246;char*_T247;struct _fat_ptr _T248;unsigned char*_T249;const char*_T24A;struct Cyc___cycFILE*_T24B;int(*_T24C)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T24D)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T24E;struct _fat_ptr*_T24F;int _T250;struct _fat_ptr _T251;unsigned char*_T252;const char*_T253;struct Cyc___cycFILE*_T254;struct Cyc_String_pa_PrintArg_struct _T255;struct _fat_ptr _T256;struct _fat_ptr _T257;int _T258;struct _fat_ptr*(*_T259)(struct Cyc_Set_Set*);void*(*_T25A)(struct Cyc_Set_Set*);struct Cyc_Set_Set*(*_T25B)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T25C)(struct Cyc_Set_Set*,void*);struct Cyc_String_pa_PrintArg_struct _T25D;struct _fat_ptr*_T25E;struct _fat_ptr _T25F;struct _fat_ptr _T260;struct _fat_ptr _T261;struct _fat_ptr _T262;struct Cyc_String_pa_PrintArg_struct _T263;struct _fat_ptr _T264;struct _fat_ptr _T265;struct Cyc_List_List*_T266;struct Cyc___cycFILE*_T267;struct _fat_ptr _T268;struct _fat_ptr _T269;int _T26A;struct Cyc___cycFILE*_T26B;struct _fat_ptr _T26C;struct _fat_ptr _T26D;int _T26E;struct Cyc_List_List*_T26F;void*_T270;struct _fat_ptr _T271;unsigned char*_T272;char*_T273;struct _fat_ptr _T274;unsigned char*_T275;char*_T276;int(*_T277)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T278)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T279;struct _fat_ptr*_T27A;int _T27B;struct _fat_ptr _T27C;unsigned char*_T27D;const char*_T27E;struct Cyc___cycFILE*_T27F;struct Cyc_List_List*_T280;struct Cyc_String_pa_PrintArg_struct _T281;struct _fat_ptr _T282;void*_T283;void*_T284;unsigned _T285;struct Cyc___cycFILE*_T286;struct _fat_ptr _T287;struct _fat_ptr _T288;struct Cyc_List_List*_T289;void*_T28A;struct _fat_ptr _T28B;unsigned char*_T28C;char*_T28D;struct _fat_ptr _T28E;unsigned char*_T28F;char*_T290;int(*_T291)(struct Cyc_Set_Set*,struct _fat_ptr*);int(*_T292)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T293;struct _fat_ptr*_T294;int _T295;struct _fat_ptr _T296;unsigned char*_T297;const char*_T298;struct Cyc___cycFILE*_T299;struct Cyc_List_List*_T29A;struct Cyc___cycFILE*_T29B;struct _fat_ptr _T29C;struct _fat_ptr _T29D;void*_T29E;struct Cyc_Core_Impossible_exn_struct*_T29F;char*_T2A0;char*_T2A1;struct Cyc_String_pa_PrintArg_struct _T2A2;struct _fat_ptr _T2A3;struct _fat_ptr _T2A4;struct Cyc_Dict_Absent_exn_struct*_T2A5;char*_T2A6;char*_T2A7;struct _fat_ptr _T2A8;struct _fat_ptr _T2A9;struct Cyc_Core_Failure_exn_struct*_T2AA;char*_T2AB;char*_T2AC;struct Cyc_String_pa_PrintArg_struct _T2AD;struct _fat_ptr _T2AE;struct _fat_ptr _T2AF;struct Cyc_Core_Invalid_argument_exn_struct*_T2B0;char*_T2B1;char*_T2B2;struct Cyc_String_pa_PrintArg_struct _T2B3;struct _fat_ptr _T2B4;struct _fat_ptr _T2B5;struct Cyc_Core_Not_found_exn_struct*_T2B6;char*_T2B7;char*_T2B8;struct _fat_ptr _T2B9;struct _fat_ptr _T2BA;struct Cyc_NO_SUPPORT_exn_struct*_T2BB;char*_T2BC;char*_T2BD;struct Cyc_String_pa_PrintArg_struct _T2BE;struct _fat_ptr _T2BF;struct _fat_ptr _T2C0;struct Cyc_Lexing_Error_exn_struct*_T2C1;char*_T2C2;char*_T2C3;struct Cyc_String_pa_PrintArg_struct _T2C4;struct _fat_ptr _T2C5;struct _fat_ptr _T2C6;struct _fat_ptr _T2C7;struct _fat_ptr _T2C8;struct Cyc___cycFILE*_T2C9;unsigned _T2CA;struct Cyc_String_pa_PrintArg_struct _T2CB;struct _fat_ptr _T2CC;void*_T2CD;void*_T2CE;unsigned _T2CF;struct Cyc___cycFILE*_T2D0;struct _fat_ptr _T2D1;struct _fat_ptr _T2D2;struct Cyc_String_pa_PrintArg_struct _T2D3;struct _fat_ptr _T2D4;void*_T2D5;void*_T2D6;unsigned _T2D7;struct Cyc___cycFILE*_T2D8;struct _fat_ptr _T2D9;struct _fat_ptr _T2DA;struct _fat_ptr _T2DB;struct _fat_ptr _T2DC;
# 1393
struct Cyc___cycFILE*maybe;
struct Cyc___cycFILE*in_file;
struct Cyc___cycFILE*out_file;
int errorcode=0;_T0=Cyc_headers_to_do;_T1=(unsigned)_T0;
# 1398
if(!_T1)goto _TL111;_T3=Cyc_Set_member;{int(*_T2DD)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T3;_T2=_T2DD;}_T4=Cyc_headers_to_do;_T5=*_T4;{struct _fat_ptr*_T2DD=_cycalloc(sizeof(struct _fat_ptr));{const char*_T2DE=filename;_T8=(void*)_T2DE;_T9=(void*)_T2DE;_TA=_get_zero_arr_size_char(_T9,1U);_T7=_tag_fat(_T8,sizeof(char),_TA);}*_T2DD=_T7;_T6=(struct _fat_ptr*)_T2DD;}_TB=_T2(_T5,_T6);if(_TB)goto _TL111;else{goto _TL113;}
_TL113: return 0;_TL111:{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;{const char*_T2DE=filename;_TE=(void*)_T2DE;_TF=(void*)_T2DE;_T10=_get_zero_arr_size_char(_TF,1U);_TD=_tag_fat(_TE,sizeof(char),_T10);}
# 1402
_T2DD.f1=_TD;_TC=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_TC;void*_T2DE[1];_T2DE[0]=& _T2DD;_T11=Cyc_stderr;_T12=_tag_fat("********************************* %s...\n",sizeof(char),41U);_T13=_tag_fat(_T2DE,sizeof(void*),1);Cyc_fprintf(_T11,_T12,_T13);}_T14=
# 1404
Cyc_gathering();if(_T14)goto _TL114;else{goto _TL116;}_TL116:{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;{const char*_T2DE=filename;_T17=(void*)_T2DE;_T18=(void*)_T2DE;_T19=_get_zero_arr_size_char(_T18,1U);_T16=_tag_fat(_T17,sizeof(char),_T19);}_T2DD.f1=_T16;_T15=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T15;void*_T2DE[1];_T2DE[0]=& _T2DD;_T1A=_tag_fat("\n%s:\n",sizeof(char),6U);_T1B=_tag_fat(_T2DE,sizeof(void*),1);Cyc_log(_T1A,_T1B);}goto _TL115;_TL114: _TL115:{const char*_T2DD=filename;_T1D=(void*)_T2DD;_T1E=(void*)_T2DD;_T1F=_get_zero_arr_size_char(_T1E,1U);_T1C=_tag_fat(_T1D,sizeof(char),_T1F);}{
# 1416 "buildlib.cyl"
struct _fat_ptr basename=Cyc_Filename_basename(_T1C);{const char*_T2DD=filename;_T21=(void*)_T2DD;_T22=(void*)_T2DD;_T23=_get_zero_arr_size_char(_T22,1U);_T20=_tag_fat(_T21,sizeof(char),_T23);}{
struct _fat_ptr dirname=Cyc_Filename_dirname(_T20);
struct _fat_ptr choppedname=Cyc_Filename_chop_extension(basename);_T24=choppedname;_T25=
_tag_fat(".iA",sizeof(char),4U);_T26=Cyc_strconcat(_T24,_T25);_T27=_untag_fat_ptr_check_bound(_T26,sizeof(char),1U);_T28=_check_null(_T27);{const char*cppinfile=(const char*)_T28;_T2A=dirname;_T2B=
# 1422
_get_fat_size(_T2A,sizeof(char));if(_T2B!=0U)goto _TL117;{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;
_T2DD.f1=choppedname;_T2D=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T2D;void*_T2DE[1];_T2DE[0]=& _T2DD;_T2E=_tag_fat("%s.iB",sizeof(char),6U);_T2F=_tag_fat(_T2DE,sizeof(void*),1);_T2C=Cyc_aprintf(_T2E,_T2F);}_T29=_T2C;goto _TL118;_TL117: _T30=dirname;{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;
_T2DD.f1=choppedname;_T32=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T32;void*_T2DE[1];_T2DE[0]=& _T2DD;_T33=_tag_fat("%s.iB",sizeof(char),6U);_T34=_tag_fat(_T2DE,sizeof(void*),1);_T31=Cyc_aprintf(_T33,_T34);}_T29=Cyc_Filename_concat(_T30,_T31);_TL118: _T35=_untag_fat_ptr_check_bound(_T29,sizeof(char),1U);_T36=_check_null(_T35);{
# 1421
const char*macrosfile=(const char*)_T36;_T38=dirname;_T39=
# 1427
_get_fat_size(_T38,sizeof(char));if(_T39!=0U)goto _TL119;{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;
_T2DD.f1=choppedname;_T3B=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T3B;void*_T2DE[1];_T2DE[0]=& _T2DD;_T3C=_tag_fat("%s.iC",sizeof(char),6U);_T3D=_tag_fat(_T2DE,sizeof(void*),1);_T3A=Cyc_aprintf(_T3C,_T3D);}_T37=_T3A;goto _TL11A;_TL119: _T3E=dirname;{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;
_T2DD.f1=choppedname;_T40=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T40;void*_T2DE[1];_T2DE[0]=& _T2DD;_T41=_tag_fat("%s.iC",sizeof(char),6U);_T42=_tag_fat(_T2DE,sizeof(void*),1);_T3F=Cyc_aprintf(_T41,_T42);}_T37=Cyc_Filename_concat(_T3E,_T3F);_TL11A: _T43=_untag_fat_ptr_check_bound(_T37,sizeof(char),1U);_T44=_check_null(_T43);{
# 1426
const char*declsfile=(const char*)_T44;_T46=dirname;_T47=
# 1432
_get_fat_size(_T46,sizeof(char));if(_T47!=0U)goto _TL11B;{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;
_T2DD.f1=choppedname;_T49=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T49;void*_T2DE[1];_T2DE[0]=& _T2DD;_T4A=_tag_fat("%s.iD",sizeof(char),6U);_T4B=_tag_fat(_T2DE,sizeof(void*),1);_T48=Cyc_aprintf(_T4A,_T4B);}_T45=_T48;goto _TL11C;_TL11B: _T4C=dirname;{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;
_T2DD.f1=choppedname;_T4E=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T4E;void*_T2DE[1];_T2DE[0]=& _T2DD;_T4F=_tag_fat("%s.iD",sizeof(char),6U);_T50=_tag_fat(_T2DE,sizeof(void*),1);_T4D=Cyc_aprintf(_T4F,_T50);}_T45=Cyc_Filename_concat(_T4C,_T4D);_TL11C: _T51=_untag_fat_ptr_check_bound(_T45,sizeof(char),1U);_T52=_check_null(_T51);{
# 1431
const char*filtereddeclsfile=(const char*)_T52;{struct _handler_cons _T2DD;_T53=& _T2DD;_push_handler(_T53);{int _T2DE=0;_T54=setjmp(_T2DD.handler);if(!_T54)goto _TL11D;_T2DE=1;goto _TL11E;_TL11D: _TL11E: if(_T2DE)goto _TL11F;else{goto _TL121;}_TL121:{const char*_T2DF=filename;_T56=(void*)_T2DF;_T57=(void*)_T2DF;_T58=_get_zero_arr_size_char(_T57,1U);_T55=_tag_fat(_T56,sizeof(char),_T58);}_T59=
# 1439
Cyc_force_directory_prefixes(_T55);if(!_T59)goto _TL122;{int _T2DF=1;_npop_handler(0);return _T2DF;}_TL122: _T5A=Cyc_mode;_T5B=(int)_T5A;
# 1444
if(_T5B==3)goto _TL124;_T5C=Cyc_mode;_T5D=(int)_T5C;
if(_T5D!=2)goto _TL126;{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{const char*_T2E0=cppinfile;_T60=(void*)_T2E0;_T61=(void*)_T2E0;_T62=_get_zero_arr_size_char(_T61,1U);_T5F=_tag_fat(_T60,sizeof(char),_T62);}
_T2DF.f1=_T5F;_T5E=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T5E;void*_T2E0[1];_T2E0[0]=& _T2DF;_T63=_tag_fat("cat >%s <<XXX\n",sizeof(char),15U);_T64=_tag_fat(_T2E0,sizeof(void*),1);Cyc_prscript(_T63,_T64);}{
struct Cyc_List_List*l=cpp_insert;_TL12B: if(l!=0)goto _TL129;else{goto _TL12A;}
_TL129:{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;_T66=l;_T67=_T66->hd;_T68=(struct _fat_ptr*)_T67;_T2DF.f1=*_T68;_T65=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T65;void*_T2E0[1];_T2E0[0]=& _T2DF;_T69=_tag_fat("%s",sizeof(char),3U);_T6A=_tag_fat(_T2E0,sizeof(void*),1);Cyc_prscript(_T69,_T6A);}_T6B=l;
# 1447
l=_T6B->tl;goto _TL12B;_TL12A:;}{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{const char*_T2E0=filename;_T6E=(void*)_T2E0;_T6F=(void*)_T2E0;_T70=_get_zero_arr_size_char(_T6F,1U);_T6D=_tag_fat(_T6E,sizeof(char),_T70);}
# 1449
_T2DF.f1=_T6D;_T6C=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T6C;void*_T2E0[1];_T2E0[0]=& _T2DF;_T71=_tag_fat("#include <%s>\n",sizeof(char),15U);_T72=_tag_fat(_T2E0,sizeof(void*),1);Cyc_prscript(_T71,_T72);}_T73=
_tag_fat("XXX\n",sizeof(char),5U);_T74=_tag_fat(0U,sizeof(void*),0);Cyc_prscript(_T73,_T74);{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;
_T2DF.f1=Cyc_target_cflags;_T75=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T75;{struct Cyc_String_pa_PrintArg_struct _T2E0;_T2E0.tag=0;{const char*_T2E1=macrosfile;_T78=(void*)_T2E1;_T79=(void*)_T2E1;_T7A=_get_zero_arr_size_char(_T79,1U);_T77=_tag_fat(_T78,sizeof(char),_T7A);}_T2E0.f1=_T77;_T76=_T2E0;}{struct Cyc_String_pa_PrintArg_struct _T2E0=_T76;{struct Cyc_String_pa_PrintArg_struct _T2E1;_T2E1.tag=0;{const char*_T2E2=cppinfile;_T7D=(void*)_T2E2;_T7E=(void*)_T2E2;_T7F=_get_zero_arr_size_char(_T7E,1U);_T7C=_tag_fat(_T7D,sizeof(char),_T7F);}_T2E1.f1=_T7C;_T7B=_T2E1;}{struct Cyc_String_pa_PrintArg_struct _T2E1=_T7B;void*_T2E2[3];_T2E2[0]=& _T2DF;_T2E2[1]=& _T2E0;_T2E2[2]=& _T2E1;_T80=_tag_fat("$GCC %s -E -dM -o %s -x c %s && \\\n",sizeof(char),35U);_T81=_tag_fat(_T2E2,sizeof(void*),3);Cyc_prscript(_T80,_T81);}}}{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;
_T2DF.f1=Cyc_target_cflags;_T82=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T82;{struct Cyc_String_pa_PrintArg_struct _T2E0;_T2E0.tag=0;{const char*_T2E1=declsfile;_T85=(void*)_T2E1;_T86=(void*)_T2E1;_T87=_get_zero_arr_size_char(_T86,1U);_T84=_tag_fat(_T85,sizeof(char),_T87);}_T2E0.f1=_T84;_T83=_T2E0;}{struct Cyc_String_pa_PrintArg_struct _T2E0=_T83;{struct Cyc_String_pa_PrintArg_struct _T2E1;_T2E1.tag=0;{const char*_T2E2=cppinfile;_T8A=(void*)_T2E2;_T8B=(void*)_T2E2;_T8C=_get_zero_arr_size_char(_T8B,1U);_T89=_tag_fat(_T8A,sizeof(char),_T8C);}_T2E1.f1=_T89;_T88=_T2E1;}{struct Cyc_String_pa_PrintArg_struct _T2E1=_T88;void*_T2E2[3];_T2E2[0]=& _T2DF;_T2E2[1]=& _T2E0;_T2E2[2]=& _T2E1;_T8D=_tag_fat("$GCC %s -E     -o %s -x c %s;\n",sizeof(char),31U);_T8E=_tag_fat(_T2E2,sizeof(void*),3);Cyc_prscript(_T8D,_T8E);}}}{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{const char*_T2E0=cppinfile;_T91=(void*)_T2E0;_T92=(void*)_T2E0;_T93=_get_zero_arr_size_char(_T92,1U);_T90=_tag_fat(_T91,sizeof(char),_T93);}
_T2DF.f1=_T90;_T8F=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T8F;void*_T2E0[1];_T2E0[0]=& _T2DF;_T94=_tag_fat("rm %s\n",sizeof(char),7U);_T95=_tag_fat(_T2E0,sizeof(void*),1);Cyc_prscript(_T94,_T95);}goto _TL127;
# 1456
_TL126: maybe=Cyc_fopen(cppinfile,"w");_T96=maybe;_T97=(unsigned)_T96;
if(_T97)goto _TL12C;else{goto _TL12E;}
_TL12E:{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{const char*_T2E0=cppinfile;_T9A=(void*)_T2E0;_T9B=(void*)_T2E0;_T9C=_get_zero_arr_size_char(_T9B,1U);_T99=_tag_fat(_T9A,sizeof(char),_T9C);}_T2DF.f1=_T99;_T98=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T98;void*_T2E0[1];_T2E0[0]=& _T2DF;_T9D=Cyc_stderr;_T9E=_tag_fat("Error: could not create file %s\n",sizeof(char),33U);_T9F=_tag_fat(_T2E0,sizeof(void*),1);Cyc_fprintf(_T9D,_T9E,_T9F);}{int _T2DF=1;_npop_handler(0);return _T2DF;}_TL12C: _TA0=Cyc_verbose;
# 1461
if(!_TA0)goto _TL12F;{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{const char*_T2E0=cppinfile;_TA3=(void*)_T2E0;_TA4=(void*)_T2E0;_TA5=_get_zero_arr_size_char(_TA4,1U);_TA2=_tag_fat(_TA3,sizeof(char),_TA5);}
_T2DF.f1=_TA2;_TA1=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_TA1;void*_T2E0[1];_T2E0[0]=& _T2DF;_TA6=Cyc_stderr;_TA7=_tag_fat("Creating %s\n",sizeof(char),13U);_TA8=_tag_fat(_T2E0,sizeof(void*),1);Cyc_fprintf(_TA6,_TA7,_TA8);}goto _TL130;_TL12F: _TL130:
 out_file=maybe;{
struct Cyc_List_List*l=cpp_insert;_TL134: if(l!=0)goto _TL132;else{goto _TL133;}
_TL132: _TA9=l;_TAA=_TA9->hd;_TAB=(struct _fat_ptr*)_TAA;_TAC=*_TAB;_TAD=_untag_fat_ptr_check_bound(_TAC,sizeof(char),1U);_TAE=_check_null(_TAD);_TAF=(const char*)_TAE;_TB0=out_file;Cyc_fputs(_TAF,_TB0);_TB1=l;
# 1464
l=_TB1->tl;goto _TL134;_TL133:;}_TB2=out_file;_TB3=
# 1468
_tag_fat("#define __DO_NOT_DEFINE_COMPILE 1\n",sizeof(char),35U);_TB4=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TB2,_TB3,_TB4);{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{const char*_T2E0=filename;_TB7=(void*)_T2E0;_TB8=(void*)_T2E0;_TB9=_get_zero_arr_size_char(_TB8,1U);_TB6=_tag_fat(_TB7,sizeof(char),_TB9);}
_T2DF.f1=_TB6;_TB5=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_TB5;void*_T2E0[1];_T2E0[0]=& _T2DF;_TBA=out_file;_TBB=_tag_fat("#include <%s>\n",sizeof(char),15U);_TBC=_tag_fat(_T2E0,sizeof(void*),1);Cyc_fprintf(_TBA,_TBB,_TBC);}
Cyc_fclose(out_file);{struct Cyc_List_List*_T2DF=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T2E0=_cycalloc(sizeof(struct _fat_ptr));_TBF=
# 1472
_tag_fat("",sizeof(char),1U);*_T2E0=_TBF;_TBE=(struct _fat_ptr*)_T2E0;}_T2DF->hd=_TBE;_TC1=Cyc_List_map;{
struct Cyc_List_List*(*_T2E0)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*))_TC1;_TC0=_T2E0;}_TC2=Cyc_List_rev(Cyc_cppargs);_T2DF->tl=_TC0(Cyc_sh_escape_stringptr,_TC2);_TBD=(struct Cyc_List_List*)_T2DF;}_TC3=
_tag_fat(" ",sizeof(char),2U);{
# 1471
struct _fat_ptr cppargs_string=
Cyc_str_sepstr(_TBD,_TC3);{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;
# 1477
_T2DF.f1=Cyc_cyclone_cc;_TC5=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_TC5;{struct Cyc_String_pa_PrintArg_struct _T2E0;_T2E0.tag=0;_T2E0.f1=Cyc_target_cflags;_TC6=_T2E0;}{struct Cyc_String_pa_PrintArg_struct _T2E0=_TC6;{struct Cyc_String_pa_PrintArg_struct _T2E1;_T2E1.tag=0;
_T2E1.f1=cppargs_string;_TC7=_T2E1;}{struct Cyc_String_pa_PrintArg_struct _T2E1=_TC7;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;{const char*_T2E3=macrosfile;_TCA=(void*)_T2E3;_TCB=(void*)_T2E3;_TCC=_get_zero_arr_size_char(_TCB,1U);_TC9=_tag_fat(_TCA,sizeof(char),_TCC);}_T2E2.f1=_TC9;_TC8=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_TC8;{struct Cyc_String_pa_PrintArg_struct _T2E3;_T2E3.tag=0;{const char*_T2E4=cppinfile;_TCF=(void*)_T2E4;_TD0=(void*)_T2E4;_TD1=_get_zero_arr_size_char(_TD0,1U);_TCE=_tag_fat(_TCF,sizeof(char),_TD1);}_T2E3.f1=_TCE;_TCD=_T2E3;}{struct Cyc_String_pa_PrintArg_struct _T2E3=_TCD;{struct Cyc_String_pa_PrintArg_struct _T2E4;_T2E4.tag=0;_TD3=Cyc_verbose;
if(!_TD3)goto _TL135;_T2E4.f1=_tag_fat("",sizeof(char),1U);goto _TL136;_TL135: _T2E4.f1=_tag_fat("-w",sizeof(char),3U);_TL136: _TD2=_T2E4;}{struct Cyc_String_pa_PrintArg_struct _T2E4=_TD2;void*_T2E5[6];_T2E5[0]=& _T2DF;_T2E5[1]=& _T2E0;_T2E5[2]=& _T2E1;_T2E5[3]=& _T2E2;_T2E5[4]=& _T2E3;_T2E5[5]=& _T2E4;_TD4=
# 1476
_tag_fat("%s %s %s -E -dM -o %s -x c %s %s",sizeof(char),33U);_TD5=_tag_fat(_T2E5,sizeof(void*),6);_TC4=Cyc_aprintf(_TD4,_TD5);}}}}}}_TD6=_untag_fat_ptr_check_bound(_TC4,sizeof(char),1U);_TD7=_check_null(_TD6);{char*cmd=(char*)_TD7;_TD8=Cyc_verbose;
# 1480
if(!_TD8)goto _TL137;{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{char*_T2E0=cmd;_TDB=(void*)_T2E0;_TDC=(void*)_T2E0;_TDD=_get_zero_arr_size_char(_TDC,1U);_TDA=_tag_fat(_TDB,sizeof(char),_TDD);}
_T2DF.f1=_TDA;_TD9=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_TD9;void*_T2E0[1];_T2E0[0]=& _T2DF;_TDE=Cyc_stderr;_TDF=_tag_fat("%s\n",sizeof(char),4U);_TE0=_tag_fat(_T2E0,sizeof(void*),1);Cyc_fprintf(_TDE,_TDF,_TE0);}goto _TL138;_TL137: _TL138: _TE1=
system(cmd);if(_TE1)goto _TL139;else{goto _TL13B;}
# 1485
_TL13B:{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;
_T2DF.f1=Cyc_cyclone_cc;_TE3=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_TE3;{struct Cyc_String_pa_PrintArg_struct _T2E0;_T2E0.tag=0;_T2E0.f1=Cyc_target_cflags;_TE4=_T2E0;}{struct Cyc_String_pa_PrintArg_struct _T2E0=_TE4;{struct Cyc_String_pa_PrintArg_struct _T2E1;_T2E1.tag=0;
_T2E1.f1=cppargs_string;_TE5=_T2E1;}{struct Cyc_String_pa_PrintArg_struct _T2E1=_TE5;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;{const char*_T2E3=declsfile;_TE8=(void*)_T2E3;_TE9=(void*)_T2E3;_TEA=_get_zero_arr_size_char(_TE9,1U);_TE7=_tag_fat(_TE8,sizeof(char),_TEA);}_T2E2.f1=_TE7;_TE6=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_TE6;{struct Cyc_String_pa_PrintArg_struct _T2E3;_T2E3.tag=0;{const char*_T2E4=cppinfile;_TED=(void*)_T2E4;_TEE=(void*)_T2E4;_TEF=_get_zero_arr_size_char(_TEE,1U);_TEC=_tag_fat(_TED,sizeof(char),_TEF);}_T2E3.f1=_TEC;_TEB=_T2E3;}{struct Cyc_String_pa_PrintArg_struct _T2E3=_TEB;{struct Cyc_String_pa_PrintArg_struct _T2E4;_T2E4.tag=0;_TF1=Cyc_verbose;
if(!_TF1)goto _TL13C;_T2E4.f1=_tag_fat("",sizeof(char),1U);goto _TL13D;_TL13C: _T2E4.f1=_tag_fat("-w",sizeof(char),3U);_TL13D: _TF0=_T2E4;}{struct Cyc_String_pa_PrintArg_struct _T2E4=_TF0;void*_T2E5[6];_T2E5[0]=& _T2DF;_T2E5[1]=& _T2E0;_T2E5[2]=& _T2E1;_T2E5[3]=& _T2E2;_T2E5[4]=& _T2E3;_T2E5[5]=& _T2E4;_TF2=
# 1485
_tag_fat("%s %s %s -E -o %s -x c %s %s",sizeof(char),29U);_TF3=_tag_fat(_T2E5,sizeof(void*),6);_TE2=Cyc_aprintf(_TF2,_TF3);}}}}}}_TF4=_untag_fat_ptr_check_bound(_TE2,sizeof(char),1U);_TF5=_check_null(_TF4);cmd=(char*)_TF5;_TF6=Cyc_verbose;
# 1489
if(!_TF6)goto _TL13E;{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{char*_T2E0=cmd;_TF9=(void*)_T2E0;_TFA=(void*)_T2E0;_TFB=_get_zero_arr_size_char(_TFA,1U);_TF8=_tag_fat(_TF9,sizeof(char),_TFB);}
_T2DF.f1=_TF8;_TF7=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_TF7;void*_T2E0[1];_T2E0[0]=& _T2DF;_TFC=Cyc_stderr;_TFD=_tag_fat("%s\n",sizeof(char),4U);_TFE=_tag_fat(_T2E0,sizeof(void*),1);Cyc_fprintf(_TFC,_TFD,_TFE);}goto _TL13F;_TL13E: _TL13F:
 system(cmd);goto _TL13A;_TL139: _TL13A:;}}_TL127: goto _TL125;_TL124: _TL125: _TFF=
# 1496
Cyc_gathering();if(!_TFF)goto _TL140;{int _T2DF=0;_npop_handler(0);return _T2DF;}_TL140:{
# 1499
struct Cyc_Hashtable_Table*t=Cyc_new_deps();
maybe=Cyc_fopen(macrosfile,"r");_T100=maybe;_T101=(unsigned)_T100;
if(_T101)goto _TL142;else{goto _TL144;}_TL144:{struct Cyc_NO_SUPPORT_exn_struct*_T2DF=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2DF->tag=Cyc_NO_SUPPORT;{struct Cyc_String_pa_PrintArg_struct _T2E0;_T2E0.tag=0;{const char*_T2E1=macrosfile;_T106=(void*)_T2E1;_T107=(void*)_T2E1;_T108=_get_zero_arr_size_char(_T107,1U);_T105=_tag_fat(_T106,sizeof(char),_T108);}
_T2E0.f1=_T105;_T104=_T2E0;}{struct Cyc_String_pa_PrintArg_struct _T2E0=_T104;void*_T2E1[1];_T2E1[0]=& _T2E0;_T109=
# 1501
_tag_fat("can't open macrosfile %s",sizeof(char),25U);_T10A=_tag_fat(_T2E1,sizeof(void*),1);_T103=Cyc_aprintf(_T109,_T10A);}_T2DF->f1=_T103;_T102=(struct Cyc_NO_SUPPORT_exn_struct*)_T2DF;}_T10B=(void*)_T102;_throw(_T10B);goto _TL143;_TL142: _TL143: _T10C=Cyc_verbose;
# 1504
if(!_T10C)goto _TL145;_T10D=Cyc_stderr;_T10E=_tag_fat("Getting macros...",sizeof(char),18U);_T10F=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T10D,_T10E,_T10F);goto _TL146;_TL145: _TL146:
 in_file=maybe;{
struct Cyc_Lexing_lexbuf*l=Cyc_Lexing_from_file(in_file);
struct _tuple13*entry;
_TL147: entry=Cyc_line(l);_T110=entry;if(_T110!=0)goto _TL148;else{goto _TL149;}
_TL148:{struct _tuple13*_T2DF=entry;struct Cyc_Set_Set*_T2E0;struct _fat_ptr*_T2E1;{struct _tuple13 _T2E2=*_T2DF;_T2E1=_T2E2.f0;_T2E0=_T2E2.f1;}{struct _fat_ptr*name=_T2E1;struct Cyc_Set_Set*uses=_T2E0;_T112=Cyc_Hashtable_insert;{
void(*_T2E2)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*)=(void(*)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*))_T112;_T111=_T2E2;}_T111(t,name,uses);}}goto _TL147;_TL149:
# 1514
 Cyc_fclose(in_file);_T113=Cyc_verbose;
if(!_T113)goto _TL14A;_T114=Cyc_stderr;_T115=_tag_fat("done.\n",sizeof(char),7U);_T116=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T114,_T115,_T116);goto _TL14B;_TL14A: _TL14B:
# 1518
 maybe=Cyc_fopen(declsfile,"r");_T117=maybe;_T118=(unsigned)_T117;
if(_T118)goto _TL14C;else{goto _TL14E;}_TL14E:{struct Cyc_NO_SUPPORT_exn_struct*_T2DF=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2DF->tag=Cyc_NO_SUPPORT;{struct Cyc_String_pa_PrintArg_struct _T2E0;_T2E0.tag=0;{const char*_T2E1=declsfile;_T11D=(void*)_T2E1;_T11E=(void*)_T2E1;_T11F=_get_zero_arr_size_char(_T11E,1U);_T11C=_tag_fat(_T11D,sizeof(char),_T11F);}
_T2E0.f1=_T11C;_T11B=_T2E0;}{struct Cyc_String_pa_PrintArg_struct _T2E0=_T11B;void*_T2E1[1];_T2E1[0]=& _T2E0;_T120=
# 1519
_tag_fat("can't open declsfile %s",sizeof(char),24U);_T121=_tag_fat(_T2E1,sizeof(void*),1);_T11A=Cyc_aprintf(_T120,_T121);}_T2DF->f1=_T11A;_T119=(struct Cyc_NO_SUPPORT_exn_struct*)_T2DF;}_T122=(void*)_T119;_throw(_T122);goto _TL14D;_TL14C: _TL14D: _T123=Cyc_verbose;
# 1522
if(!_T123)goto _TL14F;_T124=Cyc_stderr;_T125=_tag_fat("Extracting declarations...",sizeof(char),27U);_T126=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T124,_T125,_T126);goto _TL150;_TL14F: _TL150:
 in_file=maybe;
l=Cyc_Lexing_from_file(in_file);
Cyc_slurp_out=Cyc_fopen(filtereddeclsfile,"w");_T127=Cyc_slurp_out;_T128=(unsigned)_T127;
if(_T128)goto _TL151;else{goto _TL153;}_TL153:{int _T2DF=1;_npop_handler(0);return _T2DF;}_TL151:
 _TL154: _T129=Cyc_slurp(l);if(_T129)goto _TL155;else{goto _TL156;}_TL155: goto _TL154;_TL156: _T12A=Cyc_verbose;
if(!_T12A)goto _TL157;_T12B=Cyc_stderr;_T12C=_tag_fat("done.\n",sizeof(char),7U);_T12D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T12B,_T12C,_T12D);goto _TL158;_TL157: _TL158: {
# 1530
struct Cyc_List_List*x=user_defs;
_TL159: if(x!=0)goto _TL15A;else{goto _TL15B;}
_TL15A: _T12E=x;_T12F=_T12E->hd;{struct _tuple16*_T2DF=(struct _tuple16*)_T12F;struct _fat_ptr*_T2E0;{struct _tuple16 _T2E1=*_T2DF;_T2E0=_T2E1.f1;}{struct _fat_ptr*s=_T2E0;{struct Cyc_String_pa_PrintArg_struct _T2E1;_T2E1.tag=0;_T131=s;
_T2E1.f1=*_T131;_T130=_T2E1;}{struct Cyc_String_pa_PrintArg_struct _T2E1=_T130;void*_T2E2[1];_T2E2[0]=& _T2E1;_T132=_check_null(Cyc_slurp_out);_T133=_tag_fat("%s",sizeof(char),3U);_T134=_tag_fat(_T2E2,sizeof(void*),1);Cyc_fprintf(_T132,_T133,_T134);}_T135=x;
x=_T135->tl;}}goto _TL159;_TL15B:
# 1536
 Cyc_fclose(in_file);_T136=
_check_null(Cyc_slurp_out);Cyc_fclose(_T136);_T137=Cyc_mode;_T138=(int)_T137;
if(_T138==3)goto _TL15C;goto _TL15D;_TL15C: _TL15D:
# 1542
 maybe=Cyc_fopen(filtereddeclsfile,"r");_T139=maybe;_T13A=(unsigned)_T139;
if(_T13A)goto _TL15E;else{goto _TL160;}_TL160:{int _T2DF=1;_npop_handler(0);return _T2DF;}_TL15E: _T13B=Cyc_verbose;
if(!_T13B)goto _TL161;_T13C=Cyc_stderr;_T13D=_tag_fat("Parsing declarations...",sizeof(char),24U);_T13E=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T13C,_T13D,_T13E);goto _TL162;_TL161: _TL162:
 in_file=maybe;{const char*_T2DF=filtereddeclsfile;_T140=(void*)_T2DF;_T141=(void*)_T2DF;_T142=_get_zero_arr_size_char(_T141,1U);_T13F=_tag_fat(_T140,sizeof(char),_T142);}
Cyc_Warn_reset(_T13F);
Cyc_Lex_lex_init(0);
Cyc_Warn_print_warnings=Cyc_verbose;{
struct Cyc_List_List*decls=0;{struct _handler_cons _T2DF;_T143=& _T2DF;_push_handler(_T143);{int _T2E0=0;_T144=setjmp(_T2DF.handler);if(!_T144)goto _TL163;_T2E0=1;goto _TL164;_TL163: _TL164: if(_T2E0)goto _TL165;else{goto _TL167;}_TL167:
# 1551
 decls=Cyc_Parse_parse_file(in_file);
Cyc_Warn_print_warnings=1;
Cyc_Lex_lex_init(0);
Cyc_fclose(in_file);_T145=Cyc_verbose;
if(!_T145)goto _TL168;_T146=Cyc_stderr;_T147=_tag_fat("done.\n",sizeof(char),7U);_T148=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T146,_T147,_T148);goto _TL169;_TL168: _TL169: _pop_handler();goto _TL166;_TL165: _T149=Cyc_Core_get_exn_thrown();{void*_T2E1=(void*)_T149;void*_T2E2;_T2E2=_T2E1;{void*x=_T2E2;
# 1559
Cyc_Warn_print_warnings=1;
Cyc_Lex_lex_init(0);
Cyc_fclose(in_file);_T14A=Cyc_verbose;
if(!_T14A)goto _TL16A;_T14B=Cyc_stderr;_T14C=_tag_fat("exception thrown.\n",sizeof(char),19U);_T14D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T14B,_T14C,_T14D);goto _TL16B;_TL16A: _TL16B:
 Cyc_Core_rethrow(x);goto _LL6;}_LL6:;}_TL166:;}}{
# 1567
struct Cyc_List_List*d=decls;_TL16F: if(d!=0)goto _TL16D;else{goto _TL16E;}
_TL16D: _T14E=d;_T14F=_T14E->hd;_T150=(struct Cyc_Absyn_Decl*)_T14F;_T151=t;Cyc_scan_decl(_T150,_T151);_T152=d;
# 1567
d=_T152->tl;goto _TL16F;_TL16E:;}_T154=Cyc_List_map;{
# 1571
struct Cyc_List_List*(*_T2DF)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*))_T154;_T153=_T2DF;}_T155=Cyc_List_split(user_defs);_T156=_T155.f0;{struct Cyc_List_List*user_symbols=_T153(Cyc_add_user_prefix,_T156);_T157=
Cyc_List_append(start_symbols,user_symbols);_T158=t;{struct Cyc_Set_Set*reachable_set=Cyc_reachable(_T157,_T158);
# 1575
struct Cyc_List_List*reachable_decls=0;
struct Cyc_List_List*user_decls=0;_T15A=Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T2DF)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T15A;_T159=_T2DF;}_T15B=Cyc_strptrcmp;{struct Cyc_Set_Set*defined_symbols=_T159(_T15B);{
struct Cyc_List_List*d=decls;_TL173: if(d!=0)goto _TL171;else{goto _TL172;}
_TL171: _T15C=d;_T15D=_T15C->hd;{struct Cyc_Absyn_Decl*decl=(struct Cyc_Absyn_Decl*)_T15D;
struct _fat_ptr*name;_T15E=decl;{
void*_T2DF=_T15E->r;struct Cyc_Absyn_Typedefdecl*_T2E0;struct Cyc_Absyn_Enumdecl*_T2E1;struct Cyc_Absyn_Aggrdecl*_T2E2;struct Cyc_Absyn_Fndecl*_T2E3;struct Cyc_Absyn_Vardecl*_T2E4;_T15F=(int*)_T2DF;_T160=*_T15F;switch(_T160){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T2DF;_T2E4=_T2E5->f1;}{struct Cyc_Absyn_Vardecl*x=_T2E4;_T161=x;{
# 1583
struct _tuple1*_T2E5=_T161->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;_T163=Cyc_Set_insert;{
struct Cyc_Set_Set*(*_T2E7)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T163;_T162=_T2E7;}defined_symbols=_T162(defined_symbols,v);_T165=Cyc_List_mem;{
int(*_T2E7)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(int(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T165;_T164=_T2E7;}_T166=Cyc_strptrcmp;_T167=omit_symbols;_T168=v;_T169=_T164(_T166,_T167,_T168);if(!_T169)goto _TL175;name=0;goto _TL176;
_TL175: name=v;_TL176: goto _LL9;}}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T2DF;_T2E3=_T2E5->f1;}{struct Cyc_Absyn_Fndecl*x=_T2E3;_T16A=x;{
# 1589
struct _tuple1*_T2E5=_T16A->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;_T16C=Cyc_Set_insert;{
struct Cyc_Set_Set*(*_T2E7)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T16C;_T16B=_T2E7;}defined_symbols=_T16B(defined_symbols,v);_T16E=Cyc_List_mem;{
int(*_T2E7)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(int(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T16E;_T16D=_T2E7;}_T16F=Cyc_strptrcmp;_T170=omit_symbols;_T171=v;_T172=_T16D(_T16F,_T170,_T171);if(!_T172)goto _TL177;name=0;goto _TL178;
_TL177: name=v;_TL178: goto _LL9;}}}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T2DF;_T2E2=_T2E5->f1;}{struct Cyc_Absyn_Aggrdecl*x=_T2E2;_T173=x;{
# 1595
struct _tuple1*_T2E5=_T173->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;
name=v;goto _LL9;}}}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T2DF;_T2E1=_T2E5->f1;}{struct Cyc_Absyn_Enumdecl*x=_T2E1;_T174=x;{
# 1599
struct _tuple1*_T2E5=_T174->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;
name=v;
# 1603
if(name==0)goto _TL179;_T176=Cyc_Set_member;{int(*_T2E7)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T176;_T175=_T2E7;}_T177=_T175(reachable_set,name);if(!_T177)goto _TL179;{struct Cyc_List_List*_T2E7=_cycalloc(sizeof(struct Cyc_List_List));
_T2E7->hd=decl;_T2E7->tl=reachable_decls;_T178=(struct Cyc_List_List*)_T2E7;}reachable_decls=_T178;goto _TL17A;
# 1606
_TL179: _T179=x;_T17A=_T179->fields;_T17B=(unsigned)_T17A;if(!_T17B)goto _TL17B;_T17C=x;_T17D=_T17C->fields;_T17E=_T17D->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T17E;_TL180: if(fs!=0)goto _TL17E;else{goto _TL17F;}
_TL17E: _T17F=fs;_T180=_T17F->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T180;_T181=f;{
struct _tuple1*_T2E7=_T181->name;struct _fat_ptr*_T2E8;{struct _tuple1 _T2E9=*_T2E7;_T2E8=_T2E9.f1;}{struct _fat_ptr*v=_T2E8;_T183=Cyc_Set_member;{
int(*_T2E9)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T183;_T182=_T2E9;}_T184=_T182(reachable_set,v);if(!_T184)goto _TL181;{struct Cyc_List_List*_T2E9=_cycalloc(sizeof(struct Cyc_List_List));
_T2E9->hd=decl;_T2E9->tl=reachable_decls;_T185=(struct Cyc_List_List*)_T2E9;}reachable_decls=_T185;goto _TL17F;_TL181:;}}}_T186=fs;
# 1607
fs=_T186->tl;goto _TL180;_TL17F:;}goto _TL17C;_TL17B: _TL17C: _TL17A:
# 1616
 name=0;goto _LL9;}}}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T2DF;_T2E0=_T2E5->f1;}{struct Cyc_Absyn_Typedefdecl*x=_T2E0;_T187=x;{
# 1619
struct _tuple1*_T2E5=_T187->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;
name=v;goto _LL9;}}}case 13: goto _LL17;case 14: _LL17: goto _LL19;case 15: _LL19: goto _LL1B;case 16: _LL1B: goto _LL1D;case 2: _LL1D: goto _LL1F;case 6: _LL1F: goto _LL21;case 3: _LL21: goto _LL23;case 9: _LL23: goto _LL25;case 10: _LL25: goto _LL27;case 11: _LL27: goto _LL29;case 12: _LL29: goto _LL2B;default: _LL2B:
# 1634
 name=0;goto _LL9;}_LL9:;}
# 1638
if(name==0)goto _TL183;_T189=Cyc_Set_member;{int(*_T2DF)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T189;_T188=_T2DF;}_T18A=_T188(reachable_set,name);if(!_T18A)goto _TL183;_T18B=name;_T18C=*_T18B;_T18D=Cyc_user_prefix;_T18E=
Cyc_strlen(Cyc_user_prefix);_T18F=Cyc_strncmp(_T18C,_T18D,_T18E);if(_T18F==0)goto _TL185;{struct Cyc_List_List*_T2DF=_cycalloc(sizeof(struct Cyc_List_List));
_T2DF->hd=decl;_T2DF->tl=reachable_decls;_T190=(struct Cyc_List_List*)_T2DF;}reachable_decls=_T190;goto _TL186;
# 1643
_TL185: Cyc_rename_decl(decl);{struct Cyc_List_List*_T2DF=_cycalloc(sizeof(struct Cyc_List_List));
_T2DF->hd=decl;_T2DF->tl=user_decls;_T191=(struct Cyc_List_List*)_T2DF;}user_decls=_T191;_TL186: goto _TL184;_TL183: _TL184:;}_T192=d;
# 1578
d=_T192->tl;goto _TL173;_TL172:;}_T193=Cyc_do_setjmp;
# 1650
if(_T193)goto _TL187;else{goto _TL189;}
_TL189: maybe=Cyc_fopen(filename,"w");_T194=maybe;_T195=(unsigned)_T194;
if(_T195)goto _TL18A;else{goto _TL18C;}_TL18C:{int _T2DF=1;_npop_handler(0);return _T2DF;}_TL18A:
 out_file=maybe;goto _TL188;
_TL187: out_file=Cyc_stdout;_TL188:{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{const char*_T2E0=filename;_T199=(void*)_T2E0;_T19A=(void*)_T2E0;_T19B=_get_zero_arr_size_char(_T19A,1U);_T198=_tag_fat(_T199,sizeof(char),_T19B);}
_T2DF.f1=_T198;_T197=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T197;void*_T2E0[1];_T2E0[0]=& _T2DF;_T19C=_tag_fat("_%s_",sizeof(char),5U);_T19D=_tag_fat(_T2E0,sizeof(void*),1);_T196=Cyc_aprintf(_T19C,_T19D);}{struct _fat_ptr ifdefmacro=_T196;{
int j=0;_TL190: _T19E=j;_T19F=(unsigned)_T19E;_T1A0=ifdefmacro;_T1A1=_get_fat_size(_T1A0,sizeof(char));if(_T19F < _T1A1)goto _TL18E;else{goto _TL18F;}
_TL18E: _T1A2=ifdefmacro;_T1A3=_T1A2.curr;_T1A4=(char*)_T1A3;_T1A5=_check_null(_T1A4);_T1A6=j;_T1A7=_T1A5[_T1A6];_T1A8=(int)_T1A7;if(_T1A8==46)goto _TL193;else{goto _TL194;}_TL194: _T1A9=ifdefmacro;_T1AA=_T1A9.curr;_T1AB=(char*)_T1AA;_T1AC=j;_T1AD=_T1AB[_T1AC];_T1AE=(int)_T1AD;if(_T1AE==47)goto _TL193;else{goto _TL191;}
_TL193: _T1AF=ifdefmacro;_T1B0=j;{struct _fat_ptr _T2DF=_fat_ptr_plus(_T1AF,sizeof(char),_T1B0);_T1B1=_T2DF.curr;_T1B2=(char*)_T1B1;{char _T2E0=*_T1B2;char _T2E1='_';_T1B3=_get_fat_size(_T2DF,sizeof(char));if(_T1B3!=1U)goto _TL195;if(_T2E0!=0)goto _TL195;if(_T2E1==0)goto _TL195;_throw_arraybounds();goto _TL196;_TL195: _TL196: _T1B4=_T2DF.curr;_T1B5=(char*)_T1B4;*_T1B5=_T2E1;}}goto _TL192;
_TL191: _T1B6=ifdefmacro;_T1B7=_T1B6.curr;_T1B8=(char*)_T1B7;_T1B9=j;_T1BA=_T1B8[_T1B9];_T1BB=(int)_T1BA;if(_T1BB==95)goto _TL197;_T1BC=ifdefmacro;_T1BD=_T1BC.curr;_T1BE=(char*)_T1BD;_T1BF=j;_T1C0=_T1BE[_T1BF];_T1C1=(int)_T1C0;if(_T1C1==47)goto _TL197;_T1C2=ifdefmacro;_T1C3=j;{struct _fat_ptr _T2DF=_fat_ptr_plus(_T1C2,sizeof(char),_T1C3);_T1C4=_T2DF.curr;_T1C5=(char*)_T1C4;{char _T2E0=*_T1C5;_T1C6=ifdefmacro;_T1C7=_T1C6.curr;_T1C8=(char*)_T1C7;_T1C9=j;_T1CA=_T1C8[_T1C9];_T1CB=(int)_T1CA;_T1CC=
toupper(_T1CB);{char _T2E1=(char)_T1CC;_T1CD=_get_fat_size(_T2DF,sizeof(char));if(_T1CD!=1U)goto _TL199;if(_T2E0!=0)goto _TL199;if(_T2E1==0)goto _TL199;_throw_arraybounds();goto _TL19A;_TL199: _TL19A: _T1CE=_T2DF.curr;_T1CF=(char*)_T1CE;*_T1CF=_T2E1;}}}goto _TL198;_TL197: _TL198: _TL192:
# 1656
 j=j + 1;goto _TL190;_TL18F:;}_T1D0=Cyc_do_setjmp;
# 1662
if(_T1D0)goto _TL19B;else{goto _TL19D;}
_TL19D: _T1D1=out_file;_T1D2=_tag_fat("__noinference__{\n",sizeof(char),18U);_T1D3=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1D1,_T1D2,_T1D3);goto _TL19C;_TL19B: _TL19C:{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;
# 1667
_T2DF.f1=ifdefmacro;_T1D4=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T1D4;{struct Cyc_String_pa_PrintArg_struct _T2E0;_T2E0.tag=0;
_T2E0.f1=ifdefmacro;_T1D5=_T2E0;}{struct Cyc_String_pa_PrintArg_struct _T2E0=_T1D5;void*_T2E1[2];_T2E1[0]=& _T2DF;_T2E1[1]=& _T2E0;_T1D6=out_file;_T1D7=
# 1666
_tag_fat("#ifndef %s\n#define %s\n",sizeof(char),23U);_T1D8=_tag_fat(_T2E1,sizeof(void*),2);Cyc_fprintf(_T1D6,_T1D7,_T1D8);}}{
# 1671
struct Cyc_List_List*print_decls=0;
struct Cyc_List_List*names=0;{
struct Cyc_List_List*d=reachable_decls;_TL1A1: if(d!=0)goto _TL19F;else{goto _TL1A0;}
_TL19F: _T1D9=d;_T1DA=_T1D9->hd;{struct Cyc_Absyn_Decl*decl=(struct Cyc_Absyn_Decl*)_T1DA;
int anon_enum=0;
struct _fat_ptr*name;_T1DB=decl;{
void*_T2DF=_T1DB->r;struct Cyc_Absyn_Typedefdecl*_T2E0;struct Cyc_Absyn_Enumdecl*_T2E1;struct Cyc_Absyn_Aggrdecl*_T2E2;struct Cyc_Absyn_Fndecl*_T2E3;struct Cyc_Absyn_Vardecl*_T2E4;_T1DC=(int*)_T2DF;_T1DD=*_T1DC;switch(_T1DD){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T2DF;_T2E4=_T2E5->f1;}{struct Cyc_Absyn_Vardecl*x=_T2E4;_T1DE=x;{
# 1679
struct _tuple1*_T2E5=_T1DE->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;
name=v;goto _LL3E;}}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T2DF;_T2E3=_T2E5->f1;}{struct Cyc_Absyn_Fndecl*x=_T2E3;_T1DF=x;_T1E0=_T1DF->is_inline;
# 1683
if(!_T1E0)goto _TL1A3;name=0;goto _LL3E;_TL1A3: _T1E1=x;{
struct _tuple1*_T2E5=_T1E1->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;
name=v;goto _LL3E;}}}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T2DF;_T2E2=_T2E5->f1;}{struct Cyc_Absyn_Aggrdecl*x=_T2E2;_T1E2=x;{
# 1688
struct _tuple1*_T2E5=_T1E2->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;
name=v;goto _LL3E;}}}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T2DF;_T2E1=_T2E5->f1;}{struct Cyc_Absyn_Enumdecl*x=_T2E1;_T1E3=x;{
# 1692
struct _tuple1*_T2E5=_T1E3->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;
name=v;goto _LL3E;}}}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T2E5=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T2DF;_T2E0=_T2E5->f1;}{struct Cyc_Absyn_Typedefdecl*x=_T2E0;_T1E4=x;{
# 1696
struct _tuple1*_T2E5=_T1E4->name;struct _fat_ptr*_T2E6;{struct _tuple1 _T2E7=*_T2E5;_T2E6=_T2E7.f1;}{struct _fat_ptr*v=_T2E6;
name=v;goto _LL3E;}}}case 4: goto _LL4C;case 13: _LL4C: goto _LL4E;case 14: _LL4E: goto _LL50;case 15: _LL50: goto _LL52;case 16: _LL52: goto _LL54;case 2: _LL54: goto _LL56;case 6: _LL56: goto _LL58;case 3: _LL58: goto _LL5A;case 9: _LL5A: goto _LL5C;case 10: _LL5C: goto _LL5E;case 11: _LL5E: goto _LL60;default: _LL60:
# 1711
 name=0;goto _LL3E;}_LL3E:;}_T1E5=name;_T1E6=(unsigned)_T1E5;
# 1714
if(_T1E6)goto _TL1A5;else{goto _TL1A7;}_TL1A7: _T1E7=anon_enum;if(_T1E7)goto _TL1A5;else{goto _TL1A8;}_TL1A8: goto _TL19E;_TL1A5: _T1E9=Cyc_Set_member;{
# 1719
int(*_T2DF)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T1E9;_T1E8=_T2DF;}_T1EA=reachable_set;_T1EB=Cyc_add_user_prefix(name);_T1EC=_T1E8(_T1EA,_T1EB);if(!_T1EC)goto _TL1A9;{
struct Cyc_Absyn_Decl*user_decl=Cyc_Absyn_lookup_decl(user_decls,name);
if(user_decl!=0)goto _TL1AB;{struct Cyc_Core_Impossible_exn_struct*_T2DF=_cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));_T2DF->tag=Cyc_Core_Impossible;
_T2DF->f1=_tag_fat("Internal Error: bad user-def name",sizeof(char),34U);_T1ED=(struct Cyc_Core_Impossible_exn_struct*)_T2DF;}_T1EE=(void*)_T1ED;_throw(_T1EE);goto _TL1AC;
# 1725
_TL1AB: _T1EF=user_decl;{void*_T2DF=_T1EF->r;_T1F0=(int*)_T2DF;_T1F1=*_T1F0;switch(_T1F1){case 0: goto _LL74;case 1: _LL74:{struct Cyc_NO_SUPPORT_exn_struct*_T2E0=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2E0->tag=Cyc_NO_SUPPORT;
# 1728
_T2E0->f1=_tag_fat("user defintions for function or variable decls",sizeof(char),47U);_T1F2=(struct Cyc_NO_SUPPORT_exn_struct*)_T2E0;}_T1F3=(void*)_T1F2;_throw(_T1F3);default: goto _LL70;}_LL70:;}_TL1AC:{struct Cyc_List_List*_T2DF=_cycalloc(sizeof(struct Cyc_List_List));
# 1734
_T2DF->hd=decl;_T2DF->tl=print_decls;_T1F4=(struct Cyc_List_List*)_T2DF;}print_decls=_T1F4;}goto _TL1AA;
# 1737
_TL1A9:{struct Cyc_List_List*_T2DF=_cycalloc(sizeof(struct Cyc_List_List));_T2DF->hd=decl;_T2DF->tl=print_decls;_T1F5=(struct Cyc_List_List*)_T2DF;}print_decls=_T1F5;_TL1AA:{struct Cyc_List_List*_T2DF=_cycalloc(sizeof(struct Cyc_List_List));
_T2DF->hd=name;_T2DF->tl=names;_T1F6=(struct Cyc_List_List*)_T2DF;}names=_T1F6;}_TL19E: _T1F7=d;
# 1673
d=_T1F7->tl;goto _TL1A1;_TL1A0:;}{struct _handler_cons _T2DF;_T1F8=& _T2DF;_push_handler(_T1F8);{int _T2E0=0;_T1F9=setjmp(_T2DF.handler);if(!_T1F9)goto _TL1AE;_T2E0=1;goto _TL1AF;_TL1AE: _TL1AF: if(_T2E0)goto _TL1B0;else{goto _TL1B2;}_TL1B2:
# 1743
 Cyc_Binding_resolve_all(print_decls);_T1FA=
Cyc_Tcenv_tc_init();_T1FB=print_decls;Cyc_Tc_tc(_T1FA,1,_T1FB);_pop_handler();goto _TL1B1;_TL1B0: _T1FC=Cyc_Core_get_exn_thrown();{void*_T2E1=(void*)_T1FC;{struct Cyc_NO_SUPPORT_exn_struct*_T2E2=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2E2->tag=Cyc_NO_SUPPORT;
# 1746
_T2E2->f1=_tag_fat("can't typecheck acquired declarations",sizeof(char),38U);_T1FD=(struct Cyc_NO_SUPPORT_exn_struct*)_T2E2;}_T1FE=(void*)_T1FD;_throw(_T1FE);;}_TL1B1:;}}{struct _tuple0 _T2DF;
# 1750
_T2DF.f0=print_decls;_T2DF.f1=names;_T1FF=_T2DF;}{struct _tuple0 _T2DF=_T1FF;struct Cyc_List_List*_T2E0;struct Cyc_List_List*_T2E1;_T2E1=_T2DF.f0;_T2E0=_T2DF.f1;{struct Cyc_List_List*d=_T2E1;struct Cyc_List_List*n=_T2E0;
_TL1B6:
# 1750
 if(d!=0)goto _TL1B7;else{goto _TL1B5;}_TL1B7: if(n!=0)goto _TL1B4;else{goto _TL1B5;}
# 1752
_TL1B4: _T200=d;_T201=_T200->hd;{struct Cyc_Absyn_Decl*decl=(struct Cyc_Absyn_Decl*)_T201;_T202=n;_T203=_T202->hd;{
struct _fat_ptr*name=(struct _fat_ptr*)_T203;
int anon_enum=0;_T204=name;_T205=(unsigned)_T204;
if(_T205)goto _TL1B8;else{goto _TL1BA;}
_TL1BA: anon_enum=1;goto _TL1B9;_TL1B8: _TL1B9: _T206=& Cyc_Absynpp_cyc_params_r;_T207=(struct Cyc_Absynpp_Params*)_T206;
# 1759
Cyc_Absynpp_set_params(_T207);_T208=name;_T209=(unsigned)_T208;
if(!_T209)goto _TL1BB;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;_T20C=name;
_T2E2.f1=*_T20C;_T20B=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T20B;void*_T2E3[1];_T2E3[0]=& _T2E2;_T20D=_tag_fat("_%s_def_",sizeof(char),9U);_T20E=_tag_fat(_T2E3,sizeof(void*),1);_T20A=Cyc_aprintf(_T20D,_T20E);}ifdefmacro=_T20A;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
_T2E2.f1=ifdefmacro;_T20F=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T20F;void*_T2E3[1];_T2E3[0]=& _T2E2;_T210=out_file;_T211=_tag_fat("#ifndef %s\n",sizeof(char),12U);_T212=_tag_fat(_T2E3,sizeof(void*),1);Cyc_fprintf(_T210,_T211,_T212);}{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
_T2E2.f1=ifdefmacro;_T213=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T213;void*_T2E3[1];_T2E3[0]=& _T2E2;_T214=out_file;_T215=_tag_fat("#define %s\n",sizeof(char),12U);_T216=_tag_fat(_T2E3,sizeof(void*),1);Cyc_fprintf(_T214,_T215,_T216);}{struct Cyc_Absyn_Decl*_T2E2[1];_T2E2[0]=decl;_T218=_tag_fat(_T2E2,sizeof(struct Cyc_Absyn_Decl*),1);_T217=Cyc_List_list(_T218);}_T219=out_file;
# 1765
Cyc_Absynpp_decllist2file(_T217,_T219);_T21A=out_file;_T21B=
_tag_fat("#endif\n",sizeof(char),8U);_T21C=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T21A,_T21B,_T21C);goto _TL1BC;
# 1770
_TL1BB:{struct Cyc_Absyn_Decl*_T2E2[1];_T2E2[0]=decl;_T21E=_tag_fat(_T2E2,sizeof(struct Cyc_Absyn_Decl*),1);_T21D=Cyc_List_list(_T21E);}_T21F=out_file;Cyc_Absynpp_decllist2file(_T21D,_T21F);_TL1BC:;}}_T220=d;
# 1751
d=_T220->tl;_T221=n;n=_T221->tl;goto _TL1B6;_TL1B5:;}}
# 1775
maybe=Cyc_fopen(macrosfile,"r");_T222=maybe;_T223=(unsigned)_T222;
if(_T223)goto _TL1BD;else{goto _TL1BF;}_TL1BF:{struct Cyc_NO_SUPPORT_exn_struct*_T2DF=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2DF->tag=Cyc_NO_SUPPORT;{struct Cyc_String_pa_PrintArg_struct _T2E0;_T2E0.tag=0;{const char*_T2E1=macrosfile;_T228=(void*)_T2E1;_T229=(void*)_T2E1;_T22A=_get_zero_arr_size_char(_T229,1U);_T227=_tag_fat(_T228,sizeof(char),_T22A);}
_T2E0.f1=_T227;_T226=_T2E0;}{struct Cyc_String_pa_PrintArg_struct _T2E0=_T226;void*_T2E1[1];_T2E1[0]=& _T2E0;_T22B=
# 1776
_tag_fat("can't open macrosfile %s",sizeof(char),25U);_T22C=_tag_fat(_T2E1,sizeof(void*),1);_T225=Cyc_aprintf(_T22B,_T22C);}_T2DF->f1=_T225;_T224=(struct Cyc_NO_SUPPORT_exn_struct*)_T2DF;}_T22D=(void*)_T224;_throw(_T22D);goto _TL1BE;_TL1BD: _TL1BE:
# 1778
 in_file=maybe;
l=Cyc_Lexing_from_file(in_file);{
struct _tuple14*entry2;
_TL1C0: entry2=Cyc_suck_line(l);_T22E=entry2;if(_T22E!=0)goto _TL1C1;else{goto _TL1C2;}
_TL1C1:{struct _tuple14*_T2DF=entry2;struct _fat_ptr*_T2E0;struct _fat_ptr _T2E1;{struct _tuple14 _T2E2=*_T2DF;_T2E1=_T2E2.f0;_T2E0=_T2E2.f1;}{struct _fat_ptr line=_T2E1;struct _fat_ptr*name=_T2E0;_T230=Cyc_Set_member;{
int(*_T2E2)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T230;_T22F=_T2E2;}_T231=_T22F(reachable_set,name);if(!_T231)goto _TL1C3;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;_T233=name;
_T2E2.f1=*_T233;_T232=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T232;void*_T2E3[1];_T2E3[0]=& _T2E2;_T234=out_file;_T235=_tag_fat("#ifndef %s\n",sizeof(char),12U);_T236=_tag_fat(_T2E3,sizeof(void*),1);Cyc_fprintf(_T234,_T235,_T236);}{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
_T2E2.f1=line;_T237=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T237;void*_T2E3[1];_T2E3[0]=& _T2E2;_T238=out_file;_T239=_tag_fat("%s\n",sizeof(char),4U);_T23A=_tag_fat(_T2E3,sizeof(void*),1);Cyc_fprintf(_T238,_T239,_T23A);}_T23B=out_file;_T23C=
_tag_fat("#endif\n",sizeof(char),8U);_T23D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T23B,_T23C,_T23D);goto _TL1C4;_TL1C3: _TL1C4:;}}goto _TL1C0;_TL1C2:
# 1789
 Cyc_fclose(in_file);_T23E=Cyc_mode;_T23F=(int)_T23E;
if(_T23F==3)goto _TL1C5;goto _TL1C6;_TL1C5: _TL1C6:
# 1792
 if(hstubs==0)goto _TL1C7;{
struct Cyc_List_List*x=hstubs;_TL1CC: if(x!=0)goto _TL1CA;else{goto _TL1CB;}
_TL1CA: _T240=x;_T241=_T240->hd;{struct _tuple15*_T2DF=(struct _tuple15*)_T241;struct _fat_ptr _T2E0;struct _fat_ptr _T2E1;{struct _tuple15 _T2E2=*_T2DF;_T2E1=_T2E2.f0;_T2E0=_T2E2.f1;}{struct _fat_ptr symbol=_T2E1;struct _fat_ptr text=_T2E0;_T242=text;_T243=_T242.curr;_T244=(char*)_T243;
if(_T244==0)goto _TL1CD;_T245=symbol;_T246=_T245.curr;_T247=(char*)_T246;
if(_T247!=0)goto _TL1CF;_T248=text;_T249=_untag_fat_ptr_check_bound(_T248,sizeof(char),1U);_T24A=(const char*)_T249;_T24B=out_file;
# 1798
Cyc_fputs(_T24A,_T24B);goto _TL1D0;
_TL1CF: _T24D=Cyc_Set_member;{int(*_T2E2)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T24D;_T24C=_T2E2;}_T24E=defined_symbols;{struct _fat_ptr*_T2E2=_cycalloc(sizeof(struct _fat_ptr));*_T2E2=symbol;_T24F=(struct _fat_ptr*)_T2E2;}_T250=_T24C(_T24E,_T24F);if(!_T250)goto _TL1D1;_T251=text;_T252=_untag_fat_ptr_check_bound(_T251,sizeof(char),1U);_T253=(const char*)_T252;_T254=out_file;
Cyc_fputs(_T253,_T254);goto _TL1D2;
# 1802
_TL1D1:{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;_T2E2.f1=symbol;_T255=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T255;void*_T2E3[1];_T2E3[0]=& _T2E2;_T256=_tag_fat("%s is not supported on this platform\n",sizeof(char),38U);_T257=_tag_fat(_T2E3,sizeof(void*),1);Cyc_log(_T256,_T257);}{
struct Cyc_Set_Set*x=defined_symbols;_TL1D6: _T258=Cyc_Set_is_empty(x);if(_T258)goto _TL1D5;else{goto _TL1D4;}
_TL1D4: _T25A=Cyc_Set_choose;{struct _fat_ptr*(*_T2E2)(struct Cyc_Set_Set*)=(struct _fat_ptr*(*)(struct Cyc_Set_Set*))_T25A;_T259=_T2E2;}{struct _fat_ptr*y=_T259(x);_T25C=Cyc_Set_delete;{struct Cyc_Set_Set*(*_T2E2)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T25C;_T25B=_T2E2;}x=_T25B(x,y);{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;_T25E=y;
_T2E2.f1=*_T25E;_T25D=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T25D;void*_T2E3[1];_T2E3[0]=& _T2E2;_T25F=_tag_fat("+%s",sizeof(char),4U);_T260=_tag_fat(_T2E3,sizeof(void*),1);Cyc_log(_T25F,_T260);}_T261=
_tag_fat("\n",sizeof(char),2U);_T262=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T261,_T262);}goto _TL1D6;_TL1D5:;}_TL1D2: _TL1D0: goto _TL1CE;
# 1811
_TL1CD:{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
_T2E2.f1=symbol;_T263=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T263;void*_T2E3[1];_T2E3[0]=& _T2E2;_T264=
# 1811
_tag_fat("Null text for %s, will not be supported on this platform\n",sizeof(char),58U);_T265=_tag_fat(_T2E3,sizeof(void*),1);Cyc_log(_T264,_T265);}_TL1CE:;}}_T266=x;
# 1793
x=_T266->tl;goto _TL1CC;_TL1CB:;}goto _TL1C8;_TL1C7: _TL1C8: _T267=out_file;_T268=
# 1815
_tag_fat("#endif\n",sizeof(char),8U);_T269=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T267,_T268,_T269);_T26A=Cyc_do_setjmp;
if(_T26A)goto _TL1D7;else{goto _TL1D9;}
_TL1D9: _T26B=out_file;_T26C=_tag_fat("}\n",sizeof(char),3U);_T26D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T26B,_T26C,_T26D);goto _TL1D8;_TL1D7: _TL1D8: _T26E=Cyc_do_setjmp;
if(!_T26E)goto _TL1DA;{int _T2DF=0;_npop_handler(0);return _T2DF;}
_TL1DA: Cyc_fclose(out_file);
# 1822
if(cstubs==0)goto _TL1DC;
out_file=_check_null(Cyc_cstubs_file);{
struct Cyc_List_List*x=cstubs;_TL1E1: if(x!=0)goto _TL1DF;else{goto _TL1E0;}
_TL1DF: _T26F=x;_T270=_T26F->hd;{struct _tuple15*_T2DF=(struct _tuple15*)_T270;struct _fat_ptr _T2E0;struct _fat_ptr _T2E1;{struct _tuple15 _T2E2=*_T2DF;_T2E1=_T2E2.f0;_T2E0=_T2E2.f1;}{struct _fat_ptr symbol=_T2E1;struct _fat_ptr text=_T2E0;_T271=text;_T272=_T271.curr;_T273=(char*)_T272;
if(_T273==0)goto _TL1E2;_T274=symbol;_T275=_T274.curr;_T276=(char*)_T275;if(_T276==0)goto _TL1E4;else{goto _TL1E5;}_TL1E5: _T278=Cyc_Set_member;{
int(*_T2E2)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T278;_T277=_T2E2;}_T279=defined_symbols;{struct _fat_ptr*_T2E2=_cycalloc(sizeof(struct _fat_ptr));*_T2E2=symbol;_T27A=(struct _fat_ptr*)_T2E2;}_T27B=_T277(_T279,_T27A);
# 1826
if(_T27B)goto _TL1E4;else{goto _TL1E2;}
# 1828
_TL1E4: _T27C=text;_T27D=_untag_fat_ptr_check_bound(_T27C,sizeof(char),1U);_T27E=(const char*)_T27D;_T27F=out_file;Cyc_fputs(_T27E,_T27F);goto _TL1E3;_TL1E2: _TL1E3:;}}_T280=x;
# 1824
x=_T280->tl;goto _TL1E1;_TL1E0:;}goto _TL1DD;_TL1DC: _TL1DD:
# 1833
 out_file=_check_null(Cyc_cycstubs_file);
if(cycstubs==0)goto _TL1E6;{struct Cyc_String_pa_PrintArg_struct _T2DF;_T2DF.tag=0;{const char*_T2E0=filename;_T283=(void*)_T2E0;_T284=(void*)_T2E0;_T285=_get_zero_arr_size_char(_T284,1U);_T282=_tag_fat(_T283,sizeof(char),_T285);}
# 1838
_T2DF.f1=_T282;_T281=_T2DF;}{struct Cyc_String_pa_PrintArg_struct _T2DF=_T281;void*_T2E0[1];_T2E0[0]=& _T2DF;_T286=out_file;_T287=_tag_fat("#include <%s>\n\n",sizeof(char),16U);_T288=_tag_fat(_T2E0,sizeof(void*),1);Cyc_fprintf(_T286,_T287,_T288);}
out_file=_check_null(Cyc_cycstubs_file);{
struct Cyc_List_List*x=cycstubs;_TL1EB: if(x!=0)goto _TL1E9;else{goto _TL1EA;}
_TL1E9: _T289=x;_T28A=_T289->hd;{struct _tuple15*_T2DF=(struct _tuple15*)_T28A;struct _fat_ptr _T2E0;struct _fat_ptr _T2E1;{struct _tuple15 _T2E2=*_T2DF;_T2E1=_T2E2.f0;_T2E0=_T2E2.f1;}{struct _fat_ptr symbol=_T2E1;struct _fat_ptr text=_T2E0;_T28B=text;_T28C=_T28B.curr;_T28D=(char*)_T28C;
if(_T28D==0)goto _TL1EC;_T28E=symbol;_T28F=_T28E.curr;_T290=(char*)_T28F;if(_T290==0)goto _TL1EE;else{goto _TL1EF;}_TL1EF: _T292=Cyc_Set_member;{
int(*_T2E2)(struct Cyc_Set_Set*,struct _fat_ptr*)=(int(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T292;_T291=_T2E2;}_T293=defined_symbols;{struct _fat_ptr*_T2E2=_cycalloc(sizeof(struct _fat_ptr));*_T2E2=symbol;_T294=(struct _fat_ptr*)_T2E2;}_T295=_T291(_T293,_T294);
# 1842
if(_T295)goto _TL1EE;else{goto _TL1EC;}
# 1844
_TL1EE: _T296=text;_T297=_untag_fat_ptr_check_bound(_T296,sizeof(char),1U);_T298=(const char*)_T297;_T299=out_file;Cyc_fputs(_T298,_T299);goto _TL1ED;_TL1EC: _TL1ED:;}}_T29A=x;
# 1840
x=_T29A->tl;goto _TL1EB;_TL1EA:;}_T29B=out_file;_T29C=
# 1846
_tag_fat("\n",sizeof(char),2U);_T29D=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T29B,_T29C,_T29D);goto _TL1E7;_TL1E6: _TL1E7: {int _T2DF=0;_npop_handler(0);return _T2DF;}}}}}}}}}}}_pop_handler();goto _TL120;_TL11F: _T29E=Cyc_Core_get_exn_thrown();{void*_T2DF=(void*)_T29E;void*_T2E0;struct _fat_ptr _T2E1;_T29F=(struct Cyc_Core_Impossible_exn_struct*)_T2DF;_T2A0=_T29F->tag;_T2A1=Cyc_Core_Impossible;if(_T2A0!=_T2A1)goto _TL1F0;{struct Cyc_Core_Impossible_exn_struct*_T2E2=(struct Cyc_Core_Impossible_exn_struct*)_T2DF;_T2E1=_T2E2->f1;}{struct _fat_ptr s=_T2E1;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
# 1853
_T2E2.f1=s;_T2A2=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T2A2;void*_T2E3[1];_T2E3[0]=& _T2E2;_T2A3=_tag_fat("Got Core::Impossible(%s)\n",sizeof(char),26U);_T2A4=_tag_fat(_T2E3,sizeof(void*),1);Cyc_log(_T2A3,_T2A4);}goto _LL89;}_TL1F0: _T2A5=(struct Cyc_Dict_Absent_exn_struct*)_T2DF;_T2A6=_T2A5->tag;_T2A7=Cyc_Dict_Absent;if(_T2A6!=_T2A7)goto _TL1F2;_T2A8=
# 1855
_tag_fat("Got Dict::Absent\n",sizeof(char),18U);_T2A9=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2A8,_T2A9);goto _LL89;_TL1F2: _T2AA=(struct Cyc_Core_Failure_exn_struct*)_T2DF;_T2AB=_T2AA->tag;_T2AC=Cyc_Core_Failure;if(_T2AB!=_T2AC)goto _TL1F4;{struct Cyc_Core_Failure_exn_struct*_T2E2=(struct Cyc_Core_Failure_exn_struct*)_T2DF;_T2E1=_T2E2->f1;}{struct _fat_ptr s=_T2E1;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
# 1857
_T2E2.f1=s;_T2AD=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T2AD;void*_T2E3[1];_T2E3[0]=& _T2E2;_T2AE=_tag_fat("Got Core::Failure(%s)\n",sizeof(char),23U);_T2AF=_tag_fat(_T2E3,sizeof(void*),1);Cyc_log(_T2AE,_T2AF);}goto _LL89;}_TL1F4: _T2B0=(struct Cyc_Core_Invalid_argument_exn_struct*)_T2DF;_T2B1=_T2B0->tag;_T2B2=Cyc_Core_Invalid_argument;if(_T2B1!=_T2B2)goto _TL1F6;{struct Cyc_Core_Invalid_argument_exn_struct*_T2E2=(struct Cyc_Core_Invalid_argument_exn_struct*)_T2DF;_T2E1=_T2E2->f1;}{struct _fat_ptr s=_T2E1;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
# 1859
_T2E2.f1=s;_T2B3=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T2B3;void*_T2E3[1];_T2E3[0]=& _T2E2;_T2B4=_tag_fat("Got Invalid_argument(%s)\n",sizeof(char),26U);_T2B5=_tag_fat(_T2E3,sizeof(void*),1);Cyc_log(_T2B4,_T2B5);}goto _LL89;}_TL1F6: _T2B6=(struct Cyc_Core_Not_found_exn_struct*)_T2DF;_T2B7=_T2B6->tag;_T2B8=Cyc_Core_Not_found;if(_T2B7!=_T2B8)goto _TL1F8;_T2B9=
# 1861
_tag_fat("Got Not_found\n",sizeof(char),15U);_T2BA=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2B9,_T2BA);goto _LL89;_TL1F8: _T2BB=(struct Cyc_NO_SUPPORT_exn_struct*)_T2DF;_T2BC=_T2BB->tag;_T2BD=Cyc_NO_SUPPORT;if(_T2BC!=_T2BD)goto _TL1FA;{struct Cyc_NO_SUPPORT_exn_struct*_T2E2=(struct Cyc_NO_SUPPORT_exn_struct*)_T2DF;_T2E1=_T2E2->f1;}{struct _fat_ptr s=_T2E1;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
# 1863
_T2E2.f1=s;_T2BE=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T2BE;void*_T2E3[1];_T2E3[0]=& _T2E2;_T2BF=_tag_fat("No support because %s\n",sizeof(char),23U);_T2C0=_tag_fat(_T2E3,sizeof(void*),1);Cyc_log(_T2BF,_T2C0);}goto _LL89;}_TL1FA: _T2C1=(struct Cyc_Lexing_Error_exn_struct*)_T2DF;_T2C2=_T2C1->tag;_T2C3=Cyc_Lexing_Error;if(_T2C2!=_T2C3)goto _TL1FC;{struct Cyc_Lexing_Error_exn_struct*_T2E2=(struct Cyc_Lexing_Error_exn_struct*)_T2DF;_T2E1=_T2E2->f1;}{struct _fat_ptr s=_T2E1;{struct Cyc_String_pa_PrintArg_struct _T2E2;_T2E2.tag=0;
# 1865
_T2E2.f1=s;_T2C4=_T2E2;}{struct Cyc_String_pa_PrintArg_struct _T2E2=_T2C4;void*_T2E3[1];_T2E3[0]=& _T2E2;_T2C5=_tag_fat("Got a lexing error %s\n",sizeof(char),23U);_T2C6=_tag_fat(_T2E3,sizeof(void*),1);Cyc_log(_T2C5,_T2C6);}goto _LL89;}_TL1FC: _T2E0=_T2DF;{void*x=_T2E0;_T2C7=
# 1867
_tag_fat("Got unknown exception\n",sizeof(char),23U);_T2C8=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2C7,_T2C8);
Cyc_Core_rethrow(x);}_LL89:;}_TL120:;}}
# 1873
maybe=Cyc_fopen(filename,"w");_T2C9=maybe;_T2CA=(unsigned)_T2C9;
if(_T2CA)goto _TL1FE;else{goto _TL200;}
_TL200:{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;{const char*_T2DE=filename;_T2CD=(void*)_T2DE;_T2CE=(void*)_T2DE;_T2CF=_get_zero_arr_size_char(_T2CE,1U);_T2CC=_tag_fat(_T2CD,sizeof(char),_T2CF);}_T2DD.f1=_T2CC;_T2CB=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T2CB;void*_T2DE[1];_T2DE[0]=& _T2DD;_T2D0=Cyc_stderr;_T2D1=_tag_fat("Error: could not create file %s\n",sizeof(char),33U);_T2D2=_tag_fat(_T2DE,sizeof(void*),1);Cyc_fprintf(_T2D0,_T2D1,_T2D2);}
return 1;_TL1FE:
# 1878
 out_file=maybe;{struct Cyc_String_pa_PrintArg_struct _T2DD;_T2DD.tag=0;{const char*_T2DE=filename;_T2D5=(void*)_T2DE;_T2D6=(void*)_T2DE;_T2D7=_get_zero_arr_size_char(_T2D6,1U);_T2D4=_tag_fat(_T2D5,sizeof(char),_T2D7);}
# 1881
_T2DD.f1=_T2D4;_T2D3=_T2DD;}{struct Cyc_String_pa_PrintArg_struct _T2DD=_T2D3;void*_T2DE[1];_T2DE[0]=& _T2DD;_T2D8=out_file;_T2D9=
# 1880
_tag_fat("#error -- %s is not supported on this platform\n",sizeof(char),48U);_T2DA=_tag_fat(_T2DE,sizeof(void*),1);Cyc_fprintf(_T2D8,_T2D9,_T2DA);}
# 1882
Cyc_fclose(out_file);_T2DB=
# 1885
_tag_fat("Not supported on this platform\n",sizeof(char),32U);_T2DC=_tag_fat(0U,sizeof(void*),0);Cyc_log(_T2DB,_T2DC);
# 1892
return 0;}}}}}}}
# 1896
int Cyc_process_specfile(const char*file,const char*dir){int _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;void*_T3;void*_T4;unsigned _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc___cycFILE*_T9;unsigned _TA;struct Cyc_String_pa_PrintArg_struct _TB;struct _fat_ptr _TC;void*_TD;void*_TE;unsigned _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;char*_T13;char*_T14;unsigned _T15;unsigned _T16;struct _fat_ptr _T17;struct _fat_ptr _T18;unsigned _T19;enum Cyc_buildlib_mode _T1A;int _T1B;int _T1C;struct Cyc_String_pa_PrintArg_struct _T1D;struct _fat_ptr _T1E;void*_T1F;void*_T20;unsigned _T21;struct Cyc___cycFILE*_T22;struct _fat_ptr _T23;struct _fat_ptr _T24;enum Cyc_buildlib_mode _T25;int _T26;struct _fat_ptr _T27;struct Cyc_String_pa_PrintArg_struct _T28;struct Cyc_String_pa_PrintArg_struct _T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;int _T2C;struct Cyc_String_pa_PrintArg_struct _T2D;struct Cyc___cycFILE*_T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;unsigned char*_T32;unsigned char*_T33;const char*_T34;struct _tuple17*_T35;struct _fat_ptr _T36;unsigned char*_T37;unsigned char*_T38;const char*_T39;struct Cyc_List_List*_T3A;struct Cyc_List_List*_T3B;struct Cyc_List_List*_T3C;struct Cyc_List_List*_T3D;struct Cyc_List_List*_T3E;struct Cyc_List_List*_T3F;struct Cyc_List_List*_T40;int _T41;enum Cyc_buildlib_mode _T42;int _T43;struct _fat_ptr _T44;unsigned char*_T45;unsigned char*_T46;char*_T47;int _T48;struct Cyc_String_pa_PrintArg_struct _T49;struct Cyc___cycFILE*_T4A;struct _fat_ptr _T4B;struct _fat_ptr _T4C;_T0=Cyc_verbose;
if(!_T0)goto _TL201;{struct Cyc_String_pa_PrintArg_struct _T4D;_T4D.tag=0;{const char*_T4E=file;_T3=(void*)_T4E;_T4=(void*)_T4E;_T5=_get_zero_arr_size_char(_T4,1U);_T2=_tag_fat(_T3,sizeof(char),_T5);}
_T4D.f1=_T2;_T1=_T4D;}{struct Cyc_String_pa_PrintArg_struct _T4D=_T1;void*_T4E[1];_T4E[0]=& _T4D;_T6=Cyc_stderr;_T7=_tag_fat("Processing %s\n",sizeof(char),15U);_T8=_tag_fat(_T4E,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}goto _TL202;_TL201: _TL202: {
struct Cyc___cycFILE*maybe=Cyc_fopen(file,"r");_T9=maybe;_TA=(unsigned)_T9;
if(_TA)goto _TL203;else{goto _TL205;}
_TL205:{struct Cyc_String_pa_PrintArg_struct _T4D;_T4D.tag=0;{const char*_T4E=file;_TD=(void*)_T4E;_TE=(void*)_T4E;_TF=_get_zero_arr_size_char(_TE,1U);_TC=_tag_fat(_TD,sizeof(char),_TF);}_T4D.f1=_TC;_TB=_T4D;}{struct Cyc_String_pa_PrintArg_struct _T4D=_TB;void*_T4E[1];_T4E[0]=& _T4D;_T10=Cyc_stderr;_T11=_tag_fat("Error: could not open %s\n",sizeof(char),26U);_T12=_tag_fat(_T4E,sizeof(void*),1);Cyc_fprintf(_T10,_T11,_T12);}
return 1;_TL203: {
# 1904
struct Cyc___cycFILE*in_file=maybe;{unsigned _T4D=1024U + 1U;_T15=_check_times(_T4D,sizeof(char));{char*_T4E=_cycalloc_atomic(_T15);{unsigned _T4F=_T4D;unsigned i;i=0;_TL209: if(i < _T4F)goto _TL207;else{goto _TL208;}_TL207: _T16=i;
# 1908
_T4E[_T16]='\000';i=i + 1;goto _TL209;_TL208: _T4E[_T4F]=0;}_T14=(char*)_T4E;}_T13=_T14;}{struct _fat_ptr buf=_tag_fat(_T13,sizeof(char),1025U);_T17=buf;_T18=buf;_T19=
_get_fat_size(_T18,sizeof(char));{struct _fat_ptr cwd=Cyc_getcwd(_T17,_T19);_T1A=Cyc_mode;_T1B=(int)_T1A;
if(_T1B==2)goto _TL20A;_T1C=
chdir(dir);if(!_T1C)goto _TL20C;{struct Cyc_String_pa_PrintArg_struct _T4D;_T4D.tag=0;{const char*_T4E=dir;_T1F=(void*)_T4E;_T20=(void*)_T4E;_T21=_get_zero_arr_size_char(_T20,1U);_T1E=_tag_fat(_T1F,sizeof(char),_T21);}
_T4D.f1=_T1E;_T1D=_T4D;}{struct Cyc_String_pa_PrintArg_struct _T4D=_T1D;void*_T4E[1];_T4E[0]=& _T4D;_T22=Cyc_stderr;_T23=_tag_fat("Error: can't change directory to %s\n",sizeof(char),37U);_T24=_tag_fat(_T4E,sizeof(void*),1);Cyc_fprintf(_T22,_T23,_T24);}
return 1;_TL20C: goto _TL20B;_TL20A: _TL20B: _T25=Cyc_mode;_T26=(int)_T25;
# 1916
if(_T26!=1)goto _TL20E;{struct Cyc_String_pa_PrintArg_struct _T4D;_T4D.tag=0;
# 1919
_T4D.f1=Cyc_cyclone_cc;_T28=_T4D;}{struct Cyc_String_pa_PrintArg_struct _T4D=_T28;{struct Cyc_String_pa_PrintArg_struct _T4E;_T4E.tag=0;_T4E.f1=Cyc_target_cflags;_T29=_T4E;}{struct Cyc_String_pa_PrintArg_struct _T4E=_T29;void*_T4F[2];_T4F[0]=& _T4D;_T4F[1]=& _T4E;_T2A=
# 1918
_tag_fat("echo | %s %s -E -dM - -o INITMACROS.h\n",sizeof(char),39U);_T2B=_tag_fat(_T4F,sizeof(void*),2);_T27=Cyc_aprintf(_T2A,_T2B);}}{struct _fat_ptr cmd=_T27;_T2C=Cyc_verbose;
# 1920
if(!_T2C)goto _TL210;{struct Cyc_String_pa_PrintArg_struct _T4D;_T4D.tag=0;
_T4D.f1=cmd;_T2D=_T4D;}{struct Cyc_String_pa_PrintArg_struct _T4D=_T2D;void*_T4E[1];_T4E[0]=& _T4D;_T2E=Cyc_stderr;_T2F=_tag_fat("%s\n",sizeof(char),4U);_T30=_tag_fat(_T4E,sizeof(void*),1);Cyc_fprintf(_T2E,_T2F,_T30);}goto _TL211;_TL210: _TL211: _T31=cmd;_T32=_untag_fat_ptr(_T31,sizeof(char),1U);_T33=_check_null(_T32);_T34=(const char*)_T33;
system(_T34);}goto _TL20F;_TL20E: _TL20F: {
# 1925
struct Cyc_Lexing_lexbuf*l=Cyc_Lexing_from_file(in_file);
struct _tuple17*entry;
_TL212: entry=Cyc_spec(l);_T35=entry;if(_T35!=0)goto _TL213;else{goto _TL214;}
_TL213:{struct _tuple17*_T4D=entry;struct Cyc_List_List*_T4E;struct Cyc_List_List*_T4F;struct Cyc_List_List*_T50;struct Cyc_List_List*_T51;struct Cyc_List_List*_T52;struct Cyc_List_List*_T53;struct Cyc_List_List*_T54;struct _fat_ptr _T55;{struct _tuple17 _T56=*_T4D;_T55=_T56.f0;_T54=_T56.f1;_T53=_T56.f2;_T52=_T56.f3;_T51=_T56.f4;_T50=_T56.f5;_T4F=_T56.f6;_T4E=_T56.f7;}{struct _fat_ptr headerfile=_T55;struct Cyc_List_List*start_symbols=_T54;struct Cyc_List_List*user_defs=_T53;struct Cyc_List_List*omit_symbols=_T52;struct Cyc_List_List*hstubs=_T51;struct Cyc_List_List*cstubs=_T50;struct Cyc_List_List*cycstubs=_T4F;struct Cyc_List_List*cpp_insert=_T4E;_T36=headerfile;_T37=_untag_fat_ptr(_T36,sizeof(char),1U);_T38=_check_null(_T37);_T39=(const char*)_T38;_T3A=start_symbols;_T3B=user_defs;_T3C=omit_symbols;_T3D=hstubs;_T3E=cstubs;_T3F=cycstubs;_T40=cpp_insert;_T41=
# 1930
Cyc_process_file(_T39,_T3A,_T3B,_T3C,_T3D,_T3E,_T3F,_T40);if(!_T41)goto _TL215;
# 1932
return 1;_TL215:;}}goto _TL212;_TL214:
# 1934
 Cyc_fclose(in_file);_T42=Cyc_mode;_T43=(int)_T42;
# 1936
if(_T43==2)goto _TL217;_T44=cwd;_T45=_untag_fat_ptr(_T44,sizeof(char),1U);_T46=_check_null(_T45);_T47=(char*)_T46;_T48=
chdir(_T47);if(!_T48)goto _TL219;{struct Cyc_String_pa_PrintArg_struct _T4D;_T4D.tag=0;
_T4D.f1=cwd;_T49=_T4D;}{struct Cyc_String_pa_PrintArg_struct _T4D=_T49;void*_T4E[1];_T4E[0]=& _T4D;_T4A=Cyc_stderr;_T4B=_tag_fat("Error: could not change directory to %s\n",sizeof(char),41U);_T4C=_tag_fat(_T4E,sizeof(void*),1);Cyc_fprintf(_T4A,_T4B,_T4C);}
return 1;_TL219: goto _TL218;_TL217: _TL218:
# 1942
 return 0;}}}}}}
# 1946
int Cyc_process_setjmp(const char*dir){char*_T0;char*_T1;unsigned _T2;unsigned _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;unsigned _T6;int _T7;struct Cyc_String_pa_PrintArg_struct _T8;struct _fat_ptr _T9;void*_TA;void*_TB;unsigned _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;struct Cyc_List_List*_T10;struct _fat_ptr*_T11;struct _fat_ptr _T12;struct Cyc_List_List*_T13;struct _tuple15*_T14;struct _fat_ptr _T15;int _T16;struct _fat_ptr _T17;unsigned char*_T18;unsigned char*_T19;char*_T1A;int _T1B;struct Cyc_String_pa_PrintArg_struct _T1C;struct Cyc___cycFILE*_T1D;struct _fat_ptr _T1E;struct _fat_ptr _T1F;{unsigned _T20=1024U + 1U;_T2=_check_times(_T20,sizeof(char));{char*_T21=_cycalloc_atomic(_T2);{unsigned _T22=_T20;unsigned i;i=0;_TL21E: if(i < _T22)goto _TL21C;else{goto _TL21D;}_TL21C: _T3=i;
# 1949
_T21[_T3]='\000';i=i + 1;goto _TL21E;_TL21D: _T21[_T22]=0;}_T1=(char*)_T21;}_T0=_T1;}{struct _fat_ptr buf=_tag_fat(_T0,sizeof(char),1025U);_T4=buf;_T5=buf;_T6=
_get_fat_size(_T5,sizeof(char));{struct _fat_ptr cwd=Cyc_getcwd(_T4,_T6);_T7=
chdir(dir);if(!_T7)goto _TL21F;{struct Cyc_String_pa_PrintArg_struct _T20;_T20.tag=0;{const char*_T21=dir;_TA=(void*)_T21;_TB=(void*)_T21;_TC=_get_zero_arr_size_char(_TB,1U);_T9=_tag_fat(_TA,sizeof(char),_TC);}
_T20.f1=_T9;_T8=_T20;}{struct Cyc_String_pa_PrintArg_struct _T20=_T8;void*_T21[1];_T21[0]=& _T20;_TD=Cyc_stderr;_TE=_tag_fat("Error: can't change directory to %s\n",sizeof(char),37U);_TF=_tag_fat(_T21,sizeof(void*),1);Cyc_fprintf(_TD,_TE,_TF);}
return 1;_TL21F:{struct _fat_ptr*_T20[1];{struct _fat_ptr*_T21=_cycalloc(sizeof(struct _fat_ptr));
# 1955
*_T21=_tag_fat("jmp_buf",sizeof(char),8U);_T11=(struct _fat_ptr*)_T21;}_T20[0]=_T11;_T12=_tag_fat(_T20,sizeof(struct _fat_ptr*),1);_T10=Cyc_List_list(_T12);}{struct _tuple15*_T20[1];{struct _tuple15*_T21=_cycalloc(sizeof(struct _tuple15));
_T21->f0=_tag_fat("setjmp",sizeof(char),7U);_T21->f1=_tag_fat("extern int setjmp(jmp_buf);\n",sizeof(char),29U);_T14=(struct _tuple15*)_T21;}_T20[0]=_T14;_T15=_tag_fat(_T20,sizeof(struct _tuple15*),1);_T13=Cyc_List_list(_T15);}_T16=
# 1955
Cyc_process_file("setjmp.h",_T10,0,0,_T13,0,0,0);if(!_T16)goto _TL221;
# 1958
return 1;_TL221: _T17=cwd;_T18=_untag_fat_ptr(_T17,sizeof(char),1U);_T19=_check_null(_T18);_T1A=(char*)_T19;_T1B=
chdir(_T1A);if(!_T1B)goto _TL223;{struct Cyc_String_pa_PrintArg_struct _T20;_T20.tag=0;
_T20.f1=cwd;_T1C=_T20;}{struct Cyc_String_pa_PrintArg_struct _T20=_T1C;void*_T21[1];_T21[0]=& _T20;_T1D=Cyc_stderr;_T1E=_tag_fat("Error: could not change directory to %s\n",sizeof(char),41U);_T1F=_tag_fat(_T21,sizeof(void*),1);Cyc_fprintf(_T1D,_T1E,_T1F);}
return 1;_TL223:
# 1963
 return 0;}}}static char _TmpG3[13U]="BUILDLIB.OUT";
# 1967
static struct _fat_ptr Cyc_output_dir={(unsigned char*)_TmpG3,(unsigned char*)_TmpG3,(unsigned char*)_TmpG3 + 13U};
static void Cyc_set_output_dir(struct _fat_ptr s){
Cyc_output_dir=s;}
# 1971
static struct Cyc_List_List*Cyc_spec_files=0;
static void Cyc_add_spec_file(struct _fat_ptr s){struct Cyc_List_List*_T0;struct _fat_ptr _T1;unsigned char*_T2;unsigned char*_T3;{struct Cyc_List_List*_T4=_cycalloc(sizeof(struct Cyc_List_List));_T1=s;_T2=_untag_fat_ptr_check_bound(_T1,sizeof(char),1U);_T3=_check_null(_T2);
_T4->hd=(const char*)_T3;_T4->tl=Cyc_spec_files;_T0=(struct Cyc_List_List*)_T4;}Cyc_spec_files=_T0;}
# 1975
static int Cyc_no_other(struct _fat_ptr s){return 0;}
static void Cyc_set_GATHER (void){
Cyc_mode=1U;}
# 1979
static void Cyc_set_GATHERSCRIPT (void){
Cyc_mode=2U;}
# 1982
static void Cyc_set_FINISH (void){
Cyc_mode=3U;}
# 1985
static void Cyc_add_cpparg(struct _fat_ptr s){struct Cyc_List_List*_T0;struct _fat_ptr*_T1;{struct Cyc_List_List*_T2=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T3=_cycalloc(sizeof(struct _fat_ptr));
*_T3=s;_T1=(struct _fat_ptr*)_T3;}_T2->hd=_T1;_T2->tl=Cyc_cppargs;_T0=(struct Cyc_List_List*)_T2;}Cyc_cppargs=_T0;}
# 1988
static int Cyc_badparse=0;
static void Cyc_unsupported_option(struct _fat_ptr s){struct Cyc_String_pa_PrintArg_struct _T0;struct Cyc___cycFILE*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag=0;
_T4.f1=s;_T0=_T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T0;void*_T5[1];_T5[0]=& _T4;_T1=Cyc_stderr;_T2=_tag_fat("Unsupported option %s\n",sizeof(char),23U);_T3=_tag_fat(_T5,sizeof(void*),1);Cyc_fprintf(_T1,_T2,_T3);}
Cyc_badparse=1;}
# 1993
static void Cyc_set_header(struct _fat_ptr s){struct Cyc_Set_Set**_T0;unsigned _T1;struct Cyc_Set_Set**_T2;struct Cyc_Set_Set*(*_T3)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T4)(int(*)(void*,void*));int(*_T5)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Set_Set**_T6;struct Cyc_Set_Set*(*_T7)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T8)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T9;struct Cyc_Set_Set*_TA;struct _fat_ptr*_TB;_T0=Cyc_headers_to_do;_T1=(unsigned)_T0;
if(_T1)goto _TL225;else{goto _TL227;}
_TL227:{struct Cyc_Set_Set**_TC=_cycalloc(sizeof(struct Cyc_Set_Set*));_T4=Cyc_Set_empty;{struct Cyc_Set_Set*(*_TD)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T4;_T3=_TD;}_T5=Cyc_strptrcmp;*_TC=_T3(_T5);_T2=(struct Cyc_Set_Set**)_TC;}Cyc_headers_to_do=_T2;goto _TL226;_TL225: _TL226: _T6=
_check_null(Cyc_headers_to_do);_T8=Cyc_Set_insert;{struct Cyc_Set_Set*(*_TC)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T8;_T7=_TC;}_T9=Cyc_headers_to_do;_TA=*_T9;{struct _fat_ptr*_TC=_cycalloc(sizeof(struct _fat_ptr));*_TC=s;_TB=(struct _fat_ptr*)_TC;}*_T6=_T7(_TA,_TB);}
# 2002
extern void GC_blacklist_warn_clear (void);struct _tuple19{struct _fat_ptr f0;int f1;struct _fat_ptr f2;void*f3;struct _fat_ptr f4;};
int Cyc_main(int argc,struct _fat_ptr argv){struct Cyc_List_List*_T0;struct _tuple19*_T1;struct Cyc_Arg_String_spec_Arg_Spec_struct*_T2;struct _tuple19*_T3;struct Cyc_Arg_Unit_spec_Arg_Spec_struct*_T4;struct _tuple19*_T5;struct Cyc_Arg_Unit_spec_Arg_Spec_struct*_T6;struct _tuple19*_T7;struct Cyc_Arg_Unit_spec_Arg_Spec_struct*_T8;struct _tuple19*_T9;struct Cyc_Arg_Set_spec_Arg_Spec_struct*_TA;struct _tuple19*_TB;struct Cyc_Arg_String_spec_Arg_Spec_struct*_TC;struct _tuple19*_TD;struct Cyc_Arg_Flag_spec_Arg_Spec_struct*_TE;struct _tuple19*_TF;struct Cyc_Arg_String_spec_Arg_Spec_struct*_T10;struct _tuple19*_T11;struct Cyc_Arg_Set_spec_Arg_Spec_struct*_T12;struct _tuple19*_T13;struct Cyc_Arg_Flag_spec_Arg_Spec_struct*_T14;struct _fat_ptr _T15;struct Cyc_List_List*_T16;struct _fat_ptr _T17;struct _fat_ptr _T18;struct Cyc_List_List*_T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;int _T1C;int _T1D;int _T1E;int _T1F;enum Cyc_buildlib_mode _T20;int _T21;int _T22;enum Cyc_buildlib_mode _T23;int _T24;struct Cyc_List_List*_T25;struct _fat_ptr _T26;struct _fat_ptr _T27;int _T28;struct Cyc_String_pa_PrintArg_struct _T29;struct Cyc___cycFILE*_T2A;struct _fat_ptr _T2B;struct _fat_ptr _T2C;struct Cyc_List_List*_T2D;struct _fat_ptr _T2E;int _T2F;struct Cyc_String_pa_PrintArg_struct _T30;struct Cyc___cycFILE*_T31;struct _fat_ptr _T32;struct _fat_ptr _T33;struct Cyc_List_List*_T34;struct _fat_ptr _T35;struct _fat_ptr _T36;unsigned char*_T37;unsigned _T38;int _T39;struct Cyc_String_pa_PrintArg_struct _T3A;struct Cyc___cycFILE*_T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;enum Cyc_buildlib_mode _T3E;int _T3F;int _T40;struct Cyc___cycFILE*_T41;struct _fat_ptr _T42;struct _fat_ptr _T43;struct Cyc___cycFILE*_T44;unsigned _T45;struct Cyc___cycFILE*_T46;struct _fat_ptr _T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct _fat_ptr _T4A;struct _fat_ptr _T4B;struct _fat_ptr _T4C;int _T4D;int _T4E;struct Cyc_String_pa_PrintArg_struct _T4F;struct Cyc___cycFILE*_T50;struct _fat_ptr _T51;struct _fat_ptr _T52;int _T53;struct Cyc_String_pa_PrintArg_struct _T54;struct Cyc___cycFILE*_T55;struct _fat_ptr _T56;struct _fat_ptr _T57;enum Cyc_buildlib_mode _T58;int _T59;struct Cyc_String_pa_PrintArg_struct _T5A;struct _fat_ptr _T5B;struct _fat_ptr _T5C;struct Cyc_String_pa_PrintArg_struct _T5D;struct _fat_ptr _T5E;struct _fat_ptr _T5F;int _T60;struct _fat_ptr _T61;struct _fat_ptr _T62;struct _fat_ptr _T63;unsigned char*_T64;unsigned char*_T65;const char*_T66;struct Cyc___cycFILE*_T67;unsigned _T68;struct Cyc_String_pa_PrintArg_struct _T69;struct Cyc___cycFILE*_T6A;struct _fat_ptr _T6B;struct _fat_ptr _T6C;int _T6D;struct _fat_ptr _T6E;struct _fat_ptr _T6F;struct _fat_ptr _T70;unsigned char*_T71;unsigned char*_T72;const char*_T73;struct Cyc___cycFILE*_T74;unsigned _T75;struct Cyc_String_pa_PrintArg_struct _T76;struct Cyc___cycFILE*_T77;struct _fat_ptr _T78;struct _fat_ptr _T79;struct _fat_ptr _T7A;struct _fat_ptr _T7B;struct _fat_ptr _T7C;unsigned char*_T7D;unsigned char*_T7E;const char*_T7F;struct Cyc___cycFILE*_T80;unsigned _T81;struct Cyc_String_pa_PrintArg_struct _T82;struct Cyc___cycFILE*_T83;struct _fat_ptr _T84;struct _fat_ptr _T85;struct Cyc___cycFILE*_T86;struct _fat_ptr _T87;struct _fat_ptr _T88;struct _fat_ptr _T89;unsigned char*_T8A;unsigned char*_T8B;int _T8C;int _T8D;struct Cyc_List_List*_T8E;void*_T8F;const char*_T90;const char*_T91;int _T92;struct Cyc___cycFILE*_T93;struct _fat_ptr _T94;struct _fat_ptr _T95;struct Cyc_List_List*_T96;enum Cyc_buildlib_mode _T97;int _T98;struct Cyc___cycFILE*_T99;int _T9A;struct Cyc___cycFILE*_T9B;int _T9C;struct Cyc___cycFILE*_T9D;struct Cyc___cycFILE*_T9E;
GC_blacklist_warn_clear();{struct _tuple19*_T9F[10];{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2007
_TA0->f0=_tag_fat("-d",sizeof(char),3U);_TA0->f1=0;_TA0->f2=_tag_fat(" <file>",sizeof(char),8U);{struct Cyc_Arg_String_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_TA1->tag=5;
_TA1->f1=Cyc_set_output_dir;_T2=(struct Cyc_Arg_String_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_T2;
_TA0->f4=_tag_fat("Set the output directory to <file>",sizeof(char),35U);_T1=(struct _tuple19*)_TA0;}
# 2007
_T9F[0]=_T1;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2010
_TA0->f0=_tag_fat("-gather",sizeof(char),8U);_TA0->f1=0;_TA0->f2=_tag_fat("",sizeof(char),1U);{struct Cyc_Arg_Unit_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_Unit_spec_Arg_Spec_struct));_TA1->tag=0;
_TA1->f1=Cyc_set_GATHER;_T4=(struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_T4;
_TA0->f4=_tag_fat("Gather C library info but don't produce Cyclone headers",sizeof(char),56U);_T3=(struct _tuple19*)_TA0;}
# 2010
_T9F[1]=_T3;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2013
_TA0->f0=_tag_fat("-gatherscript",sizeof(char),14U);_TA0->f1=0;_TA0->f2=_tag_fat("",sizeof(char),1U);{struct Cyc_Arg_Unit_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_Unit_spec_Arg_Spec_struct));_TA1->tag=0;
_TA1->f1=Cyc_set_GATHERSCRIPT;_T6=(struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_T6;
_TA0->f4=_tag_fat("Produce a script to gather C library info",sizeof(char),42U);_T5=(struct _tuple19*)_TA0;}
# 2013
_T9F[2]=_T5;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2016
_TA0->f0=_tag_fat("-finish",sizeof(char),8U);_TA0->f1=0;_TA0->f2=_tag_fat("",sizeof(char),1U);{struct Cyc_Arg_Unit_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_Unit_spec_Arg_Spec_struct));_TA1->tag=0;
_TA1->f1=Cyc_set_FINISH;_T8=(struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_T8;
_TA0->f4=_tag_fat("Produce Cyclone headers from pre-gathered C library info",sizeof(char),57U);_T7=(struct _tuple19*)_TA0;}
# 2016
_T9F[3]=_T7;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2019
_TA0->f0=_tag_fat("-setjmp",sizeof(char),8U);_TA0->f1=0;_TA0->f2=_tag_fat("",sizeof(char),1U);{struct Cyc_Arg_Set_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_Set_spec_Arg_Spec_struct));_TA1->tag=3;
_TA1->f1=& Cyc_do_setjmp;_TA=(struct Cyc_Arg_Set_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_TA;
# 2024
_TA0->f4=_tag_fat("Produce the jmp_buf and setjmp declarations on the standard output, for use by the Cyclone compiler special file cyc_setjmp.h.  Cannot be used with -gather, -gatherscript, or specfiles.",sizeof(char),186U);_T9=(struct _tuple19*)_TA0;}
# 2019
_T9F[4]=_T9;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2025
_TA0->f0=_tag_fat("-b",sizeof(char),3U);_TA0->f1=0;_TA0->f2=_tag_fat(" <machine>",sizeof(char),11U);{struct Cyc_Arg_String_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_TA1->tag=5;
_TA1->f1=Cyc_Specsfile_set_target_arch;_TC=(struct Cyc_Arg_String_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_TC;
_TA0->f4=_tag_fat("Set the target machine for compilation to <machine>",sizeof(char),52U);_TB=(struct _tuple19*)_TA0;}
# 2025
_T9F[5]=_TB;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2028
_TA0->f0=_tag_fat("-B",sizeof(char),3U);_TA0->f1=1;_TA0->f2=_tag_fat("<file>",sizeof(char),7U);{struct Cyc_Arg_Flag_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_Flag_spec_Arg_Spec_struct));_TA1->tag=1;
_TA1->f1=Cyc_Specsfile_add_cyclone_exec_path;_TE=(struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_TE;
_TA0->f4=_tag_fat("Add to the list of directories to search for compiler files",sizeof(char),60U);_TD=(struct _tuple19*)_TA0;}
# 2028
_T9F[6]=_TD;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2031
_TA0->f0=_tag_fat("-h",sizeof(char),3U);_TA0->f1=0;_TA0->f2=_tag_fat(" <header>",sizeof(char),10U);{struct Cyc_Arg_String_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_TA1->tag=5;
_TA1->f1=Cyc_set_header;_T10=(struct Cyc_Arg_String_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_T10;
_TA0->f4=_tag_fat("Produce this header, and other -h headers only",sizeof(char),47U);_TF=(struct _tuple19*)_TA0;}
# 2031
_T9F[7]=_TF;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2034
_TA0->f0=_tag_fat("-v",sizeof(char),3U);_TA0->f1=0;_TA0->f2=_tag_fat("",sizeof(char),1U);{struct Cyc_Arg_Set_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_Set_spec_Arg_Spec_struct));_TA1->tag=3;
_TA1->f1=& Cyc_verbose;_T12=(struct Cyc_Arg_Set_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_T12;
_TA0->f4=_tag_fat("Verbose operation",sizeof(char),18U);_T11=(struct _tuple19*)_TA0;}
# 2034
_T9F[8]=_T11;{struct _tuple19*_TA0=_cycalloc(sizeof(struct _tuple19));
# 2037
_TA0->f0=_tag_fat("-",sizeof(char),2U);_TA0->f1=1;_TA0->f2=_tag_fat("",sizeof(char),1U);{struct Cyc_Arg_Flag_spec_Arg_Spec_struct*_TA1=_cycalloc(sizeof(struct Cyc_Arg_Flag_spec_Arg_Spec_struct));_TA1->tag=1;
_TA1->f1=Cyc_add_cpparg;_T14=(struct Cyc_Arg_Flag_spec_Arg_Spec_struct*)_TA1;}_TA0->f3=(void*)_T14;
_TA0->f4=_tag_fat("",sizeof(char),1U);_T13=(struct _tuple19*)_TA0;}
# 2037
_T9F[9]=_T13;_T15=_tag_fat(_T9F,sizeof(struct _tuple19*),10);_T0=Cyc_List_list(_T15);}{
# 2006
struct Cyc_List_List*options=_T0;_T16=options;_T17=
# 2042
_tag_fat("Options:",sizeof(char),9U);_T18=argv;{struct _fat_ptr otherargs=Cyc_Specsfile_parse_b(_T16,Cyc_add_spec_file,Cyc_no_other,_T17,_T18);
# 2044
Cyc_Arg_current=0;_T19=options;_T1A=
_tag_fat("Options:",sizeof(char),9U);_T1B=otherargs;Cyc_Arg_parse(_T19,Cyc_add_spec_file,Cyc_no_other,_T1A,_T1B);_T1C=Cyc_badparse;
if(_T1C)goto _TL22A;else{goto _TL22E;}_TL22E: _T1D=Cyc_do_setjmp;if(_T1D)goto _TL22D;else{goto _TL22F;}_TL22F: if(Cyc_spec_files==0)goto _TL22A;else{goto _TL22D;}_TL22D: _T1E=Cyc_do_setjmp;if(_T1E)goto _TL230;else{goto _TL22C;}_TL230: if(Cyc_spec_files!=0)goto _TL22A;else{goto _TL22C;}_TL22C: _T1F=Cyc_do_setjmp;if(_T1F)goto _TL231;else{goto _TL22B;}_TL231: _T20=Cyc_mode;_T21=(int)_T20;if(_T21==1)goto _TL22A;else{goto _TL22B;}_TL22B: _T22=Cyc_do_setjmp;if(_T22)goto _TL232;else{goto _TL228;}_TL232: _T23=Cyc_mode;_T24=(int)_T23;if(_T24==2)goto _TL22A;else{goto _TL228;}
# 2051
_TL22A: _T25=options;_T26=
# 2053
_tag_fat("Usage: buildlib [options] specfile1 specfile2 ...\nOptions:",sizeof(char),59U);
# 2051
Cyc_Arg_usage(_T25,_T26);
# 2054
return 1;_TL228: _T27=
# 2060
_tag_fat("cycspecs",sizeof(char),9U);{struct _fat_ptr specs_file=Cyc_Specsfile_find_in_arch_path(_T27);_T28=Cyc_verbose;
if(!_T28)goto _TL233;{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;_T9F.f1=specs_file;_T29=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T29;void*_TA0[1];_TA0[0]=& _T9F;_T2A=Cyc_stderr;_T2B=_tag_fat("Reading from specs file %s\n",sizeof(char),28U);_T2C=_tag_fat(_TA0,sizeof(void*),1);Cyc_fprintf(_T2A,_T2B,_T2C);}goto _TL234;_TL233: _TL234: {
struct Cyc_List_List*specs=Cyc_Specsfile_read_specs(specs_file);_T2D=specs;_T2E=
_tag_fat("cyclone_target_cflags",sizeof(char),22U);Cyc_target_cflags=Cyc_Specsfile_get_spec(_T2D,_T2E);_T2F=Cyc_verbose;
if(!_T2F)goto _TL235;{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;_T9F.f1=Cyc_target_cflags;_T30=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T30;void*_TA0[1];_TA0[0]=& _T9F;_T31=Cyc_stderr;_T32=_tag_fat("Target cflags are %s\n",sizeof(char),22U);_T33=_tag_fat(_TA0,sizeof(void*),1);Cyc_fprintf(_T31,_T32,_T33);}goto _TL236;_TL235: _TL236: _T34=specs;_T35=
_tag_fat("cyclone_cc",sizeof(char),11U);Cyc_cyclone_cc=Cyc_Specsfile_get_spec(_T34,_T35);_T36=Cyc_cyclone_cc;_T37=_T36.curr;_T38=(unsigned)_T37;
if(_T38)goto _TL237;else{goto _TL239;}_TL239: Cyc_cyclone_cc=_tag_fat("gcc",sizeof(char),4U);goto _TL238;_TL237: _TL238: _T39=Cyc_verbose;
if(!_T39)goto _TL23A;{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;_T9F.f1=Cyc_cyclone_cc;_T3A=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T3A;void*_TA0[1];_TA0[0]=& _T9F;_T3B=Cyc_stderr;_T3C=_tag_fat("C compiler is %s\n",sizeof(char),18U);_T3D=_tag_fat(_TA0,sizeof(void*),1);Cyc_fprintf(_T3B,_T3C,_T3D);}goto _TL23B;_TL23A: _TL23B: _T3E=Cyc_mode;_T3F=(int)_T3E;
# 2069
if(_T3F!=2)goto _TL23C;_T40=Cyc_verbose;
if(!_T40)goto _TL23E;_T41=Cyc_stderr;_T42=
_tag_fat("Creating BUILDLIB.sh\n",sizeof(char),22U);_T43=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T41,_T42,_T43);goto _TL23F;_TL23E: _TL23F:
 Cyc_script_file=Cyc_fopen("BUILDLIB.sh","w");_T44=Cyc_script_file;_T45=(unsigned)_T44;
if(_T45)goto _TL240;else{goto _TL242;}
_TL242: _T46=Cyc_stderr;_T47=_tag_fat("Could not create file BUILDLIB.sh\n",sizeof(char),35U);_T48=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T46,_T47,_T48);
exit(1);goto _TL241;_TL240: _TL241: _T49=
# 2077
_tag_fat("#!/bin/sh\n",sizeof(char),11U);_T4A=_tag_fat(0U,sizeof(void*),0);Cyc_prscript(_T49,_T4A);_T4B=
_tag_fat("GCC=\"gcc\"\n",sizeof(char),11U);_T4C=_tag_fat(0U,sizeof(void*),0);Cyc_prscript(_T4B,_T4C);goto _TL23D;_TL23C: _TL23D: _T4D=
# 2082
Cyc_force_directory_prefixes(Cyc_output_dir);if(_T4D)goto _TL245;else{goto _TL246;}_TL246: _T4E=Cyc_force_directory(Cyc_output_dir);if(_T4E)goto _TL245;else{goto _TL243;}
_TL245:{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;_T9F.f1=Cyc_output_dir;_T4F=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T4F;void*_TA0[1];_TA0[0]=& _T9F;_T50=Cyc_stderr;_T51=_tag_fat("Error: could not create directory %s\n",sizeof(char),38U);_T52=_tag_fat(_TA0,sizeof(void*),1);Cyc_fprintf(_T50,_T51,_T52);}
return 1;_TL243: _T53=Cyc_verbose;
# 2086
if(!_T53)goto _TL247;{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;
_T9F.f1=Cyc_output_dir;_T54=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T54;void*_TA0[1];_TA0[0]=& _T9F;_T55=Cyc_stderr;_T56=_tag_fat("Output directory is %s\n",sizeof(char),24U);_T57=_tag_fat(_TA0,sizeof(void*),1);Cyc_fprintf(_T55,_T56,_T57);}goto _TL248;_TL247: _TL248: _T58=Cyc_mode;_T59=(int)_T58;
# 2089
if(_T59!=2)goto _TL249;{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;
_T9F.f1=Cyc_output_dir;_T5A=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T5A;void*_TA0[1];_TA0[0]=& _T9F;_T5B=_tag_fat("cd %s\n",sizeof(char),7U);_T5C=_tag_fat(_TA0,sizeof(void*),1);Cyc_prscript(_T5B,_T5C);}{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;
# 2092
_T9F.f1=Cyc_target_cflags;_T5D=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T5D;void*_TA0[1];_TA0[0]=& _T9F;_T5E=
# 2091
_tag_fat("echo | $GCC %s -E -dM - -o INITMACROS.h\n",sizeof(char),41U);_T5F=_tag_fat(_TA0,sizeof(void*),1);Cyc_prscript(_T5E,_T5F);}goto _TL24A;_TL249: _TL24A: _T60=
# 2095
Cyc_gathering();if(_T60)goto _TL24B;else{goto _TL24D;}
# 2098
_TL24D: _T61=Cyc_output_dir;_T62=_tag_fat("BUILDLIB.LOG",sizeof(char),13U);_T63=Cyc_Filename_concat(_T61,_T62);_T64=_untag_fat_ptr_check_bound(_T63,sizeof(char),1U);_T65=_check_null(_T64);_T66=(const char*)_T65;Cyc_log_file=Cyc_fopen(_T66,"w");_T67=Cyc_log_file;_T68=(unsigned)_T67;
if(_T68)goto _TL24E;else{goto _TL250;}
_TL250:{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;_T9F.f1=Cyc_output_dir;_T69=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T69;void*_TA0[1];_TA0[0]=& _T9F;_T6A=Cyc_stderr;_T6B=_tag_fat("Error: could not create log file in directory %s\n",sizeof(char),50U);_T6C=_tag_fat(_TA0,sizeof(void*),1);Cyc_fprintf(_T6A,_T6B,_T6C);}
return 1;_TL24E: _T6D=Cyc_do_setjmp;
# 2104
if(_T6D)goto _TL251;else{goto _TL253;}
# 2106
_TL253: _T6E=Cyc_output_dir;_T6F=_tag_fat("cstubs.c",sizeof(char),9U);_T70=Cyc_Filename_concat(_T6E,_T6F);_T71=_untag_fat_ptr_check_bound(_T70,sizeof(char),1U);_T72=_check_null(_T71);_T73=(const char*)_T72;Cyc_cstubs_file=Cyc_fopen(_T73,"w");_T74=Cyc_cstubs_file;_T75=(unsigned)_T74;
if(_T75)goto _TL254;else{goto _TL256;}
_TL256:{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;_T9F.f1=Cyc_output_dir;_T76=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T76;void*_TA0[1];_TA0[0]=& _T9F;_T77=Cyc_stderr;_T78=_tag_fat("Error: could not create cstubs.c in directory %s\n",sizeof(char),50U);_T79=_tag_fat(_TA0,sizeof(void*),1);Cyc_fprintf(_T77,_T78,_T79);}
return 1;_TL254: _T7A=Cyc_output_dir;_T7B=
# 2113
_tag_fat("cycstubs.cyc",sizeof(char),13U);_T7C=Cyc_Filename_concat(_T7A,_T7B);_T7D=_untag_fat_ptr_check_bound(_T7C,sizeof(char),1U);_T7E=_check_null(_T7D);_T7F=(const char*)_T7E;Cyc_cycstubs_file=Cyc_fopen(_T7F,"w");_T80=Cyc_cycstubs_file;_T81=(unsigned)_T80;
if(_T81)goto _TL257;else{goto _TL259;}
_TL259:{struct Cyc_String_pa_PrintArg_struct _T9F;_T9F.tag=0;
# 2117
_T9F.f1=Cyc_output_dir;_T82=_T9F;}{struct Cyc_String_pa_PrintArg_struct _T9F=_T82;void*_TA0[1];_TA0[0]=& _T9F;_T83=Cyc_stderr;_T84=
# 2116
_tag_fat("Error: could not create cycstubs.c in directory %s\n",sizeof(char),52U);_T85=_tag_fat(_TA0,sizeof(void*),1);Cyc_fprintf(_T83,_T84,_T85);}
# 2118
return 1;_TL257: _T86=Cyc_cycstubs_file;_T87=
# 2122
_tag_fat("#include <core.h>\nusing Core;\n\n",sizeof(char),32U);_T88=_tag_fat(0U,sizeof(void*),0);
# 2120
Cyc_fprintf(_T86,_T87,_T88);goto _TL252;_TL251: _TL252: goto _TL24C;_TL24B: _TL24C: _T89=Cyc_output_dir;_T8A=_untag_fat_ptr_check_bound(_T89,sizeof(char),1U);_T8B=_check_null(_T8A);{
# 2127
const char*outdir=(const char*)_T8B;_T8C=Cyc_do_setjmp;
if(!_T8C)goto _TL25A;_T8D=Cyc_process_setjmp(outdir);if(!_T8D)goto _TL25A;
return 1;
# 2133
_TL25A: _TL25F: if(Cyc_spec_files!=0)goto _TL25D;else{goto _TL25E;}
_TL25D: _T8E=Cyc_spec_files;_T8F=_T8E->hd;_T90=(const char*)_T8F;_T91=outdir;_T92=Cyc_process_specfile(_T90,_T91);if(!_T92)goto _TL260;_T93=Cyc_stderr;_T94=
_tag_fat("FATAL ERROR -- QUIT!\n",sizeof(char),22U);_T95=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T93,_T94,_T95);
exit(1);goto _TL261;_TL260: _TL261: _T96=Cyc_spec_files;
# 2133
Cyc_spec_files=_T96->tl;goto _TL25F;_TL25E: _T97=Cyc_mode;_T98=(int)_T97;
# 2141
if(_T98!=2)goto _TL262;_T99=
_check_null(Cyc_script_file);Cyc_fclose(_T99);goto _TL263;
# 2144
_TL262: _T9A=Cyc_gathering();if(_T9A)goto _TL264;else{goto _TL266;}
_TL266: _T9B=_check_null(Cyc_log_file);Cyc_fclose(_T9B);_T9C=Cyc_do_setjmp;
if(_T9C)goto _TL267;else{goto _TL269;}
_TL269: _T9D=_check_null(Cyc_cstubs_file);Cyc_fclose(_T9D);_T9E=
_check_null(Cyc_cycstubs_file);Cyc_fclose(_T9E);goto _TL268;_TL267: _TL268: goto _TL265;_TL264: _TL265: _TL263:
# 2152
 return 0;}}}}}}
