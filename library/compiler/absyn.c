#include <cyc_include.h>
struct Cyc_Core_Opt{void*v;};struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 54 "../../library/std/list.h"
extern struct Cyc_List_List*Cyc_List_list(struct _fat_ptr);
# 178
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);
# 371
extern struct Cyc_List_List*Cyc_List_from_array(struct _fat_ptr);
# 34 "../../library/std/position.h"
extern unsigned Cyc_Position_segment_join(unsigned,unsigned);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple0{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 161 "absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U};struct Cyc_Absyn_Tqual{int print_const: 1;int q_volatile: 1;int q_restrict: 1;int real_const: 1;unsigned loc;};
# 184
enum Cyc_Absyn_Size_of{Cyc_Absyn_Char_sz =0U,Cyc_Absyn_Short_sz =1U,Cyc_Absyn_Int_sz =2U,Cyc_Absyn_Long_sz =3U,Cyc_Absyn_LongLong_sz =4U};
# 194
enum Cyc_Absyn_Sign{Cyc_Absyn_Signed =0U,Cyc_Absyn_Unsigned =1U,Cyc_Absyn_None =2U};
# 201
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};
# 207
enum Cyc_Absyn_AliasQualVal{Cyc_Absyn_Aliasable_qual =0U,Cyc_Absyn_Unique_qual =1U,Cyc_Absyn_Refcnt_qual =2U,Cyc_Absyn_Restricted_qual =3U};
# 227 "absyn.h"
enum Cyc_Absyn_AliasHint{Cyc_Absyn_UniqueHint =0U,Cyc_Absyn_RefcntHint =1U,Cyc_Absyn_RestrictedHint =2U,Cyc_Absyn_NoHint =3U};
# 235
enum Cyc_Absyn_KindQual{Cyc_Absyn_AnyKind =0U,Cyc_Absyn_MemKind =1U,Cyc_Absyn_BoxKind =2U,Cyc_Absyn_EffKind =3U,Cyc_Absyn_IntKind =4U,Cyc_Absyn_BoolKind =5U,Cyc_Absyn_PtrBndKind =6U,Cyc_Absyn_AqualKind =7U};struct Cyc_Absyn_Kind{enum Cyc_Absyn_KindQual kind;enum Cyc_Absyn_AliasHint aliashint;};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;int inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;int c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_UnknownDatatypeInfo{struct _tuple0*name;int is_extensible;};struct _union_DatatypeInfo_UnknownDatatype{int tag;struct Cyc_Absyn_UnknownDatatypeInfo val;};struct _union_DatatypeInfo_KnownDatatype{int tag;struct Cyc_Absyn_Datatypedecl**val;};union Cyc_Absyn_DatatypeInfo{struct _union_DatatypeInfo_UnknownDatatype UnknownDatatype;struct _union_DatatypeInfo_KnownDatatype KnownDatatype;};struct Cyc_Absyn_UnknownDatatypeFieldInfo{struct _tuple0*datatype_name;struct _tuple0*field_name;int is_extensible;};struct _union_DatatypeFieldInfo_UnknownDatatypefield{int tag;struct Cyc_Absyn_UnknownDatatypeFieldInfo val;};struct _tuple1{struct Cyc_Absyn_Datatypedecl*f0;struct Cyc_Absyn_Datatypefield*f1;};struct _union_DatatypeFieldInfo_KnownDatatypefield{int tag;struct _tuple1 val;};union Cyc_Absyn_DatatypeFieldInfo{struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;};struct _tuple2{enum Cyc_Absyn_AggrKind f0;struct _tuple0*f1;struct Cyc_Core_Opt*f2;};struct _union_AggrInfo_UnknownAggr{int tag;struct _tuple2 val;};struct _union_AggrInfo_KnownAggr{int tag;struct Cyc_Absyn_Aggrdecl**val;};union Cyc_Absyn_AggrInfo{struct _union_AggrInfo_UnknownAggr UnknownAggr;struct _union_AggrInfo_KnownAggr KnownAggr;};struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_TypeDecl{void*r;unsigned loc;};struct Cyc_Absyn_VoidCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_IntCon_Absyn_TyCon_struct{int tag;enum Cyc_Absyn_Sign f1;enum Cyc_Absyn_Size_of f2;};struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct{int tag;int f1;};struct Cyc_Absyn_ComplexCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_RgnHandleCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_TagCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_HeapCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_UniqueHeapCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_RefCntHeapCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_JoinCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_RgnsCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_TrueCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_FalseCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_ThinCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_FatCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_AqualsCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct{int tag;enum Cyc_Absyn_AliasQualVal f1;};struct Cyc_Absyn_AqualVarCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_AqualHandleCon_Absyn_TyCon_struct{int tag;};struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct{int tag;struct _tuple0*f1;struct Cyc_Absyn_Enumdecl*f2;};struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct{int tag;struct _fat_ptr f1;struct Cyc_Absyn_Kind*f2;};struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeInfo f1;};struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeFieldInfo f1;};struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_AggrInfo f1;};struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct{int tag;void*f1;};struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Evar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;struct Cyc_Core_Opt*f4;};struct Cyc_Absyn_VarType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Tvar*f1;};struct Cyc_Absyn_Cvar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;void*f4;const char*f5;const char*f6;int f7;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct{int tag;enum Cyc_Absyn_AggrKind f1;int f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_TypedefType_Absyn_Type_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_Typedefdecl*f3;void*f4;};struct Cyc_Absyn_ValueofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct{int tag;struct Cyc_Absyn_TypeDecl*f1;void**f2;};struct Cyc_Absyn_TypeofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_SubsetType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_AssnDef_ExistAssnFn*f3;};struct _union_Cnst_Null_c{int tag;int val;};struct _tuple3{enum Cyc_Absyn_Sign f0;char f1;};struct _union_Cnst_Char_c{int tag;struct _tuple3 val;};struct _union_Cnst_Wchar_c{int tag;struct _fat_ptr val;};struct _tuple4{enum Cyc_Absyn_Sign f0;short f1;};struct _union_Cnst_Short_c{int tag;struct _tuple4 val;};struct _tuple5{enum Cyc_Absyn_Sign f0;int f1;};struct _union_Cnst_Int_c{int tag;struct _tuple5 val;};struct _tuple6{enum Cyc_Absyn_Sign f0;long long f1;};struct _union_Cnst_LongLong_c{int tag;struct _tuple6 val;};struct _tuple7{struct _fat_ptr f0;int f1;};struct _union_Cnst_Float_c{int tag;struct _tuple7 val;};struct _union_Cnst_String_c{int tag;struct _fat_ptr val;};struct _union_Cnst_Wstring_c{int tag;struct _fat_ptr val;};union Cyc_Absyn_Cnst{struct _union_Cnst_Null_c Null_c;struct _union_Cnst_Char_c Char_c;struct _union_Cnst_Wchar_c Wchar_c;struct _union_Cnst_Short_c Short_c;struct _union_Cnst_Int_c Int_c;struct _union_Cnst_LongLong_c LongLong_c;struct _union_Cnst_Float_c Float_c;struct _union_Cnst_String_c String_c;struct _union_Cnst_Wstring_c Wstring_c;};
# 624 "absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};
# 632
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};
# 657
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_FieldName_Absyn_Designator_struct{int tag;struct _fat_ptr*f1;};
# 674
enum Cyc_Absyn_MallocKind{Cyc_Absyn_Malloc =0U,Cyc_Absyn_Calloc =1U,Cyc_Absyn_Vmalloc =2U};struct Cyc_Absyn_MallocInfo{enum Cyc_Absyn_MallocKind mknd;struct Cyc_Absyn_Exp*rgn;struct Cyc_Absyn_Exp*aqual;void**elt_type;struct Cyc_Absyn_Exp*num_elts;int fat_result;int inline_call;};struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct{int tag;union Cyc_Absyn_Cnst f1;};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct{int tag;struct _fat_ptr f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;int f4;};struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;int f2;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;int f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;int f3;int f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;int f3;int f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct _tuple8{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct{int tag;struct _tuple8*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;int f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;int f3;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct{int tag;void*f1;int f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Datatypedecl*f2;struct Cyc_Absyn_Datatypefield*f3;};struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_MallocInfo f1;};struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;};struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct{int tag;int f1;struct _fat_ptr f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;struct Cyc_List_List*f5;};struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;int f2;int f3;};struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct{int tag;};struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Stmt*f2;struct Cyc_Absyn_Stmt*f3;};struct _tuple9{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct{int tag;struct _tuple9 f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Break_s_Absyn_Raw_stmt_struct{int tag;};struct Cyc_Absyn_Continue_s_Absyn_Raw_stmt_struct{int tag;};struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;};struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _tuple9 f2;struct _tuple9 f3;struct Cyc_Absyn_Stmt*f4;};struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Switch_clause**f2;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct _tuple9 f2;};struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_List_List*f2;void*f3;};
# 832 "absyn.h"
extern struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct Cyc_Absyn_Skip_s_val;struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct{int tag;};struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;};struct Cyc_Absyn_Null_p_Absyn_Raw_pat_struct{int tag;};struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Pat{void*r;void*topt;unsigned loc;};struct Cyc_Absyn_Switch_clause{struct Cyc_Absyn_Pat*pattern;struct Cyc_Core_Opt*pat_vars;struct Cyc_Absyn_Exp*where_clause;struct Cyc_Absyn_Stmt*body;unsigned loc;};struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct{int tag;struct _tuple0*f1;};struct Cyc_Absyn_Global_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Funname_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Param_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Local_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Pat_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;int escapes;int is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;int is_inline;struct _tuple0*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;int escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;int tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;int expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple0*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;int is_extensible;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Typedefdecl{struct _tuple0*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;int extern_c;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Pat*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;void*f4;};struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Typedefdecl*f1;};struct Cyc_Absyn_Porton_d_Absyn_Raw_decl_struct{int tag;};struct Cyc_Absyn_Portoff_d_Absyn_Raw_decl_struct{int tag;};struct Cyc_Absyn_Tempeston_d_Absyn_Raw_decl_struct{int tag;};struct Cyc_Absyn_Tempestoff_d_Absyn_Raw_decl_struct{int tag;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};char Cyc_Absyn_EmptyAnnot[11U]="EmptyAnnot";struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct{char*tag;};
# 1084
extern struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct Cyc_Absyn_EmptyAnnot_val;
# 1113
void*Cyc_Absyn_compress(void*);
# 1131
extern void*Cyc_Absyn_char_type;extern void*Cyc_Absyn_uchar_type;extern void*Cyc_Absyn_ushort_type;extern void*Cyc_Absyn_uint_type;extern void*Cyc_Absyn_ulong_type;extern void*Cyc_Absyn_ulonglong_type;
# 1138
extern void*Cyc_Absyn_schar_type;extern void*Cyc_Absyn_sshort_type;extern void*Cyc_Absyn_sint_type;extern void*Cyc_Absyn_slong_type;extern void*Cyc_Absyn_slonglong_type;
# 1144
extern void*Cyc_Absyn_float_type;extern void*Cyc_Absyn_double_type;extern void*Cyc_Absyn_long_double_type;
# 1152
extern void*Cyc_Absyn_heap_rgn_type;
# 1156
extern void*Cyc_Absyn_al_qual_type;extern void*Cyc_Absyn_un_qual_type;extern void*Cyc_Absyn_rc_qual_type;extern void*Cyc_Absyn_rtd_qual_type;
# 1163
extern void*Cyc_Absyn_true_type;extern void*Cyc_Absyn_false_type;
# 1192
extern struct _tuple0*Cyc_Absyn_exn_name;
# 1202
extern void*Cyc_Absyn_fat_bound_type;
# 1206
void*Cyc_Absyn_bounds_one (void);
# 1220
void*Cyc_Absyn_at_type(void*,void*,void*,struct Cyc_Absyn_Tqual,void*,void*);
# 1262
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1338
struct Cyc_Absyn_Stmt*Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*,unsigned);
# 1361
struct Cyc_Absyn_Decl*Cyc_Absyn_new_decl(void*,unsigned);
# 1366
struct Cyc_Absyn_Vardecl*Cyc_Absyn_new_vardecl(unsigned,struct _tuple0*,void*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);
# 1410
void*Cyc_Absyn_pointer_expand(void*,int);
# 1443
void Cyc_Absyn_visit_stmt(int(*)(void*,struct Cyc_Absyn_Exp*),int(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 73 "../../library/std/cycboot.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 17 "bansheeif.h"
void Cyc_BansheeIf_add_constant(struct _fat_ptr,void*);
# 33
int Cyc_BansheeIf_resolve(void*);struct _tuple11{unsigned f0;int f1;};
# 28 "evexp.h"
extern struct _tuple11 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp*);
# 32 "kinds.h"
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
# 55 "kinds.h"
extern struct Cyc_Core_Opt Cyc_Kinds_mko;
# 59
extern struct Cyc_Core_Opt Cyc_Kinds_ptrbko;
# 129 "../../library/std/libc/stdio.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);struct Cyc_Warn_String_Warn_Warg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Warn_Typ_Warn_Warg_struct{int tag;void*f1;};struct Cyc_Warn_Int_Warn_Warg_struct{int tag;int f1;};
# 87 "warn.h"
void*Cyc_Warn_impos2(struct _fat_ptr);
# 50 "../../library/std/string.h"
extern int Cyc_strptrcmp(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Hashtable_Table;
# 50 "../../library/std/hashtable.h"
extern struct Cyc_Hashtable_Table*Cyc_Hashtable_rcreate(struct _RegionHandle*,int,int(*)(void*,void*),int(*)(void*));
# 53
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*,void*,void*);
# 59
extern void**Cyc_Hashtable_lookup_opt(struct Cyc_Hashtable_Table*,void*);
# 85
extern int Cyc_Hashtable_hash_string(struct _fat_ptr);struct Cyc_Xarray_Xarray{struct _fat_ptr elmts;int num_elmts;};
# 40 "../../library/std/xarray.h"
extern int Cyc_Xarray_length(struct Cyc_Xarray_Xarray*);
# 42
extern void*Cyc_Xarray_get(struct Cyc_Xarray_Xarray*,int);
# 54
extern struct Cyc_Xarray_Xarray*Cyc_Xarray_create_empty (void);
# 69
extern int Cyc_Xarray_add_ind(struct Cyc_Xarray_Xarray*,void*);
# 37 "absyn.cyc"
static int Cyc_Absyn_mystrcmp(struct _fat_ptr s1,struct _fat_ptr s2){struct _fat_ptr _T0;unsigned char*_T1;struct _fat_ptr _T2;unsigned char*_T3;const char*_T4;const char*_T5;char _T6;int _T7;char _T8;int _T9;int _TA;char _TB;int _TC;const char*_TD;int _TE;const char*_TF;int _T10;_T0=s1;_T1=_untag_fat_ptr_check_bound(_T0,sizeof(char),1U);{
# 40
const char*p1opt=(const char*)_T1;_T2=s2;_T3=_untag_fat_ptr_check_bound(_T2,sizeof(char),1U);{
const char*p2opt=(const char*)_T3;
if(p1opt!=p2opt)goto _TL0;
return 0;_TL0: {
# 45
const char*p1=_check_null(p1opt);
const char*p2=_check_null(p2opt);
_TL2: if(1)goto _TL3;else{goto _TL4;}
# 49
_TL3: _T4=p1;{char c1=*_T4;_T5=p2;{
char c2=*_T5;_T6=c1;_T7=(int)_T6;_T8=c2;_T9=(int)_T8;{
int diff=_T7 - _T9;
if(diff==0)goto _TL5;_TA=diff;
return _TA;_TL5: _TB=c1;_TC=(int)_TB;
if(_TC!=0)goto _TL7;
return 0;_TL7:{const char**_T11=& p1;_TD=*_T11;_TE=*_TD;if(_TE==0)goto _TL9;*_T11=*_T11 + 1;goto _TLA;_TL9: _throw_arraybounds();_TLA:;}{const char**_T11=& p2;_TF=*_T11;_T10=*_TF;if(_T10==0)goto _TLB;*_T11=*_T11 + 1;goto _TLC;_TLB: _throw_arraybounds();_TLC:;}}}}goto _TL2;_TL4:;}}}}
# 63
static int Cyc_Absyn_strlist_cmp(struct Cyc_List_List*ss1,struct Cyc_List_List*ss2){struct Cyc_List_List*_T0;int _T1;struct Cyc_List_List*_T2;int _T3;struct Cyc_List_List*_T4;void*_T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;struct Cyc_List_List*_T8;void*_T9;struct _fat_ptr*_TA;struct _fat_ptr _TB;int _TC;struct Cyc_List_List*_TD;struct Cyc_List_List*_TE;int _TF;_T0=ss1;_T1=(int)_T0;_T2=ss2;_T3=(int)_T2;
# 67
if(_T1!=_T3)goto _TLD;
return 0;_TLD:
# 70
 _TL12: if(ss1!=0)goto _TL13;else{goto _TL11;}_TL13: if(ss2!=0)goto _TL10;else{goto _TL11;}
# 72
_TL10: _T4=ss1;_T5=_T4->hd;_T6=(struct _fat_ptr*)_T5;_T7=*_T6;_T8=ss2;_T9=_T8->hd;_TA=(struct _fat_ptr*)_T9;_TB=*_TA;{int i=Cyc_Absyn_mystrcmp(_T7,_TB);
if(i==0)goto _TL14;_TC=i;
return _TC;_TL14:;}_TD=ss1;
# 70
ss1=_TD->tl;_TE=ss2;ss2=_TE->tl;goto _TL12;_TL11:
# 77
 if(ss1==0)goto _TL16;
return 1;_TL16:
 if(ss2==0)goto _TL18;_TF=- 1;
return _TF;_TL18:
# 82
 return 0;}
# 85
int Cyc_Absyn_varlist_cmp(struct Cyc_List_List*vs1,struct Cyc_List_List*vs2){struct Cyc_List_List*_T0;int _T1;struct Cyc_List_List*_T2;int _T3;int _T4;_T0=vs1;_T1=(int)_T0;_T2=vs2;_T3=(int)_T2;
# 89
if(_T1!=_T3)goto _TL1A;
return 0;_TL1A: _T4=
Cyc_Absyn_strlist_cmp(vs1,vs2);return _T4;}struct _tuple15{union Cyc_Absyn_Nmspace f0;union Cyc_Absyn_Nmspace f1;};
# 94
int Cyc_Absyn_qvar_cmp(struct _tuple0*q1,struct _tuple0*q2){struct _tuple0*_T0;struct _tuple0*_T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;struct _fat_ptr*_T4;struct _fat_ptr _T5;int _T6;struct _tuple15 _T7;union Cyc_Absyn_Nmspace _T8;struct _union_Nmspace_Abs_n _T9;unsigned _TA;union Cyc_Absyn_Nmspace _TB;struct _union_Nmspace_Loc_n _TC;unsigned _TD;int _TE;union Cyc_Absyn_Nmspace _TF;struct _union_Nmspace_Loc_n _T10;unsigned _T11;union Cyc_Absyn_Nmspace _T12;struct _union_Nmspace_Rel_n _T13;union Cyc_Absyn_Nmspace _T14;struct _union_Nmspace_Rel_n _T15;int _T16;int _T17;union Cyc_Absyn_Nmspace _T18;struct _union_Nmspace_Rel_n _T19;unsigned _T1A;union Cyc_Absyn_Nmspace _T1B;struct _union_Nmspace_Abs_n _T1C;union Cyc_Absyn_Nmspace _T1D;struct _union_Nmspace_Abs_n _T1E;int _T1F;int _T20;union Cyc_Absyn_Nmspace _T21;struct _union_Nmspace_Rel_n _T22;unsigned _T23;union Cyc_Absyn_Nmspace _T24;struct _union_Nmspace_C_n _T25;union Cyc_Absyn_Nmspace _T26;struct _union_Nmspace_C_n _T27;int _T28;
# 97
if(q1!=q2)goto _TL1C;
return 0;_TL1C: {struct _fat_ptr*_T29;union Cyc_Absyn_Nmspace _T2A;_T0=q1;{struct _tuple0 _T2B=*_T0;_T2A=_T2B.f0;_T29=_T2B.f1;}{union Cyc_Absyn_Nmspace n1=_T2A;struct _fat_ptr*v1=_T29;struct _fat_ptr*_T2B;union Cyc_Absyn_Nmspace _T2C;_T1=q2;{struct _tuple0 _T2D=*_T1;_T2C=_T2D.f0;_T2B=_T2D.f1;}{union Cyc_Absyn_Nmspace n2=_T2C;struct _fat_ptr*v2=_T2B;_T2=v1;_T3=*_T2;_T4=v2;_T5=*_T4;{
# 103
int i=Cyc_Absyn_mystrcmp(_T3,_T5);
if(i==0)goto _TL1E;_T6=i;
return _T6;_TL1E:{struct _tuple15 _T2D;
# 107
_T2D.f0=n1;_T2D.f1=n2;_T7=_T2D;}{struct _tuple15 _T2D=_T7;struct Cyc_List_List*_T2E;struct Cyc_List_List*_T2F;_T8=_T2D.f0;_T9=_T8.Abs_n;_TA=_T9.tag;switch(_TA){case 4: _TB=_T2D.f1;_TC=_TB.Loc_n;_TD=_TC.tag;if(_TD!=4)goto _TL21;
# 109
return 0;_TL21: _TE=- 1;
# 115
return _TE;case 2: _TF=_T2D.f1;_T10=_TF.Loc_n;_T11=_T10.tag;switch(_T11){case 2: _T12=_T2D.f0;_T13=_T12.Rel_n;_T2F=_T13.val;_T14=_T2D.f1;_T15=_T14.Rel_n;_T2E=_T15.val;{struct Cyc_List_List*x1=_T2F;struct Cyc_List_List*x2=_T2E;_T16=
# 110
Cyc_Absyn_strlist_cmp(x1,x2);return _T16;}case 4: goto _LL11;default: _T17=- 1;
# 117
return _T17;};case 1: _T18=_T2D.f1;_T19=_T18.Rel_n;_T1A=_T19.tag;switch(_T1A){case 1: _T1B=_T2D.f0;_T1C=_T1B.Abs_n;_T2F=_T1C.val;_T1D=_T2D.f1;_T1E=_T1D.Abs_n;_T2E=_T1E.val;{struct Cyc_List_List*x1=_T2F;struct Cyc_List_List*x2=_T2E;_T1F=
# 111
Cyc_Absyn_strlist_cmp(x1,x2);return _T1F;}case 4: goto _LL11;case 2: goto _LL15;default: _T20=- 1;
# 119
return _T20;};default: _T21=_T2D.f1;_T22=_T21.Rel_n;_T23=_T22.tag;switch(_T23){case 3: _T24=_T2D.f0;_T25=_T24.C_n;_T2F=_T25.val;_T26=_T2D.f1;_T27=_T26.C_n;_T2E=_T27.val;{struct Cyc_List_List*x1=_T2F;struct Cyc_List_List*x2=_T2E;_T28=
# 112
Cyc_Absyn_strlist_cmp(x1,x2);return _T28;}case 4: _LL11:
# 116
 return 1;case 2: _LL15:
# 118
 return 1;default:
# 120
 return 1;};};}}}}}}
# 124
int Cyc_Absyn_hash_qvar(struct _tuple0*q){struct _tuple0*_T0;struct _tuple0 _T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;int _T4;_T0=q;_T1=*_T0;_T2=_T1.f1;_T3=*_T2;_T4=
# 127
Cyc_Hashtable_hash_string(_T3);return _T4;}
# 131
int Cyc_Absyn_tvar_cmp(struct Cyc_Absyn_Tvar*tv1,struct Cyc_Absyn_Tvar*tv2){struct Cyc_Absyn_Tvar*_T0;struct _fat_ptr*_T1;struct Cyc_Absyn_Tvar*_T2;struct _fat_ptr*_T3;int _T4;struct Cyc_Absyn_Tvar*_T5;int _T6;struct Cyc_Absyn_Tvar*_T7;int _T8;_T0=tv1;_T1=_T0->name;_T2=tv2;_T3=_T2->name;{
# 134
int i=Cyc_strptrcmp(_T1,_T3);
if(i==0)goto _TL26;_T4=i;goto _TL27;_TL26: _T5=tv1;_T6=_T5->identity;_T7=tv2;_T8=_T7->identity;_T4=_T6 - _T8;_TL27: return _T4;}}
# 138
int Cyc_Absyn_tvar_id(struct Cyc_Absyn_Tvar*tv){struct Cyc_Absyn_Tvar*_T0;int _T1;_T0=tv;_T1=_T0->identity;
# 141
return _T1;}
# 144
union Cyc_Absyn_Nmspace Cyc_Absyn_Loc_n (void){union Cyc_Absyn_Nmspace _T0;{union Cyc_Absyn_Nmspace _T1;_T1.Loc_n.tag=4U;
# 147
_T1.Loc_n.val=0;_T0=_T1;}return _T0;}
# 150
union Cyc_Absyn_Nmspace Cyc_Absyn_Abs_n(struct Cyc_List_List*x,int C_scope){union Cyc_Absyn_Nmspace _T0;int _T1;union Cyc_Absyn_Nmspace _T2;union Cyc_Absyn_Nmspace _T3;_T1=C_scope;
# 153
if(!_T1)goto _TL28;{union Cyc_Absyn_Nmspace _T4;_T4.C_n.tag=3U;
_T4.C_n.val=x;_T2=_T4;}_T0=_T2;goto _TL29;_TL28:{union Cyc_Absyn_Nmspace _T4;_T4.Abs_n.tag=1U;
_T4.Abs_n.val=x;_T3=_T4;}_T0=_T3;_TL29:
# 153
 return _T0;}
# 159
union Cyc_Absyn_Nmspace Cyc_Absyn_Rel_n(struct Cyc_List_List*x){union Cyc_Absyn_Nmspace _T0;{union Cyc_Absyn_Nmspace _T1;_T1.Rel_n.tag=2U;
# 162
_T1.Rel_n.val=x;_T0=_T1;}return _T0;}
# 165
union Cyc_Absyn_Nmspace Cyc_Absyn_rel_ns_null (void){union Cyc_Absyn_Nmspace _T0;{union Cyc_Absyn_Nmspace _T1;_T1.Rel_n.tag=2U;
# 168
_T1.Rel_n.val=0;_T0=_T1;}return _T0;}
# 171
int Cyc_Absyn_is_qvar_qualified(struct _tuple0*qv){struct _tuple0*_T0;struct _tuple0 _T1;struct _union_Nmspace_Loc_n _T2;unsigned _T3;struct _union_Nmspace_Rel_n _T4;struct Cyc_List_List*_T5;struct _union_Nmspace_Abs_n _T6;struct Cyc_List_List*_T7;_T0=qv;_T1=*_T0;{
# 174
union Cyc_Absyn_Nmspace _T8=_T1.f0;_T2=_T8.Loc_n;_T3=_T2.tag;switch(_T3){case 2: _T4=_T8.Rel_n;_T5=_T4.val;if(_T5!=0)goto _TL2B;goto _LL4;_TL2B: goto _LL7;case 1: _T6=_T8.Abs_n;_T7=_T6.val;if(_T7!=0)goto _TL2D;_LL4: goto _LL6;_TL2D: goto _LL7;case 4: _LL6:
# 179
 return 0;default: _LL7:
# 181
 return 1;};}}
# 185
void*Cyc_Absyn_new_evar(struct Cyc_Core_Opt*k,struct Cyc_Core_Opt*env){struct Cyc_Absyn_Evar_Absyn_Type_struct*_T0;int _T1;void*_T2;
# 188
static int new_type_counter=0;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T3=_cycalloc(sizeof(struct Cyc_Absyn_Evar_Absyn_Type_struct));_T3->tag=1;
_T3->f1=k;_T3->f2=0;_T1=new_type_counter;new_type_counter=_T1 + 1;_T3->f3=_T1;_T3->f4=env;_T0=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3;}_T2=(void*)_T0;return _T2;}
# 192
void*Cyc_Absyn_wildtyp(struct Cyc_Core_Opt*tenv){struct Cyc_Core_Opt*_T0;struct Cyc_Core_Opt*_T1;struct Cyc_Core_Opt*_T2;void*_T3;_T0=& Cyc_Kinds_mko;_T1=(struct Cyc_Core_Opt*)_T0;_T2=tenv;_T3=
# 195
Cyc_Absyn_new_evar(_T1,_T2);return _T3;}
# 198
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned loc){struct Cyc_Absyn_Tqual _T0;{struct Cyc_Absyn_Tqual _T1;_T1.print_const=0;_T1.q_volatile=0;_T1.q_restrict=0;_T1.real_const=0;_T1.loc=loc;_T0=_T1;}return _T0;}
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned loc){struct Cyc_Absyn_Tqual _T0;{struct Cyc_Absyn_Tqual _T1;_T1.print_const=1;_T1.q_volatile=0;_T1.q_restrict=0;_T1.real_const=1;_T1.loc=loc;_T0=_T1;}return _T0;}
# 201
struct Cyc_Absyn_Tqual Cyc_Absyn_combine_tqual(struct Cyc_Absyn_Tqual x,struct Cyc_Absyn_Tqual y){struct Cyc_Absyn_Tqual _T0;int _T1;struct Cyc_Absyn_Tqual _T2;int _T3;struct Cyc_Absyn_Tqual _T4;int _T5;struct Cyc_Absyn_Tqual _T6;int _T7;struct Cyc_Absyn_Tqual _T8;int _T9;struct Cyc_Absyn_Tqual _TA;int _TB;struct Cyc_Absyn_Tqual _TC;int _TD;struct Cyc_Absyn_Tqual _TE;int _TF;struct Cyc_Absyn_Tqual _T10;struct Cyc_Absyn_Tqual _T11;unsigned _T12;struct Cyc_Absyn_Tqual _T13;unsigned _T14;{struct Cyc_Absyn_Tqual _T15;_T2=x;_T3=_T2.print_const;
# 204
if(!_T3)goto _TL2F;_T1=1;goto _TL30;_TL2F: _T4=y;_T1=_T4.print_const;_TL30: _T15.print_const=_T1;_T6=x;_T7=_T6.q_volatile;
if(!_T7)goto _TL31;_T5=1;goto _TL32;_TL31: _T8=y;_T5=_T8.q_volatile;_TL32: _T15.q_volatile=_T5;_TA=x;_TB=_TA.q_restrict;
if(!_TB)goto _TL33;_T9=1;goto _TL34;_TL33: _TC=y;_T9=_TC.q_restrict;_TL34: _T15.q_restrict=_T9;_TE=x;_TF=_TE.real_const;
if(!_TF)goto _TL35;_TD=1;goto _TL36;_TL35: _T10=y;_TD=_T10.real_const;_TL36: _T15.real_const=_TD;_T11=x;_T12=_T11.loc;_T13=y;_T14=_T13.loc;
_T15.loc=Cyc_Position_segment_join(_T12,_T14);_T0=_T15;}
# 204
return _T0;}
# 210
int Cyc_Absyn_equal_tqual(struct Cyc_Absyn_Tqual tq1,struct Cyc_Absyn_Tqual tq2){int _T0;struct Cyc_Absyn_Tqual _T1;int _T2;struct Cyc_Absyn_Tqual _T3;int _T4;struct Cyc_Absyn_Tqual _T5;int _T6;struct Cyc_Absyn_Tqual _T7;int _T8;struct Cyc_Absyn_Tqual _T9;int _TA;struct Cyc_Absyn_Tqual _TB;int _TC;_T1=tq1;_T2=_T1.real_const;_T3=tq2;_T4=_T3.real_const;
# 213
if(_T2!=_T4)goto _TL37;_T5=tq1;_T6=_T5.q_volatile;_T7=tq2;_T8=_T7.q_volatile;if(_T6!=_T8)goto _TL37;_T9=tq1;_TA=_T9.q_restrict;_TB=tq2;_TC=_TB.q_restrict;_T0=_TA==_TC;goto _TL38;_TL37: _T0=0;_TL38: return _T0;}
# 218
struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct Cyc_Absyn_EmptyAnnot_val={Cyc_Absyn_EmptyAnnot};
# 220
union Cyc_Absyn_DatatypeInfo Cyc_Absyn_UnknownDatatype(struct Cyc_Absyn_UnknownDatatypeInfo udi){union Cyc_Absyn_DatatypeInfo _T0;{union Cyc_Absyn_DatatypeInfo _T1;_T1.UnknownDatatype.tag=1U;
# 223
_T1.UnknownDatatype.val=udi;_T0=_T1;}return _T0;}
# 226
union Cyc_Absyn_DatatypeInfo Cyc_Absyn_KnownDatatype(struct Cyc_Absyn_Datatypedecl**d){union Cyc_Absyn_DatatypeInfo _T0;{union Cyc_Absyn_DatatypeInfo _T1;_T1.KnownDatatype.tag=2U;
# 229
_T1.KnownDatatype.val=d;_T0=_T1;}return _T0;}
# 232
union Cyc_Absyn_DatatypeFieldInfo Cyc_Absyn_UnknownDatatypefield(struct Cyc_Absyn_UnknownDatatypeFieldInfo s){union Cyc_Absyn_DatatypeFieldInfo _T0;{union Cyc_Absyn_DatatypeFieldInfo _T1;_T1.UnknownDatatypefield.tag=1U;
# 235
_T1.UnknownDatatypefield.val=s;_T0=_T1;}return _T0;}
# 238
union Cyc_Absyn_DatatypeFieldInfo Cyc_Absyn_KnownDatatypefield(struct Cyc_Absyn_Datatypedecl*dd,struct Cyc_Absyn_Datatypefield*df){union Cyc_Absyn_DatatypeFieldInfo _T0;{union Cyc_Absyn_DatatypeFieldInfo _T1;_T1.KnownDatatypefield.tag=2U;
# 241
_T1.KnownDatatypefield.val.f0=dd;_T1.KnownDatatypefield.val.f1=df;_T0=_T1;}return _T0;}
# 244
union Cyc_Absyn_AggrInfo Cyc_Absyn_UnknownAggr(enum Cyc_Absyn_AggrKind ak,struct _tuple0*n,struct Cyc_Core_Opt*tagged){union Cyc_Absyn_AggrInfo _T0;{union Cyc_Absyn_AggrInfo _T1;_T1.UnknownAggr.tag=1U;
# 247
_T1.UnknownAggr.val.f0=ak;_T1.UnknownAggr.val.f1=n;_T1.UnknownAggr.val.f2=tagged;_T0=_T1;}return _T0;}
# 250
union Cyc_Absyn_AggrInfo Cyc_Absyn_KnownAggr(struct Cyc_Absyn_Aggrdecl**ad){union Cyc_Absyn_AggrInfo _T0;{union Cyc_Absyn_AggrInfo _T1;_T1.KnownAggr.tag=2U;
# 253
_T1.KnownAggr.val=ad;_T0=_T1;}return _T0;}
# 261
void*Cyc_Absyn_app_type(void*c,struct _fat_ptr args){struct Cyc_Absyn_AppType_Absyn_Type_struct*_T0;void*_T1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T2->tag=0;
# 264
_T2->f1=c;_T2->f2=Cyc_List_from_array(args);_T0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2;}_T1=(void*)_T0;return _T1;}
# 267
void*Cyc_Absyn_valueof_type(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T0;void*_T1;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_ValueofType_Absyn_Type_struct));_T2->tag=9;
# 270
_T2->f1=e;_T0=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T2;}_T1=(void*)_T0;return _T1;}
# 278
static struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct Cyc_Absyn_al_qual_type_tyc={16,Cyc_Absyn_Aliasable_qual};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_al_qual_type_gval={0,(void*)((struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*)& Cyc_Absyn_al_qual_type_tyc),0};void*Cyc_Absyn_al_qual_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_al_qual_type_gval);
static struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct Cyc_Absyn_un_qual_type_tyc={16,Cyc_Absyn_Unique_qual};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_un_qual_type_gval={0,(void*)((struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*)& Cyc_Absyn_un_qual_type_tyc),0};void*Cyc_Absyn_un_qual_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_un_qual_type_gval);
static struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct Cyc_Absyn_rc_qual_type_tyc={16,Cyc_Absyn_Refcnt_qual};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_rc_qual_type_gval={0,(void*)((struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*)& Cyc_Absyn_rc_qual_type_tyc),0};void*Cyc_Absyn_rc_qual_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_rc_qual_type_gval);
static struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct Cyc_Absyn_rtd_qual_type_tyc={16,Cyc_Absyn_Restricted_qual};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_rtd_qual_type_gval={0,(void*)((struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*)& Cyc_Absyn_rtd_qual_type_tyc),0};void*Cyc_Absyn_rtd_qual_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_rtd_qual_type_gval);
# 306 "absyn.cyc"
static struct Cyc_Absyn_VoidCon_Absyn_TyCon_struct Cyc_Absyn_void_type_cval={0};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_void_type_tval={0,(void*)((struct Cyc_Absyn_VoidCon_Absyn_TyCon_struct*)& Cyc_Absyn_void_type_cval),0};void*Cyc_Absyn_void_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_void_type_tval);
static struct Cyc_Absyn_HeapCon_Absyn_TyCon_struct Cyc_Absyn_heap_rgn_type_cval={6};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_heap_rgn_type_tval={0,(void*)((struct Cyc_Absyn_HeapCon_Absyn_TyCon_struct*)& Cyc_Absyn_heap_rgn_type_cval),0};void*Cyc_Absyn_heap_rgn_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_heap_rgn_type_tval);
static struct Cyc_Absyn_UniqueHeapCon_Absyn_TyCon_struct Cyc_Absyn_unique_rgn_shorthand_type_cval={7};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_unique_rgn_shorthand_type_tval={0,(void*)((struct Cyc_Absyn_UniqueHeapCon_Absyn_TyCon_struct*)& Cyc_Absyn_unique_rgn_shorthand_type_cval),0};void*Cyc_Absyn_unique_rgn_shorthand_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_unique_rgn_shorthand_type_tval);
static struct Cyc_Absyn_RefCntHeapCon_Absyn_TyCon_struct Cyc_Absyn_refcnt_rgn_shorthand_type_cval={8};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_refcnt_rgn_shorthand_type_tval={0,(void*)((struct Cyc_Absyn_RefCntHeapCon_Absyn_TyCon_struct*)& Cyc_Absyn_refcnt_rgn_shorthand_type_cval),0};void*Cyc_Absyn_refcnt_rgn_shorthand_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_refcnt_rgn_shorthand_type_tval);
static struct Cyc_Absyn_TrueCon_Absyn_TyCon_struct Cyc_Absyn_true_type_cval={11};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_true_type_tval={0,(void*)((struct Cyc_Absyn_TrueCon_Absyn_TyCon_struct*)& Cyc_Absyn_true_type_cval),0};void*Cyc_Absyn_true_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_true_type_tval);
static struct Cyc_Absyn_FalseCon_Absyn_TyCon_struct Cyc_Absyn_false_type_cval={12};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_false_type_tval={0,(void*)((struct Cyc_Absyn_FalseCon_Absyn_TyCon_struct*)& Cyc_Absyn_false_type_cval),0};void*Cyc_Absyn_false_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_false_type_tval);
static struct Cyc_Absyn_FatCon_Absyn_TyCon_struct Cyc_Absyn_fat_bound_type_cval={14};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_fat_bound_type_tval={0,(void*)((struct Cyc_Absyn_FatCon_Absyn_TyCon_struct*)& Cyc_Absyn_fat_bound_type_cval),0};void*Cyc_Absyn_fat_bound_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_fat_bound_type_tval);
# 314
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_schar_type_cval={1,Cyc_Absyn_Signed,Cyc_Absyn_Char_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_schar_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_schar_type_cval),0};void*Cyc_Absyn_schar_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_schar_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_uchar_type_cval={1,Cyc_Absyn_Unsigned,Cyc_Absyn_Char_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_uchar_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_uchar_type_cval),0};void*Cyc_Absyn_uchar_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_uchar_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_char_type_cval={1,Cyc_Absyn_None,Cyc_Absyn_Char_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_char_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_char_type_cval),0};void*Cyc_Absyn_char_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_char_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_sshort_type_cval={1,Cyc_Absyn_Signed,Cyc_Absyn_Short_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_sshort_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_sshort_type_cval),0};void*Cyc_Absyn_sshort_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_sshort_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_ushort_type_cval={1,Cyc_Absyn_Unsigned,Cyc_Absyn_Short_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_ushort_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_ushort_type_cval),0};void*Cyc_Absyn_ushort_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_ushort_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_nshort_type_cval={1,Cyc_Absyn_None,Cyc_Absyn_Short_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_nshort_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_nshort_type_cval),0};void*Cyc_Absyn_nshort_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_nshort_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_sint_type_cval={1,Cyc_Absyn_Signed,Cyc_Absyn_Int_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_sint_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_sint_type_cval),0};void*Cyc_Absyn_sint_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_sint_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_uint_type_cval={1,Cyc_Absyn_Unsigned,Cyc_Absyn_Int_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_uint_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_uint_type_cval),0};void*Cyc_Absyn_uint_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_uint_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_nint_type_cval={1,Cyc_Absyn_None,Cyc_Absyn_Int_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_nint_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_nint_type_cval),0};void*Cyc_Absyn_nint_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_nint_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_slong_type_cval={1,Cyc_Absyn_Signed,Cyc_Absyn_Long_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_slong_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_slong_type_cval),0};void*Cyc_Absyn_slong_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_slong_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_ulong_type_cval={1,Cyc_Absyn_Unsigned,Cyc_Absyn_Long_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_ulong_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_ulong_type_cval),0};void*Cyc_Absyn_ulong_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_ulong_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_nlong_type_cval={1,Cyc_Absyn_None,Cyc_Absyn_Long_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_nlong_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_nlong_type_cval),0};void*Cyc_Absyn_nlong_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_nlong_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_slonglong_type_cval={1,Cyc_Absyn_Signed,Cyc_Absyn_LongLong_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_slonglong_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_slonglong_type_cval),0};void*Cyc_Absyn_slonglong_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_slonglong_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_ulonglong_type_cval={1,Cyc_Absyn_Unsigned,Cyc_Absyn_LongLong_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_ulonglong_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_ulonglong_type_cval),0};void*Cyc_Absyn_ulonglong_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_ulonglong_type_tval);
static struct Cyc_Absyn_IntCon_Absyn_TyCon_struct Cyc_Absyn_nlonglong_type_cval={1,Cyc_Absyn_None,Cyc_Absyn_LongLong_sz};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_nlonglong_type_tval={0,(void*)((struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)& Cyc_Absyn_nlonglong_type_cval),0};void*Cyc_Absyn_nlonglong_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_nlonglong_type_tval);
# 330
static struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct Cyc_Absyn_float_type_cval={2,0};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_float_type_tval={0,(void*)((struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct*)& Cyc_Absyn_float_type_cval),0};void*Cyc_Absyn_float_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_float_type_tval);
static struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct Cyc_Absyn_double_type_cval={2,1};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_double_type_tval={0,(void*)((struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct*)& Cyc_Absyn_double_type_cval),0};void*Cyc_Absyn_double_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_double_type_tval);
static struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct Cyc_Absyn_long_double_type_cval={2,2};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_long_double_type_tval={0,(void*)((struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct*)& Cyc_Absyn_long_double_type_cval),0};void*Cyc_Absyn_long_double_type=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_long_double_type_tval);
# 334
static struct Cyc_Absyn_JoinCon_Absyn_TyCon_struct Cyc_Absyn_empty_effect_cval={9};static struct Cyc_Absyn_AppType_Absyn_Type_struct Cyc_Absyn_empty_effect_tval={0,(void*)((struct Cyc_Absyn_JoinCon_Absyn_TyCon_struct*)& Cyc_Absyn_empty_effect_cval),0};void*Cyc_Absyn_empty_effect=(void*)((struct Cyc_Absyn_AppType_Absyn_Type_struct*)& Cyc_Absyn_empty_effect_tval);
# 336
static struct Cyc_Absyn_RgnHandleCon_Absyn_TyCon_struct Cyc_Absyn_RgnHandleCon_val={4};
static struct Cyc_Absyn_AqualHandleCon_Absyn_TyCon_struct Cyc_Absyn_AqualHandleCon_val={18};
static struct Cyc_Absyn_AqualVarCon_Absyn_TyCon_struct Cyc_Absyn_AqualVarCon_val={17};
static struct Cyc_Absyn_TagCon_Absyn_TyCon_struct Cyc_Absyn_TagCon_val={5};
# 343
static struct Cyc_Absyn_RgnsCon_Absyn_TyCon_struct Cyc_Absyn_RgnsCon_val={10};
static struct Cyc_Absyn_ThinCon_Absyn_TyCon_struct Cyc_Absyn_ThinCon_val={13};
static struct Cyc_Absyn_JoinCon_Absyn_TyCon_struct Cyc_Absyn_JoinCon_val={9};
static struct Cyc_Absyn_AqualsCon_Absyn_TyCon_struct Cyc_Absyn_AqualsCon_val={15};
# 348
static int Cyc_Absyn_cvar_index=3;
# 350
void*Cyc_Absyn_cvar_type(struct Cyc_Core_Opt*ok){struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T0;int _T1;int _T2;void*_T3;{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Cvar_Absyn_Type_struct));_T4->tag=3;
# 353
_T4->f1=ok;_T4->f2=0;_T1=Cyc_Absyn_cvar_index;Cyc_Absyn_cvar_index=_T1 + 1;_T2=_T1;_T4->f3=- _T2;_T4->f4=0;_T4->f5=0;_T4->f6=0;_T4->f7=0;_T0=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T4;}_T3=(void*)_T0;return _T3;}
# 356
void*Cyc_Absyn_cvar_type_name(struct Cyc_Core_Opt*ok,struct _fat_ptr a){struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T0;int _T1;struct _fat_ptr _T2;unsigned char*_T3;void*_T4;{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T5=_cycalloc(sizeof(struct Cyc_Absyn_Cvar_Absyn_Type_struct));_T5->tag=3;
# 359
_T5->f1=ok;_T5->f2=0;_T1=Cyc_Absyn_cvar_index;Cyc_Absyn_cvar_index=_T1 + 1;_T5->f3=_T1;_T5->f4=0;_T2=a;_T3=_untag_fat_ptr_check_bound(_T2,sizeof(char),1U);_T5->f5=(const char*)_T3;_T5->f6=0;_T5->f7=0;_T0=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T5;}_T4=(void*)_T0;return _T4;}
# 363
void*Cyc_Absyn_fatconst (void){void*_T0;unsigned _T1;void*_T2;struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T3;struct Cyc_Core_Opt*_T4;struct _fat_ptr _T5;void*_T6;void*_T7;
# 366
static void*_fatconst=0;_T0=_fatconst;_T1=(unsigned)_T0;
if(!_T1)goto _TL39;_T2=_fatconst;
return _T2;_TL39:{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T8=_cycalloc(sizeof(struct Cyc_Absyn_Cvar_Absyn_Type_struct));_T8->tag=3;_T4=& Cyc_Kinds_ptrbko;
# 370
_T8->f1=(struct Cyc_Core_Opt*)_T4;
_T8->f2=Cyc_Absyn_fat_bound_type;
_T8->f3=1;
_T8->f4=0;
_T8->f5="fatconst";
_T8->f6="constant";
_T8->f7=1;_T3=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T8;}
# 369
_fatconst=(void*)_T3;_T5=
# 378
_tag_fat("fat",sizeof(char),4U);_T6=_fatconst;Cyc_BansheeIf_add_constant(_T5,_T6);_T7=
_check_null(_fatconst);return _T7;}
# 382
void*Cyc_Absyn_thinconst (void){void*_T0;unsigned _T1;void*_T2;struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T3;struct Cyc_Core_Opt*_T4;struct _fat_ptr _T5;void*_T6;void*_T7;
# 385
static void*_thinconst=0;_T0=_thinconst;_T1=(unsigned)_T0;
if(!_T1)goto _TL3B;_T2=_thinconst;
return _T2;_TL3B:{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T8=_cycalloc(sizeof(struct Cyc_Absyn_Cvar_Absyn_Type_struct));_T8->tag=3;_T4=& Cyc_Kinds_ptrbko;
# 389
_T8->f1=(struct Cyc_Core_Opt*)_T4;
_T8->f2=Cyc_Absyn_bounds_one();
_T8->f3=2;
_T8->f4=0;
_T8->f5="thinconst";
_T8->f6="constant";
_T8->f7=0;_T3=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T8;}
# 388
_thinconst=(void*)_T3;_T5=
# 397
_tag_fat("thin",sizeof(char),5U);_T6=_thinconst;Cyc_BansheeIf_add_constant(_T5,_T6);_T7=
_check_null(_thinconst);return _T7;}
# 401
void*Cyc_Absyn_aqual_constant(enum Cyc_Absyn_AliasQualVal v){enum Cyc_Absyn_AliasQualVal _T0;int _T1;void*_T2;void*_T3;void*_T4;void*_T5;struct Cyc_Warn_String_Warn_Warg_struct _T6;int(*_T7)(struct _fat_ptr);void*(*_T8)(struct _fat_ptr);struct _fat_ptr _T9;_T0=v;_T1=(int)_T0;switch(_T1){case Cyc_Absyn_Aliasable_qual: _T2=Cyc_Absyn_al_qual_type;
# 406
return _T2;case Cyc_Absyn_Unique_qual: _T3=Cyc_Absyn_un_qual_type;
return _T3;case Cyc_Absyn_Refcnt_qual: _T4=Cyc_Absyn_rc_qual_type;
return _T4;case Cyc_Absyn_Restricted_qual: _T5=Cyc_Absyn_rtd_qual_type;
return _T5;default:{struct Cyc_Warn_String_Warn_Warg_struct _TA;_TA.tag=0;
_TA.f1=_tag_fat("Impossible alias qualifier constant",sizeof(char),36U);_T6=_TA;}{struct Cyc_Warn_String_Warn_Warg_struct _TA=_T6;void*_TB[1];_TB[0]=& _TA;_T8=Cyc_Warn_impos2;{int(*_TC)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T8;_T7=_TC;}_T9=_tag_fat(_TB,sizeof(void*),1);_T7(_T9);}};}
# 414
void*Cyc_Absyn_rgn_handle_type(void*r){void*_T0;struct Cyc_Absyn_RgnHandleCon_Absyn_TyCon_struct*_T1;struct Cyc_Absyn_RgnHandleCon_Absyn_TyCon_struct*_T2;void*_T3;struct _fat_ptr _T4;{void*_T5[1];_T5[0]=r;_T1=& Cyc_Absyn_RgnHandleCon_val;_T2=(struct Cyc_Absyn_RgnHandleCon_Absyn_TyCon_struct*)_T1;_T3=(void*)_T2;_T4=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_Absyn_app_type(_T3,_T4);}return _T0;}
void*Cyc_Absyn_aqual_handle_type(void*aq){void*_T0;struct Cyc_Absyn_AqualHandleCon_Absyn_TyCon_struct*_T1;struct Cyc_Absyn_AqualHandleCon_Absyn_TyCon_struct*_T2;void*_T3;struct _fat_ptr _T4;{void*_T5[1];_T5[0]=aq;_T1=& Cyc_Absyn_AqualHandleCon_val;_T2=(struct Cyc_Absyn_AqualHandleCon_Absyn_TyCon_struct*)_T1;_T3=(void*)_T2;_T4=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_Absyn_app_type(_T3,_T4);}return _T0;}
void*Cyc_Absyn_aqual_var_type(void*tv,void*bnd){void*_T0;struct Cyc_Absyn_AqualVarCon_Absyn_TyCon_struct*_T1;struct Cyc_Absyn_AqualVarCon_Absyn_TyCon_struct*_T2;void*_T3;struct _fat_ptr _T4;{void*_T5[2];_T5[0]=tv;_T5[1]=bnd;_T1=& Cyc_Absyn_AqualVarCon_val;_T2=(struct Cyc_Absyn_AqualVarCon_Absyn_TyCon_struct*)_T1;_T3=(void*)_T2;_T4=_tag_fat(_T5,sizeof(void*),2);_T0=Cyc_Absyn_app_type(_T3,_T4);}return _T0;}
# 418
void*Cyc_Absyn_tag_type(void*t){void*_T0;struct Cyc_Absyn_TagCon_Absyn_TyCon_struct*_T1;struct Cyc_Absyn_TagCon_Absyn_TyCon_struct*_T2;void*_T3;struct _fat_ptr _T4;{void*_T5[1];_T5[0]=t;_T1=& Cyc_Absyn_TagCon_val;_T2=(struct Cyc_Absyn_TagCon_Absyn_TyCon_struct*)_T1;_T3=(void*)_T2;_T4=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_Absyn_app_type(_T3,_T4);}return _T0;}
# 422
void*Cyc_Absyn_regionsof_eff(void*t){void*_T0;struct Cyc_Absyn_RgnsCon_Absyn_TyCon_struct*_T1;struct Cyc_Absyn_RgnsCon_Absyn_TyCon_struct*_T2;void*_T3;struct _fat_ptr _T4;{void*_T5[1];_T5[0]=t;_T1=& Cyc_Absyn_RgnsCon_val;_T2=(struct Cyc_Absyn_RgnsCon_Absyn_TyCon_struct*)_T1;_T3=(void*)_T2;_T4=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_Absyn_app_type(_T3,_T4);}return _T0;}
void*Cyc_Absyn_thin_bounds_type(void*t){void*_T0;struct Cyc_Absyn_ThinCon_Absyn_TyCon_struct*_T1;struct Cyc_Absyn_ThinCon_Absyn_TyCon_struct*_T2;void*_T3;struct _fat_ptr _T4;{void*_T5[1];_T5[0]=t;_T1=& Cyc_Absyn_ThinCon_val;_T2=(struct Cyc_Absyn_ThinCon_Absyn_TyCon_struct*)_T1;_T3=(void*)_T2;_T4=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_Absyn_app_type(_T3,_T4);}return _T0;}
void*Cyc_Absyn_join_eff(struct Cyc_List_List*ts){struct Cyc_Absyn_AppType_Absyn_Type_struct*_T0;struct Cyc_Absyn_JoinCon_Absyn_TyCon_struct*_T1;struct Cyc_Absyn_JoinCon_Absyn_TyCon_struct*_T2;void*_T3;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T4->tag=0;_T1=& Cyc_Absyn_empty_effect_cval;_T2=(struct Cyc_Absyn_JoinCon_Absyn_TyCon_struct*)_T1;_T4->f1=(void*)_T2;_T4->f2=ts;_T0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T4;}_T3=(void*)_T0;return _T3;}
# 426
void*Cyc_Absyn_enum_type(struct _tuple0*n,struct Cyc_Absyn_Enumdecl*d){struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T0;void*_T1;struct _fat_ptr _T2;void*_T3;{struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct));_T4->tag=19;
# 429
_T4->f1=n;_T4->f2=d;_T0=(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_T4;}_T1=(void*)_T0;_T2=_tag_fat(0U,sizeof(void*),0);_T3=Cyc_Absyn_app_type(_T1,_T2);return _T3;}
# 432
void*Cyc_Absyn_anon_enum_type(struct Cyc_List_List*fs){struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*_T0;void*_T1;struct _fat_ptr _T2;void*_T3;{struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct));_T4->tag=20;
# 435
_T4->f1=fs;_T0=(struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*)_T4;}_T1=(void*)_T0;_T2=_tag_fat(0U,sizeof(void*),0);_T3=Cyc_Absyn_app_type(_T1,_T2);return _T3;}
# 438
void*Cyc_Absyn_builtin_type(struct _fat_ptr s,struct Cyc_Absyn_Kind*k){struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct*_T0;void*_T1;struct _fat_ptr _T2;void*_T3;{struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct));_T4->tag=21;
# 441
_T4->f1=s;_T4->f2=k;_T0=(struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct*)_T4;}_T1=(void*)_T0;_T2=_tag_fat(0U,sizeof(void*),0);_T3=Cyc_Absyn_app_type(_T1,_T2);return _T3;}
# 444
void*Cyc_Absyn_datatype_type(union Cyc_Absyn_DatatypeInfo di,struct Cyc_List_List*args){struct Cyc_Absyn_AppType_Absyn_Type_struct*_T0;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T1;void*_T2;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T3->tag=0;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct));_T4->tag=22;
# 447
_T4->f1=di;_T1=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T4;}_T3->f1=(void*)_T1;_T3->f2=args;_T0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;}_T2=(void*)_T0;return _T2;}
# 450
void*Cyc_Absyn_datatype_field_type(union Cyc_Absyn_DatatypeFieldInfo di,struct Cyc_List_List*args){struct Cyc_Absyn_AppType_Absyn_Type_struct*_T0;struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T1;void*_T2;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T3->tag=0;{struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct));_T4->tag=23;
# 453
_T4->f1=di;_T1=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T4;}_T3->f1=(void*)_T1;_T3->f2=args;_T0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;}_T2=(void*)_T0;return _T2;}
# 456
void*Cyc_Absyn_aggr_type(union Cyc_Absyn_AggrInfo ai,struct Cyc_List_List*args){struct Cyc_Absyn_AppType_Absyn_Type_struct*_T0;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T1;void*_T2;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T3->tag=0;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct));_T4->tag=24;
# 459
_T4->f1=ai;_T1=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T4;}_T3->f1=(void*)_T1;_T3->f2=args;_T0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;}_T2=(void*)_T0;return _T2;}
# 462
void*Cyc_Absyn_var_type(struct Cyc_Absyn_Tvar*x){struct Cyc_Absyn_VarType_Absyn_Type_struct*_T0;void*_T1;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));_T2->tag=2;
# 465
_T2->f1=x;_T0=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T2;}_T1=(void*)_T0;return _T1;}
# 470
void*Cyc_Absyn_aqualsof_type(void*tv){void*_T0;struct Cyc_Absyn_AqualsCon_Absyn_TyCon_struct*_T1;struct Cyc_Absyn_AqualsCon_Absyn_TyCon_struct*_T2;void*_T3;struct _fat_ptr _T4;{void*_T5[1];_T5[0]=tv;_T1=& Cyc_Absyn_AqualsCon_val;_T2=(struct Cyc_Absyn_AqualsCon_Absyn_TyCon_struct*)_T1;_T3=(void*)_T2;_T4=_tag_fat(_T5,sizeof(void*),1);_T0=Cyc_Absyn_app_type(_T3,_T4);}
# 473
return _T0;}
# 476
void*Cyc_Absyn_gen_float_type(unsigned i){unsigned _T0;int _T1;void*_T2;void*_T3;void*_T4;struct Cyc_Warn_String_Warn_Warg_struct _T5;struct Cyc_Warn_Int_Warn_Warg_struct _T6;unsigned _T7;struct Cyc_Warn_String_Warn_Warg_struct _T8;int(*_T9)(struct _fat_ptr);void*(*_TA)(struct _fat_ptr);struct _fat_ptr _TB;_T0=i;_T1=(int)_T0;switch(_T1){case 0: _T2=Cyc_Absyn_float_type;
# 481
return _T2;case 1: _T3=Cyc_Absyn_double_type;
return _T3;case 2: _T4=Cyc_Absyn_long_double_type;
return _T4;default:{struct Cyc_Warn_String_Warn_Warg_struct _TC;_TC.tag=0;
# 485
_TC.f1=_tag_fat("gen_float_type(",sizeof(char),16U);_T5=_TC;}{struct Cyc_Warn_String_Warn_Warg_struct _TC=_T5;{struct Cyc_Warn_Int_Warn_Warg_struct _TD;_TD.tag=12;_T7=i;_TD.f1=(int)_T7;_T6=_TD;}{struct Cyc_Warn_Int_Warn_Warg_struct _TD=_T6;{struct Cyc_Warn_String_Warn_Warg_struct _TE;_TE.tag=0;_TE.f1=_tag_fat(")",sizeof(char),2U);_T8=_TE;}{struct Cyc_Warn_String_Warn_Warg_struct _TE=_T8;void*_TF[3];_TF[0]=& _TC;_TF[1]=& _TD;_TF[2]=& _TE;_TA=Cyc_Warn_impos2;{int(*_T10)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TA;_T9=_T10;}_TB=_tag_fat(_TF,sizeof(void*),3);_T9(_TB);}}}};}
# 489
void*Cyc_Absyn_int_type(enum Cyc_Absyn_Sign sn,enum Cyc_Absyn_Size_of sz){enum Cyc_Absyn_Sign _T0;int _T1;enum Cyc_Absyn_Size_of _T2;int _T3;void*_T4;void*_T5;void*_T6;void*_T7;void*_T8;enum Cyc_Absyn_Size_of _T9;int _TA;void*_TB;void*_TC;void*_TD;void*_TE;void*_TF;enum Cyc_Absyn_Size_of _T10;int _T11;void*_T12;void*_T13;void*_T14;void*_T15;void*_T16;_T0=sn;_T1=(int)_T0;switch(_T1){case Cyc_Absyn_Signed: _T2=sz;_T3=(int)_T2;switch(_T3){case Cyc_Absyn_Char_sz: _T4=Cyc_Absyn_schar_type;
# 497
return _T4;case Cyc_Absyn_Short_sz: _T5=Cyc_Absyn_sshort_type;
return _T5;case Cyc_Absyn_Int_sz: _T6=Cyc_Absyn_sint_type;
return _T6;case Cyc_Absyn_Long_sz: _T7=Cyc_Absyn_slong_type;
return _T7;case Cyc_Absyn_LongLong_sz: goto _LL15;default: _LL15: _T8=Cyc_Absyn_slonglong_type;
# 502
return _T8;};case Cyc_Absyn_Unsigned: _T9=sz;_TA=(int)_T9;switch(_TA){case Cyc_Absyn_Char_sz: _TB=Cyc_Absyn_uchar_type;
# 508
return _TB;case Cyc_Absyn_Short_sz: _TC=Cyc_Absyn_ushort_type;
return _TC;case Cyc_Absyn_Int_sz: _TD=Cyc_Absyn_uint_type;
return _TD;case Cyc_Absyn_Long_sz: _TE=Cyc_Absyn_ulong_type;
return _TE;case Cyc_Absyn_LongLong_sz: goto _LL22;default: _LL22: _TF=Cyc_Absyn_ulonglong_type;
# 513
return _TF;};case Cyc_Absyn_None: goto _LL8;default: _LL8: _T10=sz;_T11=(int)_T10;switch(_T11){case Cyc_Absyn_Char_sz: _T12=Cyc_Absyn_char_type;
# 520
return _T12;case Cyc_Absyn_Short_sz: _T13=Cyc_Absyn_nshort_type;
return _T13;case Cyc_Absyn_Int_sz: _T14=Cyc_Absyn_nint_type;
return _T14;case Cyc_Absyn_Long_sz: _T15=Cyc_Absyn_nlong_type;
return _T15;case Cyc_Absyn_LongLong_sz: goto _LL2F;default: _LL2F: _T16=Cyc_Absyn_nlonglong_type;
# 525
return _T16;};};}
# 530
void*Cyc_Absyn_complex_type(void*t){int*_T0;int _T1;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2;void*_T3;int*_T4;unsigned _T5;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6;struct Cyc_Absyn_ComplexCon_Absyn_TyCon_struct*_T7;struct Cyc_List_List*_T8;struct _fat_ptr _T9;void*_TA;struct Cyc_Warn_String_Warn_Warg_struct _TB;struct Cyc_Warn_Typ_Warn_Warg_struct _TC;int(*_TD)(struct _fat_ptr);void*(*_TE)(struct _fat_ptr);struct _fat_ptr _TF;
# 535
void*_T10=Cyc_Absyn_compress(t);_T0=(int*)_T10;_T1=*_T0;if(_T1!=0)goto _TL43;_T2=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T10;_T3=_T2->f1;_T4=(int*)_T3;_T5=*_T4;switch(_T5){case 1: goto _LL4;case 2: _LL4:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T11=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T11->tag=0;{struct Cyc_Absyn_ComplexCon_Absyn_TyCon_struct*_T12=_cycalloc(sizeof(struct Cyc_Absyn_ComplexCon_Absyn_TyCon_struct));
# 539
_T12->tag=3;_T7=(struct Cyc_Absyn_ComplexCon_Absyn_TyCon_struct*)_T12;}_T11->f1=(void*)_T7;{void*_T12[1];_T12[0]=t;_T9=_tag_fat(_T12,sizeof(void*),1);_T8=Cyc_List_list(_T9);}_T11->f2=_T8;_T6=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T11;}_TA=(void*)_T6;return _TA;default: goto _LL5;}goto _TL44;_TL43: _LL5:{struct Cyc_Warn_String_Warn_Warg_struct _T11;_T11.tag=0;
# 541
_T11.f1=_tag_fat("bad complex type ",sizeof(char),18U);_TB=_T11;}{struct Cyc_Warn_String_Warn_Warg_struct _T11=_TB;{struct Cyc_Warn_Typ_Warn_Warg_struct _T12;_T12.tag=2;_T12.f1=t;_TC=_T12;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T12=_TC;void*_T13[2];_T13[0]=& _T11;_T13[1]=& _T12;_TE=Cyc_Warn_impos2;{int(*_T14)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TE;_TD=_T14;}_TF=_tag_fat(_T13,sizeof(void*),2);_TD(_TF);}}_TL44:;}
# 545
void*Cyc_Absyn_thin_bounds_exp(struct Cyc_Absyn_Exp*e){void*_T0;void*_T1;_T0=
# 548
Cyc_Absyn_valueof_type(e);_T1=Cyc_Absyn_thin_bounds_type(_T0);return _T1;}
# 551
void*Cyc_Absyn_thin_bounds_int(unsigned i){struct Cyc_Absyn_Exp*_T0;void*_T1;
# 554
struct Cyc_Absyn_Exp*e=Cyc_Absyn_uint_exp(i,0U);_T0=e;
_T0->topt=Cyc_Absyn_uint_type;_T1=
Cyc_Absyn_thin_bounds_exp(e);return _T1;}
# 559
void*Cyc_Absyn_bounds_one (void){void*_T0;
# 562
static void*bone=0;
if(bone!=0)goto _TL46;
bone=Cyc_Absyn_thin_bounds_int(1U);goto _TL47;_TL46: _TL47: _T0=bone;
return _T0;}
# 571
extern int Wchar_t_unsigned;
extern int Sizeof_wchar_t;
# 574
void*Cyc_Absyn_wchar_type (void){int _T0;int _T1;void*_T2;int _T3;void*_T4;int _T5;void*_T6;int _T7;void*_T8;int _T9;struct Cyc_Warn_String_Warn_Warg_struct _TA;struct Cyc_Warn_Int_Warn_Warg_struct _TB;int(*_TC)(struct _fat_ptr);void*(*_TD)(struct _fat_ptr);struct _fat_ptr _TE;_T0=Sizeof_wchar_t;_T1=(int)_T0;switch(_T1){case 1: _T3=Wchar_t_unsigned;
# 588 "absyn.cyc"
if(!_T3)goto _TL49;_T2=Cyc_Absyn_uchar_type;goto _TL4A;_TL49: _T2=Cyc_Absyn_schar_type;_TL4A: return _T2;case 2: _T5=Wchar_t_unsigned;
# 590
if(!_T5)goto _TL4B;_T4=Cyc_Absyn_ushort_type;goto _TL4C;_TL4B: _T4=Cyc_Absyn_sshort_type;_TL4C: return _T4;case 4: _T7=Wchar_t_unsigned;
# 592
if(!_T7)goto _TL4D;_T6=Cyc_Absyn_uint_type;goto _TL4E;_TL4D: _T6=Cyc_Absyn_sint_type;_TL4E: return _T6;case 8: _T9=Wchar_t_unsigned;
# 594
if(!_T9)goto _TL4F;_T8=Cyc_Absyn_ulonglong_type;goto _TL50;_TL4F: _T8=Cyc_Absyn_slonglong_type;_TL50: return _T8;default:{struct Cyc_Warn_String_Warn_Warg_struct _TF;_TF.tag=0;
# 596
_TF.f1=_tag_fat("Unexpected wchar_t size: ",sizeof(char),26U);_TA=_TF;}{struct Cyc_Warn_String_Warn_Warg_struct _TF=_TA;{struct Cyc_Warn_Int_Warn_Warg_struct _T10;_T10.tag=12;_T10.f1=Sizeof_wchar_t;_TB=_T10;}{struct Cyc_Warn_Int_Warn_Warg_struct _T10=_TB;void*_T11[2];_T11[0]=& _TF;_T11[1]=& _T10;_TD=Cyc_Warn_impos2;{int(*_T12)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TD;_TC=_T12;}_TE=_tag_fat(_T11,sizeof(void*),2);_TC(_TE);}}};}static char _TmpG0[4U]="exn";
# 601
static struct _fat_ptr Cyc_Absyn_exn_str={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 4U};
static struct _tuple0 Cyc_Absyn_exn_name_v={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Absyn_exn_str};
struct _tuple0*Cyc_Absyn_exn_name=& Cyc_Absyn_exn_name_v;static char _TmpG1[15U]="Null_Exception";static char _TmpG2[13U]="Array_bounds";static char _TmpG3[16U]="Match_Exception";static char _TmpG4[10U]="Bad_alloc";static char _TmpG5[7U]="Assert";
# 605
struct Cyc_Absyn_Datatypedecl*Cyc_Absyn_exn_tud (void){int _T0;unsigned _T1;struct Cyc_List_List*_T2;struct Cyc_Absyn_Datatypefield*_T3;struct _tuple0*_T4;struct _fat_ptr*_T5;struct _fat_ptr*_T6;int _T7;struct Cyc_Absyn_Datatypedecl*_T8;struct Cyc_Core_Opt*_T9;struct Cyc_Absyn_Datatypedecl*_TA;
# 608
static struct _fat_ptr builtin_exns[5U]={{(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 15U},{(unsigned char*)_TmpG2,(unsigned char*)_TmpG2,(unsigned char*)_TmpG2 + 13U},{(unsigned char*)_TmpG3,(unsigned char*)_TmpG3,(unsigned char*)_TmpG3 + 16U},{(unsigned char*)_TmpG4,(unsigned char*)_TmpG4,(unsigned char*)_TmpG4 + 10U},{(unsigned char*)_TmpG5,(unsigned char*)_TmpG5,(unsigned char*)_TmpG5 + 7U}};
# 616
static struct Cyc_Absyn_Datatypedecl*tud_opt=0;
# 618
if(tud_opt!=0)goto _TL51;{
# 620
struct Cyc_List_List*tufs=0;{
# 622
int i=0;_TL56: _T0=i;_T1=(unsigned)_T0;if(_T1 < 5U)goto _TL54;else{goto _TL55;}
_TL54:{struct Cyc_List_List*_TB=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Datatypefield*_TC=_cycalloc(sizeof(struct Cyc_Absyn_Datatypefield));{struct _tuple0*_TD=_cycalloc(sizeof(struct _tuple0));_TD->f0.Abs_n.tag=1U;
# 625
_TD->f0.Abs_n.val=0;{struct _fat_ptr*_TE=_cycalloc(sizeof(struct _fat_ptr));_T6=builtin_exns;_T7=i;
*_TE=_T6[_T7];_T5=(struct _fat_ptr*)_TE;}_TD->f1=_T5;_T4=(struct _tuple0*)_TD;}
# 625
_TC->name=_T4;
# 627
_TC->typs=0;_TC->loc=0U;_TC->sc=3U;_T3=(struct Cyc_Absyn_Datatypefield*)_TC;}
# 624
_TB->hd=_T3;
# 629
_TB->tl=tufs;_T2=(struct Cyc_List_List*)_TB;}
# 623
tufs=_T2;
# 622
i=i + 1;goto _TL56;_TL55:;}{struct Cyc_Absyn_Datatypedecl*_TB=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
# 632
_TB->sc=3U;_TB->name=Cyc_Absyn_exn_name;_TB->tvs=0;{struct Cyc_Core_Opt*_TC=_cycalloc(sizeof(struct Cyc_Core_Opt));
_TC->v=tufs;_T9=(struct Cyc_Core_Opt*)_TC;}_TB->fields=_T9;_TB->is_extensible=1;_T8=(struct Cyc_Absyn_Datatypedecl*)_TB;}
# 632
tud_opt=_T8;}goto _TL52;_TL51: _TL52: _TA=tud_opt;
# 636
return _TA;}
# 639
void*Cyc_Absyn_exn_type (void){union Cyc_Absyn_DatatypeInfo _T0;struct Cyc_Absyn_Datatypedecl**_T1;void*_T2;void*_T3;void*_T4;struct Cyc_Absyn_Tqual _T5;void*_T6;void*_T7;void*_T8;
# 642
static void*exn_typ=0;
static void*eopt=0;
# 645
if(exn_typ!=0)goto _TL57;{union Cyc_Absyn_DatatypeInfo _T9;_T9.KnownDatatype.tag=2U;{struct Cyc_Absyn_Datatypedecl**_TA=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl*));
# 647
*_TA=Cyc_Absyn_exn_tud();_T1=(struct Cyc_Absyn_Datatypedecl**)_TA;}_T9.KnownDatatype.val=_T1;_T0=_T9;}eopt=Cyc_Absyn_datatype_type(_T0,0);_T2=eopt;_T3=Cyc_Absyn_heap_rgn_type;_T4=Cyc_Absyn_al_qual_type;_T5=
# 649
Cyc_Absyn_empty_tqual(0U);_T6=Cyc_Absyn_false_type;_T7=Cyc_Absyn_false_type;
# 648
exn_typ=Cyc_Absyn_at_type(_T2,_T3,_T4,_T5,_T6,_T7);goto _TL58;_TL57: _TL58: _T8=exn_typ;
# 652
return _T8;}
# 655
struct _tuple0*Cyc_Absyn_datatype_print_arg_qvar (void){struct _tuple0*_T0;struct _fat_ptr*_T1;struct _tuple0*_T2;
# 658
static struct _tuple0*q=0;
if(q!=0)goto _TL59;{struct _tuple0*_T3=_cycalloc(sizeof(struct _tuple0));
_T3->f0=Cyc_Absyn_Abs_n(0,0);{struct _fat_ptr*_T4=_cycalloc(sizeof(struct _fat_ptr));*_T4=_tag_fat("PrintArg",sizeof(char),9U);_T1=(struct _fat_ptr*)_T4;}_T3->f1=_T1;_T0=(struct _tuple0*)_T3;}q=_T0;goto _TL5A;_TL59: _TL5A: _T2=q;
return _T2;}
# 664
struct _tuple0*Cyc_Absyn_datatype_scanf_arg_qvar (void){struct _tuple0*_T0;struct _fat_ptr*_T1;struct _tuple0*_T2;
# 667
static struct _tuple0*q=0;
if(q!=0)goto _TL5B;{struct _tuple0*_T3=_cycalloc(sizeof(struct _tuple0));
_T3->f0=Cyc_Absyn_Abs_n(0,0);{struct _fat_ptr*_T4=_cycalloc(sizeof(struct _fat_ptr));*_T4=_tag_fat("ScanfArg",sizeof(char),9U);_T1=(struct _fat_ptr*)_T4;}_T3->f1=_T1;_T0=(struct _tuple0*)_T3;}q=_T0;goto _TL5C;_TL5B: _TL5C: _T2=q;
return _T2;}
# 678
struct _tuple0*Cyc_Absyn_uniqueaqual_qvar (void){struct _tuple0*_T0;struct Cyc_List_List*_T1;struct _fat_ptr*_T2;struct _fat_ptr*_T3;struct _tuple0*_T4;
# 681
static struct _tuple0*q=0;
if(q!=0)goto _TL5D;{struct _tuple0*_T5=_cycalloc(sizeof(struct _tuple0));{struct Cyc_List_List*_T6=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T7=_cycalloc(sizeof(struct _fat_ptr));
*_T7=_tag_fat("Core",sizeof(char),5U);_T2=(struct _fat_ptr*)_T7;}_T6->hd=_T2;_T6->tl=0;_T1=(struct Cyc_List_List*)_T6;}_T5->f0=Cyc_Absyn_Abs_n(_T1,0);{struct _fat_ptr*_T6=_cycalloc(sizeof(struct _fat_ptr));*_T6=_tag_fat("unique_qual",sizeof(char),12U);_T3=(struct _fat_ptr*)_T6;}_T5->f1=_T3;_T0=(struct _tuple0*)_T5;}q=_T0;goto _TL5E;_TL5D: _TL5E: _T4=q;
return _T4;}
# 687
struct Cyc_Absyn_Exp*Cyc_Absyn_uniqueaqual_exp (void){struct _tuple0*_T0;void*_T1;struct Cyc_Absyn_Vardecl*_T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T4;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T5;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T6;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T7;
# 690
void*t=Cyc_Absyn_aqual_handle_type(Cyc_Absyn_un_qual_type);_T0=
Cyc_Absyn_uniqueaqual_qvar();_T1=t;{struct Cyc_Absyn_Vardecl*vd=Cyc_Absyn_new_vardecl(0U,_T0,_T1,0,0);_T2=vd;
_T2->sc=3U;{struct Cyc_Absyn_Exp*_T8=_cycalloc(sizeof(struct Cyc_Absyn_Exp));
# 694
_T8->topt=t;
_T8->loc=0U;_T4=& Cyc_Absyn_EmptyAnnot_val;_T5=(struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)_T4;
_T8->annot=(void*)_T5;{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T9=_cycalloc(sizeof(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct));_T9->tag=1;{struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_TA=_cycalloc(sizeof(struct Cyc_Absyn_Global_b_Absyn_Binding_struct));_TA->tag=1;
_TA->f1=vd;_T7=(struct Cyc_Absyn_Global_b_Absyn_Binding_struct*)_TA;}_T9->f1=(void*)_T7;_T6=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T9;}_T8->r=(void*)_T6;_T3=(struct Cyc_Absyn_Exp*)_T8;}
# 693
return _T3;}}
# 702
void*Cyc_Absyn_pointer_type(struct Cyc_Absyn_PtrInfo s){struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T0;void*_T1;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_PointerType_Absyn_Type_struct));_T2->tag=4;
# 705
_T2->f1=s;_T0=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T2;}_T1=(void*)_T0;return _T1;}
# 708
void*Cyc_Absyn_fatptr_type(void*t,void*r,void*aq,struct Cyc_Absyn_Tqual tq,void*zt,void*rel){struct Cyc_Absyn_PtrInfo _T0;void*_T1;{struct Cyc_Absyn_PtrInfo _T2;
# 718
_T2.elt_type=t;
_T2.elt_tq=tq;
# 721
_T2.ptr_atts.eff=r;
_T2.ptr_atts.nullable=Cyc_Absyn_true_type;
_T2.ptr_atts.bounds=Cyc_Absyn_fat_bound_type;
_T2.ptr_atts.zero_term=zt;
_T2.ptr_atts.ptrloc=0;
_T2.ptr_atts.autoreleased=rel;
_T2.ptr_atts.aqual=aq;_T0=_T2;}_T1=
# 717
Cyc_Absyn_pointer_type(_T0);return _T1;}
# 732
void*Cyc_Absyn_starb_type(void*t,void*r,void*aq,struct Cyc_Absyn_Tqual tq,void*b,void*zt,void*rel){struct Cyc_Absyn_PtrInfo _T0;void*_T1;{struct Cyc_Absyn_PtrInfo _T2;
# 743
_T2.elt_type=t;
_T2.elt_tq=tq;
# 746
_T2.ptr_atts.eff=r;
_T2.ptr_atts.nullable=Cyc_Absyn_true_type;
_T2.ptr_atts.bounds=b;
_T2.ptr_atts.zero_term=zt;
_T2.ptr_atts.ptrloc=0;
_T2.ptr_atts.autoreleased=rel;
_T2.ptr_atts.aqual=aq;_T0=_T2;}_T1=
# 742
Cyc_Absyn_pointer_type(_T0);return _T1;}
# 757
void*Cyc_Absyn_atb_type(void*t,void*r,void*aq,struct Cyc_Absyn_Tqual tq,void*b,void*zt,void*rel){struct Cyc_Absyn_PtrInfo _T0;void*_T1;{struct Cyc_Absyn_PtrInfo _T2;
# 768
_T2.elt_type=t;
_T2.elt_tq=tq;
# 771
_T2.ptr_atts.eff=r;
_T2.ptr_atts.nullable=Cyc_Absyn_false_type;
_T2.ptr_atts.bounds=b;
_T2.ptr_atts.zero_term=zt;
_T2.ptr_atts.ptrloc=0;
_T2.ptr_atts.autoreleased=rel;
_T2.ptr_atts.aqual=aq;_T0=_T2;}_T1=
# 767
Cyc_Absyn_pointer_type(_T0);return _T1;}
# 782
void*Cyc_Absyn_star_type(void*t,void*r,void*aq,struct Cyc_Absyn_Tqual tq,void*zeroterm,void*rel){void*_T0;void*_T1;void*_T2;struct Cyc_Absyn_Tqual _T3;void*_T4;void*_T5;void*_T6;void*_T7;_T0=t;_T1=r;_T2=aq;_T3=tq;_T4=
# 791
Cyc_Absyn_bounds_one();_T5=zeroterm;_T6=rel;_T7=Cyc_Absyn_starb_type(_T0,_T1,_T2,_T3,_T4,_T5,_T6);return _T7;}
# 794
void*Cyc_Absyn_cstar_type(void*t,struct Cyc_Absyn_Tqual tq){void*_T0;_T0=
# 799
Cyc_Absyn_star_type(t,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);return _T0;}
# 802
void*Cyc_Absyn_at_type(void*t,void*r,void*aq,struct Cyc_Absyn_Tqual tq,void*zeroterm,void*rel){void*_T0;void*_T1;void*_T2;struct Cyc_Absyn_Tqual _T3;void*_T4;void*_T5;void*_T6;void*_T7;_T0=t;_T1=r;_T2=aq;_T3=tq;_T4=
# 811
Cyc_Absyn_bounds_one();_T5=zeroterm;_T6=rel;_T7=Cyc_Absyn_atb_type(_T0,_T1,_T2,_T3,_T4,_T5,_T6);return _T7;}
# 814
void*Cyc_Absyn_string_type(void*rgn,void*aq){void*_T0;void*_T1;void*_T2;struct Cyc_Absyn_Tqual _T3;void*_T4;void*_T5;void*_T6;void*_T7;_T0=Cyc_Absyn_char_type;_T1=rgn;_T2=aq;_T3=
# 817
Cyc_Absyn_empty_tqual(0U);_T4=Cyc_Absyn_fat_bound_type;_T5=Cyc_Absyn_true_type;_T6=Cyc_Absyn_false_type;_T7=Cyc_Absyn_starb_type(_T0,_T1,_T2,_T3,_T4,_T5,_T6);return _T7;}
# 820
void*Cyc_Absyn_const_string_type(void*rgn,void*aq){void*_T0;void*_T1;void*_T2;struct Cyc_Absyn_Tqual _T3;void*_T4;void*_T5;void*_T6;void*_T7;_T0=Cyc_Absyn_char_type;_T1=rgn;_T2=aq;_T3=
# 823
Cyc_Absyn_const_tqual(0U);_T4=Cyc_Absyn_fat_bound_type;_T5=Cyc_Absyn_true_type;_T6=Cyc_Absyn_false_type;_T7=Cyc_Absyn_starb_type(_T0,_T1,_T2,_T3,_T4,_T5,_T6);return _T7;}
# 826
void*Cyc_Absyn_array_type(void*elt_type,struct Cyc_Absyn_Tqual tq,struct Cyc_Absyn_Exp*num_elts,void*zero_term,unsigned ztloc){struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T0;void*_T1;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));_T2->tag=5;
# 835
_T2->f1.elt_type=elt_type;
_T2->f1.tq=tq;
_T2->f1.num_elts=num_elts;
_T2->f1.zero_term=zero_term;
_T2->f1.zt_loc=ztloc;_T0=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T2;}_T1=(void*)_T0;
# 834
return _T1;}
# 843
void*Cyc_Absyn_typeof_type(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T0;void*_T1;{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_TypeofType_Absyn_Type_struct));_T2->tag=11;
# 846
_T2->f1=e;_T0=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_T2;}_T1=(void*)_T0;return _T1;}
# 850
void*Cyc_Absyn_typedef_type(struct _tuple0*n,struct Cyc_List_List*args,struct Cyc_Absyn_Typedefdecl*d,void*defn){struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T0;void*_T1;{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_TypedefType_Absyn_Type_struct));_T2->tag=8;
# 857
_T2->f1=n;_T2->f2=args;_T2->f3=d;_T2->f4=defn;_T0=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T2;}_T1=(void*)_T0;return _T1;}
# 864
static void*Cyc_Absyn_aggregate_type(enum Cyc_Absyn_AggrKind k,struct _fat_ptr*name){struct Cyc_Absyn_AppType_Absyn_Type_struct*_T0;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T1;enum Cyc_Absyn_AggrKind _T2;struct _tuple0*_T3;void*_T4;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T5=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T5->tag=0;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T6=_cycalloc(sizeof(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct));_T6->tag=24;_T2=k;{struct _tuple0*_T7=_cycalloc(sizeof(struct _tuple0));
# 869
_T7->f0=Cyc_Absyn_rel_ns_null();_T7->f1=name;_T3=(struct _tuple0*)_T7;}_T6->f1=Cyc_Absyn_UnknownAggr(_T2,_T3,0);_T1=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T6;}
# 868
_T5->f1=(void*)_T1;
# 870
_T5->f2=0;_T0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T5;}_T4=(void*)_T0;
# 867
return _T4;}
# 874
void*Cyc_Absyn_strct(struct _fat_ptr*name){void*_T0;_T0=Cyc_Absyn_aggregate_type(0U,name);return _T0;}
void*Cyc_Absyn_union_typ(struct _fat_ptr*name){void*_T0;_T0=Cyc_Absyn_aggregate_type(1U,name);return _T0;}
# 877
void*Cyc_Absyn_strctq(struct _tuple0*name){union Cyc_Absyn_AggrInfo _T0;void*_T1;_T0=Cyc_Absyn_UnknownAggr(0U,name,0);_T1=Cyc_Absyn_aggr_type(_T0,0);return _T1;}
void*Cyc_Absyn_unionq_type(struct _tuple0*name){union Cyc_Absyn_AggrInfo _T0;void*_T1;_T0=Cyc_Absyn_UnknownAggr(1U,name,0);_T1=Cyc_Absyn_aggr_type(_T0,0);return _T1;}
# 882
void*Cyc_Absyn_compress(void*t){void*_T0;int*_T1;unsigned _T2;void*_T3;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T4;void*_T5;void*_T6;void*_T7;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T8;void**_T9;void**_TA;void*_TB;void**_TC;void*_TD;void*_TE;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_TF;void*_T10;void*_T11;void*_T12;void*_T13;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T14;void**_T15;void*_T16;void*_T17;struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T18;void**_T19;void*_T1A;void*_T1B;unsigned _T1C;void**_T1D;void*_T1E;unsigned _T1F;void*_T20;void*_T21;struct Cyc_Absyn_Exp*_T22;int*_T23;unsigned _T24;void*_T25;void*_T26;void*_T27;int*_T28;int _T29;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2A;void*_T2B;int*_T2C;int _T2D;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2E;void*_T2F;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T30;enum Cyc_Absyn_Sign _T31;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T32;void*_T33;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T34;enum Cyc_Absyn_Size_of _T35;int _T36;struct Cyc_Absyn_Exp*_T37;int*_T38;int _T39;void*_T3A;void*_T3B;void*_T3C;void*_T3D;struct Cyc_Absyn_Exp*_T3E;void*_T3F;void*_T40;struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T41;void**_T42;void*_T43;void**_T44;void*_T45;void*_T46;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T47;void*_T48;int*_T49;unsigned _T4A;void*_T4B;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T4C;struct Cyc_List_List*_T4D;void*_T4E;struct Cyc_List_List*_T4F;void*_T50;void*_T51;void*_T52;int*_T53;unsigned _T54;void*_T55;struct Cyc_Absyn_PtrInfo _T56;struct Cyc_Absyn_PtrAtts _T57;void*_T58;void*_T59;void*_T5A;void*_T5B;struct Cyc_List_List*_T5C;void*_T5D;void*_T5E;int*_T5F;unsigned _T60;void*_T61;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T62;void*_T63;int*_T64;unsigned _T65;void*_T66;void*_T67;void*_T68;void*_T69;struct Cyc_List_List*_T6A;void*_T6B;void*_T6C;void*_T6D;struct Cyc_List_List*_T6E;struct Cyc_List_List*_T6F;struct Cyc_List_List*_T70;void*_T71;void*_T72;void*_T73;void*_T74;void*_T75;struct Cyc_Warn_String_Warn_Warg_struct _T76;struct Cyc_Warn_Typ_Warn_Warg_struct _T77;int(*_T78)(struct _fat_ptr);void*(*_T79)(struct _fat_ptr);struct _fat_ptr _T7A;void*_T7B;struct Cyc_List_List*_T7C;void*_T7D;void*_T7E;_T0=t;_T1=(int*)_T0;_T2=*_T1;switch(_T2){case 1: _T3=t;_T4=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3;_T5=_T4->f2;if(_T5!=0)goto _TL60;goto _LL4;_TL60: _T6=t;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T7F=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T6;_T7=t;_T8=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T7;_T9=& _T8->f2;_T7E=(void**)_T9;}_LLA: {void**t2opt_ref=_T7E;_TA=t2opt_ref;_TB=*_TA;{
# 900
void*ta=_check_null(_TB);
void*t2=Cyc_Absyn_compress(ta);
if(t2==ta)goto _TL62;_TC=t2opt_ref;
*_TC=t2;goto _TL63;_TL62: _TL63: _TD=t2;
return _TD;}}case 8: _TE=t;_TF=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_TE;_T10=_TF->f4;if(_T10!=0)goto _TL64;_LL4: _T11=t;
# 889
return _T11;_TL64: _T12=t;{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T7F=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T12;_T13=t;_T14=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T13;_T15=& _T14->f4;_T7E=(void**)_T15;}_LL8: {void**topt_ref=_T7E;_T7E=topt_ref;goto _LLA;}case 3: _T16=t;{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T7F=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T16;_T17=t;_T18=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T17;_T19=& _T18->f2;_T7E=(void**)_T19;_T1A=_T7F->f4;_T7D=(void*)_T1A;}{void**t2=_T7E;void*bv=_T7D;_T1B=bv;_T1C=(unsigned)_T1B;
# 892
if(!_T1C)goto _TL66;
Cyc_BansheeIf_resolve(t);goto _TL67;_TL66: _TL67: _T1D=t2;_T1E=*_T1D;_T1F=(unsigned)_T1E;
if(_T1F)goto _TL68;else{goto _TL6A;}
_TL6A: _T20=t;return _T20;_TL68: _T7E=t2;goto _LL8;}case 9: _T21=t;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T7F=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T21;_T7E=_T7F->f1;}{struct Cyc_Absyn_Exp*e=_T7E;
# 908
Cyc_Evexp_eval_const_uint_exp(e);
# 911
_TL6B: if(1)goto _TL6C;else{goto _TL6D;}
_TL6C: _T22=e;{void*_T7F=_T22->r;struct Cyc_Absyn_Exp*_T80;void*_T81;_T23=(int*)_T7F;_T24=*_T23;switch(_T24){case 38:{struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T82=(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_T7F;_T25=_T82->f1;_T81=(void*)_T25;}{void*t2=_T81;_T26=
# 915
Cyc_Absyn_compress(t2);return _T26;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T82=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T7F;_T27=_T82->f1;_T81=(void*)_T27;_T80=_T82->f2;}{void*t2=_T81;struct Cyc_Absyn_Exp*e2=_T80;
# 917
void*_T82=Cyc_Absyn_compress(t2);_T28=(int*)_T82;_T29=*_T28;if(_T29!=0)goto _TL6F;_T2A=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T82;_T2B=_T2A->f1;_T2C=(int*)_T2B;_T2D=*_T2C;if(_T2D!=1)goto _TL71;_T2E=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T82;_T2F=_T2E->f1;_T30=(struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T2F;_T31=_T30->f1;if(_T31!=Cyc_Absyn_Unsigned)goto _TL73;_T32=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T82;_T33=_T32->f1;_T34=(struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T33;_T35=_T34->f2;_T36=(int)_T35;switch(_T36){case Cyc_Absyn_Int_sz: goto _LL22;case Cyc_Absyn_Long_sz: _LL22: _T37=e2;{
# 921
void*_T83=_T37->r;_T38=(int*)_T83;_T39=*_T38;if(_T39!=38)goto _TL76;
# 924
e=e2;goto _TL6B;_TL76: _T3A=t;
# 928
return _T3A;;}default: goto _LL23;}goto _TL74;_TL73: goto _LL23;_TL74: goto _TL72;_TL71: goto _LL23;_TL72: goto _TL70;_TL6F: _LL23: _T3B=t;
# 931
return _T3B;_TL70:;}default: _T3C=t;
# 934
return _T3C;};}goto _TL6B;_TL6D:;}case 11: _T3D=t;{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T7F=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_T3D;_T7E=_T7F->f1;}{struct Cyc_Absyn_Exp*e=_T7E;_T3E=e;{
# 938
void*t2=_T3E->topt;
if(t2==0)goto _TL78;_T3F=t2;goto _TL79;_TL78: _T3F=t;_TL79: return _T3F;}}case 10: _T40=t;_T41=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T40;_T42=_T41->f2;if(_T42==0)goto _TL7A;_T43=t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T7F=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T43;_T44=_T7F->f2;{void*_T80=*_T44;_T7E=_T80;}}{void*t=_T7E;_T45=
# 942
Cyc_Absyn_compress(t);return _T45;}_TL7A: goto _LL15;case 0: _T46=t;_T47=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T46;_T48=_T47->f1;_T49=(int*)_T48;_T4A=*_T49;switch(_T4A){case 15: _T4B=t;_T4C=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T4B;_T4D=_T4C->f2;if(_T4D==0)goto _TL7D;_T4E=t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T7F=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T4E;_T4F=_T7F->f2;{struct Cyc_List_List _T80=*_T4F;_T50=_T80.hd;_T7E=(void*)_T50;}}{void*tv=_T7E;
# 945
void*ctv=Cyc_Absyn_compress(tv);
if(ctv!=tv)goto _TL7F;_T51=t;
return _T51;_TL7F:{void*_T7F;_T52=ctv;_T53=(int*)_T52;_T54=*_T53;switch(_T54){case 4: _T55=ctv;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T80=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T55;_T56=_T80->f1;_T57=_T56.ptr_atts;_T7F=_T57.aqual;}{void*aq=_T7F;_T58=
# 951
Cyc_Absyn_compress(aq);return _T58;}case 2: goto _LL30;case 1: _LL30: goto _LL2A;default: _T59=Cyc_Absyn_al_qual_type;
# 958
return _T59;}_LL2A:;}_T5A=
# 960
Cyc_Absyn_aqualsof_type(ctv);return _T5A;}_TL7D: goto _LL15;case 17: _T5B=t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T7F=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T5B;_T7C=_T7F->f2;}{struct Cyc_List_List*tv_bnd=_T7C;_T5C=
# 963
_check_null(tv_bnd);_T5D=_T5C->hd;{void*comp=Cyc_Absyn_compress(_T5D);struct Cyc_List_List*_T7F;enum Cyc_Absyn_AliasQualVal _T80;_T5E=comp;_T5F=(int*)_T5E;_T60=*_T5F;switch(_T60){case 0: _T61=comp;_T62=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T61;_T63=_T62->f1;_T64=(int*)_T63;_T65=*_T64;switch(_T65){case 16: _T66=comp;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T81=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T66;_T67=_T81->f1;{struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*_T82=(struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*)_T67;_T80=_T82->f1;}}{enum Cyc_Absyn_AliasQualVal aqv=_T80;_T68=comp;
# 967
return _T68;}case 15: _LL3B: _T69=comp;_T6A=tv_bnd;_T6B=_T6A->hd;
# 971
if(_T69!=_T6B)goto _TL84;_T6C=t;
return _T6C;_TL84: _T6D=comp;_T6E=tv_bnd;_T6F=_T6E->tl;_T70=
_check_null(_T6F);_T71=_T70->hd;_T72=Cyc_Absyn_compress(_T71);_T73=Cyc_Absyn_aqual_var_type(_T6D,_T72);return _T73;case 17: _T74=comp;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T81=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T74;_T7F=_T81->f2;}{struct Cyc_List_List*tvb2=_T7F;_T75=
# 975
Cyc_Absyn_compress(comp);return _T75;}default: goto _LL3E;};case 2: goto _LL39;case 1: _LL39: goto _LL3B;default: _LL3E:{struct Cyc_Warn_String_Warn_Warg_struct _T81;_T81.tag=0;
# 977
_T81.f1=_tag_fat("Unexpected type within AqualVar: ",sizeof(char),34U);_T76=_T81;}{struct Cyc_Warn_String_Warn_Warg_struct _T81=_T76;{struct Cyc_Warn_Typ_Warn_Warg_struct _T82;_T82.tag=2;_T82.f1=comp;_T77=_T82;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T82=_T77;void*_T83[2];_T83[0]=& _T81;_T83[1]=& _T82;_T79=Cyc_Warn_impos2;{int(*_T84)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T79;_T78=_T84;}_T7A=_tag_fat(_T83,sizeof(void*),2);_T78(_T7A);}}};}}default: goto _LL15;};default: _LL15: _T7B=t;
# 981
return _T7B;};}
# 990
union Cyc_Absyn_Cnst Cyc_Absyn_Char_c(enum Cyc_Absyn_Sign sn,char c){union Cyc_Absyn_Cnst _T0;{union Cyc_Absyn_Cnst _T1;_T1.Char_c.tag=2U;_T1.Char_c.val.f0=sn;_T1.Char_c.val.f1=c;_T0=_T1;}return _T0;}
union Cyc_Absyn_Cnst Cyc_Absyn_Wchar_c(struct _fat_ptr s){union Cyc_Absyn_Cnst _T0;{union Cyc_Absyn_Cnst _T1;_T1.Wchar_c.tag=3U;_T1.Wchar_c.val=s;_T0=_T1;}return _T0;}
union Cyc_Absyn_Cnst Cyc_Absyn_Short_c(enum Cyc_Absyn_Sign sn,short s){union Cyc_Absyn_Cnst _T0;{union Cyc_Absyn_Cnst _T1;_T1.Short_c.tag=4U;_T1.Short_c.val.f0=sn;_T1.Short_c.val.f1=s;_T0=_T1;}return _T0;}
union Cyc_Absyn_Cnst Cyc_Absyn_Int_c(enum Cyc_Absyn_Sign sn,int i){union Cyc_Absyn_Cnst _T0;{union Cyc_Absyn_Cnst _T1;_T1.Int_c.tag=5U;_T1.Int_c.val.f0=sn;_T1.Int_c.val.f1=i;_T0=_T1;}return _T0;}
union Cyc_Absyn_Cnst Cyc_Absyn_LongLong_c(enum Cyc_Absyn_Sign sn,long long l){union Cyc_Absyn_Cnst _T0;{union Cyc_Absyn_Cnst _T1;_T1.LongLong_c.tag=6U;_T1.LongLong_c.val.f0=sn;_T1.LongLong_c.val.f1=l;_T0=_T1;}return _T0;}
union Cyc_Absyn_Cnst Cyc_Absyn_Float_c(struct _fat_ptr s,int i){union Cyc_Absyn_Cnst _T0;{union Cyc_Absyn_Cnst _T1;_T1.Float_c.tag=7U;_T1.Float_c.val.f0=s;_T1.Float_c.val.f1=i;_T0=_T1;}return _T0;}
union Cyc_Absyn_Cnst Cyc_Absyn_String_c(struct _fat_ptr s){union Cyc_Absyn_Cnst _T0;{union Cyc_Absyn_Cnst _T1;_T1.String_c.tag=8U;_T1.String_c.val=s;_T0=_T1;}return _T0;}
union Cyc_Absyn_Cnst Cyc_Absyn_Wstring_c(struct _fat_ptr s){union Cyc_Absyn_Cnst _T0;{union Cyc_Absyn_Cnst _T1;_T1.Wstring_c.tag=9U;_T1.Wstring_c.val=s;_T0=_T1;}return _T0;}
# 1004
struct Cyc_Absyn_Exp*Cyc_Absyn_new_exp(void*r,unsigned loc){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T1;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T2;{struct Cyc_Absyn_Exp*_T3=_cycalloc(sizeof(struct Cyc_Absyn_Exp));
# 1008
_T3->topt=0;
_T3->r=r;
_T3->loc=loc;_T1=& Cyc_Absyn_EmptyAnnot_val;_T2=(struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)_T1;
_T3->annot=(void*)_T2;_T0=(struct Cyc_Absyn_Exp*)_T3;}
# 1007
return _T0;}
# 1015
struct Cyc_Absyn_Exp*Cyc_Absyn_New_exp(struct Cyc_Absyn_Exp*rgn_handle,struct Cyc_Absyn_Exp*e,struct Cyc_Absyn_Exp*qual_hdl,unsigned loc){struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct));_T4->tag=16;
# 1022
_T4->f1=rgn_handle;_T4->f2=e;_T4->f3=qual_hdl;_T0=(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1025
struct Cyc_Absyn_Exp*Cyc_Absyn_copy_exp(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;{struct Cyc_Absyn_Exp*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Exp));_T1=e;
# 1028
*_T2=*_T1;_T0=(struct Cyc_Absyn_Exp*)_T2;}return _T0;}
# 1031
struct Cyc_Absyn_Exp*Cyc_Absyn_const_exp(union Cyc_Absyn_Cnst c,unsigned loc){struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct));_T4->tag=0;
# 1034
_T4->f1=c;_T0=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1037
struct Cyc_Absyn_Exp*Cyc_Absyn_null_exp(unsigned loc){struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T0;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Exp*_T4;
# 1040
static struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct null_const={0,{.Null_c={1,0}}};_T0=& null_const;_T1=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T0;_T2=(void*)_T1;_T3=loc;_T4=
Cyc_Absyn_new_exp(_T2,_T3);return _T4;}
# 1045
struct Cyc_Absyn_Exp*Cyc_Absyn_int_exp(enum Cyc_Absyn_Sign s,int i,unsigned seg){union Cyc_Absyn_Cnst _T0;unsigned _T1;struct Cyc_Absyn_Exp*_T2;_T0=
# 1048
Cyc_Absyn_Int_c(s,i);_T1=seg;_T2=Cyc_Absyn_const_exp(_T0,_T1);return _T2;}
# 1051
struct Cyc_Absyn_Exp*Cyc_Absyn_signed_int_exp(int i,unsigned loc){struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T0;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T5;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T6;void*_T7;unsigned _T8;struct Cyc_Absyn_Exp*_T9;struct Cyc_Absyn_Exp*_TA;
# 1054
static struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct szero={0,{.Int_c={5,{.f0=0U,.f1=0}}}};
static struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct sone={0,{.Int_c={5,{.f0=0U,.f1=1}}}};
# 1057
if(i!=0)goto _TL86;_T0=& szero;_T1=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T0;_T2=(void*)_T1;_T3=loc;_T4=
Cyc_Absyn_new_exp(_T2,_T3);return _T4;_TL86:
 if(i!=1)goto _TL88;_T5=& sone;_T6=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T5;_T7=(void*)_T6;_T8=loc;_T9=
Cyc_Absyn_new_exp(_T7,_T8);return _T9;_TL88: _TA=
# 1062
Cyc_Absyn_int_exp(0U,i,loc);return _TA;}
# 1065
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned i,unsigned loc){struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T0;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T5;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T6;void*_T7;unsigned _T8;struct Cyc_Absyn_Exp*_T9;unsigned _TA;int _TB;unsigned _TC;struct Cyc_Absyn_Exp*_TD;
# 1068
static struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct uzero={0,{.Int_c={5,{.f0=1U,.f1=0}}}};
static struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct uone={0,{.Int_c={5,{.f0=1U,.f1=1}}}};
# 1071
if(i!=0U)goto _TL8A;_T0=& uzero;_T1=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T0;_T2=(void*)_T1;_T3=loc;_T4=
Cyc_Absyn_new_exp(_T2,_T3);return _T4;_TL8A:
 if(i!=1U)goto _TL8C;_T5=& uone;_T6=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T5;_T7=(void*)_T6;_T8=loc;_T9=
Cyc_Absyn_new_exp(_T7,_T8);return _T9;_TL8C: _TA=i;_TB=(int)_TA;_TC=loc;_TD=
# 1076
Cyc_Absyn_int_exp(1U,_TB,_TC);return _TD;}
# 1080
struct Cyc_Absyn_Exp*Cyc_Absyn_bool_exp(int b,unsigned loc){int _T0;int _T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;_T1=b;
# 1083
if(!_T1)goto _TL8E;_T0=1;goto _TL8F;_TL8E: _T0=0;_TL8F: _T2=loc;_T3=Cyc_Absyn_signed_int_exp(_T0,_T2);return _T3;}
# 1085
struct Cyc_Absyn_Exp*Cyc_Absyn_true_exp(unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_bool_exp(1,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_false_exp(unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_bool_exp(0,loc);return _T0;}
# 1088
struct Cyc_Absyn_Exp*Cyc_Absyn_char_exp(char c,unsigned loc){union Cyc_Absyn_Cnst _T0;unsigned _T1;struct Cyc_Absyn_Exp*_T2;_T0=
# 1091
Cyc_Absyn_Char_c(2U,c);_T1=loc;_T2=Cyc_Absyn_const_exp(_T0,_T1);return _T2;}
# 1094
struct Cyc_Absyn_Exp*Cyc_Absyn_float_exp(struct _fat_ptr f,int i,unsigned loc){union Cyc_Absyn_Cnst _T0;unsigned _T1;struct Cyc_Absyn_Exp*_T2;_T0=
# 1097
Cyc_Absyn_Float_c(f,i);_T1=loc;_T2=Cyc_Absyn_const_exp(_T0,_T1);return _T2;}
# 1100
static struct Cyc_Absyn_Exp*Cyc_Absyn_str2exp(union Cyc_Absyn_Cnst(*f)(struct _fat_ptr),struct _fat_ptr s,unsigned loc){union Cyc_Absyn_Cnst _T0;unsigned _T1;struct Cyc_Absyn_Exp*_T2;_T0=
# 1106
f(s);_T1=loc;_T2=Cyc_Absyn_const_exp(_T0,_T1);return _T2;}
# 1109
struct Cyc_Absyn_Exp*Cyc_Absyn_wchar_exp(struct _fat_ptr s,unsigned loc){struct _fat_ptr _T0;unsigned _T1;struct Cyc_Absyn_Exp*_T2;_T0=s;_T1=loc;_T2=Cyc_Absyn_str2exp(Cyc_Absyn_Wchar_c,_T0,_T1);return _T2;}
struct Cyc_Absyn_Exp*Cyc_Absyn_string_exp(struct _fat_ptr s,unsigned loc){struct _fat_ptr _T0;unsigned _T1;struct Cyc_Absyn_Exp*_T2;_T0=s;_T1=loc;_T2=Cyc_Absyn_str2exp(Cyc_Absyn_String_c,_T0,_T1);return _T2;}
struct Cyc_Absyn_Exp*Cyc_Absyn_wstring_exp(struct _fat_ptr s,unsigned loc){struct _fat_ptr _T0;unsigned _T1;struct Cyc_Absyn_Exp*_T2;_T0=s;_T1=loc;_T2=Cyc_Absyn_str2exp(Cyc_Absyn_Wstring_c,_T0,_T1);return _T2;}
# 1113
struct Cyc_Absyn_Exp*Cyc_Absyn_var_exp(struct _tuple0*q,unsigned loc){struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T0;struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Exp*_T4;{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T5=_cycalloc(sizeof(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct));_T5->tag=1;{struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*_T6=_cycalloc(sizeof(struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct));_T6->tag=0;
# 1116
_T6->f1=q;_T1=(struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)_T6;}_T5->f1=(void*)_T1;_T0=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T5;}_T2=(void*)_T0;_T3=loc;_T4=Cyc_Absyn_new_exp(_T2,_T3);return _T4;}
# 1119
struct Cyc_Absyn_Exp*Cyc_Absyn_varb_exp(void*b,unsigned loc){struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct));_T4->tag=1;
# 1122
_T4->f1=b;_T0=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1126
struct Cyc_Absyn_Exp*Cyc_Absyn_unknownid_exp(struct _tuple0*q,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=
# 1129
Cyc_Absyn_var_exp(q,loc);return _T0;}
# 1132
struct Cyc_Absyn_Exp*Cyc_Absyn_pragma_exp(struct _fat_ptr s,unsigned loc){struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct));_T4->tag=2;
# 1135
_T4->f1=s;_T0=(struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1138
struct Cyc_Absyn_Exp*Cyc_Absyn_primop_exp(enum Cyc_Absyn_Primop p,struct Cyc_List_List*es,unsigned loc){struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct));_T4->tag=3;
# 1141
_T4->f1=p;_T4->f2=es;_T0=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1144
struct Cyc_Absyn_Exp*Cyc_Absyn_prim1_exp(enum Cyc_Absyn_Primop p,struct Cyc_Absyn_Exp*e,unsigned loc){enum Cyc_Absyn_Primop _T0;struct Cyc_List_List*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;_T0=p;{struct Cyc_List_List*_T4=_cycalloc(sizeof(struct Cyc_List_List));
# 1147
_T4->hd=e;_T4->tl=0;_T1=(struct Cyc_List_List*)_T4;}_T2=loc;_T3=Cyc_Absyn_primop_exp(_T0,_T1,_T2);return _T3;}
# 1150
struct Cyc_Absyn_Exp*Cyc_Absyn_prim2_exp(enum Cyc_Absyn_Primop p,struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){enum Cyc_Absyn_Primop _T0;struct Cyc_List_List*_T1;struct Cyc_List_List*_T2;unsigned _T3;struct Cyc_Absyn_Exp*_T4;_T0=p;{struct Cyc_List_List*_T5=_cycalloc(sizeof(struct Cyc_List_List));
# 1153
_T5->hd=e1;{struct Cyc_List_List*_T6=_cycalloc(sizeof(struct Cyc_List_List));_T6->hd=e2;_T6->tl=0;_T2=(struct Cyc_List_List*)_T6;}_T5->tl=_T2;_T1=(struct Cyc_List_List*)_T5;}_T3=loc;_T4=Cyc_Absyn_primop_exp(_T0,_T1,_T3);return _T4;}
# 1156
struct Cyc_Absyn_Exp*Cyc_Absyn_tagof_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=
# 1159
Cyc_Absyn_prim1_exp(19U,e,loc);return _T0;}
# 1162
struct Cyc_Absyn_Exp*Cyc_Absyn_swap_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct));_T4->tag=34;
# 1165
_T4->f1=e1;_T4->f2=e2;_T0=(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1175 "absyn.cyc"
struct Cyc_Absyn_Exp*Cyc_Absyn_add_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(0U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_times_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(1U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_divide_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(3U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_udivide_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(20U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_eq_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(5U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_neq_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(6U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_gt_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(7U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_lt_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(8U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_gte_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(9U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_lte_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(10U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_ugt_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(22U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_ult_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(23U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_ugte_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(24U,e1,e2,loc);return _T0;}
struct Cyc_Absyn_Exp*Cyc_Absyn_ulte_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=Cyc_Absyn_prim2_exp(25U,e1,e2,loc);return _T0;}
# 1192
struct Cyc_Absyn_Exp*Cyc_Absyn_assignop_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Core_Opt*popt,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct));_T4->tag=4;
# 1195
_T4->f1=e1;_T4->f2=popt;_T4->f3=e2;_T0=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1198
struct Cyc_Absyn_Exp*Cyc_Absyn_assign_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;_T0=
# 1201
Cyc_Absyn_assignop_exp(e1,0,e2,loc);return _T0;}
# 1204
struct Cyc_Absyn_Exp*Cyc_Absyn_increment_exp(struct Cyc_Absyn_Exp*e,enum Cyc_Absyn_Incrementor i,unsigned loc){struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct));_T4->tag=5;
# 1207
_T4->f1=e;_T4->f2=i;_T0=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1210
struct Cyc_Absyn_Exp*Cyc_Absyn_conditional_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,struct Cyc_Absyn_Exp*e3,unsigned loc){struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct));_T4->tag=6;
# 1213
_T4->f1=e1;_T4->f2=e2;_T4->f3=e3;_T0=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1216
struct Cyc_Absyn_Exp*Cyc_Absyn_and_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct));_T4->tag=7;
# 1219
_T4->f1=e1;_T4->f2=e2;_T0=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1222
struct Cyc_Absyn_Exp*Cyc_Absyn_or_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct));_T4->tag=8;
# 1225
_T4->f1=e1;_T4->f2=e2;_T0=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1228
struct Cyc_Absyn_Exp*Cyc_Absyn_seq_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct));_T4->tag=9;
# 1231
_T4->f1=e1;_T4->f2=e2;_T0=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1234
struct Cyc_Absyn_Exp*Cyc_Absyn_unknowncall_exp(struct Cyc_Absyn_Exp*e,struct Cyc_List_List*es,unsigned loc){struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct));_T4->tag=10;
# 1237
_T4->f1=e;_T4->f2=es;_T4->f3=0;_T4->f4=0;_T0=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1240
struct Cyc_Absyn_Exp*Cyc_Absyn_fncall_exp(struct Cyc_Absyn_Exp*e,struct Cyc_List_List*es,unsigned loc){struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct));_T4->tag=10;
# 1243
_T4->f1=e;_T4->f2=es;_T4->f3=0;_T4->f4=1;_T0=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1246
struct Cyc_Absyn_Exp*Cyc_Absyn_noinstantiate_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct));_T4->tag=12;
# 1249
_T4->f1=e;_T0=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1252
struct Cyc_Absyn_Exp*Cyc_Absyn_instantiate_exp(struct Cyc_Absyn_Exp*e,struct Cyc_List_List*ts,unsigned loc){struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct));_T4->tag=13;
# 1255
_T4->f1=e;_T4->f2=ts;_T0=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1258
struct Cyc_Absyn_Exp*Cyc_Absyn_cast_exp(void*t,struct Cyc_Absyn_Exp*e,int user_cast,enum Cyc_Absyn_Coercion c,unsigned loc){struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct));_T4->tag=14;
# 1261
_T4->f1=t;_T4->f2=e;_T4->f3=user_cast;_T4->f4=c;_T0=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1264
struct Cyc_Absyn_Exp*Cyc_Absyn_throw_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct));_T4->tag=11;
# 1267
_T4->f1=e;_T4->f2=0;_T0=(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1270
struct Cyc_Absyn_Exp*Cyc_Absyn_rethrow_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct));_T4->tag=11;
# 1273
_T4->f1=e;_T4->f2=1;_T0=(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1276
struct Cyc_Absyn_Exp*Cyc_Absyn_address_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct));_T4->tag=15;
# 1279
_T4->f1=e;_T0=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1282
struct Cyc_Absyn_Exp*Cyc_Absyn_sizeoftype_exp(void*t,unsigned loc){struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct));_T4->tag=17;
# 1285
_T4->f1=t;_T0=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1288
struct Cyc_Absyn_Exp*Cyc_Absyn_sizeofexp_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct));_T4->tag=18;
# 1291
_T4->f1=e;_T0=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1294
struct Cyc_Absyn_Exp*Cyc_Absyn_offsetof_exp(void*t,struct Cyc_List_List*ofs,unsigned loc){struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct));_T4->tag=19;
# 1297
_T4->f1=t;_T4->f2=ofs;_T0=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1300
struct Cyc_Absyn_Exp*Cyc_Absyn_deref_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct));_T4->tag=20;
# 1303
_T4->f1=e;_T0=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1306
struct Cyc_Absyn_Exp*Cyc_Absyn_aggrmember_exp(struct Cyc_Absyn_Exp*e,struct _fat_ptr*n,unsigned loc){struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct));_T4->tag=21;
# 1309
_T4->f1=e;_T4->f2=n;_T4->f3=0;_T4->f4=0;_T0=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1312
struct Cyc_Absyn_Exp*Cyc_Absyn_aggrarrow_exp(struct Cyc_Absyn_Exp*e,struct _fat_ptr*n,unsigned loc){struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct));_T4->tag=22;
# 1315
_T4->f1=e;_T4->f2=n;_T4->f3=0;_T4->f4=0;_T0=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1318
struct Cyc_Absyn_Exp*Cyc_Absyn_subscript_exp(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct));_T4->tag=23;
# 1321
_T4->f1=e1;_T4->f2=e2;_T0=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1324
struct Cyc_Absyn_FieldName_Absyn_Designator_struct*Cyc_Absyn_tuple_field_designator(int i){struct Cyc_Xarray_Xarray*_T0;int _T1;int _T2;struct _fat_ptr _T3;struct Cyc_Int_pa_PrintArg_struct _T4;int _T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct _fat_ptr*_T8;int(*_T9)(struct Cyc_Xarray_Xarray*,struct Cyc_Absyn_FieldName_Absyn_Designator_struct*);int(*_TA)(struct Cyc_Xarray_Xarray*,void*);struct Cyc_Xarray_Xarray*_TB;struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_TC;struct Cyc_Absyn_FieldName_Absyn_Designator_struct*(*_TD)(struct Cyc_Xarray_Xarray*,int);void*(*_TE)(struct Cyc_Xarray_Xarray*,int);struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_TF;
# 1327
static struct Cyc_Xarray_Xarray*names=0;
# 1329
if(names!=0)goto _TL90;
names=Cyc_Xarray_create_empty();_T0=names;goto _TL91;_TL90: _T0=names;_TL91: {
# 1329
struct Cyc_Xarray_Xarray*x=_T0;
# 1334
_TL92: _T1=i;_T2=Cyc_Xarray_length(x);if(_T1 >= _T2)goto _TL93;else{goto _TL94;}
# 1336
_TL93:{struct Cyc_Int_pa_PrintArg_struct _T10;_T10.tag=1;_T5=i;_T10.f1=(unsigned long)_T5;_T4=_T10;}{struct Cyc_Int_pa_PrintArg_struct _T10=_T4;void*_T11[1];_T11[0]=& _T10;_T6=_tag_fat("f%d",sizeof(char),4U);_T7=_tag_fat(_T11,sizeof(void*),1);_T3=Cyc_aprintf(_T6,_T7);}{struct _fat_ptr s=_T3;
struct _fat_ptr*n;n=_cycalloc(sizeof(struct _fat_ptr));_T8=n;*_T8=s;_TA=Cyc_Xarray_add_ind;{
int(*_T10)(struct Cyc_Xarray_Xarray*,struct Cyc_Absyn_FieldName_Absyn_Designator_struct*)=(int(*)(struct Cyc_Xarray_Xarray*,struct Cyc_Absyn_FieldName_Absyn_Designator_struct*))_TA;_T9=_T10;}_TB=x;{struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_T10=_cycalloc(sizeof(struct Cyc_Absyn_FieldName_Absyn_Designator_struct));_T10->tag=1;_T10->f1=n;_TC=(struct Cyc_Absyn_FieldName_Absyn_Designator_struct*)_T10;}_T9(_TB,_TC);}goto _TL92;_TL94: _TE=Cyc_Xarray_get;{
# 1341
struct Cyc_Absyn_FieldName_Absyn_Designator_struct*(*_T10)(struct Cyc_Xarray_Xarray*,int)=(struct Cyc_Absyn_FieldName_Absyn_Designator_struct*(*)(struct Cyc_Xarray_Xarray*,int))_TE;_TD=_T10;}_TF=_TD(x,i);return _TF;}}struct _tuple16{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 1344
struct Cyc_Absyn_Exp*Cyc_Absyn_tuple_exp(struct Cyc_List_List*es,unsigned loc){struct _tuple16*_T0;struct Cyc_List_List*_T1;unsigned _T2;int _T3;struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_T4;struct _tuple16*_T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_TA;void*_TB;unsigned _TC;struct Cyc_Absyn_Exp*_TD;
# 1347
struct Cyc_List_List*dles=0;{
# 1349
unsigned i=0U;_TL98: if(es!=0)goto _TL96;else{goto _TL97;}
# 1351
_TL96:{struct _tuple16*dle;dle=_cycalloc(sizeof(struct _tuple16));_T0=dle;{struct Cyc_List_List*_TE=_cycalloc(sizeof(struct Cyc_List_List));_T2=i;_T3=(int)_T2;_T4=
Cyc_Absyn_tuple_field_designator(_T3);_TE->hd=(void*)_T4;
_TE->tl=0;_T1=(struct Cyc_List_List*)_TE;}
# 1351
_T0->f0=_T1;_T5=dle;_T6=es;_T7=_T6->hd;
# 1354
_T5->f1=(struct Cyc_Absyn_Exp*)_T7;{struct Cyc_List_List*_TE=_cycalloc(sizeof(struct Cyc_List_List));
_TE->hd=dle;_TE->tl=dles;_T8=(struct Cyc_List_List*)_TE;}dles=_T8;}_T9=es;
# 1349
es=_T9->tl;i=i + 1;goto _TL98;_TL97:;}
# 1358
dles=Cyc_List_imp_rev(dles);{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_TE=_cycalloc(sizeof(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct));_TE->tag=29;
_TE->f1=0;_TE->f2=1;_TE->f3=dles;_TA=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_TE;}_TB=(void*)_TA;_TC=loc;_TD=Cyc_Absyn_new_exp(_TB,_TC);return _TD;}struct _tuple17{struct Cyc_Absyn_Tqual f0;void*f1;};
# 1362
void*Cyc_Absyn_tuple_type(struct Cyc_List_List*tqts){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Aggrfield*_T2;struct Cyc_Absyn_Aggrfield*_T3;struct Cyc_Absyn_Aggrfield*_T4;struct Cyc_Absyn_Aggrfield*_T5;struct Cyc_Absyn_Aggrfield*_T6;struct Cyc_Absyn_Aggrfield*_T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_TA;void*_TB;
# 1365
struct Cyc_List_List*fs=0;{
# 1367
int i=0;_TL9C: if(tqts!=0)goto _TL9A;else{goto _TL9B;}
# 1369
_TL9A: _T0=tqts;_T1=_T0->hd;{struct _tuple17*_TC=(struct _tuple17*)_T1;void*_TD;struct Cyc_Absyn_Tqual _TE;{struct _tuple17 _TF=*_TC;_TE=_TF.f0;_TD=_TF.f1;}{struct Cyc_Absyn_Tqual tq=_TE;void*t=_TD;
struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_TF=Cyc_Absyn_tuple_field_designator(i);struct _fat_ptr*_T10;{struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_T11=(struct Cyc_Absyn_FieldName_Absyn_Designator_struct*)_TF;_T10=_T11->f1;}{struct _fat_ptr*n=_T10;
struct Cyc_Absyn_Aggrfield*af;af=_cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));_T2=af;_T2->name=n;_T3=af;_T3->tq=tq;_T4=af;_T4->type=t;_T5=af;_T5->width=0;_T6=af;_T6->attributes=0;_T7=af;_T7->requires_clause=0;{struct Cyc_List_List*_T11=_cycalloc(sizeof(struct Cyc_List_List));
_T11->hd=af;_T11->tl=fs;_T8=(struct Cyc_List_List*)_T11;}fs=_T8;}}}_T9=tqts;
# 1367
tqts=_T9->tl;i=i + 1;goto _TL9C;_TL9B:;}{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_TC=_cycalloc(sizeof(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct));_TC->tag=7;
# 1375
_TC->f1=0U;_TC->f2=1;_TC->f3=Cyc_List_imp_rev(fs);_TA=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_TC;}_TB=(void*)_TA;return _TB;}
# 1378
struct Cyc_Absyn_Exp*Cyc_Absyn_stmt_exp(struct Cyc_Absyn_Stmt*s,unsigned loc){struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct));_T4->tag=36;
# 1381
_T4->f1=s;_T0=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1384
struct Cyc_Absyn_Exp*Cyc_Absyn_valueof_exp(void*t,unsigned loc){struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct));_T4->tag=38;
# 1387
_T4->f1=t;_T0=(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1391
struct Cyc_Absyn_Exp*Cyc_Absyn_asm_exp(int volatile_kw,struct _fat_ptr tmpl,struct Cyc_List_List*outs,struct Cyc_List_List*ins,struct Cyc_List_List*clobs,unsigned loc){struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct));_T4->tag=39;
# 1400
_T4->f1=volatile_kw;_T4->f2=tmpl;_T4->f3=outs;_T4->f4=ins;_T4->f5=clobs;_T0=(struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1403
struct Cyc_Absyn_Exp*Cyc_Absyn_extension_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct));_T4->tag=40;
# 1406
_T4->f1=e;_T0=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1409
struct Cyc_Absyn_Exp*Cyc_Absyn_assert_exp(struct Cyc_Absyn_Exp*e,int static_only,unsigned loc){struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct));_T4->tag=41;
# 1412
_T4->f1=e;_T4->f2=static_only;_T4->f3=!static_only;_T0=(struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1415
struct Cyc_Absyn_Exp*Cyc_Absyn_assert_false_exp(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct));_T4->tag=42;
# 1418
_T4->f1=e;_T0=(struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1422
struct Cyc_Absyn_Exp*Cyc_Absyn_array_exp(struct Cyc_List_List*es,unsigned loc){struct Cyc_List_List*_T0;struct _tuple16*_T1;struct Cyc_List_List*_T2;void*_T3;struct Cyc_List_List*_T4;struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T5;void*_T6;unsigned _T7;struct Cyc_Absyn_Exp*_T8;
# 1425
struct Cyc_List_List*dles=0;
_TLA0: if(es!=0)goto _TL9E;else{goto _TL9F;}
_TL9E:{struct Cyc_List_List*_T9=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple16*_TA=_cycalloc(sizeof(struct _tuple16));_TA->f0=0;_T2=es;_T3=_T2->hd;_TA->f1=(struct Cyc_Absyn_Exp*)_T3;_T1=(struct _tuple16*)_TA;}_T9->hd=_T1;_T9->tl=dles;_T0=(struct Cyc_List_List*)_T9;}dles=_T0;_T4=es;
# 1426
es=_T4->tl;goto _TLA0;_TL9F:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T9=_cycalloc(sizeof(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct));_T9->tag=25;
# 1429
_T9->f1=Cyc_List_imp_rev(dles);_T5=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T9;}_T6=(void*)_T5;_T7=loc;_T8=Cyc_Absyn_new_exp(_T6,_T7);return _T8;}
# 1432
struct Cyc_Absyn_Exp*Cyc_Absyn_unresolvedmem_exp(struct Cyc_Core_Opt*n,struct Cyc_List_List*dles,unsigned loc){struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct));_T4->tag=35;
# 1438
_T4->f1=n;_T4->f2=dles;_T0=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_exp(_T1,_T2);return _T3;}
# 1442
struct Cyc_Absyn_Exp*Cyc_Absyn_set_type(struct Cyc_Absyn_Exp*e,void*t){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;_T0=e;
# 1445
_T0->topt=t;_T1=e;
return _T1;}
# 1453
struct Cyc_Absyn_Stmt*Cyc_Absyn_new_stmt(void*s,unsigned loc){struct Cyc_Absyn_Stmt*_T0;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T1;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T2;{struct Cyc_Absyn_Stmt*_T3=_cycalloc(sizeof(struct Cyc_Absyn_Stmt));
# 1457
_T3->r=s;
_T3->loc=loc;_T1=& Cyc_Absyn_EmptyAnnot_val;_T2=(struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)_T1;
_T3->annot=(void*)_T2;_T0=(struct Cyc_Absyn_Stmt*)_T3;}
# 1456
return _T0;}
# 1463
struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct Cyc_Absyn_Skip_s_val={0};
static struct Cyc_Absyn_Break_s_Absyn_Raw_stmt_struct Cyc_Absyn_Break_s_val={6};
static struct Cyc_Absyn_Continue_s_Absyn_Raw_stmt_struct Cyc_Absyn_Continue_s_val={7};
# 1467
struct Cyc_Absyn_Stmt*Cyc_Absyn_skip_stmt(unsigned loc){struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct*_T0;struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Stmt*_T4;_T0=& Cyc_Absyn_Skip_s_val;_T1=(struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct*)_T0;_T2=(void*)_T1;_T3=loc;_T4=Cyc_Absyn_new_stmt(_T2,_T3);return _T4;}
struct Cyc_Absyn_Stmt*Cyc_Absyn_break_stmt(unsigned loc){struct Cyc_Absyn_Break_s_Absyn_Raw_stmt_struct*_T0;struct Cyc_Absyn_Break_s_Absyn_Raw_stmt_struct*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Stmt*_T4;_T0=& Cyc_Absyn_Break_s_val;_T1=(struct Cyc_Absyn_Break_s_Absyn_Raw_stmt_struct*)_T0;_T2=(void*)_T1;_T3=loc;_T4=Cyc_Absyn_new_stmt(_T2,_T3);return _T4;}
struct Cyc_Absyn_Stmt*Cyc_Absyn_continue_stmt(unsigned loc){struct Cyc_Absyn_Continue_s_Absyn_Raw_stmt_struct*_T0;struct Cyc_Absyn_Continue_s_Absyn_Raw_stmt_struct*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Stmt*_T4;_T0=& Cyc_Absyn_Continue_s_val;_T1=(struct Cyc_Absyn_Continue_s_Absyn_Raw_stmt_struct*)_T0;_T2=(void*)_T1;_T3=loc;_T4=Cyc_Absyn_new_stmt(_T2,_T3);return _T4;}
# 1471
struct Cyc_Absyn_Stmt*Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct));_T4->tag=1;
# 1474
_T4->f1=e;_T0=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1477
struct Cyc_Absyn_Stmt*Cyc_Absyn_return_stmt(struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct));_T4->tag=3;
# 1480
_T4->f1=e;_T0=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1483
struct Cyc_Absyn_Stmt*Cyc_Absyn_seq_stmts(struct Cyc_List_List*ss,unsigned loc){struct Cyc_Absyn_Stmt*_T0;struct Cyc_List_List*_T1;struct Cyc_List_List*_T2;struct Cyc_List_List*_T3;void*_T4;struct Cyc_Absyn_Stmt*_T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Stmt*_T8;struct Cyc_List_List*_T9;struct Cyc_List_List*_TA;unsigned _TB;struct Cyc_Absyn_Stmt*_TC;unsigned _TD;struct Cyc_Absyn_Stmt*_TE;
# 1486
if(ss!=0)goto _TLA1;_T0=
Cyc_Absyn_skip_stmt(loc);return _T0;_TLA1: _T1=ss;_T2=_T1->tl;
if(_T2!=0)goto _TLA3;_T3=ss;_T4=_T3->hd;_T5=(struct Cyc_Absyn_Stmt*)_T4;
return _T5;_TLA3: _T6=ss;_T7=_T6->hd;_T8=(struct Cyc_Absyn_Stmt*)_T7;_T9=ss;_TA=_T9->tl;_TB=loc;_TC=
Cyc_Absyn_seq_stmts(_TA,_TB);_TD=loc;_TE=Cyc_Absyn_seq_stmt(_T8,_TC,_TD);return _TE;}struct _tuple18{void*f0;void*f1;};
# 1493
struct Cyc_Absyn_Stmt*Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt*s1,struct Cyc_Absyn_Stmt*s2,unsigned loc){struct _tuple18 _T0;struct Cyc_Absyn_Stmt*_T1;struct Cyc_Absyn_Stmt*_T2;void*_T3;int*_T4;int _T5;struct Cyc_Absyn_Stmt*_T6;void*_T7;int*_T8;int _T9;struct Cyc_Absyn_Stmt*_TA;struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_TB;void*_TC;unsigned _TD;struct Cyc_Absyn_Stmt*_TE;{struct _tuple18 _TF;_T1=s1;
# 1496
_TF.f0=_T1->r;_T2=s2;_TF.f1=_T2->r;_T0=_TF;}{struct _tuple18 _TF=_T0;_T3=_TF.f0;_T4=(int*)_T3;_T5=*_T4;if(_T5!=0)goto _TLA5;_T6=s2;
# 1498
return _T6;_TLA5: _T7=_TF.f1;_T8=(int*)_T7;_T9=*_T8;if(_T9!=0)goto _TLA7;_TA=s1;
return _TA;_TLA7:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T10=_cycalloc(sizeof(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct));_T10->tag=2;
# 1501
_T10->f1=s1;_T10->f2=s2;_TB=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T10;}_TC=(void*)_TB;_TD=loc;_TE=Cyc_Absyn_new_stmt(_TC,_TD);return _TE;;}}
# 1505
struct Cyc_Absyn_Stmt*Cyc_Absyn_ifthenelse_stmt(struct Cyc_Absyn_Exp*e,struct Cyc_Absyn_Stmt*s1,struct Cyc_Absyn_Stmt*s2,unsigned loc){struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct));_T4->tag=4;
# 1508
_T4->f1=e;_T4->f2=s1;_T4->f3=s2;_T0=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1511
struct Cyc_Absyn_Stmt*Cyc_Absyn_while_stmt(struct Cyc_Absyn_Exp*e,struct Cyc_Absyn_Stmt*s,unsigned loc){struct Cyc_Absyn_Stmt*_T0;struct Cyc_Absyn_Stmt*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Stmt*_T4;unsigned _T5;struct Cyc_Absyn_Stmt*_T6;struct Cyc_Absyn_Stmt*_T7;unsigned _T8;struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_T9;struct Cyc_Absyn_Exp*_TA;unsigned _TB;void*_TC;unsigned _TD;struct Cyc_Absyn_Stmt*_TE;_T0=s;_T1=s;_T2=_T1->loc;_T3=
# 1520
Cyc_Absyn_uint_exp(1U,_T2);_T4=s;_T5=_T4->loc;_T6=Cyc_Absyn_exp_stmt(_T3,_T5);_T7=s;_T8=_T7->loc;s=Cyc_Absyn_seq_stmt(_T0,_T6,_T8);{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_TF=_cycalloc(sizeof(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct));_TF->tag=5;
_TF->f1.f0=e;_TA=e;_TB=_TA->loc;_TF->f1.f1=Cyc_Absyn_skip_stmt(_TB);_TF->f2=s;_T9=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_TF;}_TC=(void*)_T9;_TD=loc;_TE=Cyc_Absyn_new_stmt(_TC,_TD);return _TE;}
# 1524
struct Cyc_Absyn_Stmt*Cyc_Absyn_for_stmt(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,struct Cyc_Absyn_Exp*e3,struct Cyc_Absyn_Stmt*s,unsigned loc){struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T0;struct Cyc_Absyn_Exp*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;unsigned _T4;void*_T5;unsigned _T6;struct Cyc_Absyn_Stmt*_T7;{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T8=_cycalloc(sizeof(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct));_T8->tag=9;
# 1527
_T8->f1=e1;
_T8->f2.f0=e2;_T1=e3;_T2=_T1->loc;_T8->f2.f1=Cyc_Absyn_skip_stmt(_T2);
_T8->f3.f0=e3;_T3=e3;_T4=_T3->loc;_T8->f3.f1=Cyc_Absyn_skip_stmt(_T4);
_T8->f4=s;_T0=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_T8;}_T5=(void*)_T0;_T6=loc;_T7=
# 1527
Cyc_Absyn_new_stmt(_T5,_T6);return _T7;}
# 1534
struct Cyc_Absyn_Stmt*Cyc_Absyn_do_stmt(struct Cyc_Absyn_Stmt*s,struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Stmt*_T0;struct Cyc_Absyn_Stmt*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Stmt*_T4;unsigned _T5;struct Cyc_Absyn_Stmt*_T6;struct Cyc_Absyn_Stmt*_T7;unsigned _T8;struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_T9;struct Cyc_Absyn_Exp*_TA;unsigned _TB;void*_TC;unsigned _TD;struct Cyc_Absyn_Stmt*_TE;_T0=s;_T1=s;_T2=_T1->loc;_T3=
# 1543
Cyc_Absyn_uint_exp(1U,_T2);_T4=s;_T5=_T4->loc;_T6=Cyc_Absyn_exp_stmt(_T3,_T5);_T7=s;_T8=_T7->loc;s=Cyc_Absyn_seq_stmt(_T0,_T6,_T8);{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_TF=_cycalloc(sizeof(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct));_TF->tag=14;
_TF->f1=s;_TF->f2.f0=e;_TA=e;_TB=_TA->loc;_TF->f2.f1=Cyc_Absyn_skip_stmt(_TB);_T9=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_TF;}_TC=(void*)_T9;_TD=loc;_TE=Cyc_Absyn_new_stmt(_TC,_TD);return _TE;}
# 1547
struct Cyc_Absyn_Stmt*Cyc_Absyn_switch_stmt(struct Cyc_Absyn_Exp*e,struct Cyc_List_List*scs,unsigned loc){struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct));_T4->tag=10;
# 1550
_T4->f1=e;_T4->f2=scs;_T4->f3=0;_T0=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1553
struct Cyc_Absyn_Stmt*Cyc_Absyn_trycatch_stmt(struct Cyc_Absyn_Stmt*s,struct Cyc_List_List*scs,unsigned loc){struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct));_T4->tag=15;
# 1556
_T4->f1=s;_T4->f2=scs;_T4->f3=0;_T0=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1559
struct Cyc_Absyn_Stmt*Cyc_Absyn_fallthru_stmt(struct Cyc_List_List*el,unsigned loc){struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct));_T4->tag=11;
# 1562
_T4->f1=el;_T4->f2=0;_T0=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1565
struct Cyc_Absyn_Stmt*Cyc_Absyn_goto_stmt(struct _fat_ptr*lab,unsigned loc){struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct));_T4->tag=8;
# 1568
_T4->f1=lab;_T0=(struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1571
struct Cyc_Absyn_Stmt*Cyc_Absyn_label_stmt(struct _fat_ptr*v,struct Cyc_Absyn_Stmt*s,unsigned loc){struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct));_T4->tag=13;
# 1574
_T4->f1=v;_T4->f2=s;_T0=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1577
struct Cyc_Absyn_Stmt*Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl*d,struct Cyc_Absyn_Stmt*s,unsigned loc){struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct));_T4->tag=12;
# 1580
_T4->f1=d;_T4->f2=s;_T0=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_stmt(_T1,_T2);return _T3;}
# 1583
struct Cyc_Absyn_Stmt*Cyc_Absyn_declare_stmt(struct _tuple0*x,void*t,struct Cyc_Absyn_Exp*init,struct Cyc_Absyn_Stmt*s,unsigned loc){struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T3;void*_T4;unsigned _T5;struct Cyc_Absyn_Stmt*_T6;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T7=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T7->tag=0;
# 1586
_T7->f1=Cyc_Absyn_new_vardecl(0U,x,t,init,0);_T0=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T7;}_T1=(void*)_T0;_T2=loc;{struct Cyc_Absyn_Decl*d=Cyc_Absyn_new_decl(_T1,_T2);{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T7=_cycalloc(sizeof(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct));_T7->tag=12;
_T7->f1=d;_T7->f2=s;_T3=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T7;}_T4=(void*)_T3;_T5=loc;_T6=Cyc_Absyn_new_stmt(_T4,_T5);return _T6;}}
# 1590
struct Cyc_Absyn_Stmt*Cyc_Absyn_assign_stmt(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;unsigned _T1;struct Cyc_Absyn_Stmt*_T2;_T0=
# 1593
Cyc_Absyn_assign_exp(e1,e2,loc);_T1=loc;_T2=Cyc_Absyn_exp_stmt(_T0,_T1);return _T2;}
# 1600
struct Cyc_Absyn_Pat*Cyc_Absyn_new_pat(void*p,unsigned s){struct Cyc_Absyn_Pat*_T0;{struct Cyc_Absyn_Pat*_T1=_cycalloc(sizeof(struct Cyc_Absyn_Pat));
# 1603
_T1->r=p;_T1->topt=0;_T1->loc=s;_T0=(struct Cyc_Absyn_Pat*)_T1;}return _T0;}
# 1606
struct Cyc_Absyn_Pat*Cyc_Absyn_exp_pat(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;unsigned _T3;struct Cyc_Absyn_Pat*_T4;{struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*_T5=_cycalloc(sizeof(struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct));_T5->tag=16;
# 1609
_T5->f1=e;_T0=(struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*)_T5;}_T1=(void*)_T0;_T2=e;_T3=_T2->loc;_T4=Cyc_Absyn_new_pat(_T1,_T3);return _T4;}
# 1612
struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct Cyc_Absyn_Wild_p_val={0};
struct Cyc_Absyn_Null_p_Absyn_Raw_pat_struct Cyc_Absyn_Null_p_val={8};
# 1619
struct Cyc_Absyn_Decl*Cyc_Absyn_new_decl(void*r,unsigned loc){struct Cyc_Absyn_Decl*_T0;{struct Cyc_Absyn_Decl*_T1=_cycalloc(sizeof(struct Cyc_Absyn_Decl));
# 1622
_T1->r=r;_T1->loc=loc;_T0=(struct Cyc_Absyn_Decl*)_T1;}return _T0;}
# 1625
struct Cyc_Absyn_Decl*Cyc_Absyn_let_decl(struct Cyc_Absyn_Pat*p,struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Decl*_T3;{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct));_T4->tag=2;
# 1628
_T4->f1=p;_T4->f2=0;_T4->f3=e;_T4->f4=0;_T0=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_decl(_T1,_T2);return _T3;}
# 1631
struct Cyc_Absyn_Decl*Cyc_Absyn_letv_decl(struct Cyc_List_List*vds,unsigned loc){struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Decl*_T3;{struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct));_T4->tag=3;
# 1634
_T4->f1=vds;_T0=(struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_decl(_T1,_T2);return _T3;}
# 1637
struct Cyc_Absyn_Decl*Cyc_Absyn_region_decl(struct Cyc_Absyn_Tvar*tv,struct Cyc_Absyn_Vardecl*vd,struct Cyc_Absyn_Exp*open_exp,unsigned loc){struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T0;void*_T1;unsigned _T2;struct Cyc_Absyn_Decl*_T3;{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct));_T4->tag=4;
# 1644
_T4->f1=tv;_T4->f2=vd;_T4->f3=open_exp;_T0=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_T4;}_T1=(void*)_T0;_T2=loc;_T3=Cyc_Absyn_new_decl(_T1,_T2);return _T3;}
# 1647
struct Cyc_Absyn_Decl*Cyc_Absyn_alias_decl(struct Cyc_Absyn_Tvar*tv,struct Cyc_Absyn_Vardecl*vd,struct Cyc_Absyn_Exp*e,unsigned loc){struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T0;struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*_T1;void*_T2;unsigned _T3;void*_T4;unsigned _T5;struct Cyc_Absyn_Decl*_T6;{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T7=_cycalloc(sizeof(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct));_T7->tag=2;{struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*_T8=_cycalloc(sizeof(struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct));_T8->tag=2;
# 1658
_T8->f1=tv;_T8->f2=vd;_T1=(struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*)_T8;}_T2=(void*)_T1;_T3=loc;
# 1657
_T7->f1=Cyc_Absyn_new_pat(_T2,_T3);
# 1660
_T7->f2=0;_T7->f3=e;_T7->f4=0;_T0=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T7;}_T4=(void*)_T0;_T5=loc;_T6=
# 1655
Cyc_Absyn_new_decl(_T4,_T5);return _T6;}
# 1665
struct Cyc_Absyn_Vardecl*Cyc_Absyn_new_vardecl(unsigned varloc,struct _tuple0*x,void*t,struct Cyc_Absyn_Exp*init,struct Cyc_Absyn_Exp*rename){struct Cyc_Absyn_Vardecl*_T0;{struct Cyc_Absyn_Vardecl*_T1=_cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
# 1674
_T1->sc=2U;
_T1->name=x;
_T1->varloc=varloc;
_T1->tq=Cyc_Absyn_empty_tqual(0U);
_T1->type=t;
_T1->initializer=init;
_T1->rgn=0;
_T1->attributes=0;
_T1->escapes=0;
_T1->is_proto=0;
_T1->rename=rename;_T0=(struct Cyc_Absyn_Vardecl*)_T1;}
# 1673
return _T0;}
# 1688
struct Cyc_Absyn_Vardecl*Cyc_Absyn_static_vardecl(struct _tuple0*x,void*t,struct Cyc_Absyn_Exp*init){struct Cyc_Absyn_Vardecl*_T0;struct Cyc_Absyn_Vardecl*_T1;
# 1694
struct Cyc_Absyn_Vardecl*ans=Cyc_Absyn_new_vardecl(0U,x,t,init,0);_T0=ans;
_T0->sc=0U;_T1=ans;
return _T1;}
# 1699
struct Cyc_Absyn_AggrdeclImpl*Cyc_Absyn_aggrdecl_impl(struct Cyc_List_List*exists,struct Cyc_List_List*ec,struct Cyc_List_List*qb,struct Cyc_List_List*fs,int tagged){struct Cyc_Absyn_AggrdeclImpl*_T0;{struct Cyc_Absyn_AggrdeclImpl*_T1=_cycalloc(sizeof(struct Cyc_Absyn_AggrdeclImpl));
# 1711
_T1->exist_vars=exists;
_T1->qual_bnd=qb;
_T1->fields=fs;
_T1->tagged=tagged;
_T1->effconstr=ec;_T0=(struct Cyc_Absyn_AggrdeclImpl*)_T1;}
# 1710
return _T0;}
# 1719
struct Cyc_Absyn_Decl*Cyc_Absyn_aggr_decl(enum Cyc_Absyn_AggrKind k,enum Cyc_Absyn_Scope s,struct _tuple0*n,struct Cyc_List_List*ts,struct Cyc_Absyn_AggrdeclImpl*i,struct Cyc_List_List*atts,unsigned loc){struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T0;struct Cyc_Absyn_Aggrdecl*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Decl*_T4;{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T5=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T5->tag=5;{struct Cyc_Absyn_Aggrdecl*_T6=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
# 1732
_T6->kind=k;
_T6->sc=s;
_T6->name=n;
_T6->tvs=ts;
_T6->impl=i;
_T6->attributes=atts;
_T6->expected_mem_kind=0;_T1=(struct Cyc_Absyn_Aggrdecl*)_T6;}
# 1731
_T5->f1=_T1;_T0=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T5;}_T2=(void*)_T0;_T3=loc;_T4=
# 1729
Cyc_Absyn_new_decl(_T2,_T3);return _T4;}
# 1745
struct Cyc_Absyn_TypeDecl*Cyc_Absyn_aggr_tdecl(enum Cyc_Absyn_AggrKind k,enum Cyc_Absyn_Scope s,struct _tuple0*n,struct Cyc_List_List*ts,struct Cyc_Absyn_AggrdeclImpl*i,struct Cyc_List_List*atts,unsigned loc){struct Cyc_Absyn_TypeDecl*_T0;struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_T1;struct Cyc_Absyn_Aggrdecl*_T2;{struct Cyc_Absyn_TypeDecl*_T3=_cycalloc(sizeof(struct Cyc_Absyn_TypeDecl));{struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct));_T4->tag=0;{struct Cyc_Absyn_Aggrdecl*_T5=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
# 1758
_T5->kind=k;
_T5->sc=s;
_T5->name=n;
_T5->tvs=ts;
_T5->impl=i;
_T5->attributes=atts;
_T5->expected_mem_kind=0;_T2=(struct Cyc_Absyn_Aggrdecl*)_T5;}
# 1757
_T4->f1=_T2;_T1=(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*)_T4;}
# 1756
_T3->r=(void*)_T1;
# 1767
_T3->loc=loc;_T0=(struct Cyc_Absyn_TypeDecl*)_T3;}
# 1755
return _T0;}
# 1771
struct Cyc_Absyn_Decl*Cyc_Absyn_struct_decl(enum Cyc_Absyn_Scope s,struct _tuple0*n,struct Cyc_List_List*ts,struct Cyc_Absyn_AggrdeclImpl*i,struct Cyc_List_List*atts,unsigned loc){struct Cyc_Absyn_Decl*_T0;_T0=
# 1780
Cyc_Absyn_aggr_decl(0U,s,n,ts,i,atts,loc);return _T0;}
# 1783
struct Cyc_Absyn_Decl*Cyc_Absyn_union_decl(enum Cyc_Absyn_Scope s,struct _tuple0*n,struct Cyc_List_List*ts,struct Cyc_Absyn_AggrdeclImpl*i,struct Cyc_List_List*atts,unsigned loc){struct Cyc_Absyn_Decl*_T0;_T0=
# 1792
Cyc_Absyn_aggr_decl(1U,s,n,ts,i,atts,loc);return _T0;}
# 1795
struct Cyc_Absyn_Decl*Cyc_Absyn_datatype_decl(enum Cyc_Absyn_Scope s,struct _tuple0*n,struct Cyc_List_List*ts,struct Cyc_Core_Opt*fs,int is_extensible,unsigned loc){struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T0;struct Cyc_Absyn_Datatypedecl*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Decl*_T4;{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T5=_cycalloc(sizeof(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct));_T5->tag=6;{struct Cyc_Absyn_Datatypedecl*_T6=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
# 1807
_T6->sc=s;_T6->name=n;_T6->tvs=ts;_T6->fields=fs;_T6->is_extensible=is_extensible;_T1=(struct Cyc_Absyn_Datatypedecl*)_T6;}
# 1806
_T5->f1=_T1;_T0=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_T5;}_T2=(void*)_T0;_T3=loc;_T4=
# 1804
Cyc_Absyn_new_decl(_T2,_T3);return _T4;}
# 1814
struct Cyc_Absyn_TypeDecl*Cyc_Absyn_datatype_tdecl(enum Cyc_Absyn_Scope s,struct _tuple0*n,struct Cyc_List_List*ts,struct Cyc_Core_Opt*fs,int is_extensible,unsigned loc){struct Cyc_Absyn_TypeDecl*_T0;struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_T1;struct Cyc_Absyn_Datatypedecl*_T2;{struct Cyc_Absyn_TypeDecl*_T3=_cycalloc(sizeof(struct Cyc_Absyn_TypeDecl));{struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_T4=_cycalloc(sizeof(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct));_T4->tag=2;{struct Cyc_Absyn_Datatypedecl*_T5=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
# 1826
_T5->sc=s;_T5->name=n;_T5->tvs=ts;_T5->fields=fs;_T5->is_extensible=is_extensible;_T2=(struct Cyc_Absyn_Datatypedecl*)_T5;}
# 1825
_T4->f1=_T2;_T1=(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*)_T4;}
# 1824
_T3->r=(void*)_T1;
# 1829
_T3->loc=loc;_T0=(struct Cyc_Absyn_TypeDecl*)_T3;}
# 1823
return _T0;}
# 1840 "absyn.cyc"
void*Cyc_Absyn_function_type(struct Cyc_List_List*tvs,void*eff_type,struct Cyc_Absyn_Tqual ret_tqual,void*ret_type,struct Cyc_List_List*args,int c_varargs,struct Cyc_Absyn_VarargInfo*cyc_varargs,struct Cyc_List_List*effc,struct Cyc_List_List*qb,struct Cyc_List_List*atts,struct Cyc_Absyn_Exp*chks,struct Cyc_Absyn_Exp*req,struct Cyc_Absyn_Exp*ens,struct Cyc_Absyn_Exp*thrws){struct Cyc_List_List*_T0;void*_T1;struct _tuple8*_T2;struct Cyc_List_List*_T3;void*_T4;struct _tuple8*_T5;struct _tuple8 _T6;void*_T7;struct Cyc_List_List*_T8;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T9;void*_TA;{
# 1857
struct Cyc_List_List*args2=args;_TLAC: if(args2!=0)goto _TLAA;else{goto _TLAB;}
_TLAA: _T0=args2;_T1=_T0->hd;_T2=(struct _tuple8*)_T1;_T3=args2;_T4=_T3->hd;_T5=(struct _tuple8*)_T4;_T6=*_T5;_T7=_T6.f2;(*_T2).f2=Cyc_Absyn_pointer_expand(_T7,1);_T8=args2;
# 1857
args2=_T8->tl;goto _TLAC;_TLAB:;}{struct Cyc_Absyn_FnType_Absyn_Type_struct*_TB=_cycalloc(sizeof(struct Cyc_Absyn_FnType_Absyn_Type_struct));_TB->tag=6;
# 1860
_TB->f1.tvars=tvs;
_TB->f1.ret_tqual=ret_tqual;
_TB->f1.ret_type=Cyc_Absyn_pointer_expand(ret_type,0);
_TB->f1.effect=eff_type;
_TB->f1.args=args;
_TB->f1.c_varargs=c_varargs;
_TB->f1.cyc_varargs=cyc_varargs;
# 1870
_TB->f1.qual_bnd=qb;
_TB->f1.attributes=atts;
_TB->f1.checks_clause=chks;
_TB->f1.checks_assn=0;
_TB->f1.requires_clause=req;
_TB->f1.requires_assn=0;
_TB->f1.ensures_clause=ens;
_TB->f1.ensures_assn=0;
_TB->f1.throws_clause=thrws;
_TB->f1.throws_assn=0;
_TB->f1.arg_vardecls=0;
_TB->f1.return_value=0;
_TB->f1.effconstr=effc;_T9=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_TB;}_TA=(void*)_T9;
# 1859
return _TA;}
# 1889
void*Cyc_Absyn_pointer_expand(void*t,int fresh_evar){int*_T0;int _T1;void*_T2;int _T3;struct Cyc_Core_Opt*_T4;struct Cyc_Absyn_Kind*_T5;void*_T6;void*_T7;void*_T8;struct Cyc_Absyn_Tqual _T9;void*_TA;void*_TB;void*_TC;void*_TD;
# 1892
void*_TE=Cyc_Absyn_compress(t);_T0=(int*)_TE;_T1=*_T0;if(_T1!=6)goto _TLAD;_T3=fresh_evar;
# 1895
if(!_T3)goto _TLAF;{struct Cyc_Core_Opt*_TF=_cycalloc(sizeof(struct Cyc_Core_Opt));_T5=& Cyc_Kinds_ek;
_TF->v=(struct Cyc_Absyn_Kind*)_T5;_T4=(struct Cyc_Core_Opt*)_TF;}_T2=Cyc_Absyn_new_evar(_T4,0);goto _TLB0;_TLAF: _T2=Cyc_Absyn_heap_rgn_type;_TLB0:{
# 1895
void*rtyp=_T2;_T6=t;_T7=rtyp;_T8=Cyc_Absyn_al_qual_type;_T9=
# 1898
Cyc_Absyn_empty_tqual(0U);_TA=Cyc_Absyn_false_type;_TB=Cyc_Absyn_false_type;_TC=Cyc_Absyn_at_type(_T6,_T7,_T8,_T9,_TA,_TB);return _TC;}_TLAD: _TD=t;
# 1902
return _TD;;}
# 1916 "absyn.cyc"
int Cyc_Absyn_is_lvalue(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T3;void*_T4;int*_T5;unsigned _T6;void*_T7;void*_T8;struct Cyc_Absyn_Vardecl*_T9;void*_TA;int*_TB;int _TC;int _TD;int _TE;int _TF;_T0=e;{
# 1919
void*_T10=_T0->r;struct Cyc_Absyn_Exp*_T11;struct Cyc_Absyn_Vardecl*_T12;_T1=(int*)_T10;_T2=*_T1;switch(_T2){case 1: _T3=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T10;_T4=_T3->f1;_T5=(int*)_T4;_T6=*_T5;switch(_T6){case 2:
# 1921
 return 0;case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T10;_T7=_T13->f1;{struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T14=(struct Cyc_Absyn_Global_b_Absyn_Binding_struct*)_T7;_T12=_T14->f1;}}{struct Cyc_Absyn_Vardecl*vd=_T12;_T12=vd;goto _LL6;}case 4:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T10;_T8=_T13->f1;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T14=(struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T8;_T12=_T14->f1;}}_LL6: {struct Cyc_Absyn_Vardecl*vd=_T12;_T9=vd;_TA=_T9->type;{
# 1925
void*_T13=Cyc_Absyn_compress(_TA);_TB=(int*)_T13;_TC=*_TB;if(_TC!=5)goto _TLB3;
# 1927
return 0;_TLB3:
 return 1;;}}default: goto _LLA;};case 22: _LLA: goto _LLC;case 20: _LLC: goto _LLE;case 23: _LLE:
# 1934
 return 1;case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T10;_T11=_T13->f1;}{struct Cyc_Absyn_Exp*e1=_T11;_TD=
# 1936
Cyc_Absyn_is_lvalue(e1);return _TD;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T10;_T11=_T13->f1;}{struct Cyc_Absyn_Exp*e1=_T11;_TE=
Cyc_Absyn_is_lvalue(e1);return _TE;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T10;_T11=_T13->f1;}{struct Cyc_Absyn_Exp*e1=_T11;_TF=
Cyc_Absyn_is_lvalue(e1);return _TF;}default:
# 1940
 return 0;};}}
