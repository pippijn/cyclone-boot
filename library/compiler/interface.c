#include <cyc_include.h>
struct Cyc___cycFILE;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Core_Opt {
  void * v;
};
void * Cyc_Core_identity(void *);
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_map(void * (*)(void *),struct Cyc_List_List *);
extern void * Cyc_List_fold_left(void * (*)(void *,void *),void *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
extern char Cyc_Dict_Absent[7U];
 struct Cyc_Dict_Absent_exn_struct {
  char * tag;
};
extern struct Cyc_Dict_Dict Cyc_Dict_empty(int (*)(void *,void *));
extern long Cyc_Dict_member(struct Cyc_Dict_Dict,void *);
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void *,void *);
extern void * Cyc_Dict_lookup(struct Cyc_Dict_Dict,void *);
extern void * Cyc_Dict_fold(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,
			    void *);
extern void Cyc_Dict_iter_c(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
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
enum Cyc_Absyn_AliasHint {
  Cyc_Absyn_UniqueHint = 0U,
  Cyc_Absyn_RefcntHint = 1U,
  Cyc_Absyn_RestrictedHint = 2U,
  Cyc_Absyn_NoHint = 3U
};
enum Cyc_Absyn_KindQual {
  Cyc_Absyn_AnyKind = 0U,
  Cyc_Absyn_MemKind = 1U,
  Cyc_Absyn_BoxKind = 2U,
  Cyc_Absyn_EffKind = 3U,
  Cyc_Absyn_IntKind = 4U,
  Cyc_Absyn_BoolKind = 5U,
  Cyc_Absyn_PtrBndKind = 6U,
  Cyc_Absyn_AqualKind = 7U
};
 struct Cyc_Absyn_Kind {
  enum Cyc_Absyn_KindQual kind;
  enum Cyc_Absyn_AliasHint aliashint;
};
 struct Cyc_Absyn_Tvar {
  struct _fat_ptr * name;
  int identity;
  void * kind;
  void * aquals_bound;
};
 struct Cyc_Absyn_PtrLoc {
  unsigned int ptr_loc;
  unsigned int rgn_loc;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_PtrAtts {
  void * eff;
  void * nullable;
  void * bounds;
  void * zero_term;
  struct Cyc_Absyn_PtrLoc * ptrloc;
  void * autoreleased;
  void * aqual;
};
 struct Cyc_Absyn_PtrInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual elt_tq;
  struct Cyc_Absyn_PtrAtts ptr_atts;
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
 struct Cyc_Absyn_UnknownDatatypeInfo {
  struct _tuple0 * name;
  long is_extensible;
};
 struct _union_DatatypeInfo_UnknownDatatype {
  int tag;
  struct Cyc_Absyn_UnknownDatatypeInfo val;
};
 struct _union_DatatypeInfo_KnownDatatype {
  int tag;
  struct Cyc_Absyn_Datatypedecl * * val;
};
 union Cyc_Absyn_DatatypeInfo {
  struct _union_DatatypeInfo_UnknownDatatype UnknownDatatype;
  struct _union_DatatypeInfo_KnownDatatype KnownDatatype;
};
 struct Cyc_Absyn_UnknownDatatypeFieldInfo {
  struct _tuple0 * datatype_name;
  struct _tuple0 * field_name;
  long is_extensible;
};
 struct _union_DatatypeFieldInfo_UnknownDatatypefield {
  int tag;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo val;
};
 struct _tuple1 {
  struct Cyc_Absyn_Datatypedecl * f0;
  struct Cyc_Absyn_Datatypefield * f1;
};
 struct _union_DatatypeFieldInfo_KnownDatatypefield {
  int tag;
  struct _tuple1 val;
};
 union Cyc_Absyn_DatatypeFieldInfo {
  struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;
  struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;
};
 struct _tuple2 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple0 * f1;
  struct Cyc_Core_Opt * f2;
};
 struct _union_AggrInfo_UnknownAggr {
  int tag;
  struct _tuple2 val;
};
 struct _union_AggrInfo_KnownAggr {
  int tag;
  struct Cyc_Absyn_Aggrdecl * * val;
};
 union Cyc_Absyn_AggrInfo {
  struct _union_AggrInfo_UnknownAggr UnknownAggr;
  struct _union_AggrInfo_KnownAggr KnownAggr;
};
 struct Cyc_Absyn_ArrayInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Absyn_Exp * num_elts;
  void * zero_term;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct {
  int tag;
  struct _tuple0 * f1;
  struct Cyc_Absyn_Enumdecl * f2;
};
 struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_DatatypeInfo f1;
};
 struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_DatatypeFieldInfo f1;
};
 struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_AggrInfo f1;
};
 struct Cyc_Absyn_AppType_Absyn_Type_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_VarType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
};
 struct Cyc_Absyn_PointerType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_PtrInfo f1;
};
 struct Cyc_Absyn_ArrayType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_ArrayInfo f1;
};
 struct Cyc_Absyn_FnType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_FnInfo f1;
};
 struct Cyc_Absyn_TypedefType_Absyn_Type_struct {
  int tag;
  struct _tuple0 * f1;
  struct Cyc_List_List * f2;
  struct Cyc_Absyn_Typedefdecl * f3;
  void * f4;
};
 struct _tuple8 {
  struct _fat_ptr * f0;
  struct Cyc_Absyn_Tqual f1;
  void * f2;
};
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Stmt {
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Global_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Funname_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
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
 struct Cyc_Absyn_Aggrfield {
  struct _fat_ptr * name;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  struct Cyc_Absyn_Exp * width;
  struct Cyc_List_List * attributes;
  struct Cyc_Absyn_Exp * requires_clause;
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
 struct Cyc_Absyn_Datatypefield {
  struct _tuple0 * name;
  struct Cyc_List_List * typs;
  unsigned int loc;
  enum Cyc_Absyn_Scope sc;
};
 struct Cyc_Absyn_Datatypedecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * fields;
  long is_extensible;
};
 struct Cyc_Absyn_Enumdecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  struct Cyc_Core_Opt * fields;
};
 struct Cyc_Absyn_Typedefdecl {
  struct _tuple0 * name;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * kind;
  void * defn;
  struct Cyc_List_List * atts;
  long extern_c;
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
 struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
};
 struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
};
 struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Typedefdecl * f1;
};
 struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct {
  int tag;
  struct _fat_ptr * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct {
  int tag;
  struct _tuple0 * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
int Cyc_Absyn_qvar_cmp(struct _tuple0 *,struct _tuple0 *);
union Cyc_Absyn_Nmspace Cyc_Absyn_Rel_n(struct Cyc_List_List *);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
void * Cyc_Absyn_compress(void *);
extern struct _tuple0 * Cyc_Absyn_exn_name;
struct Cyc_Absyn_Datatypedecl * Cyc_Absyn_exn_tud();
struct Cyc_Absyn_Decl * Cyc_Absyn_new_decl(void *,unsigned int);
struct Cyc_Absyn_Vardecl * Cyc_Absyn_new_vardecl(unsigned int,struct _tuple0 *,
						 void *,struct Cyc_Absyn_Exp *,
						 struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Aggrdecl * Cyc_Absyn_get_known_aggrdecl(union Cyc_Absyn_AggrInfo);
 struct Cyc_Tcenv_Genv {
  struct Cyc_Dict_Dict aggrdecls;
  struct Cyc_Dict_Dict datatypedecls;
  struct Cyc_Dict_Dict enumdecls;
  struct Cyc_Dict_Dict typedefs;
  struct Cyc_Dict_Dict ordinaries;
};
struct Cyc_Tcenv_Fenv;
 struct Cyc_Tcenv_Tenv {
  struct Cyc_List_List * ns;
  struct Cyc_Tcenv_Genv * ae;
  struct Cyc_Tcenv_Fenv * le;
  long allow_valueof:1;
  long in_extern_c_include:1;
  long in_tempest:1;
  long tempest_generalize:1;
  long in_extern_c_inc_repeat:1;
};
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_tc_init();
struct Cyc_Interface_I;
 struct _tuple11 {
  struct _fat_ptr f0;
  struct _fat_ptr f1;
};
 struct Cyc_Absynpp_Params {
  long expand_typedefs;
  long qvar_to_Cids;
  long add_cyc_prefix;
  long decls_first;
  long rewrite_temp_tvars;
  long print_all_tvars;
  long print_all_kinds;
  long print_all_effects;
  long print_using_stmts;
  long print_externC_stmts;
  long print_full_evars;
  long print_zeroterm;
  long generate_line_directives;
  long use_curr_namespace;
  struct Cyc_List_List * curr_namespace;
  long gen_clean_cyclone;
};
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params *);
extern struct Cyc_Absynpp_Params Cyc_Absynpp_cyci_params_r;
void Cyc_Absynpp_decllist2file(struct Cyc_List_List *,struct Cyc___cycFILE *);
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple0 *);
void Cyc_Binding_resolve_all(struct Cyc_List_List *);
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
void * Cyc_Kinds_kind_to_bound(struct Cyc_Absyn_Kind *);
void Cyc_Lex_lex_init(long);
struct Cyc___cycFILE;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
struct Cyc_List_List * Cyc_Parse_parse_file(struct Cyc___cycFILE *);
extern char Cyc_Tcdecl_Incompatible[13U];
 struct Cyc_Tcdecl_Incompatible_exn_struct {
  char * tag;
};
 struct Cyc_Tcdecl_Xdatatypefielddecl {
  struct Cyc_Absyn_Datatypedecl * base;
  struct Cyc_Absyn_Datatypefield * field;
};
void Cyc_Tcdecl_merr(unsigned int,struct _fat_ptr *,struct _fat_ptr,struct _fat_ptr ap);
struct Cyc_Absyn_Aggrdecl * Cyc_Tcdecl_merge_aggrdecl(struct Cyc_Absyn_Aggrdecl *,
						      struct Cyc_Absyn_Aggrdecl *,
						      unsigned int,struct _fat_ptr *);
struct Cyc_Absyn_Datatypedecl * Cyc_Tcdecl_merge_datatypedecl(struct Cyc_Absyn_Datatypedecl *,
							      struct Cyc_Absyn_Datatypedecl *,
							      unsigned int,
							      struct _fat_ptr *);
struct Cyc_Absyn_Enumdecl * Cyc_Tcdecl_merge_enumdecl(struct Cyc_Absyn_Enumdecl *,
						      struct Cyc_Absyn_Enumdecl *,
						      unsigned int,struct _fat_ptr *);
struct Cyc_Absyn_Vardecl * Cyc_Tcdecl_merge_vardecl(struct Cyc_Absyn_Vardecl *,
						    struct Cyc_Absyn_Vardecl *,
						    unsigned int,struct _fat_ptr *);
struct Cyc_Absyn_Typedefdecl * Cyc_Tcdecl_merge_typedefdecl(struct Cyc_Absyn_Typedefdecl *,
							    struct Cyc_Absyn_Typedefdecl *,
							    unsigned int,
							    struct _fat_ptr *);
struct Cyc_Tcdecl_Xdatatypefielddecl * Cyc_Tcdecl_merge_xdatatypefielddecl(struct Cyc_Tcdecl_Xdatatypefielddecl *,
									   struct Cyc_Tcdecl_Xdatatypefielddecl *,
									   unsigned int,
									   struct _fat_ptr *);
void Cyc_Tc_tc(struct Cyc_Tcenv_Tenv *,long,struct Cyc_List_List *);
long Cyc_Tcutil_is_function_type(void *);
void Cyc_Warn_err(unsigned int,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
 struct Cyc_Interface_Ienv {
  struct Cyc_Dict_Dict aggrdecls;
  struct Cyc_Dict_Dict datatypedecls;
  struct Cyc_Dict_Dict enumdecls;
  struct Cyc_Dict_Dict typedefdecls;
  struct Cyc_Dict_Dict vardecls;
  struct Cyc_Dict_Dict xdatatypefielddecls;
};
 struct Cyc_Interface_I {
  struct Cyc_Interface_Ienv * imports;
  struct Cyc_Interface_Ienv * exports;
  struct Cyc_List_List * tds;
};
static struct Cyc_Interface_Ienv * Cyc_Interface_new_ienv() {
  struct Cyc_Interface_Ienv * _T0;
  struct Cyc_Dict_Dict (* _T1)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T2)(int (*)(void *,void *));
  int (* _T3)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict (* _T4)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T5)(int (*)(void *,void *));
  int (* _T6)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict (* _T7)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T8)(int (*)(void *,void *));
  int (* _T9)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict (* _TA)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _TB)(int (*)(void *,void *));
  int (* _TC)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict (* _TD)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _TE)(int (*)(void *,void *));
  int (* _TF)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict (* _T10)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T11)(int (*)(void *,void *));
  int (* _T12)(struct _tuple0 *,struct _tuple0 *);
  { struct Cyc_Interface_Ienv * _T13 = _cycalloc(sizeof(struct Cyc_Interface_Ienv));
    _T2 = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T14)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														    struct _tuple0 *)))_T2;
      _T1 = _T14;
    }_T3 = Cyc_Absyn_qvar_cmp;
    _T13->aggrdecls = _T1(_T3);
    _T5 = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T14)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														    struct _tuple0 *)))_T5;
      _T4 = _T14;
    }_T6 = Cyc_Absyn_qvar_cmp;
    _T13->datatypedecls = _T4(_T6);
    _T8 = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T14)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														    struct _tuple0 *)))_T8;
      _T7 = _T14;
    }_T9 = Cyc_Absyn_qvar_cmp;
    _T13->enumdecls = _T7(_T9);
    _TB = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T14)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														    struct _tuple0 *)))_TB;
      _TA = _T14;
    }_TC = Cyc_Absyn_qvar_cmp;
    _T13->typedefdecls = _TA(_TC);
    _TE = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T14)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														    struct _tuple0 *)))_TE;
      _TD = _T14;
    }_TF = Cyc_Absyn_qvar_cmp;
    _T13->vardecls = _TD(_TF);
    _T11 = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T14)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														    struct _tuple0 *)))_T11;
      _T10 = _T14;
    }_T12 = Cyc_Absyn_qvar_cmp;
    _T13->xdatatypefielddecls = _T10(_T12);
    _T0 = (struct Cyc_Interface_Ienv *)_T13;
  }return _T0;
}
struct Cyc_Interface_I * Cyc_Interface_empty() {
  struct Cyc_Interface_I * _T0;
  { struct Cyc_Interface_I * _T1 = _cycalloc(sizeof(struct Cyc_Interface_I));
    _T1->imports = Cyc_Interface_new_ienv();
    _T1->exports = Cyc_Interface_new_ienv();
    _T1->tds = 0;
    _T0 = (struct Cyc_Interface_I *)_T1;
  }return _T0;
}
struct Cyc_Interface_I * Cyc_Interface_final() {
  struct Cyc_Absyn_Datatypedecl * _T0;
  struct Cyc_Absyn_Datatypedecl * _T1;
  struct Cyc_Absyn_Datatypedecl * _T2;
  struct Cyc_Interface_I * _T3;
  struct Cyc_Interface_Ienv * _T4;
  struct Cyc_Dict_Dict (* _T5)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Datatypedecl *);
  struct Cyc_Dict_Dict (* _T6)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_I * _T7;
  struct Cyc_Interface_Ienv * _T8;
  struct Cyc_Dict_Dict _T9;
  struct _tuple0 * _TA;
  struct Cyc_Absyn_Datatypedecl * _TB;
  struct Cyc_Absyn_Datatypedecl * _TC;
  struct Cyc_Core_Opt * _TD;
  struct Cyc_Core_Opt * _TE;
  void * _TF;
  struct Cyc_Absyn_Datatypefield * _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  struct Cyc_Absyn_Datatypefield * _T13;
  struct Cyc_Absyn_Datatypefield * _T14;
  struct Cyc_Tcdecl_Xdatatypefielddecl * _T15;
  struct Cyc_Tcdecl_Xdatatypefielddecl * _T16;
  struct Cyc_Interface_I * _T17;
  struct Cyc_Interface_Ienv * _T18;
  struct Cyc_Dict_Dict (* _T19)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Tcdecl_Xdatatypefielddecl *);
  struct Cyc_Dict_Dict (* _T1A)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_I * _T1B;
  struct Cyc_Interface_Ienv * _T1C;
  struct Cyc_Dict_Dict _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  struct Cyc_Absyn_Datatypefield * _T20;
  struct _tuple0 * _T21;
  struct Cyc_Tcdecl_Xdatatypefielddecl * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_Interface_I * _T24;
  struct Cyc_Interface_I * _T25;
  struct Cyc_Interface_I * _T26;
  struct Cyc_Interface_I * i = Cyc_Interface_empty();
  struct Cyc_Absyn_Datatypedecl * exn_d;
  exn_d = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
  _T0 = exn_d;
  _T1 = Cyc_Absyn_exn_tud();
  *_T0 = *_T1;
  _T2 = exn_d;
  _T2->sc = 2U;
  _T3 = i;
  _T4 = _T3->exports;
  _T6 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _T27)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Datatypedecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
																     struct _tuple0 *,
																     struct Cyc_Absyn_Datatypedecl *))_T6;
    _T5 = _T27;
  }_T7 = i;
  _T8 = _T7->exports;
  _T9 = _T8->datatypedecls;
  _TA = Cyc_Absyn_exn_name;
  _TB = exn_d;
  _T4->datatypedecls = _T5(_T9,_TA,_TB);
  _TC = Cyc_Absyn_exn_tud();
  _TD = _TC->fields;
  _TE = _check_null(_TD);
  _TF = _TE->v;
  { struct Cyc_List_List * tufs = (struct Cyc_List_List *)_TF;
    _TL3: if (tufs != 0) { goto _TL1;
    }else { goto _TL2;
    }
    _TL1: { struct Cyc_Absyn_Datatypefield * exn_f;
      exn_f = _cycalloc(sizeof(struct Cyc_Absyn_Datatypefield));
      _T10 = exn_f;
      _T11 = tufs;
      _T12 = _T11->hd;
      _T13 = (struct Cyc_Absyn_Datatypefield *)_T12;
      *_T10 = *_T13;
      _T14 = exn_f;
      _T14->sc = 2U;
      { struct Cyc_Tcdecl_Xdatatypefielddecl * exn_fd;
	exn_fd = _cycalloc(sizeof(struct Cyc_Tcdecl_Xdatatypefielddecl));
	_T15 = exn_fd;
	_T15->base = exn_d;
	_T16 = exn_fd;
	_T16->field = exn_f;
	_T17 = i;
	_T18 = _T17->exports;
	_T1A = Cyc_Dict_insert;
	{ struct Cyc_Dict_Dict (* _T27)(struct Cyc_Dict_Dict,struct _tuple0 *,
					struct Cyc_Tcdecl_Xdatatypefielddecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													    struct _tuple0 *,
													    struct Cyc_Tcdecl_Xdatatypefielddecl *))_T1A;
	  _T19 = _T27;
	}_T1B = i;
	_T1C = _T1B->exports;
	_T1D = _T1C->xdatatypefielddecls;
	_T1E = tufs;
	_T1F = _T1E->hd;
	_T20 = (struct Cyc_Absyn_Datatypefield *)_T1F;
	_T21 = _T20->name;
	_T22 = exn_fd;
	_T18->xdatatypefielddecls = _T19(_T1D,_T21,_T22);
      }
    }_T23 = tufs;
    tufs = _T23->tl;
    goto _TL3;
    _TL2: ;
  }_T24 = i;
  _T25 = i;
  _T24->imports = _T25->exports;
  _T26 = i;
  return _T26;
}
static void Cyc_Interface_err(struct _fat_ptr msg) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  _T0 = msg;
  _T1 = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_err(0U,_T0,_T1);
}
static void * Cyc_Interface_invalid_arg(struct _fat_ptr s) {
  struct Cyc_Core_Invalid_argument_exn_struct * _T0;
  void * _T1;
  { struct Cyc_Core_Invalid_argument_exn_struct * _T2 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T2->tag = Cyc_Core_Invalid_argument;
    _T2->f1 = s;
    _T0 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T2;
  }_T1 = (void *)_T0;
  _throw(_T1);
}
static void Cyc_Interface_fields_err(struct _fat_ptr sc,struct _fat_ptr t,
				     struct _tuple0 * n) {
  struct _fat_ptr _T0;
  struct Cyc_String_pa_PrintArg_struct _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_String_pa_PrintArg_struct _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  { struct Cyc_String_pa_PrintArg_struct _T6;
    _T6.tag = 0;
    _T6.f1 = sc;
    _T1 = _T6;
  }{ struct Cyc_String_pa_PrintArg_struct _T6 = _T1;
    { struct Cyc_String_pa_PrintArg_struct _T7;
      _T7.tag = 0;
      _T7.f1 = t;
      _T2 = _T7;
    }{ struct Cyc_String_pa_PrintArg_struct _T7 = _T2;
      { struct Cyc_String_pa_PrintArg_struct _T8;
	_T8.tag = 0;
	_T8.f1 = Cyc_Absynpp_qvar2string(n);
	_T3 = _T8;
      }{ struct Cyc_String_pa_PrintArg_struct _T8 = _T3;
	void * _T9[3];
	_T9[0] = &_T6;
	_T9[1] = &_T7;
	_T9[2] = &_T8;
	_T4 = _tag_fat("fields of %s %s %s have never been defined",sizeof(char),
		       43U);
	_T5 = _tag_fat(_T9,sizeof(void *),3);
	_T0 = Cyc_aprintf(_T4,_T5);
      }
    }
  }Cyc_Interface_err(_T0);
}
static void Cyc_Interface_body_err(struct _fat_ptr sc,struct _tuple0 * n) {
  struct _fat_ptr _T0;
  struct Cyc_String_pa_PrintArg_struct _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  { struct Cyc_String_pa_PrintArg_struct _T5;
    _T5.tag = 0;
    _T5.f1 = sc;
    _T1 = _T5;
  }{ struct Cyc_String_pa_PrintArg_struct _T5 = _T1;
    { struct Cyc_String_pa_PrintArg_struct _T6;
      _T6.tag = 0;
      _T6.f1 = Cyc_Absynpp_qvar2string(n);
      _T2 = _T6;
    }{ struct Cyc_String_pa_PrintArg_struct _T6 = _T2;
      void * _T7[2];
      _T7[0] = &_T5;
      _T7[1] = &_T6;
      _T3 = _tag_fat("the body of %s function %s has never been defined",
		     sizeof(char),50U);
      _T4 = _tag_fat(_T7,sizeof(void *),2);
      _T0 = Cyc_aprintf(_T3,_T4);
    }
  }Cyc_Interface_err(_T0);
}
static void Cyc_Interface_static_err(struct _fat_ptr obj1,struct _tuple0 * name1,
				     struct _fat_ptr obj2,struct _tuple0 * name2) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  struct Cyc_String_pa_PrintArg_struct _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  struct Cyc_String_pa_PrintArg_struct _T6;
  struct Cyc_String_pa_PrintArg_struct _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  _T0 = obj1;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 == 0) { goto _TL4;
  }
  { struct Cyc_String_pa_PrintArg_struct _TA;
    _TA.tag = 0;
    _TA.f1 = obj1;
    _T4 = _TA;
  }{ struct Cyc_String_pa_PrintArg_struct _TA = _T4;
    { struct Cyc_String_pa_PrintArg_struct _TB;
      _TB.tag = 0;
      _TB.f1 = Cyc_Absynpp_qvar2string(name1);
      _T5 = _TB;
    }{ struct Cyc_String_pa_PrintArg_struct _TB = _T5;
      { struct Cyc_String_pa_PrintArg_struct _TC;
	_TC.tag = 0;
	_TC.f1 = obj2;
	_T6 = _TC;
      }{ struct Cyc_String_pa_PrintArg_struct _TC = _T6;
	{ struct Cyc_String_pa_PrintArg_struct _TD;
	  _TD.tag = 0;
	  _TD.f1 = Cyc_Absynpp_qvar2string(name2);
	  _T7 = _TD;
	}{ struct Cyc_String_pa_PrintArg_struct _TD = _T7;
	  void * _TE[4];
	  _TE[0] = &_TA;
	  _TE[1] = &_TB;
	  _TE[2] = &_TC;
	  _TE[3] = &_TD;
	  _T8 = _tag_fat("declaration of %s %s relies on static %s %s",sizeof(char),
			 44U);
	  _T9 = _tag_fat(_TE,sizeof(void *),4);
	  _T3 = Cyc_aprintf(_T8,_T9);
	}
      }
    }
  }Cyc_Interface_err(_T3);
  goto _TL5;
  _TL4: _TL5: ;
}
static void Cyc_Interface_abstract_err(struct _fat_ptr obj1,struct _tuple0 * name1,
				       struct _fat_ptr obj2,struct _tuple0 * name2) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  struct Cyc_String_pa_PrintArg_struct _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  struct Cyc_String_pa_PrintArg_struct _T6;
  struct Cyc_String_pa_PrintArg_struct _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  _T0 = obj1;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 == 0) { goto _TL6;
  }
  { struct Cyc_String_pa_PrintArg_struct _TA;
    _TA.tag = 0;
    _TA.f1 = obj1;
    _T4 = _TA;
  }{ struct Cyc_String_pa_PrintArg_struct _TA = _T4;
    { struct Cyc_String_pa_PrintArg_struct _TB;
      _TB.tag = 0;
      _TB.f1 = Cyc_Absynpp_qvar2string(name1);
      _T5 = _TB;
    }{ struct Cyc_String_pa_PrintArg_struct _TB = _T5;
      { struct Cyc_String_pa_PrintArg_struct _TC;
	_TC.tag = 0;
	_TC.f1 = obj2;
	_T6 = _TC;
      }{ struct Cyc_String_pa_PrintArg_struct _TC = _T6;
	{ struct Cyc_String_pa_PrintArg_struct _TD;
	  _TD.tag = 0;
	  _TD.f1 = Cyc_Absynpp_qvar2string(name2);
	  _T7 = _TD;
	}{ struct Cyc_String_pa_PrintArg_struct _TD = _T7;
	  void * _TE[4];
	  _TE[0] = &_TA;
	  _TE[1] = &_TB;
	  _TE[2] = &_TC;
	  _TE[3] = &_TD;
	  _T8 = _tag_fat("declaration of %s %s relies on fields of abstract %s %s",
			 sizeof(char),56U);
	  _T9 = _tag_fat(_TE,sizeof(void *),4);
	  _T3 = Cyc_aprintf(_T8,_T9);
	}
      }
    }
  }Cyc_Interface_err(_T3);
  goto _TL7;
  _TL6: _TL7: ;
}
 struct Cyc_Interface_Seen {
  struct Cyc_Dict_Dict aggrs;
  struct Cyc_Dict_Dict datatypes;
};
static struct Cyc_Interface_Seen * Cyc_Interface_new_seen() {
  struct Cyc_Interface_Seen * _T0;
  struct Cyc_Dict_Dict (* _T1)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T2)(int (*)(void *,void *));
  int (* _T3)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict (* _T4)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T5)(int (*)(void *,void *));
  int (* _T6)(struct _tuple0 *,struct _tuple0 *);
  { struct Cyc_Interface_Seen * _T7 = _cycalloc(sizeof(struct Cyc_Interface_Seen));
    _T2 = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T8)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														   struct _tuple0 *)))_T2;
      _T1 = _T8;
    }_T3 = Cyc_Absyn_qvar_cmp;
    _T7->aggrs = _T1(_T3);
    _T5 = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T8)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														   struct _tuple0 *)))_T5;
      _T4 = _T8;
    }_T6 = Cyc_Absyn_qvar_cmp;
    _T7->datatypes = _T4(_T6);
    _T0 = (struct Cyc_Interface_Seen *)_T7;
  }return _T0;
}
static long Cyc_Interface_check_public_type(struct Cyc_Tcenv_Genv *,struct Cyc_Interface_Seen *,
					    struct _fat_ptr,struct _tuple0 *,
					    void *);
