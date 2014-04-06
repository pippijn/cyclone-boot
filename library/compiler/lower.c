#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
struct Cyc_AssnDef_ExistAssnFn;
 struct _union_Nmspace_Abs_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_Rel_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_C_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_Loc_n {
  int tag;
  int val;
};
 union Cyc_Absyn_Nmspace {
  struct _union_Nmspace_Abs_n Abs_n;
  struct _union_Nmspace_Rel_n Rel_n;
  struct _union_Nmspace_C_n C_n;
  struct _union_Nmspace_Loc_n Loc_n;
};
 struct _tuple0 {
  union Cyc_Absyn_Nmspace f0;
  struct _fat_ptr * f1;
};
enum Cyc_Absyn_Scope {
  Cyc_Absyn_Static = 0U,
  Cyc_Absyn_Abstract = 1U,
  Cyc_Absyn_Public = 2U,
  Cyc_Absyn_Extern = 3U,
  Cyc_Absyn_ExternC = 4U,
  Cyc_Absyn_Register = 5U
};
 struct Cyc_Absyn_Tqual {
  long print_const:1;
  long q_volatile:1;
  long q_restrict:1;
  long real_const:1;
  unsigned int loc;
};
enum Cyc_Absyn_AggrKind {
  Cyc_Absyn_StructA = 0U,
  Cyc_Absyn_UnionA = 1U
};
 struct Cyc_Absyn_VarargInfo {
  struct _fat_ptr * name;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  long inject;
};
 struct Cyc_Absyn_FnInfo {
  struct Cyc_List_List * tvars;
  void * effect;
  struct Cyc_Absyn_Tqual ret_tqual;
  void * ret_type;
  struct Cyc_List_List * args;
  long c_varargs;
  struct Cyc_Absyn_VarargInfo * cyc_varargs;
  struct Cyc_List_List * qual_bnd;
  struct Cyc_List_List * attributes;
  struct Cyc_Absyn_Exp * checks_clause;
  struct Cyc_AssnDef_ExistAssnFn * checks_assn;
  struct Cyc_Absyn_Exp * requires_clause;
  struct Cyc_AssnDef_ExistAssnFn * requires_assn;
  struct Cyc_Absyn_Exp * ensures_clause;
  struct Cyc_AssnDef_ExistAssnFn * ensures_assn;
  struct Cyc_Absyn_Exp * throws_clause;
  struct Cyc_AssnDef_ExistAssnFn * throws_assn;
  struct Cyc_Absyn_Vardecl * return_value;
  struct Cyc_List_List * arg_vardecls;
  struct Cyc_List_List * effconstr;
};
 struct Cyc_Absyn_ArrayInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Absyn_Exp * num_elts;
  void * zero_term;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_ArrayType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_ArrayInfo f1;
};
enum Cyc_Absyn_Primop {
  Cyc_Absyn_Plus = 0U,
  Cyc_Absyn_Times = 1U,
  Cyc_Absyn_Minus = 2U,
  Cyc_Absyn_Div = 3U,
  Cyc_Absyn_Mod = 4U,
  Cyc_Absyn_Eq = 5U,
  Cyc_Absyn_Neq = 6U,
  Cyc_Absyn_Gt = 7U,
  Cyc_Absyn_Lt = 8U,
  Cyc_Absyn_Gte = 9U,
  Cyc_Absyn_Lte = 10U,
  Cyc_Absyn_Not = 11U,
  Cyc_Absyn_Bitnot = 12U,
  Cyc_Absyn_Bitand = 13U,
  Cyc_Absyn_Bitor = 14U,
  Cyc_Absyn_Bitxor = 15U,
  Cyc_Absyn_Bitlshift = 16U,
  Cyc_Absyn_Bitlrshift = 17U,
  Cyc_Absyn_Numelts = 18U,
  Cyc_Absyn_Tagof = 19U,
  Cyc_Absyn_UDiv = 20U,
  Cyc_Absyn_UMod = 21U,
  Cyc_Absyn_UGt = 22U,
  Cyc_Absyn_ULt = 23U,
  Cyc_Absyn_UGte = 24U,
  Cyc_Absyn_ULte = 25U
};
enum Cyc_Absyn_Incrementor {
  Cyc_Absyn_PreInc = 0U,
  Cyc_Absyn_PostInc = 1U,
  Cyc_Absyn_PreDec = 2U,
  Cyc_Absyn_PostDec = 3U
};
 struct Cyc_Absyn_VarargCallInfo {
  int num_varargs;
  struct Cyc_List_List * injectors;
  struct Cyc_Absyn_VarargInfo * vai;
};
enum Cyc_Absyn_Coercion {
  Cyc_Absyn_Unknown_coercion = 0U,
  Cyc_Absyn_No_coercion = 1U,
  Cyc_Absyn_Null_to_NonNull = 2U,
  Cyc_Absyn_Subset_coercion = 3U,
  Cyc_Absyn_Other_coercion = 4U
};
 struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct {
  int tag;
  enum Cyc_Absyn_Primop f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Core_Opt * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  enum Cyc_Absyn_Incrementor f2;
};
 struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
  struct Cyc_Absyn_VarargCallInfo * f3;
  long f4;
};
 struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Exp * f2;
  long f3;
  enum Cyc_Absyn_Coercion f4;
};
 struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
  long f3;
  long f4;
};
 struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
  long f3;
  long f4;
};
 struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct {
  int tag;
  struct _tuple0 * f1;
  struct Cyc_List_List * f2;
  struct Cyc_List_List * f3;
  struct Cyc_Absyn_Aggrdecl * f4;
};
 struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  long f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Stmt * f2;
  struct Cyc_Absyn_Stmt * f3;
};
 struct _tuple9 {
  struct Cyc_Absyn_Exp * f0;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _tuple9 f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _fat_ptr * f1;
};
 struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _tuple9 f2;
  struct _tuple9 f3;
  struct Cyc_Absyn_Stmt * f4;
};
 struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
  void * f3;
};
 struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Decl * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _fat_ptr * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
  struct _tuple9 f2;
};
 struct Cyc_Absyn_Stmt {
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Pat {
  void * r;
  void * topt;
  unsigned int loc;
};
 struct Cyc_Absyn_Switch_clause {
  struct Cyc_Absyn_Pat * pattern;
  struct Cyc_Core_Opt * pat_vars;
  struct Cyc_Absyn_Exp * where_clause;
  struct Cyc_Absyn_Stmt * body;
  unsigned int loc;
};
 struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct {
  int tag;
  struct _tuple0 * f1;
};
 struct Cyc_Absyn_Global_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Param_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Local_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Pat_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Vardecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  unsigned int varloc;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  struct Cyc_Absyn_Exp * initializer;
  void * rgn;
  struct Cyc_List_List * attributes;
  long escapes;
  long is_proto;
  struct Cyc_Absyn_Exp * rename;
};
 struct Cyc_Absyn_Fndecl {
  enum Cyc_Absyn_Scope sc;
  long is_inline;
  struct _tuple0 * name;
  struct Cyc_Absyn_Stmt * body;
  struct Cyc_Absyn_FnInfo i;
  void * cached_type;
  struct Cyc_Core_Opt * param_vardecls;
  struct Cyc_Absyn_Vardecl * fn_vardecl;
  enum Cyc_Absyn_Scope orig_scope;
  long escapes;
};
 struct Cyc_Absyn_AggrdeclImpl {
  struct Cyc_List_List * exist_vars;
  struct Cyc_List_List * qual_bnd;
  struct Cyc_List_List * fields;
  long tagged;
  struct Cyc_List_List * effconstr;
};
 struct Cyc_Absyn_Aggrdecl {
  enum Cyc_Absyn_AggrKind kind;
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Absyn_AggrdeclImpl * impl;
  struct Cyc_List_List * attributes;
  long expected_mem_kind;
};
 struct Cyc_Absyn_Enumfield {
  struct _tuple0 * name;
  struct Cyc_Absyn_Exp * tag;
  unsigned int loc;
};
 struct Cyc_Absyn_Enumdecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  struct Cyc_Core_Opt * fields;
};
 struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
};
 struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
};
 struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
};
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
void * Cyc_Absyn_compress(void *);
extern void * Cyc_Absyn_heap_rgn_type;
extern void * Cyc_Absyn_al_qual_type;
extern void * Cyc_Absyn_false_type;
extern void * Cyc_Absyn_void_type;
extern void * Cyc_Absyn_typeof_type(struct Cyc_Absyn_Exp *);
void * Cyc_Absyn_star_type(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,
			   void *);