# 1944
struct Cyc_Absyn_Aggrfield*Cyc_Absyn_lookup_field(struct Cyc_List_List*fields,struct _fat_ptr*v){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Aggrfield*_T2;struct _fat_ptr*_T3;struct _fat_ptr*_T4;int _T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Aggrfield*_T8;struct Cyc_List_List*_T9;{
# 1947
struct Cyc_List_List*fs=fields;_TLB8: if(fs!=0)goto _TLB6;else{goto _TLB7;}
_TLB6: _T0=fs;_T1=_T0->hd;_T2=(struct Cyc_Absyn_Aggrfield*)_T1;_T3=_T2->name;_T4=v;_T5=Cyc_strptrcmp(_T3,_T4);if(_T5!=0)goto _TLB9;_T6=fs;_T7=_T6->hd;_T8=(struct Cyc_Absyn_Aggrfield*)_T7;
return _T8;_TLB9: _T9=fs;
# 1947
fs=_T9->tl;goto _TLB8;_TLB7:;}
# 1950
return 0;}
# 1953
struct Cyc_Absyn_Aggrfield*Cyc_Absyn_lookup_decl_field(struct Cyc_Absyn_Aggrdecl*ad,struct _fat_ptr*v){struct Cyc_Absyn_Aggrfield*_T0;struct Cyc_Absyn_Aggrdecl*_T1;struct Cyc_Absyn_AggrdeclImpl*_T2;struct Cyc_Absyn_Aggrdecl*_T3;struct Cyc_Absyn_AggrdeclImpl*_T4;struct Cyc_List_List*_T5;struct _fat_ptr*_T6;_T1=ad;_T2=_T1->impl;
# 1956
if(_T2!=0)goto _TLBB;_T0=0;goto _TLBC;_TLBB: _T3=ad;_T4=_T3->impl;_T5=_T4->fields;_T6=v;_T0=Cyc_Absyn_lookup_field(_T5,_T6);_TLBC: return _T0;}
# 1959
struct _tuple17*Cyc_Absyn_lookup_tuple_field(struct Cyc_List_List*ts,int i){struct Cyc_List_List*_T0;struct _tuple17*_T1;struct Cyc_List_List*_T2;void*_T3;
# 1962
_TLC0: if(i!=0)goto _TLC1;else{goto _TLBF;}_TLC1: if(ts!=0)goto _TLBE;else{goto _TLBF;}
_TLBE:
# 1962
 i=i + -1;_T0=ts;ts=_T0->tl;goto _TLC0;_TLBF:
# 1964
 if(ts!=0)goto _TLC2;_T1=0;goto _TLC3;_TLC2: _T2=ts;_T3=_T2->hd;_T1=(struct _tuple17*)_T3;_TLC3: return _T1;}