static long Cyc_Interface_check_public_type_list(struct Cyc_Tcenv_Genv * ae,
						 struct Cyc_Interface_Seen * seen,
						 struct _fat_ptr obj,struct _tuple0 * name,
						 void * (* f)(void *),struct Cyc_List_List * l) {
  struct Cyc_Tcenv_Genv * _T0;
  struct Cyc_Interface_Seen * _T1;
  struct _fat_ptr _T2;
  struct _tuple0 * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  void * _T6;
  long _T7;
  struct Cyc_List_List * _T8;
  long _T9;
  long res = 1;
  _TLB: if (l != 0) { goto _TL9;
  }else { goto _TLA;
  }
  _TL9: _T0 = ae;
  _T1 = seen;
  _T2 = obj;
  _T3 = name;
  _T4 = l;
  _T5 = _T4->hd;
  _T6 = f(_T5);
  _T7 = Cyc_Interface_check_public_type(_T0,_T1,_T2,_T3,_T6);
  if (_T7) { goto _TLC;
  }else { goto _TLE;
  }
  _TLE: res = 0;
  goto _TLD;
  _TLC: _TLD: _T8 = l;
  l = _T8->tl;
  goto _TLB;
  _TLA: _T9 = res;
  return _T9;
}
static long Cyc_Interface_check_public_aggrdecl(struct Cyc_Tcenv_Genv * ae,
						struct Cyc_Interface_Seen * seen,
						struct Cyc_Absyn_Aggrdecl * d) {
  struct _handler_cons * _T0;
  int _T1;
  long (* _T2)(struct Cyc_Dict_Dict,struct _tuple0 *);
  void * (* _T3)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Seen * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Absyn_Aggrdecl * _T6;
  struct _tuple0 * _T7;
  void * _T8;
  struct Cyc_Dict_Absent_exn_struct * _T9;
  char * _TA;
  char * _TB;
  struct Cyc_Interface_Seen * _TC;
  struct Cyc_Dict_Dict (* _TD)(struct Cyc_Dict_Dict,struct _tuple0 *,long);
  struct Cyc_Dict_Dict (* _TE)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Seen * _TF;
  struct Cyc_Dict_Dict _T10;
  struct Cyc_Absyn_Aggrdecl * _T11;
  struct _tuple0 * _T12;
  long _T13;
  struct Cyc_Absyn_Aggrdecl * _T14;
  struct Cyc_Absyn_AggrdeclImpl * _T15;
  struct Cyc_Absyn_Aggrdecl * _T16;
  struct Cyc_Absyn_AggrdeclImpl * _T17;
  struct Cyc_Tcenv_Genv * _T18;
  struct Cyc_Interface_Seen * _T19;
  struct _fat_ptr _T1A;
  struct Cyc_Absyn_Aggrdecl * _T1B;
  struct _tuple0 * _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct Cyc_Absyn_Aggrfield * _T1F;
  void * _T20;
  long _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_Interface_Seen * _T23;
  struct Cyc_Dict_Dict (* _T24)(struct Cyc_Dict_Dict,struct _tuple0 *,long);
  struct Cyc_Dict_Dict (* _T25)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Seen * _T26;
  struct Cyc_Dict_Dict _T27;
  struct Cyc_Absyn_Aggrdecl * _T28;
  struct _tuple0 * _T29;
  long _T2A;
  long _T2B;
  { struct _handler_cons _T2C;
    _T0 = &_T2C;
    _push_handler(_T0);
    { int _T2D = 0;
      _T1 = setjmp(_T2C.handler);
      if (! _T1) { goto _TLF;
      }
      _T2D = 1;
      goto _TL10;
      _TLF: _TL10: if (_T2D) { goto _TL11;
      }else { goto _TL13;
      }
      _TL13: _T3 = Cyc_Dict_lookup;
      { long (* _T2E)(struct Cyc_Dict_Dict,struct _tuple0 *) = (long (*)(struct Cyc_Dict_Dict,
									 struct _tuple0 *))_T3;
	_T2 = _T2E;
      }_T4 = seen;
      _T5 = _T4->aggrs;
      _T6 = d;
      _T7 = _T6->name;
      { long _T2E = _T2(_T5,_T7);
	_npop_handler(0);
	return _T2E;
      }_pop_handler();
      goto _TL12;
      _TL11: _T8 = Cyc_Core_get_exn_thrown();
      { void * _T2E = (void *)_T8;
	void * _T2F;
	_T9 = (struct Cyc_Dict_Absent_exn_struct *)_T2E;
	_TA = _T9->tag;
	_TB = Cyc_Dict_Absent;
	if (_TA != _TB) { goto _TL14;
	}
	goto _LL0;
	_TL14: _T2F = _T2E;
	{ void * exn = _T2F;
	  _rethrow(exn);
	}_LL0: ;
      }_TL12: ;
    }
  }{ long res = 1;
    _TC = seen;
    _TE = Cyc_Dict_insert;
    { struct Cyc_Dict_Dict (* _T2C)(struct Cyc_Dict_Dict,struct _tuple0 *,
				    long) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
								      struct _tuple0 *,
								      long))_TE;
      _TD = _T2C;
    }_TF = seen;
    _T10 = _TF->aggrs;
    _T11 = d;
    _T12 = _T11->name;
    _T13 = res;
    _TC->aggrs = _TD(_T10,_T12,_T13);
    _T14 = d;
    _T15 = _T14->impl;
    if (_T15 == 0) { goto _TL16;
    }
    _T16 = d;
    _T17 = _T16->impl;
    { struct Cyc_List_List * fs = _T17->fields;
      _TL1B: if (fs != 0) { goto _TL19;
      }else { goto _TL1A;
      }
      _TL19: _T18 = ae;
      _T19 = seen;
      _T1A = _tag_fat("type",sizeof(char),5U);
      _T1B = d;
      _T1C = _T1B->name;
      _T1D = fs;
      _T1E = _T1D->hd;
      _T1F = (struct Cyc_Absyn_Aggrfield *)_T1E;
      _T20 = _T1F->type;
      _T21 = Cyc_Interface_check_public_type(_T18,_T19,_T1A,_T1C,_T20);
      if (_T21) { goto _TL1C;
      }else { goto _TL1E;
      }
      _TL1E: res = 0;
      goto _TL1D;
      _TL1C: _TL1D: _T22 = fs;
      fs = _T22->tl;
      goto _TL1B;
      _TL1A: ;
    }goto _TL17;
    _TL16: _TL17: _T23 = seen;
    _T25 = Cyc_Dict_insert;
    { struct Cyc_Dict_Dict (* _T2C)(struct Cyc_Dict_Dict,struct _tuple0 *,
				    long) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
								      struct _tuple0 *,
								      long))_T25;
      _T24 = _T2C;
    }_T26 = seen;
    _T27 = _T26->aggrs;
    _T28 = d;
    _T29 = _T28->name;
    _T2A = res;
    _T23->aggrs = _T24(_T27,_T29,_T2A);
    _T2B = res;
    return _T2B;
  }
}
 struct _tuple15 {
  struct Cyc_Absyn_Tqual f0;
  void * f1;
};
static void * Cyc_Interface_get_type1(struct _tuple15 * x) {
  struct _tuple15 * _T0;
  struct _tuple15 _T1;
  void * _T2;
  _T0 = x;
  _T1 = *_T0;
  _T2 = _T1.f1;
  return _T2;
}
static void * Cyc_Interface_get_type2(struct _tuple8 * x) {
  struct _tuple8 * _T0;
  struct _tuple8 _T1;
  void * _T2;
  _T0 = x;
  _T1 = *_T0;
  _T2 = _T1.f2;
  return _T2;
}
static long Cyc_Interface_check_public_datatypedecl(struct Cyc_Tcenv_Genv * ae,
						    struct Cyc_Interface_Seen * seen,
						    struct Cyc_Absyn_Datatypedecl * d) {
  struct _handler_cons * _T0;
  int _T1;
  long (* _T2)(struct Cyc_Dict_Dict,struct _tuple0 *);
  void * (* _T3)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Seen * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Absyn_Datatypedecl * _T6;
  struct _tuple0 * _T7;
  void * _T8;
  struct Cyc_Dict_Absent_exn_struct * _T9;
  char * _TA;
  char * _TB;
  struct Cyc_Interface_Seen * _TC;
  struct Cyc_Dict_Dict (* _TD)(struct Cyc_Dict_Dict,struct _tuple0 *,long);
  struct Cyc_Dict_Dict (* _TE)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Seen * _TF;
  struct Cyc_Dict_Dict _T10;
  struct Cyc_Absyn_Datatypedecl * _T11;
  struct _tuple0 * _T12;
  long _T13;
  struct Cyc_Absyn_Datatypedecl * _T14;
  struct Cyc_Core_Opt * _T15;
  struct Cyc_Absyn_Datatypedecl * _T16;
  struct Cyc_Core_Opt * _T17;
  void * _T18;
  long (* _T19)(struct Cyc_Tcenv_Genv *,struct Cyc_Interface_Seen *,struct _fat_ptr,
		struct _tuple0 *,void * (*)(struct _tuple15 *),struct Cyc_List_List *);
  struct Cyc_Tcenv_Genv * _T1A;
  struct Cyc_Interface_Seen * _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_Absyn_Datatypedecl * _T1D;
  struct _tuple0 * _T1E;
  struct Cyc_List_List * _T1F;
  void * _T20;
  struct Cyc_Absyn_Datatypefield * _T21;
  struct Cyc_List_List * _T22;
  long _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_Interface_Seen * _T25;
  struct Cyc_Dict_Dict (* _T26)(struct Cyc_Dict_Dict,struct _tuple0 *,long);
  struct Cyc_Dict_Dict (* _T27)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Seen * _T28;
  struct Cyc_Dict_Dict _T29;
  struct Cyc_Absyn_Datatypedecl * _T2A;
  struct _tuple0 * _T2B;
  long _T2C;
  long _T2D;
  { struct _handler_cons _T2E;
    _T0 = &_T2E;
    _push_handler(_T0);
    { int _T2F = 0;
      _T1 = setjmp(_T2E.handler);
      if (! _T1) { goto _TL1F;
      }
      _T2F = 1;
      goto _TL20;
      _TL1F: _TL20: if (_T2F) { goto _TL21;
      }else { goto _TL23;
      }
      _TL23: _T3 = Cyc_Dict_lookup;
      { long (* _T30)(struct Cyc_Dict_Dict,struct _tuple0 *) = (long (*)(struct Cyc_Dict_Dict,
									 struct _tuple0 *))_T3;
	_T2 = _T30;
      }_T4 = seen;
      _T5 = _T4->datatypes;
      _T6 = d;
      _T7 = _T6->name;
      { long _T30 = _T2(_T5,_T7);
	_npop_handler(0);
	return _T30;
      }_pop_handler();
      goto _TL22;
      _TL21: _T8 = Cyc_Core_get_exn_thrown();
      { void * _T30 = (void *)_T8;
	void * _T31;
	_T9 = (struct Cyc_Dict_Absent_exn_struct *)_T30;
	_TA = _T9->tag;
	_TB = Cyc_Dict_Absent;
	if (_TA != _TB) { goto _TL24;
	}
	goto _LL0;
	_TL24: _T31 = _T30;
	{ void * exn = _T31;
	  _rethrow(exn);
	}_LL0: ;
      }_TL22: ;
    }
  }{ long res = 1;
    _TC = seen;
    _TE = Cyc_Dict_insert;
    { struct Cyc_Dict_Dict (* _T2E)(struct Cyc_Dict_Dict,struct _tuple0 *,
				    long) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
								      struct _tuple0 *,
								      long))_TE;
      _TD = _T2E;
    }_TF = seen;
    _T10 = _TF->datatypes;
    _T11 = d;
    _T12 = _T11->name;
    _T13 = res;
    _TC->datatypes = _TD(_T10,_T12,_T13);
    _T14 = d;
    _T15 = _T14->fields;
    if (_T15 == 0) { goto _TL26;
    }
    _T16 = d;
    _T17 = _T16->fields;
    _T18 = _T17->v;
    { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T18;
      _TL2B: if (fs != 0) { goto _TL29;
      }else { goto _TL2A;
      }
      _TL29: { long (* _T2E)(struct Cyc_Tcenv_Genv *,struct Cyc_Interface_Seen *,
			     struct _fat_ptr,struct _tuple0 *,void * (*)(struct _tuple15 *),
			     struct Cyc_List_List *) = (long (*)(struct Cyc_Tcenv_Genv *,
								 struct Cyc_Interface_Seen *,
								 struct _fat_ptr,
								 struct _tuple0 *,
								 void * (*)(struct _tuple15 *),
								 struct Cyc_List_List *))Cyc_Interface_check_public_type_list;
	_T19 = _T2E;
      }_T1A = ae;
      _T1B = seen;
      _T1C = _tag_fat("datatype",sizeof(char),9U);
      _T1D = d;
      _T1E = _T1D->name;
      _T1F = fs;
      _T20 = _T1F->hd;
      _T21 = (struct Cyc_Absyn_Datatypefield *)_T20;
      _T22 = _T21->typs;
      _T23 = _T19(_T1A,_T1B,_T1C,_T1E,Cyc_Interface_get_type1,_T22);
      if (_T23) { goto _TL2C;
      }else { goto _TL2E;
      }
      _TL2E: res = 0;
      goto _TL2D;
      _TL2C: _TL2D: _T24 = fs;
      fs = _T24->tl;
      goto _TL2B;
      _TL2A: ;
    }goto _TL27;
    _TL26: _TL27: _T25 = seen;
    _T27 = Cyc_Dict_insert;
    { struct Cyc_Dict_Dict (* _T2E)(struct Cyc_Dict_Dict,struct _tuple0 *,
				    long) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
								      struct _tuple0 *,
								      long))_T27;
      _T26 = _T2E;
    }_T28 = seen;
    _T29 = _T28->datatypes;
    _T2A = d;
    _T2B = _T2A->name;
    _T2C = res;
    _T25->datatypes = _T26(_T29,_T2B,_T2C);
    _T2D = res;
    return _T2D;
  }
}
static long Cyc_Interface_check_public_enumdecl(struct Cyc_Tcenv_Genv * ae,
						struct Cyc_Interface_Seen * seen,
						struct Cyc_Absyn_Enumdecl * d) {
  return 1;
}
static long Cyc_Interface_check_public_typedefdecl(struct Cyc_Tcenv_Genv * ae,
						   struct Cyc_Interface_Seen * seen,
						   struct Cyc_Absyn_Typedefdecl * d) {
  struct Cyc_Absyn_Typedefdecl * _T0;
  void * _T1;
  struct Cyc_Tcenv_Genv * _T2;
  struct Cyc_Interface_Seen * _T3;
  struct _fat_ptr _T4;
  struct Cyc_Absyn_Typedefdecl * _T5;
  struct _tuple0 * _T6;
  struct Cyc_Absyn_Typedefdecl * _T7;
  void * _T8;
  long _T9;
  _T0 = d;
  _T1 = _T0->defn;
  if (_T1 == 0) { goto _TL2F;
  }
  _T2 = ae;
  _T3 = seen;
  _T4 = _tag_fat(0,0,0);
  _T5 = d;
  _T6 = _T5->name;
  _T7 = d;
  _T8 = _T7->defn;
  _T9 = Cyc_Interface_check_public_type(_T2,_T3,_T4,_T6,_T8);
  return _T9;
  _TL2F: return 1;
}
static long Cyc_Interface_check_public_vardecl(struct Cyc_Tcenv_Genv * ae,
					       struct Cyc_Interface_Seen * seen,
					       struct Cyc_Absyn_Vardecl * d) {
  struct Cyc_Tcenv_Genv * _T0;
  struct Cyc_Interface_Seen * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Absyn_Vardecl * _T3;
  struct _tuple0 * _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  void * _T6;
  long _T7;
  _T0 = ae;
  _T1 = seen;
  _T2 = _tag_fat("variable",sizeof(char),9U);
  _T3 = d;
  _T4 = _T3->name;
  _T5 = d;
  _T6 = _T5->type;
  _T7 = Cyc_Interface_check_public_type(_T0,_T1,_T2,_T4,_T6);
  return _T7;
}
static long Cyc_Interface_check_public_type(struct Cyc_Tcenv_Genv * ae,struct Cyc_Interface_Seen * seen,
					    struct _fat_ptr obj,struct _tuple0 * name,
					    void * t) {
  int * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_PtrInfo _T2;
  struct Cyc_Absyn_ArrayInfo _T3;
  void * _T4;
  void * _T5;
  long _T6;
  struct Cyc_Absyn_FnInfo _T7;
  struct Cyc_Absyn_FnInfo _T8;
  struct Cyc_Absyn_FnInfo _T9;
  int _TA;
  long (* _TB)(struct Cyc_Tcenv_Genv *,struct Cyc_Interface_Seen *,struct _fat_ptr,
	       struct _tuple0 *,void * (*)(struct _tuple8 *),struct Cyc_List_List *);
  struct Cyc_Tcenv_Genv * _TC;
  struct Cyc_Interface_Seen * _TD;
  struct _fat_ptr _TE;
  struct _tuple0 * _TF;
  struct Cyc_List_List * _T10;
  long _T11;
  struct Cyc_Absyn_VarargInfo * _T12;
  long _T13;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T14;
  void * _T15;
  int * _T16;
  unsigned int _T17;
  void * _T18;
  struct Cyc_Absyn_Aggrdecl * _T19;
  enum Cyc_Absyn_Scope _T1A;
  int _T1B;
  struct _fat_ptr _T1C;
  struct _tuple0 * _T1D;
  struct _fat_ptr _T1E;
  struct Cyc_Absyn_Aggrdecl * _T1F;
  struct _tuple0 * _T20;
  int _T21;
  struct Cyc_Tcenv_Genv * _T22;
  struct Cyc_Interface_Seen * _T23;
  struct _fat_ptr _T24;
  struct _tuple0 * _T25;
  void * (* _T26)(void *);
  struct Cyc_List_List * _T27;
  long _T28;
  void * _T29;
  struct _handler_cons * _T2A;
  int _T2B;
  struct Cyc_Absyn_Enumdecl * * (* _T2C)(struct Cyc_Dict_Dict,struct _tuple0 *);
  void * (* _T2D)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Tcenv_Genv * _T2E;
  struct Cyc_Dict_Dict _T2F;
  struct _tuple0 * _T30;
  struct Cyc_Absyn_Enumdecl * * _T31;
  void * _T32;
  struct Cyc_Dict_Absent_exn_struct * _T33;
  char * _T34;
  char * _T35;
  int (* _T36)(struct _fat_ptr);
  struct _fat_ptr _T37;
  struct Cyc_String_pa_PrintArg_struct _T38;
  struct _fat_ptr _T39;
  struct _fat_ptr _T3A;
  struct Cyc_Absyn_Enumdecl * _T3B;
  enum Cyc_Absyn_Scope _T3C;
  int _T3D;
  struct _fat_ptr _T3E;
  struct _tuple0 * _T3F;
  struct _fat_ptr _T40;
  struct Cyc_Absyn_Enumdecl * _T41;
  struct _tuple0 * _T42;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T43;
  void * _T44;
  struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T45;
  union Cyc_Absyn_DatatypeInfo _T46;
  struct _union_DatatypeInfo_KnownDatatype _T47;
  unsigned int _T48;
  void * _T49;
  union Cyc_Absyn_DatatypeInfo _T4A;
  struct _union_DatatypeInfo_KnownDatatype _T4B;
  struct Cyc_Absyn_Datatypedecl * * _T4C;
  struct _handler_cons * _T4D;
  int _T4E;
  struct Cyc_Absyn_Datatypedecl * * (* _T4F)(struct Cyc_Dict_Dict,struct _tuple0 *);
  void * (* _T50)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Tcenv_Genv * _T51;
  struct Cyc_Dict_Dict _T52;
  struct Cyc_Absyn_Datatypedecl * _T53;
  struct _tuple0 * _T54;
  struct Cyc_Absyn_Datatypedecl * * _T55;
  void * _T56;
  struct Cyc_Dict_Absent_exn_struct * _T57;
  char * _T58;
  char * _T59;
  int (* _T5A)(struct _fat_ptr);
  struct _fat_ptr _T5B;
  struct Cyc_String_pa_PrintArg_struct _T5C;
  struct Cyc_Absyn_Datatypedecl * _T5D;
  struct _tuple0 * _T5E;
  struct _fat_ptr _T5F;
  struct _fat_ptr _T60;
  struct Cyc_Absyn_Datatypedecl * _T61;
  enum Cyc_Absyn_Scope _T62;
  int _T63;
  struct _fat_ptr _T64;
  struct _tuple0 * _T65;
  struct _fat_ptr _T66;
  struct Cyc_Absyn_Datatypedecl * _T67;
  struct _tuple0 * _T68;
  int _T69;
  struct Cyc_Tcenv_Genv * _T6A;
  struct Cyc_Interface_Seen * _T6B;
  struct _fat_ptr _T6C;
  struct _tuple0 * _T6D;
  void * (* _T6E)(void *);
  struct Cyc_List_List * _T6F;
  long _T70;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T71;
  void * _T72;
  struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T73;
  union Cyc_Absyn_DatatypeFieldInfo _T74;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T75;
  unsigned int _T76;
  void * _T77;
  union Cyc_Absyn_DatatypeFieldInfo _T78;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T79;
  struct _tuple1 _T7A;
  union Cyc_Absyn_DatatypeFieldInfo _T7B;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T7C;
  struct _tuple1 _T7D;
  struct _handler_cons * _T7E;
  int _T7F;
  struct Cyc_Absyn_Datatypedecl * * (* _T80)(struct Cyc_Dict_Dict,struct _tuple0 *);
  void * (* _T81)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Tcenv_Genv * _T82;
  struct Cyc_Dict_Dict _T83;
  struct Cyc_Absyn_Datatypedecl * _T84;
  struct _tuple0 * _T85;
  struct Cyc_Absyn_Datatypedecl * * _T86;
  void * _T87;
  struct Cyc_Dict_Absent_exn_struct * _T88;
  char * _T89;
  char * _T8A;
  int (* _T8B)(struct _fat_ptr);
  struct _fat_ptr _T8C;
  struct Cyc_String_pa_PrintArg_struct _T8D;
  struct Cyc_Absyn_Datatypedecl * _T8E;
  struct _tuple0 * _T8F;
  struct _fat_ptr _T90;
  struct _fat_ptr _T91;
  struct Cyc_Absyn_Datatypedecl * _T92;
  struct Cyc_Core_Opt * _T93;
  int (* _T94)(struct _fat_ptr);
  struct _fat_ptr _T95;
  struct Cyc_String_pa_PrintArg_struct _T96;
  struct Cyc_Absyn_Datatypedecl * _T97;
  struct _tuple0 * _T98;
  struct _fat_ptr _T99;
  struct _fat_ptr _T9A;
  struct Cyc_Absyn_Datatypedecl * _T9B;
  struct Cyc_Core_Opt * _T9C;
  void * _T9D;
  struct Cyc_Absyn_Datatypefield * _T9E;
  struct _tuple0 * _T9F;
  struct _tuple0 _TA0;
  struct _fat_ptr * _TA1;
  struct Cyc_List_List * _TA2;
  void * _TA3;
  struct Cyc_Absyn_Datatypefield * _TA4;
  struct _tuple0 * _TA5;
  struct _tuple0 _TA6;
  struct _fat_ptr * _TA7;
  int _TA8;
  struct Cyc_List_List * _TA9;
  void * _TAA;
  struct Cyc_List_List * _TAB;
  int (* _TAC)(struct _fat_ptr);
  struct _fat_ptr _TAD;
  struct Cyc_String_pa_PrintArg_struct _TAE;
  struct Cyc_Absyn_Datatypefield * _TAF;
  struct _tuple0 * _TB0;
  struct _fat_ptr _TB1;
  struct _fat_ptr _TB2;
  struct Cyc_Absyn_Datatypedecl * _TB3;
  enum Cyc_Absyn_Scope _TB4;
  int _TB5;
  struct _fat_ptr _TB6;
  struct _tuple0 * _TB7;
  struct _fat_ptr _TB8;
  struct Cyc_Absyn_Datatypedecl * _TB9;
  struct _tuple0 * _TBA;
  struct Cyc_Absyn_Datatypedecl * _TBB;
  enum Cyc_Absyn_Scope _TBC;
  int _TBD;
  struct _fat_ptr _TBE;
  struct _tuple0 * _TBF;
  struct _fat_ptr _TC0;
  struct Cyc_Absyn_Datatypedecl * _TC1;
  struct _tuple0 * _TC2;
  struct Cyc_Absyn_Datatypefield * _TC3;
  enum Cyc_Absyn_Scope _TC4;
  int _TC5;
  struct _fat_ptr _TC6;
  struct _tuple0 * _TC7;
  struct _fat_ptr _TC8;
  struct Cyc_String_pa_PrintArg_struct _TC9;
  struct Cyc_Absyn_Datatypefield * _TCA;
  struct _tuple0 * _TCB;
  struct _fat_ptr _TCC;
  struct _fat_ptr _TCD;
  struct Cyc_Absyn_Datatypedecl * _TCE;
  struct _tuple0 * _TCF;
  int _TD0;
  struct Cyc_Tcenv_Genv * _TD1;
  struct Cyc_Interface_Seen * _TD2;
  struct _fat_ptr _TD3;
  struct _tuple0 * _TD4;
  void * (* _TD5)(void *);
  struct Cyc_List_List * _TD6;
  long _TD7;
  void * _TD8 = Cyc_Absyn_compress(t);
  struct Cyc_Absyn_Datatypefield * _TD9;
  struct Cyc_Absyn_Datatypedecl * _TDA;
  struct _tuple0 * _TDB;
  union Cyc_Absyn_AggrInfo _TDC;
  struct Cyc_Absyn_VarargInfo * _TDD;
  struct Cyc_List_List * _TDE;
  void * _TDF;
  _T0 = (int *)_TD8;
  _T1 = *_T0;
  switch (_T1) {
  case 4: 
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TE0 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TD8;
      _T2 = _TE0->f1;
      _TDF = _T2.elt_type;
    }{ void * t = _TDF;
      _TDF = t;
      goto _LL4;
    }
  case 5: 
    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _TE0 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_TD8;
      _T3 = _TE0->f1;
      _TDF = _T3.elt_type;
    }_LL4: { void * t = _TDF;
      _TDF = t;
      goto _LL6;
    }
  case 8: 
    { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _TE0 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_TD8;
      _T4 = _TE0->f4;
      _TDF = (void *)_T4;
    }_T5 = (void *)_TDF;
    if (_T5 == 0) { goto _TL32;
    }
    _LL6: { void * t = _TDF;
      _T6 = Cyc_Interface_check_public_type(ae,seen,obj,name,t);
      return _T6;
    }_TL32: goto _LL11;
  case 6: 
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _TE0 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_TD8;
      _T7 = _TE0->f1;
      _TDF = _T7.ret_type;
      _T8 = _TE0->f1;
      _TDE = _T8.args;
      _T9 = _TE0->f1;
      _TDD = _T9.cyc_varargs;
    }{ void * ret = _TDF;
      struct Cyc_List_List * args = _TDE;
      struct Cyc_Absyn_VarargInfo * cyc_varargs = _TDD;
      { long (* _TE0)(struct Cyc_Tcenv_Genv *,struct Cyc_Interface_Seen *,
		      struct _fat_ptr,struct _tuple0 *,void * (*)(struct _tuple8 *),
		      struct Cyc_List_List *) = (long (*)(struct Cyc_Tcenv_Genv *,
							  struct Cyc_Interface_Seen *,
							  struct _fat_ptr,
							  struct _tuple0 *,
							  void * (*)(struct _tuple8 *),
							  struct Cyc_List_List *))Cyc_Interface_check_public_type_list;
	_TB = _TE0;
      }_TC = ae;
      _TD = seen;
      _TE = obj;
      _TF = name;
      _T10 = args;
      _T11 = _TB(_TC,_TD,_TE,_TF,Cyc_Interface_get_type2,_T10);
      if (! _T11) { goto _TL34;
      }
      _TA = Cyc_Interface_check_public_type(ae,seen,obj,name,ret);
      goto _TL35;
      _TL34: _TA = 0;
      _TL35: { long b = _TA;
	if (cyc_varargs == 0) { goto _TL36;
	}
	_T12 = cyc_varargs;
	{ struct Cyc_Absyn_VarargInfo _TE0 = *_T12;
	  void * _TE1;
	  _TE1 = _TE0.type;
	  { void * vt = _TE1;
	    b = Cyc_Interface_check_public_type(ae,seen,obj,name,vt);
	  }
	}goto _TL37;
	_TL36: _TL37: _T13 = b;
	return _T13;
      }
    }
  case 0: 
    _T14 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD8;
    _T15 = _T14->f1;
    _T16 = (int *)_T15;
    _T17 = *_T16;
    switch (_T17) {
    case 24: 
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE0 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD8;
	_T18 = _TE0->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TE1 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T18;
	  _TDC = _TE1->f1;
	}_TDE = _TE0->f2;
      }{ union Cyc_Absyn_AggrInfo info = _TDC;
	struct Cyc_List_List * targs = _TDE;
	struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
	_T19 = ad;
	_T1A = _T19->sc;
	_T1B = (int)_T1A;
	if (_T1B != 0) { goto _TL39;
	}
	_T1C = obj;
	_T1D = name;
	_T1E = _tag_fat("type",sizeof(char),5U);
	_T1F = ad;
	_T20 = _T1F->name;
	Cyc_Interface_static_err(_T1C,_T1D,_T1E,_T20);
	return 0;
	_TL39: _T22 = ae;
	_T23 = seen;
	_T24 = obj;
	_T25 = name;
	_T26 = Cyc_Core_identity;
	_T27 = targs;
	_T28 = Cyc_Interface_check_public_type_list(_T22,_T23,_T24,_T25,_T26,
						    _T27);
	if (! _T28) { goto _TL3B;
	}
	_T21 = Cyc_Interface_check_public_aggrdecl(ae,seen,ad);
	goto _TL3C;
	_TL3B: _T21 = 0;
	_TL3C: return _T21;
      }
    case 19: 
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE0 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD8;
	_T29 = _TE0->f1;
	{ struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct * _TE1 = (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct *)_T29;
	  _TDB = _TE1->f1;
	}
      }{ struct _tuple0 * name = _TDB;
	struct Cyc_Absyn_Enumdecl * ed;
	{ struct _handler_cons _TE0;
	  _T2A = &_TE0;
	  _push_handler(_T2A);
	  { int _TE1 = 0;
	    _T2B = setjmp(_TE0.handler);
	    if (! _T2B) { goto _TL3D;
	    }
	    _TE1 = 1;
	    goto _TL3E;
	    _TL3D: _TL3E: if (_TE1) { goto _TL3F;
	    }else { goto _TL41;
	    }
	    _TL41: _T2D = Cyc_Dict_lookup;
	    { struct Cyc_Absyn_Enumdecl * * (* _TE2)(struct Cyc_Dict_Dict,
						     struct _tuple0 *) = (struct Cyc_Absyn_Enumdecl * * (*)(struct Cyc_Dict_Dict,
													    struct _tuple0 *))_T2D;
	      _T2C = _TE2;
	    }_T2E = ae;
	    _T2F = _T2E->enumdecls;
	    _T30 = name;
	    _T31 = _T2C(_T2F,_T30);
	    ed = *_T31;
	    _pop_handler();
	    goto _TL40;
	    _TL3F: _T32 = Cyc_Core_get_exn_thrown();
	    { void * _TE2 = (void *)_T32;
	      void * _TE3;
	      _T33 = (struct Cyc_Dict_Absent_exn_struct *)_TE2;
	      _T34 = _T33->tag;
	      _T35 = Cyc_Dict_Absent;
	      if (_T34 != _T35) { goto _TL42;
	      }
	      { int (* _TE4)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
		_T36 = _TE4;
	      }{ struct Cyc_String_pa_PrintArg_struct _TE4;
		_TE4.tag = 0;
		_TE4.f1 = Cyc_Absynpp_qvar2string(name);
		_T38 = _TE4;
	      }{ struct Cyc_String_pa_PrintArg_struct _TE4 = _T38;
		void * _TE5[1];
		_TE5[0] = &_TE4;
		_T39 = _tag_fat("check_public_type (can't find enum %s)",
				sizeof(char),39U);
		_T3A = _tag_fat(_TE5,sizeof(void *),1);
		_T37 = Cyc_aprintf(_T39,_T3A);
	      }_T36(_T37);
	      goto _TL43;
	      _TL42: _TE3 = _TE2;
	      { void * exn = _TE3;
		_rethrow(exn);
	      }_TL43: ;
	    }_TL40: ;
	  }
	}_T3B = ed;
	_T3C = _T3B->sc;
	_T3D = (int)_T3C;
	if (_T3D != 0) { goto _TL44;
	}
	_T3E = obj;
	_T3F = name;
	_T40 = _tag_fat("enum",sizeof(char),5U);
	_T41 = ed;
	_T42 = _T41->name;
	Cyc_Interface_static_err(_T3E,_T3F,_T40,_T42);
	return 0;
	_TL44: return 1;
      }
    case 22: 
      _T43 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD8;
      _T44 = _T43->f1;
      _T45 = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_T44;
      _T46 = _T45->f1;
      _T47 = _T46.KnownDatatype;
      _T48 = _T47.tag;
      if (_T48 != 2) { goto _TL46;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE0 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD8;
	_T49 = _TE0->f1;
	{ struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _TE1 = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_T49;
	  _T4A = _TE1->f1;
	  _T4B = _T4A.KnownDatatype;
	  _T4C = _T4B.val;
	  { struct Cyc_Absyn_Datatypedecl * _TE2 = *_T4C;
	    _TDA = _TE2;
	  }
	}_TDE = _TE0->f2;
      }{ struct Cyc_Absyn_Datatypedecl * tud0 = _TDA;
	struct Cyc_List_List * targs = _TDE;
	struct Cyc_Absyn_Datatypedecl * tud;
	{ struct _handler_cons _TE0;
	  _T4D = &_TE0;
	  _push_handler(_T4D);
	  { int _TE1 = 0;
	    _T4E = setjmp(_TE0.handler);
	    if (! _T4E) { goto _TL48;
	    }
	    _TE1 = 1;
	    goto _TL49;
	    _TL48: _TL49: if (_TE1) { goto _TL4A;
	    }else { goto _TL4C;
	    }
	    _TL4C: _T50 = Cyc_Dict_lookup;
	    { struct Cyc_Absyn_Datatypedecl * * (* _TE2)(struct Cyc_Dict_Dict,
							 struct _tuple0 *) = (struct Cyc_Absyn_Datatypedecl * * (*)(struct Cyc_Dict_Dict,
														    struct _tuple0 *))_T50;
	      _T4F = _TE2;
	    }_T51 = ae;
	    _T52 = _T51->datatypedecls;
	    _T53 = tud0;
	    _T54 = _T53->name;
	    _T55 = _T4F(_T52,_T54);
	    tud = *_T55;
	    _pop_handler();
	    goto _TL4B;
	    _TL4A: _T56 = Cyc_Core_get_exn_thrown();
	    { void * _TE2 = (void *)_T56;
	      void * _TE3;
	      _T57 = (struct Cyc_Dict_Absent_exn_struct *)_TE2;
	      _T58 = _T57->tag;
	      _T59 = Cyc_Dict_Absent;
	      if (_T58 != _T59) { goto _TL4D;
	      }
	      { int (* _TE4)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
		_T5A = _TE4;
	      }{ struct Cyc_String_pa_PrintArg_struct _TE4;
		_TE4.tag = 0;
		_T5D = tud0;
		_T5E = _T5D->name;
		_TE4.f1 = Cyc_Absynpp_qvar2string(_T5E);
		_T5C = _TE4;
	      }{ struct Cyc_String_pa_PrintArg_struct _TE4 = _T5C;
		void * _TE5[1];
		_TE5[0] = &_TE4;
		_T5F = _tag_fat("check_public_type (can't find datatype %s)",
				sizeof(char),43U);
		_T60 = _tag_fat(_TE5,sizeof(void *),1);
		_T5B = Cyc_aprintf(_T5F,_T60);
	      }_T5A(_T5B);
	      goto _TL4E;
	      _TL4D: _TE3 = _TE2;
	      { void * exn = _TE3;
		_rethrow(exn);
	      }_TL4E: ;
	    }_TL4B: ;
	  }
	}_T61 = tud;
	_T62 = _T61->sc;
	_T63 = (int)_T62;
	if (_T63 != 0) { goto _TL4F;
	}
	_T64 = obj;
	_T65 = name;
	_T66 = _tag_fat("datatype",sizeof(char),9U);
	_T67 = tud;
	_T68 = _T67->name;
	Cyc_Interface_static_err(_T64,_T65,_T66,_T68);
	return 0;
	_TL4F: _T6A = ae;
	_T6B = seen;
	_T6C = obj;
	_T6D = name;
	_T6E = Cyc_Core_identity;
	_T6F = targs;
	_T70 = Cyc_Interface_check_public_type_list(_T6A,_T6B,_T6C,_T6D,_T6E,
						    _T6F);
	if (! _T70) { goto _TL51;
	}
	_T69 = Cyc_Interface_check_public_datatypedecl(ae,seen,tud);
	goto _TL52;
	_TL51: _T69 = 0;
	_TL52: return _T69;
      }_TL46: goto _LL11;
    case 23: 
      _T71 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD8;
      _T72 = _T71->f1;
      _T73 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T72;
      _T74 = _T73->f1;
      _T75 = _T74.KnownDatatypefield;
      _T76 = _T75.tag;
      if (_T76 != 2) { goto _TL53;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE0 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD8;
	_T77 = _TE0->f1;
	{ struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _TE1 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T77;
	  _T78 = _TE1->f1;
	  _T79 = _T78.KnownDatatypefield;
	  _T7A = _T79.val;
	  _TDA = _T7A.f0;
	  _T7B = _TE1->f1;
	  _T7C = _T7B.KnownDatatypefield;
	  _T7D = _T7C.val;
	  _TD9 = _T7D.f1;
	}_TDE = _TE0->f2;
      }{ struct Cyc_Absyn_Datatypedecl * tud0 = _TDA;
	struct Cyc_Absyn_Datatypefield * tuf0 = _TD9;
	struct Cyc_List_List * targs = _TDE;
	struct Cyc_Absyn_Datatypedecl * tud;
	{ struct _handler_cons _TE0;
	  _T7E = &_TE0;
	  _push_handler(_T7E);
	  { int _TE1 = 0;
	    _T7F = setjmp(_TE0.handler);
	    if (! _T7F) { goto _TL55;
	    }
	    _TE1 = 1;
	    goto _TL56;
	    _TL55: _TL56: if (_TE1) { goto _TL57;
	    }else { goto _TL59;
	    }
	    _TL59: _T81 = Cyc_Dict_lookup;
	    { struct Cyc_Absyn_Datatypedecl * * (* _TE2)(struct Cyc_Dict_Dict,
							 struct _tuple0 *) = (struct Cyc_Absyn_Datatypedecl * * (*)(struct Cyc_Dict_Dict,
														    struct _tuple0 *))_T81;
	      _T80 = _TE2;
	    }_T82 = ae;
	    _T83 = _T82->datatypedecls;
	    _T84 = tud0;
	    _T85 = _T84->name;
	    _T86 = _T80(_T83,_T85);
	    tud = *_T86;
	    _pop_handler();
	    goto _TL58;
	    _TL57: _T87 = Cyc_Core_get_exn_thrown();
	    { void * _TE2 = (void *)_T87;
	      void * _TE3;
	      _T88 = (struct Cyc_Dict_Absent_exn_struct *)_TE2;
	      _T89 = _T88->tag;
	      _T8A = Cyc_Dict_Absent;
	      if (_T89 != _T8A) { goto _TL5A;
	      }
	      { int (* _TE4)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
		_T8B = _TE4;
	      }{ struct Cyc_String_pa_PrintArg_struct _TE4;
		_TE4.tag = 0;
		_T8E = tud0;
		_T8F = _T8E->name;
		_TE4.f1 = Cyc_Absynpp_qvar2string(_T8F);
		_T8D = _TE4;
	      }{ struct Cyc_String_pa_PrintArg_struct _TE4 = _T8D;
		void * _TE5[1];
		_TE5[0] = &_TE4;
		_T90 = _tag_fat("check_public_type (can't find datatype %s and search its fields)",
				sizeof(char),65U);
		_T91 = _tag_fat(_TE5,sizeof(void *),1);
		_T8C = Cyc_aprintf(_T90,_T91);
	      }_T8B(_T8C);
	      goto _TL5B;
	      _TL5A: _TE3 = _TE2;
	      { void * exn = _TE3;
		_rethrow(exn);
	      }_TL5B: ;
	    }_TL58: ;
	  }
	}_T92 = tud;
	_T93 = _T92->fields;
	if (_T93 != 0) { goto _TL5C;
	}
	{ int (* _TE0)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
	  _T94 = _TE0;
	}{ struct Cyc_String_pa_PrintArg_struct _TE0;
	  _TE0.tag = 0;
	  _T97 = tud;
	  _T98 = _T97->name;
	  _TE0.f1 = Cyc_Absynpp_qvar2string(_T98);
	  _T96 = _TE0;
	}{ struct Cyc_String_pa_PrintArg_struct _TE0 = _T96;
	  void * _TE1[1];
	  _TE1[0] = &_TE0;
	  _T99 = _tag_fat("check_public_type (datatype %s has no fields)",
			  sizeof(char),46U);
	  _T9A = _tag_fat(_TE1,sizeof(void *),1);
	  _T95 = Cyc_aprintf(_T99,_T9A);
	}_T94(_T95);
	goto _TL5D;
	_TL5C: _TL5D: { struct Cyc_Absyn_Datatypefield * tuf1 = 0;
	  _T9B = tud;
	  _T9C = _T9B->fields;
	  _T9D = _T9C->v;
	  { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T9D;
	    _TL61: if (fs != 0) { goto _TL5F;
	    }else { goto _TL60;
	    }
	    _TL5F: _T9E = tuf0;
	    _T9F = _T9E->name;
	    _TA0 = *_T9F;
	    _TA1 = _TA0.f1;
	    _TA2 = fs;
	    _TA3 = _TA2->hd;
	    _TA4 = (struct Cyc_Absyn_Datatypefield *)_TA3;
	    _TA5 = _TA4->name;
	    _TA6 = *_TA5;
	    _TA7 = _TA6.f1;
	    _TA8 = Cyc_strptrcmp(_TA1,_TA7);
	    if (_TA8 != 0) { goto _TL62;
	    }
	    _TA9 = fs;
	    _TAA = _TA9->hd;
	    tuf1 = (struct Cyc_Absyn_Datatypefield *)_TAA;
	    goto _TL60;
	    _TL62: _TAB = fs;
	    fs = _TAB->tl;
	    goto _TL61;
	    _TL60: ;
	  }if (tuf1 != 0) { goto _TL64;
	  }
	  { int (* _TE0)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
	    _TAC = _TE0;
	  }{ struct Cyc_String_pa_PrintArg_struct _TE0;
	    _TE0.tag = 0;
	    _TAF = tuf0;
	    _TB0 = _TAF->name;
	    _TE0.f1 = Cyc_Absynpp_qvar2string(_TB0);
	    _TAE = _TE0;
	  }{ struct Cyc_String_pa_PrintArg_struct _TE0 = _TAE;
	    void * _TE1[1];
	    _TE1[0] = &_TE0;
	    _TB1 = _tag_fat("check_public_type (can't find datatypefield %s)",
			    sizeof(char),48U);
	    _TB2 = _tag_fat(_TE1,sizeof(void *),1);
	    _TAD = Cyc_aprintf(_TB1,_TB2);
	  }_TAC(_TAD);
	  goto _TL65;
	  _TL64: _TL65: _TB3 = tud;
	  _TB4 = _TB3->sc;
	  _TB5 = (int)_TB4;
	  if (_TB5 != 0) { goto _TL66;
	  }
	  _TB6 = obj;
	  _TB7 = name;
	  _TB8 = _tag_fat("datatype",sizeof(char),9U);
	  _TB9 = tud;
	  _TBA = _TB9->name;
	  Cyc_Interface_static_err(_TB6,_TB7,_TB8,_TBA);
	  return 0;
	  _TL66: _TBB = tud;
	  _TBC = _TBB->sc;
	  _TBD = (int)_TBC;
	  if (_TBD != 1) { goto _TL68;
	  }
	  _TBE = obj;
	  _TBF = name;
	  _TC0 = _tag_fat("datatype",sizeof(char),9U);
	  _TC1 = tud;
	  _TC2 = _TC1->name;
	  Cyc_Interface_abstract_err(_TBE,_TBF,_TC0,_TC2);
	  return 0;
	  _TL68: _TC3 = tuf1;
	  _TC4 = _TC3->sc;
	  _TC5 = (int)_TC4;
	  if (_TC5 != 0) { goto _TL6A;
	  }
	  _TC6 = obj;
	  _TC7 = name;
	  { struct Cyc_String_pa_PrintArg_struct _TE0;
	    _TE0.tag = 0;
	    _TCA = tuf1;
	    _TCB = _TCA->name;
	    _TE0.f1 = Cyc_Absynpp_qvar2string(_TCB);
	    _TC9 = _TE0;
	  }{ struct Cyc_String_pa_PrintArg_struct _TE0 = _TC9;
	    void * _TE1[1];
	    _TE1[0] = &_TE0;
	    _TCC = _tag_fat("field %s of",sizeof(char),12U);
	    _TCD = _tag_fat(_TE1,sizeof(void *),1);
	    _TC8 = Cyc_aprintf(_TCC,_TCD);
	  }_TCE = tud;
	  _TCF = _TCE->name;
	  Cyc_Interface_static_err(_TC6,_TC7,_TC8,_TCF);
	  return 0;
	  _TL6A: _TD1 = ae;
	  _TD2 = seen;
	  _TD3 = obj;
	  _TD4 = name;
	  _TD5 = Cyc_Core_identity;
	  _TD6 = targs;
	  _TD7 = Cyc_Interface_check_public_type_list(_TD1,_TD2,_TD3,_TD4,
						      _TD5,_TD6);
	  if (! _TD7) { goto _TL6C;
	  }
	  _TD0 = Cyc_Interface_check_public_datatypedecl(ae,seen,tud);
	  goto _TL6D;
	  _TL6C: _TD0 = 0;
	  _TL6D: return _TD0;
	}
      }_TL53: goto _LL11;
    default: 
      goto _LL11;
    }
    ;
  default: 
    _LL11: return 1;
  }
  ;
}
 struct _tuple16 {
  struct Cyc_Interface_Ienv * f0;
  struct Cyc_Interface_Ienv * f1;
  long f2;
  struct Cyc_Tcenv_Genv * f3;
  struct Cyc_Interface_Seen * f4;
  struct Cyc_Interface_I * f5;
};
static void Cyc_Interface_extract_aggrdecl(struct _tuple16 * env,struct _tuple0 * x,
					   struct Cyc_Absyn_Aggrdecl * * dp) {
  struct _tuple16 * _T0;
  struct Cyc_Absyn_Aggrdecl * * _T1;
  struct Cyc_Absyn_Aggrdecl * _T2;
  int _T3;
  long _T4;
  struct Cyc_Absyn_Aggrdecl * _T5;
  struct Cyc_Absyn_AggrdeclImpl * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_Absyn_Aggrdecl * _T9;
  struct _tuple0 * _TA;
  struct Cyc_Absyn_Aggrdecl * _TB;
  struct Cyc_Absyn_AggrdeclImpl * _TC;
  long _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct Cyc_Absyn_Aggrdecl * _T10;
  struct _tuple0 * _T11;
  struct Cyc_Absyn_Aggrdecl * _T12;
  struct Cyc_Absyn_Aggrdecl * _T13;
  struct Cyc_Absyn_Aggrdecl * _T14;
  long _T15;
  struct Cyc_Interface_Ienv * _T16;
  struct Cyc_Dict_Dict (* _T17)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Aggrdecl *);
  struct Cyc_Dict_Dict (* _T18)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T19;
  struct Cyc_Dict_Dict _T1A;
  struct _tuple0 * _T1B;
  struct Cyc_Absyn_Aggrdecl * _T1C;
  struct Cyc_Absyn_Aggrdecl * _T1D;
  struct Cyc_Absyn_AggrdeclImpl * _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_Absyn_Aggrdecl * _T21;
  struct _tuple0 * _T22;
  struct Cyc_Absyn_Aggrdecl * _T23;
  struct Cyc_Absyn_Aggrdecl * _T24;
  struct Cyc_Absyn_Aggrdecl * _T25;
  long _T26;
  struct Cyc_Interface_Ienv * _T27;
  struct Cyc_Dict_Dict (* _T28)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Aggrdecl *);
  struct Cyc_Dict_Dict (* _T29)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T2A;
  struct Cyc_Dict_Dict _T2B;
  struct _tuple0 * _T2C;
  struct Cyc_Absyn_Aggrdecl * _T2D;
  long _T2E;
  struct Cyc_Interface_Ienv * _T2F;
  struct Cyc_Dict_Dict (* _T30)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Aggrdecl *);
  struct Cyc_Dict_Dict (* _T31)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T32;
  struct Cyc_Dict_Dict _T33;
  struct _tuple0 * _T34;
  struct Cyc_Absyn_Aggrdecl * _T35;
  int (* _T36)(struct _fat_ptr);
  struct _fat_ptr _T37;
  struct Cyc_Interface_Seen * _T38;
  struct Cyc_Tcenv_Genv * _T39;
  long _T3A;
  struct Cyc_Interface_Ienv * _T3B;
  struct Cyc_Interface_Ienv * _T3C;
  _T0 = env;
  { struct _tuple16 _T3D = *_T0;
    _T3C = _T3D.f0;
    _T3B = _T3D.f1;
    _T3A = _T3D.f2;
    _T39 = _T3D.f3;
    _T38 = _T3D.f4;
  }{ struct Cyc_Interface_Ienv * imp = _T3C;
    struct Cyc_Interface_Ienv * exp = _T3B;
    long check_complete_defs = _T3A;
    struct Cyc_Tcenv_Genv * ae = _T39;
    struct Cyc_Interface_Seen * seen = _T38;
    _T1 = dp;
    { struct Cyc_Absyn_Aggrdecl * d = *_T1;
      _T2 = d;
      { enum Cyc_Absyn_Scope _T3D = _T2->sc;
	_T3 = (int)_T3D;
	switch (_T3) {
	case Cyc_Absyn_Static: 
	  _T4 = check_complete_defs;
	  if (! _T4) { goto _TL6F;
	  }
	  _T5 = d;
	  _T6 = _T5->impl;
	  if (_T6 != 0) { goto _TL6F;
	  }
	  _T7 = _tag_fat("static",sizeof(char),7U);
	  _T8 = _tag_fat("struct/union",sizeof(char),13U);
	  _T9 = d;
	  _TA = _T9->name;
	  Cyc_Interface_fields_err(_T7,_T8,_TA);
	  goto _TL70;
	  _TL6F: _TL70: goto _LL3;
	case Cyc_Absyn_Abstract: 
	  _TB = d;
	  _TC = _TB->impl;
	  if (_TC != 0) { goto _TL71;
	  }
	  _TD = check_complete_defs;
	  if (! _TD) { goto _TL73;
	  }
	  _TE = _tag_fat("abstract",sizeof(char),9U);
	  _TF = _tag_fat("struct/union",sizeof(char),13U);
	  _T10 = d;
	  _T11 = _T10->name;
	  Cyc_Interface_fields_err(_TE,_TF,_T11);
	  goto _TL74;
	  _TL73: _TL74: goto _TL72;
	  _TL71: { struct Cyc_Absyn_Aggrdecl * _T3E = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
	    _T13 = d;
	    *_T3E = *_T13;
	    _T12 = (struct Cyc_Absyn_Aggrdecl *)_T3E;
	  }d = _T12;
	  _T14 = d;
	  _T14->impl = 0;
	  _TL72: _T15 = Cyc_Interface_check_public_aggrdecl(ae,seen,d);
	  if (! _T15) { goto _TL75;
	  }
	  _T16 = exp;
	  _T18 = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T3E)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  struct Cyc_Absyn_Aggrdecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												   struct _tuple0 *,
												   struct Cyc_Absyn_Aggrdecl *))_T18;
	    _T17 = _T3E;
	  }_T19 = exp;
	  _T1A = _T19->aggrdecls;
	  _T1B = x;
	  _T1C = d;
	  _T16->aggrdecls = _T17(_T1A,_T1B,_T1C);
	  goto _TL76;
	  _TL75: _TL76: goto _LL3;
	case Cyc_Absyn_Public: 
	  _T1D = d;
	  _T1E = _T1D->impl;
	  if (_T1E != 0) { goto _TL77;
	  }
	  _T1F = _tag_fat("public",sizeof(char),7U);
	  _T20 = _tag_fat("struct/union",sizeof(char),13U);
	  _T21 = d;
	  _T22 = _T21->name;
	  Cyc_Interface_fields_err(_T1F,_T20,_T22);
	  { struct Cyc_Absyn_Aggrdecl * _T3E = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
	    _T24 = d;
	    *_T3E = *_T24;
	    _T23 = (struct Cyc_Absyn_Aggrdecl *)_T3E;
	  }d = _T23;
	  _T25 = d;
	  _T25->sc = 1U;
	  goto _TL78;
	  _TL77: _TL78: _T26 = Cyc_Interface_check_public_aggrdecl(ae,seen,
								   d);
	  if (! _T26) { goto _TL79;
	  }
	  _T27 = exp;
	  _T29 = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T3E)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  struct Cyc_Absyn_Aggrdecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												   struct _tuple0 *,
												   struct Cyc_Absyn_Aggrdecl *))_T29;
	    _T28 = _T3E;
	  }_T2A = exp;
	  _T2B = _T2A->aggrdecls;
	  _T2C = x;
	  _T2D = d;
	  _T27->aggrdecls = _T28(_T2B,_T2C,_T2D);
	  goto _TL7A;
	  _TL79: _TL7A: goto _LL3;
	case Cyc_Absyn_ExternC: 
	  goto _LLD;
	case Cyc_Absyn_Extern: 
	  _LLD: _T2E = Cyc_Interface_check_public_aggrdecl(ae,seen,d);
	  if (! _T2E) { goto _TL7B;
	  }
	  _T2F = imp;
	  _T31 = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T3E)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  struct Cyc_Absyn_Aggrdecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												   struct _tuple0 *,
												   struct Cyc_Absyn_Aggrdecl *))_T31;
	    _T30 = _T3E;
	  }_T32 = imp;
	  _T33 = _T32->aggrdecls;
	  _T34 = x;
	  _T35 = d;
	  _T2F->aggrdecls = _T30(_T33,_T34,_T35);
	  goto _TL7C;
	  _TL7B: _TL7C: goto _LL3;
	case Cyc_Absyn_Register: 
	  goto _LL11;
	default: 
	  _LL11: { int (* _T3E)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
	    _T36 = _T3E;
	  }_T37 = _tag_fat("add_aggrdecl",sizeof(char),13U);
	  _T36(_T37);
	  goto _LL3;
	}
	_LL3: ;
      }
    }
  }
}
static void Cyc_Interface_extract_enumdecl(struct _tuple16 * env,struct _tuple0 * x,
					   struct Cyc_Absyn_Enumdecl * * dp) {
  struct _tuple16 * _T0;
  struct Cyc_Absyn_Enumdecl * * _T1;
  struct Cyc_Absyn_Enumdecl * _T2;
  int _T3;
  long _T4;
  struct Cyc_Absyn_Enumdecl * _T5;
  struct Cyc_Core_Opt * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_Absyn_Enumdecl * _T9;
  struct _tuple0 * _TA;
  struct Cyc_Absyn_Enumdecl * _TB;
  struct Cyc_Core_Opt * _TC;
  long _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct Cyc_Absyn_Enumdecl * _T10;
  struct _tuple0 * _T11;
  struct Cyc_Absyn_Enumdecl * _T12;
  struct Cyc_Absyn_Enumdecl * _T13;
  struct Cyc_Absyn_Enumdecl * _T14;
  long _T15;
  struct Cyc_Interface_Ienv * _T16;
  struct Cyc_Dict_Dict (* _T17)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Enumdecl *);
  struct Cyc_Dict_Dict (* _T18)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T19;
  struct Cyc_Dict_Dict _T1A;
  struct _tuple0 * _T1B;
  struct Cyc_Absyn_Enumdecl * _T1C;
  struct Cyc_Absyn_Enumdecl * _T1D;
  struct Cyc_Core_Opt * _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_Absyn_Enumdecl * _T21;
  struct _tuple0 * _T22;
  struct Cyc_Absyn_Enumdecl * _T23;
  struct Cyc_Absyn_Enumdecl * _T24;
  struct Cyc_Absyn_Enumdecl * _T25;
  long _T26;
  struct Cyc_Interface_Ienv * _T27;
  struct Cyc_Dict_Dict (* _T28)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Enumdecl *);
  struct Cyc_Dict_Dict (* _T29)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T2A;
  struct Cyc_Dict_Dict _T2B;
  struct _tuple0 * _T2C;
  struct Cyc_Absyn_Enumdecl * _T2D;
  long _T2E;
  struct Cyc_Interface_Ienv * _T2F;
  struct Cyc_Dict_Dict (* _T30)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Enumdecl *);
  struct Cyc_Dict_Dict (* _T31)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T32;
  struct Cyc_Dict_Dict _T33;
  struct _tuple0 * _T34;
  struct Cyc_Absyn_Enumdecl * _T35;
  int (* _T36)(struct _fat_ptr);
  struct _fat_ptr _T37;
  struct Cyc_Interface_Seen * _T38;
  struct Cyc_Tcenv_Genv * _T39;
  long _T3A;
  struct Cyc_Interface_Ienv * _T3B;
  struct Cyc_Interface_Ienv * _T3C;
  _T0 = env;
  { struct _tuple16 _T3D = *_T0;
    _T3C = _T3D.f0;
    _T3B = _T3D.f1;
    _T3A = _T3D.f2;
    _T39 = _T3D.f3;
    _T38 = _T3D.f4;
  }{ struct Cyc_Interface_Ienv * imp = _T3C;
    struct Cyc_Interface_Ienv * exp = _T3B;
    long check_complete_defs = _T3A;
    struct Cyc_Tcenv_Genv * ae = _T39;
    struct Cyc_Interface_Seen * seen = _T38;
    _T1 = dp;
    { struct Cyc_Absyn_Enumdecl * d = *_T1;
      _T2 = d;
      { enum Cyc_Absyn_Scope _T3D = _T2->sc;
	_T3 = (int)_T3D;
	switch (_T3) {
	case Cyc_Absyn_Static: 
	  _T4 = check_complete_defs;
	  if (! _T4) { goto _TL7E;
	  }
	  _T5 = d;
	  _T6 = _T5->fields;
	  if (_T6 != 0) { goto _TL7E;
	  }
	  _T7 = _tag_fat("static",sizeof(char),7U);
	  _T8 = _tag_fat("enum",sizeof(char),5U);
	  _T9 = d;
	  _TA = _T9->name;
	  Cyc_Interface_fields_err(_T7,_T8,_TA);
	  goto _TL7F;
	  _TL7E: _TL7F: goto _LL3;
	case Cyc_Absyn_Abstract: 
	  _TB = d;
	  _TC = _TB->fields;
	  if (_TC != 0) { goto _TL80;
	  }
	  _TD = check_complete_defs;
	  if (! _TD) { goto _TL82;
	  }
	  _TE = _tag_fat("abstract",sizeof(char),9U);
	  _TF = _tag_fat("enum",sizeof(char),5U);
	  _T10 = d;
	  _T11 = _T10->name;
	  Cyc_Interface_fields_err(_TE,_TF,_T11);
	  goto _TL83;
	  _TL82: _TL83: goto _TL81;
	  _TL80: { struct Cyc_Absyn_Enumdecl * _T3E = _cycalloc(sizeof(struct Cyc_Absyn_Enumdecl));
	    _T13 = d;
	    *_T3E = *_T13;
	    _T12 = (struct Cyc_Absyn_Enumdecl *)_T3E;
	  }d = _T12;
	  _T14 = d;
	  _T14->fields = 0;
	  _TL81: _T15 = Cyc_Interface_check_public_enumdecl(ae,seen,d);
	  if (! _T15) { goto _TL84;
	  }
	  _T16 = exp;
	  _T18 = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T3E)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  struct Cyc_Absyn_Enumdecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												   struct _tuple0 *,
												   struct Cyc_Absyn_Enumdecl *))_T18;
	    _T17 = _T3E;
	  }_T19 = exp;
	  _T1A = _T19->enumdecls;
	  _T1B = x;
	  _T1C = d;
	  _T16->enumdecls = _T17(_T1A,_T1B,_T1C);
	  goto _TL85;
	  _TL84: _TL85: goto _LL3;
	case Cyc_Absyn_Public: 
	  _T1D = d;
	  _T1E = _T1D->fields;
	  if (_T1E != 0) { goto _TL86;
	  }
	  _T1F = _tag_fat("public",sizeof(char),7U);
	  _T20 = _tag_fat("enum",sizeof(char),5U);
	  _T21 = d;
	  _T22 = _T21->name;
	  Cyc_Interface_fields_err(_T1F,_T20,_T22);
	  { struct Cyc_Absyn_Enumdecl * _T3E = _cycalloc(sizeof(struct Cyc_Absyn_Enumdecl));
	    _T24 = d;
	    *_T3E = *_T24;
	    _T23 = (struct Cyc_Absyn_Enumdecl *)_T3E;
	  }d = _T23;
	  _T25 = d;
	  _T25->sc = 1U;
	  goto _TL87;
	  _TL86: _TL87: _T26 = Cyc_Interface_check_public_enumdecl(ae,seen,
								   d);
	  if (! _T26) { goto _TL88;
	  }
	  _T27 = exp;
	  _T29 = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T3E)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  struct Cyc_Absyn_Enumdecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												   struct _tuple0 *,
												   struct Cyc_Absyn_Enumdecl *))_T29;
	    _T28 = _T3E;
	  }_T2A = exp;
	  _T2B = _T2A->enumdecls;
	  _T2C = x;
	  _T2D = d;
	  _T27->enumdecls = _T28(_T2B,_T2C,_T2D);
	  goto _TL89;
	  _TL88: _TL89: goto _LL3;
	case Cyc_Absyn_ExternC: 
	  goto _LLD;
	case Cyc_Absyn_Extern: 
	  _LLD: _T2E = Cyc_Interface_check_public_enumdecl(ae,seen,d);
	  if (! _T2E) { goto _TL8A;
	  }
	  _T2F = imp;
	  _T31 = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T3E)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  struct Cyc_Absyn_Enumdecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												   struct _tuple0 *,
												   struct Cyc_Absyn_Enumdecl *))_T31;
	    _T30 = _T3E;
	  }_T32 = imp;
	  _T33 = _T32->enumdecls;
	  _T34 = x;
	  _T35 = d;
	  _T2F->enumdecls = _T30(_T33,_T34,_T35);
	  goto _TL8B;
	  _TL8A: _TL8B: goto _LL3;
	case Cyc_Absyn_Register: 
	  goto _LL11;
	default: 
	  _LL11: { int (* _T3E)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
	    _T36 = _T3E;
	  }_T37 = _tag_fat("add_enumdecl",sizeof(char),13U);
	  _T36(_T37);
	}
	_LL3: ;
      }
    }
  }
}
static void Cyc_Interface_extract_xdatatypefielddecl(struct Cyc_Interface_I * i,
						     struct Cyc_Absyn_Datatypedecl * d,
						     struct Cyc_Absyn_Datatypefield * f) {
  struct Cyc_Absyn_Datatypefield * _T0;
  int _T1;
  struct Cyc_Interface_I * _T2;
  struct Cyc_Interface_I * _T3;
  int (* _T4)(struct _fat_ptr);
  struct _fat_ptr _T5;
  struct Cyc_Interface_Ienv * _T6;
  struct Cyc_Dict_Dict (* _T7)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Tcdecl_Xdatatypefielddecl *);
  struct Cyc_Dict_Dict (* _T8)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T9;
  struct Cyc_Dict_Dict _TA;
  struct Cyc_Absyn_Datatypefield * _TB;
  struct _tuple0 * _TC;
  struct Cyc_Tcdecl_Xdatatypefielddecl * _TD;
  struct Cyc_Interface_Ienv * env;
  _T0 = f;
  { enum Cyc_Absyn_Scope _TE = _T0->sc;
    _T1 = (int)_TE;
    switch (_T1) {
    case Cyc_Absyn_Static: 
      return;
    case Cyc_Absyn_Extern: 
      _T2 = i;
      env = _T2->imports;
      goto _LL0;
    case Cyc_Absyn_Public: 
      _T3 = i;
      env = _T3->exports;
      goto _LL0;
    default: 
      { int (* _TF)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
	_T4 = _TF;
      }_T5 = _tag_fat("add_xdatatypefielddecl",sizeof(char),23U);
      _T4(_T5);
    }
    _LL0: ;
  }_T6 = env;
  _T8 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _TE)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Tcdecl_Xdatatypefielddecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
																	   struct _tuple0 *,
																	   struct Cyc_Tcdecl_Xdatatypefielddecl *))_T8;
    _T7 = _TE;
  }_T9 = env;
  _TA = _T9->xdatatypefielddecls;
  _TB = f;
  _TC = _TB->name;
  { struct Cyc_Tcdecl_Xdatatypefielddecl * _TE = _cycalloc(sizeof(struct Cyc_Tcdecl_Xdatatypefielddecl));
    _TE->base = d;
    _TE->field = f;
    _TD = (struct Cyc_Tcdecl_Xdatatypefielddecl *)_TE;
  }_T6->xdatatypefielddecls = _T7(_TA,_TC,_TD);
}
static void Cyc_Interface_extract_datatypedecl(struct _tuple16 * env,struct _tuple0 * x,
					       struct Cyc_Absyn_Datatypedecl * * dp) {
  struct _tuple16 * _T0;
  struct Cyc_Absyn_Datatypedecl * * _T1;
  struct Cyc_Absyn_Datatypedecl * _T2;
  int _T3;
  struct Cyc_Absyn_Datatypedecl * _T4;
  long _T5;
  long _T6;
  struct Cyc_Absyn_Datatypedecl * _T7;
  struct Cyc_Core_Opt * _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct Cyc_Absyn_Datatypedecl * _TB;
  struct _tuple0 * _TC;
  struct Cyc_Absyn_Datatypedecl * _TD;
  struct Cyc_Core_Opt * _TE;
  struct Cyc_Absyn_Datatypedecl * _TF;
  long _T10;
  long _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc_Absyn_Datatypedecl * _T14;
  struct _tuple0 * _T15;
  struct Cyc_Absyn_Datatypedecl * _T16;
  struct Cyc_Absyn_Datatypedecl * _T17;
  struct Cyc_Absyn_Datatypedecl * _T18;
  long _T19;
  struct Cyc_Interface_Ienv * _T1A;
  struct Cyc_Dict_Dict (* _T1B)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Datatypedecl *);
  struct Cyc_Dict_Dict (* _T1C)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T1D;
  struct Cyc_Dict_Dict _T1E;
  struct _tuple0 * _T1F;
  struct Cyc_Absyn_Datatypedecl * _T20;
  struct Cyc_Absyn_Datatypedecl * _T21;
  struct Cyc_Absyn_Datatypedecl * _T22;
  struct Cyc_Absyn_Datatypedecl * _T23;
  long _T24;
  struct Cyc_Absyn_Datatypedecl * _T25;
  struct Cyc_Core_Opt * _T26;
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  struct Cyc_Absyn_Datatypedecl * _T29;
  struct _tuple0 * _T2A;
  struct Cyc_Absyn_Datatypedecl * _T2B;
  long _T2C;
  struct Cyc_Absyn_Datatypedecl * _T2D;
  long _T2E;
  struct Cyc_Absyn_Datatypedecl * _T2F;
  struct Cyc_Core_Opt * _T30;
  struct Cyc_Absyn_Datatypedecl * _T31;
  struct Cyc_Core_Opt * _T32;
  void * _T33;
  struct Cyc_Absyn_Datatypedecl * _T34;
  struct Cyc_Interface_I * _T35;
  struct Cyc_Absyn_Datatypedecl * _T36;
  struct Cyc_List_List * _T37;
  void * _T38;
  struct Cyc_Absyn_Datatypefield * _T39;
  struct Cyc_List_List * _T3A;
  struct Cyc_Interface_Ienv * _T3B;
  struct Cyc_Dict_Dict (* _T3C)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Datatypedecl *);
  struct Cyc_Dict_Dict (* _T3D)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T3E;
  struct Cyc_Dict_Dict _T3F;
  struct _tuple0 * _T40;
  struct Cyc_Absyn_Datatypedecl * _T41;
  int (* _T42)(struct _fat_ptr);
  struct _fat_ptr _T43;
  long _T44;
  struct Cyc_Absyn_Datatypedecl * _T45;
  long _T46;
  struct Cyc_Absyn_Datatypedecl * _T47;
  struct Cyc_Core_Opt * _T48;
  struct Cyc_Absyn_Datatypedecl * _T49;
  struct Cyc_Absyn_Datatypedecl * _T4A;
  struct Cyc_Absyn_Datatypedecl * _T4B;
  struct Cyc_Core_Opt * _T4C;
  struct Cyc_Core_Opt * _T4D;
  void * _T4E;
  struct Cyc_Absyn_Datatypedecl * _T4F;
  struct Cyc_Interface_I * _T50;
  struct Cyc_Absyn_Datatypedecl * _T51;
  struct Cyc_List_List * _T52;
  void * _T53;
  struct Cyc_Absyn_Datatypefield * _T54;
  struct Cyc_List_List * _T55;
  struct Cyc_Interface_Ienv * _T56;
  struct Cyc_Dict_Dict (* _T57)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Datatypedecl *);
  struct Cyc_Dict_Dict (* _T58)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T59;
  struct Cyc_Dict_Dict _T5A;
  struct _tuple0 * _T5B;
  struct Cyc_Absyn_Datatypedecl * _T5C;
  int (* _T5D)(struct _fat_ptr);
  struct _fat_ptr _T5E;
  struct Cyc_Interface_I * _T5F;
  struct Cyc_Interface_Seen * _T60;
  struct Cyc_Tcenv_Genv * _T61;
  long _T62;
  struct Cyc_Interface_Ienv * _T63;
  struct Cyc_Interface_Ienv * _T64;
  _T0 = env;
  { struct _tuple16 _T65 = *_T0;
    _T64 = _T65.f0;
    _T63 = _T65.f1;
    _T62 = _T65.f2;
    _T61 = _T65.f3;
    _T60 = _T65.f4;
    _T5F = _T65.f5;
  }{ struct Cyc_Interface_Ienv * imp = _T64;
    struct Cyc_Interface_Ienv * exp = _T63;
    long check_complete_defs = _T62;
    struct Cyc_Tcenv_Genv * ae = _T61;
    struct Cyc_Interface_Seen * seen = _T60;
    struct Cyc_Interface_I * i = _T5F;
    _T1 = dp;
    { struct Cyc_Absyn_Datatypedecl * d = *_T1;
      _T2 = d;
      { enum Cyc_Absyn_Scope _T65 = _T2->sc;
	_T3 = (int)_T65;
	switch (_T3) {
	case Cyc_Absyn_Static: 
	  _T4 = d;
	  _T5 = _T4->is_extensible;
	  if (_T5) { goto _TL8E;
	  }else { goto _TL90;
	  }
	  _TL90: _T6 = check_complete_defs;
	  if (! _T6) { goto _TL8E;
	  }
	  _T7 = d;
	  _T8 = _T7->fields;
	  if (_T8 != 0) { goto _TL8E;
	  }
	  _T9 = _tag_fat("static",sizeof(char),7U);
	  _TA = _tag_fat("datatype",sizeof(char),9U);
	  _TB = d;
	  _TC = _TB->name;
	  Cyc_Interface_fields_err(_T9,_TA,_TC);
	  goto _TL8F;
	  _TL8E: _TL8F: goto _LL3;
	case Cyc_Absyn_Abstract: 
	  _TD = d;
	  _TE = _TD->fields;
	  if (_TE != 0) { goto _TL91;
	  }
	  _TF = d;
	  _T10 = _TF->is_extensible;
	  if (_T10) { goto _TL93;
	  }else { goto _TL95;
	  }
	  _TL95: _T11 = check_complete_defs;
	  if (! _T11) { goto _TL93;
	  }
	  _T12 = _tag_fat("abstract",sizeof(char),9U);
	  _T13 = _tag_fat("datatype",sizeof(char),9U);
	  _T14 = d;
	  _T15 = _T14->name;
	  Cyc_Interface_fields_err(_T12,_T13,_T15);
	  goto _TL94;
	  _TL93: _TL94: goto _TL92;
	  _TL91: { struct Cyc_Absyn_Datatypedecl * _T66 = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
	    _T17 = d;
	    *_T66 = *_T17;
	    _T16 = (struct Cyc_Absyn_Datatypedecl *)_T66;
	  }d = _T16;
	  _T18 = d;
	  _T18->fields = 0;
	  _TL92: _T19 = Cyc_Interface_check_public_datatypedecl(ae,seen,d);
	  if (! _T19) { goto _TL96;
	  }
	  _T1A = exp;
	  _T1C = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T66)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  struct Cyc_Absyn_Datatypedecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												       struct _tuple0 *,
												       struct Cyc_Absyn_Datatypedecl *))_T1C;
	    _T1B = _T66;
	  }_T1D = exp;
	  _T1E = _T1D->datatypedecls;
	  _T1F = x;
	  _T20 = d;
	  _T1A->datatypedecls = _T1B(_T1E,_T1F,_T20);
	  goto _TL97;
	  _TL96: _TL97: goto _LL3;
	case Cyc_Absyn_Public: 
	  { struct Cyc_Absyn_Datatypedecl * _T66 = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
	    _T22 = d;
	    *_T66 = *_T22;
	    _T21 = (struct Cyc_Absyn_Datatypedecl *)_T66;
	  }d = _T21;
	  _T23 = d;
	  _T24 = _T23->is_extensible;
	  if (_T24) { goto _TL98;
	  }else { goto _TL9A;
	  }
	  _TL9A: _T25 = d;
	  _T26 = _T25->fields;
	  if (_T26 != 0) { goto _TL98;
	  }
	  _T27 = _tag_fat("public",sizeof(char),7U);
	  _T28 = _tag_fat("datatype",sizeof(char),9U);
	  _T29 = d;
	  _T2A = _T29->name;
	  Cyc_Interface_fields_err(_T27,_T28,_T2A);
	  _T2B = d;
	  _T2B->sc = 1U;
	  goto _TL99;
	  _TL98: _TL99: _T2C = Cyc_Interface_check_public_datatypedecl(ae,
								       seen,
								       d);
	  if (! _T2C) { goto _TL9B;
	  }
	  _T2D = d;
	  _T2E = _T2D->is_extensible;
	  if (! _T2E) { goto _TL9D;
	  }
	  _T2F = d;
	  _T30 = _T2F->fields;
	  if (_T30 == 0) { goto _TL9D;
	  }
	  _T31 = d;
	  _T32 = _T31->fields;
	  _T33 = _T32->v;
	  { struct Cyc_List_List * fields = (struct Cyc_List_List *)_T33;
	    _T34 = d;
	    _T34->fields = 0;
	    { struct Cyc_List_List * f = fields;
	      _TLA2: if (f != 0) { goto _TLA0;
	      }else { goto _TLA1;
	      }
	      _TLA0: _T35 = i;
	      _T36 = d;
	      _T37 = f;
	      _T38 = _T37->hd;
	      _T39 = (struct Cyc_Absyn_Datatypefield *)_T38;
	      Cyc_Interface_extract_xdatatypefielddecl(_T35,_T36,_T39);
	      _T3A = f;
	      f = _T3A->tl;
	      goto _TLA2;
	      _TLA1: ;
	    }
	  }goto _TL9E;
	  _TL9D: _TL9E: _T3B = exp;
	  _T3D = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T66)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  struct Cyc_Absyn_Datatypedecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												       struct _tuple0 *,
												       struct Cyc_Absyn_Datatypedecl *))_T3D;
	    _T3C = _T66;
	  }_T3E = exp;
	  _T3F = _T3E->datatypedecls;
	  _T40 = x;
	  _T41 = d;
	  _T3B->datatypedecls = _T3C(_T3F,_T40,_T41);
	  goto _TL9C;
	  _TL9B: _TL9C: goto _LL3;
	case Cyc_Absyn_ExternC: 
	  { int (* _T66)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
	    _T42 = _T66;
	  }_T43 = _tag_fat("extract_datatypedecl",sizeof(char),21U);
	  _T42(_T43);
	case Cyc_Absyn_Extern: 
	  _T44 = Cyc_Interface_check_public_datatypedecl(ae,seen,d);
	  if (! _T44) { goto _TLA3;
	  }
	  _T45 = d;
	  _T46 = _T45->is_extensible;
	  if (! _T46) { goto _TLA5;
	  }
	  _T47 = d;
	  _T48 = _T47->fields;
	  if (_T48 == 0) { goto _TLA5;
	  }
	  { struct Cyc_Absyn_Datatypedecl * _T66 = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
	    _T4A = d;
	    *_T66 = *_T4A;
	    _T49 = (struct Cyc_Absyn_Datatypedecl *)_T66;
	  }d = _T49;
	  _T4B = d;
	  _T4C = _T4B->fields;
	  _T4D = _check_null(_T4C);
	  _T4E = _T4D->v;
	  { struct Cyc_List_List * fields = (struct Cyc_List_List *)_T4E;
	    _T4F = d;
	    _T4F->fields = 0;
	    { struct Cyc_List_List * f = fields;
	      _TLAA: if (f != 0) { goto _TLA8;
	      }else { goto _TLA9;
	      }
	      _TLA8: _T50 = i;
	      _T51 = d;
	      _T52 = f;
	      _T53 = _T52->hd;
	      _T54 = (struct Cyc_Absyn_Datatypefield *)_T53;
	      Cyc_Interface_extract_xdatatypefielddecl(_T50,_T51,_T54);
	      _T55 = f;
	      f = _T55->tl;
	      goto _TLAA;
	      _TLA9: ;
	    }_T56 = imp;
	    _T58 = Cyc_Dict_insert;
	    { struct Cyc_Dict_Dict (* _T66)(struct Cyc_Dict_Dict,struct _tuple0 *,
					    struct Cyc_Absyn_Datatypedecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													 struct _tuple0 *,
													 struct Cyc_Absyn_Datatypedecl *))_T58;
	      _T57 = _T66;
	    }_T59 = imp;
	    _T5A = _T59->datatypedecls;
	    _T5B = x;
	    _T5C = d;
	    _T56->datatypedecls = _T57(_T5A,_T5B,_T5C);
	  }goto _TLA6;
	  _TLA5: _TLA6: goto _TLA4;
	  _TLA3: _TLA4: goto _LL3;
	case Cyc_Absyn_Register: 
	  goto _LL11;
	default: 
	  _LL11: { int (* _T66)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
	    _T5D = _T66;
	  }_T5E = _tag_fat("add_datatypedecl",sizeof(char),17U);
	  _T5D(_T5E);
	  goto _LL3;
	}
	_LL3: ;
      }
    }
  }
}
static void Cyc_Interface_extract_typedef(struct _tuple16 * env,struct _tuple0 * x,
					  struct Cyc_Absyn_Typedefdecl * d) {
  struct _tuple16 * _T0;
  long _T1;
  struct Cyc_Interface_Ienv * _T2;
  struct Cyc_Dict_Dict (* _T3)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Typedefdecl *);
  struct Cyc_Dict_Dict (* _T4)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T5;
  struct Cyc_Dict_Dict _T6;
  struct _tuple0 * _T7;
  struct Cyc_Absyn_Typedefdecl * _T8;
  struct Cyc_Interface_Seen * _T9;
  struct Cyc_Tcenv_Genv * _TA;
  struct Cyc_Interface_Ienv * _TB;
  _T0 = env;
  { struct _tuple16 _TC = *_T0;
    _TB = _TC.f1;
    _TA = _TC.f3;
    _T9 = _TC.f4;
  }{ struct Cyc_Interface_Ienv * exp = _TB;
    struct Cyc_Tcenv_Genv * ae = _TA;
    struct Cyc_Interface_Seen * seen = _T9;
    _T1 = Cyc_Interface_check_public_typedefdecl(ae,seen,d);
    if (! _T1) { goto _TLAB;
    }
    _T2 = exp;
    _T4 = Cyc_Dict_insert;
    { struct Cyc_Dict_Dict (* _TC)(struct Cyc_Dict_Dict,struct _tuple0 *,
				   struct Cyc_Absyn_Typedefdecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
											       struct _tuple0 *,
											       struct Cyc_Absyn_Typedefdecl *))_T4;
      _T3 = _TC;
    }_T5 = exp;
    _T6 = _T5->typedefdecls;
    _T7 = x;
    _T8 = d;
    _T2->typedefdecls = _T3(_T6,_T7,_T8);
    goto _TLAC;
    _TLAB: _TLAC: ;
  }
}
 struct _tuple17 {
  void * f0;
  long f1;
};
static void Cyc_Interface_extract_ordinarie(struct _tuple16 * env,struct _tuple0 * x,
					    struct _tuple17 * v) {
  struct _tuple16 * _T0;
  struct _tuple17 * _T1;
  struct _tuple17 _T2;
  int * _T3;
  unsigned int _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  struct Cyc_Absyn_Fndecl * _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  struct Cyc_Absyn_Fndecl * _T8;
  struct Cyc_Absyn_Vardecl * _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  struct Cyc_Absyn_Vardecl * _TB;
  struct Cyc_Absyn_Fndecl * _TC;
  void * _TD;
  struct Cyc_Absyn_Vardecl * _TE;
  struct Cyc_Absyn_Vardecl * _TF;
  struct Cyc_Absyn_Vardecl * _T10;
  struct Cyc_Absyn_Vardecl * _T11;
  struct Cyc_Absyn_Vardecl * _T12;
  struct Cyc_Absyn_Fndecl * _T13;
  struct Cyc_Absyn_Stmt * _T14;
  struct Cyc_Absyn_Vardecl * _T15;
  struct Cyc_Absyn_Vardecl * _T16;
  struct Cyc_Absyn_Exp * _T17;
  struct Cyc_Absyn_Vardecl * _T18;
  struct Cyc_Absyn_Vardecl * _T19;
  struct Cyc_Absyn_Vardecl * _T1A;
  struct Cyc_Absyn_Vardecl * _T1B;
  int _T1C;
  long _T1D;
  struct Cyc_Absyn_Vardecl * _T1E;
  void * _T1F;
  long _T20;
  struct _fat_ptr _T21;
  struct Cyc_Absyn_Vardecl * _T22;
  struct _tuple0 * _T23;
  int (* _T24)(struct _fat_ptr);
  struct _fat_ptr _T25;
  long _T26;
  struct Cyc_Absyn_Vardecl * _T27;
  void * _T28;
  long _T29;
  struct _fat_ptr _T2A;
  struct Cyc_Absyn_Vardecl * _T2B;
  struct _tuple0 * _T2C;
  long _T2D;
  struct Cyc_Interface_Ienv * _T2E;
  struct Cyc_Dict_Dict (* _T2F)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Vardecl *);
  struct Cyc_Dict_Dict (* _T30)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T31;
  struct Cyc_Dict_Dict _T32;
  struct _tuple0 * _T33;
  struct Cyc_Absyn_Vardecl * _T34;
  long _T35;
  struct Cyc_Interface_Ienv * _T36;
  struct Cyc_Dict_Dict (* _T37)(struct Cyc_Dict_Dict,struct _tuple0 *,struct Cyc_Absyn_Vardecl *);
  struct Cyc_Dict_Dict (* _T38)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Interface_Ienv * _T39;
  struct Cyc_Dict_Dict _T3A;
  struct _tuple0 * _T3B;
  struct Cyc_Absyn_Vardecl * _T3C;
  struct Cyc_Interface_Seen * _T3D;
  struct Cyc_Tcenv_Genv * _T3E;
  long _T3F;
  struct Cyc_Interface_Ienv * _T40;
  struct Cyc_Interface_Ienv * _T41;
  _T0 = env;
  { struct _tuple16 _T42 = *_T0;
    _T41 = _T42.f0;
    _T40 = _T42.f1;
    _T3F = _T42.f2;
    _T3E = _T42.f3;
    _T3D = _T42.f4;
  }{ struct Cyc_Interface_Ienv * imp = _T41;
    struct Cyc_Interface_Ienv * exp = _T40;
    long check_complete_defs = _T3F;
    struct Cyc_Tcenv_Genv * ae = _T3E;
    struct Cyc_Interface_Seen * seen = _T3D;
    _T1 = v;
    _T2 = *_T1;
    { void * _T42 = _T2.f0;
      struct Cyc_Absyn_Vardecl * _T43;
      struct Cyc_Absyn_Fndecl * _T44;
      _T3 = (int *)_T42;
      _T4 = *_T3;
      switch (_T4) {
      case 2: 
	{ struct Cyc_Absyn_Funname_b_Absyn_Binding_struct * _T45 = (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct *)_T42;
	  _T44 = _T45->f1;
	}{ struct Cyc_Absyn_Fndecl * fd = _T44;
	  struct Cyc_Absyn_Vardecl * vd;
	  vd = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
	  _T5 = vd;
	  _T6 = fd;
	  _T5->sc = _T6->sc;
	  _T7 = vd;
	  _T8 = fd;
	  _T7->name = _T8->name;
	  _T9 = vd;
	  _T9->varloc = 0U;
	  _TA = vd;
	  _TA->tq = Cyc_Absyn_empty_tqual(0U);
	  _TB = vd;
	  _TC = fd;
	  _TD = _TC->cached_type;
	  _TB->type = _check_null(_TD);
	  _TE = vd;
	  _TE->initializer = 0;
	  _TF = vd;
	  _TF->rgn = 0;
	  _T10 = vd;
	  _T10->attributes = 0;
	  _T11 = vd;
	  _T11->escapes = 0;
	  _T12 = vd;
	  _T13 = fd;
	  _T14 = _T13->body;
	  _T12->is_proto = _T14 != 0;
	  _T15 = vd;
	  _T15->rename = 0;
	  check_complete_defs = 0;
	  _T43 = vd;
	  goto _LL7;
	}
      case 1: 
	{ struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T45 = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_T42;
	  _T43 = _T45->f1;
	}_LL7: { struct Cyc_Absyn_Vardecl * d = _T43;
	  _T16 = d;
	  _T17 = _T16->initializer;
	  if (_T17 == 0) { goto _TLAE;
	  }
	  { struct Cyc_Absyn_Vardecl * _T45 = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
	    _T19 = d;
	    *_T45 = *_T19;
	    _T18 = (struct Cyc_Absyn_Vardecl *)_T45;
	  }d = _T18;
	  _T1A = d;
	  _T1A->initializer = 0;
	  goto _TLAF;
	  _TLAE: _TLAF: _T1B = d;
	  { enum Cyc_Absyn_Scope _T45 = _T1B->sc;
	    _T1C = (int)_T45;
	    switch (_T1C) {
	    case Cyc_Absyn_Static: 
	      _T1D = check_complete_defs;
	      if (! _T1D) { goto _TLB1;
	      }
	      _T1E = d;
	      _T1F = _T1E->type;
	      _T20 = Cyc_Tcutil_is_function_type(_T1F);
	      if (! _T20) { goto _TLB1;
	      }
	      _T21 = _tag_fat("static",sizeof(char),7U);
	      _T22 = d;
	      _T23 = _T22->name;
	      Cyc_Interface_body_err(_T21,_T23);
	      goto _TLB2;
	      _TLB1: _TLB2: goto _LLA;
	    case Cyc_Absyn_Register: 
	      goto _LL10;
	    case Cyc_Absyn_Abstract: 
	      _LL10: { int (* _T46)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Interface_invalid_arg;
		_T24 = _T46;
	      }_T25 = _tag_fat("extract_ordinarie",sizeof(char),18U);
	      _T24(_T25);
	    case Cyc_Absyn_Public: 
	      _T26 = check_complete_defs;
	      if (! _T26) { goto _TLB3;
	      }
	      _T27 = d;
	      _T28 = _T27->type;
	      _T29 = Cyc_Tcutil_is_function_type(_T28);
	      if (! _T29) { goto _TLB3;
	      }
	      _T2A = _tag_fat("public",sizeof(char),7U);
	      _T2B = d;
	      _T2C = _T2B->name;
	      Cyc_Interface_body_err(_T2A,_T2C);
	      goto _TLB4;
	      _TLB3: _TLB4: _T2D = Cyc_Interface_check_public_vardecl(ae,
								      seen,
								      d);
	      if (! _T2D) { goto _TLB5;
	      }
	      _T2E = exp;
	      _T30 = Cyc_Dict_insert;
	      { struct Cyc_Dict_Dict (* _T46)(struct Cyc_Dict_Dict,struct _tuple0 *,
					      struct Cyc_Absyn_Vardecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												      struct _tuple0 *,
												      struct Cyc_Absyn_Vardecl *))_T30;
		_T2F = _T46;
	      }_T31 = exp;
	      _T32 = _T31->vardecls;
	      _T33 = x;
	      _T34 = d;
	      _T2E->vardecls = _T2F(_T32,_T33,_T34);
	      goto _TLB6;
	      _TLB5: _TLB6: goto _LLA;
	    case Cyc_Absyn_ExternC: 
	      goto _LL16;
	    case Cyc_Absyn_Extern: 
	      _LL16: goto _LL18;
	    default: 
	      _LL18: _T35 = Cyc_Interface_check_public_vardecl(ae,seen,d);
	      if (! _T35) { goto _TLB7;
	      }
	      _T36 = imp;
	      _T38 = Cyc_Dict_insert;
	      { struct Cyc_Dict_Dict (* _T46)(struct Cyc_Dict_Dict,struct _tuple0 *,
					      struct Cyc_Absyn_Vardecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												      struct _tuple0 *,
												      struct Cyc_Absyn_Vardecl *))_T38;
		_T37 = _T46;
	      }_T39 = imp;
	      _T3A = _T39->vardecls;
	      _T3B = x;
	      _T3C = d;
	      _T36->vardecls = _T37(_T3A,_T3B,_T3C);
	      goto _TLB8;
	      _TLB7: _TLB8: goto _LLA;
	    }
	    _LLA: ;
	  }goto _LL3;
	}
      default: 
	goto _LL3;
      }
      _LL3: ;
    }
  }
}
 struct _tuple18 {
  void * f0;
  void * f1;
};
static struct Cyc_List_List * Cyc_Interface_remove_decl_from_list(struct Cyc_List_List * l,
								  struct Cyc_Absyn_Decl * d) {
  struct _tuple18 _T0;
  struct Cyc_Absyn_Decl * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_Absyn_Decl * _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  void * _T8;
  int * _T9;
  int _TA;
  void * _TB;
  void * _TC;
  struct Cyc_Absyn_Typedefdecl * _TD;
  struct _tuple0 * _TE;
  struct Cyc_Absyn_Typedefdecl * _TF;
  struct _tuple0 * _T10;
  int _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_Absyn_Decl * _T14;
  struct Cyc_List_List * _T15;
  void * _T16;
  int * _T17;
  int _T18;
  void * _T19;
  void * _T1A;
  struct Cyc_Absyn_Enumdecl * _T1B;
  struct _tuple0 * _T1C;
  struct Cyc_Absyn_Enumdecl * _T1D;
  struct _tuple0 * _T1E;
  int _T1F;
  struct Cyc_Absyn_Enumdecl * _T20;
  enum Cyc_Absyn_Scope _T21;
  int _T22;
  struct Cyc_Absyn_Enumdecl * _T23;
  struct Cyc_Absyn_Enumdecl * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_Absyn_Decl * _T27;
  struct Cyc_List_List * _T28;
  void * _T29;
  int * _T2A;
  int _T2B;
  void * _T2C;
  void * _T2D;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T2E;
  struct Cyc_Absyn_Vardecl * * _T2F;
  void * _T30;
  struct Cyc_Absyn_Vardecl * * _T31;
  struct Cyc_Absyn_Vardecl * _T32;
  struct _tuple0 * _T33;
  struct Cyc_Absyn_Vardecl * _T34;
  struct _tuple0 * _T35;
  int _T36;
  struct Cyc_Absyn_Vardecl * * _T37;
  struct Cyc_Absyn_Vardecl * _T38;
  enum Cyc_Absyn_Scope _T39;
  int _T3A;
  struct Cyc_Absyn_Vardecl * * _T3B;
  struct Cyc_Absyn_Vardecl * _T3C;
  struct Cyc_Absyn_Vardecl * _T3D;
  struct Cyc_List_List * _T3E;
  struct Cyc_List_List * _T3F;
  struct Cyc_Absyn_Decl * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  struct Cyc_List_List * _T43;
  void * _T44;
  struct Cyc_List_List * _T45;
  struct Cyc_List_List * _T46;
  struct Cyc_Absyn_Decl * _T47;
  if (l != 0) { goto _TLB9;
  }
  return 0;
  _TLB9: { struct _tuple18 _T48;
    _T1 = d;
    _T48.f0 = _T1->r;
    _T2 = l;
    _T3 = _T2->hd;
    _T4 = (struct Cyc_Absyn_Decl *)_T3;
    _T48.f1 = _T4->r;
    _T0 = _T48;
  }{ struct _tuple18 _T48 = _T0;
    struct Cyc_Absyn_Vardecl * _T49;
    struct Cyc_Absyn_Enumdecl * _T4A;
    struct Cyc_Absyn_Typedefdecl * _T4B;
    void * _T4C;
    _T5 = _T48.f0;
    _T6 = (int *)_T5;
    _T7 = *_T6;
    switch (_T7) {
    case 8: 
      _T8 = _T48.f1;
      _T9 = (int *)_T8;
      _TA = *_T9;
      if (_TA != 8) { goto _TLBC;
      }
      _TB = _T48.f0;
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T4D = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_TB;
	_T4C = _T4D->f1;
      }_TC = _T48.f1;
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T4D = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_TC;
	_T4B = _T4D->f1;
      }{ struct Cyc_Absyn_Typedefdecl * a1 = _T4C;
	struct Cyc_Absyn_Typedefdecl * a2 = _T4B;
	_TD = a1;
	_TE = _TD->name;
	_TF = a2;
	_T10 = _TF->name;
	_T11 = Cyc_Absyn_qvar_cmp(_TE,_T10);
	if (_T11 == 0) { goto _TLBE;
	}
	goto _LL0;
	_TLBE: _T12 = l;
	_T13 = _T12->tl;
	_T14 = d;
	_T15 = Cyc_Interface_remove_decl_from_list(_T13,_T14);
	return _T15;
      }_TLBC: goto _LL7;
    case 7: 
      _T16 = _T48.f1;
      _T17 = (int *)_T16;
      _T18 = *_T17;
      if (_T18 != 7) { goto _TLC0;
      }
      _T19 = _T48.f0;
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T4D = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T19;
	_T4C = _T4D->f1;
      }_T1A = _T48.f1;
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T4D = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T1A;
	_T4A = _T4D->f1;
      }{ struct Cyc_Absyn_Enumdecl * a1 = _T4C;
	struct Cyc_Absyn_Enumdecl * a2 = _T4A;
	_T1B = a1;
	_T1C = _T1B->name;
	_T1D = a2;
	_T1E = _T1D->name;
	_T1F = Cyc_Absyn_qvar_cmp(_T1C,_T1E);
	if (_T1F == 0) { goto _TLC2;
	}
	goto _LL0;
	_TLC2: _T20 = a1;
	_T21 = _T20->sc;
	_T22 = (int)_T21;
	if (_T22 != 3) { goto _TLC4;
	}
	_T23 = a1;
	_T24 = a2;
	_T23->sc = _T24->sc;
	goto _TLC5;
	_TLC4: _TLC5: _T25 = l;
	_T26 = _T25->tl;
	_T27 = d;
	_T28 = Cyc_Interface_remove_decl_from_list(_T26,_T27);
	return _T28;
      }_TLC0: goto _LL7;
    case 0: 
      _T29 = _T48.f1;
      _T2A = (int *)_T29;
      _T2B = *_T2A;
      if (_T2B != 0) { goto _TLC6;
      }
      _T2C = _T48.f0;
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T4D = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T2C;
	_T2D = _T48.f0;
	_T2E = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T2D;
	_T2F = &_T2E->f1;
	_T4C = (struct Cyc_Absyn_Vardecl * *)_T2F;
      }_T30 = _T48.f1;
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T4D = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T30;
	_T49 = _T4D->f1;
      }{ struct Cyc_Absyn_Vardecl * * vd1 = (struct Cyc_Absyn_Vardecl * *)_T4C;
	struct Cyc_Absyn_Vardecl * vd2 = _T49;
	_T31 = vd1;
	_T32 = *_T31;
	_T33 = _T32->name;
	_T34 = vd2;
	_T35 = _T34->name;
	_T36 = Cyc_Absyn_qvar_cmp(_T33,_T35);
	if (_T36 == 0) { goto _TLC8;
	}
	goto _LL0;
	_TLC8: _T37 = vd1;
	_T38 = *_T37;
	_T39 = _T38->sc;
	_T3A = (int)_T39;
	if (_T3A != 3) { goto _TLCA;
	}
	_T3B = vd1;
	{ struct Cyc_Absyn_Vardecl * _T4D = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
	  _T3D = vd2;
	  *_T4D = *_T3D;
	  _T3C = (struct Cyc_Absyn_Vardecl *)_T4D;
	}*_T3B = _T3C;
	goto _TLCB;
	_TLCA: _TLCB: _T3E = l;
	_T3F = _T3E->tl;
	_T40 = d;
	_T41 = Cyc_Interface_remove_decl_from_list(_T3F,_T40);
	return _T41;
      }_TLC6: goto _LL7;
    default: 
      _LL7: goto _LL0;
    }
    _LL0: ;
  }{ struct Cyc_List_List * _T48 = _cycalloc(sizeof(struct Cyc_List_List));
    _T43 = l;
    _T44 = _T43->hd;
    _T48->hd = (struct Cyc_Absyn_Decl *)_T44;
    _T45 = l;
    _T46 = _T45->tl;
    _T47 = d;
    _T48->tl = Cyc_Interface_remove_decl_from_list(_T46,_T47);
    _T42 = (struct Cyc_List_List *)_T48;
  }return _T42;
}
static struct Cyc_List_List * Cyc_Interface_uniqify_decl_list(struct Cyc_List_List * accum,
							      struct Cyc_Absyn_Decl * d) {
  struct Cyc_List_List * _T0;
  struct _tuple18 _T1;
  struct Cyc_Absyn_Decl * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_Absyn_Decl * _T5;
  void * _T6;
  int * _T7;
  unsigned int _T8;
  void * _T9;
  int * _TA;
  int _TB;
  void * _TC;
  void * _TD;
  void * _TE;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _TF;
  struct Cyc_Absyn_Vardecl * * _T10;
  struct Cyc_Absyn_Vardecl * _T11;
  struct _tuple0 * _T12;
  struct Cyc_Absyn_Vardecl * * _T13;
  struct Cyc_Absyn_Vardecl * _T14;
  struct _tuple0 * _T15;
  int _T16;
  struct Cyc_Absyn_Vardecl * * _T17;
  struct Cyc_Absyn_Vardecl * _T18;
  enum Cyc_Absyn_Scope _T19;
  int _T1A;
  struct Cyc_Absyn_Vardecl * * _T1B;
  struct Cyc_Absyn_Vardecl * _T1C;
  struct Cyc_Absyn_Vardecl * _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  int * _T20;
  int _T21;
  void * _T22;
  void * _T23;
  struct Cyc_Absyn_Typedefdecl * _T24;
  struct _tuple0 * _T25;
  struct Cyc_Absyn_Typedefdecl * _T26;
  struct _tuple0 * _T27;
  int _T28;
  struct Cyc_List_List * _T29;
  void * _T2A;
  int * _T2B;
  int _T2C;
  void * _T2D;
  void * _T2E;
  struct Cyc_Absyn_Enumdecl * _T2F;
  struct _tuple0 * _T30;
  struct Cyc_Absyn_Enumdecl * _T31;
  struct _tuple0 * _T32;
  int _T33;
  struct Cyc_List_List * _T34;
  void * _T35;
  int * _T36;
  int _T37;
  void * _T38;
  void * _T39;
  struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T3A;
  struct Cyc_List_List * * _T3B;
  void * _T3C;
  int _T3D;
  struct Cyc_List_List * * _T3E;
  struct Cyc_List_List * * _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_List_List * _T41;
  void * _T42;
  struct Cyc_Absyn_Decl * _T43;
  struct Cyc_List_List * _T44;
  struct Cyc_List_List * _T45;
  struct Cyc_List_List * _T46;
  if (accum != 0) { goto _TLCC;
  }
  { struct Cyc_List_List * _T47 = _cycalloc(sizeof(struct Cyc_List_List));
    _T47->hd = d;
    _T47->tl = 0;
    _T0 = (struct Cyc_List_List *)_T47;
  }return _T0;
  _TLCC: { struct Cyc_List_List * l = accum;
    _TLD1: if (l != 0) { goto _TLCF;
    }else { goto _TLD0;
    }
    _TLCF: { struct _tuple18 _T47;
      _T2 = d;
      _T47.f0 = _T2->r;
      _T3 = l;
      _T4 = _T3->hd;
      _T5 = (struct Cyc_Absyn_Decl *)_T4;
      _T47.f1 = _T5->r;
      _T1 = _T47;
    }{ struct _tuple18 _T47 = _T1;
      struct Cyc_List_List * _T48;
      struct _fat_ptr * _T49;
      struct _fat_ptr * _T4A;
      struct Cyc_Absyn_Enumdecl * _T4B;
      struct Cyc_Absyn_Typedefdecl * _T4C;
      void * _T4D;
      void * _T4E;
      _T6 = _T47.f0;
      _T7 = (int *)_T6;
      _T8 = *_T7;
      switch (_T8) {
      case 0: 
	_T9 = _T47.f1;
	_TA = (int *)_T9;
	_TB = *_TA;
	if (_TB != 0) { goto _TLD3;
	}
	_TC = _T47.f0;
	{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T4F = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TC;
	  _T4E = _T4F->f1;
	}_TD = _T47.f1;
	{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T4F = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TD;
	  _TE = _T47.f1;
	  _TF = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TE;
	  _T10 = &_TF->f1;
	  _T4D = (struct Cyc_Absyn_Vardecl * *)_T10;
	}{ struct Cyc_Absyn_Vardecl * vd1 = _T4E;
	  struct Cyc_Absyn_Vardecl * * vd2 = (struct Cyc_Absyn_Vardecl * *)_T4D;
	  _T11 = vd1;
	  _T12 = _T11->name;
	  _T13 = vd2;
	  _T14 = *_T13;
	  _T15 = _T14->name;
	  _T16 = Cyc_Absyn_qvar_cmp(_T12,_T15);
	  if (_T16 == 0) { goto _TLD5;
	  }
	  goto _LL0;
	  _TLD5: _T17 = vd2;
	  _T18 = *_T17;
	  _T19 = _T18->sc;
	  _T1A = (int)_T19;
	  if (_T1A != 3) { goto _TLD7;
	  }
	  _T1B = vd2;
	  { struct Cyc_Absyn_Vardecl * _T4F = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
	    _T1D = vd1;
	    *_T4F = *_T1D;
	    _T1C = (struct Cyc_Absyn_Vardecl *)_T4F;
	  }*_T1B = _T1C;
	  goto _TLD8;
	  _TLD7: _TLD8: _T1E = accum;
	  return _T1E;
	}_TLD3: goto _LL9;
      case 8: 
	_T1F = _T47.f1;
	_T20 = (int *)_T1F;
	_T21 = *_T20;
	if (_T21 != 8) { goto _TLD9;
	}
	_T22 = _T47.f0;
	{ struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T4F = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T22;
	  _T4E = _T4F->f1;
	}_T23 = _T47.f1;
	{ struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T4F = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T23;
	  _T4C = _T4F->f1;
	}{ struct Cyc_Absyn_Typedefdecl * a1 = _T4E;
	  struct Cyc_Absyn_Typedefdecl * a2 = _T4C;
	  _T24 = a1;
	  _T25 = _T24->name;
	  _T26 = a2;
	  _T27 = _T26->name;
	  _T28 = Cyc_Absyn_qvar_cmp(_T25,_T27);
	  if (_T28 == 0) { goto _TLDB;
	  }
	  goto _LL0;
	  _TLDB: _T29 = accum;
	  return _T29;
	}_TLD9: goto _LL9;
      case 7: 
	_T2A = _T47.f1;
	_T2B = (int *)_T2A;
	_T2C = *_T2B;
	if (_T2C != 7) { goto _TLDD;
	}
	_T2D = _T47.f0;
	{ struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T4F = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T2D;
	  _T4E = _T4F->f1;
	}_T2E = _T47.f1;
	{ struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T4F = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T2E;
	  _T4B = _T4F->f1;
	}{ struct Cyc_Absyn_Enumdecl * a1 = _T4E;
	  struct Cyc_Absyn_Enumdecl * a2 = _T4B;
	  _T2F = a1;
	  _T30 = _T2F->name;
	  _T31 = a2;
	  _T32 = _T31->name;
	  _T33 = Cyc_Absyn_qvar_cmp(_T30,_T32);
	  if (_T33 == 0) { goto _TLDF;
	  }
	  goto _LL0;
	  _TLDF: _T34 = accum;
	  return _T34;
	}_TLDD: goto _LL9;
      case 9: 
	_T35 = _T47.f1;
	_T36 = (int *)_T35;
	_T37 = *_T36;
	if (_T37 != 9) { goto _TLE1;
	}
	_T38 = _T47.f0;
	{ struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T4F = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T38;
	  _T4A = _T4F->f1;
	  _T39 = _T47.f0;
	  _T3A = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T39;
	  _T3B = &_T3A->f2;
	  _T4E = (struct Cyc_List_List * *)_T3B;
	}_T3C = _T47.f1;
	{ struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T4F = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T3C;
	  _T49 = _T4F->f1;
	  _T48 = _T4F->f2;
	}{ struct _fat_ptr * a1 = _T4A;
	  struct Cyc_List_List * * b1 = (struct Cyc_List_List * *)_T4E;
	  struct _fat_ptr * a2 = _T49;
	  struct Cyc_List_List * b2 = _T48;
	  _T3D = Cyc_strptrcmp(a1,a2);
	  if (_T3D == 0) { goto _TLE3;
	  }
	  goto _LL0;
	  _TLE3: { struct Cyc_List_List * dl = b2;
	    _TLE8: if (dl != 0) { goto _TLE6;
	    }else { goto _TLE7;
	    }
	    _TLE6: _T3E = b1;
	    _T3F = b1;
	    _T40 = *_T3F;
	    _T41 = dl;
	    _T42 = _T41->hd;
	    _T43 = (struct Cyc_Absyn_Decl *)_T42;
	    *_T3E = Cyc_Interface_remove_decl_from_list(_T40,_T43);
	    _T44 = dl;
	    dl = _T44->tl;
	    goto _TLE8;
	    _TLE7: ;
	  }goto _LL0;
	}_TLE1: goto _LL9;
      default: 
	_LL9: goto _LL0;
      }
      _LL0: ;
    }_T45 = l;
    l = _T45->tl;
    goto _TLD1;
    _TLD0: ;
  }{ struct Cyc_List_List * _T47 = _cycalloc(sizeof(struct Cyc_List_List));
    _T47->hd = d;
    _T47->tl = accum;
    _T46 = (struct Cyc_List_List *)_T47;
  }return _T46;
}
static struct Cyc_List_List * Cyc_Interface_filterstatics(struct Cyc_List_List * accum,
							  struct Cyc_Absyn_Decl * d) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Vardecl * _T3;
  enum Cyc_Absyn_Scope _T4;
  int _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  enum Cyc_Absyn_Scope _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_Absyn_Vardecl * _TB;
  struct Cyc_Absyn_Vardecl * _TC;
  struct Cyc_Absyn_Vardecl * _TD;
  struct Cyc_Absyn_Vardecl * _TE;
  void * _TF;
  long _T10;
  struct Cyc_Absyn_Vardecl * _T11;
  enum Cyc_Absyn_Scope _T12;
  int _T13;
  struct Cyc_Absyn_Vardecl * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T16;
  void * _T17;
  struct Cyc_Absyn_Fndecl * _T18;
  enum Cyc_Absyn_Scope _T19;
  int _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc_Absyn_Fndecl * _T1C;
  enum Cyc_Absyn_Scope _T1D;
  int _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_Absyn_Fndecl * _T20;
  struct _tuple0 * _T21;
  struct Cyc_Absyn_Fndecl * _T22;
  void * _T23;
  void * _T24;
  struct Cyc_Absyn_Vardecl * _T25;
  struct Cyc_Absyn_Fndecl * _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T28;
  void * _T29;
  struct Cyc_Absyn_Aggrdecl * _T2A;
  enum Cyc_Absyn_Scope _T2B;
  int _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_Absyn_Datatypedecl * _T2E;
  enum Cyc_Absyn_Scope _T2F;
  int _T30;
  struct Cyc_List_List * _T31;
  struct Cyc_Absyn_Enumdecl * _T32;
  enum Cyc_Absyn_Scope _T33;
  int _T34;
  struct Cyc_List_List * _T35;
  struct Cyc_Absyn_Enumdecl * _T36;
  enum Cyc_Absyn_Scope _T37;
  int _T38;
  struct Cyc_List_List * _T39;
  struct Cyc_List_List * (* _T3A)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
							     struct Cyc_Absyn_Decl *),
				  struct Cyc_List_List *,struct Cyc_List_List *);
  void * (* _T3B)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_List_List * _T3C;
  struct Cyc_List_List * _T3D;
  struct Cyc_List_List * _T3E;
  struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T3F;
  void * _T40;
  struct Cyc_List_List * (* _T41)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
							     struct Cyc_Absyn_Decl *),
				  struct Cyc_List_List *,struct Cyc_List_List *);
  void * (* _T42)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_List_List * _T43;
  struct Cyc_List_List * _T44;
  struct Cyc_List_List * _T45;
  struct Cyc_List_List * _T46;
  struct Cyc_List_List * _T47;
  struct Cyc_List_List * _T48;
  struct Cyc_Absyn_Decl * _T49;
  struct Cyc_Absyn_Decl * _T4A;
  _T0 = d;
  { void * _T4B = _T0->r;
    struct Cyc_List_List * _T4C;
    struct _fat_ptr * _T4D;
    struct Cyc_Absyn_Typedefdecl * _T4E;
    struct Cyc_Absyn_Enumdecl * _T4F;
    struct Cyc_Absyn_Datatypedecl * _T50;
    struct Cyc_Absyn_Aggrdecl * _T51;
    struct Cyc_Absyn_Fndecl * _T52;
    struct Cyc_Absyn_Vardecl * _T53;
    _T1 = (int *)_T4B;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T54 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T4B;
	_T53 = _T54->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T53;
	_T3 = vd;
	_T4 = _T3->sc;
	_T5 = (int)_T4;
	if (_T5 != 4) { goto _TLEA;
	}
	_T6 = accum;
	return _T6;
	_TLEA: _T7 = vd;
	_T8 = _T7->sc;
	_T9 = (int)_T8;
	if (_T9 != 0) { goto _TLEC;
	}
	_TA = accum;
	return _TA;
	_TLEC: { struct Cyc_Absyn_Vardecl * nvd;
	  nvd = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
	  _TB = nvd;
	  _TC = vd;
	  *_TB = *_TC;
	  _TD = nvd;
	  _TD->initializer = 0;
	  _TE = nvd;
	  _TF = _TE->type;
	  _T10 = Cyc_Tcutil_is_function_type(_TF);
	  if (! _T10) { goto _TLEE;
	  }
	  _T11 = nvd;
	  _T12 = _T11->sc;
	  _T13 = (int)_T12;
	  if (_T13 == 3) { goto _TLEE;
	  }
	  _T14 = nvd;
	  _T14->sc = 3U;
	  goto _TLEF;
	  _TLEE: _TLEF: { struct Cyc_List_List * _T54 = _cycalloc(sizeof(struct Cyc_List_List));
	    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T55 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
	      _T55->tag = 0;
	      _T55->f1 = nvd;
	      _T16 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T55;
	    }_T17 = (void *)_T16;
	    _T54->hd = Cyc_Absyn_new_decl(_T17,0U);
	    _T54->tl = accum;
	    _T15 = (struct Cyc_List_List *)_T54;
	  }return _T15;
	}
      }
    case 1: 
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T54 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T4B;
	_T52 = _T54->f1;
      }{ struct Cyc_Absyn_Fndecl * fd = _T52;
	_T18 = fd;
	_T19 = _T18->sc;
	_T1A = (int)_T19;
	if (_T1A != 4) { goto _TLF0;
	}
	_T1B = accum;
	return _T1B;
	_TLF0: _T1C = fd;
	_T1D = _T1C->sc;
	_T1E = (int)_T1D;
	if (_T1E != 0) { goto _TLF2;
	}
	_T1F = accum;
	return _T1F;
	_TLF2: _T20 = fd;
	_T21 = _T20->name;
	_T22 = fd;
	_T23 = _T22->cached_type;
	_T24 = _check_null(_T23);
	{ struct Cyc_Absyn_Vardecl * vd = Cyc_Absyn_new_vardecl(0U,_T21,_T24,
								0,0);
	  _T25 = vd;
	  _T26 = fd;
	  _T25->sc = _T26->sc;
	  { struct Cyc_List_List * _T54 = _cycalloc(sizeof(struct Cyc_List_List));
	    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T55 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
	      _T55->tag = 0;
	      _T55->f1 = vd;
	      _T28 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T55;
	    }_T29 = (void *)_T28;
	    _T54->hd = Cyc_Absyn_new_decl(_T29,0U);
	    _T54->tl = accum;
	    _T27 = (struct Cyc_List_List *)_T54;
	  }return _T27;
	}
      }
    case 5: 
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T54 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T4B;
	_T51 = _T54->f1;
      }{ struct Cyc_Absyn_Aggrdecl * a = _T51;
	_T2A = a;
	_T2B = _T2A->sc;
	_T2C = (int)_T2B;
	if (_T2C != 4) { goto _TLF4;
	}
	_T2D = accum;
	return _T2D;
	_TLF4: goto _LL0;
      }
    case 6: 
      { struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T54 = (struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct *)_T4B;
	_T50 = _T54->f1;
      }{ struct Cyc_Absyn_Datatypedecl * a = _T50;
	_T2E = a;
	_T2F = _T2E->sc;
	_T30 = (int)_T2F;
	if (_T30 != 4) { goto _TLF6;
	}
	_T31 = accum;
	return _T31;
	_TLF6: goto _LL0;
      }
    case 7: 
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T54 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T4B;
	_T4F = _T54->f1;
      }{ struct Cyc_Absyn_Enumdecl * a = _T4F;
	_T32 = a;
	_T33 = _T32->sc;
	_T34 = (int)_T33;
	if (_T34 != 4) { goto _TLF8;
	}
	_T35 = accum;
	return _T35;
	_TLF8: _T36 = a;
	_T37 = _T36->sc;
	_T38 = (int)_T37;
	if (_T38 != 0) { goto _TLFA;
	}
	_T39 = accum;
	return _T39;
	_TLFA: goto _LL0;
      }
    case 8: 
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T54 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T4B;
	_T4E = _T54->f1;
      }{ struct Cyc_Absyn_Typedefdecl * a = _T4E;
	goto _LL0;
      }
    case 9: 
      { struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T54 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T4B;
	_T4D = _T54->f1;
	_T4C = _T54->f2;
      }{ struct _fat_ptr * a = _T4D;
	struct Cyc_List_List * b = _T4C;
	_T3B = Cyc_List_fold_left;
	{ struct Cyc_List_List * (* _T54)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
								     struct Cyc_Absyn_Decl *),
					  struct Cyc_List_List *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
																		  struct Cyc_Absyn_Decl *),
														       struct Cyc_List_List *,
														       struct Cyc_List_List *))_T3B;
	  _T3A = _T54;
	}_T3C = b;
	_T3D = _T3A(Cyc_Interface_filterstatics,0,_T3C);
	{ struct Cyc_List_List * l = Cyc_List_rev(_T3D);
	  { struct Cyc_List_List * _T54 = _cycalloc(sizeof(struct Cyc_List_List));
	    { struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T55 = _cycalloc(sizeof(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct));
	      _T55->tag = 9;
	      _T55->f1 = a;
	      _T55->f2 = l;
	      _T3F = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T55;
	    }_T40 = (void *)_T3F;
	    _T54->hd = Cyc_Absyn_new_decl(_T40,0U);
	    _T54->tl = accum;
	    _T3E = (struct Cyc_List_List *)_T54;
	  }return _T3E;
	}
      }
    case 10: 
      { struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _T54 = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_T4B;
	_T4C = _T54->f2;
      }{ struct Cyc_List_List * b = _T4C;
	_T42 = Cyc_List_fold_left;
	{ struct Cyc_List_List * (* _T54)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
								     struct Cyc_Absyn_Decl *),
					  struct Cyc_List_List *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
																		  struct Cyc_Absyn_Decl *),
														       struct Cyc_List_List *,
														       struct Cyc_List_List *))_T42;
	  _T41 = _T54;
	}_T43 = b;
	_T44 = _T41(Cyc_Interface_filterstatics,0,_T43);
	_T45 = accum;
	_T46 = Cyc_List_append(_T44,_T45);
	return _T46;
      }
    case 2: 
      goto _LL14;
    case 3: 
      _LL14: goto _LL16;
    case 4: 
      _LL16: goto _LL18;
    case 11: 
      _LL18: goto _LL1A;
    case 12: 
      _LL1A: goto _LL1C;
    case 13: 
      _LL1C: goto _LL1E;
    case 14: 
      _LL1E: goto _LL20;
    case 15: 
      _LL20: goto _LL22;
    default: 
      _LL22: _T47 = accum;
      return _T47;
    }
    _LL0: ;
  }{ struct Cyc_List_List * _T4B = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Decl * _T4C = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
      _T4A = d;
      *_T4C = *_T4A;
      _T49 = (struct Cyc_Absyn_Decl *)_T4C;
    }_T4B->hd = _T49;
    _T4B->tl = accum;
    _T48 = (struct Cyc_List_List *)_T4B;
  }return _T48;
}
 struct Cyc_Interface_ExtractEnv {
  struct Cyc_Interface_I * i;
  long check_complete_defs;
  struct Cyc_Tcenv_Genv * ae;
  struct Cyc_Interface_Seen * seen;
};
static void Cyc_Interface_extract_f(struct Cyc_Interface_ExtractEnv * env_f) {
  struct Cyc_Interface_ExtractEnv * _T0;
  struct _tuple16 _T1;
  struct Cyc_Interface_I * _T2;
  struct Cyc_Interface_I * _T3;
  void (* _T4)(void (*)(struct _tuple16 *,struct _tuple0 *,struct Cyc_Absyn_Aggrdecl * *),
	       struct _tuple16 *,struct Cyc_Dict_Dict);
  void (* _T5)(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
  struct _tuple16 * _T6;
  struct Cyc_Tcenv_Genv * _T7;
  struct Cyc_Dict_Dict _T8;
  void (* _T9)(void (*)(struct _tuple16 *,struct _tuple0 *,struct Cyc_Absyn_Datatypedecl * *),
	       struct _tuple16 *,struct Cyc_Dict_Dict);
  void (* _TA)(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
  struct _tuple16 * _TB;
  struct Cyc_Tcenv_Genv * _TC;
  struct Cyc_Dict_Dict _TD;
  void (* _TE)(void (*)(struct _tuple16 *,struct _tuple0 *,struct Cyc_Absyn_Enumdecl * *),
	       struct _tuple16 *,struct Cyc_Dict_Dict);
  void (* _TF)(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
  struct _tuple16 * _T10;
  struct Cyc_Tcenv_Genv * _T11;
  struct Cyc_Dict_Dict _T12;
  void (* _T13)(void (*)(struct _tuple16 *,struct _tuple0 *,struct Cyc_Absyn_Typedefdecl *),
		struct _tuple16 *,struct Cyc_Dict_Dict);
  void (* _T14)(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
  struct _tuple16 * _T15;
  struct Cyc_Tcenv_Genv * _T16;
  struct Cyc_Dict_Dict _T17;
  void (* _T18)(void (*)(struct _tuple16 *,struct _tuple0 *,struct _tuple17 *),
		struct _tuple16 *,struct Cyc_Dict_Dict);
  void (* _T19)(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
  struct _tuple16 * _T1A;
  struct Cyc_Tcenv_Genv * _T1B;
  struct Cyc_Dict_Dict _T1C;
  struct Cyc_Interface_Seen * _T1D;
  struct Cyc_Tcenv_Genv * _T1E;
  long _T1F;
  struct Cyc_Interface_I * _T20;
  _T0 = env_f;
  { struct Cyc_Interface_ExtractEnv _T21 = *_T0;
    _T20 = _T21.i;
    _T1F = _T21.check_complete_defs;
    _T1E = _T21.ae;
    _T1D = _T21.seen;
  }{ struct Cyc_Interface_I * i = _T20;
    long check_complete_defs = _T1F;
    struct Cyc_Tcenv_Genv * ae = _T1E;
    struct Cyc_Interface_Seen * seen = _T1D;
    { struct _tuple16 _T21;
      _T2 = i;
      _T21.f0 = _T2->imports;
      _T3 = i;
      _T21.f1 = _T3->exports;
      _T21.f2 = check_complete_defs;
      _T21.f3 = ae;
      _T21.f4 = seen;
      _T21.f5 = i;
      _T1 = _T21;
    }{ struct _tuple16 env = _T1;
      _T5 = Cyc_Dict_iter_c;
      { void (* _T21)(void (*)(struct _tuple16 *,struct _tuple0 *,struct Cyc_Absyn_Aggrdecl * *),
		      struct _tuple16 *,struct Cyc_Dict_Dict) = (void (*)(void (*)(struct _tuple16 *,
										   struct _tuple0 *,
										   struct Cyc_Absyn_Aggrdecl * *),
									  struct _tuple16 *,
									  struct Cyc_Dict_Dict))_T5;
	_T4 = _T21;
      }_T6 = &env;
      _T7 = ae;
      _T8 = _T7->aggrdecls;
      _T4(Cyc_Interface_extract_aggrdecl,_T6,_T8);
      _TA = Cyc_Dict_iter_c;
      { void (* _T21)(void (*)(struct _tuple16 *,struct _tuple0 *,struct Cyc_Absyn_Datatypedecl * *),
		      struct _tuple16 *,struct Cyc_Dict_Dict) = (void (*)(void (*)(struct _tuple16 *,
										   struct _tuple0 *,
										   struct Cyc_Absyn_Datatypedecl * *),
									  struct _tuple16 *,
									  struct Cyc_Dict_Dict))_TA;
	_T9 = _T21;
      }_TB = &env;
      _TC = ae;
      _TD = _TC->datatypedecls;
      _T9(Cyc_Interface_extract_datatypedecl,_TB,_TD);
      _TF = Cyc_Dict_iter_c;
      { void (* _T21)(void (*)(struct _tuple16 *,struct _tuple0 *,struct Cyc_Absyn_Enumdecl * *),
		      struct _tuple16 *,struct Cyc_Dict_Dict) = (void (*)(void (*)(struct _tuple16 *,
										   struct _tuple0 *,
										   struct Cyc_Absyn_Enumdecl * *),
									  struct _tuple16 *,
									  struct Cyc_Dict_Dict))_TF;
	_TE = _T21;
      }_T10 = &env;
      _T11 = ae;
      _T12 = _T11->enumdecls;
      _TE(Cyc_Interface_extract_enumdecl,_T10,_T12);
      _T14 = Cyc_Dict_iter_c;
      { void (* _T21)(void (*)(struct _tuple16 *,struct _tuple0 *,struct Cyc_Absyn_Typedefdecl *),
		      struct _tuple16 *,struct Cyc_Dict_Dict) = (void (*)(void (*)(struct _tuple16 *,
										   struct _tuple0 *,
										   struct Cyc_Absyn_Typedefdecl *),
									  struct _tuple16 *,
									  struct Cyc_Dict_Dict))_T14;
	_T13 = _T21;
      }_T15 = &env;
      _T16 = ae;
      _T17 = _T16->typedefs;
      _T13(Cyc_Interface_extract_typedef,_T15,_T17);
      _T19 = Cyc_Dict_iter_c;
      { void (* _T21)(void (*)(struct _tuple16 *,struct _tuple0 *,struct _tuple17 *),
		      struct _tuple16 *,struct Cyc_Dict_Dict) = (void (*)(void (*)(struct _tuple16 *,
										   struct _tuple0 *,
										   struct _tuple17 *),
									  struct _tuple16 *,
									  struct Cyc_Dict_Dict))_T19;
	_T18 = _T21;
      }_T1A = &env;
      _T1B = ae;
      _T1C = _T1B->ordinaries;
      _T18(Cyc_Interface_extract_ordinarie,_T1A,_T1C);
    }
  }
}
static struct Cyc_Interface_I * Cyc_Interface_gen_extract(struct Cyc_Tcenv_Genv * ae,
							  long check_complete_defs,
							  struct Cyc_List_List * tds) {
  struct Cyc_Interface_ExtractEnv _T0;
  struct Cyc_Interface_ExtractEnv * _T1;
  struct Cyc_Interface_ExtractEnv * _T2;
  struct Cyc_Interface_ExtractEnv _T3;
  struct Cyc_Interface_I * _T4;
  struct Cyc_List_List * (* _T5)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
							    struct Cyc_Absyn_Decl *),
				 struct Cyc_List_List *,struct Cyc_List_List *);
  void * (* _T6)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_Interface_I * _T9;
  struct Cyc_List_List * (* _TA)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
							    struct Cyc_Absyn_Decl *),
				 struct Cyc_List_List *,struct Cyc_List_List *);
  void * (* _TB)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_Interface_I * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_Interface_I * _TF;
  { struct Cyc_Interface_ExtractEnv _T10;
    _T10.i = Cyc_Interface_empty();
    _T10.check_complete_defs = check_complete_defs;
    _T10.ae = ae;
    _T10.seen = Cyc_Interface_new_seen();
    _T0 = _T10;
  }{ struct Cyc_Interface_ExtractEnv env = _T0;
    _T1 = &env;
    _T2 = (struct Cyc_Interface_ExtractEnv *)_T1;
    Cyc_Interface_extract_f(_T2);
    _T3 = env;
    { struct Cyc_Interface_I * i = _T3.i;
      _T4 = i;
      _T6 = Cyc_List_fold_left;
      { struct Cyc_List_List * (* _T10)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
								   struct Cyc_Absyn_Decl *),
					struct Cyc_List_List *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
																		struct Cyc_Absyn_Decl *),
														     struct Cyc_List_List *,
														     struct Cyc_List_List *))_T6;
	_T5 = _T10;
      }_T7 = tds;
      _T8 = _T5(Cyc_Interface_filterstatics,0,_T7);
      _T4->tds = Cyc_List_rev(_T8);
      _T9 = i;
      _TB = Cyc_List_fold_left;
      { struct Cyc_List_List * (* _T10)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
								   struct Cyc_Absyn_Decl *),
					struct Cyc_List_List *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
																		struct Cyc_Absyn_Decl *),
														     struct Cyc_List_List *,
														     struct Cyc_List_List *))_TB;
	_TA = _T10;
      }_TC = i;
      _TD = _TC->tds;
      _TE = _TA(Cyc_Interface_uniqify_decl_list,0,_TD);
      _T9->tds = Cyc_List_rev(_TE);
      _TF = i;
      return _TF;
    }
  }
}
struct Cyc_Interface_I * Cyc_Interface_extract(struct Cyc_Tcenv_Genv * ae,
					       struct Cyc_List_List * tds) {
  struct Cyc_Interface_I * _T0;
  _T0 = Cyc_Interface_gen_extract(ae,1,tds);
  return _T0;
}
static void Cyc_Interface_check_err(struct _fat_ptr * msg1,struct _fat_ptr msg2) {
  struct Cyc_String_pa_PrintArg_struct _T0;
  struct _fat_ptr * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  { struct Cyc_String_pa_PrintArg_struct _T4;
    _T4.tag = 0;
    _T4.f1 = msg2;
    _T0 = _T4;
  }{ struct Cyc_String_pa_PrintArg_struct _T4 = _T0;
    void * _T5[1];
    _T5[0] = &_T4;
    _T1 = msg1;
    _T2 = _tag_fat("%s",sizeof(char),3U);
    _T3 = _tag_fat(_T5,sizeof(void *),1);
    Cyc_Tcdecl_merr(0U,_T1,_T2,_T3);
  }
}
 struct Cyc_Interface_InclEnv {
  long res;
  struct Cyc_Dict_Dict dic2;
  long (* incl_f)(void *,void *,struct _fat_ptr *);
  struct _fat_ptr t;
  struct _fat_ptr * msg;
};
static void Cyc_Interface_incl_dict_f(struct Cyc_Interface_InclEnv * env,
				      struct _tuple0 * x,void * y1) {
  struct Cyc_Interface_InclEnv * _T0;
  struct Cyc_Interface_InclEnv * _T1;
  long * _T2;
  struct _handler_cons * _T3;
  int _T4;
  void * (* _T5)(struct Cyc_Dict_Dict,struct _tuple0 *);
  void * (* _T6)(struct Cyc_Dict_Dict,void *);
  long _T7;
  long * _T8;
  void * _T9;
  struct Cyc_Dict_Absent_exn_struct * _TA;
  char * _TB;
  char * _TC;
  struct _fat_ptr * _TD;
  struct _fat_ptr _TE;
  struct Cyc_String_pa_PrintArg_struct _TF;
  struct Cyc_String_pa_PrintArg_struct _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  long * _T13;
  struct _fat_ptr * _T14;
  struct _fat_ptr _T15;
  long (* _T16)(void *,void *,struct _fat_ptr *);
  struct Cyc_Dict_Dict _T17;
  void * _T18;
  _T0 = env;
  { struct Cyc_Interface_InclEnv _T19 = *_T0;
    _T1 = env;
    _T2 = &_T1->res;
    _T18 = (long *)_T2;
    _T17 = _T19.dic2;
    _T16 = _T19.incl_f;
    _T15 = _T19.t;
    _T14 = _T19.msg;
  }{ long * res = (long *)_T18;
    struct Cyc_Dict_Dict dic2 = _T17;
    long (* incl_f)(void *,void *,struct _fat_ptr *) = _T16;
    struct _fat_ptr t = _T15;
    struct _fat_ptr * msg = _T14;
    struct _handler_cons _T19;
    _T3 = &_T19;
    _push_handler(_T3);
    { int _T1A = 0;
      _T4 = setjmp(_T19.handler);
      if (! _T4) { goto _TLFC;
      }
      _T1A = 1;
      goto _TLFD;
      _TLFC: _TLFD: if (_T1A) { goto _TLFE;
      }else { goto _TL100;
      }
      _TL100: _T6 = Cyc_Dict_lookup;
      { void * (* _T1B)(struct Cyc_Dict_Dict,struct _tuple0 *) = (void * (*)(struct Cyc_Dict_Dict,
									     struct _tuple0 *))_T6;
	_T5 = _T1B;
      }{ void * y2 = _T5(dic2,x);
	_T7 = incl_f(y1,y2,msg);
	if (_T7) { goto _TL101;
	}else { goto _TL103;
	}
	_TL103: _T8 = res;
	*_T8 = 0;
	goto _TL102;
	_TL101: _TL102: ;
      }_pop_handler();
      goto _TLFF;
      _TLFE: _T9 = Cyc_Core_get_exn_thrown();
      { void * _T1B = (void *)_T9;
	void * _T1C;
	_TA = (struct Cyc_Dict_Absent_exn_struct *)_T1B;
	_TB = _TA->tag;
	_TC = Cyc_Dict_Absent;
	if (_TB != _TC) { goto _TL104;
	}
	_TD = msg;
	{ struct Cyc_String_pa_PrintArg_struct _T1D;
	  _T1D.tag = 0;
	  _T1D.f1 = t;
	  _TF = _T1D;
	}{ struct Cyc_String_pa_PrintArg_struct _T1D = _TF;
	  { struct Cyc_String_pa_PrintArg_struct _T1E;
	    _T1E.tag = 0;
	    _T1E.f1 = Cyc_Absynpp_qvar2string(x);
	    _T10 = _T1E;
	  }{ struct Cyc_String_pa_PrintArg_struct _T1E = _T10;
	    void * _T1F[2];
	    _T1F[0] = &_T1D;
	    _T1F[1] = &_T1E;
	    _T11 = _tag_fat("%s %s is missing",sizeof(char),17U);
	    _T12 = _tag_fat(_T1F,sizeof(void *),2);
	    _TE = Cyc_aprintf(_T11,_T12);
	  }
	}Cyc_Interface_check_err(_TD,_TE);
	_T13 = res;
	*_T13 = 0;
	goto _LL3;
	_TL104: _T1C = _T1B;
	{ void * exn = _T1C;
	  _rethrow(exn);
	}_LL3: ;
      }_TLFF: ;
    }
  }
}
static long Cyc_Interface_incl_dict(struct Cyc_Dict_Dict dic1,struct Cyc_Dict_Dict dic2,
				    long (* incl_f)(void *,void *,struct _fat_ptr *),
				    struct _fat_ptr t,struct _fat_ptr * msg) {
  struct Cyc_Interface_InclEnv _T0;
  void (* _T1)(void (*)(struct Cyc_Interface_InclEnv *,struct _tuple0 *,void *),
	       struct Cyc_Interface_InclEnv *,struct Cyc_Dict_Dict);
  void (* _T2)(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
  struct Cyc_Interface_InclEnv * _T3;
  struct Cyc_Interface_InclEnv * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Interface_InclEnv _T6;
  long _T7;
  { struct Cyc_Interface_InclEnv _T8;
    _T8.res = 1;
    _T8.dic2 = dic2;
    _T8.incl_f = incl_f;
    _T8.t = t;
    _T8.msg = msg;
    _T0 = _T8;
  }{ struct Cyc_Interface_InclEnv env = _T0;
    _T2 = Cyc_Dict_iter_c;
    { void (* _T8)(void (*)(struct Cyc_Interface_InclEnv *,struct _tuple0 *,
			    void *),struct Cyc_Interface_InclEnv *,struct Cyc_Dict_Dict) = (void (*)(void (*)(struct Cyc_Interface_InclEnv *,
													      struct _tuple0 *,
													      void *),
												     struct Cyc_Interface_InclEnv *,
												     struct Cyc_Dict_Dict))_T2;
      _T1 = _T8;
    }_T3 = &env;
    _T4 = (struct Cyc_Interface_InclEnv *)_T3;
    _T5 = dic1;
    _T1(Cyc_Interface_incl_dict_f,_T4,_T5);
    _T6 = env;
    _T7 = _T6.res;
    return _T7;
  }
}
static long Cyc_Interface_incl_aggrdecl(struct Cyc_Absyn_Aggrdecl * d0,struct Cyc_Absyn_Aggrdecl * d1,
					struct _fat_ptr * msg) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_Absyn_Aggrdecl * _T3;
  struct _tuple0 * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_Absyn_Aggrdecl * d = Cyc_Tcdecl_merge_aggrdecl(d0,d1,0U,msg);
  if (d != 0) { goto _TL106;
  }
  return 0;
  _TL106: if (d0 == d) { goto _TL108;
  }
  _T0 = msg;
  { struct Cyc_String_pa_PrintArg_struct _T7;
    _T7.tag = 0;
    _T3 = d1;
    _T4 = _T3->name;
    _T7.f1 = Cyc_Absynpp_qvar2string(_T4);
    _T2 = _T7;
  }{ struct Cyc_String_pa_PrintArg_struct _T7 = _T2;
    void * _T8[1];
    _T8[0] = &_T7;
    _T5 = _tag_fat("declaration of type %s discloses too much information",
		   sizeof(char),54U);
    _T6 = _tag_fat(_T8,sizeof(void *),1);
    _T1 = Cyc_aprintf(_T5,_T6);
  }Cyc_Interface_check_err(_T0,_T1);
  return 0;
  _TL108: return 1;
}
static long Cyc_Interface_incl_datatypedecl(struct Cyc_Absyn_Datatypedecl * d0,
					    struct Cyc_Absyn_Datatypedecl * d1,
					    struct _fat_ptr * msg) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_Absyn_Datatypedecl * _T3;
  struct _tuple0 * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_Absyn_Datatypedecl * d = Cyc_Tcdecl_merge_datatypedecl(d0,d1,
								    0U,msg);
  if (d != 0) { goto _TL10A;
  }
  return 0;
  _TL10A: if (d0 == d) { goto _TL10C;
  }
  _T0 = msg;
  { struct Cyc_String_pa_PrintArg_struct _T7;
    _T7.tag = 0;
    _T3 = d1;
    _T4 = _T3->name;
    _T7.f1 = Cyc_Absynpp_qvar2string(_T4);
    _T2 = _T7;
  }{ struct Cyc_String_pa_PrintArg_struct _T7 = _T2;
    void * _T8[1];
    _T8[0] = &_T7;
    _T5 = _tag_fat("declaration of datatype %s discloses too much information",
		   sizeof(char),58U);
    _T6 = _tag_fat(_T8,sizeof(void *),1);
    _T1 = Cyc_aprintf(_T5,_T6);
  }Cyc_Interface_check_err(_T0,_T1);
  return 0;
  _TL10C: return 1;
}
static long Cyc_Interface_incl_enumdecl(struct Cyc_Absyn_Enumdecl * d0,struct Cyc_Absyn_Enumdecl * d1,
					struct _fat_ptr * msg) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_Absyn_Enumdecl * _T3;
  struct _tuple0 * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_Absyn_Enumdecl * d = Cyc_Tcdecl_merge_enumdecl(d0,d1,0U,msg);
  if (d != 0) { goto _TL10E;
  }
  return 0;
  _TL10E: if (d0 == d) { goto _TL110;
  }
  _T0 = msg;
  { struct Cyc_String_pa_PrintArg_struct _T7;
    _T7.tag = 0;
    _T3 = d1;
    _T4 = _T3->name;
    _T7.f1 = Cyc_Absynpp_qvar2string(_T4);
    _T2 = _T7;
  }{ struct Cyc_String_pa_PrintArg_struct _T7 = _T2;
    void * _T8[1];
    _T8[0] = &_T7;
    _T5 = _tag_fat("declaration of enum %s discloses too much information",
		   sizeof(char),54U);
    _T6 = _tag_fat(_T8,sizeof(void *),1);
    _T1 = Cyc_aprintf(_T5,_T6);
  }Cyc_Interface_check_err(_T0,_T1);
  return 0;
  _TL110: return 1;
}
static long Cyc_Interface_incl_vardecl(struct Cyc_Absyn_Vardecl * d0,struct Cyc_Absyn_Vardecl * d1,
				       struct _fat_ptr * msg) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_Absyn_Vardecl * _T3;
  struct _tuple0 * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_Absyn_Vardecl * d = Cyc_Tcdecl_merge_vardecl(d0,d1,0U,msg);
  if (d != 0) { goto _TL112;
  }
  return 0;
  _TL112: if (d0 == d) { goto _TL114;
  }
  _T0 = msg;
  { struct Cyc_String_pa_PrintArg_struct _T7;
    _T7.tag = 0;
    _T3 = d1;
    _T4 = _T3->name;
    _T7.f1 = Cyc_Absynpp_qvar2string(_T4);
    _T2 = _T7;
  }{ struct Cyc_String_pa_PrintArg_struct _T7 = _T2;
    void * _T8[1];
    _T8[0] = &_T7;
    _T5 = _tag_fat("declaration of variable %s discloses too much information",
		   sizeof(char),58U);
    _T6 = _tag_fat(_T8,sizeof(void *),1);
    _T1 = Cyc_aprintf(_T5,_T6);
  }Cyc_Interface_check_err(_T0,_T1);
  return 0;
  _TL114: return 1;
}
static long Cyc_Interface_incl_typedefdecl(struct Cyc_Absyn_Typedefdecl * d0,
					   struct Cyc_Absyn_Typedefdecl * d1,
					   struct _fat_ptr * msg) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_Absyn_Typedefdecl * _T3;
  struct _tuple0 * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_Absyn_Typedefdecl * d = Cyc_Tcdecl_merge_typedefdecl(d0,d1,0U,
								  msg);
  if (d != 0) { goto _TL116;
  }
  return 0;
  _TL116: if (d0 == d) { goto _TL118;
  }
  _T0 = msg;
  { struct Cyc_String_pa_PrintArg_struct _T7;
    _T7.tag = 0;
    _T3 = d1;
    _T4 = _T3->name;
    _T7.f1 = Cyc_Absynpp_qvar2string(_T4);
    _T2 = _T7;
  }{ struct Cyc_String_pa_PrintArg_struct _T7 = _T2;
    void * _T8[1];
    _T8[0] = &_T7;
    _T5 = _tag_fat("declaration of typedef %s discloses too much information",
		   sizeof(char),57U);
    _T6 = _tag_fat(_T8,sizeof(void *),1);
    _T1 = Cyc_aprintf(_T5,_T6);
  }Cyc_Interface_check_err(_T0,_T1);
  return 0;
  _TL118: return 1;
}
static long Cyc_Interface_incl_xdatatypefielddecl(struct Cyc_Tcdecl_Xdatatypefielddecl * d0,
						  struct Cyc_Tcdecl_Xdatatypefielddecl * d1,
						  struct _fat_ptr * msg) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_Tcdecl_Xdatatypefielddecl * _T3;
  struct Cyc_Absyn_Datatypefield * _T4;
  struct _tuple0 * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_Tcdecl_Xdatatypefielddecl * d = Cyc_Tcdecl_merge_xdatatypefielddecl(d0,
										 d1,
										 0U,
										 msg);
  if (d != 0) { goto _TL11A;
  }
  return 0;
  _TL11A: if (d0 == d) { goto _TL11C;
  }
  _T0 = msg;
  { struct Cyc_String_pa_PrintArg_struct _T8;
    _T8.tag = 0;
    _T3 = d1;
    _T4 = _T3->field;
    _T5 = _T4->name;
    _T8.f1 = Cyc_Absynpp_qvar2string(_T5);
    _T2 = _T8;
  }{ struct Cyc_String_pa_PrintArg_struct _T8 = _T2;
    void * _T9[1];
    _T9[0] = &_T8;
    _T6 = _tag_fat("declaration of xdatatypefield %s discloses too much information",
		   sizeof(char),64U);
    _T7 = _tag_fat(_T9,sizeof(void *),1);
    _T1 = Cyc_aprintf(_T6,_T7);
  }Cyc_Interface_check_err(_T0,_T1);
  return 0;
  _TL11C: return 1;
}
static struct Cyc_Dict_Dict * Cyc_Interface_compat_merge_dict(struct Cyc_Dict_Dict,
							      struct Cyc_Dict_Dict,
							      struct Cyc_Dict_Dict,
							      void * (*)(void *,
									 void *,
									 unsigned int,
									 struct _fat_ptr *),
							      struct _fat_ptr,
							      struct _fat_ptr *);