struct Cyc_Absyn_Exp * Cyc_Absyn_true_exp(unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_false_exp(unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_signed_int_exp(int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_uint_exp(unsigned int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_var_exp(struct _tuple0 *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_primop_exp(enum Cyc_Absyn_Primop,struct Cyc_List_List *,
					    unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_prim1_exp(enum Cyc_Absyn_Primop,struct Cyc_Absyn_Exp *,
					   unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_prim2_exp(enum Cyc_Absyn_Primop,struct Cyc_Absyn_Exp *,
					   struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_add_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					 unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_assign_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					    unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_fncall_exp(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,
					    unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_cast_exp(void *,struct Cyc_Absyn_Exp *,long,
					  enum Cyc_Absyn_Coercion,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_address_exp(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_deref_exp(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_aggrmember_exp(struct Cyc_Absyn_Exp *,struct _fat_ptr *,
						unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_aggrarrow_exp(struct Cyc_Absyn_Exp *,struct _fat_ptr *,
					       unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_subscript_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					       unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_unresolvedmem_exp(struct Cyc_Core_Opt *,
						   struct Cyc_List_List *,
						   unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_skip_stmt(unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *,
					   unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_return_stmt(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_ifthenelse_stmt(struct Cyc_Absyn_Exp *,
						  struct Cyc_Absyn_Stmt *,
						  struct Cyc_Absyn_Stmt *,
						  unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_switch_stmt(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,
					      unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Stmt *,
					    unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_label_stmt(struct _fat_ptr *,struct Cyc_Absyn_Stmt *,
					     unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_goto_stmt(struct _fat_ptr *,unsigned int);
struct Cyc_Absyn_Vardecl * Cyc_Absyn_new_vardecl(unsigned int,struct _tuple0 *,
						 void *,struct Cyc_Absyn_Exp *,
						 struct Cyc_Absyn_Exp *);
struct _tuple0 * Cyc_Absyn_binding2qvar(void *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_warn(unsigned int,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
struct _fat_ptr Cyc_Absynpp_typ2string(void *);
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp *);
struct _fat_ptr Cyc_Absynpp_stmt2string(struct Cyc_Absyn_Stmt *);
struct _tuple0 * Cyc_Toc_temp_var();
extern struct _fat_ptr Cyc_Toc_globals;
long Cyc_Unify_unify(void *,void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_deep_copy_exp(long,struct Cyc_Absyn_Exp *);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
 struct Cyc_Lower_Env {
  struct Cyc_List_List * stmts;
  struct Cyc_List_List * temps;
  struct Cyc_Absyn_Exp * assign_last_exp;
  struct _fat_ptr * break_label;
  struct _fat_ptr * continue_label;
};
static struct Cyc_Lower_Env * Cyc_Lower_new_env() {
  struct Cyc_Lower_Env * _T0;
  { struct Cyc_Lower_Env * _T1 = _cycalloc(sizeof(struct Cyc_Lower_Env));
    _T1->stmts = 0;
    _T1->temps = 0;
    _T1->assign_last_exp = 0;
    _T1->break_label = 0;
    _T1->continue_label = 0;
    _T0 = (struct Cyc_Lower_Env *)_T1;
  }return _T0;
}
static struct Cyc_Absyn_Stmt * Cyc_Lower_rev_seq_stmts(struct Cyc_List_List * ss) {
  struct Cyc_Absyn_Stmt * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_Absyn_Stmt * _T6;
  int * _T7;
  unsigned int _T8;
  struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T9;
  struct Cyc_Absyn_Stmt * _TA;
  struct Cyc_Absyn_Stmt * _TB;
  void * _TC;
  int * _TD;
  int _TE;
  struct _fat_ptr * _TF;
  struct Cyc_Absyn_Stmt * _T10;
  struct Cyc_Absyn_Stmt * _T11;
  unsigned int _T12;
  struct Cyc_Absyn_Stmt * _T13;
  struct Cyc_Absyn_Stmt * _T14;
  struct Cyc_Absyn_Stmt * _T15;
  unsigned int _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_Absyn_Stmt * _T18;
  if (ss != 0) { goto _TL0;
  }
  _T0 = Cyc_Absyn_skip_stmt(0U);
  return _T0;
  _TL0: _T1 = ss;
  _T2 = _T1->hd;
  { struct Cyc_Absyn_Stmt * res = (struct Cyc_Absyn_Stmt *)_T2;
    _T3 = ss;
    ss = _T3->tl;
    _TL5: if (ss != 0) { goto _TL3;
    }else { goto _TL4;
    }
    _TL3: _T4 = ss;
    _T5 = _T4->hd;
    { struct Cyc_Absyn_Stmt * s = (struct Cyc_Absyn_Stmt *)_T5;
      _T6 = s;
      { void * _T19 = _T6->r;
	struct _fat_ptr * _T1A;
	_T7 = (int *)_T19;
	_T8 = *_T7;
	switch (_T8) {
	case 0: 
	  goto _TL2;
	case 13: 
	  _T9 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T19;
	  _TA = _T9->f2;
	  _TB = (struct Cyc_Absyn_Stmt *)_TA;
	  _TC = _TB->r;
	  _TD = (int *)_TC;
	  _TE = *_TD;
	  if (_TE != 0) { goto _TL7;
	  }
	  { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T1B = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T19;
	    _T1A = _T1B->f1;
	  }{ struct _fat_ptr * x = _T1A;
	    _TF = x;
	    _T10 = res;
	    _T11 = s;
	    _T12 = _T11->loc;
	    res = Cyc_Absyn_label_stmt(_TF,_T10,_T12);
	    goto _TL2;
	  }_TL7: goto _LL5;
	default: 
	  _LL5: _T13 = s;
	  _T14 = res;
	  _T15 = s;
	  _T16 = _T15->loc;
	  res = Cyc_Absyn_seq_stmt(_T13,_T14,_T16);
	}
	;
      }
    }_TL2: _T17 = ss;
    ss = _T17->tl;
    goto _TL5;
    _TL4: _T18 = res;
    return _T18;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Lower_deep_copy(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  _T0 = Cyc_Tcutil_deep_copy_exp(1,e);
  return _T0;
}
static void Cyc_Lower_print_env(struct Cyc_Lower_Env * env) {
  struct Cyc___cycFILE * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_Lower_Env * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct Cyc_Absyn_Stmt * _T8;
  struct Cyc___cycFILE * _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_List_List * _TC;
  struct Cyc___cycFILE * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  _T0 = Cyc_stderr;
  _T1 = _tag_fat("env->stmts:\n",sizeof(char),13U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T0,_T1,_T2);
  _T3 = env;
  _T4 = _T3->stmts;
  { struct Cyc_List_List * ss = Cyc_List_rev(_T4);
    _TLC: if (ss != 0) { goto _TLA;
    }else { goto _TLB;
    }
    _TLA: { struct Cyc_String_pa_PrintArg_struct _T10;
      _T10.tag = 0;
      _T6 = ss;
      _T7 = _T6->hd;
      _T8 = (struct Cyc_Absyn_Stmt *)_T7;
      _T10.f1 = Cyc_Absynpp_stmt2string(_T8);
      _T5 = _T10;
    }{ struct Cyc_String_pa_PrintArg_struct _T10 = _T5;
      void * _T11[1];
      _T11[0] = &_T10;
      _T9 = Cyc_stderr;
      _TA = _tag_fat("%s\n",sizeof(char),4U);
      _TB = _tag_fat(_T11,sizeof(void *),1);
      Cyc_fprintf(_T9,_TA,_TB);
    }_TC = ss;
    ss = _TC->tl;
    goto _TLC;
    _TLB: ;
  }_TD = Cyc_stderr;
  _TE = _tag_fat("-------------\n\n",sizeof(char),16U);
  _TF = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_TD,_TE,_TF);
}
static struct Cyc_Absyn_Stmt * Cyc_Lower_assign_it(struct Cyc_Absyn_Exp * e1,
						   struct Cyc_Absyn_Exp * e2,
						   unsigned int loc) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct Cyc_Absyn_Stmt * _T2;
  struct Cyc_Absyn_Exp * e = Cyc_Absyn_assign_exp(e1,e2,loc);
  _T0 = e;
  _T1 = e1;
  _T0->topt = _T1->topt;
  _T2 = Cyc_Absyn_exp_stmt(e,loc);
  return _T2;
}
static struct Cyc_Absyn_Exp * Cyc_Lower_get_assign_last_exp(struct Cyc_Lower_Env * env) {
  struct Cyc_Lower_Env * _T0;
  struct Cyc_Absyn_Exp * _T1;
  _T0 = env;
  _T1 = _T0->assign_last_exp;
  return _T1;
}
static void Cyc_Lower_set_assign_last_exp(struct Cyc_Lower_Env * env,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Lower_Env * _T0;
  _T0 = env;
  _T0->assign_last_exp = e;
}
static struct _fat_ptr * Cyc_Lower_get_break_label(struct Cyc_Lower_Env * env) {
  struct Cyc_Lower_Env * _T0;
  struct _fat_ptr * _T1;
  _T0 = env;
  _T1 = _T0->break_label;
  return _T1;
}
static struct _fat_ptr * Cyc_Lower_get_continue_label(struct Cyc_Lower_Env * env) {
  struct Cyc_Lower_Env * _T0;
  struct _fat_ptr * _T1;
  _T0 = env;
  _T1 = _T0->continue_label;
  return _T1;
}
 struct _tuple14 {
  struct _fat_ptr * f0;
  struct _fat_ptr * f1;
};
static struct _tuple14 Cyc_Lower_get_loop_labels(struct Cyc_Lower_Env * env) {
  struct _tuple14 _T0;
  struct Cyc_Lower_Env * _T1;
  struct Cyc_Lower_Env * _T2;
  { struct _tuple14 _T3;
    _T1 = env;
    _T3.f0 = _T1->continue_label;
    _T2 = env;
    _T3.f1 = _T2->break_label;
    _T0 = _T3;
  }return _T0;
}
static struct Cyc_Lower_Env * Cyc_Lower_set_loop_labels(struct Cyc_Lower_Env * env,
							struct _fat_ptr * continue_lab,
							struct _fat_ptr * break_lab) {
  struct Cyc_Lower_Env * _T0;
  struct Cyc_Lower_Env * _T1;
  struct Cyc_Lower_Env * _T2;
  _T0 = env;
  _T0->continue_label = continue_lab;
  _T1 = env;
  _T1->break_label = break_lab;
  _T2 = env;
  return _T2;
}
static struct Cyc_List_List * Cyc_Lower_prev_stmts(struct Cyc_Lower_Env * env) {
  struct Cyc_Lower_Env * _T0;
  struct Cyc_List_List * _T1;
  _T0 = env;
  _T1 = _T0->stmts;
  return _T1;
}
static void Cyc_Lower_set_prev_stmts(struct Cyc_Lower_Env * env,struct Cyc_List_List * ss) {
  struct Cyc_Lower_Env * _T0;
  _T0 = env;
  _T0->stmts = ss;
}
static struct _fat_ptr * Cyc_Lower_new_label(struct Cyc_Lower_Env * env) {
  unsigned int _T0;
  struct _fat_ptr * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Int_pa_PrintArg_struct _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  static unsigned int counter = 0U;
  _T0 = counter;
  counter = _T0 + 1;
  { unsigned int c = _T0;
    { struct _fat_ptr * _T6 = _cycalloc(sizeof(struct _fat_ptr));
      { struct Cyc_Int_pa_PrintArg_struct _T7;
	_T7.tag = 1;
	_T7.f1 = c;
	_T3 = _T7;
      }{ struct Cyc_Int_pa_PrintArg_struct _T7 = _T3;
	void * _T8[1];
	_T8[0] = &_T7;
	_T4 = _tag_fat("_TL%X",sizeof(char),6U);
	_T5 = _tag_fat(_T8,sizeof(void *),1);
	_T2 = Cyc_aprintf(_T4,_T5);
      }*_T6 = _T2;
      _T1 = (struct _fat_ptr *)_T6;
    }return _T1;
  }
}
static long Cyc_Lower_is_macro(struct _tuple0 * x) {
  struct _tuple0 * _T0;
  struct _tuple0 * _T1;
  union Cyc_Absyn_Nmspace _T2;
  struct _union_Nmspace_Loc_n _T3;
  unsigned int _T4;
  struct _tuple0 * _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned int _T8;
  unsigned int _T9;
  struct _fat_ptr * _TA;
  struct _fat_ptr _TB;
  int _TC;
  unsigned char * _TD;
  struct _fat_ptr * * _TE;
  struct _fat_ptr * _TF;
  int _T10;
  { struct _fat_ptr * _T11;
    _T0 = x;
    _T1 = (struct _tuple0 *)_T0;
    _T2 = _T1->f0;
    _T3 = _T2.Loc_n;
    _T4 = _T3.tag;
    if (_T4 != 4) { goto _TLD;
    }
    _T5 = x;
    { struct _tuple0 _T12 = *_T5;
      _T11 = _T12.f1;
    }{ struct _fat_ptr * v = _T11;
      _T6 = Cyc_Toc_globals;
      { unsigned int n = _get_fat_size(_T6,sizeof(struct _fat_ptr *));
	{ int i = 0;
	  _TL12: _T7 = i;
	  _T8 = (unsigned int)_T7;
	  _T9 = n;
	  if (_T8 < _T9) { goto _TL10;
	  }else { goto _TL11;
	  }
	  _TL10: _TA = v;
	  _TB = Cyc_Toc_globals;
	  _TC = i;
	  _TD = _check_fat_subscript(_TB,sizeof(struct _fat_ptr *),_TC);
	  _TE = (struct _fat_ptr * *)_TD;
	  _TF = *_TE;
	  _T10 = Cyc_strptrcmp(_TA,_TF);
	  if (_T10 != 0) { goto _TL13;
	  }
	  return 1;
	  _TL13: i = i + 1;
	  goto _TL12;
	  _TL11: ;
	}goto _LL0;
      }
    }_TLD: goto _LL0;
    _LL0: ;
  }return 0;
}
 struct _tuple15 {
  struct Cyc_Absyn_Vardecl * f0;
  struct Cyc_Absyn_Exp * f1;
};
static struct _tuple15 Cyc_Lower_fresh_var(struct Cyc_Lower_Env * env,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  int * _T3;
  unsigned int _T4;
  void * _T5;
  struct _tuple0 * _T6;
  long _T7;
  void * _T8;
  int * _T9;
  unsigned int _TA;
  void * _TB;
  void * _TC;
  void * _TD;
  void * _TE;
  struct Cyc_Absyn_Exp * _TF;
  struct Cyc_Absyn_Vardecl * _T10;
  long _T11;
  struct Cyc_String_pa_PrintArg_struct _T12;
  struct Cyc_Absyn_Exp * _T13;
  unsigned int _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct Cyc_Absyn_Exp * _T17;
  int * _T18;
  unsigned int _T19;
  struct Cyc_Absyn_ArrayInfo _T1A;
  struct Cyc_Absyn_ArrayInfo _T1B;
  struct Cyc_Absyn_Tqual _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  struct Cyc_Lower_Env * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_Lower_Env * _T20;
  struct _tuple15 _T21;
  void * t;
  LOOP: _T0 = e;
  _T1 = _T0->topt;
  if (_T1 != 0) { goto _TL15;
  }
  { long ism = 0;
    _T2 = e;
    { void * _T22 = _T2->r;
      void * _T23;
      _T3 = (int *)_T22;
      _T4 = *_T3;
      switch (_T4) {
      case 1: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T24 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T22;
	  _T5 = _T24->f1;
	  _T23 = (void *)_T5;
	}{ void * b = _T23;
	  _T6 = Cyc_Absyn_binding2qvar(b);
	  _T7 = Cyc_Lower_is_macro(_T6);
	  if (! _T7) { goto _TL18;
	  }
	  ism = 1;
	  goto _TL19;
	  _TL18: _TL19: goto _LL0;
	  { struct Cyc_Absyn_Vardecl * _T24;
	    _T8 = b;
	    _T9 = (int *)_T8;
	    _TA = *_T9;
	    switch (_TA) {
	    case 1: 
	      _TB = b;
	      { struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T25 = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_TB;
		_T24 = _T25->f1;
	      }{ struct Cyc_Absyn_Vardecl * vd = _T24;
		_T24 = vd;
		goto _LL11;
	      }
	    case 3: 
	      _TC = b;
	      { struct Cyc_Absyn_Param_b_Absyn_Binding_struct * _T25 = (struct Cyc_Absyn_Param_b_Absyn_Binding_struct *)_TC;
		_T24 = _T25->f1;
	      }_LL11: { struct Cyc_Absyn_Vardecl * vd = _T24;
		_T24 = vd;
		goto _LL13;
	      }
	    case 4: 
	      _TD = b;
	      { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T25 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_TD;
		_T24 = _T25->f1;
	      }_LL13: { struct Cyc_Absyn_Vardecl * vd = _T24;
		_T24 = vd;
		goto _LL15;
	      }
	    case 5: 
	      _TE = b;
	      { struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T25 = (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct *)_TE;
		_T24 = _T25->f1;
	      }_LL15: { struct Cyc_Absyn_Vardecl * vd = _T24;
		_TF = e;
		_T10 = vd;
		_TF->topt = _T10->type;
		goto LOOP;
	      }
	    default: 
	      goto _LLD;
	    }
	    _LLD: ;
	  }goto _LL0;
	}
      case 17: 
	ism = 1;
	goto _LL0;
      case 0: 
	ism = 1;
	goto _LL0;
      case 2: 
	ism = 1;
	goto _LL0;
      case 13: 
	ism = 1;
	goto _LL0;
      default: 
	goto _LL0;
      }
      _LL0: ;
    }_T11 = ism;
    if (_T11) { goto _TL1B;
    }else { goto _TL1D;
    }
    _TL1D: { struct Cyc_String_pa_PrintArg_struct _T22;
      _T22.tag = 0;
      _T22.f1 = Cyc_Absynpp_exp2string(e);
      _T12 = _T22;
    }{ struct Cyc_String_pa_PrintArg_struct _T22 = _T12;
      void * _T23[1];
      _T23[0] = &_T22;
      _T13 = e;
      _T14 = _T13->loc;
      _T15 = _tag_fat("expression missing type: %s",sizeof(char),28U);
      _T16 = _tag_fat(_T23,sizeof(void *),1);
      Cyc_Warn_warn(_T14,_T15,_T16);
    }goto _TL1C;
    _TL1B: _TL1C: t = Cyc_Absyn_typeof_type(e);
  }goto _TL16;
  _TL15: _T17 = e;
  t = _T17->topt;
  _TL16: { void * _T22 = Cyc_Absyn_compress(t);
    struct Cyc_Absyn_Tqual _T23;
    void * _T24;
    _T18 = (int *)_T22;
    _T19 = *_T18;
    switch (_T19) {
    case 5: 
      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T25 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T22;
	_T1A = _T25->f1;
	_T24 = _T1A.elt_type;
	_T1B = _T25->f1;
	_T23 = _T1B.tq;
      }{ void * t2 = _T24;
	struct Cyc_Absyn_Tqual tq = _T23;
	t = Cyc_Absyn_star_type(t2,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,
				tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);
	goto _LL18;
      }
    case 6: 
      { struct Cyc_Absyn_Tqual _T25;
	_T25.print_const = 0;
	_T25.q_volatile = 0;
	_T25.q_restrict = 0;
	_T25.real_const = 0;
	_T25.loc = 0U;
	_T1C = _T25;
      }{ struct Cyc_Absyn_Tqual tq = _T1C;
	t = Cyc_Absyn_star_type(t,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,
				tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);
	goto _LL18;
      }
    default: 
      goto _LL18;
    }
    _LL18: ;
  }{ struct _tuple0 * v = Cyc_Toc_temp_var();
    struct Cyc_Absyn_Vardecl * vd = Cyc_Absyn_new_vardecl(0U,v,t,0,0);
    struct Cyc_Absyn_Exp * e = Cyc_Absyn_var_exp(v,0U);
    _T1D = e;
    _T1D->topt = t;
    _T1E = env;
    { struct Cyc_List_List * _T22 = _cycalloc(sizeof(struct Cyc_List_List));
      _T22->hd = vd;
      _T20 = env;
      _T22->tl = _T20->temps;
      _T1F = (struct Cyc_List_List *)_T22;
    }_T1E->temps = _T1F;
    { struct _tuple15 _T22;
      _T22.f0 = vd;
      _T22.f1 = e;
      _T21 = _T22;
    }return _T21;
  }
}
static void Cyc_Lower_emit_stmt(struct Cyc_Lower_Env * env,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Lower_Env * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_Lower_Env * _T2;
  _T0 = env;
  { struct Cyc_List_List * _T3 = _cycalloc(sizeof(struct Cyc_List_List));
    _T3->hd = s;
    _T2 = env;
    _T3->tl = _T2->stmts;
    _T1 = (struct Cyc_List_List *)_T3;
  }_T0->stmts = _T1;
}
static void Cyc_Lower_emit_assign(struct Cyc_Lower_Env * env,struct Cyc_Absyn_Exp * lhs,
				  struct Cyc_Absyn_Exp * rhs,unsigned int loc) {
  struct Cyc_Lower_Env * _T0;
  struct Cyc_Absyn_Stmt * _T1;
  _T0 = env;
  _T1 = Cyc_Lower_assign_it(lhs,rhs,loc);
  Cyc_Lower_emit_stmt(_T0,_T1);
}
static void Cyc_Lower_emit_label(struct Cyc_Lower_Env * env,struct _fat_ptr * label,
				 unsigned int loc) {
  struct Cyc_Lower_Env * _T0;
  struct _fat_ptr * _T1;
  struct Cyc_Absyn_Stmt * _T2;
  unsigned int _T3;
  struct Cyc_Absyn_Stmt * _T4;
  _T0 = env;
  _T1 = label;
  _T2 = Cyc_Absyn_skip_stmt(0U);
  _T3 = loc;
  _T4 = Cyc_Absyn_label_stmt(_T1,_T2,_T3);
  Cyc_Lower_emit_stmt(_T0,_T4);
}
static struct Cyc_Absyn_Exp * Cyc_Lower_lower_rhs(struct Cyc_Lower_Env *,
						  long,long,struct Cyc_Absyn_Exp *);
static struct Cyc_Absyn_Exp * Cyc_Lower_lower_rhs_subs(struct Cyc_Lower_Env *,
						       struct Cyc_Absyn_Exp *);
static struct Cyc_Absyn_Exp * Cyc_Lower_lower_lhs(struct Cyc_Lower_Env *,
						  struct Cyc_Absyn_Exp *);
static void Cyc_Lower_lower_cond(struct Cyc_Lower_Env *,struct Cyc_Absyn_Exp *,
				 struct _fat_ptr *,struct _fat_ptr *,unsigned int);
static struct _fat_ptr * Cyc_Lower_lower_true(struct Cyc_Lower_Env *,struct Cyc_Absyn_Exp *,
					      struct _fat_ptr *,unsigned int);
static struct Cyc_Absyn_Fndecl * Cyc_Lower_lower_fn(struct Cyc_Absyn_Fndecl *);
 struct _tuple16 {
  struct _fat_ptr * f0;
  struct _fat_ptr * f1;
  struct _fat_ptr * f2;
};
static long Cyc_Lower_lower_stmt(struct Cyc_Lower_Env * env,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Lower_Env * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc_Lower_Env * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Stmt * _T8;
  unsigned int _T9;
  struct Cyc_Absyn_Stmt * _TA;
  struct Cyc_Lower_Env * _TB;
  struct Cyc_Absyn_Stmt * _TC;
  unsigned int _TD;
  struct Cyc_Absyn_Stmt * _TE;
  struct _tuple14 _TF;
  struct Cyc_Lower_Env * _T10;
  struct Cyc_Absyn_Exp * _T11;
  struct _fat_ptr * _T12;
  struct Cyc_Absyn_Stmt * _T13;
  unsigned int _T14;
  struct Cyc_Lower_Env * _T15;
  struct _fat_ptr * _T16;
  struct Cyc_Absyn_Stmt * _T17;
  unsigned int _T18;
  long _T19;
  struct Cyc_Lower_Env * _T1A;
  struct Cyc_Absyn_Stmt * _T1B;
  struct Cyc_Lower_Env * _T1C;
  struct _fat_ptr * _T1D;
  struct Cyc_Absyn_Stmt * _T1E;
  unsigned int _T1F;
  long _T20;
  long _T21;
  struct _tuple9 _T22;
  struct _tuple16 _T23;
  struct Cyc_Lower_Env * _T24;
  struct _fat_ptr * _T25;
  struct Cyc_Absyn_Exp * _T26;
  unsigned int _T27;
  struct Cyc_Lower_Env * _T28;
  struct Cyc_Absyn_Exp * _T29;
  struct _fat_ptr * _T2A;
  struct _fat_ptr * _T2B;
  struct Cyc_Absyn_Stmt * _T2C;
  unsigned int _T2D;
  struct Cyc_Lower_Env * _T2E;
  struct _fat_ptr * _T2F;
  struct Cyc_Absyn_Stmt * _T30;
  unsigned int _T31;
  struct Cyc_Lower_Env * _T32;
  struct Cyc_Absyn_Stmt * _T33;
  struct Cyc_Absyn_Stmt * _T34;
  struct Cyc_Absyn_Stmt * _T35;
  struct Cyc_Lower_Env * _T36;
  struct _fat_ptr * _T37;
  struct _fat_ptr * _T38;
  struct Cyc_Absyn_Stmt * _T39;
  struct Cyc_Lower_Env * _T3A;
  struct _fat_ptr * _T3B;
  struct _fat_ptr * _T3C;
  struct Cyc_Absyn_Stmt * _T3D;
  struct Cyc_Lower_Env * _T3E;
  struct Cyc_Absyn_Stmt * _T3F;
  struct _tuple9 _T40;
  struct _tuple9 _T41;
  struct _tuple16 _T42;
  struct Cyc_Lower_Env * _T43;
  struct _fat_ptr * _T44;
  struct Cyc_Absyn_Exp * _T45;
  unsigned int _T46;
  struct Cyc_Lower_Env * _T47;
  struct Cyc_Absyn_Exp * _T48;
  struct _fat_ptr * _T49;
  struct _fat_ptr * _T4A;
  struct Cyc_Absyn_Stmt * _T4B;
  unsigned int _T4C;
  struct Cyc_Lower_Env * _T4D;
  struct _fat_ptr * _T4E;
  struct Cyc_Absyn_Stmt * _T4F;
  unsigned int _T50;
  struct Cyc_Lower_Env * _T51;
  struct Cyc_Absyn_Stmt * _T52;
  struct _fat_ptr * _T53;
  struct Cyc_Absyn_Exp * _T54;
  struct Cyc_Absyn_Exp * _T55;
  unsigned int _T56;
  struct Cyc_Absyn_Stmt * _T57;
  struct Cyc_Absyn_Stmt * _T58;
  struct Cyc_Absyn_Stmt * _T59;
  struct Cyc_Absyn_Stmt * _T5A;
  struct Cyc_Absyn_Stmt * _T5B;
  struct Cyc_List_List * _T5C;
  void * _T5D;
  struct Cyc_List_List * _T5E;
  struct Cyc_Absyn_Switch_clause * _T5F;
  struct Cyc_Absyn_Switch_clause * _T60;
  struct Cyc_Absyn_Switch_clause * _T61;
  struct Cyc_Absyn_Switch_clause * _T62;
  struct Cyc_Absyn_Switch_clause * _T63;
  struct Cyc_List_List * _T64;
  struct Cyc_List_List * _T65;
  struct Cyc_Lower_Env * _T66;
  struct Cyc_Absyn_Exp * _T67;
  struct Cyc_List_List * _T68;
  struct Cyc_Absyn_Stmt * _T69;
  unsigned int _T6A;
  struct Cyc_Absyn_Stmt * _T6B;
  struct Cyc_Absyn_Decl * _T6C;
  int * _T6D;
  unsigned int _T6E;
  struct Cyc_Absyn_Vardecl * _T6F;
  struct Cyc_Absyn_Vardecl * _T70;
  struct Cyc_Absyn_Vardecl * _T71;
  enum Cyc_Absyn_Scope _T72;
  int _T73;
  struct Cyc_Absyn_Vardecl * _T74;
  struct Cyc_Absyn_Exp * _T75;
  struct Cyc_Absyn_Vardecl * _T76;
  struct Cyc_Absyn_Vardecl * _T77;
  struct Cyc_List_List * _T78;
  struct Cyc_Lower_Env * _T79;
  struct Cyc_Absyn_Decl * _T7A;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T7B;
  struct Cyc_Absyn_Decl * _T7C;
  struct Cyc_Absyn_Stmt * _T7D;
  struct Cyc_Absyn_Stmt * _T7E;
  long _T7F;
  struct Cyc_Absyn_Decl * _T80;
  struct Cyc_Absyn_Fndecl * _T81;
  enum Cyc_Absyn_Scope _T82;
  int _T83;
  struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T84;
  struct Cyc_List_List * _T85;
  struct Cyc_Lower_Env * _T86;
  struct Cyc_Absyn_Decl * _T87;
  struct Cyc_Absyn_Decl * _T88;
  struct Cyc_Absyn_Decl * _T89;
  struct Cyc_Absyn_Stmt * _T8A;
  struct Cyc_Absyn_Stmt * _T8B;
  long _T8C;
  int (* _T8D)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T8E)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T8F;
  struct _fat_ptr _T90;
  int (* _T91)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T92)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T93;
  struct _fat_ptr _T94;
  int (* _T95)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T96)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T97;
  struct _fat_ptr _T98;
  int (* _T99)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T9A)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T9B;
  struct _fat_ptr _T9C;
  int (* _T9D)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T9E)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T9F;
  struct _fat_ptr _TA0;
  int (* _TA1)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TA2)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TA3;
  struct _fat_ptr _TA4;
  int (* _TA5)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TA6)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TA7;
  struct _fat_ptr _TA8;
  int (* _TA9)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TAA)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TAB;
  struct _fat_ptr _TAC;
  int (* _TAD)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TAE)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TAF;
  struct _fat_ptr _TB0;
  int (* _TB1)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TB2)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TB3;
  struct _fat_ptr _TB4;
  int (* _TB5)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TB6)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TB7;
  struct _fat_ptr _TB8;
  int (* _TB9)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TBA)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TBB;
  struct _fat_ptr _TBC;
  int (* _TBD)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TBE)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TBF;
  struct _fat_ptr _TC0;
  int (* _TC1)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TC2)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TC3;
  struct _fat_ptr _TC4;
  int (* _TC5)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TC6)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TC7;
  struct _fat_ptr _TC8;
  struct Cyc_Lower_Env * _TC9;
  struct _fat_ptr * _TCA;
  struct Cyc_Absyn_Stmt * _TCB;
  unsigned int _TCC;
  long _TCD;
  struct _tuple9 _TCE;
  struct _tuple14 _TCF;
  struct Cyc_Lower_Env * _TD0;
  struct _fat_ptr * _TD1;
  struct Cyc_Absyn_Stmt * _TD2;
  unsigned int _TD3;
  struct Cyc_Lower_Env * _TD4;
  struct Cyc_Absyn_Stmt * _TD5;
  struct Cyc_Lower_Env * _TD6;
  struct Cyc_Absyn_Exp * _TD7;
  struct _fat_ptr * _TD8;
  struct _fat_ptr * _TD9;
  struct Cyc_Absyn_Stmt * _TDA;
  unsigned int _TDB;
  int (* _TDC)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TDD)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TDE;
  struct _fat_ptr _TDF;
  int (* _TE0)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TE1)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TE2;
  struct _fat_ptr _TE3;
  LOOP: _T0 = s;
  { void * _TE4 = _T0->r;
    struct Cyc_Absyn_Decl * _TE5;
    struct Cyc_List_List * _TE6;
    struct Cyc_Absyn_Exp * _TE7;
    struct Cyc_Absyn_Exp * _TE8;
    struct _fat_ptr * _TE9;
    struct Cyc_Absyn_Stmt * _TEA;
    struct Cyc_Absyn_Stmt * _TEB;
    struct Cyc_Absyn_Exp * _TEC;
    _T1 = (int *)_TE4;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      return 1;
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_TE4;
	_TEC = _TED->f1;
      }{ struct Cyc_Absyn_Exp * e = _TEC;
	{ struct Cyc_Absyn_Exp * _TED = Cyc_Lower_get_assign_last_exp(env);
	  struct Cyc_Absyn_Exp * _TEE;
	  if (_TED != 0) { goto _TL20;
	  }
	  Cyc_Lower_lower_rhs(env,1,0,e);
	  goto _LL21;
	  _TL20: _TEE = _TED;
	  { struct Cyc_Absyn_Exp * v = _TEE;
	    Cyc_Lower_set_assign_last_exp(env,0);
	    _T3 = env;
	    _T4 = v;
	    _T5 = Cyc_Lower_lower_rhs(env,0,1,e);
	    Cyc_Lower_emit_assign(_T3,_T4,_T5,0U);
	    goto _LL21;
	  }_LL21: ;
	}return 1;
      }
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_TE4;
	_TEB = _TED->f1;
	_TEA = _TED->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _TEB;
	struct Cyc_Absyn_Stmt * s2 = _TEA;
	struct Cyc_Absyn_Exp * eopt = Cyc_Lower_get_assign_last_exp(env);
	Cyc_Lower_set_assign_last_exp(env,0);
	Cyc_Lower_lower_stmt(env,s1);
	Cyc_Lower_set_assign_last_exp(env,eopt);
	s = s2;
	goto LOOP;
      }
    case 3: 
      { struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_TE4;
	_TEC = _TED->f1;
      }{ struct Cyc_Absyn_Exp * e = _TEC;
	if (e == 0) { goto _TL22;
	}
	{ struct Cyc_Absyn_Exp * v = Cyc_Lower_lower_rhs(env,0,0,e);
	  _T6 = env;
	  _T7 = v;
	  _T8 = s;
	  _T9 = _T8->loc;
	  _TA = Cyc_Absyn_return_stmt(_T7,_T9);
	  Cyc_Lower_emit_stmt(_T6,_TA);
	}goto _TL23;
	_TL22: _TB = env;
	_TC = s;
	_TD = _TC->loc;
	_TE = Cyc_Absyn_return_stmt(0,_TD);
	Cyc_Lower_emit_stmt(_TB,_TE);
	_TL23: return 0;
      }
    case 4: 
      { struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct *)_TE4;
	_TEC = _TED->f1;
	_TEB = _TED->f2;
	_TEA = _TED->f3;
      }{ struct Cyc_Absyn_Exp * e = _TEC;
	struct Cyc_Absyn_Stmt * s1 = _TEB;
	struct Cyc_Absyn_Stmt * s2 = _TEA;
	{ struct _tuple14 _TED;
	  _TED.f0 = Cyc_Lower_new_label(env);
	  _TED.f1 = Cyc_Lower_new_label(env);
	  _TF = _TED;
	}{ struct _tuple14 _TED = _TF;
	  struct _fat_ptr * _TEE;
	  struct _fat_ptr * _TEF;
	  _TEF = _TED.f0;
	  _TEE = _TED.f1;
	  { struct _fat_ptr * f_lab = _TEF;
	    struct _fat_ptr * j_lab = _TEE;
	    _T10 = env;
	    _T11 = e;
	    _T12 = f_lab;
	    _T13 = s;
	    _T14 = _T13->loc;
	    { struct _fat_ptr * t_lab_opt = Cyc_Lower_lower_true(_T10,_T11,
								 _T12,_T14);
	      if (t_lab_opt == 0) { goto _TL24;
	      }
	      _T15 = env;
	      _T16 = t_lab_opt;
	      _T17 = s1;
	      _T18 = _T17->loc;
	      Cyc_Lower_emit_label(_T15,_T16,_T18);
	      goto _TL25;
	      _TL24: _TL25: { long a = Cyc_Lower_lower_stmt(env,s1);
		_T19 = a;
		if (! _T19) { goto _TL26;
		}
		_T1A = env;
		_T1B = Cyc_Absyn_goto_stmt(j_lab,0U);
		Cyc_Lower_emit_stmt(_T1A,_T1B);
		goto _TL27;
		_TL26: _TL27: _T1C = env;
		_T1D = f_lab;
		_T1E = s2;
		_T1F = _T1E->loc;
		Cyc_Lower_emit_label(_T1C,_T1D,_T1F);
		{ long b = Cyc_Lower_lower_stmt(env,s2);
		  _T20 = a;
		  if (_T20) { goto _TL2A;
		  }else { goto _TL2B;
		  }
		  _TL2B: _T21 = b;
		  if (_T21) { goto _TL2A;
		  }else { goto _TL28;
		  }
		  _TL2A: Cyc_Lower_emit_label(env,j_lab,0U);
		  return 1;
		  _TL28: return 0;
		}
	      }
	    }
	  }
	}
      }
    case 5: 
      { struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct *)_TE4;
	_T22 = _TED->f1;
	_TEC = _T22.f0;
	_TEB = _TED->f2;
      }{ struct Cyc_Absyn_Exp * e = _TEC;
	struct Cyc_Absyn_Stmt * s1 = _TEB;
	{ struct _tuple16 _TED;
	  _TED.f0 = Cyc_Lower_new_label(env);
	  _TED.f1 = Cyc_Lower_new_label(env);
	  _TED.f2 = Cyc_Lower_new_label(env);
	  _T23 = _TED;
	}{ struct _tuple16 _TED = _T23;
	  struct _fat_ptr * _TEE;
	  struct _fat_ptr * _TEF;
	  struct _fat_ptr * _TF0;
	  _TF0 = _TED.f0;
	  _TEF = _TED.f1;
	  _TEE = _TED.f2;
	  { struct _fat_ptr * c_lab = _TF0;
	    struct _fat_ptr * t_lab = _TEF;
	    struct _fat_ptr * b_lab = _TEE;
	    _T24 = env;
	    _T25 = c_lab;
	    _T26 = e;
	    _T27 = _T26->loc;
	    Cyc_Lower_emit_label(_T24,_T25,_T27);
	    _T28 = env;
	    _T29 = e;
	    _T2A = t_lab;
	    _T2B = b_lab;
	    _T2C = s;
	    _T2D = _T2C->loc;
	    Cyc_Lower_lower_cond(_T28,_T29,_T2A,_T2B,_T2D);
	    _T2E = env;
	    _T2F = t_lab;
	    _T30 = s1;
	    _T31 = _T30->loc;
	    Cyc_Lower_emit_label(_T2E,_T2F,_T31);
	    { struct _tuple14 _TF1 = Cyc_Lower_get_loop_labels(env);
	      struct _fat_ptr * _TF2;
	      struct _fat_ptr * _TF3;
	      _TF3 = _TF1.f0;
	      _TF2 = _TF1.f1;
	      { struct _fat_ptr * old_c_lab = _TF3;
		struct _fat_ptr * old_b_lab = _TF2;
		_T32 = Cyc_Lower_set_loop_labels(env,c_lab,b_lab);
		_T33 = s1;
		_T34 = Cyc_Absyn_goto_stmt(c_lab,0U);
		_T35 = Cyc_Absyn_seq_stmt(_T33,_T34,0U);
		Cyc_Lower_lower_stmt(_T32,_T35);
		Cyc_Lower_emit_label(env,b_lab,0U);
		Cyc_Lower_set_loop_labels(env,old_c_lab,old_b_lab);
		return 1;
	      }
	    }
	  }
	}
      }
    case 6: 
      _T36 = env;
      _T37 = Cyc_Lower_get_break_label(env);
      _T38 = _check_null(_T37);
      _T39 = Cyc_Absyn_goto_stmt(_T38,0U);
      Cyc_Lower_emit_stmt(_T36,_T39);
      return 0;
    case 7: 
      _T3A = env;
      _T3B = Cyc_Lower_get_continue_label(env);
      _T3C = _check_null(_T3B);
      _T3D = Cyc_Absyn_goto_stmt(_T3C,0U);
      Cyc_Lower_emit_stmt(_T3A,_T3D);
      return 0;
    case 8: 
      { struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct *)_TE4;
	_TE9 = _TED->f1;
      }{ struct _fat_ptr * x = _TE9;
	_T3E = env;
	_T3F = Cyc_Absyn_goto_stmt(x,0U);
	Cyc_Lower_emit_stmt(_T3E,_T3F);
	return 0;
      }
    case 9: 
      { struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct *)_TE4;
	_TEC = _TED->f1;
	_T40 = _TED->f2;
	_TE8 = _T40.f0;
	_T41 = _TED->f3;
	_TE7 = _T41.f0;
	_TEB = _TED->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _TEC;
	struct Cyc_Absyn_Exp * e2 = _TE8;
	struct Cyc_Absyn_Exp * e3 = _TE7;
	struct Cyc_Absyn_Stmt * s1 = _TEB;
	Cyc_Lower_lower_rhs(env,1,0,e1);
	{ struct _tuple16 _TED;
	  _TED.f0 = Cyc_Lower_new_label(env);
	  _TED.f1 = Cyc_Lower_new_label(env);
	  _TED.f2 = Cyc_Lower_new_label(env);
	  _T42 = _TED;
	}{ struct _tuple16 _TED = _T42;
	  struct _fat_ptr * _TEE;
	  struct _fat_ptr * _TEF;
	  struct _fat_ptr * _TF0;
	  _TF0 = _TED.f0;
	  _TEF = _TED.f1;
	  _TEE = _TED.f2;
	  { struct _fat_ptr * c_lab = _TF0;
	    struct _fat_ptr * t_lab = _TEF;
	    struct _fat_ptr * b_lab = _TEE;
	    struct _fat_ptr * l_lab = Cyc_Lower_new_label(env);
	    _T43 = env;
	    _T44 = l_lab;
	    _T45 = e2;
	    _T46 = _T45->loc;
	    Cyc_Lower_emit_label(_T43,_T44,_T46);
	    _T47 = env;
	    _T48 = e2;
	    _T49 = t_lab;
	    _T4A = b_lab;
	    _T4B = s;
	    _T4C = _T4B->loc;
	    Cyc_Lower_lower_cond(_T47,_T48,_T49,_T4A,_T4C);
	    _T4D = env;
	    _T4E = t_lab;
	    _T4F = s1;
	    _T50 = _T4F->loc;
	    Cyc_Lower_emit_label(_T4D,_T4E,_T50);
	    { struct _tuple14 _TF1 = Cyc_Lower_get_loop_labels(env);
	      struct _fat_ptr * _TF2;
	      struct _fat_ptr * _TF3;
	      _TF3 = _TF1.f0;
	      _TF2 = _TF1.f1;
	      { struct _fat_ptr * old_c_lab = _TF3;
		struct _fat_ptr * old_b_lab = _TF2;
		_T51 = Cyc_Lower_set_loop_labels(env,c_lab,b_lab);
		_T52 = s1;
		_T53 = c_lab;
		_T54 = e3;
		_T55 = e3;
		_T56 = _T55->loc;
		_T57 = Cyc_Absyn_exp_stmt(_T54,_T56);
		_T58 = Cyc_Absyn_goto_stmt(l_lab,0U);
		_T59 = Cyc_Absyn_seq_stmt(_T57,_T58,0U);
		_T5A = Cyc_Absyn_label_stmt(_T53,_T59,0U);
		_T5B = Cyc_Absyn_seq_stmt(_T52,_T5A,0U);
		Cyc_Lower_lower_stmt(_T51,_T5B);
		Cyc_Lower_set_loop_labels(env,old_c_lab,old_b_lab);
		Cyc_Lower_emit_label(env,b_lab,0U);
		return 1;
	      }
	    }
	  }
	}
      }
    case 10: 
      { struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_TE4;
	_TEC = _TED->f1;
	_TE6 = _TED->f2;
      }{ struct Cyc_Absyn_Exp * e = _TEC;
	struct Cyc_List_List * scs = _TE6;
	struct _fat_ptr * b_lab = Cyc_Lower_new_label(env);
	struct Cyc_Absyn_Exp * v = Cyc_Lower_lower_rhs(env,0,0,e);
	struct Cyc_List_List * prev = Cyc_Lower_prev_stmts(env);
	struct _tuple14 _TED = Cyc_Lower_get_loop_labels(env);
	struct _fat_ptr * _TEE;
	struct _fat_ptr * _TEF;
	_TEF = _TED.f0;
	_TEE = _TED.f1;
	{ struct _fat_ptr * old_c_lab = _TEF;
	  struct _fat_ptr * old_b_lab = _TEE;
	  env = Cyc_Lower_set_loop_labels(env,old_c_lab,b_lab);
	  { struct Cyc_List_List * newscs = 0;
	    _TL2F: if (scs != 0) { goto _TL2D;
	    }else { goto _TL2E;
	    }
	    _TL2D: _T5C = scs;
	    _T5D = _T5C->hd;
	    { struct Cyc_Absyn_Switch_clause * _TF0 = (struct Cyc_Absyn_Switch_clause *)_T5D;
	      unsigned int _TF1;
	      struct Cyc_Absyn_Stmt * _TF2;
	      struct Cyc_Absyn_Exp * _TF3;
	      struct Cyc_Core_Opt * _TF4;
	      struct Cyc_Absyn_Pat * _TF5;
	      { struct Cyc_Absyn_Switch_clause _TF6 = *_TF0;
		_TF5 = _TF6.pattern;
		_TF4 = _TF6.pat_vars;
		_TF3 = _TF6.where_clause;
		_TF2 = _TF6.body;
		_TF1 = _TF6.loc;
	      }{ struct Cyc_Absyn_Pat * pat = _TF5;
		struct Cyc_Core_Opt * pvs = _TF4;
		struct Cyc_Absyn_Exp * w = _TF3;
		struct Cyc_Absyn_Stmt * body = _TF2;
		unsigned int loc = _TF1;
		Cyc_Lower_set_prev_stmts(env,0);
		Cyc_Lower_lower_stmt(env,body);
		_T5E = Cyc_Lower_prev_stmts(env);
		{ struct Cyc_Absyn_Stmt * new_body = Cyc_Lower_rev_seq_stmts(_T5E);
		  struct Cyc_Absyn_Switch_clause * newsc;
		  newsc = _cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));
		  _T5F = newsc;
		  _T5F->pattern = pat;
		  _T60 = newsc;
		  _T60->pat_vars = pvs;
		  _T61 = newsc;
		  _T61->where_clause = w;
		  _T62 = newsc;
		  _T62->body = new_body;
		  _T63 = newsc;
		  _T63->loc = loc;
		  { struct Cyc_List_List * _TF6 = _cycalloc(sizeof(struct Cyc_List_List));
		    _TF6->hd = newsc;
		    _TF6->tl = newscs;
		    _T64 = (struct Cyc_List_List *)_TF6;
		  }newscs = _T64;
		}
	      }
	    }_T65 = scs;
	    scs = _T65->tl;
	    goto _TL2F;
	    _TL2E: Cyc_Lower_set_prev_stmts(env,prev);
	    Cyc_Lower_set_loop_labels(env,old_c_lab,old_b_lab);
	    _T66 = env;
	    _T67 = v;
	    _T68 = Cyc_List_imp_rev(newscs);
	    _T69 = s;
	    _T6A = _T69->loc;
	    _T6B = Cyc_Absyn_switch_stmt(_T67,_T68,_T6A);
	    Cyc_Lower_emit_stmt(_T66,_T6B);
	    Cyc_Lower_emit_label(env,b_lab,0U);
	    return 1;
	  }
	}
      }
    case 12: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_TE4;
	_TE5 = _TED->f1;
	_TEB = _TED->f2;
      }{ struct Cyc_Absyn_Decl * d = _TE5;
	struct Cyc_Absyn_Stmt * s1 = _TEB;
	_T6C = d;
	{ void * _TED = _T6C->r;
	  struct Cyc_Absyn_Enumdecl * _TEE;
	  struct Cyc_Absyn_Aggrdecl * _TEF;
	  struct Cyc_Absyn_Fndecl * _TF0;
	  struct Cyc_Absyn_Vardecl * _TF1;
	  _T6D = (int *)_TED;
	  _T6E = *_T6D;
	  switch (_T6E) {
	  case 0: 
	    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _TF2 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TED;
	      _TF1 = _TF2->f1;
	    }{ struct Cyc_Absyn_Vardecl * vd = _TF1;
	      struct Cyc_Absyn_Vardecl * newvd;
	      newvd = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
	      _T6F = newvd;
	      _T70 = vd;
	      *_T6F = *_T70;
	      _T71 = vd;
	      _T72 = _T71->sc;
	      _T73 = (int)_T72;
	      if (_T73 == 0) { goto _TL31;
	      }
	      _T74 = newvd;
	      _T75 = _T74->initializer;
	      if (_T75 == 0) { goto _TL33;
	      }
	      _T76 = newvd;
	      { struct Cyc_Absyn_Exp * e = _T76->initializer;
		_T77 = newvd;
		_T77->initializer = Cyc_Lower_lower_rhs(env,0,1,e);
	      }goto _TL34;
	      _TL33: _TL34: goto _TL32;
	      _TL31: _TL32: { struct Cyc_List_List * p = Cyc_Lower_prev_stmts(env);
		Cyc_Lower_set_prev_stmts(env,0);
		{ long a = Cyc_Lower_lower_stmt(env,s1);
		  _T78 = Cyc_Lower_prev_stmts(env);
		  { struct Cyc_Absyn_Stmt * body = Cyc_Lower_rev_seq_stmts(_T78);
		    Cyc_Lower_set_prev_stmts(env,p);
		    _T79 = env;
		    { struct Cyc_Absyn_Decl * _TF2 = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
		      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _TF3 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
			_TF3->tag = 0;
			_TF3->f1 = newvd;
			_T7B = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TF3;
		      }_TF2->r = (void *)_T7B;
		      _T7C = d;
		      _TF2->loc = _T7C->loc;
		      _T7A = (struct Cyc_Absyn_Decl *)_TF2;
		    }_T7D = body;
		    _T7E = Cyc_Absyn_decl_stmt(_T7A,_T7D,0U);
		    Cyc_Lower_emit_stmt(_T79,_T7E);
		    _T7F = a;
		    return _T7F;
		  }
		}
	      }
	    }
	  case 1: 
	    { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _TF2 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_TED;
	      _TF0 = _TF2->f1;
	    }{ struct Cyc_Absyn_Fndecl * fd = _TF0;
	      _T80 = d;
	      { void * fn_r = _T80->r;
		_T81 = fd;
		_T82 = _T81->orig_scope;
		_T83 = (int)_T82;
		if (_T83 == 4) { goto _TL35;
		}
		{ struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _TF2 = _cycalloc(sizeof(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct));
		  _TF2->tag = 1;
		  _TF2->f1 = Cyc_Lower_lower_fn(fd);
		  _T84 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_TF2;
		}fn_r = (void *)_T84;
		goto _TL36;
		_TL35: _TL36: { struct Cyc_List_List * p = Cyc_Lower_prev_stmts(env);
		  Cyc_Lower_set_prev_stmts(env,0);
		  { long a = Cyc_Lower_lower_stmt(env,s1);
		    _T85 = Cyc_Lower_prev_stmts(env);
		    { struct Cyc_Absyn_Stmt * body = Cyc_Lower_rev_seq_stmts(_T85);
		      Cyc_Lower_set_prev_stmts(env,p);
		      _T86 = env;
		      { struct Cyc_Absyn_Decl * _TF2 = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
			_T88 = d;
			_TF2->r = _T88->r;
			_T89 = d;
			_TF2->loc = _T89->loc;
			_T87 = (struct Cyc_Absyn_Decl *)_TF2;
		      }_T8A = body;
		      _T8B = Cyc_Absyn_decl_stmt(_T87,_T8A,0U);
		      Cyc_Lower_emit_stmt(_T86,_T8B);
		      _T8C = a;
		      return _T8C;
		    }
		  }
		}
	      }
	    }
	  case 5: 
	    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _TF2 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_TED;
	      _TEF = _TF2->f1;
	    }{ struct Cyc_Absyn_Aggrdecl * ad = _TEF;
	      _T8E = Cyc_Warn_impos;
	      { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									 struct _fat_ptr))_T8E;
		_T8D = _TF2;
	      }_T8F = _tag_fat("Aggregate decl in lower_stmt",sizeof(char),
			       29U);
	      _T90 = _tag_fat(0U,sizeof(void *),0);
	      _T8D(_T8F,_T90);
	    }
	  case 7: 
	    { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _TF2 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_TED;
	      _TEE = _TF2->f1;
	    }{ struct Cyc_Absyn_Enumdecl * ed = _TEE;
	      _T92 = Cyc_Warn_impos;
	      { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									 struct _fat_ptr))_T92;
		_T91 = _TF2;
	      }_T93 = _tag_fat("Enum decl in lower_stmt",sizeof(char),24U);
	      _T94 = _tag_fat(0U,sizeof(void *),0);
	      _T91(_T93,_T94);
	    }
	  case 10: 
	    _T96 = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_T96;
	      _T95 = _TF2;
	    }_T97 = _tag_fat("Using decl in lower",sizeof(char),20U);
	    _T98 = _tag_fat(0U,sizeof(void *),0);
	    _T95(_T97,_T98);
	  case 11: 
	    _T9A = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_T9A;
	      _T99 = _TF2;
	    }_T9B = _tag_fat("Extern-C decl in lower",sizeof(char),23U);
	    _T9C = _tag_fat(0U,sizeof(void *),0);
	    _T99(_T9B,_T9C);
	  case 12: 
	    _T9E = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_T9E;
	      _T9D = _TF2;
	    }_T9F = _tag_fat("Extern-C include in lower",sizeof(char),26U);
	    _TA0 = _tag_fat(0U,sizeof(void *),0);
	    _T9D(_T9F,_TA0);
	  case 13: 
	    _TA2 = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TA2;
	      _TA1 = _TF2;
	    }_TA3 = _tag_fat("Porton in lower",sizeof(char),16U);
	    _TA4 = _tag_fat(0U,sizeof(void *),0);
	    _TA1(_TA3,_TA4);
	  case 14: 
	    _TA6 = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TA6;
	      _TA5 = _TF2;
	    }_TA7 = _tag_fat("Portoff in lower",sizeof(char),17U);
	    _TA8 = _tag_fat(0U,sizeof(void *),0);
	    _TA5(_TA7,_TA8);
	  case 15: 
	    _TAA = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TAA;
	      _TA9 = _TF2;
	    }_TAB = _tag_fat("Tempeston in lower",sizeof(char),19U);
	    _TAC = _tag_fat(0U,sizeof(void *),0);
	    _TA9(_TAB,_TAC);
	  case 16: 
	    _TAE = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TAE;
	      _TAD = _TF2;
	    }_TAF = _tag_fat("Tempestoff in lower",sizeof(char),20U);
	    _TB0 = _tag_fat(0U,sizeof(void *),0);
	    _TAD(_TAF,_TB0);
	  case 6: 
	    _TB2 = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TB2;
	      _TB1 = _TF2;
	    }_TB3 = _tag_fat("Datatype_d in lower",sizeof(char),20U);
	    _TB4 = _tag_fat(0U,sizeof(void *),0);
	    _TB1(_TB3,_TB4);
	  case 2: 
	    _TB6 = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TB6;
	      _TB5 = _TF2;
	    }_TB7 = _tag_fat("Let_d in lower",sizeof(char),15U);
	    _TB8 = _tag_fat(0U,sizeof(void *),0);
	    _TB5(_TB7,_TB8);
	  case 3: 
	    _TBA = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TBA;
	      _TB9 = _TF2;
	    }_TBB = _tag_fat("Letv_d in lower",sizeof(char),16U);
	    _TBC = _tag_fat(0U,sizeof(void *),0);
	    _TB9(_TBB,_TBC);
	  case 4: 
	    _TBE = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TBE;
	      _TBD = _TF2;
	    }_TBF = _tag_fat("Region_d in lower",sizeof(char),18U);
	    _TC0 = _tag_fat(0U,sizeof(void *),0);
	    _TBD(_TBF,_TC0);
	  case 8: 
	    _TC2 = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TC2;
	      _TC1 = _TF2;
	    }_TC3 = _tag_fat("Typedef_d in lower",sizeof(char),19U);
	    _TC4 = _tag_fat(0U,sizeof(void *),0);
	    _TC1(_TC3,_TC4);
	  default: 
	    _TC6 = Cyc_Warn_impos;
	    { int (* _TF2)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TC6;
	      _TC5 = _TF2;
	    }_TC7 = _tag_fat("Namespace_d in lower",sizeof(char),21U);
	    _TC8 = _tag_fat(0U,sizeof(void *),0);
	    _TC5(_TC7,_TC8);
	  }
	  ;
	}goto _LL0;
      }
    case 13: 
      { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_TE4;
	_TE9 = _TED->f1;
	_TEB = _TED->f2;
      }{ struct _fat_ptr * x = _TE9;
	struct Cyc_Absyn_Stmt * s1 = _TEB;
	_TC9 = env;
	_TCA = x;
	_TCB = s;
	_TCC = _TCB->loc;
	Cyc_Lower_emit_label(_TC9,_TCA,_TCC);
	_TCD = Cyc_Lower_lower_stmt(env,s1);
	return _TCD;
      }
    case 14: 
      { struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct * _TED = (struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct *)_TE4;
	_TEB = _TED->f1;
	_TCE = _TED->f2;
	_TEC = _TCE.f0;
      }{ struct Cyc_Absyn_Stmt * s1 = _TEB;
	struct Cyc_Absyn_Exp * e = _TEC;
	{ struct _tuple14 _TED;
	  _TED.f0 = Cyc_Lower_new_label(env);
	  _TED.f1 = Cyc_Lower_new_label(env);
	  _TCF = _TED;
	}{ struct _tuple14 _TED = _TCF;
	  struct _fat_ptr * _TEE;
	  struct _fat_ptr * _TEF;
	  _TEF = _TED.f0;
	  _TEE = _TED.f1;
	  { struct _fat_ptr * c_lab = _TEF;
	    struct _fat_ptr * b_lab = _TEE;
	    _TD0 = env;
	    _TD1 = c_lab;
	    _TD2 = s1;
	    _TD3 = _TD2->loc;
	    Cyc_Lower_emit_label(_TD0,_TD1,_TD3);
	    { struct _tuple14 _TF0 = Cyc_Lower_get_loop_labels(env);
	      struct _fat_ptr * _TF1;
	      struct _fat_ptr * _TF2;
	      _TF2 = _TF0.f0;
	      _TF1 = _TF0.f1;
	      { struct _fat_ptr * old_c_lab = _TF2;
		struct _fat_ptr * old_b_lab = _TF1;
		_TD4 = Cyc_Lower_set_loop_labels(env,c_lab,b_lab);
		_TD5 = s1;
		Cyc_Lower_lower_stmt(_TD4,_TD5);
		Cyc_Lower_set_loop_labels(env,old_c_lab,old_b_lab);
		_TD6 = env;
		_TD7 = e;
		_TD8 = c_lab;
		_TD9 = b_lab;
		_TDA = s;
		_TDB = _TDA->loc;
		Cyc_Lower_lower_cond(_TD6,_TD7,_TD8,_TD9,_TDB);
		Cyc_Lower_emit_label(env,b_lab,0U);
		return 1;
	      }
	    }
	  }
	}
      }
    case 11: 
      _TDD = Cyc_Warn_impos;
      { int (* _TED)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_TDD;
	_TDC = _TED;
      }_TDE = _tag_fat("fallthru in lower.cyc",sizeof(char),22U);
      _TDF = _tag_fat(0U,sizeof(void *),0);
      _TDC(_TDE,_TDF);
    default: 
      _TE1 = Cyc_Warn_impos;
      { int (* _TED)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_TE1;
	_TE0 = _TED;
      }_TE2 = _tag_fat("try-catch in lower.cyc",sizeof(char),23U);
      _TE3 = _tag_fat(0U,sizeof(void *),0);
      _TE0(_TE2,_TE3);
    }
    _LL0: ;
  }
}
static long Cyc_Lower_is_temp(struct _tuple0 * qv) {
  struct _tuple0 * _T0;
  struct _tuple0 _T1;
  struct _fat_ptr * _T2;
  int _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  const char * _T9;
  char _TA;
  int _TB;
  struct _fat_ptr _TC;
  unsigned char * _TD;
  const char * _TE;
  char _TF;
  int _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  const char * _T13;
  char _T14;
  int _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  const char * _T18;
  char _T19;
  int _T1A;
  _T0 = qv;
  _T1 = *_T0;
  _T2 = _T1.f1;
  { struct _fat_ptr v = *_T2;
    _T4 = v;
    _T5 = _get_fat_size(_T4,sizeof(char));
    if (_T5 <= 4U) { goto _TL37;
    }
    _T6 = v;
    _T7 = _T6.curr;
    _T8 = (const char *)_T7;
    _T9 = _check_null(_T8);
    _TA = _T9[0];
    _TB = (int)_TA;
    if (_TB != 95) { goto _TL37;
    }
    _TC = v;
    _TD = _TC.curr;
    _TE = (const char *)_TD;
    _TF = _TE[1];
    _T10 = (int)_TF;
    if (_T10 != 116) { goto _TL37;
    }
    _T11 = v;
    _T12 = _T11.curr;
    _T13 = (const char *)_T12;
    _T14 = _T13[2];
    _T15 = (int)_T14;
    if (_T15 != 109) { goto _TL37;
    }
    _T16 = v;
    _T17 = _T16.curr;
    _T18 = (const char *)_T17;
    _T19 = _T18[3];
    _T1A = (int)_T19;
    _T3 = _T1A == 112;
    goto _TL38;
    _TL37: _T3 = 0;
    _TL38: return _T3;
  }
}
static struct Cyc_List_List * Cyc_Lower_lower_rhs_list(struct Cyc_Lower_Env * env,
						       struct Cyc_List_List * es) {
  long _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_Absyn_Exp * _T3;
  int * _T4;
  unsigned int _T5;
  struct Cyc_List_List * _T6;
  long _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_Lower_Env * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  long no_eff = 1;
  { struct Cyc_List_List * es2 = es;
    _TL3C: _T0 = no_eff;
    if (_T0) { goto _TL3D;
    }else { goto _TL3B;
    }
    _TL3D: if (es2 != 0) { goto _TL3A;
    }else { goto _TL3B;
    }
    _TL3A: _T1 = es2;
    _T2 = _T1->hd;
    _T3 = (struct Cyc_Absyn_Exp *)_T2;
    { void * _T10 = _T3->r;
      _T4 = (int *)_T10;
      _T5 = *_T4;
      switch (_T5) {
      case 0: 
	goto _LL4;
      case 1: 
	_LL4: goto _TL39;
      default: 
	no_eff = 0;
	goto _LL0;
      }
      _LL0: ;
    }_TL39: _T6 = es2;
    es2 = _T6->tl;
    goto _TL3C;
    _TL3B: ;
  }_T7 = no_eff;
  if (! _T7) { goto _TL3F;
  }
  _T8 = es;
  return _T8;
  _TL3F: { struct Cyc_List_List * res = 0;
    _TL44: if (es != 0) { goto _TL42;
    }else { goto _TL43;
    }
    _TL42: { struct Cyc_List_List * _T10 = _cycalloc(sizeof(struct Cyc_List_List));
      _TA = env;
      _TB = es;
      _TC = _TB->hd;
      _TD = (struct Cyc_Absyn_Exp *)_TC;
      _T10->hd = Cyc_Lower_lower_rhs(_TA,0,0,_TD);
      _T10->tl = res;
      _T9 = (struct Cyc_List_List *)_T10;
    }res = _T9;
    _TE = es;
    es = _TE->tl;
    goto _TL44;
    _TL43: _TF = Cyc_List_imp_rev(res);
    return _TF;
  }
}
static long Cyc_Lower_might_have_effect(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  _T0 = e;
  { void * _T3 = _T0->r;
    _T1 = (int *)_T3;
    _T2 = *_T1;
    switch (_T2) {
    case 4: 
      return 1;
    case 10: 
      return 1;
    case 39: 
      return 1;
    default: 
      return 0;
    }
    ;
  }
}
 struct _tuple17 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