# 1967
struct _fat_ptr*Cyc_Absyn_decl_name(struct Cyc_Absyn_Decl*decl){struct Cyc_Absyn_Decl*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Aggrdecl*_T3;struct _tuple0*_T4;struct _tuple0 _T5;struct _fat_ptr*_T6;struct Cyc_Absyn_Enumdecl*_T7;struct _tuple0*_T8;struct _tuple0 _T9;struct _fat_ptr*_TA;struct Cyc_Absyn_Typedefdecl*_TB;struct _tuple0*_TC;struct _tuple0 _TD;struct _fat_ptr*_TE;struct Cyc_Absyn_Vardecl*_TF;struct _tuple0*_T10;struct _tuple0 _T11;struct _fat_ptr*_T12;struct Cyc_Absyn_Fndecl*_T13;struct _tuple0*_T14;struct _tuple0 _T15;struct _fat_ptr*_T16;_T0=decl;{
# 1970
void*_T17=_T0->r;struct Cyc_Absyn_Fndecl*_T18;struct Cyc_Absyn_Vardecl*_T19;struct Cyc_Absyn_Typedefdecl*_T1A;struct Cyc_Absyn_Enumdecl*_T1B;struct Cyc_Absyn_Aggrdecl*_T1C;_T1=(int*)_T17;_T2=*_T1;switch(_T2){case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T1D=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T17;_T1C=_T1D->f1;}{struct Cyc_Absyn_Aggrdecl*x=_T1C;_T3=x;_T4=_T3->name;_T5=*_T4;_T6=_T5.f1;
# 1972
return _T6;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T1D=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T17;_T1B=_T1D->f1;}{struct Cyc_Absyn_Enumdecl*x=_T1B;_T7=x;_T8=_T7->name;_T9=*_T8;_TA=_T9.f1;
return _TA;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T1D=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T17;_T1A=_T1D->f1;}{struct Cyc_Absyn_Typedefdecl*x=_T1A;_TB=x;_TC=_TB->name;_TD=*_TC;_TE=_TD.f1;
return _TE;}case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T1D=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T17;_T19=_T1D->f1;}{struct Cyc_Absyn_Vardecl*x=_T19;_TF=x;_T10=_TF->name;_T11=*_T10;_T12=_T11.f1;
return _T12;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T1D=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T17;_T18=_T1D->f1;}{struct Cyc_Absyn_Fndecl*x=_T18;_T13=x;_T14=_T13->name;_T15=*_T14;_T16=_T15.f1;
return _T16;}case 13: goto _LLE;case 14: _LLE: goto _LL10;case 15: _LL10: goto _LL12;case 16: _LL12: goto _LL14;case 2: _LL14: goto _LL16;case 6: _LL16: goto _LL18;case 3: _LL18: goto _LL1A;case 9: _LL1A: goto _LL1C;case 10: _LL1C: goto _LL1E;case 11: _LL1E: goto _LL20;case 12: _LL20: goto _LL22;default: _LL22:
# 1990
 return 0;};}}