static long Cyc_Interface_incl_ienv(struct Cyc_Interface_Ienv * ie1,struct Cyc_Interface_Ienv * ie2,
				    struct _fat_ptr * msg) {
  long (* _T0)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Absyn_Aggrdecl *,
								  struct Cyc_Absyn_Aggrdecl *,
								  struct _fat_ptr *),
	       struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T1;
  struct Cyc_Dict_Dict _T2;
  struct Cyc_Interface_Ienv * _T3;
  struct Cyc_Dict_Dict _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr * _T6;
  long (* _T7)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Absyn_Datatypedecl *,
								  struct Cyc_Absyn_Datatypedecl *,
								  struct _fat_ptr *),
	       struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T8;
  struct Cyc_Dict_Dict _T9;
  struct Cyc_Interface_Ienv * _TA;
  struct Cyc_Dict_Dict _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr * _TD;
  long (* _TE)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Absyn_Enumdecl *,
								  struct Cyc_Absyn_Enumdecl *,
								  struct _fat_ptr *),
	       struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _TF;
  struct Cyc_Dict_Dict _T10;
  struct Cyc_Interface_Ienv * _T11;
  struct Cyc_Dict_Dict _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr * _T14;
  struct Cyc_Dict_Dict * (* _T15)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				  struct Cyc_Dict_Dict,struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
											  struct Cyc_Absyn_Typedefdecl *,
											  unsigned int,
											  struct _fat_ptr *),
				  struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Dict_Dict * (* _T16)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				  struct Cyc_Dict_Dict,void * (*)(void *,
								  void *,
								  unsigned int,
								  struct _fat_ptr *),
				  struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T17;
  struct Cyc_Dict_Dict _T18;
  struct Cyc_Interface_Ienv * _T19;
  struct Cyc_Dict_Dict _T1A;
  struct Cyc_Dict_Dict (* _T1B)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T1C)(int (*)(void *,void *));
  int (* _T1D)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict _T1E;
  struct Cyc_Absyn_Typedefdecl * (* _T1F)(struct Cyc_Absyn_Typedefdecl *,
					  struct Cyc_Absyn_Typedefdecl *,
					  unsigned int,struct _fat_ptr *);
  struct _fat_ptr _T20;
  struct _fat_ptr * _T21;
  struct Cyc_Dict_Dict * _T22;
  long (* _T23)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Absyn_Vardecl *,
								   struct Cyc_Absyn_Vardecl *,
								   struct _fat_ptr *),
		struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T24;
  struct Cyc_Dict_Dict _T25;
  struct Cyc_Interface_Ienv * _T26;
  struct Cyc_Dict_Dict _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr * _T29;
  long (* _T2A)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Tcdecl_Xdatatypefielddecl *,
								   struct Cyc_Tcdecl_Xdatatypefielddecl *,
								   struct _fat_ptr *),
		struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T2B;
  struct Cyc_Dict_Dict _T2C;
  struct Cyc_Interface_Ienv * _T2D;
  struct Cyc_Dict_Dict _T2E;
  struct _fat_ptr _T2F;
  struct _fat_ptr * _T30;
  int _T31;
  long _T32;
  long _T33;
  long _T34;
  int _T35;
  long _T36;
  { long (* _T37)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Absyn_Aggrdecl *,
								     struct Cyc_Absyn_Aggrdecl *,
								     struct _fat_ptr *),
		  struct _fat_ptr,struct _fat_ptr *) = (long (*)(struct Cyc_Dict_Dict,
								 struct Cyc_Dict_Dict,
								 long (*)(struct Cyc_Absyn_Aggrdecl *,
									  struct Cyc_Absyn_Aggrdecl *,
									  struct _fat_ptr *),
								 struct _fat_ptr,
								 struct _fat_ptr *))Cyc_Interface_incl_dict;
    _T0 = _T37;
  }_T1 = ie1;
  _T2 = _T1->aggrdecls;
  _T3 = ie2;
  _T4 = _T3->aggrdecls;
  _T5 = _tag_fat("type",sizeof(char),5U);
  _T6 = msg;
  { long r1 = _T0(_T2,_T4,Cyc_Interface_incl_aggrdecl,_T5,_T6);
    { long (* _T37)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Absyn_Datatypedecl *,
								       struct Cyc_Absyn_Datatypedecl *,
								       struct _fat_ptr *),
		    struct _fat_ptr,struct _fat_ptr *) = (long (*)(struct Cyc_Dict_Dict,
								   struct Cyc_Dict_Dict,
								   long (*)(struct Cyc_Absyn_Datatypedecl *,
									    struct Cyc_Absyn_Datatypedecl *,
									    struct _fat_ptr *),
								   struct _fat_ptr,
								   struct _fat_ptr *))Cyc_Interface_incl_dict;
      _T7 = _T37;
    }_T8 = ie1;
    _T9 = _T8->datatypedecls;
    _TA = ie2;
    _TB = _TA->datatypedecls;
    _TC = _tag_fat("datatype",sizeof(char),9U);
    _TD = msg;
    { long r2 = _T7(_T9,_TB,Cyc_Interface_incl_datatypedecl,_TC,_TD);
      { long (* _T37)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Absyn_Enumdecl *,
									 struct Cyc_Absyn_Enumdecl *,
									 struct _fat_ptr *),
		      struct _fat_ptr,struct _fat_ptr *) = (long (*)(struct Cyc_Dict_Dict,
								     struct Cyc_Dict_Dict,
								     long (*)(struct Cyc_Absyn_Enumdecl *,
									      struct Cyc_Absyn_Enumdecl *,
									      struct _fat_ptr *),
								     struct _fat_ptr,
								     struct _fat_ptr *))Cyc_Interface_incl_dict;
	_TE = _T37;
      }_TF = ie1;
      _T10 = _TF->enumdecls;
      _T11 = ie2;
      _T12 = _T11->enumdecls;
      _T13 = _tag_fat("enum",sizeof(char),5U);
      _T14 = msg;
      { long r3 = _TE(_T10,_T12,Cyc_Interface_incl_enumdecl,_T13,_T14);
	_T16 = Cyc_Interface_compat_merge_dict;
	{ struct Cyc_Dict_Dict * (* _T37)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
					  struct Cyc_Dict_Dict,struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
												  struct Cyc_Absyn_Typedefdecl *,
												  unsigned int,
												  struct _fat_ptr *),
					  struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
													   struct Cyc_Dict_Dict,
													   struct Cyc_Dict_Dict,
													   struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
																	      struct Cyc_Absyn_Typedefdecl *,
																	      unsigned int,
																	      struct _fat_ptr *),
													   struct _fat_ptr,
													   struct _fat_ptr *))_T16;
	  _T15 = _T37;
	}_T17 = ie1;
	_T18 = _T17->typedefdecls;
	_T19 = ie2;
	_T1A = _T19->typedefdecls;
	_T1C = Cyc_Dict_empty;
	{ struct Cyc_Dict_Dict (* _T37)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
															struct _tuple0 *)))_T1C;
	  _T1B = _T37;
	}_T1D = Cyc_Absyn_qvar_cmp;
	_T1E = _T1B(_T1D);
	_T1F = Cyc_Tcdecl_merge_typedefdecl;
	_T20 = _tag_fat("typedef",sizeof(char),8U);
	_T21 = msg;
	_T22 = _T15(_T18,_T1A,_T1E,_T1F,_T20,_T21);
	{ int r4 = _T22 != 0;
	  { long (* _T37)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Absyn_Vardecl *,
									     struct Cyc_Absyn_Vardecl *,
									     struct _fat_ptr *),
			  struct _fat_ptr,struct _fat_ptr *) = (long (*)(struct Cyc_Dict_Dict,
									 struct Cyc_Dict_Dict,
									 long (*)(struct Cyc_Absyn_Vardecl *,
										  struct Cyc_Absyn_Vardecl *,
										  struct _fat_ptr *),
									 struct _fat_ptr,
									 struct _fat_ptr *))Cyc_Interface_incl_dict;
	    _T23 = _T37;
	  }_T24 = ie1;
	  _T25 = _T24->vardecls;
	  _T26 = ie2;
	  _T27 = _T26->vardecls;
	  _T28 = _tag_fat("variable",sizeof(char),9U);
	  _T29 = msg;
	  { long r5 = _T23(_T25,_T27,Cyc_Interface_incl_vardecl,_T28,_T29);
	    { long (* _T37)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,long (*)(struct Cyc_Tcdecl_Xdatatypefielddecl *,
									       struct Cyc_Tcdecl_Xdatatypefielddecl *,
									       struct _fat_ptr *),
			    struct _fat_ptr,struct _fat_ptr *) = (long (*)(struct Cyc_Dict_Dict,
									   struct Cyc_Dict_Dict,
									   long (*)(struct Cyc_Tcdecl_Xdatatypefielddecl *,
										    struct Cyc_Tcdecl_Xdatatypefielddecl *,
										    struct _fat_ptr *),
									   struct _fat_ptr,
									   struct _fat_ptr *))Cyc_Interface_incl_dict;
	      _T2A = _T37;
	    }_T2B = ie1;
	    _T2C = _T2B->xdatatypefielddecls;
	    _T2D = ie2;
	    _T2E = _T2D->xdatatypefielddecls;
	    _T2F = _tag_fat("xdatatypefield",sizeof(char),15U);
	    _T30 = msg;
	    { long r6 = _T2A(_T2C,_T2E,Cyc_Interface_incl_xdatatypefielddecl,
			     _T2F,_T30);
	      _T32 = r1;
	      if (! _T32) { goto _TL11E;
	      }
	      _T33 = r2;
	      if (! _T33) { goto _TL11E;
	      }
	      _T34 = r3;
	      if (! _T34) { goto _TL11E;
	      }
	      _T35 = r4;
	      if (! _T35) { goto _TL11E;
	      }
	      _T36 = r5;
	      if (! _T36) { goto _TL11E;
	      }
	      _T31 = r6;
	      goto _TL11F;
	      _TL11E: _T31 = 0;
	      _TL11F: return _T31;
	    }
	  }
	}
      }
    }
  }
}
long Cyc_Interface_is_subinterface(struct Cyc_Interface_I * i1,struct Cyc_Interface_I * i2,
				   struct _tuple11 * info) {
  struct _handler_cons * _T0;
  int _T1;
  struct _fat_ptr * _T2;
  struct _fat_ptr _T3;
  struct Cyc_String_pa_PrintArg_struct _T4;
  struct _tuple11 * _T5;
  struct _tuple11 _T6;
  struct Cyc_String_pa_PrintArg_struct _T7;
  struct _tuple11 * _T8;
  struct _tuple11 _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_Interface_I * _TC;
  struct Cyc_Interface_Ienv * _TD;
  struct Cyc_Interface_I * _TE;
  struct Cyc_Interface_Ienv * _TF;
  struct _fat_ptr * _T10;
  long _T11;
  struct _fat_ptr * _T12;
  struct _fat_ptr _T13;
  struct Cyc_String_pa_PrintArg_struct _T14;
  struct _tuple11 * _T15;
  struct _tuple11 _T16;
  struct Cyc_String_pa_PrintArg_struct _T17;
  struct _tuple11 * _T18;
  struct _tuple11 _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_Interface_I * _T1C;
  struct Cyc_Interface_Ienv * _T1D;
  struct Cyc_Interface_I * _T1E;
  struct Cyc_Interface_Ienv * _T1F;
  struct _fat_ptr * _T20;
  long _T21;
  void * _T22;
  struct Cyc_Tcdecl_Incompatible_exn_struct * _T23;
  char * _T24;
  char * _T25;
  struct _handler_cons _T26;
  _T0 = &_T26;
  _push_handler(_T0);
  { int _T27 = 0;
    _T1 = setjmp(_T26.handler);
    if (! _T1) { goto _TL120;
    }
    _T27 = 1;
    goto _TL121;
    _TL120: _TL121: if (_T27) { goto _TL122;
    }else { goto _TL124;
    }
    _TL124: { long res = 1;
      struct _fat_ptr * msg = 0;
      if (info == 0) { goto _TL125;
      }
      { struct _fat_ptr * _T28 = _cycalloc(sizeof(struct _fat_ptr));
	{ struct Cyc_String_pa_PrintArg_struct _T29;
	  _T29.tag = 0;
	  _T5 = info;
	  _T6 = *_T5;
	  _T29.f1 = _T6.f0;
	  _T4 = _T29;
	}{ struct Cyc_String_pa_PrintArg_struct _T29 = _T4;
	  { struct Cyc_String_pa_PrintArg_struct _T2A;
	    _T2A.tag = 0;
	    _T8 = info;
	    _T9 = *_T8;
	    _T2A.f1 = _T9.f1;
	    _T7 = _T2A;
	  }{ struct Cyc_String_pa_PrintArg_struct _T2A = _T7;
	    void * _T2B[2];
	    _T2B[0] = &_T29;
	    _T2B[1] = &_T2A;
	    _TA = _tag_fat("checking inclusion of %s exports into %s exports,",
			   sizeof(char),50U);
	    _TB = _tag_fat(_T2B,sizeof(void *),2);
	    _T3 = Cyc_aprintf(_TA,_TB);
	  }
	}*_T28 = _T3;
	_T2 = (struct _fat_ptr *)_T28;
      }msg = _T2;
      goto _TL126;
      _TL125: _TL126: _TC = i1;
      _TD = _TC->exports;
      _TE = i2;
      _TF = _TE->exports;
      _T10 = msg;
      _T11 = Cyc_Interface_incl_ienv(_TD,_TF,_T10);
      if (_T11) { goto _TL127;
      }else { goto _TL129;
      }
      _TL129: res = 0;
      goto _TL128;
      _TL127: _TL128: if (info == 0) { goto _TL12A;
      }
      { struct _fat_ptr * _T28 = _cycalloc(sizeof(struct _fat_ptr));
	{ struct Cyc_String_pa_PrintArg_struct _T29;
	  _T29.tag = 0;
	  _T15 = info;
	  _T16 = *_T15;
	  _T29.f1 = _T16.f1;
	  _T14 = _T29;
	}{ struct Cyc_String_pa_PrintArg_struct _T29 = _T14;
	  { struct Cyc_String_pa_PrintArg_struct _T2A;
	    _T2A.tag = 0;
	    _T18 = info;
	    _T19 = *_T18;
	    _T2A.f1 = _T19.f0;
	    _T17 = _T2A;
	  }{ struct Cyc_String_pa_PrintArg_struct _T2A = _T17;
	    void * _T2B[2];
	    _T2B[0] = &_T29;
	    _T2B[1] = &_T2A;
	    _T1A = _tag_fat("checking inclusion of %s imports into %s imports,",
			    sizeof(char),50U);
	    _T1B = _tag_fat(_T2B,sizeof(void *),2);
	    _T13 = Cyc_aprintf(_T1A,_T1B);
	  }
	}*_T28 = _T13;
	_T12 = (struct _fat_ptr *)_T28;
      }msg = _T12;
      goto _TL12B;
      _TL12A: _TL12B: _T1C = i2;
      _T1D = _T1C->imports;
      _T1E = i1;
      _T1F = _T1E->imports;
      _T20 = msg;
      _T21 = Cyc_Interface_incl_ienv(_T1D,_T1F,_T20);
      if (_T21) { goto _TL12C;
      }else { goto _TL12E;
      }
      _TL12E: res = 0;
      goto _TL12D;
      _TL12C: _TL12D: { long _T28 = res;
	_npop_handler(0);
	return _T28;
      }
    }_pop_handler();
    goto _TL123;
    _TL122: _T22 = Cyc_Core_get_exn_thrown();
    { void * _T28 = (void *)_T22;
      void * _T29;
      _T23 = (struct Cyc_Tcdecl_Incompatible_exn_struct *)_T28;
      _T24 = _T23->tag;
      _T25 = Cyc_Tcdecl_Incompatible;
      if (_T24 != _T25) { goto _TL12F;
      }
      return 0;
      _TL12F: _T29 = _T28;
      { void * exn = _T29;
	_rethrow(exn);
      };
    }_TL123: ;
  }
}
 struct Cyc_Interface_CompatMergeEnv {
  long res;
  struct Cyc_Dict_Dict res_dic;
  struct Cyc_Dict_Dict dic1;
  struct Cyc_Dict_Dict excl;
  void * (* merge_f)(void *,void *,unsigned int,struct _fat_ptr *);
  struct _fat_ptr t;
  struct _fat_ptr * msg;
};
static void Cyc_Interface_compat_merge_dict_f(struct Cyc_Interface_CompatMergeEnv * env,
					      struct _tuple0 * x,void * y2) {
  struct Cyc_Interface_CompatMergeEnv * _T0;
  struct Cyc_Interface_CompatMergeEnv * _T1;
  long * _T2;
  struct Cyc_Interface_CompatMergeEnv * _T3;
  struct Cyc_Dict_Dict * _T4;
  struct _handler_cons * _T5;
  int _T6;
  void * (* _T7)(struct Cyc_Dict_Dict,struct _tuple0 *);
  void * (* _T8)(struct Cyc_Dict_Dict,void *);
  void * _T9;
  unsigned int _TA;
  long * _TB;
  void * _TC;
  struct Cyc_Dict_Absent_exn_struct * _TD;
  char * _TE;
  char * _TF;
  struct _handler_cons * _T10;
  int _T11;
  void * (* _T12)(struct Cyc_Dict_Dict,struct _tuple0 *);
  void * (* _T13)(struct Cyc_Dict_Dict,void *);
  void * _T14;
  unsigned int _T15;
  struct _fat_ptr * _T16;
  struct _fat_ptr _T17;
  struct Cyc_String_pa_PrintArg_struct _T18;
  struct Cyc_String_pa_PrintArg_struct _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  long * _T1C;
  void * _T1D;
  struct Cyc_Dict_Absent_exn_struct * _T1E;
  char * _T1F;
  char * _T20;
  long * _T21;
  long _T22;
  struct Cyc_Dict_Dict * _T23;
  struct Cyc_Dict_Dict (* _T24)(struct Cyc_Dict_Dict,struct _tuple0 *,void *);
  struct Cyc_Dict_Dict (* _T25)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T26;
  struct Cyc_Dict_Dict _T27;
  struct _tuple0 * _T28;
  void * _T29;
  struct _fat_ptr * _T2A;
  struct _fat_ptr _T2B;
  void * (* _T2C)(void *,void *,unsigned int,struct _fat_ptr *);
  struct Cyc_Dict_Dict _T2D;
  struct Cyc_Dict_Dict _T2E;
  void * _T2F;
  void * _T30;
  _T0 = env;
  { struct Cyc_Interface_CompatMergeEnv _T31 = *_T0;
    _T1 = env;
    _T2 = &_T1->res;
    _T30 = (long *)_T2;
    _T3 = env;
    _T4 = &_T3->res_dic;
    _T2F = (struct Cyc_Dict_Dict *)_T4;
    _T2E = _T31.dic1;
    _T2D = _T31.excl;
    _T2C = _T31.merge_f;
    _T2B = _T31.t;
    _T2A = _T31.msg;
  }{ long * res = (long *)_T30;
    struct Cyc_Dict_Dict * res_dic = (struct Cyc_Dict_Dict *)_T2F;
    struct Cyc_Dict_Dict dic1 = _T2E;
    struct Cyc_Dict_Dict excl = _T2D;
    void * (* merge_f)(void *,void *,unsigned int,struct _fat_ptr *) = _T2C;
    struct _fat_ptr t = _T2B;
    struct _fat_ptr * msg = _T2A;
    void * y;
    { struct _handler_cons _T31;
      _T5 = &_T31;
      _push_handler(_T5);
      { int _T32 = 0;
	_T6 = setjmp(_T31.handler);
	if (! _T6) { goto _TL131;
	}
	_T32 = 1;
	goto _TL132;
	_TL131: _TL132: if (_T32) { goto _TL133;
	}else { goto _TL135;
	}
	_TL135: _T8 = Cyc_Dict_lookup;
	{ void * (* _T33)(struct Cyc_Dict_Dict,struct _tuple0 *) = (void * (*)(struct Cyc_Dict_Dict,
									       struct _tuple0 *))_T8;
	  _T7 = _T33;
	}{ void * y1 = _T7(dic1,x);
	  void * yt = merge_f(y1,y2,0U,msg);
	  _T9 = yt;
	  _TA = (unsigned int)_T9;
	  if (_TA) { goto _TL136;
	  }else { goto _TL138;
	  }
	  _TL138: _TB = res;
	  *_TB = 0;
	  _npop_handler(0);
	  return;
	  _TL136: y = yt;
	}_pop_handler();
	goto _TL134;
	_TL133: _TC = Cyc_Core_get_exn_thrown();
	{ void * _T33 = (void *)_TC;
	  void * _T34;
	  _TD = (struct Cyc_Dict_Absent_exn_struct *)_T33;
	  _TE = _TD->tag;
	  _TF = Cyc_Dict_Absent;
	  if (_TE != _TF) { goto _TL139;
	  }
	  y = y2;
	  goto _LL3;
	  _TL139: _T34 = _T33;
	  { void * exn = _T34;
	    _rethrow(exn);
	  }_LL3: ;
	}_TL134: ;
      }
    }{ struct _handler_cons _T31;
      _T10 = &_T31;
      _push_handler(_T10);
      { int _T32 = 0;
	_T11 = setjmp(_T31.handler);
	if (! _T11) { goto _TL13B;
	}
	_T32 = 1;
	goto _TL13C;
	_TL13B: _TL13C: if (_T32) { goto _TL13D;
	}else { goto _TL13F;
	}
	_TL13F: _T13 = Cyc_Dict_lookup;
	{ void * (* _T33)(struct Cyc_Dict_Dict,struct _tuple0 *) = (void * (*)(struct Cyc_Dict_Dict,
									       struct _tuple0 *))_T13;
	  _T12 = _T33;
	}{ void * ye = _T12(excl,x);
	  void * yt = merge_f(ye,y,0U,msg);
	  if (yt == ye) { goto _TL140;
	  }
	  _T14 = yt;
	  _T15 = (unsigned int)_T14;
	  if (! _T15) { goto _TL142;
	  }
	  _T16 = msg;
	  { struct Cyc_String_pa_PrintArg_struct _T33;
	    _T33.tag = 0;
	    _T33.f1 = t;
	    _T18 = _T33;
	  }{ struct Cyc_String_pa_PrintArg_struct _T33 = _T18;
	    { struct Cyc_String_pa_PrintArg_struct _T34;
	      _T34.tag = 0;
	      _T34.f1 = Cyc_Absynpp_qvar2string(x);
	      _T19 = _T34;
	    }{ struct Cyc_String_pa_PrintArg_struct _T34 = _T19;
	      void * _T35[2];
	      _T35[0] = &_T33;
	      _T35[1] = &_T34;
	      _T1A = _tag_fat("abstract %s %s is being imported as non-abstract",
			      sizeof(char),49U);
	      _T1B = _tag_fat(_T35,sizeof(void *),2);
	      _T17 = Cyc_aprintf(_T1A,_T1B);
	    }
	  }Cyc_Interface_check_err(_T16,_T17);
	  goto _TL143;
	  _TL142: _TL143: _T1C = res;
	  *_T1C = 0;
	  goto _TL141;
	  _TL140: _TL141: ;
	}_pop_handler();
	goto _TL13E;
	_TL13D: _T1D = Cyc_Core_get_exn_thrown();
	{ void * _T33 = (void *)_T1D;
	  void * _T34;
	  _T1E = (struct Cyc_Dict_Absent_exn_struct *)_T33;
	  _T1F = _T1E->tag;
	  _T20 = Cyc_Dict_Absent;
	  if (_T1F != _T20) { goto _TL144;
	  }
	  _T21 = res;
	  _T22 = *_T21;
	  if (! _T22) { goto _TL146;
	  }
	  _T23 = res_dic;
	  _T25 = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T35)(struct Cyc_Dict_Dict,struct _tuple0 *,
					  void *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
									      struct _tuple0 *,
									      void *))_T25;
	    _T24 = _T35;
	  }_T26 = res_dic;
	  _T27 = *_T26;
	  _T28 = x;
	  _T29 = y;
	  *_T23 = _T24(_T27,_T28,_T29);
	  goto _TL147;
	  _TL146: _TL147: goto _LL8;
	  _TL144: _T34 = _T33;
	  { void * exn = _T34;
	    _rethrow(exn);
	  }_LL8: ;
	}_TL13E: ;
      }
    }
  }
}
static struct Cyc_Dict_Dict * Cyc_Interface_compat_merge_dict(struct Cyc_Dict_Dict dic1,
							      struct Cyc_Dict_Dict dic2,
							      struct Cyc_Dict_Dict excl,
							      void * (* merge_f)(void *,
										 void *,
										 unsigned int,
										 struct _fat_ptr *),
							      struct _fat_ptr t,
							      struct _fat_ptr * msg) {
  struct Cyc_Interface_CompatMergeEnv _T0;
  void (* _T1)(void (*)(struct Cyc_Interface_CompatMergeEnv *,struct _tuple0 *,
			void *),struct Cyc_Interface_CompatMergeEnv *,struct Cyc_Dict_Dict);
  void (* _T2)(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
  struct Cyc_Interface_CompatMergeEnv * _T3;
  struct Cyc_Interface_CompatMergeEnv * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Dict_Dict * _T6;
  struct Cyc_Interface_CompatMergeEnv _T7;
  long _T8;
  struct Cyc_Dict_Dict * _T9;
  struct Cyc_Interface_CompatMergeEnv _TA;
  { struct Cyc_Interface_CompatMergeEnv _TB;
    _TB.res = 1;
    _TB.res_dic = dic1;
    _TB.dic1 = dic1;
    _TB.excl = excl;
    _TB.merge_f = merge_f;
    _TB.t = t;
    _TB.msg = msg;
    _T0 = _TB;
  }{ struct Cyc_Interface_CompatMergeEnv env = _T0;
    _T2 = Cyc_Dict_iter_c;
    { void (* _TB)(void (*)(struct Cyc_Interface_CompatMergeEnv *,struct _tuple0 *,
			    void *),struct Cyc_Interface_CompatMergeEnv *,
		   struct Cyc_Dict_Dict) = (void (*)(void (*)(struct Cyc_Interface_CompatMergeEnv *,
							      struct _tuple0 *,
							      void *),struct Cyc_Interface_CompatMergeEnv *,
						     struct Cyc_Dict_Dict))_T2;
      _T1 = _TB;
    }_T3 = &env;
    _T4 = (struct Cyc_Interface_CompatMergeEnv *)_T3;
    _T5 = dic2;
    _T1(Cyc_Interface_compat_merge_dict_f,_T4,_T5);
    _T7 = env;
    _T8 = _T7.res;
    if (! _T8) { goto _TL148;
    }
    { struct Cyc_Dict_Dict * _TB = _cycalloc(sizeof(struct Cyc_Dict_Dict));
      _TA = env;
      *_TB = _TA.res_dic;
      _T9 = (struct Cyc_Dict_Dict *)_TB;
    }_T6 = _T9;
    goto _TL149;
    _TL148: _T6 = 0;
    _TL149: return _T6;
  }
}
struct Cyc_Interface_Ienv * Cyc_Interface_compat_merge_ienv(struct Cyc_Interface_Ienv * ie1,
							    struct Cyc_Interface_Ienv * ie2,
							    struct Cyc_Interface_Ienv * iexcl,
							    struct _fat_ptr * msg) {
  struct Cyc_Dict_Dict * (* _T0)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				 struct Cyc_Dict_Dict,struct Cyc_Absyn_Aggrdecl * (*)(struct Cyc_Absyn_Aggrdecl *,
										      struct Cyc_Absyn_Aggrdecl *,
										      unsigned int,
										      struct _fat_ptr *),
				 struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T1;
  struct Cyc_Dict_Dict _T2;
  struct Cyc_Interface_Ienv * _T3;
  struct Cyc_Dict_Dict _T4;
  struct Cyc_Interface_Ienv * _T5;
  struct Cyc_Dict_Dict _T6;
  struct Cyc_Absyn_Aggrdecl * (* _T7)(struct Cyc_Absyn_Aggrdecl *,struct Cyc_Absyn_Aggrdecl *,
				      unsigned int,struct _fat_ptr *);
  struct _fat_ptr _T8;
  struct _fat_ptr * _T9;
  struct Cyc_Dict_Dict * (* _TA)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				 struct Cyc_Dict_Dict,struct Cyc_Absyn_Datatypedecl * (*)(struct Cyc_Absyn_Datatypedecl *,
											  struct Cyc_Absyn_Datatypedecl *,
											  unsigned int,
											  struct _fat_ptr *),
				 struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _TB;
  struct Cyc_Dict_Dict _TC;
  struct Cyc_Interface_Ienv * _TD;
  struct Cyc_Dict_Dict _TE;
  struct Cyc_Interface_Ienv * _TF;
  struct Cyc_Dict_Dict _T10;
  struct Cyc_Absyn_Datatypedecl * (* _T11)(struct Cyc_Absyn_Datatypedecl *,
					   struct Cyc_Absyn_Datatypedecl *,
					   unsigned int,struct _fat_ptr *);
  struct _fat_ptr _T12;
  struct _fat_ptr * _T13;
  struct Cyc_Dict_Dict * (* _T14)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				  struct Cyc_Dict_Dict,struct Cyc_Absyn_Enumdecl * (*)(struct Cyc_Absyn_Enumdecl *,
										       struct Cyc_Absyn_Enumdecl *,
										       unsigned int,
										       struct _fat_ptr *),
				  struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T15;
  struct Cyc_Dict_Dict _T16;
  struct Cyc_Interface_Ienv * _T17;
  struct Cyc_Dict_Dict _T18;
  struct Cyc_Interface_Ienv * _T19;
  struct Cyc_Dict_Dict _T1A;
  struct Cyc_Absyn_Enumdecl * (* _T1B)(struct Cyc_Absyn_Enumdecl *,struct Cyc_Absyn_Enumdecl *,
				       unsigned int,struct _fat_ptr *);
  struct _fat_ptr _T1C;
  struct _fat_ptr * _T1D;
  struct Cyc_Dict_Dict * (* _T1E)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				  struct Cyc_Dict_Dict,struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
											  struct Cyc_Absyn_Typedefdecl *,
											  unsigned int,
											  struct _fat_ptr *),
				  struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T1F;
  struct Cyc_Dict_Dict _T20;
  struct Cyc_Interface_Ienv * _T21;
  struct Cyc_Dict_Dict _T22;
  struct Cyc_Interface_Ienv * _T23;
  struct Cyc_Dict_Dict _T24;
  struct Cyc_Absyn_Typedefdecl * (* _T25)(struct Cyc_Absyn_Typedefdecl *,
					  struct Cyc_Absyn_Typedefdecl *,
					  unsigned int,struct _fat_ptr *);
  struct _fat_ptr _T26;
  struct _fat_ptr * _T27;
  struct Cyc_Dict_Dict * (* _T28)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				  struct Cyc_Dict_Dict,struct Cyc_Absyn_Vardecl * (*)(struct Cyc_Absyn_Vardecl *,
										      struct Cyc_Absyn_Vardecl *,
										      unsigned int,
										      struct _fat_ptr *),
				  struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T29;
  struct Cyc_Dict_Dict _T2A;
  struct Cyc_Interface_Ienv * _T2B;
  struct Cyc_Dict_Dict _T2C;
  struct Cyc_Interface_Ienv * _T2D;
  struct Cyc_Dict_Dict _T2E;
  struct Cyc_Absyn_Vardecl * (* _T2F)(struct Cyc_Absyn_Vardecl *,struct Cyc_Absyn_Vardecl *,
				      unsigned int,struct _fat_ptr *);
  struct _fat_ptr _T30;
  struct _fat_ptr * _T31;
  struct Cyc_Dict_Dict * (* _T32)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				  struct Cyc_Dict_Dict,struct Cyc_Tcdecl_Xdatatypefielddecl * (*)(struct Cyc_Tcdecl_Xdatatypefielddecl *,
												  struct Cyc_Tcdecl_Xdatatypefielddecl *,
												  unsigned int,
												  struct _fat_ptr *),
				  struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T33;
  struct Cyc_Dict_Dict _T34;
  struct Cyc_Interface_Ienv * _T35;
  struct Cyc_Dict_Dict _T36;
  struct Cyc_Interface_Ienv * _T37;
  struct Cyc_Dict_Dict _T38;
  struct Cyc_Tcdecl_Xdatatypefielddecl * (* _T39)(struct Cyc_Tcdecl_Xdatatypefielddecl *,
						  struct Cyc_Tcdecl_Xdatatypefielddecl *,
						  unsigned int,struct _fat_ptr *);
  struct _fat_ptr _T3A;
  struct _fat_ptr * _T3B;
  struct Cyc_Dict_Dict * _T3C;
  unsigned int _T3D;
  struct Cyc_Dict_Dict * _T3E;
  unsigned int _T3F;
  struct Cyc_Dict_Dict * _T40;
  unsigned int _T41;
  struct Cyc_Dict_Dict * _T42;
  unsigned int _T43;
  struct Cyc_Dict_Dict * _T44;
  unsigned int _T45;
  struct Cyc_Dict_Dict * _T46;
  unsigned int _T47;
  struct Cyc_Interface_Ienv * _T48;
  struct Cyc_Dict_Dict * _T49;
  struct Cyc_Dict_Dict * _T4A;
  struct Cyc_Dict_Dict * _T4B;
  struct Cyc_Dict_Dict * _T4C;
  struct Cyc_Dict_Dict * _T4D;
  struct Cyc_Dict_Dict * _T4E;
  { struct Cyc_Dict_Dict * (* _T4F)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				    struct Cyc_Dict_Dict,struct Cyc_Absyn_Aggrdecl * (*)(struct Cyc_Absyn_Aggrdecl *,
											 struct Cyc_Absyn_Aggrdecl *,
											 unsigned int,
											 struct _fat_ptr *),
				    struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
												     struct Cyc_Dict_Dict,
												     struct Cyc_Dict_Dict,
												     struct Cyc_Absyn_Aggrdecl * (*)(struct Cyc_Absyn_Aggrdecl *,
																     struct Cyc_Absyn_Aggrdecl *,
																     unsigned int,
																     struct _fat_ptr *),
												     struct _fat_ptr,
												     struct _fat_ptr *))Cyc_Interface_compat_merge_dict;
    _T0 = _T4F;
  }_T1 = ie1;
  _T2 = _T1->aggrdecls;
  _T3 = ie2;
  _T4 = _T3->aggrdecls;
  _T5 = iexcl;
  _T6 = _T5->aggrdecls;
  _T7 = Cyc_Tcdecl_merge_aggrdecl;
  _T8 = _tag_fat("type",sizeof(char),5U);
  _T9 = msg;
  { struct Cyc_Dict_Dict * r1 = _T0(_T2,_T4,_T6,_T7,_T8,_T9);
    { struct Cyc_Dict_Dict * (* _T4F)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				      struct Cyc_Dict_Dict,struct Cyc_Absyn_Datatypedecl * (*)(struct Cyc_Absyn_Datatypedecl *,
											       struct Cyc_Absyn_Datatypedecl *,
											       unsigned int,
											       struct _fat_ptr *),
				      struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
												       struct Cyc_Dict_Dict,
												       struct Cyc_Dict_Dict,
												       struct Cyc_Absyn_Datatypedecl * (*)(struct Cyc_Absyn_Datatypedecl *,
																	   struct Cyc_Absyn_Datatypedecl *,
																	   unsigned int,
																	   struct _fat_ptr *),
												       struct _fat_ptr,
												       struct _fat_ptr *))Cyc_Interface_compat_merge_dict;
      _TA = _T4F;
    }_TB = ie1;
    _TC = _TB->datatypedecls;
    _TD = ie2;
    _TE = _TD->datatypedecls;
    _TF = iexcl;
    _T10 = _TF->datatypedecls;
    _T11 = Cyc_Tcdecl_merge_datatypedecl;
    _T12 = _tag_fat("datatype",sizeof(char),9U);
    _T13 = msg;
    { struct Cyc_Dict_Dict * r2 = _TA(_TC,_TE,_T10,_T11,_T12,_T13);
      { struct Cyc_Dict_Dict * (* _T4F)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
					struct Cyc_Dict_Dict,struct Cyc_Absyn_Enumdecl * (*)(struct Cyc_Absyn_Enumdecl *,
											     struct Cyc_Absyn_Enumdecl *,
											     unsigned int,
											     struct _fat_ptr *),
					struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
													 struct Cyc_Dict_Dict,
													 struct Cyc_Dict_Dict,
													 struct Cyc_Absyn_Enumdecl * (*)(struct Cyc_Absyn_Enumdecl *,
																	 struct Cyc_Absyn_Enumdecl *,
																	 unsigned int,
																	 struct _fat_ptr *),
													 struct _fat_ptr,
													 struct _fat_ptr *))Cyc_Interface_compat_merge_dict;
	_T14 = _T4F;
      }_T15 = ie1;
      _T16 = _T15->enumdecls;
      _T17 = ie2;
      _T18 = _T17->enumdecls;
      _T19 = iexcl;
      _T1A = _T19->enumdecls;
      _T1B = Cyc_Tcdecl_merge_enumdecl;
      _T1C = _tag_fat("enum",sizeof(char),5U);
      _T1D = msg;
      { struct Cyc_Dict_Dict * r3 = _T14(_T16,_T18,_T1A,_T1B,_T1C,_T1D);
	{ struct Cyc_Dict_Dict * (* _T4F)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
					  struct Cyc_Dict_Dict,struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
												  struct Cyc_Absyn_Typedefdecl *,
												  unsigned int,
												  struct _fat_ptr *),
					  struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
													   struct Cyc_Dict_Dict,
													   struct Cyc_Dict_Dict,
													   struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
																	      struct Cyc_Absyn_Typedefdecl *,
																	      unsigned int,
																	      struct _fat_ptr *),
													   struct _fat_ptr,
													   struct _fat_ptr *))Cyc_Interface_compat_merge_dict;
	  _T1E = _T4F;
	}_T1F = ie1;
	_T20 = _T1F->typedefdecls;
	_T21 = ie2;
	_T22 = _T21->typedefdecls;
	_T23 = iexcl;
	_T24 = _T23->typedefdecls;
	_T25 = Cyc_Tcdecl_merge_typedefdecl;
	_T26 = _tag_fat("typedef",sizeof(char),8U);
	_T27 = msg;
	{ struct Cyc_Dict_Dict * r4 = _T1E(_T20,_T22,_T24,_T25,_T26,_T27);
	  { struct Cyc_Dict_Dict * (* _T4F)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
					    struct Cyc_Dict_Dict,struct Cyc_Absyn_Vardecl * (*)(struct Cyc_Absyn_Vardecl *,
												struct Cyc_Absyn_Vardecl *,
												unsigned int,
												struct _fat_ptr *),
					    struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
													     struct Cyc_Dict_Dict,
													     struct Cyc_Dict_Dict,
													     struct Cyc_Absyn_Vardecl * (*)(struct Cyc_Absyn_Vardecl *,
																	    struct Cyc_Absyn_Vardecl *,
																	    unsigned int,
																	    struct _fat_ptr *),
													     struct _fat_ptr,
													     struct _fat_ptr *))Cyc_Interface_compat_merge_dict;
	    _T28 = _T4F;
	  }_T29 = ie1;
	  _T2A = _T29->vardecls;
	  _T2B = ie2;
	  _T2C = _T2B->vardecls;
	  _T2D = iexcl;
	  _T2E = _T2D->vardecls;
	  _T2F = Cyc_Tcdecl_merge_vardecl;
	  _T30 = _tag_fat("variable",sizeof(char),9U);
	  _T31 = msg;
	  { struct Cyc_Dict_Dict * r5 = _T28(_T2A,_T2C,_T2E,_T2F,_T30,_T31);
	    { struct Cyc_Dict_Dict * (* _T4F)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
					      struct Cyc_Dict_Dict,struct Cyc_Tcdecl_Xdatatypefielddecl * (*)(struct Cyc_Tcdecl_Xdatatypefielddecl *,
													      struct Cyc_Tcdecl_Xdatatypefielddecl *,
													      unsigned int,
													      struct _fat_ptr *),
					      struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
													       struct Cyc_Dict_Dict,
													       struct Cyc_Dict_Dict,
													       struct Cyc_Tcdecl_Xdatatypefielddecl * (*)(struct Cyc_Tcdecl_Xdatatypefielddecl *,
																			  struct Cyc_Tcdecl_Xdatatypefielddecl *,
																			  unsigned int,
																			  struct _fat_ptr *),
													       struct _fat_ptr,
													       struct _fat_ptr *))Cyc_Interface_compat_merge_dict;
	      _T32 = _T4F;
	    }_T33 = ie1;
	    _T34 = _T33->xdatatypefielddecls;
	    _T35 = ie2;
	    _T36 = _T35->xdatatypefielddecls;
	    _T37 = iexcl;
	    _T38 = _T37->xdatatypefielddecls;
	    _T39 = Cyc_Tcdecl_merge_xdatatypefielddecl;
	    _T3A = _tag_fat("xdatatypefield",sizeof(char),15U);
	    _T3B = msg;
	    { struct Cyc_Dict_Dict * r6 = _T32(_T34,_T36,_T38,_T39,_T3A,_T3B);
	      _T3C = r1;
	      _T3D = (unsigned int)_T3C;
	      if (_T3D) { goto _TL151;
	      }else { goto _TL14C;
	      }
	      _TL151: _T3E = r2;
	      _T3F = (unsigned int)_T3E;
	      if (_T3F) { goto _TL150;
	      }else { goto _TL14C;
	      }
	      _TL150: _T40 = r3;
	      _T41 = (unsigned int)_T40;
	      if (_T41) { goto _TL14F;
	      }else { goto _TL14C;
	      }
	      _TL14F: _T42 = r4;
	      _T43 = (unsigned int)_T42;
	      if (_T43) { goto _TL14E;
	      }else { goto _TL14C;
	      }
	      _TL14E: _T44 = r5;
	      _T45 = (unsigned int)_T44;
	      if (_T45) { goto _TL14D;
	      }else { goto _TL14C;
	      }
	      _TL14D: _T46 = r6;
	      _T47 = (unsigned int)_T46;
	      if (_T47) { goto _TL14A;
	      }else { goto _TL14C;
	      }
	      _TL14C: return 0;
	      _TL14A: { struct Cyc_Interface_Ienv * _T4F = _cycalloc(sizeof(struct Cyc_Interface_Ienv));
		_T49 = r1;
		_T4F->aggrdecls = *_T49;
		_T4A = r2;
		_T4F->datatypedecls = *_T4A;
		_T4B = r3;
		_T4F->enumdecls = *_T4B;
		_T4C = r4;
		_T4F->typedefdecls = *_T4C;
		_T4D = r5;
		_T4F->vardecls = *_T4D;
		_T4E = r6;
		_T4F->xdatatypefielddecls = *_T4E;
		_T48 = (struct Cyc_Interface_Ienv *)_T4F;
	      }return _T48;
	    }
	  }
	}
      }
    }
  }
}
 struct Cyc_Interface_DisjMergeEnv {
  long res;
  struct Cyc_Dict_Dict res_dic;
  struct Cyc_Dict_Dict dic1;
  struct _fat_ptr t;
  struct _fat_ptr * msg;
};
static void Cyc_Interface_disj_merge_dict_f(struct Cyc_Interface_DisjMergeEnv * env,
					    struct _tuple0 * x,void * y) {
  struct Cyc_Interface_DisjMergeEnv * _T0;
  struct Cyc_Interface_DisjMergeEnv * _T1;
  long * _T2;
  struct Cyc_Interface_DisjMergeEnv * _T3;
  struct Cyc_Dict_Dict * _T4;
  long (* _T5)(struct Cyc_Dict_Dict,struct _tuple0 *);
  long (* _T6)(struct Cyc_Dict_Dict,void *);
  long _T7;
  struct _fat_ptr * _T8;
  struct _fat_ptr _T9;
  struct Cyc_String_pa_PrintArg_struct _TA;
  struct Cyc_String_pa_PrintArg_struct _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  long * _TE;
  long * _TF;
  long _T10;
  struct Cyc_Dict_Dict * _T11;
  struct Cyc_Dict_Dict (* _T12)(struct Cyc_Dict_Dict,struct _tuple0 *,void *);
  struct Cyc_Dict_Dict (* _T13)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T14;
  struct Cyc_Dict_Dict _T15;
  struct _tuple0 * _T16;
  void * _T17;
  struct _fat_ptr * _T18;
  struct _fat_ptr _T19;
  struct Cyc_Dict_Dict _T1A;
  void * _T1B;
  void * _T1C;
  _T0 = env;
  { struct Cyc_Interface_DisjMergeEnv _T1D = *_T0;
    _T1 = env;
    _T2 = &_T1->res;
    _T1C = (long *)_T2;
    _T3 = env;
    _T4 = &_T3->res_dic;
    _T1B = (struct Cyc_Dict_Dict *)_T4;
    _T1A = _T1D.dic1;
    _T19 = _T1D.t;
    _T18 = _T1D.msg;
  }{ long * res = (long *)_T1C;
    struct Cyc_Dict_Dict * res_dic = (struct Cyc_Dict_Dict *)_T1B;
    struct Cyc_Dict_Dict dic1 = _T1A;
    struct _fat_ptr t = _T19;
    struct _fat_ptr * msg = _T18;
    _T6 = Cyc_Dict_member;
    { long (* _T1D)(struct Cyc_Dict_Dict,struct _tuple0 *) = (long (*)(struct Cyc_Dict_Dict,
								       struct _tuple0 *))_T6;
      _T5 = _T1D;
    }_T7 = _T5(dic1,x);
    if (! _T7) { goto _TL152;
    }
    _T8 = msg;
    { struct Cyc_String_pa_PrintArg_struct _T1D;
      _T1D.tag = 0;
      _T1D.f1 = t;
      _TA = _T1D;
    }{ struct Cyc_String_pa_PrintArg_struct _T1D = _TA;
      { struct Cyc_String_pa_PrintArg_struct _T1E;
	_T1E.tag = 0;
	_T1E.f1 = Cyc_Absynpp_qvar2string(x);
	_TB = _T1E;
      }{ struct Cyc_String_pa_PrintArg_struct _T1E = _TB;
	void * _T1F[2];
	_T1F[0] = &_T1D;
	_T1F[1] = &_T1E;
	_TC = _tag_fat("%s %s is exported more than once",sizeof(char),33U);
	_TD = _tag_fat(_T1F,sizeof(void *),2);
	_T9 = Cyc_aprintf(_TC,_TD);
      }
    }Cyc_Interface_check_err(_T8,_T9);
    _TE = res;
    *_TE = 0;
    goto _TL153;
    _TL152: _TF = res;
    _T10 = *_TF;
    if (! _T10) { goto _TL154;
    }
    _T11 = res_dic;
    _T13 = Cyc_Dict_insert;
    { struct Cyc_Dict_Dict (* _T1D)(struct Cyc_Dict_Dict,struct _tuple0 *,
				    void *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
									struct _tuple0 *,
									void *))_T13;
      _T12 = _T1D;
    }_T14 = res_dic;
    _T15 = *_T14;
    _T16 = x;
    _T17 = y;
    *_T11 = _T12(_T15,_T16,_T17);
    goto _TL155;
    _TL154: _TL155: _TL153: ;
  }
}
static struct Cyc_Dict_Dict * Cyc_Interface_disj_merge_dict(struct Cyc_Dict_Dict dic1,
							    struct Cyc_Dict_Dict dic2,
							    struct _fat_ptr t,
							    struct _fat_ptr * msg) {
  struct Cyc_Interface_DisjMergeEnv _T0;
  void (* _T1)(void (*)(struct Cyc_Interface_DisjMergeEnv *,struct _tuple0 *,
			void *),struct Cyc_Interface_DisjMergeEnv *,struct Cyc_Dict_Dict);
  void (* _T2)(void (*)(void *,void *,void *),void *,struct Cyc_Dict_Dict);
  struct Cyc_Interface_DisjMergeEnv * _T3;
  struct Cyc_Interface_DisjMergeEnv * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Dict_Dict * _T6;
  struct Cyc_Interface_DisjMergeEnv _T7;
  long _T8;
  struct Cyc_Dict_Dict * _T9;
  struct Cyc_Interface_DisjMergeEnv _TA;
  { struct Cyc_Interface_DisjMergeEnv _TB;
    _TB.res = 1;
    _TB.res_dic = dic1;
    _TB.dic1 = dic1;
    _TB.t = t;
    _TB.msg = msg;
    _T0 = _TB;
  }{ struct Cyc_Interface_DisjMergeEnv env = _T0;
    _T2 = Cyc_Dict_iter_c;
    { void (* _TB)(void (*)(struct Cyc_Interface_DisjMergeEnv *,struct _tuple0 *,
			    void *),struct Cyc_Interface_DisjMergeEnv *,struct Cyc_Dict_Dict) = (void (*)(void (*)(struct Cyc_Interface_DisjMergeEnv *,
														   struct _tuple0 *,
														   void *),
													  struct Cyc_Interface_DisjMergeEnv *,
													  struct Cyc_Dict_Dict))_T2;
      _T1 = _TB;
    }_T3 = &env;
    _T4 = (struct Cyc_Interface_DisjMergeEnv *)_T3;
    _T5 = dic2;
    _T1(Cyc_Interface_disj_merge_dict_f,_T4,_T5);
    _T7 = env;
    _T8 = _T7.res;
    if (! _T8) { goto _TL156;
    }
    { struct Cyc_Dict_Dict * _TB = _cycalloc(sizeof(struct Cyc_Dict_Dict));
      _TA = env;
      *_TB = _TA.res_dic;
      _T9 = (struct Cyc_Dict_Dict *)_TB;
    }_T6 = _T9;
    goto _TL157;
    _TL156: _T6 = 0;
    _TL157: return _T6;
  }
}
static struct Cyc_Interface_Ienv * Cyc_Interface_disj_merge_ienv(struct Cyc_Interface_Ienv * ie1,
								 struct Cyc_Interface_Ienv * ie2,
								 struct _fat_ptr * msg) {
  struct Cyc_Dict_Dict * (* _T0)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				 struct Cyc_Dict_Dict,struct Cyc_Absyn_Aggrdecl * (*)(struct Cyc_Absyn_Aggrdecl *,
										      struct Cyc_Absyn_Aggrdecl *,
										      unsigned int,
										      struct _fat_ptr *),
				 struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T1;
  struct Cyc_Dict_Dict _T2;
  struct Cyc_Interface_Ienv * _T3;
  struct Cyc_Dict_Dict _T4;
  struct Cyc_Dict_Dict (* _T5)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T6)(int (*)(void *,void *));
  int (* _T7)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict _T8;
  struct Cyc_Absyn_Aggrdecl * (* _T9)(struct Cyc_Absyn_Aggrdecl *,struct Cyc_Absyn_Aggrdecl *,
				      unsigned int,struct _fat_ptr *);
  struct _fat_ptr _TA;
  struct _fat_ptr * _TB;
  struct Cyc_Interface_Ienv * _TC;
  struct Cyc_Dict_Dict _TD;
  struct Cyc_Interface_Ienv * _TE;
  struct Cyc_Dict_Dict _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr * _T11;
  struct Cyc_Interface_Ienv * _T12;
  struct Cyc_Dict_Dict _T13;
  struct Cyc_Interface_Ienv * _T14;
  struct Cyc_Dict_Dict _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr * _T17;
  struct Cyc_Dict_Dict * (* _T18)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				  struct Cyc_Dict_Dict,struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
											  struct Cyc_Absyn_Typedefdecl *,
											  unsigned int,
											  struct _fat_ptr *),
				  struct _fat_ptr,struct _fat_ptr *);
  struct Cyc_Interface_Ienv * _T19;
  struct Cyc_Dict_Dict _T1A;
  struct Cyc_Interface_Ienv * _T1B;
  struct Cyc_Dict_Dict _T1C;
  struct Cyc_Dict_Dict (* _T1D)(int (*)(struct _tuple0 *,struct _tuple0 *));
  struct Cyc_Dict_Dict (* _T1E)(int (*)(void *,void *));
  int (* _T1F)(struct _tuple0 *,struct _tuple0 *);
  struct Cyc_Dict_Dict _T20;
  struct Cyc_Absyn_Typedefdecl * (* _T21)(struct Cyc_Absyn_Typedefdecl *,
					  struct Cyc_Absyn_Typedefdecl *,
					  unsigned int,struct _fat_ptr *);
  struct _fat_ptr _T22;
  struct _fat_ptr * _T23;
  struct Cyc_Interface_Ienv * _T24;
  struct Cyc_Dict_Dict _T25;
  struct Cyc_Interface_Ienv * _T26;
  struct Cyc_Dict_Dict _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr * _T29;
  struct Cyc_Interface_Ienv * _T2A;
  struct Cyc_Dict_Dict _T2B;
  struct Cyc_Interface_Ienv * _T2C;
  struct Cyc_Dict_Dict _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr * _T2F;
  struct Cyc_Dict_Dict * _T30;
  unsigned int _T31;
  struct Cyc_Dict_Dict * _T32;
  unsigned int _T33;
  struct Cyc_Dict_Dict * _T34;
  unsigned int _T35;
  struct Cyc_Dict_Dict * _T36;
  unsigned int _T37;
  struct Cyc_Dict_Dict * _T38;
  unsigned int _T39;
  struct Cyc_Dict_Dict * _T3A;
  unsigned int _T3B;
  struct Cyc_Interface_Ienv * _T3C;
  struct Cyc_Dict_Dict * _T3D;
  struct Cyc_Dict_Dict * _T3E;
  struct Cyc_Dict_Dict * _T3F;
  struct Cyc_Dict_Dict * _T40;
  struct Cyc_Dict_Dict * _T41;
  struct Cyc_Dict_Dict * _T42;
  { struct Cyc_Dict_Dict * (* _T43)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
				    struct Cyc_Dict_Dict,struct Cyc_Absyn_Aggrdecl * (*)(struct Cyc_Absyn_Aggrdecl *,
											 struct Cyc_Absyn_Aggrdecl *,
											 unsigned int,
											 struct _fat_ptr *),
				    struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
												     struct Cyc_Dict_Dict,
												     struct Cyc_Dict_Dict,
												     struct Cyc_Absyn_Aggrdecl * (*)(struct Cyc_Absyn_Aggrdecl *,
																     struct Cyc_Absyn_Aggrdecl *,
																     unsigned int,
																     struct _fat_ptr *),
												     struct _fat_ptr,
												     struct _fat_ptr *))Cyc_Interface_compat_merge_dict;
    _T0 = _T43;
  }_T1 = ie1;
  _T2 = _T1->aggrdecls;
  _T3 = ie2;
  _T4 = _T3->aggrdecls;
  _T6 = Cyc_Dict_empty;
  { struct Cyc_Dict_Dict (* _T43)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
														  struct _tuple0 *)))_T6;
    _T5 = _T43;
  }_T7 = Cyc_Absyn_qvar_cmp;
  _T8 = _T5(_T7);
  _T9 = Cyc_Tcdecl_merge_aggrdecl;
  _TA = _tag_fat("type",sizeof(char),5U);
  _TB = msg;
  { struct Cyc_Dict_Dict * r1 = _T0(_T2,_T4,_T8,_T9,_TA,_TB);
    _TC = ie1;
    _TD = _TC->datatypedecls;
    _TE = ie2;
    _TF = _TE->datatypedecls;
    _T10 = _tag_fat("datatype",sizeof(char),9U);
    _T11 = msg;
    { struct Cyc_Dict_Dict * r2 = Cyc_Interface_disj_merge_dict(_TD,_TF,_T10,
								_T11);
      _T12 = ie1;
      _T13 = _T12->enumdecls;
      _T14 = ie2;
      _T15 = _T14->enumdecls;
      _T16 = _tag_fat("enum",sizeof(char),5U);
      _T17 = msg;
      { struct Cyc_Dict_Dict * r3 = Cyc_Interface_disj_merge_dict(_T13,_T15,
								  _T16,_T17);
	{ struct Cyc_Dict_Dict * (* _T43)(struct Cyc_Dict_Dict,struct Cyc_Dict_Dict,
					  struct Cyc_Dict_Dict,struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
												  struct Cyc_Absyn_Typedefdecl *,
												  unsigned int,
												  struct _fat_ptr *),
					  struct _fat_ptr,struct _fat_ptr *) = (struct Cyc_Dict_Dict * (*)(struct Cyc_Dict_Dict,
													   struct Cyc_Dict_Dict,
													   struct Cyc_Dict_Dict,
													   struct Cyc_Absyn_Typedefdecl * (*)(struct Cyc_Absyn_Typedefdecl *,
																	      struct Cyc_Absyn_Typedefdecl *,
																	      unsigned int,
																	      struct _fat_ptr *),
													   struct _fat_ptr,
													   struct _fat_ptr *))Cyc_Interface_compat_merge_dict;
	  _T18 = _T43;
	}_T19 = ie1;
	_T1A = _T19->typedefdecls;
	_T1B = ie2;
	_T1C = _T1B->typedefdecls;
	_T1E = Cyc_Dict_empty;
	{ struct Cyc_Dict_Dict (* _T43)(int (*)(struct _tuple0 *,struct _tuple0 *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct _tuple0 *,
															struct _tuple0 *)))_T1E;
	  _T1D = _T43;
	}_T1F = Cyc_Absyn_qvar_cmp;
	_T20 = _T1D(_T1F);
	_T21 = Cyc_Tcdecl_merge_typedefdecl;
	_T22 = _tag_fat("typedef",sizeof(char),8U);
	_T23 = msg;
	{ struct Cyc_Dict_Dict * r4 = _T18(_T1A,_T1C,_T20,_T21,_T22,_T23);
	  _T24 = ie1;
	  _T25 = _T24->vardecls;
	  _T26 = ie2;
	  _T27 = _T26->vardecls;
	  _T28 = _tag_fat("variable",sizeof(char),9U);
	  _T29 = msg;
	  { struct Cyc_Dict_Dict * r5 = Cyc_Interface_disj_merge_dict(_T25,
								      _T27,
								      _T28,
								      _T29);
	    _T2A = ie1;
	    _T2B = _T2A->xdatatypefielddecls;
	    _T2C = ie2;
	    _T2D = _T2C->xdatatypefielddecls;
	    _T2E = _tag_fat("xdatatypefield",sizeof(char),15U);
	    _T2F = msg;
	    { struct Cyc_Dict_Dict * r6 = Cyc_Interface_disj_merge_dict(_T2B,
									_T2D,
									_T2E,
									_T2F);
	      _T30 = r1;
	      _T31 = (unsigned int)_T30;
	      if (_T31) { goto _TL15F;
	      }else { goto _TL15A;
	      }
	      _TL15F: _T32 = r2;
	      _T33 = (unsigned int)_T32;
	      if (_T33) { goto _TL15E;
	      }else { goto _TL15A;
	      }
	      _TL15E: _T34 = r3;
	      _T35 = (unsigned int)_T34;
	      if (_T35) { goto _TL15D;
	      }else { goto _TL15A;
	      }
	      _TL15D: _T36 = r4;
	      _T37 = (unsigned int)_T36;
	      if (_T37) { goto _TL15C;
	      }else { goto _TL15A;
	      }
	      _TL15C: _T38 = r5;
	      _T39 = (unsigned int)_T38;
	      if (_T39) { goto _TL15B;
	      }else { goto _TL15A;
	      }
	      _TL15B: _T3A = r6;
	      _T3B = (unsigned int)_T3A;
	      if (_T3B) { goto _TL158;
	      }else { goto _TL15A;
	      }
	      _TL15A: return 0;
	      _TL158: { struct Cyc_Interface_Ienv * _T43 = _cycalloc(sizeof(struct Cyc_Interface_Ienv));
		_T3D = r1;
		_T43->aggrdecls = *_T3D;
		_T3E = r2;
		_T43->datatypedecls = *_T3E;
		_T3F = r3;
		_T43->enumdecls = *_T3F;
		_T40 = r4;
		_T43->typedefdecls = *_T40;
		_T41 = r5;
		_T43->vardecls = *_T41;
		_T42 = r6;
		_T43->xdatatypefielddecls = *_T42;
		_T3C = (struct Cyc_Interface_Ienv *)_T43;
	      }return _T3C;
	    }
	  }
	}
      }
    }
  }
}
struct Cyc_Interface_I * Cyc_Interface_merge(struct Cyc_Interface_I * i1,
					     struct Cyc_Interface_I * i2,
					     struct _tuple11 * info) {
  struct _handler_cons * _T0;
  int _T1;
  struct _fat_ptr * _T2;
  struct _fat_ptr _T3;
  struct Cyc_String_pa_PrintArg_struct _T4;
  struct _tuple11 * _T5;
  struct _tuple11 _T6;
  struct Cyc_String_pa_PrintArg_struct _T7;
  struct _tuple11 * _T8;
  struct _tuple11 _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_Interface_I * _TC;
  struct Cyc_Interface_Ienv * _TD;
  struct Cyc_Interface_I * _TE;
  struct Cyc_Interface_Ienv * _TF;
  struct _fat_ptr * _T10;
  struct _fat_ptr * _T11;
  struct _fat_ptr _T12;
  struct Cyc_String_pa_PrintArg_struct _T13;
  struct _tuple11 * _T14;
  struct _tuple11 _T15;
  struct Cyc_String_pa_PrintArg_struct _T16;
  struct _tuple11 * _T17;
  struct _tuple11 _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct Cyc_Interface_I * _T1B;
  struct Cyc_Interface_Ienv * _T1C;
  struct Cyc_Interface_I * _T1D;
  struct Cyc_Interface_Ienv * _T1E;
  struct Cyc_Interface_Ienv * _T1F;
  struct _fat_ptr * _T20;
  struct Cyc_Interface_I * _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_Absyn_Decl * _T23;
  struct Cyc_List_List * _T24;
  void * _T25;
  struct Cyc_Absyn_Decl * _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_List_List * (* _T28)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
							     struct Cyc_Absyn_Decl *),
				  struct Cyc_List_List *,struct Cyc_List_List *);
  void * (* _T29)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_List_List * _T2A;
  struct Cyc_Interface_I * _T2B;
  struct Cyc_List_List * _T2C;
  struct Cyc_List_List * _T2D;
  void * _T2E;
  struct Cyc_Tcdecl_Incompatible_exn_struct * _T2F;
  char * _T30;
  char * _T31;
  struct _handler_cons _T32;
  _T0 = &_T32;
  _push_handler(_T0);
  { int _T33 = 0;
    _T1 = setjmp(_T32.handler);
    if (! _T1) { goto _TL160;
    }
    _T33 = 1;
    goto _TL161;
    _TL160: _TL161: if (_T33) { goto _TL162;
    }else { goto _TL164;
    }
    _TL164: { struct _fat_ptr * msg = 0;
      if (info == 0) { goto _TL165;
      }
      { struct _fat_ptr * _T34 = _cycalloc(sizeof(struct _fat_ptr));
	{ struct Cyc_String_pa_PrintArg_struct _T35;
	  _T35.tag = 0;
	  _T5 = info;
	  _T6 = *_T5;
	  _T35.f1 = _T6.f0;
	  _T4 = _T35;
	}{ struct Cyc_String_pa_PrintArg_struct _T35 = _T4;
	  { struct Cyc_String_pa_PrintArg_struct _T36;
	    _T36.tag = 0;
	    _T8 = info;
	    _T9 = *_T8;
	    _T36.f1 = _T9.f1;
	    _T7 = _T36;
	  }{ struct Cyc_String_pa_PrintArg_struct _T36 = _T7;
	    void * _T37[2];
	    _T37[0] = &_T35;
	    _T37[1] = &_T36;
	    _TA = _tag_fat("merging exports of %s and %s,",sizeof(char),30U);
	    _TB = _tag_fat(_T37,sizeof(void *),2);
	    _T3 = Cyc_aprintf(_TA,_TB);
	  }
	}*_T34 = _T3;
	_T2 = (struct _fat_ptr *)_T34;
      }msg = _T2;
      goto _TL166;
      _TL165: _TL166: _TC = i1;
      _TD = _TC->exports;
      _TE = i2;
      _TF = _TE->exports;
      _T10 = msg;
      { struct Cyc_Interface_Ienv * exp = Cyc_Interface_disj_merge_ienv(_TD,
									_TF,
									_T10);
	if (exp != 0) { goto _TL167;
	}
	{ struct Cyc_Interface_I * _T34 = 0;
	  _npop_handler(0);
	  return _T34;
	}_TL167: if (info == 0) { goto _TL169;
	}
	{ struct _fat_ptr * _T34 = _cycalloc(sizeof(struct _fat_ptr));
	  { struct Cyc_String_pa_PrintArg_struct _T35;
	    _T35.tag = 0;
	    _T14 = info;
	    _T15 = *_T14;
	    _T35.f1 = _T15.f0;
	    _T13 = _T35;
	  }{ struct Cyc_String_pa_PrintArg_struct _T35 = _T13;
	    { struct Cyc_String_pa_PrintArg_struct _T36;
	      _T36.tag = 0;
	      _T17 = info;
	      _T18 = *_T17;
	      _T36.f1 = _T18.f1;
	      _T16 = _T36;
	    }{ struct Cyc_String_pa_PrintArg_struct _T36 = _T16;
	      void * _T37[2];
	      _T37[0] = &_T35;
	      _T37[1] = &_T36;
	      _T19 = _tag_fat("merging imports of %s and %s,",sizeof(char),
			      30U);
	      _T1A = _tag_fat(_T37,sizeof(void *),2);
	      _T12 = Cyc_aprintf(_T19,_T1A);
	    }
	  }*_T34 = _T12;
	  _T11 = (struct _fat_ptr *)_T34;
	}msg = _T11;
	goto _TL16A;
	_TL169: _TL16A: _T1B = i1;
	_T1C = _T1B->imports;
	_T1D = i2;
	_T1E = _T1D->imports;
	_T1F = exp;
	_T20 = msg;
	{ struct Cyc_Interface_Ienv * imp = Cyc_Interface_compat_merge_ienv(_T1C,
									    _T1E,
									    _T1F,
									    _T20);
	  if (imp != 0) { goto _TL16B;
	  }
	  { struct Cyc_Interface_I * _T34 = 0;
	    _npop_handler(0);
	    return _T34;
	  }_TL16B: { struct Cyc_List_List * newtds = 0;
	    _T21 = i2;
	    { struct Cyc_List_List * l = _T21->tds;
	      _TL170: if (l != 0) { goto _TL16E;
	      }else { goto _TL16F;
	      }
	      _TL16E: { struct Cyc_List_List * _T34 = _cycalloc(sizeof(struct Cyc_List_List));
		{ struct Cyc_Absyn_Decl * _T35 = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
		  _T24 = l;
		  _T25 = _T24->hd;
		  _T26 = (struct Cyc_Absyn_Decl *)_T25;
		  *_T35 = *_T26;
		  _T23 = (struct Cyc_Absyn_Decl *)_T35;
		}_T34->hd = _T23;
		_T34->tl = newtds;
		_T22 = (struct Cyc_List_List *)_T34;
	      }newtds = _T22;
	      _T27 = l;
	      l = _T27->tl;
	      goto _TL170;
	      _TL16F: _T29 = Cyc_List_fold_left;
	      { struct Cyc_List_List * (* _T34)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
									   struct Cyc_Absyn_Decl *),
						struct Cyc_List_List *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct Cyc_List_List *,
																			struct Cyc_Absyn_Decl *),
															     struct Cyc_List_List *,
															     struct Cyc_List_List *))_T29;
		_T28 = _T34;
	      }_T2A = newtds;
	      _T2B = i1;
	      _T2C = _T2B->tds;
	      _T2D = _T28(Cyc_Interface_uniqify_decl_list,_T2A,_T2C);
	      newtds = Cyc_List_rev(_T2D);
	      { struct Cyc_Interface_I * _T34;
		_T34 = _cycalloc(sizeof(struct Cyc_Interface_I));
		_T34->imports = imp;
		_T34->exports = exp;
		_T34->tds = newtds;
		_npop_handler(0);
		return _T34;
	      }
	    }
	  }
	}
      }
    }_pop_handler();
    goto _TL163;
    _TL162: _T2E = Cyc_Core_get_exn_thrown();
    { void * _T34 = (void *)_T2E;
      void * _T35;
      _T2F = (struct Cyc_Tcdecl_Incompatible_exn_struct *)_T34;
      _T30 = _T2F->tag;
      _T31 = Cyc_Tcdecl_Incompatible;
      if (_T30 != _T31) { goto _TL171;
      }
      return 0;
      _TL171: _T35 = _T34;
      { void * exn = _T35;
	_rethrow(exn);
      };
    }_TL163: ;
  }
}
struct Cyc_Interface_I * Cyc_Interface_merge_list(struct Cyc_List_List * li,
						  struct Cyc_List_List * linfo) {
  struct Cyc_Interface_I * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct _fat_ptr * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Interface_I * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct Cyc_Interface_I * _TB;
  struct _tuple11 * _TC;
  struct _tuple11 * _TD;
  struct _fat_ptr * _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  struct _fat_ptr * _T11;
  struct _fat_ptr * _T12;
  struct _fat_ptr * _T13;
  struct _fat_ptr _T14;
  struct Cyc_String_pa_PrintArg_struct _T15;
  struct _fat_ptr * _T16;
  struct Cyc_String_pa_PrintArg_struct _T17;
  struct Cyc_List_List * _T18;
  void * _T19;
  struct _fat_ptr * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_Interface_I * _T1F;
  if (li != 0) { goto _TL173;
  }
  _T0 = Cyc_Interface_empty();
  return _T0;
  _TL173: _T1 = li;
  _T2 = _T1->hd;
  { struct Cyc_Interface_I * curr_i = (struct Cyc_Interface_I *)_T2;
    if (linfo == 0) { goto _TL175;
    }
    _T4 = linfo;
    _T5 = _T4->hd;
    _T3 = (struct _fat_ptr *)_T5;
    goto _TL176;
    _TL175: _T3 = 0;
    _TL176: { struct _fat_ptr * curr_info = _T3;
      _T6 = li;
      li = _T6->tl;
      if (linfo == 0) { goto _TL177;
      }
      _T7 = linfo;
      linfo = _T7->tl;
      goto _TL178;
      _TL177: _TL178: _TL17C: if (li != 0) { goto _TL17A;
      }else { goto _TL17B;
      }
      _TL17A: _T8 = curr_i;
      _T9 = li;
      _TA = _T9->hd;
      _TB = (struct Cyc_Interface_I *)_TA;
      if (curr_info == 0) { goto _TL17D;
      }
      if (linfo == 0) { goto _TL17D;
      }
      { struct _tuple11 * _T20 = _cycalloc(sizeof(struct _tuple11));
	_TE = curr_info;
	_T20->f0 = *_TE;
	_TF = linfo;
	_T10 = _TF->hd;
	_T11 = (struct _fat_ptr *)_T10;
	_T20->f1 = *_T11;
	_TD = (struct _tuple11 *)_T20;
      }_TC = _TD;
      goto _TL17E;
      _TL17D: _TC = 0;
      _TL17E: { struct Cyc_Interface_I * i = Cyc_Interface_merge(_T8,_TB,
								 _TC);
	if (i != 0) { goto _TL17F;
	}
	return 0;
	_TL17F: curr_i = i;
	if (curr_info == 0) { goto _TL181;
	}
	if (linfo == 0) { goto _TL183;
	}
	{ struct _fat_ptr * _T20 = _cycalloc(sizeof(struct _fat_ptr));
	  { struct Cyc_String_pa_PrintArg_struct _T21;
	    _T21.tag = 0;
	    _T16 = curr_info;
	    _T21.f1 = *_T16;
	    _T15 = _T21;
	  }{ struct Cyc_String_pa_PrintArg_struct _T21 = _T15;
	    { struct Cyc_String_pa_PrintArg_struct _T22;
	      _T22.tag = 0;
	      _T18 = linfo;
	      _T19 = _T18->hd;
	      _T1A = (struct _fat_ptr *)_T19;
	      _T22.f1 = *_T1A;
	      _T17 = _T22;
	    }{ struct Cyc_String_pa_PrintArg_struct _T22 = _T17;
	      void * _T23[2];
	      _T23[0] = &_T21;
	      _T23[1] = &_T22;
	      _T1B = _tag_fat("%s+%s",sizeof(char),6U);
	      _T1C = _tag_fat(_T23,sizeof(void *),2);
	      _T14 = Cyc_aprintf(_T1B,_T1C);
	    }
	  }*_T20 = _T14;
	  _T13 = (struct _fat_ptr *)_T20;
	}_T12 = _T13;
	goto _TL184;
	_TL183: _T12 = 0;
	_TL184: curr_info = _T12;
	goto _TL182;
	_TL181: _TL182: if (linfo == 0) { goto _TL185;
	}
	_T1D = linfo;
	linfo = _T1D->tl;
	goto _TL186;
	_TL185: _TL186: ;
      }_T1E = li;
      li = _T1E->tl;
      goto _TL17C;
      _TL17B: _T1F = curr_i;
      return _T1F;
    }
  }
}
struct Cyc_Interface_I * Cyc_Interface_get_and_merge_list(struct Cyc_Interface_I * (* get)(void *),
							  struct Cyc_List_List * la,
							  struct Cyc_List_List * linfo) {
  struct Cyc_Interface_I * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct _fat_ptr * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Interface_I * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct Cyc_Interface_I * _TB;
  struct _tuple11 * _TC;
  struct _tuple11 * _TD;
  struct _fat_ptr * _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  struct _fat_ptr * _T11;
  struct _fat_ptr * _T12;
  struct _fat_ptr * _T13;
  struct _fat_ptr _T14;
  struct Cyc_String_pa_PrintArg_struct _T15;
  struct _fat_ptr * _T16;
  struct Cyc_String_pa_PrintArg_struct _T17;
  struct Cyc_List_List * _T18;
  void * _T19;
  struct _fat_ptr * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_Interface_I * _T1F;
  if (la != 0) { goto _TL187;
  }
  _T0 = Cyc_Interface_empty();
  return _T0;
  _TL187: _T1 = la;
  _T2 = _T1->hd;
  { struct Cyc_Interface_I * curr_i = get(_T2);
    if (linfo == 0) { goto _TL189;
    }
    _T4 = linfo;
    _T5 = _T4->hd;
    _T3 = (struct _fat_ptr *)_T5;
    goto _TL18A;
    _TL189: _T3 = 0;
    _TL18A: { struct _fat_ptr * curr_info = _T3;
      _T6 = la;
      la = _T6->tl;
      if (linfo == 0) { goto _TL18B;
      }
      _T7 = linfo;
      linfo = _T7->tl;
      goto _TL18C;
      _TL18B: _TL18C: _TL190: if (la != 0) { goto _TL18E;
      }else { goto _TL18F;
      }
      _TL18E: _T8 = curr_i;
      _T9 = la;
      _TA = _T9->hd;
      _TB = get(_TA);
      if (curr_info == 0) { goto _TL191;
      }
      if (linfo == 0) { goto _TL191;
      }
      { struct _tuple11 * _T20 = _cycalloc(sizeof(struct _tuple11));
	_TE = curr_info;
	_T20->f0 = *_TE;
	_TF = linfo;
	_T10 = _TF->hd;
	_T11 = (struct _fat_ptr *)_T10;
	_T20->f1 = *_T11;
	_TD = (struct _tuple11 *)_T20;
      }_TC = _TD;
      goto _TL192;
      _TL191: _TC = 0;
      _TL192: { struct Cyc_Interface_I * i = Cyc_Interface_merge(_T8,_TB,
								 _TC);
	if (i != 0) { goto _TL193;
	}
	return 0;
	_TL193: curr_i = i;
	if (curr_info == 0) { goto _TL195;
	}
	if (linfo == 0) { goto _TL197;
	}
	{ struct _fat_ptr * _T20 = _cycalloc(sizeof(struct _fat_ptr));
	  { struct Cyc_String_pa_PrintArg_struct _T21;
	    _T21.tag = 0;
	    _T16 = curr_info;
	    _T21.f1 = *_T16;
	    _T15 = _T21;
	  }{ struct Cyc_String_pa_PrintArg_struct _T21 = _T15;
	    { struct Cyc_String_pa_PrintArg_struct _T22;
	      _T22.tag = 0;
	      _T18 = linfo;
	      _T19 = _T18->hd;
	      _T1A = (struct _fat_ptr *)_T19;
	      _T22.f1 = *_T1A;
	      _T17 = _T22;
	    }{ struct Cyc_String_pa_PrintArg_struct _T22 = _T17;
	      void * _T23[2];
	      _T23[0] = &_T21;
	      _T23[1] = &_T22;
	      _T1B = _tag_fat("%s+%s",sizeof(char),6U);
	      _T1C = _tag_fat(_T23,sizeof(void *),2);
	      _T14 = Cyc_aprintf(_T1B,_T1C);
	    }
	  }*_T20 = _T14;
	  _T13 = (struct _fat_ptr *)_T20;
	}_T12 = _T13;
	goto _TL198;
	_TL197: _T12 = 0;
	_TL198: curr_info = _T12;
	goto _TL196;
	_TL195: _TL196: if (linfo == 0) { goto _TL199;
	}
	_T1D = linfo;
	linfo = _T1D->tl;
	goto _TL19A;
	_TL199: _TL19A: ;
      }_T1E = la;
      la = _T1E->tl;
      goto _TL190;
      _TL18F: _T1F = curr_i;
      return _T1F;
    }
  }
}
static struct Cyc_List_List * Cyc_Interface_add_namespace(struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  int * _T3;
  unsigned int _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  struct Cyc_Absyn_Fndecl * _T6;
  struct Cyc_Absyn_Aggrdecl * _T7;
  struct Cyc_Absyn_Datatypedecl * _T8;
  struct Cyc_Absyn_Enumdecl * _T9;
  struct Cyc_Absyn_Typedefdecl * _TA;
  struct _fat_ptr _TB;
  struct _tuple0 * _TC;
  struct _tuple0 _TD;
  struct _union_Nmspace_Rel_n _TE;
  unsigned int _TF;
  struct _union_Nmspace_Abs_n _T10;
  struct _union_Nmspace_C_n _T11;
  struct _union_Nmspace_Rel_n _T12;
  struct _union_Nmspace_Loc_n _T13;
  struct _fat_ptr _T14;
  struct _tuple0 * _T15;
  struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct Cyc_List_List * _T19;
  void * _T1A;
  struct Cyc_Absyn_Decl * _T1B;
  unsigned int _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * ans = 0;
  _TL19E: if (tds != 0) { goto _TL19C;
  }else { goto _TL19D;
  }
  _TL19C: { struct _tuple0 * qv;
    _T0 = tds;
    _T1 = _T0->hd;
    { struct Cyc_Absyn_Decl * d = (struct Cyc_Absyn_Decl *)_T1;
      _T2 = d;
      { void * _T21 = _T2->r;
	struct Cyc_Absyn_Typedefdecl * _T22;
	struct Cyc_Absyn_Enumdecl * _T23;
	struct Cyc_Absyn_Datatypedecl * _T24;
	struct Cyc_Absyn_Aggrdecl * _T25;
	struct Cyc_Absyn_Fndecl * _T26;
	struct Cyc_Absyn_Vardecl * _T27;
	_T3 = (int *)_T21;
	_T4 = *_T3;
	switch (_T4) {
	case 0: 
	  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T21;
	    _T27 = _T28->f1;
	  }{ struct Cyc_Absyn_Vardecl * vd = _T27;
	    _T5 = vd;
	    qv = _T5->name;
	    goto _LL0;
	  }
	case 1: 
	  { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T21;
	    _T26 = _T28->f1;
	  }{ struct Cyc_Absyn_Fndecl * fd = _T26;
	    _T6 = fd;
	    qv = _T6->name;
	    goto _LL0;
	  }
	case 5: 
	  { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T21;
	    _T25 = _T28->f1;
	  }{ struct Cyc_Absyn_Aggrdecl * ad = _T25;
	    _T7 = ad;
	    qv = _T7->name;
	    goto _LL0;
	  }
	case 6: 
	  { struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct *)_T21;
	    _T24 = _T28->f1;
	  }{ struct Cyc_Absyn_Datatypedecl * dd = _T24;
	    _T8 = dd;
	    qv = _T8->name;
	    goto _LL0;
	  }
	case 7: 
	  { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T21;
	    _T23 = _T28->f1;
	  }{ struct Cyc_Absyn_Enumdecl * ed = _T23;
	    _T9 = ed;
	    qv = _T9->name;
	    goto _LL0;
	  }
	case 8: 
	  { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T21;
	    _T22 = _T28->f1;
	  }{ struct Cyc_Absyn_Typedefdecl * td = _T22;
	    _TA = td;
	    qv = _TA->name;
	    goto _LL0;
	  }
	default: 
	  _TB = _tag_fat("bad decl form in Interface::add_namespace",sizeof(char),
			 42U);
	  Cyc_Interface_err(_TB);
	  return 0;
	}
	_LL0: ;
      }{ struct Cyc_List_List * vs;
	_TC = qv;
	_TD = *_TC;
	{ union Cyc_Absyn_Nmspace _T21 = _TD.f0;
	  int _T22;
	  struct Cyc_List_List * _T23;
	  _TE = _T21.Rel_n;
	  _TF = _TE.tag;
	  switch (_TF) {
	  case 1: 
	    _T10 = _T21.Abs_n;
	    _T23 = _T10.val;
	    { struct Cyc_List_List * x = _T23;
	      vs = x;
	      goto _LLF;
	    }
	  case 3: 
	    _T11 = _T21.C_n;
	    _T23 = _T11.val;
	    { struct Cyc_List_List * x = _T23;
	      vs = x;
	      goto _LLF;
	    }
	  case 2: 
	    _T12 = _T21.Rel_n;
	    _T23 = _T12.val;
	    { struct Cyc_List_List * x = _T23;
	      vs = x;
	      goto _LLF;
	    }
	  default: 
	    _T13 = _T21.Loc_n;
	    _T22 = _T13.val;
	    { int x = _T22;
	      _T14 = _tag_fat("bad namespace in Interface::add_namespace (Loc_n)",
			      sizeof(char),50U);
	      Cyc_Interface_err(_T14);
	      return 0;
	    }
	  }
	  _LLF: ;
	}vs = Cyc_List_imp_rev(vs);
	_T15 = qv;
	(*_T15).f0 = Cyc_Absyn_Rel_n(0);
	_TL1A4: if (vs != 0) { goto _TL1A2;
	}else { goto _TL1A3;
	}
	_TL1A2: { struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T21 = _cycalloc(sizeof(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct));
	  _T21->tag = 9;
	  _T17 = vs;
	  _T18 = _T17->hd;
	  _T21->f1 = (struct _fat_ptr *)_T18;
	  { struct Cyc_List_List * _T22 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T22->hd = d;
	    _T22->tl = 0;
	    _T19 = (struct Cyc_List_List *)_T22;
	  }_T21->f2 = _T19;
	  _T16 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T21;
	}_T1A = (void *)_T16;
	_T1B = d;
	_T1C = _T1B->loc;
	d = Cyc_Absyn_new_decl(_T1A,_T1C);
	_T1D = vs;
	vs = _T1D->tl;
	goto _TL1A4;
	_TL1A3: { struct Cyc_List_List * _T21 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T21->hd = d;
	  _T21->tl = ans;
	  _T1E = (struct Cyc_List_List *)_T21;
	}ans = _T1E;
      }
    }
  }_T1F = tds;
  tds = _T1F->tl;
  goto _TL19E;
  _TL19D: _T20 = Cyc_List_imp_rev(ans);
  return _T20;
}
static struct Cyc_List_List * Cyc_Interface_add_aggrdecl(struct _tuple0 * x,
							 struct Cyc_Absyn_Aggrdecl * d,
							 struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T1;
  void * _T2;
  { struct Cyc_List_List * _T3 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T4 = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
      _T4->tag = 5;
      _T4->f1 = d;
      _T1 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T4;
    }_T2 = (void *)_T1;
    _T3->hd = Cyc_Absyn_new_decl(_T2,0U);
    _T3->tl = tds;
    _T0 = (struct Cyc_List_List *)_T3;
  }return _T0;
}
static struct Cyc_List_List * Cyc_Interface_add_aggrdecl_header(struct _tuple0 * x,
								struct Cyc_Absyn_Aggrdecl * d,
								struct Cyc_List_List * tds) {
  struct Cyc_Absyn_Aggrdecl * _T0;
  struct Cyc_Absyn_Aggrdecl * _T1;
  struct Cyc_Absyn_Aggrdecl * _T2;
  struct Cyc_Absyn_Aggrdecl * _T3;
  enum Cyc_Absyn_Scope _T4;
  int _T5;
  struct Cyc_Absyn_Aggrdecl * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T8;
  void * _T9;
  { struct Cyc_Absyn_Aggrdecl * _TA = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
    _T1 = d;
    *_TA = *_T1;
    _T0 = (struct Cyc_Absyn_Aggrdecl *)_TA;
  }d = _T0;
  _T2 = d;
  _T2->impl = 0;
  _T3 = d;
  _T4 = _T3->sc;
  _T5 = (int)_T4;
  if (_T5 == 4) { goto _TL1A5;
  }
  _T6 = d;
  _T6->sc = 3U;
  goto _TL1A6;
  _TL1A5: _TL1A6: { struct Cyc_List_List * _TA = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _TB = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
      _TB->tag = 5;
      _TB->f1 = d;
      _T8 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_TB;
    }_T9 = (void *)_T8;
    _TA->hd = Cyc_Absyn_new_decl(_T9,0U);
    _TA->tl = tds;
    _T7 = (struct Cyc_List_List *)_TA;
  }return _T7;
}
static struct Cyc_List_List * Cyc_Interface_add_datatypedecl(struct _tuple0 * x,
							     struct Cyc_Absyn_Datatypedecl * d,
							     struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T1;
  void * _T2;
  { struct Cyc_List_List * _T3 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T4 = _cycalloc(sizeof(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct));
      _T4->tag = 6;
      _T4->f1 = d;
      _T1 = (struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct *)_T4;
    }_T2 = (void *)_T1;
    _T3->hd = Cyc_Absyn_new_decl(_T2,0U);
    _T3->tl = tds;
    _T0 = (struct Cyc_List_List *)_T3;
  }return _T0;
}
static char _TmpG0[2U] = "_";
static struct _fat_ptr Cyc_Interface_us = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
					   (unsigned char *)_TmpG0 + 2U};