static struct Cyc_Absyn_Exp * Cyc_Lower_lower_rhs(struct Cyc_Lower_Env * env,
						  long effect_only,long has_target,
						  struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  void * _T3;
  void * _T4;
  long _T5;
  struct Cyc_Absyn_Exp * _T6;
  int * _T7;
  unsigned int _T8;
  struct Cyc_Absyn_Exp * _T9;
  struct Cyc_Absyn_Exp * _TA;
  unsigned int _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _TD;
  void * _TE;
  int * _TF;
  int _T10;
  struct Cyc_Absyn_Exp * _T11;
  void * _T12;
  long _T13;
  long _T14;
  struct Cyc_Absyn_Exp * _T15;
  enum Cyc_Absyn_Primop _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_Absyn_Exp * _T18;
  unsigned int _T19;
  struct Cyc_Lower_Env * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  struct Cyc_Core_Opt * _T1C;
  void * _T1D;
  enum Cyc_Absyn_Primop _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  struct Cyc_Absyn_Exp * _T21;
  struct Cyc_Absyn_Exp * _T22;
  unsigned int _T23;
  struct Cyc_Lower_Env * _T24;
  struct Cyc_Absyn_Exp * _T25;
  struct Cyc_Absyn_Exp * _T26;
  struct Cyc_Absyn_Exp * _T27;
  unsigned int _T28;
  enum Cyc_Absyn_Incrementor _T29;
  int _T2A;
  long _T2B;
  struct Cyc_Lower_Env * _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  struct Cyc_Absyn_Exp * _T2E;
  struct Cyc_Absyn_Exp * _T2F;
  struct Cyc_Absyn_Exp * _T30;
  unsigned int _T31;
  struct Cyc_Absyn_Exp * _T32;
  struct Cyc_Absyn_Exp * _T33;
  unsigned int _T34;
  struct Cyc_Lower_Env * _T35;
  struct Cyc_Absyn_Exp * _T36;
  struct Cyc_Absyn_Exp * _T37;
  struct Cyc_Absyn_Exp * _T38;
  struct Cyc_Absyn_Exp * _T39;
  unsigned int _T3A;
  struct Cyc_Absyn_Exp * _T3B;
  struct Cyc_Absyn_Exp * _T3C;
  unsigned int _T3D;
  long _T3E;
  struct Cyc_Lower_Env * _T3F;
  struct Cyc_Absyn_Exp * _T40;
  struct Cyc_Absyn_Exp * _T41;
  int _T42;
  struct Cyc_Absyn_Exp * _T43;
  struct Cyc_Absyn_Exp * _T44;
  unsigned int _T45;
  struct Cyc_Absyn_Exp * _T46;
  struct Cyc_Absyn_Exp * _T47;
  unsigned int _T48;
  struct Cyc_Lower_Env * _T49;
  struct Cyc_Absyn_Exp * _T4A;
  struct Cyc_Absyn_Exp * _T4B;
  int _T4C;
  struct Cyc_Absyn_Exp * _T4D;
  struct Cyc_Absyn_Exp * _T4E;
  unsigned int _T4F;
  struct Cyc_Absyn_Exp * _T50;
  struct Cyc_Absyn_Exp * _T51;
  unsigned int _T52;
  long _T53;
  struct Cyc_Lower_Env * _T54;
  struct Cyc_Absyn_Exp * _T55;
  struct Cyc_Absyn_Stmt * _T56;
  struct Cyc_Absyn_Stmt * _T57;
  struct Cyc_Absyn_Exp * _T58;
  unsigned int _T59;
  struct Cyc_Absyn_Stmt * _T5A;
  struct Cyc_Absyn_Exp * _T5B;
  struct Cyc_Lower_Env * _T5C;
  struct Cyc_Absyn_Exp * _T5D;
  struct Cyc_Absyn_Stmt * _T5E;
  struct Cyc_Absyn_Exp * _T5F;
  struct Cyc_Absyn_Exp * _T60;
  struct Cyc_Absyn_Stmt * _T61;
  struct Cyc_Absyn_Exp * _T62;
  unsigned int _T63;
  struct Cyc_Absyn_Stmt * _T64;
  struct Cyc_Absyn_Exp * _T65;
  long _T66;
  struct Cyc_Lower_Env * _T67;
  struct Cyc_Absyn_Exp * _T68;
  struct Cyc_Absyn_Stmt * _T69;
  struct Cyc_Absyn_Exp * _T6A;
  struct Cyc_Absyn_Stmt * _T6B;
  struct Cyc_Absyn_Exp * _T6C;
  unsigned int _T6D;
  struct Cyc_Absyn_Stmt * _T6E;
  struct Cyc_Absyn_Exp * _T6F;
  struct Cyc_Lower_Env * _T70;
  struct Cyc_Absyn_Exp * _T71;
  struct Cyc_Absyn_Stmt * _T72;
  struct Cyc_Absyn_Exp * _T73;
  struct Cyc_Absyn_Exp * _T74;
  struct Cyc_Absyn_Stmt * _T75;
  struct Cyc_Absyn_Exp * _T76;
  unsigned int _T77;
  struct Cyc_Absyn_Stmt * _T78;
  struct Cyc_Absyn_Exp * _T79;
  long _T7A;
  struct Cyc_Lower_Env * _T7B;
  struct Cyc_Absyn_Exp * _T7C;
  struct Cyc_Absyn_Exp * _T7D;
  struct Cyc_Absyn_Stmt * _T7E;
  struct Cyc_Absyn_Stmt * _T7F;
  struct Cyc_Absyn_Exp * _T80;
  unsigned int _T81;
  struct Cyc_Absyn_Stmt * _T82;
  struct Cyc_Absyn_Exp * _T83;
  struct Cyc_Lower_Env * _T84;
  struct Cyc_Absyn_Exp * _T85;
  struct Cyc_Absyn_Exp * _T86;
  struct Cyc_Absyn_Exp * _T87;
  struct Cyc_Absyn_Stmt * _T88;
  struct Cyc_Absyn_Exp * _T89;
  struct Cyc_Absyn_Exp * _T8A;
  struct Cyc_Absyn_Stmt * _T8B;
  struct Cyc_Absyn_Exp * _T8C;
  unsigned int _T8D;
  struct Cyc_Absyn_Stmt * _T8E;
  struct Cyc_Absyn_Exp * _T8F;
  long _T90;
  struct Cyc_Absyn_Exp * _T91;
  struct Cyc_Absyn_Exp * _T92;
  int * _T93;
  unsigned int _T94;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T95;
  void * _T96;
  int * _T97;
  int _T98;
  void * _T99;
  struct _tuple0 * _T9A;
  struct _fat_ptr * _T9B;
  struct _fat_ptr _T9C;
  struct _fat_ptr _T9D;
  int _T9E;
  long _T9F;
  struct Cyc_Absyn_Exp * _TA0;
  struct Cyc_List_List * _TA1;
  struct Cyc_Absyn_Exp * _TA2;
  unsigned int _TA3;
  void * _TA4;
  void * _TA5;
  struct Cyc_Absyn_Exp * _TA6;
  long _TA7;
  enum Cyc_Absyn_Coercion _TA8;
  struct Cyc_Absyn_Exp * _TA9;
  unsigned int _TAA;
  struct Cyc_Absyn_Exp * _TAB;
  struct Cyc_Absyn_Exp * _TAC;
  unsigned int _TAD;
  void * _TAE;
  struct Cyc_Absyn_Exp * _TAF;
  void * _TB0;
  struct Cyc_Absyn_Exp * _TB1;
  struct Cyc_Absyn_Exp * _TB2;
  unsigned int _TB3;
  struct Cyc_Absyn_Exp * _TB4;
  struct _fat_ptr * _TB5;
  struct Cyc_Absyn_Exp * _TB6;
  unsigned int _TB7;
  struct Cyc_Absyn_Exp * _TB8;
  struct _fat_ptr * _TB9;
  struct Cyc_Absyn_Exp * _TBA;
  unsigned int _TBB;
  struct Cyc_Absyn_Exp * _TBC;
  void * _TBD;
  struct Cyc_Absyn_Exp * _TBE;
  long _TBF;
  struct Cyc_Absyn_Exp * _TC0;
  struct Cyc_Absyn_Exp * _TC1;
  struct Cyc_Absyn_Exp * _TC2;
  struct Cyc_List_List * _TC3;
  void * _TC4;
  struct _tuple17 * _TC5;
  struct Cyc_List_List * _TC6;
  struct _tuple17 * _TC7;
  struct Cyc_List_List * _TC8;
  struct Cyc_Core_Opt * _TC9;
  struct Cyc_List_List * _TCA;
  struct Cyc_Absyn_Exp * _TCB;
  unsigned int _TCC;
  struct Cyc_Absyn_Exp * _TCD;
  struct Cyc_String_pa_PrintArg_struct _TCE;
  int (* _TCF)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TD0)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TD1;
  struct _fat_ptr _TD2;
  int (* _TD3)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TD4)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TD5;
  struct _fat_ptr _TD6;
  int (* _TD7)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TD8)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TD9;
  struct _fat_ptr _TDA;
  void * _TDB;
  int (* _TDC)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TDD)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TDE;
  struct _fat_ptr _TDF;
  struct Cyc_String_pa_PrintArg_struct _TE0;
  int (* _TE1)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TE2)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TE3;
  struct _fat_ptr _TE4;
  struct Cyc_String_pa_PrintArg_struct _TE5;
  int (* _TE6)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TE7)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TE8;
  struct _fat_ptr _TE9;
  struct Cyc_String_pa_PrintArg_struct _TEA;
  int (* _TEB)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TEC)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TED;
  struct _fat_ptr _TEE;
  struct Cyc_String_pa_PrintArg_struct _TEF;
  int (* _TF0)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TF1)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TF2;
  struct _fat_ptr _TF3;
  struct Cyc_String_pa_PrintArg_struct _TF4;
  int (* _TF5)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TF6)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TF7;
  struct _fat_ptr _TF8;
  struct Cyc_String_pa_PrintArg_struct _TF9;
  int (* _TFA)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TFB)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TFC;
  struct _fat_ptr _TFD;
  struct Cyc_String_pa_PrintArg_struct _TFE;
  int (* _TFF)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T100)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T101;
  struct _fat_ptr _T102;
  struct Cyc_String_pa_PrintArg_struct _T103;
  int (* _T104)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T105)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T106;
  struct _fat_ptr _T107;
  struct Cyc_String_pa_PrintArg_struct _T108;
  int (* _T109)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T10A)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T10B;
  struct _fat_ptr _T10C;
  struct Cyc_String_pa_PrintArg_struct _T10D;
  int (* _T10E)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T10F)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T110;
  struct _fat_ptr _T111;
  struct Cyc_String_pa_PrintArg_struct _T112;
  int (* _T113)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T114)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T115;
  struct _fat_ptr _T116;
  long _T117;
  long _T118;
  struct Cyc_Lower_Env * _T119;
  struct Cyc_Absyn_Stmt * _T11A;
  struct Cyc_Absyn_Exp * _T11B;
  long _T11C;
  struct Cyc_Absyn_Exp * _T11D;
  struct Cyc_Absyn_Exp * _T11E;
  struct Cyc_Absyn_Exp * res;
  _T0 = e;
  _T1 = _T0->topt;
  if (_T1 == 0) { goto _TL46;
  }
  _T2 = e;
  _T3 = _T2->topt;
  _T4 = Cyc_Absyn_void_type;
  _T5 = Cyc_Unify_unify(_T3,_T4);
  if (! _T5) { goto _TL46;
  }
  effect_only = 1;
  goto _TL47;
  _TL46: _TL47: _T6 = e;
  { void * _T11F = _T6->r;
    struct Cyc_Absyn_Aggrdecl * _T120;
    struct Cyc_List_List * _T121;
    struct Cyc_Absyn_Enumfield * _T122;
    long _T123;
    struct _fat_ptr * _T124;
    enum Cyc_Absyn_Coercion _T125;
    long _T126;
    struct Cyc_Absyn_VarargCallInfo * _T127;
    struct Cyc_List_List * _T128;
    struct Cyc_Absyn_Exp * _T129;
    enum Cyc_Absyn_Incrementor _T12A;
    struct Cyc_Absyn_Exp * _T12B;
    struct Cyc_Core_Opt * _T12C;
    enum Cyc_Absyn_Primop _T12D;
    void * _T12E;
    _T7 = (int *)_T11F;
    _T8 = *_T7;
    switch (_T8) {
    case 0: 
      _T9 = e;
      return _T9;
    case 2: 
      _TA = e;
      _TB = _TA->loc;
      _TC = Cyc_Absyn_uint_exp(1U,_TB);
      return _TC;
    case 1: 
      _TD = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T11F;
      _TE = _TD->f1;
      _TF = (int *)_TE;
      _T10 = *_TF;
      if (_T10 != 2) { goto _TL49;
      }
      _T11 = e;
      return _T11;
      _TL49: { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T11F;
	_T12 = _T12F->f1;
	_T12E = (void *)_T12;
      }{ void * b = _T12E;
	struct _tuple0 * q = Cyc_Absyn_binding2qvar(b);
	_T13 = Cyc_Lower_is_macro(q);
	if (_T13) { goto _TL4D;
	}else { goto _TL4E;
	}
	_TL4E: _T14 = Cyc_Lower_is_temp(q);
	if (_T14) { goto _TL4D;
	}else { goto _TL4B;
	}
	_TL4D: _T15 = e;
	return _T15;
	_TL4B: res = e;
	goto _LL0;
      }
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T11F;
	_T12D = _T12F->f1;
	_T12E = _T12F->f2;
      }{ enum Cyc_Absyn_Primop p = _T12D;
	struct Cyc_List_List * es = _T12E;
	struct Cyc_List_List * vs = Cyc_Lower_lower_rhs_list(env,es);
	_T16 = p;
	_T17 = vs;
	_T18 = e;
	_T19 = _T18->loc;
	res = Cyc_Absyn_primop_exp(_T16,_T17,_T19);
	goto _LL0;
      }
    case 4: 
      { struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T12C = _T12F->f2;
	_T12B = _T12F->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct Cyc_Core_Opt * popt = _T12C;
	struct Cyc_Absyn_Exp * e2 = _T12B;
	struct Cyc_Absyn_Exp * v1 = Cyc_Lower_lower_lhs(env,e1);
	if (popt == 0) { goto _TL4F;
	}
	{ struct Cyc_Absyn_Exp * v2 = Cyc_Lower_lower_rhs(env,0,0,e2);
	  _T1A = env;
	  _T1B = v1;
	  _T1C = popt;
	  _T1D = _T1C->v;
	  _T1E = (enum Cyc_Absyn_Primop)_T1D;
	  _T1F = Cyc_Lower_deep_copy(v1);
	  _T20 = v2;
	  _T21 = Cyc_Absyn_prim2_exp(_T1E,_T1F,_T20,0U);
	  _T22 = e;
	  _T23 = _T22->loc;
	  Cyc_Lower_emit_assign(_T1A,_T1B,_T21,_T23);
	  res = Cyc_Lower_deep_copy(v1);
	}goto _TL50;
	_TL4F: { struct Cyc_Absyn_Exp * v2 = Cyc_Lower_lower_rhs(env,0,1,
								 e2);
	  _T24 = env;
	  _T25 = v1;
	  _T26 = v2;
	  _T27 = e;
	  _T28 = _T27->loc;
	  Cyc_Lower_emit_assign(_T24,_T25,_T26,_T28);
	  res = Cyc_Lower_deep_copy(v1);
	}_TL50: goto _LL0;
      }
    case 5: 
      { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T12A = _T12F->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	enum Cyc_Absyn_Incrementor incr = _T12A;
	struct Cyc_Absyn_Exp * v1 = Cyc_Lower_lower_lhs(env,e1);
	_T29 = incr;
	_T2A = (int)_T29;
	switch (_T2A) {
	case Cyc_Absyn_PostInc: 
	  _T2B = effect_only;
	  if (! _T2B) { goto _TL52;
	  }
	  goto _LL5D;
	  _TL52: { struct _tuple15 _T12F = Cyc_Lower_fresh_var(env,e);
	    struct Cyc_Absyn_Exp * _T130;
	    struct Cyc_Absyn_Vardecl * _T131;
	    _T131 = _T12F.f0;
	    _T130 = _T12F.f1;
	    { struct Cyc_Absyn_Vardecl * vd = _T131;
	      struct Cyc_Absyn_Exp * temp = _T130;
	      Cyc_Lower_emit_assign(env,temp,v1,0U);
	      _T2C = env;
	      _T2D = v1;
	      _T2E = Cyc_Lower_deep_copy(temp);
	      _T2F = Cyc_Absyn_signed_int_exp(1,0U);
	      _T30 = e;
	      _T31 = _T30->loc;
	      _T32 = Cyc_Absyn_add_exp(_T2E,_T2F,_T31);
	      _T33 = e;
	      _T34 = _T33->loc;
	      Cyc_Lower_emit_assign(_T2C,_T2D,_T32,_T34);
	      res = Cyc_Lower_deep_copy(temp);
	      goto _LL59;
	    }
	  }
	case Cyc_Absyn_PreInc: 
	  _LL5D: _T35 = env;
	  _T36 = v1;
	  _T37 = Cyc_Lower_deep_copy(v1);
	  _T38 = Cyc_Absyn_signed_int_exp(1,0U);
	  _T39 = e;
	  _T3A = _T39->loc;
	  _T3B = Cyc_Absyn_add_exp(_T37,_T38,_T3A);
	  _T3C = e;
	  _T3D = _T3C->loc;
	  Cyc_Lower_emit_assign(_T35,_T36,_T3B,_T3D);
	  res = Cyc_Lower_deep_copy(v1);
	  goto _LL59;
	case Cyc_Absyn_PostDec: 
	  _T3E = effect_only;
	  if (! _T3E) { goto _TL54;
	  }
	  goto _LL61;
	  _TL54: goto _LL64;
	case Cyc_Absyn_PreDec: 
	  _LL61: _T3F = env;
	  _T40 = v1;
	  _T41 = Cyc_Lower_deep_copy(v1);
	  _T42 = - 1;
	  _T43 = Cyc_Absyn_signed_int_exp(_T42,0U);
	  _T44 = e;
	  _T45 = _T44->loc;
	  _T46 = Cyc_Absyn_add_exp(_T41,_T43,_T45);
	  _T47 = e;
	  _T48 = _T47->loc;
	  Cyc_Lower_emit_assign(_T3F,_T40,_T46,_T48);
	  res = Cyc_Lower_deep_copy(v1);
	  goto _LL59;
	default: 
	  _LL64: { struct _tuple15 _T12F = Cyc_Lower_fresh_var(env,e);
	    struct Cyc_Absyn_Exp * _T130;
	    struct Cyc_Absyn_Vardecl * _T131;
	    _T131 = _T12F.f0;
	    _T130 = _T12F.f1;
	    { struct Cyc_Absyn_Vardecl * vd = _T131;
	      struct Cyc_Absyn_Exp * temp = _T130;
	      Cyc_Lower_emit_assign(env,temp,v1,0U);
	      _T49 = env;
	      _T4A = v1;
	      _T4B = Cyc_Lower_deep_copy(temp);
	      _T4C = - 1;
	      _T4D = Cyc_Absyn_signed_int_exp(_T4C,0U);
	      _T4E = e;
	      _T4F = _T4E->loc;
	      _T50 = Cyc_Absyn_add_exp(_T4B,_T4D,_T4F);
	      _T51 = e;
	      _T52 = _T51->loc;
	      Cyc_Lower_emit_assign(_T49,_T4A,_T50,_T52);
	      res = Cyc_Lower_deep_copy(temp);
	      goto _LL59;
	    }
	  }
	}
	_LL59: goto _LL0;
      }
    case 6: 
      { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T12B = _T12F->f2;
	_T129 = _T12F->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct Cyc_Absyn_Exp * e2 = _T12B;
	struct Cyc_Absyn_Exp * e3 = _T129;
	_T53 = effect_only;
	if (! _T53) { goto _TL56;
	}
	_T54 = env;
	_T55 = e1;
	_T56 = Cyc_Absyn_exp_stmt(e2,0U);
	_T57 = Cyc_Absyn_exp_stmt(e3,0U);
	_T58 = e;
	_T59 = _T58->loc;
	_T5A = Cyc_Absyn_ifthenelse_stmt(_T55,_T56,_T57,_T59);
	Cyc_Lower_lower_stmt(_T54,_T5A);
	_T5B = Cyc_Absyn_uint_exp(0U,0U);
	return _T5B;
	_TL56: { struct _tuple15 _T12F = Cyc_Lower_fresh_var(env,e);
	  struct Cyc_Absyn_Exp * _T130;
	  struct Cyc_Absyn_Vardecl * _T131;
	  _T131 = _T12F.f0;
	  _T130 = _T12F.f1;
	  { struct Cyc_Absyn_Vardecl * vd = _T131;
	    struct Cyc_Absyn_Exp * temp = _T130;
	    _T5C = env;
	    _T5D = e1;
	    _T5E = Cyc_Lower_assign_it(temp,e2,0U);
	    _T5F = Cyc_Lower_deep_copy(temp);
	    _T60 = e3;
	    _T61 = Cyc_Lower_assign_it(_T5F,_T60,0U);
	    _T62 = e;
	    _T63 = _T62->loc;
	    _T64 = Cyc_Absyn_ifthenelse_stmt(_T5D,_T5E,_T61,_T63);
	    Cyc_Lower_lower_stmt(_T5C,_T64);
	    _T65 = Cyc_Lower_deep_copy(temp);
	    return _T65;
	  }
	}
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T12B = _T12F->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct Cyc_Absyn_Exp * e2 = _T12B;
	_T66 = effect_only;
	if (! _T66) { goto _TL58;
	}
	_T67 = env;
	_T68 = e1;
	_T69 = Cyc_Absyn_exp_stmt(e2,0U);
	_T6A = Cyc_Absyn_false_exp(0U);
	_T6B = Cyc_Absyn_exp_stmt(_T6A,0U);
	_T6C = e;
	_T6D = _T6C->loc;
	_T6E = Cyc_Absyn_ifthenelse_stmt(_T68,_T69,_T6B,_T6D);
	Cyc_Lower_lower_stmt(_T67,_T6E);
	_T6F = Cyc_Absyn_uint_exp(0U,0U);
	return _T6F;
	_TL58: { struct _tuple15 _T12F = Cyc_Lower_fresh_var(env,e);
	  struct Cyc_Absyn_Exp * _T130;
	  struct Cyc_Absyn_Vardecl * _T131;
	  _T131 = _T12F.f0;
	  _T130 = _T12F.f1;
	  { struct Cyc_Absyn_Vardecl * vd = _T131;
	    struct Cyc_Absyn_Exp * temp = _T130;
	    _T70 = env;
	    _T71 = e1;
	    _T72 = Cyc_Lower_assign_it(temp,e2,0U);
	    _T73 = Cyc_Lower_deep_copy(temp);
	    _T74 = Cyc_Absyn_false_exp(0U);
	    _T75 = Cyc_Lower_assign_it(_T73,_T74,0U);
	    _T76 = e;
	    _T77 = _T76->loc;
	    _T78 = Cyc_Absyn_ifthenelse_stmt(_T71,_T72,_T75,_T77);
	    Cyc_Lower_lower_stmt(_T70,_T78);
	    _T79 = Cyc_Lower_deep_copy(temp);
	    return _T79;
	  }
	}
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T12B = _T12F->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct Cyc_Absyn_Exp * e2 = _T12B;
	_T7A = effect_only;
	if (! _T7A) { goto _TL5A;
	}
	_T7B = env;
	_T7C = e1;
	_T7D = Cyc_Absyn_true_exp(0U);
	_T7E = Cyc_Absyn_exp_stmt(_T7D,0U);
	_T7F = Cyc_Absyn_exp_stmt(e2,0U);
	_T80 = e;
	_T81 = _T80->loc;
	_T82 = Cyc_Absyn_ifthenelse_stmt(_T7C,_T7E,_T7F,_T81);
	Cyc_Lower_lower_stmt(_T7B,_T82);
	_T83 = Cyc_Absyn_uint_exp(0U,0U);
	return _T83;
	_TL5A: { struct _tuple15 _T12F = Cyc_Lower_fresh_var(env,e);
	  struct Cyc_Absyn_Exp * _T130;
	  struct Cyc_Absyn_Vardecl * _T131;
	  _T131 = _T12F.f0;
	  _T130 = _T12F.f1;
	  { struct Cyc_Absyn_Vardecl * vd = _T131;
	    struct Cyc_Absyn_Exp * temp = _T130;
	    _T84 = env;
	    _T85 = e1;
	    _T86 = temp;
	    _T87 = Cyc_Absyn_true_exp(0U);
	    _T88 = Cyc_Lower_assign_it(_T86,_T87,0U);
	    _T89 = Cyc_Lower_deep_copy(temp);
	    _T8A = e2;
	    _T8B = Cyc_Lower_assign_it(_T89,_T8A,0U);
	    _T8C = e;
	    _T8D = _T8C->loc;
	    _T8E = Cyc_Absyn_ifthenelse_stmt(_T85,_T88,_T8B,_T8D);
	    Cyc_Lower_lower_stmt(_T84,_T8E);
	    _T8F = Cyc_Lower_deep_copy(temp);
	    return _T8F;
	  }
	}
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T12B = _T12F->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct Cyc_Absyn_Exp * e2 = _T12B;
	Cyc_Lower_lower_rhs(env,1,0,e1);
	res = Cyc_Lower_lower_rhs(env,effect_only,has_target,e2);
	_T90 = effect_only;
	if (! _T90) { goto _TL5C;
	}
	_T91 = res;
	return _T91;
	_TL5C: goto _LL0;
      }
    case 10: 
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T128 = _T12F->f2;
	_T127 = _T12F->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct Cyc_List_List * es = _T128;
	struct Cyc_Absyn_VarargCallInfo * vai = _T127;
	struct Cyc_Absyn_Exp * v1;
	long is_setjmp = 0;
	LOOP: _T92 = e1;
	{ void * _T12F = _T92->r;
	  struct _fat_ptr * _T130;
	  struct Cyc_Absyn_Exp * _T131;
	  _T93 = (int *)_T12F;
	  _T94 = *_T93;
	  switch (_T94) {
	  case 13: 
	    { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T132 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T12F;
	      _T131 = _T132->f1;
	    }{ struct Cyc_Absyn_Exp * e2 = _T131;
	      e1 = e2;
	      goto LOOP;
	    }
	  case 1: 
	    _T95 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T12F;
	    _T96 = _T95->f1;
	    _T97 = (int *)_T96;
	    _T98 = *_T97;
	    if (_T98 != 0) { goto _TL5F;
	    }
	    { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T132 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T12F;
	      _T99 = _T132->f1;
	      { struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct * _T133 = (struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)_T99;
		_T9A = _T133->f1;
		{ struct _tuple0 _T134 = *_T9A;
		  _T130 = _T134.f1;
		}
	      }
	    }{ struct _fat_ptr * n = _T130;
	      _T9B = n;
	      _T9C = *_T9B;
	      _T9D = _tag_fat("setjmp",sizeof(char),7U);
	      _T9E = Cyc_strcmp(_T9C,_T9D);
	      if (_T9E != 0) { goto _TL61;
	      }
	      is_setjmp = 1;
	      goto _TL62;
	      _TL61: _TL62: goto _LL7B;
	    }_TL5F: _LL7B: v1 = e1;
	    goto _LL75;
	  default: 
	    v1 = Cyc_Lower_lower_rhs(env,0,0,e1);
	    goto _LL75;
	  }
	  _LL75: ;
	}{ struct Cyc_List_List * vs;
	  _T9F = is_setjmp;
	  if (! _T9F) { goto _TL63;
	  }
	  vs = es;
	  goto _TL64;
	  _TL63: vs = Cyc_Lower_lower_rhs_list(env,es);
	  _TL64: _TA0 = v1;
	  _TA1 = vs;
	  _TA2 = e;
	  _TA3 = _TA2->loc;
	  res = Cyc_Absyn_fncall_exp(_TA0,_TA1,_TA3);
	  goto _LL0;
	}
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T11F;
	_TA4 = _T12F->f1;
	_T12E = (void *)_TA4;
	_T12B = _T12F->f2;
	_T126 = _T12F->f3;
	_T125 = _T12F->f4;
      }{ void * t = _T12E;
	struct Cyc_Absyn_Exp * e1 = _T12B;
	long b = _T126;
	enum Cyc_Absyn_Coercion c = _T125;
	_TA5 = t;
	_TA6 = Cyc_Lower_lower_rhs(env,effect_only,0,e1);
	_TA7 = b;
	_TA8 = c;
	_TA9 = e;
	_TAA = _TA9->loc;
	res = Cyc_Absyn_cast_exp(_TA5,_TA6,_TA7,_TA8,_TAA);
	goto _LL0;
      }
    case 15: 
      { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	_TAB = Cyc_Lower_lower_lhs(env,e1);
	_TAC = e;
	_TAD = _TAC->loc;
	res = Cyc_Absyn_address_exp(_TAB,_TAD);
	goto _LL0;
      }
    case 17: 
      { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T11F;
	_TAE = _T12F->f1;
	_T12E = (void *)_TAE;
      }{ void * t = _T12E;
	_TAF = e;
	return _TAF;
	goto _LL0;
      }
    case 18: 
      res = e;
      goto _LL0;
    case 19: 
      { struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T11F;
	_TB0 = _T12F->f1;
	_T12E = (void *)_TB0;
	_T128 = _T12F->f2;
      }{ void * t = _T12E;
	struct Cyc_List_List * fs = _T128;
	res = e;
	goto _LL0;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	_TB1 = Cyc_Lower_lower_rhs(env,0,0,e1);
	_TB2 = e;
	_TB3 = _TB2->loc;
	res = Cyc_Absyn_deref_exp(_TB1,_TB3);
	goto _LL0;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T124 = _T12F->f2;
	_T126 = _T12F->f3;
	_T123 = _T12F->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct _fat_ptr * f = _T124;
	long it = _T126;
	long ir = _T123;
	_TB4 = Cyc_Lower_lower_rhs(env,0,0,e1);
	_TB5 = f;
	_TB6 = e;
	_TB7 = _TB6->loc;
	res = Cyc_Absyn_aggrmember_exp(_TB4,_TB5,_TB7);
	goto _LL0;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T124 = _T12F->f2;
	_T126 = _T12F->f3;
	_T123 = _T12F->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct _fat_ptr * f = _T124;
	long it = _T126;
	long ir = _T123;
	_TB8 = Cyc_Lower_lower_rhs(env,0,0,e1);
	_TB9 = f;
	_TBA = e;
	_TBB = _TBA->loc;
	res = Cyc_Absyn_aggrarrow_exp(_TB8,_TB9,_TBB);
	goto _LL0;
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T12B = _T12F->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T12E;
	struct Cyc_Absyn_Exp * e2 = _T12B;
	res = Cyc_Lower_lower_rhs_subs(env,e);
	goto _LL0;
      }
    case 31: 
      { struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T122 = _T12F->f2;
      }{ struct Cyc_Absyn_Enumdecl * ed = _T12E;
	struct Cyc_Absyn_Enumfield * ef = _T122;
	_TBC = e;
	return _TBC;
      }
    case 32: 
      { struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct *)_T11F;
	_TBD = _T12F->f1;
	_T12E = (void *)_TBD;
	_T122 = _T12F->f2;
      }{ void * tp = _T12E;
	struct Cyc_Absyn_Enumfield * ef = _T122;
	_TBE = e;
	return _TBE;
      }
    case 36: 
      { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
      }{ struct Cyc_Absyn_Stmt * s = _T12E;
	struct Cyc_Absyn_Exp * eopt = Cyc_Lower_get_assign_last_exp(env);
	_TBF = effect_only;
	if (! _TBF) { goto _TL65;
	}
	Cyc_Lower_set_assign_last_exp(env,0);
	Cyc_Lower_lower_stmt(env,s);
	Cyc_Lower_set_assign_last_exp(env,eopt);
	_TC0 = Cyc_Absyn_uint_exp(0U,0U);
	return _TC0;
	_TL65: { struct _tuple15 _T12F = Cyc_Lower_fresh_var(env,e);
	  struct Cyc_Absyn_Exp * _T130;
	  struct Cyc_Absyn_Vardecl * _T131;
	  _T131 = _T12F.f0;
	  _T130 = _T12F.f1;
	  { struct Cyc_Absyn_Vardecl * vd = _T131;
	    struct Cyc_Absyn_Exp * temp = _T130;
	    Cyc_Lower_set_assign_last_exp(env,temp);
	    Cyc_Lower_lower_stmt(env,s);
	    Cyc_Lower_set_assign_last_exp(env,eopt);
	    _TC1 = Cyc_Lower_deep_copy(temp);
	    return _TC1;
	  }
	}goto _LL0;
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
      }{ struct Cyc_Absyn_Exp * e = _T12E;
	_TC2 = Cyc_Lower_lower_rhs(env,effect_only,has_target,e);
	return _TC2;
      }
    case 35: 
      { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T128 = _T12F->f2;
      }{ struct Cyc_Core_Opt * tdn = _T12E;
	struct Cyc_List_List * dles = _T128;
	struct Cyc_List_List * dles2 = 0;
	_TL6A: if (dles != 0) { goto _TL68;
	}else { goto _TL69;
	}
	_TL68: _TC3 = dles;
	_TC4 = _TC3->hd;
	_TC5 = (struct _tuple17 *)_TC4;
	{ struct _tuple17 _T12F = *_TC5;
	  struct Cyc_Absyn_Exp * _T130;
	  struct Cyc_List_List * _T131;
	  _T131 = _T12F.f0;
	  _T130 = _T12F.f1;
	  { struct Cyc_List_List * ds = _T131;
	    struct Cyc_Absyn_Exp * e = _T130;
	    struct Cyc_Absyn_Exp * v = Cyc_Lower_lower_rhs(env,0,0,e);
	    { struct Cyc_List_List * _T132 = _cycalloc(sizeof(struct Cyc_List_List));
	      { struct _tuple17 * _T133 = _cycalloc(sizeof(struct _tuple17));
		_T133->f0 = ds;
		_T133->f1 = v;
		_TC7 = (struct _tuple17 *)_T133;
	      }_T132->hd = _TC7;
	      _T132->tl = dles2;
	      _TC6 = (struct Cyc_List_List *)_T132;
	    }dles2 = _TC6;
	  }
	}_TC8 = dles;
	dles = _TC8->tl;
	goto _TL6A;
	_TL69: _TC9 = tdn;
	_TCA = Cyc_List_imp_rev(dles2);
	_TCB = e;
	_TCC = _TCB->loc;
	_TCD = Cyc_Absyn_unresolvedmem_exp(_TC9,_TCA,_TCC);
	return _TCD;
      }
    case 39: 
      res = e;
      goto _LL0;
    case 12: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_TCE = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _TCE;
	void * _T130[1];
	_T130[0] = &_T12F;
	_TD0 = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TD0;
	  _TCF = _T131;
	}_TD1 = _tag_fat("no instantiate expression in lower_rhs (%s)",sizeof(char),
			 44U);
	_TD2 = _tag_fat(_T130,sizeof(void *),1);
	_TCF(_TD1,_TD2);
      }
    case 25: 
      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
      }{ struct Cyc_List_List * dles = _T12E;
	_TD4 = Cyc_Warn_impos;
	{ int (* _T12F)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TD4;
	  _TD3 = _T12F;
	}_TD5 = _tag_fat("array in lower_rhs",sizeof(char),19U);
	_TD6 = _tag_fat(0U,sizeof(void *),0);
	_TD3(_TD5,_TD6);
      }
    case 28: 
      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T11F;
	_T12E = _T12F->f1;
	_T128 = _T12F->f2;
	_T121 = _T12F->f3;
	_T120 = _T12F->f4;
      }{ struct _tuple0 * tdn = _T12E;
	struct Cyc_List_List * ts = _T128;
	struct Cyc_List_List * es = _T121;
	struct Cyc_Absyn_Aggrdecl * ad = _T120;
	_TD8 = Cyc_Warn_impos;
	{ int (* _T12F)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TD8;
	  _TD7 = _T12F;
	}_TD9 = _tag_fat("aggregate in lower_rhs",sizeof(char),23U);
	_TDA = _tag_fat(0U,sizeof(void *),0);
	_TD7(_TD9,_TDA);
      }
    case 29: 
      { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T12F = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T11F;
	_TDB = _T12F->f1;
	_T12E = (void *)_TDB;
	_T126 = _T12F->f2;
	_T128 = _T12F->f3;
      }{ void * topt = _T12E;
	long tuple = _T126;
	struct Cyc_List_List * dles = _T128;
	_TDD = Cyc_Warn_impos;
	{ int (* _T12F)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TDD;
	  _TDC = _T12F;
	}_TDE = _tag_fat("anonstrct in lower_rhs",sizeof(char),23U);
	_TDF = _tag_fat(0U,sizeof(void *),0);
	_TDC(_TDE,_TDF);
      }
    case 33: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_TE0 = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _TE0;
	void * _T130[1];
	_T130[0] = &_T12F;
	_TE2 = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TE2;
	  _TE1 = _T131;
	}_TE3 = _tag_fat("malloc expression in lower_rhs (%s)",sizeof(char),
			 36U);
	_TE4 = _tag_fat(_T130,sizeof(void *),1);
	_TE1(_TE3,_TE4);
      }
    case 24: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_TE5 = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _TE5;
	void * _T130[1];
	_T130[0] = &_T12F;
	_TE7 = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TE7;
	  _TE6 = _T131;
	}_TE8 = _tag_fat("compoundlit expression in lower_rhs (%s)",sizeof(char),
			 41U);
	_TE9 = _tag_fat(_T130,sizeof(void *),1);
	_TE6(_TE8,_TE9);
      }
    case 37: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_TEA = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _TEA;
	void * _T130[1];
	_T130[0] = &_T12F;
	_TEC = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TEC;
	  _TEB = _T131;
	}_TED = _tag_fat("tagcheck expression in lower_rhs (%s)",sizeof(char),
			 38U);
	_TEE = _tag_fat(_T130,sizeof(void *),1);
	_TEB(_TED,_TEE);
      }
    case 38: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_TEF = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _TEF;
	void * _T130[1];
	_T130[0] = &_T12F;
	_TF1 = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TF1;
	  _TF0 = _T131;
	}_TF2 = _tag_fat("valueof expression in lower_rhs (%s)",sizeof(char),
			 37U);
	_TF3 = _tag_fat(_T130,sizeof(void *),1);
	_TF0(_TF2,_TF3);
      }
    case 40: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_TF4 = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _TF4;
	void * _T130[1];
	_T130[0] = &_T12F;
	_TF6 = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TF6;
	  _TF5 = _T131;
	}_TF7 = _tag_fat("extension expression in lower_rhs (%s)",sizeof(char),
			 39U);
	_TF8 = _tag_fat(_T130,sizeof(void *),1);
	_TF5(_TF7,_TF8);
      }
    case 41: 
      goto _LL4C;
    case 42: 
      _LL4C: { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_TF9 = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _TF9;
	void * _T130[1];
	_T130[0] = &_T12F;
	_TFB = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_TFB;
	  _TFA = _T131;
	}_TFC = _tag_fat("assert expression in lower_rhs (%s)",sizeof(char),
			 36U);
	_TFD = _tag_fat(_T130,sizeof(void *),1);
	_TFA(_TFC,_TFD);
      }
    case 34: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_TFE = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _TFE;
	void * _T130[1];
	_T130[0] = &_T12F;
	_T100 = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_T100;
	  _TFF = _T131;
	}_T101 = _tag_fat("swap expression in lower_rhs (%s)",sizeof(char),
			  34U);
	_T102 = _tag_fat(_T130,sizeof(void *),1);
	_TFF(_T101,_T102);
      }
    case 30: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_T103 = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _T103;
	void * _T130[1];
	_T130[0] = &_T12F;
	_T105 = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_T105;
	  _T104 = _T131;
	}_T106 = _tag_fat("datatype expression in lower_rhs (%s)",sizeof(char),
			  38U);
	_T107 = _tag_fat(_T130,sizeof(void *),1);
	_T104(_T106,_T107);
      }
    case 26: 
      goto _LL54;
    case 27: 
      _LL54: { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_T108 = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _T108;
	void * _T130[1];
	_T130[0] = &_T12F;
	_T10A = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_T10A;
	  _T109 = _T131;
	}_T10B = _tag_fat("comprehension expression in lower_rhs (%s)",sizeof(char),
			  43U);
	_T10C = _tag_fat(_T130,sizeof(void *),1);
	_T109(_T10B,_T10C);
      }
    case 11: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_T10D = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _T10D;
	void * _T130[1];
	_T130[0] = &_T12F;
	_T10F = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_T10F;
	  _T10E = _T131;
	}_T110 = _tag_fat("throw expression in lower_rhs (%s)",sizeof(char),
			  35U);
	_T111 = _tag_fat(_T130,sizeof(void *),1);
	_T10E(_T110,_T111);
      }
    default: 
      { struct Cyc_String_pa_PrintArg_struct _T12F;
	_T12F.tag = 0;
	_T12F.f1 = Cyc_Absynpp_exp2string(e);
	_T112 = _T12F;
      }{ struct Cyc_String_pa_PrintArg_struct _T12F = _T112;
	void * _T130[1];
	_T130[0] = &_T12F;
	_T114 = Cyc_Warn_impos;
	{ int (* _T131)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								    struct _fat_ptr))_T114;
	  _T113 = _T131;
	}_T115 = _tag_fat("new expression in lower_rhs (%s)",sizeof(char),
			  33U);
	_T116 = _tag_fat(_T130,sizeof(void *),1);
	_T113(_T115,_T116);
      }
    }
    _LL0: ;
  }_T117 = effect_only;
  if (! _T117) { goto _TL6B;
  }
  _T118 = Cyc_Lower_might_have_effect(res);
  if (! _T118) { goto _TL6D;
  }
  _T119 = env;
  _T11A = Cyc_Absyn_exp_stmt(res,0U);
  Cyc_Lower_emit_stmt(_T119,_T11A);
  goto _TL6E;
  _TL6D: _TL6E: _T11B = res;
  return _T11B;
  _TL6B: _T11C = has_target;
  if (_T11C) { goto _TL6F;
  }else { goto _TL71;
  }
  _TL71: { struct _tuple15 _T11F = Cyc_Lower_fresh_var(env,e);
    struct Cyc_Absyn_Exp * _T120;
    struct Cyc_Absyn_Vardecl * _T121;
    _T121 = _T11F.f0;
    _T120 = _T11F.f1;
    { struct Cyc_Absyn_Vardecl * vd = _T121;
      struct Cyc_Absyn_Exp * temp = _T120;
      Cyc_Lower_emit_assign(env,temp,res,0U);
      _T11D = temp;
      return _T11D;
    }
  }_TL6F: _T11E = res;
  return _T11E;
}
static struct Cyc_Absyn_Exp * Cyc_Lower_lower_rhs_subs(struct Cyc_Lower_Env * env,
						       struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  unsigned int _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Exp * _T8;
  _T0 = e;
  { void * _T9 = _T0->r;
    struct Cyc_Absyn_Exp * _TA;
    struct Cyc_Absyn_Exp * _TB;
    _T1 = (int *)_T9;
    _T2 = *_T1;
    if (_T2 != 23) { goto _TL72;
    }
    { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _TC = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T9;
      _TB = _TC->f1;
      _TA = _TC->f2;
    }{ struct Cyc_Absyn_Exp * e1 = _TB;
      struct Cyc_Absyn_Exp * e2 = _TA;
      _T3 = Cyc_Lower_lower_rhs_subs(env,e1);
      _T4 = Cyc_Lower_lower_rhs(env,0,0,e2);
      _T5 = e;
      _T6 = _T5->loc;
      _T7 = Cyc_Absyn_subscript_exp(_T3,_T4,_T6);
      return _T7;
    }_TL72: _T8 = Cyc_Lower_lower_rhs(env,0,0,e);
    return _T8;
    ;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Lower_lower_lhs(struct Cyc_Lower_Env * env,
						  struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct _fat_ptr * _T7;
  struct Cyc_Absyn_Exp * _T8;
  unsigned int _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct _fat_ptr * _TD;
  struct Cyc_Absyn_Exp * _TE;
  unsigned int _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_Absyn_Exp * _T11;
  struct Cyc_Absyn_Exp * _T12;
  unsigned int _T13;
  struct Cyc_Absyn_Exp * _T14;
  void * _T15;
  struct Cyc_Absyn_Exp * _T16;
  void * _T17;
  void * _T18;
  struct Cyc_Absyn_Exp * _T19;
  void * _T1A;
  long _T1B;
  struct Cyc_String_pa_PrintArg_struct _T1C;
  struct Cyc_String_pa_PrintArg_struct _T1D;
  struct Cyc_Absyn_Exp * _T1E;
  void * _T1F;
  void * _T20;
  struct Cyc_String_pa_PrintArg_struct _T21;
  struct Cyc_Absyn_Exp * _T22;
  unsigned int _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  struct Cyc_Absyn_Exp * _T26;
  struct Cyc_String_pa_PrintArg_struct _T27;
  int (* _T28)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T29)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T2A;
  struct _fat_ptr _T2B;
  _T0 = e;
  { void * _T2C = _T0->r;
    struct Cyc_Absyn_Exp * _T2D;
    long _T2E;
    long _T2F;
    struct _fat_ptr * _T30;
    void * _T31;
    _T1 = (int *)_T2C;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      _T3 = e;
      return _T3;
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T2C;
	_T31 = _T32->f1;
      }{ struct Cyc_Absyn_Exp * e = _T31;
	_T4 = Cyc_Lower_lower_lhs(env,e);
	return _T4;
      }
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T2C;
	_T31 = _T32->f1;
      }{ struct Cyc_Absyn_Exp * e = _T31;
	_T5 = Cyc_Lower_lower_lhs(env,e);
	return _T5;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T2C;
	_T31 = _T32->f1;
	_T30 = _T32->f2;
	_T2F = _T32->f3;
	_T2E = _T32->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T31;
	struct _fat_ptr * f = _T30;
	long it = _T2F;
	long ir = _T2E;
	_T6 = Cyc_Lower_lower_lhs(env,e1);
	_T7 = f;
	_T8 = e;
	_T9 = _T8->loc;
	_TA = Cyc_Absyn_aggrmember_exp(_T6,_T7,_T9);
	return _TA;
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T2C;
	_T31 = _T32->f1;
	_T2D = _T32->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T31;
	struct Cyc_Absyn_Exp * e2 = _T2D;
	_TB = Cyc_Lower_lower_rhs_subs(env,e);
	return _TB;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T2C;
	_T31 = _T32->f1;
	_T30 = _T32->f2;
	_T2F = _T32->f3;
	_T2E = _T32->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T31;
	struct _fat_ptr * f = _T30;
	long it = _T2F;
	long ir = _T2E;
	_TC = Cyc_Lower_lower_rhs(env,0,0,e1);
	_TD = f;
	_TE = e;
	_TF = _TE->loc;
	_T10 = Cyc_Absyn_aggrarrow_exp(_TC,_TD,_TF);
	return _T10;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T2C;
	_T31 = _T32->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T31;
	_T11 = Cyc_Lower_lower_rhs(env,0,0,e1);
	_T12 = e;
	_T13 = _T12->loc;
	_T14 = Cyc_Absyn_deref_exp(_T11,_T13);
	return _T14;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T2C;
	_T15 = _T32->f1;
	_T31 = (void *)_T15;
	_T2D = _T32->f2;
      }{ void * t = _T31;
	struct Cyc_Absyn_Exp * e1 = _T2D;
	_T16 = e1;
	_T17 = _T16->topt;
	if (_T17 == 0) { goto _TL77;
	}else { goto _TL78;
	}
	_TL78: _T18 = t;
	_T19 = e1;
	_T1A = _T19->topt;
	_T1B = Cyc_Unify_unify(_T18,_T1A);
	if (_T1B) { goto _TL75;
	}else { goto _TL77;
	}
	_TL77: { struct Cyc_String_pa_PrintArg_struct _T32;
	  _T32.tag = 0;
	  _T32.f1 = Cyc_Absynpp_exp2string(e1);
	  _T1C = _T32;
	}{ struct Cyc_String_pa_PrintArg_struct _T32 = _T1C;
	  { struct Cyc_String_pa_PrintArg_struct _T33;
	    _T33.tag = 0;
	    _T1E = e1;
	    _T1F = _T1E->topt;
	    _T20 = _check_null(_T1F);
	    _T33.f1 = Cyc_Absynpp_typ2string(_T20);
	    _T1D = _T33;
	  }{ struct Cyc_String_pa_PrintArg_struct _T33 = _T1D;
	    { struct Cyc_String_pa_PrintArg_struct _T34;
	      _T34.tag = 0;
	      _T34.f1 = Cyc_Absynpp_typ2string(t);
	      _T21 = _T34;
	    }{ struct Cyc_String_pa_PrintArg_struct _T34 = _T21;
	      void * _T35[3];
	      _T35[0] = &_T32;
	      _T35[1] = &_T33;
	      _T35[2] = &_T34;
	      _T22 = e;
	      _T23 = _T22->loc;
	      _T24 = _tag_fat("cast on lhs %s : %s --> %s\n",sizeof(char),
			      28U);
	      _T25 = _tag_fat(_T35,sizeof(void *),3);
	      Cyc_Warn_warn(_T23,_T24,_T25);
	    }
	  }
	}goto _TL76;
	_TL75: _TL76: _T26 = Cyc_Lower_lower_lhs(env,e1);
	return _T26;
      }
    default: 
      { struct Cyc_String_pa_PrintArg_struct _T32;
	_T32.tag = 0;
	_T32.f1 = Cyc_Absynpp_exp2string(e);
	_T27 = _T32;
      }{ struct Cyc_String_pa_PrintArg_struct _T32 = _T27;
	void * _T33[1];
	_T33[0] = &_T32;
	_T29 = Cyc_Warn_impos;
	{ int (* _T34)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_T29;
	  _T28 = _T34;
	}_T2A = _tag_fat("lower_lhs applied to %s\n",sizeof(char),25U);
	_T2B = _tag_fat(_T33,sizeof(void *),1);
	_T28(_T2A,_T2B);
      }
    }
    ;
  }
}
 struct _tuple18 {
  enum Cyc_Absyn_Primop f0;
  struct Cyc_List_List * f1;
};
static struct _tuple18 Cyc_Lower_negate(enum Cyc_Absyn_Primop p,struct Cyc_List_List * vs,
					unsigned int loc) {
  enum Cyc_Absyn_Primop _T0;
  int _T1;
  struct _tuple18 _T2;
  struct _tuple18 _T3;
  struct _tuple18 _T4;
  struct _tuple18 _T5;
  struct _tuple18 _T6;
  struct _tuple18 _T7;
  struct _tuple18 _T8;
  struct _tuple18 _T9;
  struct _tuple18 _TA;
  struct _tuple18 _TB;
  struct _tuple18 _TC;
  struct Cyc_List_List * _TD;
  _T0 = p;
  _T1 = (int)_T0;
  switch (_T1) {
  case Cyc_Absyn_Eq: 
    { struct _tuple18 _TE;
      _TE.f0 = 6U;
      _TE.f1 = vs;
      _T2 = _TE;
    }return _T2;
  case Cyc_Absyn_Neq: 
    { struct _tuple18 _TE;
      _TE.f0 = 5U;
      _TE.f1 = vs;
      _T3 = _TE;
    }return _T3;
  case Cyc_Absyn_Gt: 
    { struct _tuple18 _TE;
      _TE.f0 = 10U;
      _TE.f1 = vs;
      _T4 = _TE;
    }return _T4;
  case Cyc_Absyn_Lt: 
    { struct _tuple18 _TE;
      _TE.f0 = 9U;
      _TE.f1 = vs;
      _T5 = _TE;
    }return _T5;
  case Cyc_Absyn_Gte: 
    { struct _tuple18 _TE;
      _TE.f0 = 8U;
      _TE.f1 = vs;
      _T6 = _TE;
    }return _T6;
  case Cyc_Absyn_Lte: 
    { struct _tuple18 _TE;
      _TE.f0 = 7U;
      _TE.f1 = vs;
      _T7 = _TE;
    }return _T7;
  case Cyc_Absyn_UGt: 
    { struct _tuple18 _TE;
      _TE.f0 = 25U;
      _TE.f1 = vs;
      _T8 = _TE;
    }return _T8;
  case Cyc_Absyn_ULt: 
    { struct _tuple18 _TE;
      _TE.f0 = 24U;
      _TE.f1 = vs;
      _T9 = _TE;
    }return _T9;
  case Cyc_Absyn_UGte: 
    { struct _tuple18 _TE;
      _TE.f0 = 23U;
      _TE.f1 = vs;
      _TA = _TE;
    }return _TA;
  case Cyc_Absyn_ULte: 
    { struct _tuple18 _TE;
      _TE.f0 = 22U;
      _TE.f1 = vs;
      _TB = _TE;
    }return _TB;
  default: 
    { struct _tuple18 _TE;
      _TE.f0 = 11U;
      { struct Cyc_List_List * _TF = _cycalloc(sizeof(struct Cyc_List_List));
	_TF->hd = Cyc_Absyn_primop_exp(p,vs,loc);
	_TF->tl = 0;
	_TD = (struct Cyc_List_List *)_TF;
      }_TE.f1 = _TD;
      _TC = _TE;
    }return _TC;
  }
  ;
}
static struct _fat_ptr * Cyc_Lower_lower_true(struct Cyc_Lower_Env * env,
					      struct Cyc_Absyn_Exp * e,struct _fat_ptr * falselab,
					      unsigned int loc) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr * _T4;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T5;
  enum Cyc_Absyn_Primop _T6;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  void * _TE;
  struct _fat_ptr * _TF;
  enum Cyc_Absyn_Primop _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_Absyn_Exp * _T12;
  unsigned int _T13;
  struct Cyc_Lower_Env * _T14;
  enum Cyc_Absyn_Primop _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_Absyn_Exp * _T17;
  unsigned int _T18;
  struct Cyc_Absyn_Exp * _T19;
  struct Cyc_Absyn_Stmt * _T1A;
  struct Cyc_Absyn_Stmt * _T1B;
  unsigned int _T1C;
  struct Cyc_Absyn_Stmt * _T1D;
  struct Cyc_Lower_Env * _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  struct Cyc_Absyn_Stmt * _T20;
  struct Cyc_Absyn_Stmt * _T21;
  unsigned int _T22;
  struct Cyc_Absyn_Stmt * _T23;
  _T0 = e;
  { void * _T24 = _T0->r;
    struct Cyc_List_List * _T25;
    enum Cyc_Absyn_Primop _T26;
    struct Cyc_Absyn_Exp * _T27;
    struct Cyc_Absyn_Exp * _T28;
    _T1 = (int *)_T24;
    _T2 = *_T1;
    switch (_T2) {
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T29 = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T24;
	_T28 = _T29->f1;
	_T27 = _T29->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T28;
	struct Cyc_Absyn_Exp * e2 = _T27;
	struct _fat_ptr * topt = Cyc_Lower_lower_true(env,e1,falselab,loc);
	if (topt == 0) { goto _TL7B;
	}
	Cyc_Lower_emit_label(env,topt,0U);
	goto _TL7C;
	_TL7B: _TL7C: topt = Cyc_Lower_lower_true(env,e2,falselab,loc);
	_T3 = topt;
	return _T3;
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T29 = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T24;
	_T28 = _T29->f1;
	_T27 = _T29->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T28;
	struct Cyc_Absyn_Exp * e2 = _T27;
	struct _fat_ptr * truelab = Cyc_Lower_new_label(env);
	Cyc_Lower_lower_cond(env,e,truelab,falselab,loc);
	_T4 = truelab;
	return _T4;
      }
    case 3: 
      _T5 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T24;
      _T6 = _T5->f1;
      if (_T6 != Cyc_Absyn_Not) { goto _TL7D;
      }
      _T7 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T24;
      _T8 = _T7->f2;
      if (_T8 == 0) { goto _TL7F;
      }
      _T9 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T24;
      _TA = _T9->f2;
      _TB = (struct Cyc_List_List *)_TA;
      _TC = _TB->tl;
      if (_TC != 0) { goto _TL81;
      }
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T29 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T24;
	_TD = _T29->f2;
	{ struct Cyc_List_List _T2A = *_TD;
	  _TE = _T2A.hd;
	  _T28 = (struct Cyc_Absyn_Exp *)_TE;
	}
      }{ struct Cyc_Absyn_Exp * e1 = _T28;
	struct _fat_ptr * truelab = Cyc_Lower_new_label(env);
	Cyc_Lower_lower_cond(env,e1,falselab,truelab,loc);
	_TF = truelab;
	return _TF;
      }_TL81: goto _LL7;
      _TL7F: goto _LL7;
      _TL7D: _LL7: { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T29 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T24;
	_T26 = _T29->f1;
	_T25 = _T29->f2;
      }{ enum Cyc_Absyn_Primop p = _T26;
	struct Cyc_List_List * es = _T25;
	struct Cyc_List_List * vs = Cyc_Lower_lower_rhs_list(env,es);
	_T10 = p;
	_T11 = vs;
	_T12 = e;
	_T13 = _T12->loc;
	{ struct _tuple18 _T29 = Cyc_Lower_negate(_T10,_T11,_T13);
	  struct Cyc_List_List * _T2A;
	  enum Cyc_Absyn_Primop _T2B;
	  _T2B = _T29.f0;
	  _T2A = _T29.f1;
	  { enum Cyc_Absyn_Primop p = _T2B;
	    struct Cyc_List_List * vs = _T2A;
	    _T14 = env;
	    _T15 = p;
	    _T16 = vs;
	    _T17 = e;
	    _T18 = _T17->loc;
	    _T19 = Cyc_Absyn_primop_exp(_T15,_T16,_T18);
	    _T1A = Cyc_Absyn_goto_stmt(falselab,0U);
	    _T1B = Cyc_Absyn_skip_stmt(0U);
	    _T1C = loc;
	    _T1D = Cyc_Absyn_ifthenelse_stmt(_T19,_T1A,_T1B,_T1C);
	    Cyc_Lower_emit_stmt(_T14,_T1D);
	    return 0;
	  }
	}
      }
    default: 
      { struct Cyc_Absyn_Exp * v = Cyc_Lower_lower_rhs(env,0,0,e);
	_T1E = env;
	_T1F = Cyc_Absyn_prim1_exp(11U,v,0U);
	_T20 = Cyc_Absyn_goto_stmt(falselab,0U);
	_T21 = Cyc_Absyn_skip_stmt(0U);
	_T22 = loc;
	_T23 = Cyc_Absyn_ifthenelse_stmt(_T1F,_T20,_T21,_T22);
	Cyc_Lower_emit_stmt(_T1E,_T23);
	return 0;
      }
    }
    ;
  }
}
static void Cyc_Lower_lower_cond(struct Cyc_Lower_Env * env,struct Cyc_Absyn_Exp * e,
				 struct _fat_ptr * truelab,struct _fat_ptr * falselab,
				 unsigned int loc) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T3;
  enum Cyc_Absyn_Primop _T4;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  struct Cyc_Lower_Env * _TD;
  enum Cyc_Absyn_Primop _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_Absyn_Exp * _T10;
  unsigned int _T11;
  struct Cyc_Absyn_Exp * _T12;
  struct Cyc_Absyn_Stmt * _T13;
  struct Cyc_Absyn_Stmt * _T14;
  unsigned int _T15;
  struct Cyc_Absyn_Stmt * _T16;
  struct Cyc_Lower_Env * _T17;
  struct Cyc_Absyn_Exp * _T18;
  struct Cyc_Absyn_Stmt * _T19;
  struct Cyc_Absyn_Stmt * _T1A;
  unsigned int _T1B;
  struct Cyc_Absyn_Stmt * _T1C;
  _T0 = e;
  { void * _T1D = _T0->r;
    struct Cyc_List_List * _T1E;
    enum Cyc_Absyn_Primop _T1F;
    struct Cyc_Absyn_Exp * _T20;
    struct Cyc_Absyn_Exp * _T21;
    _T1 = (int *)_T1D;
    _T2 = *_T1;
    switch (_T2) {
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T22 = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T1D;
	_T21 = _T22->f1;
	_T20 = _T22->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T21;
	struct Cyc_Absyn_Exp * e2 = _T20;
	struct _fat_ptr * x = Cyc_Lower_new_label(env);
	Cyc_Lower_lower_cond(env,e1,x,falselab,loc);
	Cyc_Lower_emit_label(env,x,0U);
	Cyc_Lower_lower_cond(env,e2,truelab,falselab,loc);
	goto _LL0;
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T22 = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T1D;
	_T21 = _T22->f1;
	_T20 = _T22->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T21;
	struct Cyc_Absyn_Exp * e2 = _T20;
	struct _fat_ptr * x = Cyc_Lower_new_label(env);
	Cyc_Lower_lower_cond(env,e1,truelab,x,loc);
	Cyc_Lower_emit_label(env,x,0U);
	Cyc_Lower_lower_cond(env,e2,truelab,falselab,loc);
	goto _LL0;
      }
    case 3: 
      _T3 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T1D;
      _T4 = _T3->f1;
      if (_T4 != Cyc_Absyn_Not) { goto _TL84;
      }
      _T5 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T1D;
      _T6 = _T5->f2;
      if (_T6 == 0) { goto _TL86;
      }
      _T7 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T1D;
      _T8 = _T7->f2;
      _T9 = (struct Cyc_List_List *)_T8;
      _TA = _T9->tl;
      if (_TA != 0) { goto _TL88;
      }
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T22 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T1D;
	_TB = _T22->f2;
	{ struct Cyc_List_List _T23 = *_TB;
	  _TC = _T23.hd;
	  _T21 = (struct Cyc_Absyn_Exp *)_TC;
	}
      }{ struct Cyc_Absyn_Exp * e1 = _T21;
	Cyc_Lower_lower_cond(env,e1,falselab,truelab,loc);
	goto _LL0;
      }_TL88: goto _LL7;
      _TL86: goto _LL7;
      _TL84: _LL7: { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T22 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T1D;
	_T1F = _T22->f1;
	_T1E = _T22->f2;
      }{ enum Cyc_Absyn_Primop p = _T1F;
	struct Cyc_List_List * es = _T1E;
	struct Cyc_List_List * vs = Cyc_Lower_lower_rhs_list(env,es);
	_TD = env;
	_TE = p;
	_TF = vs;
	_T10 = e;
	_T11 = _T10->loc;
	_T12 = Cyc_Absyn_primop_exp(_TE,_TF,_T11);
	_T13 = Cyc_Absyn_goto_stmt(truelab,0U);
	_T14 = Cyc_Absyn_goto_stmt(falselab,0U);
	_T15 = loc;
	_T16 = Cyc_Absyn_ifthenelse_stmt(_T12,_T13,_T14,_T15);
	Cyc_Lower_emit_stmt(_TD,_T16);
	goto _LL0;
      }
    default: 
      _T17 = env;
      _T18 = Cyc_Lower_lower_rhs(env,0,0,e);
      _T19 = Cyc_Absyn_goto_stmt(truelab,0U);
      _T1A = Cyc_Absyn_goto_stmt(falselab,0U);
      _T1B = loc;
      _T1C = Cyc_Absyn_ifthenelse_stmt(_T18,_T19,_T1A,_T1B);
      Cyc_Lower_emit_stmt(_T17,_T1C);
      goto _LL0;
    }
    _LL0: ;
  }
}
static struct Cyc_Absyn_Fndecl * Cyc_Lower_lower_fn(struct Cyc_Absyn_Fndecl * fd) {
  struct Cyc_Absyn_Fndecl * _T0;
  struct Cyc_Lower_Env * _T1;
  struct Cyc_Absyn_Fndecl * _T2;
  struct Cyc_Absyn_Stmt * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_Lower_Env * _T5;
  struct Cyc_Absyn_Decl * _T6;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct Cyc_Absyn_Stmt * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_Absyn_Fndecl * _TC;
  struct Cyc_Absyn_Fndecl * _TD;
  struct Cyc_Absyn_Fndecl * _TE;
  _TE = _cycalloc(sizeof(struct Cyc_Absyn_Fndecl));
  _T0 = fd;
  *_TE = *_T0;
  { struct Cyc_Absyn_Fndecl * fd = _TE;
    struct Cyc_Lower_Env * env = Cyc_Lower_new_env();
    _T1 = env;
    _T2 = fd;
    _T3 = _T2->body;
    Cyc_Lower_lower_stmt(_T1,_T3);
    _T4 = Cyc_Lower_prev_stmts(env);
    { struct Cyc_Absyn_Stmt * body = Cyc_Lower_rev_seq_stmts(_T4);
      _T5 = env;
      { struct Cyc_List_List * ts = _T5->temps;
	_TL8D: if (ts != 0) { goto _TL8B;
	}else { goto _TL8C;
	}
	_TL8B: { struct Cyc_Absyn_Decl * _TF = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
	  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T10 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
	    _T10->tag = 0;
	    _T8 = ts;
	    _T9 = _T8->hd;
	    _T10->f1 = (struct Cyc_Absyn_Vardecl *)_T9;
	    _T7 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T10;
	  }_TF->r = (void *)_T7;
	  _TF->loc = 0U;
	  _T6 = (struct Cyc_Absyn_Decl *)_TF;
	}_TA = body;
	body = Cyc_Absyn_decl_stmt(_T6,_TA,0U);
	_TB = ts;
	ts = _TB->tl;
	goto _TL8D;
	_TL8C: ;
      }_TC = fd;
      _TC->body = body;
      _TD = fd;
      return _TD;
    }
  }
}
static struct Cyc_List_List * Cyc_Lower_anormalize(struct Cyc_List_List * ds) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  int * _T3;
  int _T4;
  struct Cyc_Absyn_Fndecl * _T5;
  enum Cyc_Absyn_Scope _T6;
  int _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_Absyn_Decl * _T9;
  struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _TA;
  struct Cyc_Absyn_Decl * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * res = 0;
  _TL91: if (ds != 0) { goto _TL8F;
  }else { goto _TL90;
  }
  _TL8F: _T0 = ds;
  _T1 = _T0->hd;
  { struct Cyc_Absyn_Decl * d = (struct Cyc_Absyn_Decl *)_T1;
    _T2 = d;
    { void * _T10 = _T2->r;
      struct Cyc_Absyn_Fndecl * _T11;
      _T3 = (int *)_T10;
      _T4 = *_T3;
      if (_T4 != 1) { goto _TL92;
      }
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T12 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T10;
	_T11 = _T12->f1;
      }{ struct Cyc_Absyn_Fndecl * fd = _T11;
	_T5 = fd;
	_T6 = _T5->orig_scope;
	_T7 = (int)_T6;
	if (_T7 == 4) { goto _TL94;
	}
	{ struct Cyc_List_List * _T12 = _cycalloc(sizeof(struct Cyc_List_List));
	  { struct Cyc_Absyn_Decl * _T13 = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
	    { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T14 = _cycalloc(sizeof(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct));
	      _T14->tag = 1;
	      _T14->f1 = Cyc_Lower_lower_fn(fd);
	      _TA = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T14;
	    }_T13->r = (void *)_TA;
	    _TB = d;
	    _T13->loc = _TB->loc;
	    _T9 = (struct Cyc_Absyn_Decl *)_T13;
	  }_T12->hd = _T9;
	  _T12->tl = res;
	  _T8 = (struct Cyc_List_List *)_T12;
	}res = _T8;
	goto _TL95;
	_TL94: { struct Cyc_List_List * _T12 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T12->hd = d;
	  _T12->tl = res;
	  _TC = (struct Cyc_List_List *)_T12;
	}res = _TC;
	_TL95: goto _LL0;
      }_TL92: { struct Cyc_List_List * _T12 = _cycalloc(sizeof(struct Cyc_List_List));
	_T12->hd = d;
	_T12->tl = res;
	_TD = (struct Cyc_List_List *)_T12;
      }res = _TD;
      goto _LL0;
      _LL0: ;
    }
  }_TE = ds;
  ds = _TE->tl;
  goto _TL91;
  _TL90: _TF = Cyc_List_imp_rev(res);
  return _TF;
}
struct Cyc_List_List * Cyc_Lower_lower(struct Cyc_List_List * ds) {
  struct Cyc_List_List * _T0;
  ds = Cyc_Lower_anormalize(ds);
  _T0 = ds;
  return _T0;
}