# 1995
struct Cyc_Absyn_Decl*Cyc_Absyn_lookup_decl(struct Cyc_List_List*decls,struct _fat_ptr*name){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;struct _fat_ptr*_T3;unsigned _T4;int _T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Decl*_T8;struct Cyc_List_List*_T9;
# 1998
_TLC8: if(decls!=0)goto _TLC6;else{goto _TLC7;}
# 2000
_TLC6: _T0=decls;_T1=_T0->hd;_T2=(struct Cyc_Absyn_Decl*)_T1;{struct _fat_ptr*dname=Cyc_Absyn_decl_name(_T2);_T3=dname;_T4=(unsigned)_T3;
if(!_T4)goto _TLC9;_T5=Cyc_strptrcmp(dname,name);if(_T5)goto _TLC9;else{goto _TLCB;}
_TLCB: _T6=decls;_T7=_T6->hd;_T8=(struct Cyc_Absyn_Decl*)_T7;return _T8;_TLC9:;}_T9=decls;
# 1998
decls=_T9->tl;goto _TLC8;_TLC7:
# 2004
 return 0;}static char _TmpG6[3U]="f0";
# 2007
struct _fat_ptr*Cyc_Absyn_fieldname(int i){struct _fat_ptr _T0;int _T1;unsigned _T2;unsigned _T3;struct _fat_ptr _T4;int _T5;struct _fat_ptr**_T6;unsigned _T7;unsigned _T8;struct _fat_ptr _T9;unsigned _TA;int _TB;unsigned char*_TC;struct _fat_ptr**_TD;unsigned _TE;struct _fat_ptr*_TF;struct _fat_ptr _T10;struct Cyc_Int_pa_PrintArg_struct _T11;unsigned _T12;int _T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct _fat_ptr _T16;int _T17;unsigned char*_T18;struct _fat_ptr**_T19;struct _fat_ptr*_T1A;
# 2011
static struct _fat_ptr f0={(unsigned char*)_TmpG6,(unsigned char*)_TmpG6,(unsigned char*)_TmpG6 + 3U};
static struct _fat_ptr*field_names_v[1U]={(struct _fat_ptr*)& f0};
static struct _fat_ptr field_names={(void*)field_names_v,(void*)field_names_v,(void*)(field_names_v + 1U)};_T0=field_names;{
# 2015
unsigned fsz=_get_fat_size(_T0,sizeof(struct _fat_ptr*));_T1=i;_T2=(unsigned)_T1;_T3=fsz;
if(_T2 < _T3)goto _TLCC;_T5=i + 1;{unsigned _T1B=(unsigned)_T5;_T7=_check_times(_T1B,sizeof(struct _fat_ptr*));{struct _fat_ptr**_T1C=_cycalloc(_T7);{unsigned _T1D=_T1B;unsigned j;j=0;_TLD1: if(j < _T1D)goto _TLCF;else{goto _TLD0;}_TLCF:
# 2019
 if(j >= fsz)goto _TLD2;_T8=j;_T9=field_names;_TA=j;_TB=(int)_TA;_TC=_check_fat_subscript(_T9,sizeof(struct _fat_ptr*),_TB);_TD=(struct _fat_ptr**)_TC;
_T1C[_T8]=*_TD;goto _TLD3;_TLD2: _TE=j;{struct _fat_ptr*_T1E=_cycalloc(sizeof(struct _fat_ptr));{struct Cyc_Int_pa_PrintArg_struct _T1F;_T1F.tag=1;_T12=j;_T13=(int)_T12;
_T1F.f1=(unsigned long)_T13;_T11=_T1F;}{struct Cyc_Int_pa_PrintArg_struct _T1F=_T11;void*_T20[1];_T20[0]=& _T1F;_T14=_tag_fat("f%d",sizeof(char),4U);_T15=_tag_fat(_T20,sizeof(void*),1);_T10=Cyc_aprintf(_T14,_T15);}*_T1E=_T10;_TF=(struct _fat_ptr*)_T1E;}_T1C[_TE]=_TF;_TLD3: j=j + 1;goto _TLD1;_TLD0:;}_T6=(struct _fat_ptr**)_T1C;}_T4=
# 2017
_tag_fat(_T6,sizeof(struct _fat_ptr*),_T1B);}field_names=_T4;goto _TLCD;_TLCC: _TLCD: _T16=field_names;_T17=i;_T18=_check_fat_subscript(_T16,sizeof(struct _fat_ptr*),_T17);_T19=(struct _fat_ptr**)_T18;_T1A=*_T19;
# 2023
return _T1A;}}struct _tuple19{enum Cyc_Absyn_AggrKind f0;struct _tuple0*f1;};
# 2027
struct _tuple19 Cyc_Absyn_aggr_kinded_name(union Cyc_Absyn_AggrInfo info){union Cyc_Absyn_AggrInfo _T0;struct _union_AggrInfo_UnknownAggr _T1;unsigned _T2;union Cyc_Absyn_AggrInfo _T3;struct _union_AggrInfo_UnknownAggr _T4;struct _tuple2 _T5;union Cyc_Absyn_AggrInfo _T6;struct _union_AggrInfo_UnknownAggr _T7;struct _tuple2 _T8;struct _tuple19 _T9;union Cyc_Absyn_AggrInfo _TA;struct _union_AggrInfo_KnownAggr _TB;struct Cyc_Absyn_Aggrdecl**_TC;struct _tuple19 _TD;struct _tuple0*_TE;enum Cyc_Absyn_AggrKind _TF;_T0=info;_T1=_T0.UnknownAggr;_T2=_T1.tag;if(_T2!=1)goto _TLD4;_T3=info;_T4=_T3.UnknownAggr;_T5=_T4.val;_TF=_T5.f0;_T6=info;_T7=_T6.UnknownAggr;_T8=_T7.val;_TE=_T8.f1;{enum Cyc_Absyn_AggrKind ak=_TF;struct _tuple0*n=_TE;{struct _tuple19 _T10;
# 2033
_T10.f0=ak;_T10.f1=n;_T9=_T10;}return _T9;}_TLD4: _TA=info;_TB=_TA.KnownAggr;_TC=_TB.val;{struct Cyc_Absyn_Aggrdecl*_T10=*_TC;struct Cyc_Absyn_Aggrdecl _T11=*_T10;_TF=_T11.kind;_TE=_T11.name;}{enum Cyc_Absyn_AggrKind k=_TF;struct _tuple0*n=_TE;{struct _tuple19 _T10;
# 2035
_T10.f0=k;_T10.f1=n;_TD=_T10;}return _TD;};}
# 2039
struct Cyc_Absyn_Aggrdecl*Cyc_Absyn_get_known_aggrdecl(union Cyc_Absyn_AggrInfo info){union Cyc_Absyn_AggrInfo _T0;struct _union_AggrInfo_UnknownAggr _T1;unsigned _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;int(*_T4)(struct _fat_ptr);void*(*_T5)(struct _fat_ptr);struct _fat_ptr _T6;union Cyc_Absyn_AggrInfo _T7;struct _union_AggrInfo_KnownAggr _T8;struct Cyc_Absyn_Aggrdecl**_T9;struct Cyc_Absyn_Aggrdecl*_TA;struct Cyc_Absyn_Aggrdecl*_TB;_T0=info;_T1=_T0.UnknownAggr;_T2=_T1.tag;if(_T2!=1)goto _TLD6;{struct Cyc_Warn_String_Warn_Warg_struct _TC;_TC.tag=0;
# 2045
_TC.f1=_tag_fat("unchecked aggrdecl",sizeof(char),19U);_T3=_TC;}{struct Cyc_Warn_String_Warn_Warg_struct _TC=_T3;void*_TD[1];_TD[0]=& _TC;_T5=Cyc_Warn_impos2;{int(*_TE)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T5;_T4=_TE;}_T6=_tag_fat(_TD,sizeof(void*),1);_T4(_T6);}goto _TLD7;_TLD6: _T7=info;_T8=_T7.KnownAggr;_T9=_T8.val;{struct Cyc_Absyn_Aggrdecl*_TC=*_T9;_TB=_TC;}{struct Cyc_Absyn_Aggrdecl*ad=_TB;_TA=ad;
# 2047
return _TA;}_TLD7:;}
# 2051
int Cyc_Absyn_is_nontagged_nonrequire_union_type(void*t){int*_T0;unsigned _T1;struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T2;enum Cyc_Absyn_AggrKind _T3;int _T4;struct Cyc_List_List*_T5;void*_T6;struct Cyc_Absyn_Aggrfield*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T9;void*_TA;int*_TB;int _TC;void*_TD;union Cyc_Absyn_AggrInfo _TE;struct _union_AggrInfo_KnownAggr _TF;unsigned _T10;union Cyc_Absyn_AggrInfo _T11;struct _union_AggrInfo_KnownAggr _T12;struct Cyc_Absyn_Aggrdecl**_T13;struct Cyc_Absyn_Aggrdecl*_T14;enum Cyc_Absyn_AggrKind _T15;int _T16;struct Cyc_Absyn_Aggrdecl*_T17;struct Cyc_Absyn_AggrdeclImpl*_T18;int _T19;struct Cyc_Absyn_AggrdeclImpl*_T1A;int _T1B;struct Cyc_List_List*_T1C;void*_T1D;struct Cyc_Absyn_Aggrfield*_T1E;struct Cyc_Absyn_Exp*_T1F;union Cyc_Absyn_AggrInfo _T20;struct _union_AggrInfo_UnknownAggr _T21;struct _tuple2 _T22;struct Cyc_Core_Opt*_T23;union Cyc_Absyn_AggrInfo _T24;struct _union_AggrInfo_UnknownAggr _T25;struct _tuple2 _T26;enum Cyc_Absyn_AggrKind _T27;int _T28;int _T29;union Cyc_Absyn_AggrInfo _T2A;struct _union_AggrInfo_UnknownAggr _T2B;struct _tuple2 _T2C;union Cyc_Absyn_AggrInfo _T2D;struct _union_AggrInfo_UnknownAggr _T2E;struct _tuple2 _T2F;struct Cyc_Core_Opt*_T30;void*_T31;int _T32;enum Cyc_Absyn_AggrKind _T33;int _T34;
# 2054
void*_T35=Cyc_Absyn_compress(t);union Cyc_Absyn_AggrInfo _T36;struct Cyc_List_List*_T37;_T0=(int*)_T35;_T1=*_T0;switch(_T1){case 7: _T2=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T35;_T3=_T2->f1;if(_T3!=Cyc_Absyn_UnionA)goto _TLD9;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T38=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T35;_T37=_T38->f3;}{struct Cyc_List_List*fs=_T37;
# 2057
if(fs!=0)goto _TLDB;_T4=1;goto _TLDC;_TLDB: _T5=fs;_T6=_T5->hd;_T7=(struct Cyc_Absyn_Aggrfield*)_T6;_T8=_T7->requires_clause;_T4=_T8==0;_TLDC: return _T4;}_TLD9: goto _LL5;case 0: _T9=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T35;_TA=_T9->f1;_TB=(int*)_TA;_TC=*_TB;if(_TC!=24)goto _TLDD;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T38=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T35;_TD=_T38->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T39=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_TD;_T36=_T39->f1;}}{union Cyc_Absyn_AggrInfo info=_T36;int _T38;enum Cyc_Absyn_AggrKind _T39;struct Cyc_Absyn_Aggrdecl*_T3A;_TE=info;_TF=_TE.KnownAggr;_T10=_TF.tag;if(_T10!=2)goto _TLDF;_T11=info;_T12=_T11.KnownAggr;_T13=_T12.val;{struct Cyc_Absyn_Aggrdecl*_T3B=*_T13;_T3A=_T3B;}{struct Cyc_Absyn_Aggrdecl*ad=_T3A;_T14=ad;_T15=_T14->kind;_T16=(int)_T15;
# 2063
if(_T16==1)goto _TLE1;
return 0;_TLE1: _T17=ad;{
# 2066
struct Cyc_Absyn_AggrdeclImpl*impl=_T17->impl;_T18=
_check_null(impl);_T19=_T18->tagged;if(!_T19)goto _TLE3;
return 0;_TLE3: _T1A=impl;{
# 2070
struct Cyc_List_List*fields=_T1A->fields;
if(fields!=0)goto _TLE5;_T1B=1;goto _TLE6;_TLE5: _T1C=fields;_T1D=_T1C->hd;_T1E=(struct Cyc_Absyn_Aggrfield*)_T1D;_T1F=_T1E->requires_clause;_T1B=_T1F==0;_TLE6: return _T1B;}}}_TLDF: _T20=info;_T21=_T20.UnknownAggr;_T22=_T21.val;_T23=_T22.f2;if(_T23!=0)goto _TLE7;_T24=info;_T25=_T24.UnknownAggr;_T26=_T25.val;_T39=_T26.f0;{enum Cyc_Absyn_AggrKind k=_T39;_T27=k;_T28=(int)_T27;_T29=_T28==1;
# 2074
return _T29;}_TLE7: _T2A=info;_T2B=_T2A.UnknownAggr;_T2C=_T2B.val;_T39=_T2C.f0;_T2D=info;_T2E=_T2D.UnknownAggr;_T2F=_T2E.val;_T30=_T2F.f2;{struct Cyc_Core_Opt _T3B=*_T30;_T31=_T3B.v;_T38=(int)_T31;}{enum Cyc_Absyn_AggrKind k=_T39;int b=_T38;_T33=k;_T34=(int)_T33;
# 2076
if(_T34!=1)goto _TLE9;_T32=!b;goto _TLEA;_TLE9: _T32=0;_TLEA: return _T32;};}goto _TLDE;_TLDD: goto _LL5;_TLDE:;default: _LL5:
# 2080
 return 0;};}