static struct _fat_ptr * Cyc_Interface_us_p = (struct _fat_ptr *)&Cyc_Interface_us;
static struct _tuple15 * Cyc_Interface_rewrite_datatypefield_type(struct _tuple15 * x) {
  struct _tuple15 * _T0;
  struct Cyc_Absyn_VarType_Absyn_Type_struct * _T1;
  struct Cyc_Absyn_Tvar * _T2;
  struct Cyc_Absyn_Kind * _T3;
  struct Cyc_Absyn_Kind * _T4;
  { struct _tuple15 * _T5 = _cycalloc(sizeof(struct _tuple15));
    _T5->f0 = Cyc_Absyn_empty_tqual(0U);
    { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T6 = _cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));
      _T6->tag = 2;
      { struct Cyc_Absyn_Tvar * _T7 = _cycalloc(sizeof(struct Cyc_Absyn_Tvar));
	_T7->name = Cyc_Interface_us_p;
	_T7->identity = - 1;
	_T3 = &Cyc_Kinds_bk;
	_T4 = (struct Cyc_Absyn_Kind *)_T3;
	_T7->kind = Cyc_Kinds_kind_to_bound(_T4);
	_T7->aquals_bound = 0;
	_T2 = (struct Cyc_Absyn_Tvar *)_T7;
      }_T6->f1 = _T2;
      _T1 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T6;
    }_T5->f1 = (void *)_T1;
    _T0 = (struct _tuple15 *)_T5;
  }return _T0;
}
static struct Cyc_Absyn_Datatypefield * Cyc_Interface_rewrite_datatypefield(struct Cyc_Absyn_Datatypefield * f) {
  struct Cyc_Absyn_Datatypefield * _T0;
  struct Cyc_Absyn_Datatypefield * _T1;
  struct Cyc_Absyn_Datatypefield * _T2;
  struct Cyc_List_List * (* _T3)(struct _tuple15 * (*)(struct _tuple15 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T4)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Datatypefield * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_Absyn_Datatypefield * _T7;
  { struct Cyc_Absyn_Datatypefield * _T8 = _cycalloc(sizeof(struct Cyc_Absyn_Datatypefield));
    _T1 = f;
    *_T8 = *_T1;
    _T0 = (struct Cyc_Absyn_Datatypefield *)_T8;
  }f = _T0;
  _T2 = f;
  _T4 = Cyc_List_map;
  { struct Cyc_List_List * (* _T8)(struct _tuple15 * (*)(struct _tuple15 *),
				   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple15 * (*)(struct _tuple15 *),
											 struct Cyc_List_List *))_T4;
    _T3 = _T8;
  }_T5 = f;
  _T6 = _T5->typs;
  _T2->typs = _T3(Cyc_Interface_rewrite_datatypefield_type,_T6);
  _T7 = f;
  return _T7;
}
static struct Cyc_List_List * Cyc_Interface_add_datatypedecl_header(struct _tuple0 * x,
								    struct Cyc_Absyn_Datatypedecl * d,
								    struct Cyc_List_List * tds) {
  struct Cyc_Absyn_Datatypedecl * _T0;
  struct Cyc_Absyn_Datatypedecl * _T1;
  struct Cyc_Absyn_Datatypedecl * _T2;
  struct Cyc_Core_Opt * _T3;
  struct Cyc_Absyn_Datatypedecl * _T4;
  struct Cyc_Core_Opt * _T5;
  struct Cyc_List_List * (* _T6)(struct Cyc_Absyn_Datatypefield * (*)(struct Cyc_Absyn_Datatypefield *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T7)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Datatypedecl * _T8;
  struct Cyc_Core_Opt * _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_Absyn_Datatypedecl * _TC;
  enum Cyc_Absyn_Scope _TD;
  int _TE;
  struct Cyc_Absyn_Datatypedecl * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T11;
  void * _T12;
  { struct Cyc_Absyn_Datatypedecl * _T13 = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
    _T1 = d;
    *_T13 = *_T1;
    _T0 = (struct Cyc_Absyn_Datatypedecl *)_T13;
  }d = _T0;
  _T2 = d;
  _T3 = _T2->fields;
  if (_T3 == 0) { goto _TL1A7;
  }
  _T4 = d;
  { struct Cyc_Core_Opt * _T13 = _cycalloc(sizeof(struct Cyc_Core_Opt));
    _T7 = Cyc_List_map;
    { struct Cyc_List_List * (* _T14)(struct Cyc_Absyn_Datatypefield * (*)(struct Cyc_Absyn_Datatypefield *),
				      struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Datatypefield * (*)(struct Cyc_Absyn_Datatypefield *),
											    struct Cyc_List_List *))_T7;
      _T6 = _T14;
    }_T8 = d;
    _T9 = _T8->fields;
    _TA = _T9->v;
    _TB = (struct Cyc_List_List *)_TA;
    _T13->v = _T6(Cyc_Interface_rewrite_datatypefield,_TB);
    _T5 = (struct Cyc_Core_Opt *)_T13;
  }_T4->fields = _T5;
  goto _TL1A8;
  _TL1A7: _TL1A8: _TC = d;
  _TD = _TC->sc;
  _TE = (int)_TD;
  if (_TE == 4) { goto _TL1A9;
  }
  _TF = d;
  _TF->sc = 3U;
  goto _TL1AA;
  _TL1A9: _TL1AA: { struct Cyc_List_List * _T13 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T14 = _cycalloc(sizeof(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct));
      _T14->tag = 6;
      _T14->f1 = d;
      _T11 = (struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct *)_T14;
    }_T12 = (void *)_T11;
    _T13->hd = Cyc_Absyn_new_decl(_T12,0U);
    _T13->tl = tds;
    _T10 = (struct Cyc_List_List *)_T13;
  }return _T10;
}
static struct Cyc_List_List * Cyc_Interface_add_enumdecl(struct _tuple0 * x,
							 struct Cyc_Absyn_Enumdecl * d,
							 struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T1;
  void * _T2;
  { struct Cyc_List_List * _T3 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T4 = _cycalloc(sizeof(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct));
      _T4->tag = 7;
      _T4->f1 = d;
      _T1 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T4;
    }_T2 = (void *)_T1;
    _T3->hd = Cyc_Absyn_new_decl(_T2,0U);
    _T3->tl = tds;
    _T0 = (struct Cyc_List_List *)_T3;
  }return _T0;
}
static struct Cyc_List_List * Cyc_Interface_add_enumdecl_header(struct _tuple0 * x,
								struct Cyc_Absyn_Enumdecl * d,
								struct Cyc_List_List * tds) {
  struct Cyc_Absyn_Enumdecl * _T0;
  struct Cyc_Absyn_Enumdecl * _T1;
  struct Cyc_Absyn_Enumdecl * _T2;
  struct Cyc_Absyn_Enumdecl * _T3;
  enum Cyc_Absyn_Scope _T4;
  int _T5;
  struct Cyc_Absyn_Enumdecl * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T8;
  void * _T9;
  { struct Cyc_Absyn_Enumdecl * _TA = _cycalloc(sizeof(struct Cyc_Absyn_Enumdecl));
    _T1 = d;
    *_TA = *_T1;
    _T0 = (struct Cyc_Absyn_Enumdecl *)_TA;
  }d = _T0;
  _T2 = d;
  _T2->fields = 0;
  _T3 = d;
  _T4 = _T3->sc;
  _T5 = (int)_T4;
  if (_T5 == 4) { goto _TL1AB;
  }
  _T6 = d;
  _T6->sc = 3U;
  goto _TL1AC;
  _TL1AB: _TL1AC: { struct Cyc_List_List * _TA = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _TB = _cycalloc(sizeof(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct));
      _TB->tag = 7;
      _TB->f1 = d;
      _T8 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_TB;
    }_T9 = (void *)_T8;
    _TA->hd = Cyc_Absyn_new_decl(_T9,0U);
    _TA->tl = tds;
    _T7 = (struct Cyc_List_List *)_TA;
  }return _T7;
}
static struct Cyc_List_List * Cyc_Interface_add_typedef(struct _tuple0 * x,
							struct Cyc_Absyn_Typedefdecl * d,
							struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T1;
  void * _T2;
  { struct Cyc_List_List * _T3 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T4 = _cycalloc(sizeof(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct));
      _T4->tag = 8;
      _T4->f1 = d;
      _T1 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T4;
    }_T2 = (void *)_T1;
    _T3->hd = Cyc_Absyn_new_decl(_T2,0U);
    _T3->tl = tds;
    _T0 = (struct Cyc_List_List *)_T3;
  }return _T0;
}
static struct Cyc_List_List * Cyc_Interface_add_vardecl(struct _tuple0 * x,
							struct Cyc_Absyn_Vardecl * d,
							struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T1;
  void * _T2;
  { struct Cyc_List_List * _T3 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T4 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
      _T4->tag = 0;
      _T4->f1 = d;
      _T1 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T4;
    }_T2 = (void *)_T1;
    _T3->hd = Cyc_Absyn_new_decl(_T2,0U);
    _T3->tl = tds;
    _T0 = (struct Cyc_List_List *)_T3;
  }return _T0;
}
static struct Cyc_List_List * Cyc_Interface_add_xdatatypefielddecl(struct _tuple0 * x,
								   struct Cyc_Tcdecl_Xdatatypefielddecl * d,
								   struct Cyc_List_List * tds) {
  struct Cyc_Tcdecl_Xdatatypefielddecl * _T0;
  struct Cyc_Absyn_Datatypedecl * _T1;
  struct Cyc_Absyn_Datatypedecl * _T2;
  struct Cyc_Absyn_Datatypedecl * _T3;
  struct Cyc_Core_Opt * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_Absyn_Datatypedecl * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T8;
  void * _T9;
  struct Cyc_Absyn_Datatypefield * _TA;
  struct Cyc_Absyn_Datatypedecl * _TB;
  _T0 = d;
  { struct Cyc_Tcdecl_Xdatatypefielddecl _TC = *_T0;
    _TB = _TC.base;
    _TA = _TC.field;
  }{ struct Cyc_Absyn_Datatypedecl * b = _TB;
    struct Cyc_Absyn_Datatypefield * f = _TA;
    { struct Cyc_Absyn_Datatypedecl * _TC = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
      _T2 = b;
      *_TC = *_T2;
      _T1 = (struct Cyc_Absyn_Datatypedecl *)_TC;
    }b = _T1;
    _T3 = b;
    { struct Cyc_Core_Opt * _TC = _cycalloc(sizeof(struct Cyc_Core_Opt));
      { struct Cyc_List_List * _TD = _cycalloc(sizeof(struct Cyc_List_List));
	_TD->hd = f;
	_TD->tl = 0;
	_T5 = (struct Cyc_List_List *)_TD;
      }_TC->v = _T5;
      _T4 = (struct Cyc_Core_Opt *)_TC;
    }_T3->fields = _T4;
    _T6 = b;
    _T6->sc = 3U;
    { struct Cyc_List_List * _TC = _cycalloc(sizeof(struct Cyc_List_List));
      { struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _TD = _cycalloc(sizeof(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct));
	_TD->tag = 6;
	_TD->f1 = b;
	_T8 = (struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct *)_TD;
      }_T9 = (void *)_T8;
      _TC->hd = Cyc_Absyn_new_decl(_T9,0U);
      _TC->tl = tds;
      _T7 = (struct Cyc_List_List *)_TC;
    }return _T7;
  }
}
static struct Cyc_List_List * Cyc_Interface_add_xdatatypefielddecl_header(struct _tuple0 * x,
									  struct Cyc_Tcdecl_Xdatatypefielddecl * d,
									  struct Cyc_List_List * tds) {
  struct Cyc_Tcdecl_Xdatatypefielddecl * _T0;
  struct Cyc_Absyn_Datatypedecl * _T1;
  struct Cyc_Absyn_Datatypedecl * _T2;
  struct Cyc_Absyn_Datatypefield * _T3;
  struct Cyc_Absyn_Datatypedecl * _T4;
  struct Cyc_Core_Opt * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_Absyn_Datatypedecl * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T9;
  void * _TA;
  struct Cyc_Absyn_Datatypefield * _TB;
  struct Cyc_Absyn_Datatypedecl * _TC;
  _T0 = d;
  { struct Cyc_Tcdecl_Xdatatypefielddecl _TD = *_T0;
    _TC = _TD.base;
    _TB = _TD.field;
  }{ struct Cyc_Absyn_Datatypedecl * b = _TC;
    struct Cyc_Absyn_Datatypefield * f = _TB;
    { struct Cyc_Absyn_Datatypedecl * _TD = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
      _T2 = b;
      *_TD = *_T2;
      _T1 = (struct Cyc_Absyn_Datatypedecl *)_TD;
    }b = _T1;
    f = Cyc_Interface_rewrite_datatypefield(f);
    _T3 = f;
    _T3->sc = 3U;
    _T4 = b;
    { struct Cyc_Core_Opt * _TD = _cycalloc(sizeof(struct Cyc_Core_Opt));
      { struct Cyc_List_List * _TE = _cycalloc(sizeof(struct Cyc_List_List));
	_TE->hd = f;
	_TE->tl = 0;
	_T6 = (struct Cyc_List_List *)_TE;
      }_TD->v = _T6;
      _T5 = (struct Cyc_Core_Opt *)_TD;
    }_T4->fields = _T5;
    _T7 = b;
    _T7->sc = 3U;
    { struct Cyc_List_List * _TD = _cycalloc(sizeof(struct Cyc_List_List));
      { struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _TE = _cycalloc(sizeof(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct));
	_TE->tag = 6;
	_TE->f1 = b;
	_T9 = (struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct *)_TE;
      }_TA = (void *)_T9;
      _TD->hd = Cyc_Absyn_new_decl(_TA,0U);
      _TD->tl = tds;
      _T8 = (struct Cyc_List_List *)_TD;
    }return _T8;
  }
}
static void Cyc_Interface_print_ns_headers(struct Cyc___cycFILE * f,struct Cyc_Interface_Ienv * ie) {
  struct Cyc_List_List * (* _T0)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Absyn_Aggrdecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T1)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _T2;
  struct Cyc_Dict_Dict _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * (* _T5)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Absyn_Datatypedecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T6)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _T7;
  struct Cyc_Dict_Dict _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * (* _TA)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Absyn_Enumdecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _TB)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _TC;
  struct Cyc_Dict_Dict _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc___cycFILE * _T11;
  struct Cyc_List_List * tds = 0;
  _T1 = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T12)(struct Cyc_List_List * (*)(struct _tuple0 *,
							       struct Cyc_Absyn_Aggrdecl *,
							       struct Cyc_List_List *),
				    struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	  struct Cyc_Absyn_Aggrdecl *,
																	  struct Cyc_List_List *),
													       struct Cyc_Dict_Dict,
													       struct Cyc_List_List *))_T1;
    _T0 = _T12;
  }_T2 = ie;
  _T3 = _T2->aggrdecls;
  _T4 = tds;
  tds = _T0(Cyc_Interface_add_aggrdecl_header,_T3,_T4);
  _T6 = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T12)(struct Cyc_List_List * (*)(struct _tuple0 *,
							       struct Cyc_Absyn_Datatypedecl *,
							       struct Cyc_List_List *),
				    struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	  struct Cyc_Absyn_Datatypedecl *,
																	  struct Cyc_List_List *),
													       struct Cyc_Dict_Dict,
													       struct Cyc_List_List *))_T6;
    _T5 = _T12;
  }_T7 = ie;
  _T8 = _T7->datatypedecls;
  _T9 = tds;
  tds = _T5(Cyc_Interface_add_datatypedecl_header,_T8,_T9);
  _TB = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T12)(struct Cyc_List_List * (*)(struct _tuple0 *,
							       struct Cyc_Absyn_Enumdecl *,
							       struct Cyc_List_List *),
				    struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	  struct Cyc_Absyn_Enumdecl *,
																	  struct Cyc_List_List *),
													       struct Cyc_Dict_Dict,
													       struct Cyc_List_List *))_TB;
    _TA = _T12;
  }_TC = ie;
  _TD = _TC->enumdecls;
  _TE = tds;
  tds = _TA(Cyc_Interface_add_enumdecl_header,_TD,_TE);
  if (tds == 0) { goto _TL1AD;
  }
  _TF = Cyc_List_imp_rev(tds);
  _T10 = Cyc_Interface_add_namespace(_TF);
  _T11 = f;
  Cyc_Absynpp_decllist2file(_T10,_T11);
  goto _TL1AE;
  _TL1AD: _TL1AE: ;
}
static void Cyc_Interface_print_ns_xdatatypefielddecl_headers(struct Cyc___cycFILE * f,
							      struct Cyc_Interface_Ienv * ie) {
  struct Cyc_List_List * (* _T0)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Tcdecl_Xdatatypefielddecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T1)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _T2;
  struct Cyc_Dict_Dict _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc___cycFILE * _T6;
  _T1 = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T7)(struct Cyc_List_List * (*)(struct _tuple0 *,
							      struct Cyc_Tcdecl_Xdatatypefielddecl *,
							      struct Cyc_List_List *),
				   struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	 struct Cyc_Tcdecl_Xdatatypefielddecl *,
																	 struct Cyc_List_List *),
													      struct Cyc_Dict_Dict,
													      struct Cyc_List_List *))_T1;
    _T0 = _T7;
  }_T2 = ie;
  _T3 = _T2->xdatatypefielddecls;
  { struct Cyc_List_List * tds = _T0(Cyc_Interface_add_xdatatypefielddecl_header,
				     _T3,0);
    if (tds == 0) { goto _TL1AF;
    }
    _T4 = Cyc_List_imp_rev(tds);
    _T5 = Cyc_Interface_add_namespace(_T4);
    _T6 = f;
    Cyc_Absynpp_decllist2file(_T5,_T6);
    goto _TL1B0;
    _TL1AF: _TL1B0: ;
  }
}
static void Cyc_Interface_print_ns_typedefs(struct Cyc___cycFILE * f,struct Cyc_Interface_Ienv * ie) {
  struct Cyc_List_List * (* _T0)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Absyn_Typedefdecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T1)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _T2;
  struct Cyc_Dict_Dict _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc___cycFILE * _T6;
  _T1 = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T7)(struct Cyc_List_List * (*)(struct _tuple0 *,
							      struct Cyc_Absyn_Typedefdecl *,
							      struct Cyc_List_List *),
				   struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	 struct Cyc_Absyn_Typedefdecl *,
																	 struct Cyc_List_List *),
													      struct Cyc_Dict_Dict,
													      struct Cyc_List_List *))_T1;
    _T0 = _T7;
  }_T2 = ie;
  _T3 = _T2->typedefdecls;
  { struct Cyc_List_List * tds = _T0(Cyc_Interface_add_typedef,_T3,0);
    if (tds == 0) { goto _TL1B1;
    }
    _T4 = Cyc_List_imp_rev(tds);
    _T5 = Cyc_Interface_add_namespace(_T4);
    _T6 = f;
    Cyc_Absynpp_decllist2file(_T5,_T6);
    goto _TL1B2;
    _TL1B1: _TL1B2: ;
  }
}
static void Cyc_Interface_print_ns_decls(struct Cyc___cycFILE * f,struct Cyc_Interface_Ienv * ie) {
  struct Cyc_List_List * (* _T0)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Absyn_Aggrdecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T1)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _T2;
  struct Cyc_Dict_Dict _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * (* _T5)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Absyn_Datatypedecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T6)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _T7;
  struct Cyc_Dict_Dict _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * (* _TA)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Absyn_Enumdecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _TB)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _TC;
  struct Cyc_Dict_Dict _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * (* _TF)(struct Cyc_List_List * (*)(struct _tuple0 *,
							    struct Cyc_Absyn_Vardecl *,
							    struct Cyc_List_List *),
				 struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T10)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _T11;
  struct Cyc_Dict_Dict _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * (* _T14)(struct Cyc_List_List * (*)(struct _tuple0 *,
							     struct Cyc_Tcdecl_Xdatatypefielddecl *,
							     struct Cyc_List_List *),
				  struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T15)(void * (*)(void *,void *,void *),struct Cyc_Dict_Dict,void *);
  struct Cyc_Interface_Ienv * _T16;
  struct Cyc_Dict_Dict _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_List_List * _T1A;
  struct Cyc___cycFILE * _T1B;
  struct Cyc_List_List * tds = 0;
  _T1 = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T1C)(struct Cyc_List_List * (*)(struct _tuple0 *,
							       struct Cyc_Absyn_Aggrdecl *,
							       struct Cyc_List_List *),
				    struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	  struct Cyc_Absyn_Aggrdecl *,
																	  struct Cyc_List_List *),
													       struct Cyc_Dict_Dict,
													       struct Cyc_List_List *))_T1;
    _T0 = _T1C;
  }_T2 = ie;
  _T3 = _T2->aggrdecls;
  _T4 = tds;
  tds = _T0(Cyc_Interface_add_aggrdecl,_T3,_T4);
  _T6 = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T1C)(struct Cyc_List_List * (*)(struct _tuple0 *,
							       struct Cyc_Absyn_Datatypedecl *,
							       struct Cyc_List_List *),
				    struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	  struct Cyc_Absyn_Datatypedecl *,
																	  struct Cyc_List_List *),
													       struct Cyc_Dict_Dict,
													       struct Cyc_List_List *))_T6;
    _T5 = _T1C;
  }_T7 = ie;
  _T8 = _T7->datatypedecls;
  _T9 = tds;
  tds = _T5(Cyc_Interface_add_datatypedecl,_T8,_T9);
  _TB = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T1C)(struct Cyc_List_List * (*)(struct _tuple0 *,
							       struct Cyc_Absyn_Enumdecl *,
							       struct Cyc_List_List *),
				    struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	  struct Cyc_Absyn_Enumdecl *,
																	  struct Cyc_List_List *),
													       struct Cyc_Dict_Dict,
													       struct Cyc_List_List *))_TB;
    _TA = _T1C;
  }_TC = ie;
  _TD = _TC->enumdecls;
  _TE = tds;
  tds = _TA(Cyc_Interface_add_enumdecl,_TD,_TE);
  _T10 = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T1C)(struct Cyc_List_List * (*)(struct _tuple0 *,
							       struct Cyc_Absyn_Vardecl *,
							       struct Cyc_List_List *),
				    struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	  struct Cyc_Absyn_Vardecl *,
																	  struct Cyc_List_List *),
													       struct Cyc_Dict_Dict,
													       struct Cyc_List_List *))_T10;
    _TF = _T1C;
  }_T11 = ie;
  _T12 = _T11->vardecls;
  _T13 = tds;
  tds = _TF(Cyc_Interface_add_vardecl,_T12,_T13);
  _T15 = Cyc_Dict_fold;
  { struct Cyc_List_List * (* _T1C)(struct Cyc_List_List * (*)(struct _tuple0 *,
							       struct Cyc_Tcdecl_Xdatatypefielddecl *,
							       struct Cyc_List_List *),
				    struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _tuple0 *,
																	  struct Cyc_Tcdecl_Xdatatypefielddecl *,
																	  struct Cyc_List_List *),
													       struct Cyc_Dict_Dict,
													       struct Cyc_List_List *))_T15;
    _T14 = _T1C;
  }_T16 = ie;
  _T17 = _T16->xdatatypefielddecls;
  _T18 = tds;
  tds = _T14(Cyc_Interface_add_xdatatypefielddecl,_T17,_T18);
  if (tds == 0) { goto _TL1B3;
  }
  _T19 = Cyc_List_imp_rev(tds);
  _T1A = Cyc_Interface_add_namespace(_T19);
  _T1B = f;
  Cyc_Absynpp_decllist2file(_T1A,_T1B);
  goto _TL1B4;
  _TL1B3: _TL1B4: ;
}
void Cyc_Interface_print(struct Cyc_Interface_I * i,struct Cyc___cycFILE * f) {
  struct Cyc_Absynpp_Params * _T0;
  struct Cyc_Absynpp_Params * _T1;
  struct Cyc___cycFILE * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct Cyc___cycFILE * _T5;
  struct Cyc_Interface_I * _T6;
  struct Cyc_Interface_Ienv * _T7;
  struct Cyc___cycFILE * _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct Cyc___cycFILE * _TB;
  struct Cyc_Interface_I * _TC;
  struct Cyc_Interface_Ienv * _TD;
  struct Cyc___cycFILE * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct Cyc___cycFILE * _T11;
  struct Cyc_Interface_I * _T12;
  struct Cyc_Interface_Ienv * _T13;
  struct Cyc___cycFILE * _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct Cyc___cycFILE * _T17;
  struct Cyc_Interface_I * _T18;
  struct Cyc_Interface_Ienv * _T19;
  struct Cyc___cycFILE * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct Cyc___cycFILE * _T1D;
  struct Cyc_Interface_I * _T1E;
  struct Cyc_Interface_Ienv * _T1F;
  struct Cyc___cycFILE * _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct Cyc___cycFILE * _T23;
  struct Cyc_Interface_I * _T24;
  struct Cyc_Interface_Ienv * _T25;
  struct Cyc___cycFILE * _T26;
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  struct Cyc___cycFILE * _T29;
  struct Cyc_Interface_I * _T2A;
  struct Cyc_Interface_Ienv * _T2B;
  _T0 = &Cyc_Absynpp_cyci_params_r;
  _T1 = (struct Cyc_Absynpp_Params *)_T0;
  Cyc_Absynpp_set_params(_T1);
  _T2 = f;
  _T3 = _tag_fat("/****** needed (headers) ******/\n",sizeof(char),34U);
  _T4 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T2,_T3,_T4);
  _T5 = f;
  _T6 = i;
  _T7 = _T6->imports;
  Cyc_Interface_print_ns_headers(_T5,_T7);
  _T8 = f;
  _T9 = _tag_fat("\n/****** provided (headers) ******/\n",sizeof(char),37U);
  _TA = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T8,_T9,_TA);
  _TB = f;
  _TC = i;
  _TD = _TC->exports;
  Cyc_Interface_print_ns_headers(_TB,_TD);
  _TE = f;
  _TF = _tag_fat("\n/****** needed (headers of xdatatypefielddecls) ******/\n",
		 sizeof(char),58U);
  _T10 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_TE,_TF,_T10);
  _T11 = f;
  _T12 = i;
  _T13 = _T12->imports;
  Cyc_Interface_print_ns_xdatatypefielddecl_headers(_T11,_T13);
  _T14 = f;
  _T15 = _tag_fat("\n/****** provided (headers of xdatatypefielddecls) ******/\n",
		  sizeof(char),60U);
  _T16 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T14,_T15,_T16);
  _T17 = f;
  _T18 = i;
  _T19 = _T18->exports;
  Cyc_Interface_print_ns_xdatatypefielddecl_headers(_T17,_T19);
  _T1A = f;
  _T1B = _tag_fat("\n/****** provided (typedefs) ******/\n",sizeof(char),
		  38U);
  _T1C = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T1A,_T1B,_T1C);
  _T1D = f;
  _T1E = i;
  _T1F = _T1E->exports;
  Cyc_Interface_print_ns_typedefs(_T1D,_T1F);
  _T20 = f;
  _T21 = _tag_fat("\n/****** needed (declarations) ******/\n",sizeof(char),
		  40U);
  _T22 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T20,_T21,_T22);
  _T23 = f;
  _T24 = i;
  _T25 = _T24->imports;
  Cyc_Interface_print_ns_decls(_T23,_T25);
  _T26 = f;
  _T27 = _tag_fat("\n/****** provided (declarations) ******/\n",sizeof(char),
		  42U);
  _T28 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T26,_T27,_T28);
  _T29 = f;
  _T2A = i;
  _T2B = _T2A->exports;
  Cyc_Interface_print_ns_decls(_T29,_T2B);
}
struct Cyc_Interface_I * Cyc_Interface_parse(struct Cyc___cycFILE * f) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Tcenv_Genv * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_Interface_I * _T3;
  Cyc_Lex_lex_init(1);
  { struct Cyc_List_List * tds = Cyc_Parse_parse_file(f);
    Cyc_Binding_resolve_all(tds);
    { struct Cyc_Tcenv_Tenv * te = Cyc_Tcenv_tc_init();
      Cyc_Tc_tc(te,0,tds);
      _T0 = te;
      _T1 = _T0->ae;
      _T2 = tds;
      _T3 = Cyc_Interface_gen_extract(_T1,0,_T2);
      return _T3;
    }
  }
}
void Cyc_Interface_save(struct Cyc_Interface_I * i,struct Cyc___cycFILE * f) {
  Cyc_Interface_print(i,f);
}
struct Cyc_Interface_I * Cyc_Interface_load(struct Cyc___cycFILE * f) {
  struct Cyc_Interface_I * _T0;
  _T0 = Cyc_Interface_parse(f);
  return _T0;
}