# 2084
int Cyc_Absyn_is_require_union_type(void*t){int*_T0;unsigned _T1;struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T2;enum Cyc_Absyn_AggrKind _T3;int _T4;struct Cyc_List_List*_T5;void*_T6;struct Cyc_Absyn_Aggrfield*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T9;void*_TA;int*_TB;int _TC;void*_TD;union Cyc_Absyn_AggrInfo _TE;struct _union_AggrInfo_KnownAggr _TF;unsigned _T10;union Cyc_Absyn_AggrInfo _T11;struct _union_AggrInfo_KnownAggr _T12;struct Cyc_Absyn_Aggrdecl**_T13;struct Cyc_Absyn_Aggrdecl*_T14;enum Cyc_Absyn_AggrKind _T15;int _T16;struct Cyc_Absyn_Aggrdecl*_T17;struct Cyc_Absyn_AggrdeclImpl*_T18;int _T19;struct Cyc_Absyn_AggrdeclImpl*_T1A;int _T1B;struct Cyc_List_List*_T1C;void*_T1D;struct Cyc_Absyn_Aggrfield*_T1E;struct Cyc_Absyn_Exp*_T1F;union Cyc_Absyn_AggrInfo _T20;struct _union_AggrInfo_UnknownAggr _T21;struct _tuple2 _T22;
# 2087
void*_T23=Cyc_Absyn_compress(t);union Cyc_Absyn_AggrInfo _T24;struct Cyc_List_List*_T25;_T0=(int*)_T23;_T1=*_T0;switch(_T1){case 7: _T2=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T23;_T3=_T2->f1;if(_T3!=Cyc_Absyn_UnionA)goto _TLEC;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T26=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T23;_T25=_T26->f3;}{struct Cyc_List_List*fs=_T25;
# 2090
if(fs==0)goto _TLEE;_T5=fs;_T6=_T5->hd;_T7=(struct Cyc_Absyn_Aggrfield*)_T6;_T8=_T7->requires_clause;_T4=_T8!=0;goto _TLEF;_TLEE: _T4=0;_TLEF: return _T4;}_TLEC: goto _LL5;case 0: _T9=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T23;_TA=_T9->f1;_TB=(int*)_TA;_TC=*_TB;if(_TC!=24)goto _TLF0;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T26=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T23;_TD=_T26->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T27=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_TD;_T24=_T27->f1;}}{union Cyc_Absyn_AggrInfo info=_T24;enum Cyc_Absyn_AggrKind _T26;struct Cyc_Absyn_Aggrdecl*_T27;_TE=info;_TF=_TE.KnownAggr;_T10=_TF.tag;if(_T10!=2)goto _TLF2;_T11=info;_T12=_T11.KnownAggr;_T13=_T12.val;{struct Cyc_Absyn_Aggrdecl*_T28=*_T13;_T27=_T28;}{struct Cyc_Absyn_Aggrdecl*ad=_T27;_T14=ad;_T15=_T14->kind;_T16=(int)_T15;
# 2095
if(_T16==1)goto _TLF4;
return 0;_TLF4: _T17=ad;{
# 2098
struct Cyc_Absyn_AggrdeclImpl*impl=_T17->impl;_T18=
_check_null(impl);_T19=_T18->tagged;if(!_T19)goto _TLF6;
return 0;_TLF6: _T1A=impl;{
# 2102
struct Cyc_List_List*fields=_T1A->fields;
if(fields==0)goto _TLF8;_T1C=fields;_T1D=_T1C->hd;_T1E=(struct Cyc_Absyn_Aggrfield*)_T1D;_T1F=_T1E->requires_clause;_T1B=_T1F!=0;goto _TLF9;_TLF8: _T1B=0;_TLF9: return _T1B;}}}_TLF2: _T20=info;_T21=_T20.UnknownAggr;_T22=_T21.val;_T26=_T22.f0;{enum Cyc_Absyn_AggrKind k=_T26;
# 2106
return 0;};}goto _TLF1;_TLF0: goto _LL5;_TLF1:;default: _LL5:
# 2109
 return 0;};}
# 2113
struct _tuple0*Cyc_Absyn_binding2qvar(void*b){void*_T0;int*_T1;unsigned _T2;void*_T3;struct _tuple0*_T4;void*_T5;void*_T6;void*_T7;void*_T8;struct Cyc_Absyn_Vardecl*_T9;struct _tuple0*_TA;void*_TB;struct Cyc_Absyn_Fndecl*_TC;struct _tuple0*_TD;struct Cyc_Absyn_Fndecl*_TE;struct Cyc_Absyn_Vardecl*_TF;struct _tuple0*_T10;_T0=b;_T1=(int*)_T0;_T2=*_T1;switch(_T2){case 0: _T3=b;{struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*_T11=(struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)_T3;_T10=_T11->f1;}{struct _tuple0*qv=_T10;_T4=qv;
# 2118
return _T4;}case 1: _T5=b;{struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T11=(struct Cyc_Absyn_Global_b_Absyn_Binding_struct*)_T5;_TF=_T11->f1;}{struct Cyc_Absyn_Vardecl*vd=_TF;_TF=vd;goto _LL6;}case 3: _T6=b;{struct Cyc_Absyn_Param_b_Absyn_Binding_struct*_T11=(struct Cyc_Absyn_Param_b_Absyn_Binding_struct*)_T6;_TF=_T11->f1;}_LL6: {struct Cyc_Absyn_Vardecl*vd=_TF;_TF=vd;goto _LL8;}case 4: _T7=b;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T11=(struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T7;_TF=_T11->f1;}_LL8: {struct Cyc_Absyn_Vardecl*vd=_TF;_TF=vd;goto _LLA;}case 5: _T8=b;{struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*_T11=(struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*)_T8;_TF=_T11->f1;}_LLA: {struct Cyc_Absyn_Vardecl*vd=_TF;_T9=vd;_TA=_T9->name;
# 2122
return _TA;}default: _TB=b;{struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T11=(struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*)_TB;_TE=_T11->f1;}{struct Cyc_Absyn_Fndecl*fd=_TE;_TC=fd;_TD=_TC->name;
return _TD;}};}
# 2127
struct _fat_ptr*Cyc_Absyn_designatorlist_to_fieldname(struct Cyc_List_List*ds){struct Cyc_List_List*_T0;struct Cyc_List_List*_T1;struct Cyc_Warn_String_Warn_Warg_struct _T2;int(*_T3)(struct _fat_ptr);void*(*_T4)(struct _fat_ptr);struct _fat_ptr _T5;struct Cyc_List_List*_T6;int*_T7;int _T8;struct _fat_ptr*_T9;struct Cyc_Warn_String_Warn_Warg_struct _TA;int(*_TB)(struct _fat_ptr);void*(*_TC)(struct _fat_ptr);struct _fat_ptr _TD;
# 2130
if(ds==0)goto _TLFD;else{goto _TLFE;}_TLFE: _T0=ds;_T1=_T0->tl;if(_T1!=0)goto _TLFD;else{goto _TLFB;}
_TLFD:{struct Cyc_Warn_String_Warn_Warg_struct _TE;_TE.tag=0;_TE.f1=_tag_fat("designator list not of length 1",sizeof(char),32U);_T2=_TE;}{struct Cyc_Warn_String_Warn_Warg_struct _TE=_T2;void*_TF[1];_TF[0]=& _TE;_T4=Cyc_Warn_impos2;{int(*_T10)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T4;_T3=_T10;}_T5=_tag_fat(_TF,sizeof(void*),1);_T3(_T5);}goto _TLFC;_TLFB: _TLFC: _T6=ds;{
# 2133
void*_TE=_T6->hd;struct _fat_ptr*_TF;_T7=(int*)_TE;_T8=*_T7;if(_T8!=1)goto _TLFF;{struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_T10=(struct Cyc_Absyn_FieldName_Absyn_Designator_struct*)_TE;_TF=_T10->f1;}{struct _fat_ptr*f=_TF;_T9=f;
# 2136
return _T9;}_TLFF:{struct Cyc_Warn_String_Warn_Warg_struct _T10;_T10.tag=0;
# 2138
_T10.f1=_tag_fat("array designator in struct",sizeof(char),27U);_TA=_T10;}{struct Cyc_Warn_String_Warn_Warg_struct _T10=_TA;void*_T11[1];_T11[0]=& _T10;_TC=Cyc_Warn_impos2;{int(*_T12)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TC;_TB=_T12;}_TD=_tag_fat(_T11,sizeof(void*),1);_TB(_TD);};}}
# 2142
int Cyc_Absyn_type2bool(int def,void*t){int*_T0;int _T1;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2;void*_T3;int*_T4;unsigned _T5;int _T6;
# 2145
void*_T7=Cyc_Absyn_compress(t);_T0=(int*)_T7;_T1=*_T0;if(_T1!=0)goto _TL101;_T2=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T7;_T3=_T2->f1;_T4=(int*)_T3;_T5=*_T4;switch(_T5){case 11:
# 2147
 return 1;case 12:
 return 0;default: goto _LL5;}goto _TL102;_TL101: _LL5: _T6=def;
# 2150
return _T6;_TL102:;}struct _tuple20{struct _fat_ptr f0;struct Cyc_Absyn_Exp*f1;};
# 2162 "absyn.cyc"
void Cyc_Absyn_visit_exp(int(*f1)(void*,struct Cyc_Absyn_Exp*),int(*f2)(void*,struct Cyc_Absyn_Stmt*),void*env,struct Cyc_Absyn_Exp*e){int _T0;struct Cyc_Absyn_Exp*_T1;int*_T2;unsigned _T3;int(*_T4)(void*,struct Cyc_Absyn_Exp*);int(*_T5)(void*,struct Cyc_Absyn_Stmt*);void*_T6;struct Cyc_Absyn_Exp*_T7;int(*_T8)(void*,struct Cyc_Absyn_Exp*);int(*_T9)(void*,struct Cyc_Absyn_Stmt*);void*_TA;struct Cyc_Absyn_Exp*_TB;int(*_TC)(void*,struct Cyc_Absyn_Exp*);int(*_TD)(void*,struct Cyc_Absyn_Stmt*);void*_TE;struct Cyc_Absyn_Exp*_TF;int(*_T10)(void*,struct Cyc_Absyn_Exp*);int(*_T11)(void*,struct Cyc_Absyn_Stmt*);void*_T12;struct Cyc_List_List*_T13;void*_T14;struct Cyc_Absyn_Exp*_T15;struct Cyc_List_List*_T16;int(*_T17)(void*,struct Cyc_Absyn_Exp*);int(*_T18)(void*,struct Cyc_Absyn_Stmt*);void*_T19;struct Cyc_List_List*_T1A;void*_T1B;struct _tuple16*_T1C;struct _tuple16 _T1D;struct Cyc_Absyn_Exp*_T1E;struct Cyc_List_List*_T1F;int(*_T20)(void*,struct Cyc_Absyn_Exp*);int(*_T21)(void*,struct Cyc_Absyn_Stmt*);void*_T22;struct Cyc_List_List*_T23;void*_T24;struct Cyc_Absyn_Exp*_T25;struct Cyc_List_List*_T26;struct Cyc_Absyn_MallocInfo _T27;struct Cyc_Absyn_MallocInfo _T28;struct Cyc_Absyn_MallocInfo _T29;int(*_T2A)(void*,struct Cyc_Absyn_Exp*);int(*_T2B)(void*,struct Cyc_Absyn_Stmt*);void*_T2C;struct Cyc_Absyn_Exp*_T2D;int(*_T2E)(void*,struct Cyc_Absyn_Exp*);int(*_T2F)(void*,struct Cyc_Absyn_Stmt*);void*_T30;struct Cyc_Absyn_Exp*_T31;int(*_T32)(void*,struct Cyc_Absyn_Exp*);int(*_T33)(void*,struct Cyc_Absyn_Stmt*);void*_T34;struct Cyc_Absyn_Stmt*_T35;int(*_T36)(void*,struct Cyc_Absyn_Exp*);int(*_T37)(void*,struct Cyc_Absyn_Stmt*);void*_T38;struct Cyc_List_List*_T39;void*_T3A;struct _tuple20*_T3B;struct _tuple20 _T3C;struct Cyc_Absyn_Exp*_T3D;struct Cyc_List_List*_T3E;int(*_T3F)(void*,struct Cyc_Absyn_Exp*);int(*_T40)(void*,struct Cyc_Absyn_Stmt*);void*_T41;struct Cyc_List_List*_T42;void*_T43;struct _tuple20*_T44;struct _tuple20 _T45;struct Cyc_Absyn_Exp*_T46;struct Cyc_List_List*_T47;
# 2170
_TL104: _T0=f1(env,e);if(_T0)goto _TL106;else{goto _TL108;}
_TL108: goto _TL105;_TL106: _T1=e;{
# 2173
void*_T48=_T1->r;struct Cyc_List_List*_T49;struct Cyc_Absyn_Stmt*_T4A;struct Cyc_List_List*_T4B;struct Cyc_Absyn_Exp*_T4C;struct Cyc_Absyn_Exp*_T4D;struct Cyc_Absyn_Exp*_T4E;_T2=(int*)_T48;_T3=*_T2;switch(_T3){case 0: goto _LL4;case 1: _LL4: goto _LL6;case 2: _LL6: goto _LL8;case 31: _LL8: goto _LLA;case 32: _LLA: goto _LLC;case 38: _LLC: goto _LLE;case 19: _LLE: goto _LL10;case 17: _LL10: goto _LL0;case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}{struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL14;}case 41:{struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL14: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL16;}case 42:{struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL16: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL18;}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL18: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL1A;}case 11:{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL1A: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL1C;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL1C: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL1E;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL1E: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL20;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f2;}_LL20: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL22;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL22: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL24;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL24: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL26;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL26: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL28;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL28: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL2A;}case 37:{struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL2A: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL2C;}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL2C: {struct Cyc_Absyn_Exp*e1=_T4E;_T4E=e1;goto _LL2E;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;}_LL2E: {struct Cyc_Absyn_Exp*e1=_T4E;
# 2200
e=e1;goto _TL104;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4D=_T4F->f3;}{struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;_T4E=e1;_T4D=e2;goto _LL32;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4D=_T4F->f2;}_LL32: {struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;_T4E=e1;_T4D=e2;goto _LL34;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4D=_T4F->f2;}_LL34: {struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;_T4E=e1;_T4D=e2;goto _LL36;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4D=_T4F->f2;}_LL36: {struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;_T4E=e1;_T4D=e2;goto _LL38;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4D=_T4F->f2;}_LL38: {struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;_T4E=e1;_T4D=e2;goto _LL3A;}case 34:{struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4D=_T4F->f2;}_LL3A: {struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;_T4E=e1;_T4D=e2;goto _LL3C;}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f2;_T4D=_T4F->f3;}_LL3C: {struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;_T4=f1;_T5=f2;_T6=env;_T7=e1;
# 2210
Cyc_Absyn_visit_exp(_T4,_T5,_T6,_T7);
e=e2;goto _TL104;}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4D=_T4F->f2;_T4C=_T4F->f3;}{struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;struct Cyc_Absyn_Exp*e3=_T4C;_T8=f1;_T9=f2;_TA=env;_TB=e1;
# 2215
Cyc_Absyn_visit_exp(_T8,_T9,_TA,_TB);_TC=f1;_TD=f2;_TE=env;_TF=e2;
Cyc_Absyn_visit_exp(_TC,_TD,_TE,_TF);
e=e3;goto _TL104;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4B=_T4F->f2;}{struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_List_List*lexp=_T4B;
# 2221
_TL10D: if(lexp!=0)goto _TL10B;else{goto _TL10C;}
_TL10B: _T10=f1;_T11=f2;_T12=env;_T13=lexp;_T14=_T13->hd;_T15=(struct Cyc_Absyn_Exp*)_T14;Cyc_Absyn_visit_exp(_T10,_T11,_T12,_T15);_T16=lexp;
# 2221
lexp=_T16->tl;goto _TL10D;_TL10C:
# 2223
 e=e1;goto _TL104;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T48;_T4B=_T4F->f1;}{struct Cyc_List_List*ldt=_T4B;_T4B=ldt;goto _LL44;}case 24:{struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*)_T48;_T4B=_T4F->f2;}_LL44: {struct Cyc_List_List*ldt=_T4B;_T4B=ldt;goto _LL46;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T48;_T4B=_T4F->f2;}_LL46: {struct Cyc_List_List*ldt=_T4B;_T4B=ldt;goto _LL48;}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T48;_T4B=_T4F->f3;}_LL48: {struct Cyc_List_List*ldt=_T4B;_T4B=ldt;goto _LL4A;}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_T48;_T4B=_T4F->f3;}_LL4A: {struct Cyc_List_List*ldt=_T4B;
# 2231
_TL111: if(ldt!=0)goto _TL10F;else{goto _TL110;}
_TL10F: _T17=f1;_T18=f2;_T19=env;_T1A=ldt;_T1B=_T1A->hd;_T1C=(struct _tuple16*)_T1B;_T1D=*_T1C;_T1E=_T1D.f1;Cyc_Absyn_visit_exp(_T17,_T18,_T19,_T1E);_T1F=ldt;
# 2231
ldt=_T1F->tl;goto _TL111;_TL110: goto _LL0;}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T48;_T4B=_T4F->f2;}{struct Cyc_List_List*lexp=_T4B;_T4B=lexp;goto _LL4E;}case 30:{struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*)_T48;_T4B=_T4F->f1;}_LL4E: {struct Cyc_List_List*lexp=_T4B;
# 2237
_TL115: if(lexp!=0)goto _TL113;else{goto _TL114;}
_TL113: _T20=f1;_T21=f2;_T22=env;_T23=lexp;_T24=_T23->hd;_T25=(struct Cyc_Absyn_Exp*)_T24;Cyc_Absyn_visit_exp(_T20,_T21,_T22,_T25);_T26=lexp;
# 2237
lexp=_T26->tl;goto _TL115;_TL114: goto _LL0;}case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T48;_T27=_T4F->f1;_T4E=_T27.rgn;_T28=_T4F->f1;_T4D=_T28.num_elts;_T29=_T4F->f1;_T4C=_T29.aqual;}{struct Cyc_Absyn_Exp*e1o=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;struct Cyc_Absyn_Exp*e3o=_T4C;_T4E=e1o;_T4D=e2;_T4C=e3o;goto _LL52;}case 16:{struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*)_T48;_T4E=_T4F->f1;_T4D=_T4F->f2;_T4C=_T4F->f3;}_LL52: {struct Cyc_Absyn_Exp*e1=_T4E;struct Cyc_Absyn_Exp*e2=_T4D;struct Cyc_Absyn_Exp*e3=_T4C;
# 2246
if(e1==0)goto _TL116;_T2A=f1;_T2B=f2;_T2C=env;_T2D=e1;
Cyc_Absyn_visit_exp(_T2A,_T2B,_T2C,_T2D);goto _TL117;_TL116: _TL117:
 if(e3==0)goto _TL118;_T2E=f1;_T2F=f2;_T30=env;_T31=e3;
Cyc_Absyn_visit_exp(_T2E,_T2F,_T30,_T31);goto _TL119;_TL118: _TL119:
 e=e2;goto _TL104;}case 36:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T48;_T4A=_T4F->f1;}{struct Cyc_Absyn_Stmt*s=_T4A;_T32=f1;_T33=f2;_T34=env;_T35=s;
# 2254
Cyc_Absyn_visit_stmt(_T32,_T33,_T34,_T35);goto _LL0;}default:{struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*_T4F=(struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*)_T48;_T4B=_T4F->f3;_T49=_T4F->f4;}{struct Cyc_List_List*sl1=_T4B;struct Cyc_List_List*sl2=_T49;
# 2258
_TL11D: if(sl1!=0)goto _TL11B;else{goto _TL11C;}
_TL11B: _T36=f1;_T37=f2;_T38=env;_T39=sl1;_T3A=_T39->hd;_T3B=(struct _tuple20*)_T3A;_T3C=*_T3B;_T3D=_T3C.f1;Cyc_Absyn_visit_exp(_T36,_T37,_T38,_T3D);_T3E=sl1;
# 2258
sl1=_T3E->tl;goto _TL11D;_TL11C:
# 2260
 _TL121: if(sl2!=0)goto _TL11F;else{goto _TL120;}
_TL11F: _T3F=f1;_T40=f2;_T41=env;_T42=sl2;_T43=_T42->hd;_T44=(struct _tuple20*)_T43;_T45=*_T44;_T46=_T45.f1;Cyc_Absyn_visit_exp(_T3F,_T40,_T41,_T46);_T47=sl2;
# 2260
sl2=_T47->tl;goto _TL121;_TL120: goto _LL0;}}_LL0:;}
# 2168
if(0)goto _TL104;else{goto _TL105;}_TL105:;}
# 2268
static void Cyc_Absyn_visit_scs(int(*f1)(void*,struct Cyc_Absyn_Exp*),int(*f2)(void*,struct Cyc_Absyn_Stmt*),void*env,struct Cyc_List_List*scs){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Switch_clause*_T2;struct Cyc_Absyn_Exp*_T3;int(*_T4)(void*,struct Cyc_Absyn_Exp*);int(*_T5)(void*,struct Cyc_Absyn_Stmt*);void*_T6;struct Cyc_List_List*_T7;void*_T8;struct Cyc_Absyn_Switch_clause*_T9;struct Cyc_Absyn_Exp*_TA;int(*_TB)(void*,struct Cyc_Absyn_Exp*);int(*_TC)(void*,struct Cyc_Absyn_Stmt*);void*_TD;struct Cyc_List_List*_TE;void*_TF;struct Cyc_Absyn_Switch_clause*_T10;struct Cyc_Absyn_Stmt*_T11;struct Cyc_List_List*_T12;
# 2274
_TL125: if(scs!=0)goto _TL123;else{goto _TL124;}
# 2276
_TL123: _T0=scs;_T1=_T0->hd;_T2=(struct Cyc_Absyn_Switch_clause*)_T1;_T3=_T2->where_clause;if(_T3==0)goto _TL126;_T4=f1;_T5=f2;_T6=env;_T7=scs;_T8=_T7->hd;_T9=(struct Cyc_Absyn_Switch_clause*)_T8;_TA=_T9->where_clause;
Cyc_Absyn_visit_exp(_T4,_T5,_T6,_TA);goto _TL127;_TL126: _TL127: _TB=f1;_TC=f2;_TD=env;_TE=scs;_TF=_TE->hd;_T10=(struct Cyc_Absyn_Switch_clause*)_TF;_T11=_T10->body;
Cyc_Absyn_visit_stmt(_TB,_TC,_TD,_T11);_T12=scs;
# 2274
scs=_T12->tl;goto _TL125;_TL124:;}
# 2284
void Cyc_Absyn_visit_stmt(int(*f1)(void*,struct Cyc_Absyn_Exp*),int(*f2)(void*,struct Cyc_Absyn_Stmt*),void*env,struct Cyc_Absyn_Stmt*s){int _T0;struct Cyc_Absyn_Stmt*_T1;int*_T2;unsigned _T3;struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T4;struct Cyc_Absyn_Exp*_T5;int(*_T6)(void*,struct Cyc_Absyn_Exp*);int(*_T7)(void*,struct Cyc_Absyn_Stmt*);void*_T8;struct Cyc_Absyn_Exp*_T9;int(*_TA)(void*,struct Cyc_Absyn_Exp*);int(*_TB)(void*,struct Cyc_Absyn_Stmt*);void*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_List_List*_TE;struct _tuple9 _TF;struct _tuple9 _T10;int(*_T11)(void*,struct Cyc_Absyn_Exp*);int(*_T12)(void*,struct Cyc_Absyn_Stmt*);void*_T13;struct Cyc_Absyn_Exp*_T14;struct _tuple9 _T15;struct _tuple9 _T16;int(*_T17)(void*,struct Cyc_Absyn_Exp*);int(*_T18)(void*,struct Cyc_Absyn_Stmt*);void*_T19;struct Cyc_Absyn_Exp*_T1A;int(*_T1B)(void*,struct Cyc_Absyn_Exp*);int(*_T1C)(void*,struct Cyc_Absyn_Stmt*);void*_T1D;struct Cyc_Absyn_Exp*_T1E;int(*_T1F)(void*,struct Cyc_Absyn_Exp*);int(*_T20)(void*,struct Cyc_Absyn_Stmt*);void*_T21;struct Cyc_Absyn_Exp*_T22;int(*_T23)(void*,struct Cyc_Absyn_Exp*);int(*_T24)(void*,struct Cyc_Absyn_Stmt*);void*_T25;struct Cyc_List_List*_T26;void*_T27;struct Cyc_Absyn_Exp*_T28;struct Cyc_List_List*_T29;struct Cyc_Absyn_Decl*_T2A;int*_T2B;unsigned _T2C;struct Cyc_Absyn_Vardecl*_T2D;struct Cyc_Absyn_Exp*_T2E;int(*_T2F)(void*,struct Cyc_Absyn_Exp*);int(*_T30)(void*,struct Cyc_Absyn_Stmt*);void*_T31;struct Cyc_Absyn_Vardecl*_T32;struct Cyc_Absyn_Exp*_T33;int(*_T34)(void*,struct Cyc_Absyn_Exp*);int(*_T35)(void*,struct Cyc_Absyn_Stmt*);void*_T36;struct Cyc_Absyn_Fndecl*_T37;struct Cyc_Absyn_Stmt*_T38;int(*_T39)(void*,struct Cyc_Absyn_Exp*);int(*_T3A)(void*,struct Cyc_Absyn_Stmt*);void*_T3B;struct Cyc_Absyn_Exp*_T3C;struct Cyc_Absyn_Exp*_T3D;unsigned _T3E;int(*_T3F)(void*,struct Cyc_Absyn_Exp*);int(*_T40)(void*,struct Cyc_Absyn_Stmt*);void*_T41;struct Cyc_Absyn_Exp*_T42;int(*_T43)(void*,struct Cyc_Absyn_Exp*);int(*_T44)(void*,struct Cyc_Absyn_Stmt*);void*_T45;struct Cyc_Absyn_Exp*_T46;int(*_T47)(void*,struct Cyc_Absyn_Exp*);int(*_T48)(void*,struct Cyc_Absyn_Stmt*);void*_T49;struct Cyc_List_List*_T4A;int(*_T4B)(void*,struct Cyc_Absyn_Exp*);int(*_T4C)(void*,struct Cyc_Absyn_Stmt*);void*_T4D;struct Cyc_Absyn_Stmt*_T4E;int(*_T4F)(void*,struct Cyc_Absyn_Exp*);int(*_T50)(void*,struct Cyc_Absyn_Stmt*);void*_T51;struct Cyc_List_List*_T52;struct Cyc_List_List*_T53;void*_T54;struct Cyc_List_List*_T55;
# 2290
struct Cyc_List_List*stack=0;
_TL128: if(1)goto _TL129;else{goto _TL12A;}
# 2293
_TL129: _T0=f2(env,s);if(!_T0)goto _TL12B;_T1=s;{
# 2295
void*_T56=_T1->r;struct Cyc_Absyn_Decl*_T57;struct Cyc_List_List*_T58;struct Cyc_Absyn_Exp*_T59;struct Cyc_Absyn_Exp*_T5A;struct Cyc_Absyn_Stmt*_T5B;struct Cyc_Absyn_Stmt*_T5C;struct Cyc_Absyn_Exp*_T5D;_T2=(int*)_T56;_T3=*_T2;switch(_T3){case 0: goto _LL4;case 6: _LL4: goto _LL6;case 7: _LL6: goto _LL8;case 8: _LL8: goto _LLA;case 3: _T4=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T56;_T5=_T4->f1;if(_T5!=0)goto _TL12E;_LLA: goto _LL0;_TL12E:{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T56;_T5D=_T5E->f1;}{struct Cyc_Absyn_Exp*e=_T5D;_T5D=e;goto _LLE;}case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_T56;_T5D=_T5E->f1;}_LLE: {struct Cyc_Absyn_Exp*e=_T5D;_T6=f1;_T7=f2;_T8=env;_T9=e;
# 2307
Cyc_Absyn_visit_exp(_T6,_T7,_T8,_T9);goto _LL0;}case 4:{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_T56;_T5D=_T5E->f1;_T5C=_T5E->f2;_T5B=_T5E->f3;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Stmt*s1=_T5C;struct Cyc_Absyn_Stmt*s2=_T5B;_TA=f1;_TB=f2;_TC=env;_TD=e1;
# 2311
Cyc_Absyn_visit_exp(_TA,_TB,_TC,_TD);_T5C=s1;_T5B=s2;goto _LL12;}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T56;_T5C=_T5E->f1;_T5B=_T5E->f2;}_LL12: {struct Cyc_Absyn_Stmt*s1=_T5C;struct Cyc_Absyn_Stmt*s2=_T5B;{struct Cyc_List_List*_T5E=_cycalloc(sizeof(struct Cyc_List_List));
# 2314
_T5E->hd=s2;_T5E->tl=stack;_TE=(struct Cyc_List_List*)_T5E;}stack=_TE;
s=s1;goto _TL128;}case 5:{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_T56;_TF=_T5E->f1;_T5D=_TF.f0;_T5C=_T5E->f2;}{struct Cyc_Absyn_Exp*e=_T5D;struct Cyc_Absyn_Stmt*s1=_T5C;_T5C=s1;_T5D=e;goto _LL16;}case 14:{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_T56;_T5C=_T5E->f1;_T10=_T5E->f2;_T5D=_T10.f0;}_LL16: {struct Cyc_Absyn_Stmt*s1=_T5C;struct Cyc_Absyn_Exp*e=_T5D;_T11=f1;_T12=f2;_T13=env;_T14=e;
# 2321
Cyc_Absyn_visit_exp(_T11,_T12,_T13,_T14);
s=s1;goto _TL128;}case 9:{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_T56;_T5D=_T5E->f1;_T15=_T5E->f2;_T5A=_T15.f0;_T16=_T5E->f3;_T59=_T16.f0;_T5C=_T5E->f4;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5A;struct Cyc_Absyn_Exp*e3=_T59;struct Cyc_Absyn_Stmt*s1=_T5C;_T17=f1;_T18=f2;_T19=env;_T1A=e1;
# 2326
Cyc_Absyn_visit_exp(_T17,_T18,_T19,_T1A);_T1B=f1;_T1C=f2;_T1D=env;_T1E=e2;
Cyc_Absyn_visit_exp(_T1B,_T1C,_T1D,_T1E);_T1F=f1;_T20=f2;_T21=env;_T22=e3;
Cyc_Absyn_visit_exp(_T1F,_T20,_T21,_T22);
s=s1;goto _TL128;}case 11:{struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T56;_T58=_T5E->f1;}{struct Cyc_List_List*es=_T58;
# 2333
_TL133: if(es!=0)goto _TL131;else{goto _TL132;}
_TL131: _T23=f1;_T24=f2;_T25=env;_T26=es;_T27=_T26->hd;_T28=(struct Cyc_Absyn_Exp*)_T27;Cyc_Absyn_visit_exp(_T23,_T24,_T25,_T28);_T29=es;
# 2333
es=_T29->tl;goto _TL133;_TL132: goto _LL0;}case 12:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T56;_T57=_T5E->f1;_T5C=_T5E->f2;}{struct Cyc_Absyn_Decl*d=_T57;struct Cyc_Absyn_Stmt*s1=_T5C;_T2A=d;{
# 2338
void*_T5E=_T2A->r;struct Cyc_Absyn_Exp*_T5F;struct Cyc_Absyn_Fndecl*_T60;struct Cyc_Absyn_Vardecl*_T61;_T2B=(int*)_T5E;_T2C=*_T2B;switch(_T2C){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T62=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T5E;_T61=_T62->f1;}{struct Cyc_Absyn_Vardecl*vd=_T61;_T2D=vd;_T2E=_T2D->initializer;
# 2341
if(_T2E==0)goto _TL135;_T2F=f1;_T30=f2;_T31=env;_T32=vd;_T33=_T32->initializer;
Cyc_Absyn_visit_exp(_T2F,_T30,_T31,_T33);goto _TL136;_TL135: _TL136: goto _LL23;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T62=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T5E;_T60=_T62->f1;}{struct Cyc_Absyn_Fndecl*fd=_T60;_T34=f1;_T35=f2;_T36=env;_T37=fd;_T38=_T37->body;
# 2345
Cyc_Absyn_visit_stmt(_T34,_T35,_T36,_T38);goto _LL23;}case 2:{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T62=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T5E;_T5F=_T62->f3;}{struct Cyc_Absyn_Exp*e=_T5F;_T39=f1;_T3A=f2;_T3B=env;_T3C=e;
# 2348
Cyc_Absyn_visit_exp(_T39,_T3A,_T3B,_T3C);goto _LL23;}case 4:{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T62=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_T5E;_T5F=_T62->f3;}{struct Cyc_Absyn_Exp*eo=_T5F;_T3D=eo;_T3E=(unsigned)_T3D;
# 2351
if(!_T3E)goto _TL137;_T3F=f1;_T40=f2;_T41=env;_T42=eo;
Cyc_Absyn_visit_exp(_T3F,_T40,_T41,_T42);goto _TL138;_TL137: _TL138: goto _LL23;}default: goto _LL23;}_LL23:;}
# 2357
s=s1;goto _TL128;}case 13:{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T56;_T5C=_T5E->f2;}{struct Cyc_Absyn_Stmt*s1=_T5C;
# 2361
s=s1;goto _TL128;}case 10:{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T56;_T5D=_T5E->f1;_T58=_T5E->f2;}{struct Cyc_Absyn_Exp*e=_T5D;struct Cyc_List_List*scs=_T58;_T43=f1;_T44=f2;_T45=env;_T46=e;
# 2365
Cyc_Absyn_visit_exp(_T43,_T44,_T45,_T46);_T47=f1;_T48=f2;_T49=env;_T4A=scs;
Cyc_Absyn_visit_scs(_T47,_T48,_T49,_T4A);goto _LL0;}default:{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T5E=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T56;_T5C=_T5E->f1;_T58=_T5E->f2;}{struct Cyc_Absyn_Stmt*s1=_T5C;struct Cyc_List_List*scs=_T58;_T4B=f1;_T4C=f2;_T4D=env;_T4E=s1;
# 2370
Cyc_Absyn_visit_stmt(_T4B,_T4C,_T4D,_T4E);_T4F=f1;_T50=f2;_T51=env;_T52=scs;
Cyc_Absyn_visit_scs(_T4F,_T50,_T51,_T52);goto _LL0;}}_LL0:;}goto _TL12C;_TL12B: _TL12C:
# 2376
 if(stack!=0)goto _TL139;
return;_TL139: _T53=stack;_T54=_T53->hd;
s=(struct Cyc_Absyn_Stmt*)_T54;_T55=stack;
stack=_T55->tl;goto _TL128;_TL12A:;}
# 2388
static void Cyc_Absyn_i_visit_type(int(*)(void*,void*),void*,void*,struct Cyc_Hashtable_Table*);
# 2393
static void Cyc_Absyn_i_visit_tycon_types(int(*f)(void*,void*),void*env,void*t,struct Cyc_Hashtable_Table*seen){void*_T0;int*_T1;unsigned _T2;void*_T3;struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T4;union Cyc_Absyn_DatatypeFieldInfo _T5;struct _union_DatatypeFieldInfo_KnownDatatypefield _T6;unsigned _T7;void*_T8;union Cyc_Absyn_DatatypeFieldInfo _T9;struct _union_DatatypeFieldInfo_KnownDatatypefield _TA;struct _tuple1 _TB;union Cyc_Absyn_DatatypeFieldInfo _TC;struct _union_DatatypeFieldInfo_KnownDatatypefield _TD;struct _tuple1 _TE;struct Cyc_Absyn_Datatypefield*_TF;struct Cyc_List_List*_T10;unsigned _T11;struct Cyc_List_List*_T12;void*_T13;int(*_T14)(void*,void*);void*_T15;void*_T16;struct Cyc_Hashtable_Table*_T17;struct Cyc_List_List*_T18;void*_T19;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T1A;union Cyc_Absyn_DatatypeInfo _T1B;struct _union_DatatypeInfo_KnownDatatype _T1C;unsigned _T1D;void*_T1E;union Cyc_Absyn_DatatypeInfo _T1F;struct _union_DatatypeInfo_KnownDatatype _T20;struct Cyc_Absyn_Datatypedecl**_T21;struct Cyc_Absyn_Datatypedecl*_T22;struct Cyc_Core_Opt*_T23;unsigned _T24;struct Cyc_Absyn_Datatypedecl*_T25;struct Cyc_Core_Opt*_T26;void*_T27;struct Cyc_List_List*_T28;unsigned _T29;struct Cyc_List_List*_T2A;void*_T2B;struct Cyc_Absyn_Datatypefield*_T2C;struct Cyc_List_List*_T2D;unsigned _T2E;struct Cyc_List_List*_T2F;void*_T30;int(*_T31)(void*,void*);void*_T32;void*_T33;struct Cyc_Hashtable_Table*_T34;struct Cyc_List_List*_T35;struct Cyc_List_List*_T36;void*_T37;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T38;union Cyc_Absyn_AggrInfo _T39;struct _union_AggrInfo_KnownAggr _T3A;unsigned _T3B;void*_T3C;union Cyc_Absyn_AggrInfo _T3D;struct _union_AggrInfo_KnownAggr _T3E;struct Cyc_Absyn_Aggrdecl**_T3F;struct Cyc_Absyn_Aggrdecl*_T40;struct Cyc_Absyn_AggrdeclImpl*_T41;unsigned _T42;struct Cyc_Absyn_Aggrdecl*_T43;struct Cyc_Absyn_AggrdeclImpl*_T44;struct Cyc_List_List*_T45;unsigned _T46;struct Cyc_List_List*_T47;void*_T48;int(*_T49)(void*,void*);void*_T4A;void*_T4B;struct Cyc_Hashtable_Table*_T4C;int(*_T4D)(void*,void*);void*_T4E;void*_T4F;struct Cyc_Hashtable_Table*_T50;struct Cyc_List_List*_T51;struct Cyc_Absyn_Aggrdecl*_T52;struct Cyc_Absyn_AggrdeclImpl*_T53;struct Cyc_Absyn_AggrdeclImpl*_T54;struct Cyc_List_List*_T55;unsigned _T56;int(*_T57)(void*,void*);void*_T58;struct Cyc_List_List*_T59;void*_T5A;struct Cyc_Absyn_Aggrfield*_T5B;void*_T5C;struct Cyc_Hashtable_Table*_T5D;struct Cyc_List_List*_T5E;struct Cyc_Absyn_Aggrdecl*_T5F;struct Cyc_Absyn_Datatypefield*_T60;struct Cyc_Absyn_Datatypedecl*_T61;_T0=t;_T1=(int*)_T0;_T2=*_T1;switch(_T2){case 23: _T3=t;_T4=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T3;_T5=_T4->f1;_T6=_T5.KnownDatatypefield;_T7=_T6.tag;if(_T7!=2)goto _TL13C;_T8=t;{struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T62=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T8;_T9=_T62->f1;_TA=_T9.KnownDatatypefield;_TB=_TA.val;_T61=_TB.f0;_TC=_T62->f1;_TD=_TC.KnownDatatypefield;_TE=_TD.val;_T60=_TE.f1;}{struct Cyc_Absyn_Datatypedecl*dtd=_T61;struct Cyc_Absyn_Datatypefield*dtf=_T60;_TF=dtf;{
# 2402
struct Cyc_List_List*ts=_TF->typs;
_TL141: _T10=ts;_T11=(unsigned)_T10;if(_T11)goto _TL13F;else{goto _TL140;}
# 2405
_TL13F: _T12=ts;_T13=_T12->hd;{struct _tuple17*_T62=(struct _tuple17*)_T13;void*_T63;{struct _tuple17 _T64=*_T62;_T63=_T64.f1;}{void*t=_T63;_T14=f;_T15=env;_T16=t;_T17=seen;
Cyc_Absyn_i_visit_type(_T14,_T15,_T16,_T17);}}_T18=ts;
# 2403
ts=_T18->tl;goto _TL141;_TL140: _T61=dtd;goto _LL4;}}_TL13C: goto _LL7;case 22: _T19=t;_T1A=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T19;_T1B=_T1A->f1;_T1C=_T1B.KnownDatatype;_T1D=_T1C.tag;if(_T1D!=2)goto _TL142;_T1E=t;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T62=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T1E;_T1F=_T62->f1;_T20=_T1F.KnownDatatype;_T21=_T20.val;{struct Cyc_Absyn_Datatypedecl*_T63=*_T21;_T61=_T63;}}_LL4:{struct Cyc_Absyn_Datatypedecl*dtd=_T61;_T22=dtd;_T23=_T22->fields;_T24=(unsigned)_T23;
# 2410
if(!_T24)goto _TL144;_T25=dtd;_T26=_T25->fields;_T27=_T26->v;{
# 2412
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T27;
_TL149: _T28=fs;_T29=(unsigned)_T28;if(_T29)goto _TL147;else{goto _TL148;}
# 2415
_TL147: _T2A=fs;_T2B=_T2A->hd;_T2C=(struct Cyc_Absyn_Datatypefield*)_T2B;{struct Cyc_List_List*ts=_T2C->typs;
_TL14D: _T2D=ts;_T2E=(unsigned)_T2D;if(_T2E)goto _TL14B;else{goto _TL14C;}
# 2418
_TL14B: _T2F=ts;_T30=_T2F->hd;{struct _tuple17*_T62=(struct _tuple17*)_T30;void*_T63;{struct _tuple17 _T64=*_T62;_T63=_T64.f1;}{void*t=_T63;_T31=f;_T32=env;_T33=t;_T34=seen;
Cyc_Absyn_i_visit_type(_T31,_T32,_T33,_T34);}}_T35=ts;
# 2416
ts=_T35->tl;goto _TL14D;_TL14C:;}_T36=fs;
# 2413
fs=_T36->tl;goto _TL149;_TL148:;}goto _TL145;_TL144: _TL145: goto _LL0;}_TL142: goto _LL7;case 24: _T37=t;_T38=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T37;_T39=_T38->f1;_T3A=_T39.KnownAggr;_T3B=_T3A.tag;if(_T3B!=2)goto _TL14E;_T3C=t;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T62=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T3C;_T3D=_T62->f1;_T3E=_T3D.KnownAggr;_T3F=_T3E.val;{struct Cyc_Absyn_Aggrdecl*_T63=*_T3F;_T5F=_T63;}}{struct Cyc_Absyn_Aggrdecl*ad=_T5F;_T40=ad;_T41=_T40->impl;_T42=(unsigned)_T41;
# 2425
if(!_T42)goto _TL150;_T43=ad;_T44=_T43->impl;{
# 2427
struct Cyc_List_List*qbl=_T44->qual_bnd;
_TL155: _T45=qbl;_T46=(unsigned)_T45;if(_T46)goto _TL153;else{goto _TL154;}
# 2430
_TL153: _T47=qbl;_T48=_T47->hd;{struct _tuple18*_T62=(struct _tuple18*)_T48;void*_T63;void*_T64;{struct _tuple18 _T65=*_T62;_T64=_T65.f0;_T63=_T65.f1;}{void*t1=_T64;void*t2=_T63;_T49=f;_T4A=env;_T4B=t1;_T4C=seen;
Cyc_Absyn_i_visit_type(_T49,_T4A,_T4B,_T4C);_T4D=f;_T4E=env;_T4F=t2;_T50=seen;
Cyc_Absyn_i_visit_type(_T4D,_T4E,_T4F,_T50);}}_T51=qbl;
# 2428
qbl=_T51->tl;goto _TL155;_TL154: _T52=ad;_T53=_T52->impl;_T54=
# 2434
_check_null(_T53);{struct Cyc_List_List*afl=_T54->fields;
_TL159: _T55=afl;_T56=(unsigned)_T55;if(_T56)goto _TL157;else{goto _TL158;}
_TL157: _T57=f;_T58=env;_T59=afl;_T5A=_T59->hd;_T5B=(struct Cyc_Absyn_Aggrfield*)_T5A;_T5C=_T5B->type;_T5D=seen;Cyc_Absyn_i_visit_type(_T57,_T58,_T5C,_T5D);_T5E=afl;
# 2435
afl=_T5E->tl;goto _TL159;_TL158:;}}goto _TL151;_TL150: _TL151: goto _LL0;}_TL14E: goto _LL7;default: _LL7: goto _LL0;}_LL0:;}
# 2445
static void Cyc_Absyn_i_visit_type(int(*f)(void*,void*),void*env,void*t,struct Cyc_Hashtable_Table*seen){int*(*_T0)(struct Cyc_Hashtable_Table*,void*);void**(*_T1)(struct Cyc_Hashtable_Table*,void*);int*_T2;unsigned _T3;void(*_T4)(struct Cyc_Hashtable_Table*,void*,int);void(*_T5)(struct Cyc_Hashtable_Table*,void*,void*);int _T6;void*_T7;int*_T8;unsigned _T9;void*_TA;void*_TB;int(*_TC)(void*,void*);void*_TD;void*_TE;struct Cyc_Hashtable_Table*_TF;struct Cyc_List_List*_T10;unsigned _T11;int(*_T12)(void*,void*);void*_T13;struct Cyc_List_List*_T14;void*_T15;struct Cyc_Hashtable_Table*_T16;struct Cyc_List_List*_T17;void*_T18;void*_T19;void*_T1A;void*_T1B;void*_T1C;unsigned _T1D;int(*_T1E)(void*,void*);void*_T1F;void*_T20;struct Cyc_Hashtable_Table*_T21;void*_T22;struct Cyc_Absyn_PtrInfo _T23;struct Cyc_Absyn_PtrInfo _T24;struct Cyc_Absyn_PtrAtts _T25;struct Cyc_Absyn_PtrInfo _T26;struct Cyc_Absyn_PtrAtts _T27;struct Cyc_Absyn_PtrInfo _T28;struct Cyc_Absyn_PtrAtts _T29;struct Cyc_Absyn_PtrInfo _T2A;struct Cyc_Absyn_PtrAtts _T2B;struct Cyc_Absyn_PtrInfo _T2C;struct Cyc_Absyn_PtrAtts _T2D;struct Cyc_Absyn_PtrInfo _T2E;struct Cyc_Absyn_PtrAtts _T2F;int(*_T30)(void*,void*);void*_T31;void*_T32;struct Cyc_Hashtable_Table*_T33;int(*_T34)(void*,void*);void*_T35;void*_T36;struct Cyc_Hashtable_Table*_T37;int(*_T38)(void*,void*);void*_T39;void*_T3A;struct Cyc_Hashtable_Table*_T3B;int(*_T3C)(void*,void*);void*_T3D;void*_T3E;struct Cyc_Hashtable_Table*_T3F;int(*_T40)(void*,void*);void*_T41;void*_T42;struct Cyc_Hashtable_Table*_T43;int(*_T44)(void*,void*);void*_T45;void*_T46;struct Cyc_Hashtable_Table*_T47;int(*_T48)(void*,void*);void*_T49;void*_T4A;struct Cyc_Hashtable_Table*_T4B;void*_T4C;struct Cyc_Absyn_ArrayInfo _T4D;struct Cyc_Absyn_ArrayInfo _T4E;int(*_T4F)(void*,void*);void*_T50;void*_T51;struct Cyc_Hashtable_Table*_T52;int(*_T53)(void*,void*);void*_T54;void*_T55;struct Cyc_Hashtable_Table*_T56;void*_T57;struct Cyc_Absyn_FnInfo _T58;struct Cyc_Absyn_FnInfo _T59;struct Cyc_Absyn_FnInfo _T5A;struct Cyc_Absyn_FnInfo _T5B;struct Cyc_Absyn_FnInfo _T5C;struct Cyc_Absyn_FnInfo _T5D;struct Cyc_Absyn_FnInfo _T5E;int(*_T5F)(void*,void*);void*_T60;void*_T61;struct Cyc_Hashtable_Table*_T62;int(*_T63)(void*,void*);void*_T64;void*_T65;struct Cyc_Hashtable_Table*_T66;struct Cyc_List_List*_T67;unsigned _T68;struct Cyc_List_List*_T69;void*_T6A;int(*_T6B)(void*,void*);void*_T6C;void*_T6D;struct Cyc_Hashtable_Table*_T6E;struct Cyc_List_List*_T6F;struct Cyc_Absyn_VarargInfo*_T70;unsigned _T71;int(*_T72)(void*,void*);void*_T73;struct Cyc_Absyn_VarargInfo*_T74;void*_T75;struct Cyc_Hashtable_Table*_T76;struct Cyc_List_List*_T77;unsigned _T78;struct Cyc_List_List*_T79;void*_T7A;int(*_T7B)(void*,void*);void*_T7C;void*_T7D;struct Cyc_Hashtable_Table*_T7E;int(*_T7F)(void*,void*);void*_T80;void*_T81;struct Cyc_Hashtable_Table*_T82;struct Cyc_List_List*_T83;struct Cyc_List_List*_T84;unsigned _T85;struct Cyc_List_List*_T86;void*_T87;struct Cyc_Absyn_Vardecl*_T88;unsigned _T89;int(*_T8A)(void*,void*);void*_T8B;struct Cyc_List_List*_T8C;void*_T8D;struct Cyc_Absyn_Vardecl*_T8E;void*_T8F;struct Cyc_Hashtable_Table*_T90;struct Cyc_List_List*_T91;void*_T92;struct Cyc_Absyn_Vardecl*_T93;struct Cyc_Absyn_Vardecl*_T94;void*_T95;unsigned _T96;int(*_T97)(void*,void*);void*_T98;struct Cyc_List_List*_T99;void*_T9A;struct Cyc_Absyn_Vardecl*_T9B;void*_T9C;struct Cyc_Hashtable_Table*_T9D;struct Cyc_List_List*_T9E;struct Cyc_List_List*_T9F;unsigned _TA0;struct Cyc_List_List*_TA1;int*_TA2;unsigned _TA3;void*_TA4;int(*_TA5)(void*,void*);void*_TA6;void*_TA7;struct Cyc_Hashtable_Table*_TA8;void*_TA9;void*_TAA;void*_TAB;void*_TAC;int(*_TAD)(void*,void*);void*_TAE;void*_TAF;struct Cyc_Hashtable_Table*_TB0;int(*_TB1)(void*,void*);void*_TB2;void*_TB3;struct Cyc_Hashtable_Table*_TB4;struct Cyc_List_List*_TB5;void*_TB6;struct Cyc_List_List*_TB7;unsigned _TB8;int(*_TB9)(void*,void*);void*_TBA;struct Cyc_List_List*_TBB;void*_TBC;struct Cyc_Absyn_Aggrfield*_TBD;void*_TBE;struct Cyc_Hashtable_Table*_TBF;struct Cyc_List_List*_TC0;void*_TC1;void*_TC2;struct Cyc_List_List*_TC3;unsigned _TC4;int(*_TC5)(void*,void*);void*_TC6;struct Cyc_List_List*_TC7;void*_TC8;struct Cyc_Hashtable_Table*_TC9;struct Cyc_List_List*_TCA;struct Cyc_Absyn_Typedefdecl*_TCB;unsigned _TCC;struct Cyc_Absyn_Typedefdecl*_TCD;void*_TCE;unsigned _TCF;int(*_TD0)(void*,void*);void*_TD1;struct Cyc_Absyn_Typedefdecl*_TD2;void*_TD3;struct Cyc_Hashtable_Table*_TD4;void*_TD5;unsigned _TD6;int(*_TD7)(void*,void*);void*_TD8;void*_TD9;struct Cyc_Hashtable_Table*_TDA;void*_TDB;void**_TDC;unsigned _TDD;void**_TDE;void*_TDF;unsigned _TE0;int(*_TE1)(void*,void*);void*_TE2;void**_TE3;void*_TE4;struct Cyc_Hashtable_Table*_TE5;void*_TE6;int(*_TE7)(void*,void*);void*_TE8;struct Cyc_Absyn_Vardecl*_TE9;void*_TEA;struct Cyc_Hashtable_Table*_TEB;_T1=Cyc_Hashtable_lookup_opt;{
# 2451
int*(*_TEC)(struct Cyc_Hashtable_Table*,void*)=(int*(*)(struct Cyc_Hashtable_Table*,void*))_T1;_T0=_TEC;}_T2=_T0(seen,t);_T3=(unsigned)_T2;if(!_T3)goto _TL15A;
return;_TL15A: _T5=Cyc_Hashtable_insert;{
void(*_TEC)(struct Cyc_Hashtable_Table*,void*,int)=(void(*)(struct Cyc_Hashtable_Table*,void*,int))_T5;_T4=_TEC;}_T4(seen,t,1);_T6=
# 2455
f(env,t);if(_T6)goto _TL15C;else{goto _TL15E;}
_TL15E: return;_TL15C: {struct Cyc_AssnDef_ExistAssnFn*_TEC;struct Cyc_Absyn_Exp*_TED;struct Cyc_Absyn_Vardecl*_TEE;void**_TEF;struct Cyc_Absyn_Typedefdecl*_TF0;struct Cyc_List_List*_TF1;struct Cyc_List_List*_TF2;struct Cyc_List_List*_TF3;struct Cyc_Absyn_VarargInfo*_TF4;struct Cyc_List_List*_TF5;void*_TF6;void*_TF7;void*_TF8;void*_TF9;void*_TFA;void*_TFB;void*_TFC;_T7=t;_T8=(int*)_T7;_T9=*_T8;switch(_T9){case 0: _TA=t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TA;_TB=_TFD->f1;_TFC=(void*)_TB;_TFB=_TFD->f2;}{void*tc=_TFC;struct Cyc_List_List*ts=_TFB;_TC=f;_TD=env;_TE=tc;_TF=seen;
# 2461
Cyc_Absyn_i_visit_tycon_types(_TC,_TD,_TE,_TF);
_TL163: _T10=ts;_T11=(unsigned)_T10;if(_T11)goto _TL161;else{goto _TL162;}
_TL161: _T12=f;_T13=env;_T14=ts;_T15=_T14->hd;_T16=seen;Cyc_Absyn_i_visit_type(_T12,_T13,_T15,_T16);_T17=ts;
# 2462
ts=_T17->tl;goto _TL163;_TL162: goto _LL0;}case 3: _T18=t;{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T18;_T19=_TFD->f2;_TFC=(void*)_T19;}{void*to=_TFC;_TFC=to;goto _LL6;}case 1: _T1A=t;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T1A;_T1B=_TFD->f2;_TFC=(void*)_T1B;}_LL6: {void*to=_TFC;_T1C=to;_T1D=(unsigned)_T1C;
# 2468
if(!_T1D)goto _TL164;_T1E=f;_T1F=env;_T20=to;_T21=seen;
Cyc_Absyn_i_visit_type(_T1E,_T1F,_T20,_T21);goto _TL165;_TL164: _TL165: goto _LL0;}case 2: goto _LL0;case 4: _T22=t;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T22;_T23=_TFD->f1;_TFC=_T23.elt_type;_T24=_TFD->f1;_T25=_T24.ptr_atts;_TFB=_T25.eff;_T26=_TFD->f1;_T27=_T26.ptr_atts;_TFA=_T27.nullable;_T28=_TFD->f1;_T29=_T28.ptr_atts;_TF9=_T29.bounds;_T2A=_TFD->f1;_T2B=_T2A.ptr_atts;_TF8=_T2B.zero_term;_T2C=_TFD->f1;_T2D=_T2C.ptr_atts;_TF7=_T2D.autoreleased;_T2E=_TFD->f1;_T2F=_T2E.ptr_atts;_TF6=_T2F.aqual;}{void*ta=_TFC;void*e=_TFB;void*n=_TFA;void*b=_TF9;void*z=_TF8;void*r=_TF7;void*a=_TF6;_T30=f;_T31=env;_T32=ta;_T33=seen;
# 2474
Cyc_Absyn_i_visit_type(_T30,_T31,_T32,_T33);_T34=f;_T35=env;_T36=e;_T37=seen;
Cyc_Absyn_i_visit_type(_T34,_T35,_T36,_T37);_T38=f;_T39=env;_T3A=n;_T3B=seen;
Cyc_Absyn_i_visit_type(_T38,_T39,_T3A,_T3B);_T3C=f;_T3D=env;_T3E=b;_T3F=seen;
Cyc_Absyn_i_visit_type(_T3C,_T3D,_T3E,_T3F);_T40=f;_T41=env;_T42=z;_T43=seen;
Cyc_Absyn_i_visit_type(_T40,_T41,_T42,_T43);_T44=f;_T45=env;_T46=r;_T47=seen;
Cyc_Absyn_i_visit_type(_T44,_T45,_T46,_T47);_T48=f;_T49=env;_T4A=a;_T4B=seen;
Cyc_Absyn_i_visit_type(_T48,_T49,_T4A,_T4B);goto _LL0;}case 5: _T4C=t;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T4C;_T4D=_TFD->f1;_TFC=_T4D.elt_type;_T4E=_TFD->f1;_TFB=_T4E.zero_term;}{void*ta=_TFC;void*z=_TFB;_T4F=f;_T50=env;_T51=ta;_T52=seen;
# 2483
Cyc_Absyn_i_visit_type(_T4F,_T50,_T51,_T52);_T53=f;_T54=env;_T55=z;_T56=seen;
Cyc_Absyn_i_visit_type(_T53,_T54,_T55,_T56);goto _LL0;}case 6: _T57=t;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T57;_T58=_TFD->f1;_TFC=_T58.effect;_T59=_TFD->f1;_TFB=_T59.ret_type;_T5A=_TFD->f1;_TF5=_T5A.args;_T5B=_TFD->f1;_TF4=_T5B.cyc_varargs;_T5C=_TFD->f1;_TF3=_T5C.qual_bnd;_T5D=_TFD->f1;_TF2=_T5D.arg_vardecls;_T5E=_TFD->f1;_TF1=_T5E.effconstr;}{void*e=_TFC;void*r=_TFB;struct Cyc_List_List*args=_TF5;struct Cyc_Absyn_VarargInfo*va=_TF4;struct Cyc_List_List*qb=_TF3;struct Cyc_List_List*vd=_TF2;struct Cyc_List_List*fc=_TF1;
# 2496
if(e==0)goto _TL166;_T5F=f;_T60=env;_T61=e;_T62=seen;
Cyc_Absyn_i_visit_type(_T5F,_T60,_T61,_T62);goto _TL167;_TL166: _TL167: _T63=f;_T64=env;_T65=r;_T66=seen;
Cyc_Absyn_i_visit_type(_T63,_T64,_T65,_T66);
_TL16B: _T67=args;_T68=(unsigned)_T67;if(_T68)goto _TL169;else{goto _TL16A;}
# 2501
_TL169: _T69=args;_T6A=_T69->hd;{struct _tuple8*_TFD=(struct _tuple8*)_T6A;void*_TFE;{struct _tuple8 _TFF=*_TFD;_TFE=_TFF.f2;}{void*at=_TFE;_T6B=f;_T6C=env;_T6D=at;_T6E=seen;
Cyc_Absyn_i_visit_type(_T6B,_T6C,_T6D,_T6E);}}_T6F=args;
# 2499
args=_T6F->tl;goto _TL16B;_TL16A: _T70=va;_T71=(unsigned)_T70;
# 2504
if(!_T71)goto _TL16C;_T72=f;_T73=env;_T74=va;_T75=_T74->type;_T76=seen;
Cyc_Absyn_i_visit_type(_T72,_T73,_T75,_T76);goto _TL16D;_TL16C: _TL16D:
 _TL171: _T77=qb;_T78=(unsigned)_T77;if(_T78)goto _TL16F;else{goto _TL170;}
# 2508
_TL16F: _T79=qb;_T7A=_T79->hd;{struct _tuple18*_TFD=(struct _tuple18*)_T7A;void*_TFE;void*_TFF;{struct _tuple18 _T100=*_TFD;_TFF=_T100.f0;_TFE=_T100.f1;}{void*t1=_TFF;void*t2=_TFE;_T7B=f;_T7C=env;_T7D=t1;_T7E=seen;
Cyc_Absyn_i_visit_type(_T7B,_T7C,_T7D,_T7E);_T7F=f;_T80=env;_T81=t2;_T82=seen;
Cyc_Absyn_i_visit_type(_T7F,_T80,_T81,_T82);}}_T83=qb;
# 2506
qb=_T83->tl;goto _TL171;_TL170:
# 2512
 _TL175: _T84=vd;_T85=(unsigned)_T84;if(_T85)goto _TL173;else{goto _TL174;}
# 2514
_TL173: _T86=vd;_T87=_T86->hd;_T88=(struct Cyc_Absyn_Vardecl*)_T87;_T89=(unsigned)_T88;if(!_T89)goto _TL176;_T8A=f;_T8B=env;_T8C=vd;_T8D=_T8C->hd;_T8E=(struct Cyc_Absyn_Vardecl*)_T8D;_T8F=_T8E->type;_T90=seen;
# 2516
Cyc_Absyn_i_visit_type(_T8A,_T8B,_T8F,_T90);_T91=vd;_T92=_T91->hd;_T93=(struct Cyc_Absyn_Vardecl*)_T92;_T94=
_check_null(_T93);_T95=_T94->rgn;_T96=(unsigned)_T95;if(!_T96)goto _TL178;_T97=f;_T98=env;_T99=vd;_T9A=_T99->hd;_T9B=(struct Cyc_Absyn_Vardecl*)_T9A;_T9C=_T9B->rgn;_T9D=seen;
Cyc_Absyn_i_visit_type(_T97,_T98,_T9C,_T9D);goto _TL179;_TL178: _TL179: goto _TL177;_TL176: _TL177: _T9E=vd;
# 2512
vd=_T9E->tl;goto _TL175;_TL174:
# 2521
 _TL17D: _T9F=fc;_TA0=(unsigned)_T9F;if(_TA0)goto _TL17B;else{goto _TL17C;}
# 2523
_TL17B: _TA1=fc;{void*_TFD=_TA1->hd;void*_TFE;void*_TFF;_TA2=(int*)_TFD;_TA3=*_TA2;switch(_TA3){case 0:{struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*_T100=(struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*)_TFD;_TA4=_T100->f1;_TFF=(void*)_TA4;}{void*tc=_TFF;_TA5=f;_TA6=env;_TA7=tc;_TA8=seen;
# 2526
Cyc_Absyn_i_visit_type(_TA5,_TA6,_TA7,_TA8);goto _LL21;}case 1:{struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*_T100=(struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*)_TFD;_TA9=_T100->f1;_TFF=(void*)_TA9;_TAA=_T100->f2;_TFE=(void*)_TAA;}{void*tc1=_TFF;void*tc2=_TFE;_TFF=tc1;_TFE=tc2;goto _LL27;}default:{struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*_T100=(struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*)_TFD;_TAB=_T100->f1;_TFF=(void*)_TAB;_TAC=_T100->f2;_TFE=(void*)_TAC;}_LL27: {void*tc1=_TFF;void*tc2=_TFE;_TAD=f;_TAE=env;_TAF=tc1;_TB0=seen;
# 2531
Cyc_Absyn_i_visit_type(_TAD,_TAE,_TAF,_TB0);_TB1=f;_TB2=env;_TB3=tc2;_TB4=seen;
Cyc_Absyn_i_visit_type(_TB1,_TB2,_TB3,_TB4);goto _LL21;}}_LL21:;}_TB5=fc;
# 2521
fc=_TB5->tl;goto _TL17D;_TL17C: goto _LL0;}case 7: _TB6=t;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_TB6;_TF5=_TFD->f3;}{struct Cyc_List_List*afl=_TF5;
# 2538
_TL182: _TB7=afl;_TB8=(unsigned)_TB7;if(_TB8)goto _TL180;else{goto _TL181;}
_TL180: _TB9=f;_TBA=env;_TBB=afl;_TBC=_TBB->hd;_TBD=(struct Cyc_Absyn_Aggrfield*)_TBC;_TBE=_TBD->type;_TBF=seen;Cyc_Absyn_i_visit_type(_TB9,_TBA,_TBE,_TBF);_TC0=afl;
# 2538
afl=_TC0->tl;goto _TL182;_TL181: goto _LL0;}case 8: _TC1=t;{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_TC1;_TF5=_TFD->f2;_TF0=_TFD->f3;_TC2=_TFD->f4;_TFC=(void*)_TC2;}{struct Cyc_List_List*ts=_TF5;struct Cyc_Absyn_Typedefdecl*tdef=_TF0;void*to=_TFC;
# 2542
_TL186: _TC3=ts;_TC4=(unsigned)_TC3;if(_TC4)goto _TL184;else{goto _TL185;}
_TL184: _TC5=f;_TC6=env;_TC7=ts;_TC8=_TC7->hd;_TC9=seen;Cyc_Absyn_i_visit_type(_TC5,_TC6,_TC8,_TC9);_TCA=ts;
# 2542
ts=_TCA->tl;goto _TL186;_TL185: _TCB=tdef;_TCC=(unsigned)_TCB;
# 2544
if(!_TCC)goto _TL187;_TCD=tdef;_TCE=_TCD->defn;_TCF=(unsigned)_TCE;if(!_TCF)goto _TL187;_TD0=f;_TD1=env;_TD2=tdef;_TD3=_TD2->defn;_TD4=seen;
Cyc_Absyn_i_visit_type(_TD0,_TD1,_TD3,_TD4);goto _TL188;_TL187: _TL188: _TD5=to;_TD6=(unsigned)_TD5;
if(!_TD6)goto _TL189;_TD7=f;_TD8=env;_TD9=to;_TDA=seen;
Cyc_Absyn_i_visit_type(_TD7,_TD8,_TD9,_TDA);goto _TL18A;_TL189: _TL18A: goto _LL0;}case 10: _TDB=t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_TDB;_TEF=_TFD->f2;}{void**tptr=_TEF;_TDC=tptr;_TDD=(unsigned)_TDC;
# 2550
if(!_TDD)goto _TL18B;_TDE=tptr;_TDF=*_TDE;_TE0=(unsigned)_TDF;if(!_TE0)goto _TL18B;_TE1=f;_TE2=env;_TE3=tptr;_TE4=*_TE3;_TE5=seen;
Cyc_Absyn_i_visit_type(_TE1,_TE2,_TE4,_TE5);goto _TL18C;_TL18B: _TL18C: goto _LL0;}case 12: _TE6=t;{struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_TFD=(struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_TE6;_TEE=_TFD->f1;_TED=_TFD->f2;_TEC=_TFD->f3;}{struct Cyc_Absyn_Vardecl*vd=_TEE;struct Cyc_Absyn_Exp*e=_TED;struct Cyc_AssnDef_ExistAssnFn*aopt=_TEC;_TE7=f;_TE8=env;_TE9=vd;_TEA=_TE9->type;_TEB=seen;
# 2554
Cyc_Absyn_i_visit_type(_TE7,_TE8,_TEA,_TEB);goto _LL0;}case 9: goto _LL1A;default: _LL1A: goto _LL0;}_LL0:;}}
# 2562
int Cyc_Absyn_cmp_ptr(void*a,void*b){void*_T0;unsigned _T1;void*_T2;unsigned _T3;unsigned _T4;int _T5;_T0=a;_T1=(unsigned)_T0;_T2=b;_T3=(unsigned)_T2;_T4=_T1 - _T3;_T5=(int)_T4;
# 2565
return _T5;}
# 2568
int Cyc_Absyn_hash_ptr(void*a){void*_T0;unsigned _T1;int _T2;_T0=a;_T1=(unsigned)_T0;_T2=(int)_T1;
# 2571
return _T2;}
# 2574
void Cyc_Absyn_visit_type(int(*f)(void*,void*),void*env,void*t){struct _RegionHandle*_T0;int(*_T1)(void*,void*);void*_T2;void*_T3;struct Cyc_Hashtable_Table*_T4;struct _RegionHandle _T5=_new_region(0U,"r");struct _RegionHandle*r=& _T5;_push_region(r);_T0=r;{
# 2578
struct Cyc_Hashtable_Table*seen=Cyc_Hashtable_rcreate(_T0,20,Cyc_Absyn_cmp_ptr,Cyc_Absyn_hash_ptr);_T1=f;_T2=env;_T3=t;_T4=seen;
Cyc_Absyn_i_visit_type(_T1,_T2,_T3,_T4);}_pop_region();}
# 2589 "absyn.cyc"
static int Cyc_Absyn_no_side_effects_f1(int*env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;int*_T3;_T0=e;{
# 2592
void*_T4=_T0->r;_T1=(int*)_T4;_T2=*_T1;switch(_T2){case 10: goto _LL4;case 4: _LL4: goto _LL6;case 34: _LL6: goto _LL8;case 39: _LL8: goto _LLA;case 36: _LLA: goto _LLC;case 5: _LLC: _T3=env;
# 2600
*_T3=0;
return 0;case 18:
# 2603
 return 0;default:
# 2605
 return 1;};}}
# 2609
static int Cyc_Absyn_no_side_effects_f2(int*env,struct Cyc_Absyn_Stmt*s){struct Cyc_Warn_String_Warn_Warg_struct _T0;int(*_T1)(struct _fat_ptr);void*(*_T2)(struct _fat_ptr);struct _fat_ptr _T3;{struct Cyc_Warn_String_Warn_Warg_struct _T4;_T4.tag=0;
# 2612
_T4.f1=_tag_fat("Absyn::no_side_effects looking at a statement",sizeof(char),46U);_T0=_T4;}{struct Cyc_Warn_String_Warn_Warg_struct _T4=_T0;void*_T5[1];_T5[0]=& _T4;_T2=Cyc_Warn_impos2;{int(*_T6)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T2;_T1=_T6;}_T3=_tag_fat(_T5,sizeof(void*),1);_T1(_T3);}}
# 2615
int Cyc_Absyn_no_side_effects_exp(struct Cyc_Absyn_Exp*e){void(*_T0)(int(*)(int*,struct Cyc_Absyn_Exp*),int(*)(int*,struct Cyc_Absyn_Stmt*),int*,struct Cyc_Absyn_Exp*);int*_T1;struct Cyc_Absyn_Exp*_T2;int _T3;
# 2618
int ans=1;{
void(*_T4)(int(*)(int*,struct Cyc_Absyn_Exp*),int(*)(int*,struct Cyc_Absyn_Stmt*),int*,struct Cyc_Absyn_Exp*)=(void(*)(int(*)(int*,struct Cyc_Absyn_Exp*),int(*)(int*,struct Cyc_Absyn_Stmt*),int*,struct Cyc_Absyn_Exp*))Cyc_Absyn_visit_exp;_T0=_T4;}_T1=& ans;_T2=e;_T0(Cyc_Absyn_no_side_effects_f1,Cyc_Absyn_no_side_effects_f2,_T1,_T2);_T3=ans;
return _T3;}struct Cyc_Absyn_VarMapAppearEnv{struct _tuple0*var;int result;};
# 2636
static int Cyc_Absyn_var_may_appear_f1(struct Cyc_Absyn_VarMapAppearEnv*env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;void*_T3;struct _tuple0*_T4;struct Cyc_Absyn_VarMapAppearEnv*_T5;struct _tuple0*_T6;int _T7;struct Cyc_Absyn_VarMapAppearEnv*_T8;struct Cyc_Absyn_VarMapAppearEnv*_T9;struct Cyc_Absyn_Vardecl*_TA;struct _tuple0*_TB;struct Cyc_Absyn_VarMapAppearEnv*_TC;struct _tuple0*_TD;int _TE;int _TF;_T0=e;{
# 2639
void*_T10=_T0->r;struct Cyc_Absyn_Vardecl*_T11;void*_T12;_T1=(int*)_T10;_T2=*_T1;switch(_T2){case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T10;_T3=_T13->f1;_T12=(void*)_T3;}{void*b=_T12;_T4=
# 2642
Cyc_Absyn_binding2qvar(b);_T5=env;_T6=_T5->var;_T7=Cyc_Absyn_qvar_cmp(_T4,_T6);if(_T7!=0)goto _TL18F;_T8=env;
_T8->result=1;goto _TL190;_TL18F: _TL190:
 return 0;}case 39: goto _LL6;case 36: _LL6: _T9=env;
# 2648
_T9->result=1;
return 0;case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T10;_T11=_T13->f1;}{struct Cyc_Absyn_Vardecl*vd=_T11;_TA=vd;_TB=_TA->name;_TC=env;_TD=_TC->var;_TE=
# 2651
Cyc_Absyn_qvar_cmp(_TB,_TD);_TF=_TE!=0;return _TF;}default:
# 2653
 return 1;};}}
# 2657
static int Cyc_Absyn_var_may_appear_f2(struct Cyc_Absyn_VarMapAppearEnv*env,struct Cyc_Absyn_Stmt*e){struct Cyc_Warn_String_Warn_Warg_struct _T0;int(*_T1)(struct _fat_ptr);void*(*_T2)(struct _fat_ptr);struct _fat_ptr _T3;{struct Cyc_Warn_String_Warn_Warg_struct _T4;_T4.tag=0;
# 2660
_T4.f1=_tag_fat("Absyn::no_side_effects looking at a statement",sizeof(char),46U);_T0=_T4;}{struct Cyc_Warn_String_Warn_Warg_struct _T4=_T0;void*_T5[1];_T5[0]=& _T4;_T2=Cyc_Warn_impos2;{int(*_T6)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T2;_T1=_T6;}_T3=_tag_fat(_T5,sizeof(void*),1);_T1(_T3);}}
# 2663
int Cyc_Absyn_var_may_appear_exp(struct _tuple0*v,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_VarMapAppearEnv _T0;void(*_T1)(int(*)(struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Exp*);struct Cyc_Absyn_VarMapAppearEnv*_T2;struct Cyc_Absyn_VarMapAppearEnv*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_VarMapAppearEnv _T5;int _T6;{struct Cyc_Absyn_VarMapAppearEnv _T7;
# 2666
_T7.var=v;_T7.result=0;_T0=_T7;}{struct Cyc_Absyn_VarMapAppearEnv env=_T0;{
void(*_T7)(int(*)(struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Exp*)=(void(*)(int(*)(struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Absyn_VarMapAppearEnv*,struct Cyc_Absyn_Exp*))Cyc_Absyn_visit_exp;_T1=_T7;}_T2=& env;_T3=(struct Cyc_Absyn_VarMapAppearEnv*)_T2;_T4=e;_T1(Cyc_Absyn_var_may_appear_f1,Cyc_Absyn_var_may_appear_f2,_T3,_T4);_T5=env;_T6=_T5.result;
return _T6;}}struct Cyc_Absyn_NestedStmtEnv{void(*f)(void*,struct Cyc_Absyn_Stmt*);void*env;int szeof;};
# 2683
static int Cyc_Absyn_do_nested_stmt_f1(struct Cyc_Absyn_NestedStmtEnv*env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_NestedStmtEnv*_T3;int _T4;_T0=e;{
# 2686
void*_T5=_T0->r;_T1=(int*)_T5;_T2=*_T1;if(_T2!=18)goto _TL191;_T3=env;_T4=_T3->szeof;
# 2689
return _T4;_TL191:
# 2691
 return 1;;}}
# 2695
static int Cyc_Absyn_do_nested_stmt_f2(struct Cyc_Absyn_NestedStmtEnv*env,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_NestedStmtEnv*_T0;void(*_T1)(void*,struct Cyc_Absyn_Stmt*);struct Cyc_Absyn_NestedStmtEnv*_T2;void*_T3;struct Cyc_Absyn_Stmt*_T4;_T0=env;_T1=_T0->f;_T2=env;_T3=_T2->env;_T4=s;
# 2699
_T1(_T3,_T4);
return 0;}
# 2703
void Cyc_Absyn_do_nested_statement(struct Cyc_Absyn_Exp*e,void*env,void(*f)(void*,struct Cyc_Absyn_Stmt*),int szeof){struct Cyc_Absyn_NestedStmtEnv _T0;void(*_T1)(int(*)(struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Exp*);struct Cyc_Absyn_NestedStmtEnv*_T2;struct Cyc_Absyn_NestedStmtEnv*_T3;struct Cyc_Absyn_Exp*_T4;{struct Cyc_Absyn_NestedStmtEnv _T5;
# 2706
_T5.f=f;_T5.env=env;_T5.szeof=szeof;_T0=_T5;}{struct Cyc_Absyn_NestedStmtEnv nested_env=_T0;{
void(*_T5)(int(*)(struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Exp*)=(void(*)(int(*)(struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Absyn_NestedStmtEnv*,struct Cyc_Absyn_Exp*))Cyc_Absyn_visit_exp;_T1=_T5;}_T2=& nested_env;_T3=(struct Cyc_Absyn_NestedStmtEnv*)_T2;_T4=e;_T1(Cyc_Absyn_do_nested_stmt_f1,Cyc_Absyn_do_nested_stmt_f2,_T3,_T4);}}
# 2715
struct Cyc_Absyn_Porton_d_Absyn_Raw_decl_struct Cyc_Absyn_Porton_d_val={13};
struct Cyc_Absyn_Portoff_d_Absyn_Raw_decl_struct Cyc_Absyn_Portoff_d_val={14};
struct Cyc_Absyn_Tempeston_d_Absyn_Raw_decl_struct Cyc_Absyn_Tempeston_d_val={15};
struct Cyc_Absyn_Tempestoff_d_Absyn_Raw_decl_struct Cyc_Absyn_Tempestoff_d_val={16};
