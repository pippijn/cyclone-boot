#include <cyc_include.h>
struct Cyc_Core_Opt{void*v;};struct _tuple0{void*f0;void*f1;};
# 118 "../../library/std/core.h"
void*Cyc_Core_snd(struct _tuple0*);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 61 "../../library/std/list.h"
extern int Cyc_List_length(struct Cyc_List_List*);
# 76
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);
# 178
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);
# 184
extern struct Cyc_List_List*Cyc_List_append(struct Cyc_List_List*,struct Cyc_List_List*);
# 195
extern struct Cyc_List_List*Cyc_List_imp_append(struct Cyc_List_List*,struct Cyc_List_List*);struct Cyc___cycFILE;
# 51 "../../library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stdout;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 73
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 104
extern int Cyc_fputc(int,struct Cyc___cycFILE*);
# 278 "../../library/std/cycboot.h"
extern int Cyc_file_string_write(struct Cyc___cycFILE*,struct _fat_ptr,int,int);
# 38 "../../library/std/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 50 "../../library/std/string.h"
extern int Cyc_strptrcmp(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};
# 62 "../../library/std/dict.h"
extern struct Cyc_Dict_Dict Cyc_Dict_empty(int(*)(void*,void*));
# 83
extern int Cyc_Dict_member(struct Cyc_Dict_Dict,void*);
# 87
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void*,void*);
# 101
extern struct Cyc_Dict_Dict Cyc_Dict_singleton(int(*)(void*,void*),void*,void*);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple1{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
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
enum Cyc_Absyn_KindQual{Cyc_Absyn_AnyKind =0U,Cyc_Absyn_MemKind =1U,Cyc_Absyn_BoxKind =2U,Cyc_Absyn_EffKind =3U,Cyc_Absyn_IntKind =4U,Cyc_Absyn_BoolKind =5U,Cyc_Absyn_PtrBndKind =6U,Cyc_Absyn_AqualKind =7U};struct Cyc_Absyn_Kind{enum Cyc_Absyn_KindQual kind;enum Cyc_Absyn_AliasHint aliashint;};struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct{int tag;struct Cyc_Absyn_Kind*f1;};struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_Absyn_Kind*f2;};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;int inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;int c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_UnknownDatatypeInfo{struct _tuple1*name;int is_extensible;};struct _union_DatatypeInfo_UnknownDatatype{int tag;struct Cyc_Absyn_UnknownDatatypeInfo val;};struct _union_DatatypeInfo_KnownDatatype{int tag;struct Cyc_Absyn_Datatypedecl**val;};union Cyc_Absyn_DatatypeInfo{struct _union_DatatypeInfo_UnknownDatatype UnknownDatatype;struct _union_DatatypeInfo_KnownDatatype KnownDatatype;};struct Cyc_Absyn_UnknownDatatypeFieldInfo{struct _tuple1*datatype_name;struct _tuple1*field_name;int is_extensible;};struct _union_DatatypeFieldInfo_UnknownDatatypefield{int tag;struct Cyc_Absyn_UnknownDatatypeFieldInfo val;};struct _tuple2{struct Cyc_Absyn_Datatypedecl*f0;struct Cyc_Absyn_Datatypefield*f1;};struct _union_DatatypeFieldInfo_KnownDatatypefield{int tag;struct _tuple2 val;};union Cyc_Absyn_DatatypeFieldInfo{struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;};struct _tuple3{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;struct Cyc_Core_Opt*f2;};struct _union_AggrInfo_UnknownAggr{int tag;struct _tuple3 val;};struct _union_AggrInfo_KnownAggr{int tag;struct Cyc_Absyn_Aggrdecl**val;};union Cyc_Absyn_AggrInfo{struct _union_AggrInfo_UnknownAggr UnknownAggr;struct _union_AggrInfo_KnownAggr KnownAggr;};struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_TypeDecl{void*r;unsigned loc;};struct Cyc_Absyn_IntCon_Absyn_TyCon_struct{int tag;enum Cyc_Absyn_Sign f1;enum Cyc_Absyn_Size_of f2;};struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct{int tag;int f1;};struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct{int tag;enum Cyc_Absyn_AliasQualVal f1;};struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct{int tag;struct _tuple1*f1;struct Cyc_Absyn_Enumdecl*f2;};struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct{int tag;struct _fat_ptr f1;struct Cyc_Absyn_Kind*f2;};struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeInfo f1;};struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeFieldInfo f1;};struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_AggrInfo f1;};struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct{int tag;void*f1;};struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Evar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;struct Cyc_Core_Opt*f4;};struct Cyc_Absyn_VarType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Tvar*f1;};struct Cyc_Absyn_Cvar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;void*f4;const char*f5;const char*f6;int f7;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct{int tag;enum Cyc_Absyn_AggrKind f1;int f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_TypedefType_Absyn_Type_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_Typedefdecl*f3;void*f4;};struct Cyc_Absyn_ValueofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct{int tag;struct Cyc_Absyn_TypeDecl*f1;void**f2;};struct Cyc_Absyn_TypeofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_SubsetType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_AssnDef_ExistAssnFn*f3;};struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct{int tag;};struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct{int tag;};struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct{int tag;};struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct{int tag;};struct Cyc_Absyn_NoTypes_Absyn_Funcparams_struct{int tag;struct Cyc_List_List*f1;unsigned f2;};struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct{int tag;struct Cyc_List_List*f1;int f2;struct Cyc_Absyn_VarargInfo*f3;void*f4;struct Cyc_List_List*f5;struct Cyc_List_List*f6;struct Cyc_Absyn_Exp*f7;struct Cyc_Absyn_Exp*f8;struct Cyc_Absyn_Exp*f9;struct Cyc_Absyn_Exp*f10;};struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct{int tag;void*f1;unsigned f2;};struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;unsigned f3;};struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct{int tag;struct Cyc_Absyn_PtrAtts f1;struct Cyc_Absyn_Tqual f2;};struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct{int tag;void*f1;};struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct{int tag;struct Cyc_List_List*f1;unsigned f2;int f3;};struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct{int tag;unsigned f1;struct Cyc_List_List*f2;};struct _union_Cnst_Null_c{int tag;int val;};struct _tuple4{enum Cyc_Absyn_Sign f0;char f1;};struct _union_Cnst_Char_c{int tag;struct _tuple4 val;};struct _union_Cnst_Wchar_c{int tag;struct _fat_ptr val;};struct _tuple5{enum Cyc_Absyn_Sign f0;short f1;};struct _union_Cnst_Short_c{int tag;struct _tuple5 val;};struct _tuple6{enum Cyc_Absyn_Sign f0;int f1;};struct _union_Cnst_Int_c{int tag;struct _tuple6 val;};struct _tuple7{enum Cyc_Absyn_Sign f0;long long f1;};struct _union_Cnst_LongLong_c{int tag;struct _tuple7 val;};struct _tuple8{struct _fat_ptr f0;int f1;};struct _union_Cnst_Float_c{int tag;struct _tuple8 val;};struct _union_Cnst_String_c{int tag;struct _fat_ptr val;};struct _union_Cnst_Wstring_c{int tag;struct _fat_ptr val;};union Cyc_Absyn_Cnst{struct _union_Cnst_Null_c Null_c;struct _union_Cnst_Char_c Char_c;struct _union_Cnst_Wchar_c Wchar_c;struct _union_Cnst_Short_c Short_c;struct _union_Cnst_Int_c Int_c;struct _union_Cnst_LongLong_c LongLong_c;struct _union_Cnst_Float_c Float_c;struct _union_Cnst_String_c String_c;struct _union_Cnst_Wstring_c Wstring_c;};
# 624 "absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};
# 632
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct{int tag;struct _fat_ptr*f1;};
# 657
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_ArrayElement_Absyn_Designator_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_FieldName_Absyn_Designator_struct{int tag;struct _fat_ptr*f1;};
# 674
enum Cyc_Absyn_MallocKind{Cyc_Absyn_Malloc =0U,Cyc_Absyn_Calloc =1U,Cyc_Absyn_Vmalloc =2U};struct Cyc_Absyn_MallocInfo{enum Cyc_Absyn_MallocKind mknd;struct Cyc_Absyn_Exp*rgn;struct Cyc_Absyn_Exp*aqual;void**elt_type;struct Cyc_Absyn_Exp*num_elts;int fat_result;int inline_call;};struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct{int tag;union Cyc_Absyn_Cnst f1;};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct{int tag;struct _fat_ptr f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;int f4;};struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;int f2;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;int f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;int f3;int f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;int f3;int f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct _tuple9{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct{int tag;struct _tuple9*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;int f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;int f3;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct{int tag;void*f1;int f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Datatypedecl*f2;struct Cyc_Absyn_Datatypefield*f3;};struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_MallocInfo f1;};struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;};struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct{int tag;int f1;struct _fat_ptr f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;struct Cyc_List_List*f5;};struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;int f2;int f3;};struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Stmt*f2;struct Cyc_Absyn_Stmt*f3;};struct _tuple10{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct{int tag;struct _tuple10 f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;};struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _tuple10 f2;struct _tuple10 f3;struct Cyc_Absyn_Stmt*f4;};struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Switch_clause**f2;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct _tuple10 f2;};struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct{int tag;};struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Pat*f2;};struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;};struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Pat*f2;};struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;};struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Pat*f1;};struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct{int tag;void*f1;int f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;int f5;};struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;struct Cyc_Absyn_Datatypefield*f2;struct Cyc_List_List*f3;int f4;};struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct{int tag;enum Cyc_Absyn_Sign f1;int f2;};struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct{int tag;char f1;};struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct{int tag;struct _fat_ptr f1;int f2;};struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct{int tag;void*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Absyn_UnknownId_p_Absyn_Raw_pat_struct{int tag;struct _tuple1*f1;};struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;int f3;};struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Exp*f1;};
# 876 "absyn.h"
extern struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct Cyc_Absyn_Wild_p_val;struct Cyc_Absyn_Pat{void*r;void*topt;unsigned loc;};struct Cyc_Absyn_Switch_clause{struct Cyc_Absyn_Pat*pattern;struct Cyc_Core_Opt*pat_vars;struct Cyc_Absyn_Exp*where_clause;struct Cyc_Absyn_Stmt*body;unsigned loc;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;int escapes;int is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;int is_inline;struct _tuple1*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;int escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;int tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;int expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple1*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;int is_extensible;};struct Cyc_Absyn_Enumfield{struct _tuple1*name;struct Cyc_Absyn_Exp*tag;unsigned loc;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Typedefdecl{struct _tuple1*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;int extern_c;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Pat*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;void*f4;};struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Typedefdecl*f1;};struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct{int tag;struct _fat_ptr*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct _tuple11{unsigned f0;struct Cyc_List_List*f1;};struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct _tuple11*f4;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1091
int Cyc_Absyn_qvar_cmp(struct _tuple1*,struct _tuple1*);
# 1107
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned);
# 1113
void*Cyc_Absyn_compress(void*);
# 1117
int Cyc_Absyn_type2bool(int,void*);
# 1126
void*Cyc_Absyn_new_evar(struct Cyc_Core_Opt*,struct Cyc_Core_Opt*);
# 1278
struct Cyc_Absyn_Exp*Cyc_Absyn_times_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1306
struct Cyc_Absyn_Exp*Cyc_Absyn_sizeoftype_exp(void*,unsigned);struct _tuple12{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;};
# 1429
struct _tuple12 Cyc_Absyn_aggr_kinded_name(union Cyc_Absyn_AggrInfo);
# 1437
struct _tuple1*Cyc_Absyn_binding2qvar(void*);struct Cyc_Absynpp_Params{int expand_typedefs;int qvar_to_Cids;int add_cyc_prefix;int decls_first;int rewrite_temp_tvars;int print_all_tvars;int print_all_kinds;int print_all_effects;int print_using_stmts;int print_externC_stmts;int print_full_evars;int print_zeroterm;int generate_line_directives;int use_curr_namespace;struct Cyc_List_List*curr_namespace;int gen_clean_cyclone;};
# 55 "absynpp.h"
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params*);
# 67
struct _fat_ptr Cyc_Absynpp_longlong2string(unsigned long long);
# 70
struct _fat_ptr Cyc_Absynpp_kind2string(struct Cyc_Absyn_Kind*);
struct _fat_ptr Cyc_Absynpp_attribute2string(void*);
# 87
extern struct _fat_ptr*Cyc_Absynpp_cyc_stringptr;
int Cyc_Absynpp_exp_prec(struct Cyc_Absyn_Exp*);
struct _fat_ptr Cyc_Absynpp_char_escape(char);
struct _fat_ptr Cyc_Absynpp_string_escape(struct _fat_ptr);
struct _fat_ptr Cyc_Absynpp_prim2str(enum Cyc_Absyn_Primop);
int Cyc_Absynpp_is_declaration(struct Cyc_Absyn_Stmt*);struct _tuple13{struct Cyc_Absyn_Tqual f0;void*f1;struct Cyc_List_List*f2;};
struct _tuple13 Cyc_Absynpp_to_tms(struct _RegionHandle*,struct Cyc_Absyn_Tqual,void*);
# 25 "attributes.h"
extern struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct Cyc_Atts_Stdcall_att_val;
extern struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct Cyc_Atts_Cdecl_att_val;
extern struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct Cyc_Atts_Fastcall_att_val;
# 33
extern struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct Cyc_Atts_Unused_att_val;struct _tuple14{unsigned f0;int f1;};
# 28 "evexp.h"
extern struct _tuple14 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp*);struct Cyc___cycFILE;
# 100 "../../library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stdout;
# 129 "../../library/std/libc/stdio.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 163
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 167
extern int Cyc_fputc(int,struct Cyc___cycFILE*);
# 379 "../../library/std/libc/stdio.h"
extern int Cyc_file_string_write(struct Cyc___cycFILE*,struct _fat_ptr,int,int);
# 54 "warn.h"
void*Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);struct Cyc_Warn_String_Warn_Warg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Warn_Typ_Warn_Warg_struct{int tag;void*f1;};
# 87
void*Cyc_Warn_impos2(struct _fat_ptr);
# 89 "kinds.h"
void*Cyc_Kinds_compress_kb(void*);
# 99 "flags.h"
enum Cyc_Flags_C_Compilers{Cyc_Flags_Gcc_c =0U,Cyc_Flags_Vc_c =1U};
# 103
extern enum Cyc_Flags_C_Compilers Cyc_Flags_c_compiler;struct _tuple18{struct _fat_ptr f0;unsigned f1;};
# 27 "lex.h"
extern struct _tuple18 Cyc_Lex_xlate_pos(unsigned);
# 37 "absyndump.cyc"
static int Cyc_Absyndump_expand_typedefs;
# 41
static int Cyc_Absyndump_qvar_to_Cids;
# 44
static int Cyc_Absyndump_add_cyc_prefix;
# 47
static int Cyc_Absyndump_generate_line_directives;static char _TmpG0[14U]="__NoCycPrefix";
# 49
static struct _fat_ptr Cyc_Absyndump_nocyc_str={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 14U};
static struct _fat_ptr*Cyc_Absyndump_nocyc_strptr=(struct _fat_ptr*)& Cyc_Absyndump_nocyc_str;
# 52
void Cyc_Absyndump_set_params(struct Cyc_Absynpp_Params*fs){struct Cyc_Absynpp_Params*_T0;struct Cyc_Absynpp_Params*_T1;struct Cyc_Absynpp_Params*_T2;struct Cyc_Absynpp_Params*_T3;_T0=fs;
# 55
Cyc_Absyndump_expand_typedefs=_T0->expand_typedefs;_T1=fs;
Cyc_Absyndump_qvar_to_Cids=_T1->qvar_to_Cids;_T2=fs;
Cyc_Absyndump_add_cyc_prefix=_T2->add_cyc_prefix;_T3=fs;
Cyc_Absyndump_generate_line_directives=_T3->generate_line_directives;
# 70 "absyndump.cyc"
Cyc_Absynpp_set_params(fs);}
# 73
static void Cyc_Absyndump_dumptyp(void*);
static void Cyc_Absyndump_dumpntyp(void*);
static void Cyc_Absyndump_dumpexp(struct Cyc_Absyn_Exp*);
static void Cyc_Absyndump_dumpexp_prec(int,struct Cyc_Absyn_Exp*);
static void Cyc_Absyndump_dumppat(struct Cyc_Absyn_Pat*);
static void Cyc_Absyndump_dumpstmt(struct Cyc_Absyn_Stmt*,int,struct Cyc_Dict_Dict);
static void Cyc_Absyndump_dumpvardecl(struct Cyc_Absyn_Vardecl*,unsigned,int);
static void Cyc_Absyndump_dump_aggrdecl(struct Cyc_Absyn_Aggrdecl*);
static void Cyc_Absyndump_dump_enumdecl(struct Cyc_Absyn_Enumdecl*);
static void Cyc_Absyndump_dump_datatypedecl(struct Cyc_Absyn_Datatypedecl*);
static void Cyc_Absyndump_dumpdecl(struct Cyc_Absyn_Decl*);
static void Cyc_Absyndump_dumptms(int,struct Cyc_List_List*,void(*)(void*),void*);
static void Cyc_Absyndump_dumptqtd(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);
static void Cyc_Absyndump_dumpaggrfields(struct Cyc_List_List*);
static void Cyc_Absyndump_dumpenumfields(struct Cyc_List_List*);
# 95
struct Cyc___cycFILE**Cyc_Absyndump_dump_file=& Cyc_stdout;
static char Cyc_Absyndump_prev_char='x';
# 98
static struct Cyc_Dict_Dict Cyc_Absyndump_mt_set (void){struct Cyc_Dict_Dict(*_T0)(int(*)(struct _tuple1*,struct _tuple1*));struct Cyc_Dict_Dict(*_T1)(int(*)(void*,void*));int(*_T2)(struct _tuple1*,struct _tuple1*);struct Cyc_Dict_Dict*_T3;struct Cyc_Dict_Dict _T4;struct Cyc_Dict_Dict*_T5;struct Cyc_Dict_Dict _T6;
# 101
static struct Cyc_Dict_Dict*mt_set_value=0;
# 103
if(mt_set_value!=0)goto _TL0;_T1=Cyc_Dict_empty;{
# 105
struct Cyc_Dict_Dict(*_T7)(int(*)(struct _tuple1*,struct _tuple1*))=(struct Cyc_Dict_Dict(*)(int(*)(struct _tuple1*,struct _tuple1*)))_T1;_T0=_T7;}_T2=Cyc_Absyn_qvar_cmp;{struct Cyc_Dict_Dict s=_T0(_T2);{struct Cyc_Dict_Dict*_T7=_cycalloc(sizeof(struct Cyc_Dict_Dict));
*_T7=s;_T3=(struct Cyc_Dict_Dict*)_T7;}mt_set_value=_T3;_T4=s;
return _T4;}_TL0: _T5=mt_set_value;_T6=*_T5;
# 110
return _T6;}
# 113
static int Cyc_Absyndump_need_space_before (void){char _T0;int _T1;_T0=Cyc_Absyndump_prev_char;_T1=(int)_T0;switch(_T1){case 123: goto _LL4;case 125: _LL4: goto _LL6;case 40: _LL6: goto _LL8;case 41: _LL8: goto _LLA;case 91: _LLA: goto _LLC;case 93: _LLC: goto _LLE;case 59: _LLE: goto _LL10;case 44: _LL10: goto _LL12;case 61: _LL12: goto _LL14;case 63: _LL14: goto _LL16;case 33: _LL16: goto _LL18;case 32: _LL18: goto _LL1A;case 10: _LL1A: goto _LL1C;case 42: _LL1C:
# 132
 return 0;default:
# 134
 return 1;};}
# 138
static void Cyc_Absyndump_dump(struct _fat_ptr s){int _T0;struct Cyc___cycFILE**_T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;unsigned char*_T4;const char*_T5;const char*_T6;unsigned _T7;int _T8;struct Cyc___cycFILE**_T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;unsigned _TC;int _TD;
# 141
unsigned sz=Cyc_strlen(s);
# 152 "absyndump.cyc"
if(sz < 1U)goto _TL3;_T0=
# 154
Cyc_Absyndump_need_space_before();if(!_T0)goto _TL5;_T1=Cyc_Absyndump_dump_file;_T2=*_T1;
Cyc_fputc(32,_T2);goto _TL6;_TL5: _TL6: _T3=s;_T4=_T3.curr;_T5=(const char*)_T4;_T6=
_check_null(_T5);_T7=sz - 1U;_T8=(int)_T7;Cyc_Absyndump_prev_char=_T6[_T8];_T9=Cyc_Absyndump_dump_file;_TA=*_T9;_TB=s;_TC=sz;_TD=(int)_TC;
Cyc_file_string_write(_TA,_TB,0,_TD);goto _TL4;_TL3: _TL4:;}
# 161
static void Cyc_Absyndump_dump_nospace(struct _fat_ptr s){unsigned long _T0;struct Cyc___cycFILE**_T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;int _T4;struct _fat_ptr _T5;unsigned char*_T6;const char*_T7;const char*_T8;int _T9;_T0=
# 164
Cyc_strlen(s);{int sz=(int)_T0;
# 169
if(sz < 1)goto _TL7;_T1=Cyc_Absyndump_dump_file;_T2=*_T1;_T3=s;_T4=sz;
# 171
Cyc_file_string_write(_T2,_T3,0,_T4);_T5=s;_T6=_T5.curr;_T7=(const char*)_T6;_T8=
_check_null(_T7);_T9=sz - 1;Cyc_Absyndump_prev_char=_T8[_T9];goto _TL8;_TL7: _TL8:;}}
# 176
static void Cyc_Absyndump_dump_char(int c){int _T0;struct Cyc___cycFILE**_T1;struct Cyc___cycFILE*_T2;int _T3;_T0=c;_T1=Cyc_Absyndump_dump_file;_T2=*_T1;
# 183
Cyc_fputc(_T0,_T2);_T3=c;
Cyc_Absyndump_prev_char=(char)_T3;}static char _TmpG1[1U]="";
# 187
static void Cyc_Absyndump_dumploc(unsigned loc){int _T0;struct _fat_ptr _T1;unsigned char*_T2;char*_T3;struct _fat_ptr _T4;unsigned char*_T5;char*_T6;struct _fat_ptr _T7;unsigned char*_T8;char*_T9;struct _fat_ptr _TA;unsigned char*_TB;char*_TC;struct _fat_ptr _TD;unsigned char*_TE;char*_TF;unsigned _T10;unsigned _T11;struct Cyc___cycFILE**_T12;struct Cyc___cycFILE*_T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct _fat_ptr _T16;unsigned char*_T17;char*_T18;struct _fat_ptr _T19;unsigned char*_T1A;char*_T1B;struct Cyc_Int_pa_PrintArg_struct _T1C;unsigned _T1D;int _T1E;struct Cyc___cycFILE**_T1F;struct Cyc___cycFILE*_T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct Cyc_Int_pa_PrintArg_struct _T23;unsigned _T24;int _T25;struct Cyc_String_pa_PrintArg_struct _T26;struct Cyc___cycFILE**_T27;struct Cyc___cycFILE*_T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;
# 190
static struct _fat_ptr last_file={(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 1U};
static unsigned last_line=0U;
static unsigned last_loc=0U;_T0=Cyc_Absyndump_generate_line_directives;
# 194
if(_T0)goto _TL9;else{goto _TLB;}
_TLB: return;_TL9:
 if(loc==0U)goto _TLE;else{goto _TLF;}_TLF: if(loc==last_loc)goto _TLE;else{goto _TLC;}
_TLE: return;_TLC:
 last_loc=loc;{
# 202
struct _tuple18 _T2B=Cyc_Lex_xlate_pos(loc);unsigned _T2C;struct _fat_ptr _T2D;_T2D=_T2B.f0;_T2C=_T2B.f1;{struct _fat_ptr f=_T2D;unsigned d=_T2C;_T1=f;_T2=_T1.curr;_T3=(char*)_T2;
if(_T3==0)goto _TL12;else{goto _TL13;}_TL13: _T4=f;_T5=_T4.curr;_T6=(char*)_T5;_T7=last_file;_T8=_T7.curr;_T9=(char*)_T8;if(_T6==_T9)goto _TL14;else{goto _TL10;}_TL14: if(d==last_line)goto _TL12;else{goto _TL10;}
_TL12: return;_TL10: _TA=f;_TB=_TA.curr;_TC=(char*)_TB;_TD=last_file;_TE=_TD.curr;_TF=(char*)_TE;
if(_TC!=_TF)goto _TL15;_T10=d;_T11=last_line + 1U;if(_T10!=_T11)goto _TL15;_T12=Cyc_Absyndump_dump_file;_T13=*_T12;_T14=
_tag_fat("\n",sizeof(char),2U);_T15=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T13,_T14,_T15);goto _TL16;
_TL15: _T16=f;_T17=_T16.curr;_T18=(char*)_T17;_T19=last_file;_T1A=_T19.curr;_T1B=(char*)_T1A;if(_T18!=_T1B)goto _TL17;{struct Cyc_Int_pa_PrintArg_struct _T2E;_T2E.tag=1;_T1D=d;_T1E=(int)_T1D;
_T2E.f1=(unsigned long)_T1E;_T1C=_T2E;}{struct Cyc_Int_pa_PrintArg_struct _T2E=_T1C;void*_T2F[1];_T2F[0]=& _T2E;_T1F=Cyc_Absyndump_dump_file;_T20=*_T1F;_T21=_tag_fat("\n# %d\n",sizeof(char),7U);_T22=_tag_fat(_T2F,sizeof(void*),1);Cyc_fprintf(_T20,_T21,_T22);}goto _TL18;
# 210
_TL17:{struct Cyc_Int_pa_PrintArg_struct _T2E;_T2E.tag=1;_T24=d;_T25=(int)_T24;_T2E.f1=(unsigned long)_T25;_T23=_T2E;}{struct Cyc_Int_pa_PrintArg_struct _T2E=_T23;{struct Cyc_String_pa_PrintArg_struct _T2F;_T2F.tag=0;_T2F.f1=f;_T26=_T2F;}{struct Cyc_String_pa_PrintArg_struct _T2F=_T26;void*_T30[2];_T30[0]=& _T2E;_T30[1]=& _T2F;_T27=Cyc_Absyndump_dump_file;_T28=*_T27;_T29=_tag_fat("\n# %d %s\n",sizeof(char),10U);_T2A=_tag_fat(_T30,sizeof(void*),2);Cyc_fprintf(_T28,_T29,_T2A);}}_TL18: _TL16:
# 214
 last_file=f;
last_line=d;}}}
# 222
static void Cyc_Absyndump_dump_str(struct _fat_ptr*s){struct _fat_ptr*_T0;struct _fat_ptr _T1;_T0=s;_T1=*_T0;
# 225
Cyc_Absyndump_dump(_T1);}
# 228
static void Cyc_Absyndump_dump_str_nospace(struct _fat_ptr*s){struct _fat_ptr*_T0;struct _fat_ptr _T1;_T0=s;_T1=*_T0;
# 231
Cyc_Absyndump_dump_nospace(_T1);}
# 234
static void Cyc_Absyndump_dump_semi (void){
# 237
Cyc_Absyndump_dump_char(59);}
# 240
static void Cyc_Absyndump_dump_sep(void(*f)(void*),struct Cyc_List_List*l,struct _fat_ptr sep){struct Cyc_List_List*_T0;struct Cyc_List_List*_T1;struct Cyc_List_List*_T2;void*_T3;struct Cyc_List_List*_T4;struct Cyc_List_List*_T5;void*_T6;
# 243
if(l!=0)goto _TL19;
return;_TL19:
 _TL1E: _T0=_check_null(l);_T1=_T0->tl;if(_T1!=0)goto _TL1C;else{goto _TL1D;}
# 247
_TL1C: _T2=l;_T3=_T2->hd;f(_T3);
Cyc_Absyndump_dump_nospace(sep);_T4=l;
# 245
l=_T4->tl;goto _TL1E;_TL1D: _T5=l;_T6=_T5->hd;
# 250
f(_T6);}
# 253
static void Cyc_Absyndump_dump_sep_c(void(*f)(void*,void*),void*env,struct Cyc_List_List*l,struct _fat_ptr sep){struct Cyc_List_List*_T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_List_List*_T3;void*_T4;struct Cyc_List_List*_T5;void*_T6;struct Cyc_List_List*_T7;void*_T8;
# 256
if(l!=0)goto _TL1F;
return;_TL1F:
 _TL24: _T0=_check_null(l);_T1=_T0->tl;if(_T1!=0)goto _TL22;else{goto _TL23;}
# 260
_TL22: _T2=env;_T3=l;_T4=_T3->hd;f(_T2,_T4);
Cyc_Absyndump_dump_nospace(sep);_T5=l;
# 258
l=_T5->tl;goto _TL24;_TL23: _T6=env;_T7=l;_T8=_T7->hd;
# 263
f(_T6,_T8);}
# 267
static void Cyc_Absyndump_group(void(*f)(void*),struct Cyc_List_List*l,struct _fat_ptr start,struct _fat_ptr end,struct _fat_ptr sep){void(*_T0)(void*);struct Cyc_List_List*_T1;struct _fat_ptr _T2;
# 273
Cyc_Absyndump_dump_nospace(start);_T0=f;_T1=l;_T2=sep;
Cyc_Absyndump_dump_sep(_T0,_T1,_T2);
Cyc_Absyndump_dump_nospace(end);}
# 278
static void Cyc_Absyndump_group_c(void(*f)(void*,void*),void*env,struct Cyc_List_List*l,struct _fat_ptr start,struct _fat_ptr end,struct _fat_ptr sep){void(*_T0)(void*,void*);void*_T1;struct Cyc_List_List*_T2;struct _fat_ptr _T3;
# 284
Cyc_Absyndump_dump_nospace(start);_T0=f;_T1=env;_T2=l;_T3=sep;
Cyc_Absyndump_dump_sep_c(_T0,_T1,_T2,_T3);
Cyc_Absyndump_dump_nospace(end);}
# 289
static void Cyc_Absyndump_egroup(void(*f)(void*),struct Cyc_List_List*l,struct _fat_ptr start,struct _fat_ptr end,struct _fat_ptr sep){void(*_T0)(void*);struct Cyc_List_List*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;
# 295
if(l==0)goto _TL25;_T0=f;_T1=l;_T2=start;_T3=end;_T4=sep;
Cyc_Absyndump_group(_T0,_T1,_T2,_T3,_T4);goto _TL26;_TL25: _TL26:;}
# 300
static void Cyc_Absyndump_ignore(void*x){;}
# 302
static void Cyc_Absyndump_dumpqvar(struct _tuple1*v){struct _tuple1*_T0;struct _tuple1 _T1;struct _union_Nmspace_C_n _T2;unsigned _T3;struct _union_Nmspace_Rel_n _T4;struct _union_Nmspace_C_n _T5;struct _union_Nmspace_Abs_n _T6;int _T7;int _T8;int _T9;struct _fat_ptr _TA;int _TB;struct Cyc_List_List*_TC;unsigned _TD;struct Cyc_List_List*_TE;void*_TF;struct _fat_ptr*_T10;struct _fat_ptr*_T11;int _T12;struct Cyc_List_List*_T13;struct _fat_ptr**_T14;struct _fat_ptr*_T15;struct _fat_ptr _T16;void(*_T17)(void(*)(struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr);struct Cyc_List_List*_T18;struct _fat_ptr _T19;struct _tuple1*_T1A;struct _tuple1 _T1B;struct _fat_ptr*_T1C;struct _fat_ptr _T1D;
# 305
struct Cyc_List_List*nsl=0;
struct _fat_ptr**prefix=0;_T0=v;_T1=*_T0;{
# 308
union Cyc_Absyn_Nmspace _T1E=_T1.f0;struct Cyc_List_List*_T1F;_T2=_T1E.C_n;_T3=_T2.tag;switch(_T3){case 4: goto _LL0;case 2: _T4=_T1E.Rel_n;_T1F=_T4.val;{struct Cyc_List_List*x=_T1F;
# 313
nsl=x;goto _LL0;}case 3: _T5=_T1E.C_n;_T1F=_T5.val;{struct Cyc_List_List*x=_T1F;goto _LL0;}default: _T6=_T1E.Abs_n;_T1F=_T6.val;{struct Cyc_List_List*x=_T1F;_T7=Cyc_Absyndump_qvar_to_Cids;
# 318
if(_T7)goto _TL2A;else{goto _TL2B;}_TL2B: _T8=Cyc_Absyndump_add_cyc_prefix;if(_T8)goto _TL2A;else{goto _TL28;}
_TL2A: prefix=& Cyc_Absynpp_cyc_stringptr;goto _TL29;_TL28: _TL29:
 nsl=x;goto _LL0;}}_LL0:;}_T9=
# 324
Cyc_Absyndump_need_space_before();if(!_T9)goto _TL2C;
Cyc_Absyndump_dump_char(32);goto _TL2D;_TL2C: _TL2D: _TB=Cyc_Absyndump_qvar_to_Cids;
# 327
if(!_TB)goto _TL2E;_TA=_tag_fat("_",sizeof(char),2U);goto _TL2F;_TL2E: _TA=_tag_fat("::",sizeof(char),3U);_TL2F: {struct _fat_ptr sep=_TA;_TC=nsl;_TD=(unsigned)_TC;
# 329
if(!_TD)goto _TL30;_TE=nsl;_TF=_TE->hd;_T10=(struct _fat_ptr*)_TF;_T11=Cyc_Absyndump_nocyc_strptr;_T12=Cyc_strptrcmp(_T10,_T11);if(_T12)goto _TL30;else{goto _TL32;}
# 331
_TL32: _T13=nsl;nsl=_T13->tl;
prefix=0;goto _TL31;_TL30: _TL31:
# 335
 if(prefix==0)goto _TL33;_T14=prefix;_T15=*_T14;_T16=*_T15;
# 337
Cyc_Absyndump_dump_nospace(_T16);
Cyc_Absyndump_dump_nospace(sep);goto _TL34;_TL33: _TL34:
# 341
 if(nsl==0)goto _TL35;{
# 343
void(*_T1E)(void(*)(struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr)=(void(*)(void(*)(struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr))Cyc_Absyndump_dump_sep;_T17=_T1E;}_T18=nsl;_T19=sep;_T17(Cyc_Absyndump_dump_str_nospace,_T18,_T19);
Cyc_Absyndump_dump_nospace(sep);goto _TL36;_TL35: _TL36: _T1A=v;_T1B=*_T1A;_T1C=_T1B.f1;_T1D=*_T1C;
# 347
Cyc_Absyndump_dump_nospace(_T1D);}}
# 350
static void Cyc_Absyndump_dumptq(struct Cyc_Absyn_Tqual tq){struct Cyc_Absyn_Tqual _T0;int _T1;struct _fat_ptr _T2;struct Cyc_Absyn_Tqual _T3;int _T4;struct _fat_ptr _T5;struct Cyc_Absyn_Tqual _T6;int _T7;struct _fat_ptr _T8;_T0=tq;_T1=_T0.q_restrict;
# 353
if(!_T1)goto _TL37;_T2=_tag_fat("restrict",sizeof(char),9U);Cyc_Absyndump_dump(_T2);goto _TL38;_TL37: _TL38: _T3=tq;_T4=_T3.q_volatile;
if(!_T4)goto _TL39;_T5=_tag_fat("volatile",sizeof(char),9U);Cyc_Absyndump_dump(_T5);goto _TL3A;_TL39: _TL3A: _T6=tq;_T7=_T6.print_const;
if(!_T7)goto _TL3B;_T8=_tag_fat("const",sizeof(char),6U);Cyc_Absyndump_dump(_T8);goto _TL3C;_TL3B: _TL3C:;}
# 358
static void Cyc_Absyndump_dumpscope(enum Cyc_Absyn_Scope sc){enum Cyc_Absyn_Scope _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;_T0=sc;_T1=(int)_T0;switch(_T1){case Cyc_Absyn_Static: _T2=
# 363
_tag_fat("static",sizeof(char),7U);Cyc_Absyndump_dump(_T2);goto _LL0;case Cyc_Absyn_Public: goto _LL0;case Cyc_Absyn_Extern: _T3=
# 365
_tag_fat("extern",sizeof(char),7U);Cyc_Absyndump_dump(_T3);goto _LL0;case Cyc_Absyn_ExternC: _T4=
_tag_fat("extern \"C\"",sizeof(char),11U);Cyc_Absyndump_dump(_T4);goto _LL0;case Cyc_Absyn_Abstract: _T5=
_tag_fat("abstract",sizeof(char),9U);Cyc_Absyndump_dump(_T5);goto _LL0;case Cyc_Absyn_Register: _T6=
_tag_fat("register",sizeof(char),9U);Cyc_Absyndump_dump(_T6);goto _LL0;default: goto _LL0;}_LL0:;}
# 373
static void Cyc_Absyndump_dumpaggr_kind(enum Cyc_Absyn_AggrKind k){enum Cyc_Absyn_AggrKind _T0;struct _fat_ptr _T1;struct _fat_ptr _T2;_T0=k;if(_T0!=Cyc_Absyn_StructA)goto _TL3E;_T1=
# 378
_tag_fat("struct",sizeof(char),7U);Cyc_Absyndump_dump(_T1);goto _LL0;_TL3E: _T2=
_tag_fat("union",sizeof(char),6U);Cyc_Absyndump_dump(_T2);goto _LL0;_LL0:;}
# 383
static void Cyc_Absyndump_dumpkind(struct Cyc_Absyn_Kind*ka){struct _fat_ptr _T0;_T0=
# 386
Cyc_Absynpp_kind2string(ka);Cyc_Absyndump_dump(_T0);}
# 389
static void Cyc_Absyndump_dumptps(struct Cyc_List_List*ts){void(*_T0)(void*);struct Cyc_List_List*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;_T0=Cyc_Absyndump_dumptyp;_T1=ts;_T2=
# 392
_tag_fat("<",sizeof(char),2U);_T3=_tag_fat(">",sizeof(char),2U);_T4=_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_egroup(_T0,_T1,_T2,_T3,_T4);}
# 395
static void Cyc_Absyndump_dumptvar(struct Cyc_Absyn_Tvar*tv){struct Cyc_Absyn_Tvar*_T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;unsigned char*_T3;const char*_T4;char _T5;int _T6;struct _fat_ptr _T7;struct Cyc_Absyn_Tvar*_T8;void*_T9;int*_TA;unsigned _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct _fat_ptr _TE;_T0=tv;_T1=_T0->name;{
# 398
struct _fat_ptr n=*_T1;_T2=n;_T3=_check_fat_subscript(_T2,sizeof(char),0);_T4=(const char*)_T3;_T5=*_T4;_T6=(int)_T5;
# 400
if(_T6!=35)goto _TL40;_T7=
# 402
_tag_fat("`G",sizeof(char),3U);Cyc_Absyndump_dump(_T7);_T8=tv;_T9=_T8->kind;{
void*_TF=Cyc_Kinds_compress_kb(_T9);struct Cyc_Absyn_Kind*_T10;_TA=(int*)_TF;_TB=*_TA;switch(_TB){case 0:{struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T11=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_TF;_T10=_T11->f1;}{struct Cyc_Absyn_Kind*k=_T10;_T10=k;goto _LL4;}case 2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T11=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_TF;_T10=_T11->f2;}_LL4: {struct Cyc_Absyn_Kind*k=_T10;
# 407
Cyc_Absyndump_dumpkind(k);goto _LL0;}default: _TC=
# 410
_tag_fat("K",sizeof(char),2U);Cyc_Absyndump_dump_nospace(_TC);goto _LL0;}_LL0:;}_TD=n;_TE=
# 413
_fat_ptr_plus(_TD,sizeof(char),1);Cyc_Absyndump_dump_nospace(_TE);goto _TL41;
# 416
_TL40: Cyc_Absyndump_dump(n);_TL41:;}}
# 419
static void Cyc_Absyndump_dumpkindedtvar(struct Cyc_Absyn_Tvar*tv){struct Cyc_Absyn_Tvar*_T0;void*_T1;int*_T2;unsigned _T3;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T4;struct Cyc_Absyn_Kind*_T5;struct Cyc_Absyn_Kind*_T6;enum Cyc_Absyn_KindQual _T7;struct _fat_ptr _T8;
# 422
Cyc_Absyndump_dumptvar(tv);_T0=tv;_T1=_T0->kind;{
void*_T9=Cyc_Kinds_compress_kb(_T1);struct Cyc_Absyn_Kind*_TA;_T2=(int*)_T9;_T3=*_T2;switch(_T3){case 1: goto _LL4;case 2: _LL4: goto _LL6;default: _T4=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T9;_T5=_T4->f1;_T6=(struct Cyc_Absyn_Kind*)_T5;_T7=_T6->kind;if(_T7!=Cyc_Absyn_BoxKind)goto _TL44;_LL6: goto _LL0;_TL44:{struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_TB=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T9;_TA=_TB->f1;}{struct Cyc_Absyn_Kind*k=_TA;_T8=
# 430
_tag_fat("::",sizeof(char),3U);Cyc_Absyndump_dump(_T8);
Cyc_Absyndump_dumpkind(k);goto _LL0;}}_LL0:;}}
# 436
static void Cyc_Absyndump_dumptvars(struct Cyc_List_List*tvs){void(*_T0)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;{
# 439
void(*_T5)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_egroup;_T0=_T5;}_T1=tvs;_T2=_tag_fat("<",sizeof(char),2U);_T3=_tag_fat(">",sizeof(char),2U);_T4=_tag_fat(",",sizeof(char),2U);_T0(Cyc_Absyndump_dumptvar,_T1,_T2,_T3,_T4);}
# 441
static void Cyc_Absyndump_dumpkindedtvars(struct Cyc_List_List*tvs){void(*_T0)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;{
# 444
void(*_T5)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_egroup;_T0=_T5;}_T1=tvs;_T2=_tag_fat("<",sizeof(char),2U);_T3=_tag_fat(">",sizeof(char),2U);_T4=_tag_fat(",",sizeof(char),2U);_T0(Cyc_Absyndump_dumpkindedtvar,_T1,_T2,_T3,_T4);}struct _tuple19{struct Cyc_Absyn_Tqual f0;void*f1;};
# 446
static void Cyc_Absyndump_dumparg(struct _tuple19*pr){void(*_T0)(struct Cyc_Absyn_Tqual,void*,void(*)(int),int);void(*_T1)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct _tuple19*_T2;struct _tuple19 _T3;struct Cyc_Absyn_Tqual _T4;struct _tuple19*_T5;struct _tuple19 _T6;void*_T7;void(*_T8)(int);_T1=Cyc_Absyndump_dumptqtd;{
# 449
void(*_T9)(struct Cyc_Absyn_Tqual,void*,void(*)(int),int)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(int),int))_T1;_T0=_T9;}_T2=pr;_T3=*_T2;_T4=_T3.f0;_T5=pr;_T6=*_T5;_T7=_T6.f1;{void(*_T9)(int)=(void(*)(int))Cyc_Absyndump_ignore;_T8=_T9;}_T0(_T4,_T7,_T8,0);}
# 451
static void Cyc_Absyndump_dumpargs(struct Cyc_List_List*ts){void(*_T0)(void(*)(struct _tuple19*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;{
# 454
void(*_T5)(void(*)(struct _tuple19*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple19*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T0=_T5;}_T1=ts;_T2=_tag_fat("(",sizeof(char),2U);_T3=_tag_fat(")",sizeof(char),2U);_T4=_tag_fat(",",sizeof(char),2U);_T0(Cyc_Absyndump_dumparg,_T1,_T2,_T3,_T4);}
# 457
static void Cyc_Absyndump_dump_callconv(struct Cyc_List_List*atts){struct Cyc_List_List*_T0;int*_T1;unsigned _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct Cyc_List_List*_T6;
# 460
_TL49: if(atts!=0)goto _TL47;else{goto _TL48;}
_TL47: _T0=atts;{void*_T7=_T0->hd;_T1=(int*)_T7;_T2=*_T1;switch(_T2){case 1: _T3=
# 463
_tag_fat("_stdcall",sizeof(char),9U);Cyc_Absyndump_dump(_T3);goto _LL0;case 2: _T4=
_tag_fat("_cdecl",sizeof(char),7U);Cyc_Absyndump_dump(_T4);goto _LL0;case 3: _T5=
_tag_fat("_fastcall",sizeof(char),10U);Cyc_Absyndump_dump(_T5);goto _LL0;default: goto _LL0;}_LL0:;}_T6=atts;
# 460
atts=_T6->tl;goto _TL49;_TL48:;}
# 470
static void Cyc_Absyndump_dump_noncallconv(struct Cyc_List_List*atts){struct Cyc_List_List*_T0;int*_T1;unsigned _T2;struct Cyc_List_List*_T3;int _T4;struct _fat_ptr _T5;struct Cyc_List_List*_T6;int*_T7;unsigned _T8;struct Cyc_List_List*_T9;void*_TA;struct _fat_ptr _TB;struct Cyc_List_List*_TC;
# 474
int hasatt=0;{
# 476
struct Cyc_List_List*atts2=atts;_TL4E: if(atts2!=0)goto _TL4C;else{goto _TL4D;}
_TL4C: _T0=atts;{void*_TD=_T0->hd;_T1=(int*)_TD;_T2=*_T1;switch(_T2){case 1: goto _LL4;case 2: _LL4: goto _LL6;case 3: _LL6: goto _LL0;default:
# 484
 hasatt=1;goto _LL0;}_LL0:;}_T3=atts2;
# 476
atts2=_T3->tl;goto _TL4E;_TL4D:;}_T4=hasatt;
# 488
if(_T4)goto _TL50;else{goto _TL52;}
_TL52: return;_TL50: _T5=
# 491
_tag_fat("__declspec(",sizeof(char),12U);Cyc_Absyndump_dump(_T5);
_TL56: if(atts!=0)goto _TL54;else{goto _TL55;}
_TL54: _T6=atts;{void*_TD=_T6->hd;_T7=(int*)_TD;_T8=*_T7;switch(_T8){case 1: goto _LLD;case 2: _LLD: goto _LLF;case 3: _LLF: goto _LL9;default: _T9=atts;_TA=_T9->hd;_TB=
# 500
Cyc_Absynpp_attribute2string(_TA);Cyc_Absyndump_dump(_TB);goto _LL9;}_LL9:;}_TC=atts;
# 492
atts=_TC->tl;goto _TL56;_TL55:
# 503
 Cyc_Absyndump_dump_char(41);}
# 506
static void Cyc_Absyndump_dumpatts(struct Cyc_List_List*atts){enum Cyc_Flags_C_Compilers _T0;struct _fat_ptr _T1;struct Cyc_List_List*_T2;void*_T3;struct _fat_ptr _T4;struct Cyc_List_List*_T5;struct Cyc_List_List*_T6;struct _fat_ptr _T7;struct Cyc_List_List*_T8;struct _fat_ptr _T9;
# 509
if(atts!=0)goto _TL58;
return;_TL58: _T0=Cyc_Flags_c_compiler;if(_T0!=Cyc_Flags_Gcc_c)goto _TL5A;_T1=
# 514
_tag_fat(" __attribute__((",sizeof(char),17U);Cyc_Absyndump_dump(_T1);
_TL5F: if(atts!=0)goto _TL5D;else{goto _TL5E;}
# 517
_TL5D: _T2=atts;_T3=_T2->hd;_T4=Cyc_Absynpp_attribute2string(_T3);Cyc_Absyndump_dump(_T4);_T5=atts;_T6=_T5->tl;
if(_T6==0)goto _TL60;_T7=
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump(_T7);goto _TL61;_TL60: _TL61: _T8=atts;
# 515
atts=_T8->tl;goto _TL5F;_TL5E: _T9=
# 521
_tag_fat(")) ",sizeof(char),4U);Cyc_Absyndump_dump(_T9);
return;_TL5A:
# 524
 Cyc_Absyndump_dump_noncallconv(atts);
return;;}
# 529
static void Cyc_Absyndump_dumprgn(void*t){
# 532
Cyc_Absyndump_dumpntyp(t);}struct _tuple20{struct Cyc_List_List*f0;struct Cyc_List_List*f1;};
# 535
static struct _tuple20 Cyc_Absyndump_effects_split(void*t){int*_T0;int _T1;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2;void*_T3;int*_T4;int _T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;struct _tuple20 _TA;
# 538
struct Cyc_List_List*rgions=0;
struct Cyc_List_List*effects=0;{
void*_TB=Cyc_Absyn_compress(t);struct Cyc_List_List*_TC;_T0=(int*)_TB;_T1=*_T0;if(_T1!=0)goto _TL62;_T2=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TB;_T3=_T2->f1;_T4=(int*)_T3;_T5=*_T4;if(_T5!=9)goto _TL64;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TD=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TB;_TC=_TD->f2;}{struct Cyc_List_List*ts=_TC;
# 544
_TL69: if(ts!=0)goto _TL67;else{goto _TL68;}
# 546
_TL67: _T6=ts;_T7=_T6->hd;{struct _tuple20 _TD=Cyc_Absyndump_effects_split(_T7);struct Cyc_List_List*_TE;struct Cyc_List_List*_TF;_TF=_TD.f0;_TE=_TD.f1;{struct Cyc_List_List*rs=_TF;struct Cyc_List_List*es=_TE;
rgions=Cyc_List_imp_append(rs,rgions);
effects=Cyc_List_imp_append(es,effects);}}_T8=ts;
# 544
ts=_T8->tl;goto _TL69;_TL68: goto _LL0;}_TL64: goto _LL3;_TL62: _LL3:{struct Cyc_List_List*_TD=_cycalloc(sizeof(struct Cyc_List_List));
# 552
_TD->hd=t;_TD->tl=effects;_T9=(struct Cyc_List_List*)_TD;}effects=_T9;goto _LL0;_LL0:;}{struct _tuple20 _TB;
# 555
_TB.f0=rgions;_TB.f1=effects;_TA=_TB;}return _TA;}
# 558
static void Cyc_Absyndump_dumpeff(void*t){void(*_T0)(void*);struct Cyc_List_List*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct Cyc_List_List*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct _fat_ptr _T8;
# 561
struct _tuple20 _T9=Cyc_Absyndump_effects_split(t);struct Cyc_List_List*_TA;struct Cyc_List_List*_TB;_TB=_T9.f0;_TA=_T9.f1;{struct Cyc_List_List*rgions=_TB;struct Cyc_List_List*effects=_TA;
rgions=Cyc_List_imp_rev(rgions);
effects=Cyc_List_imp_rev(effects);
if(effects==0)goto _TL6A;_T0=Cyc_Absyndump_dumpntyp;_T1=effects;_T2=
# 566
_tag_fat("",sizeof(char),1U);_T3=_tag_fat("",sizeof(char),1U);_T4=_tag_fat("+",sizeof(char),2U);Cyc_Absyndump_group(_T0,_T1,_T2,_T3,_T4);
if(rgions==0)goto _TL6C;
Cyc_Absyndump_dump_char(43);goto _TL6D;_TL6C: _TL6D: goto _TL6B;_TL6A: _TL6B:
# 570
 if(rgions!=0)goto _TL70;else{goto _TL71;}_TL71: if(effects==0)goto _TL70;else{goto _TL6E;}
_TL70: _T5=rgions;_T6=_tag_fat("{",sizeof(char),2U);_T7=_tag_fat("}",sizeof(char),2U);_T8=_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_group(Cyc_Absyndump_dumprgn,_T5,_T6,_T7,_T8);goto _TL6F;_TL6E: _TL6F:;}}
# 574
static void Cyc_Absyndump_dump_aqual_val(enum Cyc_Absyn_AliasQualVal aqv){enum Cyc_Absyn_AliasQualVal _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;_T0=aqv;_T1=(int)_T0;switch(_T1){case Cyc_Absyn_Aliasable_qual: _T2=
# 579
_tag_fat("ALIASABLE",sizeof(char),10U);Cyc_Absyndump_dump(_T2);goto _LL0;case Cyc_Absyn_Unique_qual: _T3=
_tag_fat("UNIQUE",sizeof(char),7U);Cyc_Absyndump_dump(_T3);goto _LL0;case Cyc_Absyn_Refcnt_qual: _T4=
_tag_fat("REFCNT",sizeof(char),7U);Cyc_Absyndump_dump(_T4);goto _LL0;case Cyc_Absyn_Restricted_qual: _T5=
_tag_fat("RESTRICTED",sizeof(char),11U);Cyc_Absyndump_dump(_T5);goto _LL0;default: goto _LL0;}_LL0:;}
# 587
static struct _tuple19*Cyc_Absyndump_aggrfield2arg(struct Cyc_Absyn_Aggrfield*f){struct _tuple19*_T0;struct Cyc_Absyn_Aggrfield*_T1;struct Cyc_Absyn_Aggrfield*_T2;{struct _tuple19*_T3=_cycalloc(sizeof(struct _tuple19));_T1=f;
# 590
_T3->f0=_T1->tq;_T2=f;_T3->f1=_T2->type;_T0=(struct _tuple19*)_T3;}return _T0;}
# 594
static void Cyc_Absyndump_dumpntyp(void*t){void*_T0;int*_T1;unsigned _T2;void*_T3;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T4;void*_T5;int*_T6;int _T7;struct _fat_ptr _T8;void*_T9;void*_TA;void*_TB;int*_TC;unsigned _TD;void*_TE;union Cyc_Absyn_DatatypeInfo _TF;struct _union_DatatypeInfo_UnknownDatatype _T10;unsigned _T11;union Cyc_Absyn_DatatypeInfo _T12;struct _union_DatatypeInfo_UnknownDatatype _T13;struct Cyc_Absyn_UnknownDatatypeInfo _T14;union Cyc_Absyn_DatatypeInfo _T15;struct _union_DatatypeInfo_UnknownDatatype _T16;struct Cyc_Absyn_UnknownDatatypeInfo _T17;union Cyc_Absyn_DatatypeInfo _T18;struct _union_DatatypeInfo_KnownDatatype _T19;struct Cyc_Absyn_Datatypedecl**_T1A;int _T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;void*_T1E;union Cyc_Absyn_DatatypeFieldInfo _T1F;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T20;unsigned _T21;union Cyc_Absyn_DatatypeFieldInfo _T22;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T23;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T24;union Cyc_Absyn_DatatypeFieldInfo _T25;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T26;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T27;union Cyc_Absyn_DatatypeFieldInfo _T28;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T29;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T2A;union Cyc_Absyn_DatatypeFieldInfo _T2B;struct _union_DatatypeFieldInfo_KnownDatatypefield _T2C;struct _tuple2 _T2D;struct Cyc_Absyn_Datatypedecl*_T2E;union Cyc_Absyn_DatatypeFieldInfo _T2F;struct _union_DatatypeFieldInfo_KnownDatatypefield _T30;struct _tuple2 _T31;struct Cyc_Absyn_Datatypefield*_T32;int _T33;struct _fat_ptr _T34;struct _fat_ptr _T35;struct _fat_ptr _T36;struct _fat_ptr _T37;struct Cyc_List_List*_T38;void*_T39;void*_T3A;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T3B;enum Cyc_Absyn_Sign _T3C;int _T3D;void*_T3E;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T3F;enum Cyc_Absyn_Size_of _T40;int _T41;struct _fat_ptr _T42;void*_T43;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T44;enum Cyc_Absyn_Size_of _T45;int _T46;struct _fat_ptr _T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct _fat_ptr _T4A;enum Cyc_Flags_C_Compilers _T4B;struct _fat_ptr _T4C;struct _fat_ptr _T4D;void*_T4E;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T4F;enum Cyc_Absyn_Size_of _T50;int _T51;struct _fat_ptr _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct _fat_ptr _T55;struct _fat_ptr _T56;void*_T57;int _T58;int _T59;struct _fat_ptr _T5A;struct _fat_ptr _T5B;struct _fat_ptr _T5C;void*_T5D;void*_T5E;struct _fat_ptr _T5F;void*_T60;struct _fat_ptr _T61;struct _fat_ptr _T62;void*_T63;struct _fat_ptr _T64;struct Cyc_List_List*_T65;void*_T66;struct _fat_ptr _T67;struct _fat_ptr _T68;struct Cyc_List_List*_T69;void*_T6A;struct _fat_ptr _T6B;struct _fat_ptr _T6C;struct _fat_ptr _T6D;struct _fat_ptr _T6E;struct _fat_ptr _T6F;struct Cyc_List_List*_T70;void*_T71;struct _fat_ptr _T72;void(*_T73)(void*);struct Cyc_List_List*_T74;struct _fat_ptr _T75;struct _fat_ptr _T76;struct _fat_ptr _T77;struct _fat_ptr _T78;struct _fat_ptr _T79;struct _fat_ptr _T7A;struct _fat_ptr _T7B;void*_T7C;struct _fat_ptr _T7D;struct Cyc_List_List*_T7E;void*_T7F;struct _fat_ptr _T80;struct _fat_ptr _T81;struct Cyc_List_List*_T82;void*_T83;struct _fat_ptr _T84;struct Cyc_List_List*_T85;void*_T86;struct Cyc_Warn_String_Warn_Warg_struct _T87;int(*_T88)(struct _fat_ptr);void*(*_T89)(struct _fat_ptr);struct _fat_ptr _T8A;void*_T8B;void*_T8C;struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T8D;void*_T8E;void*_T8F;struct _fat_ptr _T90;struct _fat_ptr _T91;struct Cyc_Core_Opt*_T92;void*_T93;struct Cyc_Absyn_Kind*_T94;struct _fat_ptr _T95;const char*_T96;unsigned _T97;struct _fat_ptr _T98;void*_T99;void*_T9A;unsigned _T9B;struct _fat_ptr _T9C;struct Cyc_Int_pa_PrintArg_struct _T9D;int _T9E;struct _fat_ptr _T9F;struct _fat_ptr _TA0;void*_TA1;void*_TA2;void*_TA3;void*_TA4;struct Cyc_Absyn_Evar_Absyn_Type_struct*_TA5;void*_TA6;void*_TA7;struct _fat_ptr _TA8;struct _fat_ptr _TA9;struct Cyc_Core_Opt*_TAA;void*_TAB;struct Cyc_Absyn_Kind*_TAC;struct _fat_ptr _TAD;struct Cyc_Int_pa_PrintArg_struct _TAE;int _TAF;struct _fat_ptr _TB0;struct _fat_ptr _TB1;void*_TB2;void*_TB3;void*_TB4;void*_TB5;int _TB6;struct Cyc_List_List*(*_TB7)(struct _tuple19*(*)(struct Cyc_Absyn_Aggrfield*),struct Cyc_List_List*);struct Cyc_List_List*(*_TB8)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_TB9;struct Cyc_List_List*_TBA;void*_TBB;struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_TBC;struct Cyc_Absyn_TypeDecl*_TBD;struct Cyc_Absyn_TypeDecl*_TBE;void*_TBF;int*_TC0;unsigned _TC1;void*_TC2;struct Cyc_Absyn_TypeDecl*_TC3;void*_TC4;void*_TC5;struct Cyc_Absyn_TypeDecl*_TC6;void*_TC7;void*_TC8;struct Cyc_Absyn_TypeDecl*_TC9;void*_TCA;void*_TCB;void*_TCC;struct _fat_ptr _TCD;struct _fat_ptr _TCE;void*_TCF;struct _fat_ptr _TD0;struct _fat_ptr _TD1;void*_TD2;struct _fat_ptr _TD3;struct _fat_ptr _TD4;struct _fat_ptr _TD5;struct Cyc_Absyn_Vardecl*_TD6;struct Cyc_Absyn_Exp*_TD7;struct _tuple1*_TD8;struct Cyc_Absyn_Datatypedecl*_TD9;struct Cyc_Absyn_Enumdecl*_TDA;struct Cyc_Absyn_Aggrdecl*_TDB;enum Cyc_Absyn_AggrKind _TDC;const char*_TDD;int _TDE;struct Cyc_Core_Opt*_TDF;struct Cyc_List_List*_TE0;void*_TE1;_T0=t;_T1=(int*)_T0;_T2=*_T1;switch(_T2){case 5: goto _LL4;case 6: _LL4: goto _LL6;case 4: _LL6:
# 603
 return;case 0: _T3=t;_T4=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;_T5=_T4->f1;_T6=(int*)_T5;_T7=*_T6;if(_T7!=0)goto _TL74;_T8=
# 605
_tag_fat("void",sizeof(char),5U);Cyc_Absyndump_dump(_T8);
return;_TL74: _T9=t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T9;_TA=_TE2->f1;_TE1=(void*)_TA;_TE0=_TE2->f2;}{void*c=_TE1;struct Cyc_List_List*ts=_TE0;enum Cyc_Absyn_AliasQualVal _TE2;struct _fat_ptr _TE3;struct Cyc_List_List*_TE4;struct _tuple1*_TE5;union Cyc_Absyn_AggrInfo _TE6;int _TE7;union Cyc_Absyn_DatatypeFieldInfo _TE8;union Cyc_Absyn_DatatypeInfo _TE9;_TB=c;_TC=(int*)_TB;_TD=*_TC;switch(_TD){case 22: _TE=c;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_TEA=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_TE;_TE9=_TEA->f1;}{union Cyc_Absyn_DatatypeInfo tu_info=_TE9;{int _TEA;struct _tuple1*_TEB;_TF=tu_info;_T10=_TF.UnknownDatatype;_T11=_T10.tag;if(_T11!=1)goto _TL77;_T12=tu_info;_T13=_T12.UnknownDatatype;_T14=_T13.val;_TEB=_T14.name;_T15=tu_info;_T16=_T15.UnknownDatatype;_T17=_T16.val;_TEA=_T17.is_extensible;{struct _tuple1*n=_TEB;int is_x=_TEA;_TEB=n;_TEA=is_x;goto _LL78;}_TL77: _T18=tu_info;_T19=_T18.KnownDatatype;_T1A=_T19.val;{struct Cyc_Absyn_Datatypedecl*_TEC=*_T1A;struct Cyc_Absyn_Datatypedecl _TED=*_TEC;_TEB=_TED.name;_TEA=_TED.is_extensible;}_LL78:{struct _tuple1*n=_TEB;int is_x=_TEA;_T1B=is_x;
# 688
if(!_T1B)goto _TL79;_T1C=
_tag_fat("@extensible",sizeof(char),12U);Cyc_Absyndump_dump(_T1C);goto _TL7A;_TL79: _TL7A: _T1D=
_tag_fat("datatype",sizeof(char),9U);Cyc_Absyndump_dump(_T1D);
Cyc_Absyndump_dumpqvar(n);
Cyc_Absyndump_dumptps(ts);goto _LL74;}_LL74:;}
# 695
return;}case 23: _T1E=c;{struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_TEA=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T1E;_TE8=_TEA->f1;}{union Cyc_Absyn_DatatypeFieldInfo tuf_info=_TE8;{int _TEA;struct _tuple1*_TEB;struct _tuple1*_TEC;_T1F=tuf_info;_T20=_T1F.UnknownDatatypefield;_T21=_T20.tag;if(_T21!=1)goto _TL7B;_T22=tuf_info;_T23=_T22.UnknownDatatypefield;_T24=_T23.val;_TEC=_T24.datatype_name;_T25=tuf_info;_T26=_T25.UnknownDatatypefield;_T27=_T26.val;_TEB=_T27.field_name;_T28=tuf_info;_T29=_T28.UnknownDatatypefield;_T2A=_T29.val;_TEA=_T2A.is_extensible;{struct _tuple1*tname=_TEC;struct _tuple1*fname=_TEB;int is_x=_TEA;_TEC=tname;_TEA=is_x;_TEB=fname;goto _LL7D;}_TL7B: _T2B=tuf_info;_T2C=_T2B.KnownDatatypefield;_T2D=_T2C.val;_T2E=_T2D.f0;{struct Cyc_Absyn_Datatypedecl _TED=*_T2E;_TEC=_TED.name;_TEA=_TED.is_extensible;}_T2F=tuf_info;_T30=_T2F.KnownDatatypefield;_T31=_T30.val;_T32=_T31.f1;{struct Cyc_Absyn_Datatypefield _TED=*_T32;_TEB=_TED.name;}_LL7D:{struct _tuple1*tname=_TEC;int is_x=_TEA;struct _tuple1*fname=_TEB;_T33=is_x;
# 703
if(!_T33)goto _TL7D;_T34=
_tag_fat("@extensible ",sizeof(char),13U);Cyc_Absyndump_dump(_T34);goto _TL7E;_TL7D: _TL7E: _T35=
_tag_fat("datatype ",sizeof(char),10U);Cyc_Absyndump_dump(_T35);
Cyc_Absyndump_dumpqvar(tname);_T36=
_tag_fat(".",sizeof(char),2U);Cyc_Absyndump_dump(_T36);
Cyc_Absyndump_dumpqvar(fname);
Cyc_Absyndump_dumptps(ts);goto _LL79;}_LL79:;}
# 712
return;}case 3: _T37=
# 714
_tag_fat("_Complex ",sizeof(char),10U);Cyc_Absyndump_dump(_T37);_T38=
_check_null(ts);_T39=_T38->hd;Cyc_Absyndump_dumpntyp(_T39);
return;case 1: _T3A=c;_T3B=(struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T3A;_T3C=_T3B->f1;_T3D=(int)_T3C;switch(_T3D){case Cyc_Absyn_None: _T3E=c;_T3F=(struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T3E;_T40=_T3F->f2;_T41=(int)_T40;switch(_T41){case Cyc_Absyn_Int_sz: goto _LL2F;case Cyc_Absyn_Long_sz: goto _LL33;case Cyc_Absyn_Char_sz: _T42=
# 721
_tag_fat("char",sizeof(char),5U);Cyc_Absyndump_dump(_T42);return;case Cyc_Absyn_Short_sz: goto _LL3D;case Cyc_Absyn_LongLong_sz: _LL47: goto _LL49;default: goto _LL72;};case Cyc_Absyn_Signed: _T43=c;_T44=(struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T43;_T45=_T44->f2;_T46=(int)_T45;switch(_T46){case Cyc_Absyn_Int_sz: _LL2F: _T47=
# 718
_tag_fat("int",sizeof(char),4U);Cyc_Absyndump_dump(_T47);return;case Cyc_Absyn_Long_sz: _LL33: _T48=
# 720
_tag_fat("long",sizeof(char),5U);Cyc_Absyndump_dump(_T48);return;case Cyc_Absyn_Char_sz: _T49=
# 722
_tag_fat("signed char",sizeof(char),12U);Cyc_Absyndump_dump(_T49);return;case Cyc_Absyn_Short_sz: _LL3D: _T4A=
# 725
_tag_fat("short",sizeof(char),6U);Cyc_Absyndump_dump(_T4A);return;case Cyc_Absyn_LongLong_sz: _LL49: _T4B=Cyc_Flags_c_compiler;if(_T4B!=Cyc_Flags_Gcc_c)goto _TL82;_T4C=
# 734
_tag_fat("long long",sizeof(char),10U);Cyc_Absyndump_dump(_T4C);return;_TL82: _T4D=
_tag_fat("__int64",sizeof(char),8U);Cyc_Absyndump_dump(_T4D);return;;default: goto _LL72;};case Cyc_Absyn_Unsigned: _T4E=c;_T4F=(struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T4E;_T50=_T4F->f2;_T51=(int)_T50;switch(_T51){case Cyc_Absyn_Char_sz: _T52=
# 723
_tag_fat("unsigned char",sizeof(char),14U);Cyc_Absyndump_dump(_T52);return;case Cyc_Absyn_Short_sz: _T53=
# 726
_tag_fat("unsigned short",sizeof(char),15U);Cyc_Absyndump_dump(_T53);return;case Cyc_Absyn_Int_sz: _T54=
_tag_fat("unsigned",sizeof(char),9U);Cyc_Absyndump_dump(_T54);return;case Cyc_Absyn_Long_sz: _T55=
_tag_fat("unsigned long",sizeof(char),14U);Cyc_Absyndump_dump(_T55);return;case Cyc_Absyn_LongLong_sz: _T56=
_tag_fat("unsigned",sizeof(char),9U);Cyc_Absyndump_dump(_T56);goto _LL47;default: goto _LL72;};default: goto _LL72;};case 2: _T57=c;{struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct*_TEA=(struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct*)_T57;_TE7=_TEA->f1;}{int i=_TE7;_T58=i;_T59=(int)_T58;switch(_T59){case 0: _T5A=
# 740
_tag_fat("float",sizeof(char),6U);Cyc_Absyndump_dump(_T5A);return;case 1: _T5B=
_tag_fat("double",sizeof(char),7U);Cyc_Absyndump_dump(_T5B);return;default: _T5C=
_tag_fat("long double",sizeof(char),12U);Cyc_Absyndump_dump(_T5C);return;};}case 24: _T5D=c;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_TEA=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T5D;_TE6=_TEA->f1;}{union Cyc_Absyn_AggrInfo info=_TE6;
# 745
struct _tuple12 _TEA=Cyc_Absyn_aggr_kinded_name(info);struct _tuple1*_TEB;enum Cyc_Absyn_AggrKind _TEC;_TEC=_TEA.f0;_TEB=_TEA.f1;{enum Cyc_Absyn_AggrKind k=_TEC;struct _tuple1*n=_TEB;
Cyc_Absyndump_dumpaggr_kind(k);
Cyc_Absyndump_dumpqvar(n);
Cyc_Absyndump_dumptps(ts);
return;}}case 19: _T5E=c;{struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_TEA=(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_T5E;_TE5=_TEA->f1;}{struct _tuple1*n=_TE5;_T5F=
# 751
_tag_fat("enum",sizeof(char),5U);Cyc_Absyndump_dump(_T5F);
Cyc_Absyndump_dumpqvar(n);
return;}case 20: _T60=c;{struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*_TEA=(struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*)_T60;_TE4=_TEA->f1;}{struct Cyc_List_List*fs=_TE4;_T61=
# 755
_tag_fat("enum{",sizeof(char),6U);Cyc_Absyndump_dump(_T61);
Cyc_Absyndump_dumpenumfields(fs);_T62=
_tag_fat("}",sizeof(char),2U);Cyc_Absyndump_dump(_T62);
return;}case 21: _T63=c;{struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct*_TEA=(struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct*)_T63;_TE3=_TEA->f1;}{struct _fat_ptr t=_TE3;
# 760
Cyc_Absyndump_dump(t);
return;}case 4: _T64=
# 763
_tag_fat("region_t<",sizeof(char),10U);Cyc_Absyndump_dump(_T64);_T65=
_check_null(ts);_T66=_T65->hd;Cyc_Absyndump_dumprgn(_T66);_T67=
_tag_fat(">",sizeof(char),2U);Cyc_Absyndump_dump(_T67);
return;case 5: _T68=
# 768
_tag_fat("tag_t<",sizeof(char),7U);Cyc_Absyndump_dump(_T68);_T69=
_check_null(ts);_T6A=_T69->hd;Cyc_Absyndump_dumptyp(_T6A);_T6B=
_tag_fat(">",sizeof(char),2U);Cyc_Absyndump_dump(_T6B);
return;case 7: _T6C=
_tag_fat("`U",sizeof(char),3U);Cyc_Absyndump_dump(_T6C);return;case 8: _T6D=
_tag_fat("`RC",sizeof(char),4U);Cyc_Absyndump_dump(_T6D);return;case 6: _T6E=
_tag_fat("`H",sizeof(char),3U);Cyc_Absyndump_dump(_T6E);return;case 10: _T6F=
# 783
_tag_fat("regions(",sizeof(char),9U);Cyc_Absyndump_dump(_T6F);_T70=
_check_null(ts);_T71=_T70->hd;Cyc_Absyndump_dumptyp(_T71);_T72=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T72);
return;case 9: _T73=Cyc_Absyndump_dumptyp;_T74=ts;_T75=
# 788
_tag_fat("",sizeof(char),1U);_T76=_tag_fat("",sizeof(char),1U);_T77=_tag_fat("+",sizeof(char),2U);Cyc_Absyndump_group(_T73,_T74,_T75,_T76,_T77);
return;case 11: _T78=
_tag_fat("@true",sizeof(char),6U);Cyc_Absyndump_dump(_T78);return;case 12: _T79=
_tag_fat("@false",sizeof(char),7U);Cyc_Absyndump_dump(_T79);return;case 13: _T7A=
_tag_fat("@thin",sizeof(char),6U);Cyc_Absyndump_dump(_T7A);return;case 14: _T7B=
_tag_fat("@fat",sizeof(char),5U);Cyc_Absyndump_dump(_T7B);return;case 16: _T7C=c;{struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*_TEA=(struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*)_T7C;_TE2=_TEA->f1;}{enum Cyc_Absyn_AliasQualVal v=_TE2;
# 795
Cyc_Absyndump_dump_aqual_val(v);
return;}case 15: _T7D=
# 798
_tag_fat("aquals(",sizeof(char),8U);Cyc_Absyndump_dump(_T7D);_T7E=
_check_null(ts);_T7F=_T7E->hd;Cyc_Absyndump_dumptyp(_T7F);_T80=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T80);
return;case 18: _T81=
# 803
_tag_fat("aqual_t<",sizeof(char),9U);Cyc_Absyndump_dump(_T81);_T82=
_check_null(ts);_T83=_T82->hd;Cyc_Absyndump_dumptyp(_T83);_T84=
_tag_fat(">",sizeof(char),2U);Cyc_Absyndump_dump(_T84);
return;case 17: _T85=
# 808
_check_null(ts);_T86=_T85->hd;Cyc_Absyndump_dumptyp(_T86);
return;default: _LL72:{struct Cyc_Warn_String_Warn_Warg_struct _TEA;_TEA.tag=0;
# 811
_TEA.f1=_tag_fat("bad type constructor",sizeof(char),21U);_T87=_TEA;}{struct Cyc_Warn_String_Warn_Warg_struct _TEA=_T87;void*_TEB[1];_TEB[0]=& _TEA;_T89=Cyc_Warn_impos2;{int(*_TEC)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T89;_T88=_TEC;}_T8A=_tag_fat(_TEB,sizeof(void*),1);_T88(_T8A);}};};case 2: _T8B=t;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T8B;_TE1=_TE2->f1;}{struct Cyc_Absyn_Tvar*tv=_TE1;
# 608
Cyc_Absyndump_dumptvar(tv);
return;}case 3: _T8C=t;_T8D=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T8C;_T8E=_T8D->f2;if(_T8E!=0)goto _TL86;_T8F=t;{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T8F;_TDF=_TE2->f1;_TDE=_TE2->f3;_TDD=_TE2->f5;}{struct Cyc_Core_Opt*k=_TDF;int i=_TDE;const char*name=_TDD;_T90=
# 611
_tag_fat("`C_",sizeof(char),4U);Cyc_Absyndump_dump(_T90);
if(k!=0)goto _TL88;_T91=
_tag_fat("K",sizeof(char),2U);Cyc_Absyndump_dump(_T91);goto _TL89;
# 615
_TL88: _T92=k;_T93=_T92->v;_T94=(struct Cyc_Absyn_Kind*)_T93;Cyc_Absyndump_dumpkind(_T94);_TL89: _T95=
_tag_fat("_",sizeof(char),2U);Cyc_Absyndump_dump(_T95);_T96=name;_T97=(unsigned)_T96;
if(!_T97)goto _TL8A;{const char*_TE2=name;_T99=(void*)_TE2;_T9A=(void*)_TE2;_T9B=_get_zero_arr_size_char(_T9A,1U);_T98=_tag_fat(_T99,sizeof(char),_T9B);}
Cyc_Absyndump_dump(_T98);goto _TL8B;
# 620
_TL8A:{struct Cyc_Int_pa_PrintArg_struct _TE2;_TE2.tag=1;_T9E=i;_TE2.f1=(unsigned long)_T9E;_T9D=_TE2;}{struct Cyc_Int_pa_PrintArg_struct _TE2=_T9D;void*_TE3[1];_TE3[0]=& _TE2;_T9F=_tag_fat("%d",sizeof(char),3U);_TA0=_tag_fat(_TE3,sizeof(void*),1);_T9C=Cyc_aprintf(_T9F,_TA0);}Cyc_Absyndump_dump(_T9C);_TL8B:
 return;}_TL86: _TA1=t;{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_TA1;_TDF=_TE2->f1;_TA2=_TE2->f2;_TE1=(void*)_TA2;_TDE=_TE2->f3;}{struct Cyc_Core_Opt*k=_TDF;void*t=_TE1;int i=_TDE;_TA3=
# 631
_check_null(t);Cyc_Absyndump_dumpntyp(_TA3);
return;}case 1: _TA4=t;_TA5=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_TA4;_TA6=_TA5->f2;if(_TA6!=0)goto _TL8C;_TA7=t;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_TA7;_TDF=_TE2->f1;_TDE=_TE2->f3;}{struct Cyc_Core_Opt*k=_TDF;int i=_TDE;_TA8=
# 623
_tag_fat("`E",sizeof(char),3U);Cyc_Absyndump_dump(_TA8);
if(k!=0)goto _TL8E;_TA9=
_tag_fat("K",sizeof(char),2U);Cyc_Absyndump_dump(_TA9);goto _TL8F;
# 627
_TL8E: _TAA=k;_TAB=_TAA->v;_TAC=(struct Cyc_Absyn_Kind*)_TAB;Cyc_Absyndump_dumpkind(_TAC);_TL8F:{struct Cyc_Int_pa_PrintArg_struct _TE2;_TE2.tag=1;_TAF=i;
_TE2.f1=(unsigned long)_TAF;_TAE=_TE2;}{struct Cyc_Int_pa_PrintArg_struct _TE2=_TAE;void*_TE3[1];_TE3[0]=& _TE2;_TB0=_tag_fat("%d",sizeof(char),3U);_TB1=_tag_fat(_TE3,sizeof(void*),1);_TAD=Cyc_aprintf(_TB0,_TB1);}Cyc_Absyndump_dump(_TAD);
return;}_TL8C: _TB2=t;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_TB2;_TDF=_TE2->f1;_TB3=_TE2->f2;_TE1=(void*)_TB3;_TDE=_TE2->f3;}{struct Cyc_Core_Opt*k=_TDF;void*t=_TE1;int i=_TDE;_TB4=
# 634
_check_null(t);Cyc_Absyndump_dumpntyp(_TB4);
return;}case 7: _TB5=t;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_TB5;_TDC=_TE2->f1;_TDE=_TE2->f2;_TE0=_TE2->f3;}{enum Cyc_Absyn_AggrKind k=_TDC;int is_tuple=_TDE;struct Cyc_List_List*fs=_TE0;_TB6=is_tuple;
# 637
if(!_TB6)goto _TL90;
# 639
Cyc_Absyndump_dump_char(36);_TB8=Cyc_List_map;{
struct Cyc_List_List*(*_TE2)(struct _tuple19*(*)(struct Cyc_Absyn_Aggrfield*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple19*(*)(struct Cyc_Absyn_Aggrfield*),struct Cyc_List_List*))_TB8;_TB7=_TE2;}_TB9=fs;_TBA=_TB7(Cyc_Absyndump_aggrfield2arg,_TB9);Cyc_Absyndump_dumpargs(_TBA);goto _TL91;
# 644
_TL90: Cyc_Absyndump_dumpaggr_kind(k);
Cyc_Absyndump_dump_char(123);
Cyc_Absyndump_dumpaggrfields(fs);
Cyc_Absyndump_dump_char(125);_TL91:
# 649
 return;}case 10: _TBB=t;_TBC=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_TBB;_TBD=_TBC->f1;_TBE=(struct Cyc_Absyn_TypeDecl*)_TBD;_TBF=_TBE->r;_TC0=(int*)_TBF;_TC1=*_TC0;switch(_TC1){case 0: _TC2=t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_TC2;_TC3=_TE2->f1;{struct Cyc_Absyn_TypeDecl _TE3=*_TC3;_TC4=_TE3.r;{struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_TE4=(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*)_TC4;_TDB=_TE4->f1;}}}{struct Cyc_Absyn_Aggrdecl*d=_TDB;
# 651
Cyc_Absyndump_dump_aggrdecl(d);
return;}case 1: _TC5=t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_TC5;_TC6=_TE2->f1;{struct Cyc_Absyn_TypeDecl _TE3=*_TC6;_TC7=_TE3.r;{struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*_TE4=(struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*)_TC7;_TDA=_TE4->f1;}}}{struct Cyc_Absyn_Enumdecl*d=_TDA;
# 654
Cyc_Absyndump_dump_enumdecl(d);
return;}default: _TC8=t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_TC8;_TC9=_TE2->f1;{struct Cyc_Absyn_TypeDecl _TE3=*_TC9;_TCA=_TE3.r;{struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_TE4=(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*)_TCA;_TD9=_TE4->f1;}}}{struct Cyc_Absyn_Datatypedecl*d=_TD9;
# 657
Cyc_Absyndump_dump_datatypedecl(d);
return;}};case 8: _TCB=t;{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_TCB;_TD8=_TE2->f1;_TE0=_TE2->f2;}{struct _tuple1*n=_TD8;struct Cyc_List_List*ts=_TE0;
# 660
Cyc_Absyndump_dumpqvar(n);Cyc_Absyndump_dumptps(ts);
return;}case 9: _TCC=t;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_TCC;_TD7=_TE2->f1;}{struct Cyc_Absyn_Exp*e=_TD7;_TCD=
# 663
_tag_fat("valueof_t(",sizeof(char),11U);Cyc_Absyndump_dump(_TCD);
Cyc_Absyndump_dumpexp(e);_TCE=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_TCE);
return;}case 11: _TCF=t;{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_TCF;_TD7=_TE2->f1;}{struct Cyc_Absyn_Exp*e=_TD7;_TD0=
# 668
_tag_fat("typeof(",sizeof(char),8U);Cyc_Absyndump_dump(_TD0);
Cyc_Absyndump_dumpexp(e);_TD1=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_TD1);
return;}default: _TD2=t;{struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_TE2=(struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_TD2;_TD6=_TE2->f1;_TD7=_TE2->f2;}{struct Cyc_Absyn_Vardecl*vd=_TD6;struct Cyc_Absyn_Exp*e=_TD7;_TD3=
# 673
_tag_fat("@subset(",sizeof(char),9U);Cyc_Absyndump_dump(_TD3);
Cyc_Absyndump_dumpvardecl(vd,0U,0);_TD4=
_tag_fat(" | ",sizeof(char),4U);Cyc_Absyndump_dump(_TD4);
Cyc_Absyndump_dumpexp(e);_TD5=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_TD5);
return;}};}
# 817
static void Cyc_Absyndump_dumpvaropt(struct _fat_ptr*vo){
# 820
if(vo==0)goto _TL93;
Cyc_Absyndump_dump_str(vo);goto _TL94;_TL93: _TL94:;}
# 824
static void Cyc_Absyndump_dumpfunarg(struct _tuple9*t){void(*_T0)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*);void(*_T1)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct _tuple9*_T2;struct _tuple9 _T3;struct Cyc_Absyn_Tqual _T4;struct _tuple9*_T5;struct _tuple9 _T6;void*_T7;struct _tuple9*_T8;struct _tuple9 _T9;struct _fat_ptr*_TA;_T1=Cyc_Absyndump_dumptqtd;{
# 827
void(*_TB)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*))_T1;_T0=_TB;}_T2=t;_T3=*_T2;_T4=_T3.f1;_T5=t;_T6=*_T5;_T7=_T6.f2;_T8=t;_T9=*_T8;_TA=_T9.f0;_T0(_T4,_T7,Cyc_Absyndump_dumpvaropt,_TA);}
# 830
static void Cyc_Absyndump_dump_rgncmp(struct _tuple0*cmp){struct _tuple0*_T0;struct _tuple0 _T1;void*_T2;struct _tuple0*_T3;struct _tuple0 _T4;void*_T5;_T0=cmp;_T1=*_T0;_T2=_T1.f0;
# 833
Cyc_Absyndump_dumpeff(_T2);
Cyc_Absyndump_dump_char(62);_T3=cmp;_T4=*_T3;_T5=_T4.f1;
Cyc_Absyndump_dumprgn(_T5);}
# 838
static void Cyc_Absyndump_dump_rgnpo(struct Cyc_List_List*rgn_po){void(*_T0)(void(*)(struct _tuple0*),struct Cyc_List_List*,struct _fat_ptr);struct Cyc_List_List*_T1;struct _fat_ptr _T2;{
# 841
void(*_T3)(void(*)(struct _tuple0*),struct Cyc_List_List*,struct _fat_ptr)=(void(*)(void(*)(struct _tuple0*),struct Cyc_List_List*,struct _fat_ptr))Cyc_Absyndump_dump_sep;_T0=_T3;}_T1=rgn_po;_T2=_tag_fat(",",sizeof(char),2U);_T0(Cyc_Absyndump_dump_rgncmp,_T1,_T2);}
# 844
static void Cyc_Absyndump_dump_oneeffc(void*fc){void*_T0;int*_T1;unsigned _T2;void*_T3;void*_T4;void*_T5;struct _fat_ptr _T6;void*_T7;void*_T8;void*_T9;void*_TA;void*_TB;struct _fat_ptr _TC;void*_TD;void*_TE;_T0=fc;_T1=(int*)_T0;_T2=*_T1;switch(_T2){case 2: _T3=fc;{struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*_TF=(struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*)_T3;_T4=_TF->f1;_TE=(void*)_T4;_T5=_TF->f2;_TD=(void*)_T5;}{void*e1=_TE;void*e2=_TD;
# 850
Cyc_Absyndump_dumpeff(e1);_T6=
_tag_fat("<=",sizeof(char),3U);Cyc_Absyndump_dump(_T6);
Cyc_Absyndump_dumpeff(e2);goto _LL0;}case 1: _T7=fc;{struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*_TF=(struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*)_T7;_T8=_TF->f1;_TE=(void*)_T8;_T9=_TF->f2;_TD=(void*)_T9;}{void*e1=_TE;void*e2=_TD;
# 855
Cyc_Absyndump_dumpeff(e1);
Cyc_Absyndump_dump_char(124);
Cyc_Absyndump_dumpeff(e2);goto _LL0;}default: _TA=fc;{struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*_TF=(struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*)_TA;_TB=_TF->f1;_TE=(void*)_TB;}{void*e=_TE;_TC=
# 860
_tag_fat("single(",sizeof(char),8U);Cyc_Absyndump_dump(_TC);
Cyc_Absyndump_dumpeff(e);
Cyc_Absyndump_dump_char(41);goto _LL0;}}_LL0:;}
# 867
static void Cyc_Absyndump_dump_effc(struct Cyc_List_List*effc){struct Cyc_List_List*_T0;struct _fat_ptr _T1;_T0=effc;_T1=
# 870
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump_sep(Cyc_Absyndump_dump_oneeffc,_T0,_T1);}
# 873
static void Cyc_Absyndump_dump_qb_elt(struct _tuple0*q){struct _tuple0*_T0;struct _tuple0 _T1;void*_T2;struct _fat_ptr _T3;struct _tuple0*_T4;struct _tuple0 _T5;void*_T6;_T0=q;_T1=*_T0;_T2=_T1.f1;
# 876
Cyc_Absyndump_dumptyp(_T2);_T3=
_tag_fat(">=",sizeof(char),3U);Cyc_Absyndump_dump(_T3);_T4=q;_T5=*_T4;_T6=_T5.f0;
Cyc_Absyndump_dumptyp(_T6);}
# 881
static void Cyc_Absyndump_dump_qualbnd(struct Cyc_List_List*qual_bnd){void(*_T0)(void(*)(struct _tuple0*),struct Cyc_List_List*,struct _fat_ptr);struct Cyc_List_List*_T1;struct _fat_ptr _T2;{
# 884
void(*_T3)(void(*)(struct _tuple0*),struct Cyc_List_List*,struct _fat_ptr)=(void(*)(void(*)(struct _tuple0*),struct Cyc_List_List*,struct _fat_ptr))Cyc_Absyndump_dump_sep;_T0=_T3;}_T1=qual_bnd;_T2=_tag_fat(",",sizeof(char),2U);_T0(Cyc_Absyndump_dump_qb_elt,_T1,_T2);}
# 887
static void Cyc_Absyndump_dumpfunargs(struct Cyc_List_List*args,int c_varargs,struct Cyc_Absyn_VarargInfo*cyc_varargs,void*effopt,struct Cyc_List_List*effc,struct Cyc_List_List*qual_bnd,struct Cyc_Absyn_Exp*chk,struct Cyc_Absyn_Exp*req,struct Cyc_Absyn_Exp*ens,struct Cyc_Absyn_Exp*thrws){int _T0;struct _fat_ptr _T1;void(*_T2)(void(*)(struct _tuple9*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;int _T7;struct _fat_ptr _T8;struct Cyc_Absyn_VarargInfo*_T9;int _TA;struct _fat_ptr _TB;struct _tuple9*_TC;struct Cyc_Absyn_VarargInfo*_TD;struct Cyc_Absyn_VarargInfo*_TE;struct Cyc_Absyn_VarargInfo*_TF;char _T10;char _T11;int _T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct _fat_ptr _T16;
# 900
if(args!=0)goto _TL96;_T0=c_varargs;if(_T0)goto _TL96;else{goto _TL98;}_TL98: if(cyc_varargs!=0)goto _TL96;if(effopt!=0)goto _TL96;if(effc!=0)goto _TL96;_T1=
# 902
_tag_fat("(void)",sizeof(char),7U);Cyc_Absyndump_dump(_T1);goto _TL97;
# 905
_TL96:{void(*_T17)(void(*)(struct _tuple9*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple9*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T2=_T17;}_T3=args;_T4=_tag_fat("(",sizeof(char),2U);_T5=_tag_fat("",sizeof(char),1U);_T6=_tag_fat(",",sizeof(char),2U);_T2(Cyc_Absyndump_dumpfunarg,_T3,_T4,_T5,_T6);_T7=c_varargs;
if(_T7)goto _TL9B;else{goto _TL9C;}_TL9C: if(cyc_varargs!=0)goto _TL9B;else{goto _TL99;}
_TL9B: _T8=_tag_fat(",...",sizeof(char),5U);Cyc_Absyndump_dump(_T8);goto _TL9A;_TL99: _TL9A:
 if(cyc_varargs==0)goto _TL9D;_T9=cyc_varargs;_TA=_T9->inject;
# 910
if(!_TA)goto _TL9F;_TB=
_tag_fat(" inject ",sizeof(char),9U);Cyc_Absyndump_dump(_TB);goto _TLA0;_TL9F: _TLA0:{struct _tuple9*_T17=_cycalloc(sizeof(struct _tuple9));_TD=cyc_varargs;
_T17->f0=_TD->name;_TE=cyc_varargs;_T17->f1=_TE->tq;_TF=cyc_varargs;_T17->f2=_TF->type;_TC=(struct _tuple9*)_T17;}Cyc_Absyndump_dumpfunarg(_TC);goto _TL9E;_TL9D: _TL9E:
# 914
 if(effopt==0)goto _TLA1;
# 916
Cyc_Absyndump_dump_semi();
Cyc_Absyndump_dumpeff(effopt);goto _TLA2;_TLA1: _TLA2:
# 919
 if(effc==0)goto _TLA3;
# 921
Cyc_Absyndump_dump_char(58);
Cyc_Absyndump_dump_effc(effc);goto _TLA4;_TLA3: _TLA4:
# 924
 if(qual_bnd==0)goto _TLA5;
# 926
if(effc!=0)goto _TLA7;_T10=':';goto _TLA8;_TLA7: _T10=',';_TLA8:{char sep=_T10;_T11=sep;_T12=(int)_T11;
Cyc_Absyndump_dump_char(_T12);
Cyc_Absyndump_dump_qualbnd(qual_bnd);}goto _TLA6;_TLA5: _TLA6:
# 930
 Cyc_Absyndump_dump_char(41);_TL97:
# 932
 if(chk==0)goto _TLA9;_T13=
# 934
_tag_fat(" @checks(",sizeof(char),10U);Cyc_Absyndump_dump(_T13);
Cyc_Absyndump_dumpexp(chk);
Cyc_Absyndump_dump_char(41);goto _TLAA;_TLA9: _TLAA:
# 938
 if(req==0)goto _TLAB;_T14=
# 940
_tag_fat(" @requires(",sizeof(char),12U);Cyc_Absyndump_dump(_T14);
Cyc_Absyndump_dumpexp(req);
Cyc_Absyndump_dump_char(41);goto _TLAC;_TLAB: _TLAC:
# 944
 if(ens==0)goto _TLAD;_T15=
# 946
_tag_fat(" @ensures(",sizeof(char),11U);Cyc_Absyndump_dump(_T15);
Cyc_Absyndump_dumpexp(ens);
Cyc_Absyndump_dump_char(41);goto _TLAE;_TLAD: _TLAE:
# 950
 if(thrws==0)goto _TLAF;_T16=
# 952
_tag_fat(" @throws(",sizeof(char),10U);Cyc_Absyndump_dump(_T16);
Cyc_Absyndump_dumpexp(thrws);
Cyc_Absyndump_dump_char(41);goto _TLB0;_TLAF: _TLB0:;}
# 958
static void Cyc_Absyndump_dumptyp(void*t){void(*_T0)(struct Cyc_Absyn_Tqual,void*,void(*)(int),int);void(*_T1)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct Cyc_Absyn_Tqual _T2;void*_T3;void(*_T4)(int);_T1=Cyc_Absyndump_dumptqtd;{
# 961
void(*_T5)(struct Cyc_Absyn_Tqual,void*,void(*)(int),int)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(int),int))_T1;_T0=_T5;}_T2=Cyc_Absyn_empty_tqual(0U);_T3=t;{void(*_T5)(int)=(void(*)(int))Cyc_Absyndump_ignore;_T4=_T5;}_T0(_T2,_T3,_T4,0);}
# 964
static void Cyc_Absyndump_dumpdesignator(void*d){void*_T0;int*_T1;int _T2;void*_T3;struct _fat_ptr _T4;void*_T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;struct _fat_ptr*_T8;struct Cyc_Absyn_Exp*_T9;_T0=d;_T1=(int*)_T0;_T2=*_T1;if(_T2!=0)goto _TLB1;_T3=d;{struct Cyc_Absyn_ArrayElement_Absyn_Designator_struct*_TA=(struct Cyc_Absyn_ArrayElement_Absyn_Designator_struct*)_T3;_T9=_TA->f1;}{struct Cyc_Absyn_Exp*e=_T9;_T4=
# 970
_tag_fat(".[",sizeof(char),3U);Cyc_Absyndump_dump(_T4);
Cyc_Absyndump_dumpexp(e);
Cyc_Absyndump_dump_char(93);goto _LL0;}_TLB1: _T5=d;{struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_TA=(struct Cyc_Absyn_FieldName_Absyn_Designator_struct*)_T5;_T8=_TA->f1;}{struct _fat_ptr*v=_T8;
# 975
Cyc_Absyndump_dump_char(46);_T6=v;_T7=*_T6;
Cyc_Absyndump_dump_nospace(_T7);goto _LL0;}_LL0:;}struct _tuple21{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 981
static void Cyc_Absyndump_dumpde(struct _tuple21*de){struct _tuple21*_T0;struct _tuple21 _T1;struct Cyc_List_List*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _tuple21*_T6;struct _tuple21 _T7;struct Cyc_Absyn_Exp*_T8;_T0=de;_T1=*_T0;_T2=_T1.f0;_T3=
# 984
_tag_fat("",sizeof(char),1U);_T4=_tag_fat("=",sizeof(char),2U);_T5=_tag_fat("=",sizeof(char),2U);Cyc_Absyndump_egroup(Cyc_Absyndump_dumpdesignator,_T2,_T3,_T4,_T5);_T6=de;_T7=*_T6;_T8=_T7.f1;
Cyc_Absyndump_dumpexp(_T8);}
# 988
static void Cyc_Absyndump_dumpoffset_field(void*f){void*_T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;struct _fat_ptr*_T3;_T0=f;{struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct*_T4=(struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct*)_T0;_T3=_T4->f1;}{struct _fat_ptr*n=_T3;_T1=n;_T2=*_T1;
# 994
Cyc_Absyndump_dump_nospace(_T2);
return;};}struct _tuple22{struct _fat_ptr f0;struct Cyc_Absyn_Exp*f1;};
# 999
static void Cyc_Absyndump_dump_asm_iolist(struct Cyc_List_List*iolist){struct Cyc_List_List*_T0;unsigned _T1;struct Cyc_List_List*_T2;void*_T3;struct _fat_ptr _T4;struct Cyc_List_List*_T5;struct Cyc_List_List*_T6;unsigned _T7;
# 1002
_TLB3: _T0=iolist;_T1=(unsigned)_T0;if(_T1)goto _TLB4;else{goto _TLB5;}
# 1004
_TLB4: _T2=iolist;_T3=_T2->hd;{struct _tuple22*_T8=(struct _tuple22*)_T3;struct Cyc_Absyn_Exp*_T9;struct _fat_ptr _TA;{struct _tuple22 _TB=*_T8;_TA=_TB.f0;_T9=_TB.f1;}{struct _fat_ptr constr=_TA;struct Cyc_Absyn_Exp*e1=_T9;
Cyc_Absyndump_dump_char(34);_T4=
Cyc_Absynpp_string_escape(constr);Cyc_Absyndump_dump_nospace(_T4);
Cyc_Absyndump_dump_char(34);
Cyc_Absyndump_dump_char(40);
Cyc_Absyndump_dumpexp(e1);
Cyc_Absyndump_dump_char(41);_T5=iolist;
iolist=_T5->tl;_T6=iolist;_T7=(unsigned)_T6;
if(!_T7)goto _TLB6;
Cyc_Absyndump_dump_char(44);goto _TLB7;_TLB6: _TLB7:;}}goto _TLB3;_TLB5:;}
# 1017
static void Cyc_Absyndump_dumpexps_prec(int inprec,struct Cyc_List_List*es){void(*_T0)(void(*)(int,struct Cyc_Absyn_Exp*),int,struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);void(*_T1)(int,struct Cyc_Absyn_Exp*);int _T2;struct Cyc_List_List*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;{
# 1020
void(*_T7)(void(*)(int,struct Cyc_Absyn_Exp*),int,struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(int,struct Cyc_Absyn_Exp*),int,struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group_c;_T0=_T7;}_T1=Cyc_Absyndump_dumpexp_prec;_T2=inprec;_T3=es;_T4=_tag_fat("",sizeof(char),1U);_T5=_tag_fat("",sizeof(char),1U);_T6=_tag_fat(",",sizeof(char),2U);_T0(_T1,_T2,_T3,_T4,_T5,_T6);}
# 1023
static void Cyc_Absyndump_dumpexp_prec(int inprec,struct Cyc_Absyn_Exp*e){struct _fat_ptr _T0;struct Cyc_Absyn_Exp*_T1;int*_T2;unsigned _T3;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T4;union Cyc_Absyn_Cnst _T5;struct _union_Cnst_String_c _T6;unsigned _T7;union Cyc_Absyn_Cnst _T8;struct _union_Cnst_Char_c _T9;struct _tuple4 _TA;union Cyc_Absyn_Cnst _TB;struct _union_Cnst_Char_c _TC;struct _tuple4 _TD;struct _fat_ptr _TE;union Cyc_Absyn_Cnst _TF;struct _union_Cnst_Wchar_c _T10;struct _fat_ptr _T11;struct Cyc_String_pa_PrintArg_struct _T12;struct _fat_ptr _T13;struct _fat_ptr _T14;union Cyc_Absyn_Cnst _T15;struct _union_Cnst_Short_c _T16;struct _tuple5 _T17;union Cyc_Absyn_Cnst _T18;struct _union_Cnst_Short_c _T19;struct _tuple5 _T1A;struct _fat_ptr _T1B;struct Cyc_Int_pa_PrintArg_struct _T1C;short _T1D;int _T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T21;union Cyc_Absyn_Cnst _T22;struct _union_Cnst_Int_c _T23;struct _tuple6 _T24;enum Cyc_Absyn_Sign _T25;int _T26;union Cyc_Absyn_Cnst _T27;struct _union_Cnst_Int_c _T28;struct _tuple6 _T29;union Cyc_Absyn_Cnst _T2A;struct _union_Cnst_Int_c _T2B;struct _tuple6 _T2C;struct _fat_ptr _T2D;struct Cyc_Int_pa_PrintArg_struct _T2E;int _T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;union Cyc_Absyn_Cnst _T32;struct _union_Cnst_Int_c _T33;struct _tuple6 _T34;struct _fat_ptr _T35;struct Cyc_Int_pa_PrintArg_struct _T36;int _T37;struct _fat_ptr _T38;struct _fat_ptr _T39;union Cyc_Absyn_Cnst _T3A;struct _union_Cnst_LongLong_c _T3B;struct _tuple7 _T3C;union Cyc_Absyn_Cnst _T3D;struct _union_Cnst_LongLong_c _T3E;struct _tuple7 _T3F;long long _T40;unsigned long long _T41;struct _fat_ptr _T42;union Cyc_Absyn_Cnst _T43;struct _union_Cnst_Float_c _T44;struct _tuple8 _T45;struct _fat_ptr _T46;union Cyc_Absyn_Cnst _T47;struct _union_Cnst_String_c _T48;struct _fat_ptr _T49;union Cyc_Absyn_Cnst _T4A;struct _union_Cnst_Wstring_c _T4B;struct _fat_ptr _T4C;void*_T4D;struct _tuple1*_T4E;struct _fat_ptr _T4F;int _T50;enum Cyc_Absyn_Primop _T51;int _T52;struct _fat_ptr _T53;struct Cyc_List_List*_T54;void*_T55;struct Cyc_Absyn_Exp*_T56;struct _fat_ptr _T57;enum Cyc_Absyn_Primop _T58;int _T59;struct _fat_ptr _T5A;struct Cyc_List_List*_T5B;void*_T5C;struct Cyc_Absyn_Exp*_T5D;struct _fat_ptr _T5E;int _T5F;struct Cyc_List_List*_T60;void*_T61;struct Cyc_Absyn_Exp*_T62;int _T63;struct Cyc_List_List*_T64;void*_T65;struct Cyc_Absyn_Exp*_T66;enum Cyc_Absyn_Primop _T67;int _T68;int _T69;struct Cyc_List_List*_T6A;struct Cyc_List_List*_T6B;struct Cyc_List_List*_T6C;void*_T6D;struct Cyc_Absyn_Exp*_T6E;int(*_T6F)(struct _fat_ptr,struct _fat_ptr);void*(*_T70)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T71;struct _fat_ptr _T72;struct Cyc_Core_Opt*_T73;void*_T74;enum Cyc_Absyn_Primop _T75;struct _fat_ptr _T76;struct _fat_ptr _T77;struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T78;enum Cyc_Absyn_Incrementor _T79;int _T7A;struct _fat_ptr _T7B;struct _fat_ptr _T7C;struct _fat_ptr _T7D;struct _fat_ptr _T7E;struct Cyc_Absyn_Exp*_T7F;unsigned _T80;struct Cyc_Absyn_Exp*_T81;unsigned _T82;struct _fat_ptr _T83;struct Cyc_Absyn_Exp*_T84;unsigned _T85;struct _fat_ptr _T86;struct Cyc_Absyn_Exp*_T87;unsigned _T88;int _T89;struct Cyc_Absyn_Exp*_T8A;int _T8B;struct Cyc_Absyn_Exp*_T8C;struct Cyc_Absyn_Exp*_T8D;unsigned _T8E;struct _fat_ptr _T8F;int _T90;int _T91;struct Cyc_Absyn_Exp*_T92;unsigned _T93;struct Cyc_Absyn_Exp*_T94;unsigned _T95;struct _fat_ptr _T96;struct Cyc_Absyn_Exp*_T97;unsigned _T98;struct _fat_ptr _T99;void*_T9A;struct Cyc_Absyn_Exp*_T9B;unsigned _T9C;struct _fat_ptr _T9D;struct Cyc_Absyn_Exp*_T9E;unsigned _T9F;struct _fat_ptr _TA0;struct Cyc_Absyn_Exp*_TA1;unsigned _TA2;void*_TA3;struct _fat_ptr _TA4;struct _fat_ptr _TA5;void*_TA6;struct _fat_ptr _TA7;struct _fat_ptr _TA8;int _TA9;struct _fat_ptr _TAA;struct _fat_ptr _TAB;struct _fat_ptr _TAC;struct _fat_ptr _TAD;int _TAE;struct _fat_ptr _TAF;struct _fat_ptr _TB0;struct _fat_ptr _TB1;struct Cyc_List_List*_TB2;unsigned _TB3;struct Cyc_List_List*_TB4;unsigned _TB5;struct Cyc_List_List*_TB6;unsigned _TB7;struct Cyc_List_List*_TB8;unsigned _TB9;int _TBA;struct Cyc_List_List*_TBB;unsigned _TBC;int _TBD;struct Cyc_List_List*_TBE;unsigned _TBF;int _TC0;int _TC1;struct _fat_ptr _TC2;struct Cyc_List_List*_TC3;unsigned _TC4;struct Cyc_List_List*_TC5;void*_TC6;struct _fat_ptr*_TC7;struct _fat_ptr _TC8;struct _fat_ptr _TC9;struct Cyc_List_List*_TCA;struct Cyc_List_List*_TCB;unsigned _TCC;struct _fat_ptr _TCD;struct _fat_ptr*_TCE;struct _fat_ptr _TCF;void*_TD0;struct _fat_ptr _TD1;struct Cyc_List_List*_TD2;struct _fat_ptr _TD3;struct _fat_ptr _TD4;struct _fat_ptr _TD5;struct _fat_ptr*_TD6;struct _fat_ptr _TD7;struct _fat_ptr _TD8;struct _fat_ptr*_TD9;struct _fat_ptr _TDA;struct _tuple9*_TDB;struct _tuple9 _TDC;void*_TDD;void(*_TDE)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_TDF;struct _fat_ptr _TE0;struct _fat_ptr _TE1;struct _fat_ptr _TE2;void(*_TE3)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_TE4;struct _fat_ptr _TE5;struct _fat_ptr _TE6;struct _fat_ptr _TE7;struct _fat_ptr _TE8;struct Cyc_Absyn_Vardecl*_TE9;struct _tuple1*_TEA;struct _tuple1 _TEB;struct _fat_ptr*_TEC;void*_TED;struct _fat_ptr _TEE;void(*_TEF)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_TF0;struct _fat_ptr _TF1;struct _fat_ptr _TF2;struct _fat_ptr _TF3;int _TF4;struct _fat_ptr _TF5;struct Cyc_List_List*(*_TF6)(struct Cyc_Absyn_Exp*(*)(struct _tuple21*),struct Cyc_List_List*);struct Cyc_List_List*(*_TF7)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Exp*(*_TF8)(struct _tuple21*);void*(*_TF9)(struct _tuple0*);struct Cyc_List_List*_TFA;struct Cyc_List_List*_TFB;void(*_TFC)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_TFD;struct _fat_ptr _TFE;struct _fat_ptr _TFF;struct _fat_ptr _T100;struct Cyc_Absyn_Enumfield*_T101;struct _tuple1*_T102;struct Cyc_Absyn_Datatypefield*_T103;struct _tuple1*_T104;void(*_T105)(void(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);void(*_T106)(struct Cyc_Absyn_Exp*);struct Cyc_List_List*_T107;struct _fat_ptr _T108;struct _fat_ptr _T109;struct _fat_ptr _T10A;struct Cyc_Absyn_MallocInfo _T10B;struct Cyc_Absyn_MallocInfo _T10C;struct Cyc_Absyn_MallocInfo _T10D;struct Cyc_Absyn_MallocInfo _T10E;struct Cyc_Absyn_MallocInfo _T10F;struct Cyc_Absyn_MallocInfo _T110;struct Cyc_Absyn_Exp*_T111;unsigned _T112;enum Cyc_Absyn_MallocKind _T113;int _T114;struct _fat_ptr _T115;struct _fat_ptr _T116;struct _fat_ptr _T117;struct _fat_ptr _T118;struct _fat_ptr _T119;struct _fat_ptr _T11A;struct _fat_ptr _T11B;void**_T11C;void*_T11D;struct Cyc_Absyn_Exp*_T11E;struct _fat_ptr _T11F;struct _fat_ptr _T120;enum Cyc_Absyn_MallocKind _T121;int _T122;struct _fat_ptr _T123;int _T124;struct _fat_ptr _T125;struct _fat_ptr _T126;struct _fat_ptr _T127;struct _fat_ptr _T128;struct _fat_ptr _T129;void**_T12A;void*_T12B;struct Cyc_Absyn_Exp*_T12C;struct Cyc_Absyn_Exp*_T12D;struct Cyc_Absyn_Exp*_T12E;struct _fat_ptr _T12F;struct _fat_ptr _T130;void(*_T131)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T132;struct _fat_ptr _T133;struct _fat_ptr _T134;struct _fat_ptr _T135;struct _fat_ptr _T136;struct Cyc_Absyn_Stmt*_T137;struct Cyc_Dict_Dict _T138;struct _fat_ptr _T139;
# 1026
int myprec=Cyc_Absynpp_exp_prec(e);
# 1031
if(inprec < myprec)goto _TLB8;if(inprec!=140)goto _TLBA;else{goto _TLBB;}_TLBB: if(myprec!=140)goto _TLBA;else{goto _TLB8;}
# 1033
_TLBA: _T0=_tag_fat("(",sizeof(char),2U);Cyc_Absyndump_dump_nospace(_T0);goto _TLB9;_TLB8: _TLB9: _T1=e;{
void*_T13A=_T1->r;struct Cyc_Absyn_Stmt*_T13B;struct Cyc_Absyn_Exp*_T13C;void**_T13D;enum Cyc_Absyn_MallocKind _T13E;struct Cyc_Absyn_Datatypefield*_T13F;struct Cyc_Absyn_Enumfield*_T140;struct _tuple1*_T141;struct _fat_ptr*_T142;struct Cyc_List_List*_T143;struct Cyc_List_List*_T144;struct Cyc_Absyn_Exp*_T145;struct Cyc_Absyn_Exp*_T146;struct Cyc_Core_Opt*_T147;enum Cyc_Absyn_Primop _T148;void*_T149;long long _T14A;int _T14B;short _T14C;struct _fat_ptr _T14D;char _T14E;enum Cyc_Absyn_Sign _T14F;_T2=(int*)_T13A;_T3=*_T2;switch(_T3){case 0: _T4=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T5=_T4->f1;_T6=_T5.String_c;_T7=_T6.tag;switch(_T7){case 2:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T8=_T150->f1;_T9=_T8.Char_c;_TA=_T9.val;_T14F=_TA.f0;_TB=_T150->f1;_TC=_TB.Char_c;_TD=_TC.val;_T14E=_TD.f1;}{enum Cyc_Absyn_Sign sg=_T14F;char ch=_T14E;
# 1037
Cyc_Absyndump_dump_char(39);_TE=
Cyc_Absynpp_char_escape(ch);Cyc_Absyndump_dump_nospace(_TE);
Cyc_Absyndump_dump_char(39);goto _LL0;}case 3:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_TF=_T150->f1;_T10=_TF.Wchar_c;_T14D=_T10.val;}{struct _fat_ptr s=_T14D;{struct Cyc_String_pa_PrintArg_struct _T150;_T150.tag=0;
# 1042
_T150.f1=s;_T12=_T150;}{struct Cyc_String_pa_PrintArg_struct _T150=_T12;void*_T151[1];_T151[0]=& _T150;_T13=_tag_fat("L'%s'",sizeof(char),6U);_T14=_tag_fat(_T151,sizeof(void*),1);_T11=Cyc_aprintf(_T13,_T14);}Cyc_Absyndump_dump(_T11);goto _LL0;}case 4:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T15=_T150->f1;_T16=_T15.Short_c;_T17=_T16.val;_T14F=_T17.f0;_T18=_T150->f1;_T19=_T18.Short_c;_T1A=_T19.val;_T14C=_T1A.f1;}{enum Cyc_Absyn_Sign sg=_T14F;short s=_T14C;{struct Cyc_Int_pa_PrintArg_struct _T150;_T150.tag=1;_T1D=s;_T1E=(int)_T1D;
# 1045
_T150.f1=(unsigned long)_T1E;_T1C=_T150;}{struct Cyc_Int_pa_PrintArg_struct _T150=_T1C;void*_T151[1];_T151[0]=& _T150;_T1F=_tag_fat("%d",sizeof(char),3U);_T20=_tag_fat(_T151,sizeof(void*),1);_T1B=Cyc_aprintf(_T1F,_T20);}Cyc_Absyndump_dump(_T1B);goto _LL0;}case 5: _T21=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T22=_T21->f1;_T23=_T22.Int_c;_T24=_T23.val;_T25=_T24.f0;_T26=(int)_T25;switch(_T26){case Cyc_Absyn_None:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T27=_T150->f1;_T28=_T27.Int_c;_T29=_T28.val;_T14B=_T29.f1;}{int i=_T14B;_T14B=i;goto _LLA;}case Cyc_Absyn_Signed:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T2A=_T150->f1;_T2B=_T2A.Int_c;_T2C=_T2B.val;_T14B=_T2C.f1;}_LLA: {int i=_T14B;{struct Cyc_Int_pa_PrintArg_struct _T150;_T150.tag=1;_T2F=i;
# 1050
_T150.f1=(unsigned long)_T2F;_T2E=_T150;}{struct Cyc_Int_pa_PrintArg_struct _T150=_T2E;void*_T151[1];_T151[0]=& _T150;_T30=_tag_fat("%d",sizeof(char),3U);_T31=_tag_fat(_T151,sizeof(void*),1);_T2D=Cyc_aprintf(_T30,_T31);}Cyc_Absyndump_dump(_T2D);goto _LL0;}default:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T32=_T150->f1;_T33=_T32.Int_c;_T34=_T33.val;_T14B=_T34.f1;}{int i=_T14B;{struct Cyc_Int_pa_PrintArg_struct _T150;_T150.tag=1;_T37=i;
# 1053
_T150.f1=(unsigned)_T37;_T36=_T150;}{struct Cyc_Int_pa_PrintArg_struct _T150=_T36;void*_T151[1];_T151[0]=& _T150;_T38=_tag_fat("%uU",sizeof(char),4U);_T39=_tag_fat(_T151,sizeof(void*),1);_T35=Cyc_aprintf(_T38,_T39);}Cyc_Absyndump_dump(_T35);goto _LL0;}};case 6:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T3A=_T150->f1;_T3B=_T3A.LongLong_c;_T3C=_T3B.val;_T14F=_T3C.f0;_T3D=_T150->f1;_T3E=_T3D.LongLong_c;_T3F=_T3E.val;_T14A=_T3F.f1;}{enum Cyc_Absyn_Sign sg=_T14F;long long i=_T14A;_T40=i;_T41=(unsigned long long)_T40;_T42=
# 1057
Cyc_Absynpp_longlong2string(_T41);Cyc_Absyndump_dump(_T42);goto _LL0;}case 7:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T43=_T150->f1;_T44=_T43.Float_c;_T45=_T44.val;_T14D=_T45.f0;}{struct _fat_ptr x=_T14D;
# 1060
Cyc_Absyndump_dump(x);goto _LL0;}case 1: _T46=
# 1063
_tag_fat("NULL",sizeof(char),5U);Cyc_Absyndump_dump(_T46);goto _LL0;case 8:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T47=_T150->f1;_T48=_T47.String_c;_T14D=_T48.val;}{struct _fat_ptr s=_T14D;
# 1066
Cyc_Absyndump_dump_char(34);_T49=
Cyc_Absynpp_string_escape(s);Cyc_Absyndump_dump_nospace(_T49);
Cyc_Absyndump_dump_char(34);goto _LL0;}default:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T13A;_T4A=_T150->f1;_T4B=_T4A.Wstring_c;_T14D=_T4B.val;}{struct _fat_ptr s=_T14D;_T4C=
# 1071
_tag_fat("L\"",sizeof(char),3U);Cyc_Absyndump_dump(_T4C);
Cyc_Absyndump_dump_nospace(s);
Cyc_Absyndump_dump_char(34);goto _LL0;}};case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T13A;_T4D=_T150->f1;_T149=(void*)_T4D;}{void*b=_T149;_T4E=
# 1077
Cyc_Absyn_binding2qvar(b);Cyc_Absyndump_dumpqvar(_T4E);goto _LL0;}case 2:{struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct*)_T13A;_T14D=_T150->f1;}{struct _fat_ptr p=_T14D;_T4F=
# 1081
_tag_fat("__cyclone_pragma__(",sizeof(char),20U);Cyc_Absyndump_dump(_T4F);
Cyc_Absyndump_dump_nospace(p);
Cyc_Absyndump_dump_char(41);goto _LL0;}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T13A;_T148=_T150->f1;_T149=_T150->f2;}{enum Cyc_Absyn_Primop p=_T148;struct Cyc_List_List*es=_T149;
# 1087
struct _fat_ptr pstr=Cyc_Absynpp_prim2str(p);{
int _T150=Cyc_List_length(es);_T50=(int)_T150;switch(_T50){case 1: _T51=p;_T52=(int)_T51;
# 1091
if(_T52!=18)goto _TLC0;_T53=
# 1093
_tag_fat("numelts(",sizeof(char),9U);Cyc_Absyndump_dump(_T53);_T54=
_check_null(es);_T55=_T54->hd;_T56=(struct Cyc_Absyn_Exp*)_T55;Cyc_Absyndump_dumpexp(_T56);_T57=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T57);goto _TLC1;
# 1097
_TLC0: _T58=p;_T59=(int)_T58;if(_T59!=19)goto _TLC2;_T5A=
# 1099
_tag_fat("tagof(",sizeof(char),7U);Cyc_Absyndump_dump(_T5A);_T5B=
_check_null(es);_T5C=_T5B->hd;_T5D=(struct Cyc_Absyn_Exp*)_T5C;Cyc_Absyndump_dumpexp(_T5D);_T5E=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T5E);goto _TLC3;
# 1105
_TLC2: Cyc_Absyndump_dump(pstr);_T5F=myprec;_T60=
_check_null(es);_T61=_T60->hd;_T62=(struct Cyc_Absyn_Exp*)_T61;Cyc_Absyndump_dumpexp_prec(_T5F,_T62);_TLC3: _TLC1: goto _LL71;case 2: _T63=myprec;_T64=
# 1110
_check_null(es);_T65=_T64->hd;_T66=(struct Cyc_Absyn_Exp*)_T65;Cyc_Absyndump_dumpexp_prec(_T63,_T66);_T67=p;_T68=(int)_T67;switch(_T68){case Cyc_Absyn_Eq: goto _LL7C;case Cyc_Absyn_Neq: _LL7C:
# 1115
 Cyc_Absyndump_dump_nospace(pstr);goto _LL78;default:
# 1118
 Cyc_Absyndump_dump(pstr);
Cyc_Absyndump_dump_char(32);}_LL78: _T69=myprec;_T6A=es;_T6B=_T6A->tl;_T6C=
# 1121
_check_null(_T6B);_T6D=_T6C->hd;_T6E=(struct Cyc_Absyn_Exp*)_T6D;Cyc_Absyndump_dumpexp_prec(_T69,_T6E);goto _LL71;default: _T70=Cyc_Warn_impos;{
# 1124
int(*_T151)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T70;_T6F=_T151;}_T71=_tag_fat("Absyndump -- Bad number of arguments to primop",sizeof(char),47U);_T72=_tag_fat(0U,sizeof(void*),0);_T6F(_T71,_T72);}_LL71:;}goto _LL0;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T147=_T150->f2;_T146=_T150->f3;}{struct Cyc_Absyn_Exp*e1=_T149;struct Cyc_Core_Opt*popt=_T147;struct Cyc_Absyn_Exp*e2=_T146;
# 1129
Cyc_Absyndump_dumpexp_prec(myprec,e1);
if(popt==0)goto _TLC5;_T73=popt;_T74=_T73->v;_T75=(enum Cyc_Absyn_Primop)_T74;_T76=
Cyc_Absynpp_prim2str(_T75);Cyc_Absyndump_dump(_T76);goto _TLC6;_TLC5: _TLC6: _T77=
_tag_fat("=",sizeof(char),2U);Cyc_Absyndump_dump_nospace(_T77);
Cyc_Absyndump_dumpexp_prec(myprec,e2);goto _LL0;}case 5: _T78=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T13A;_T79=_T78->f2;_T7A=(int)_T79;switch(_T7A){case Cyc_Absyn_PreInc:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e2=_T149;_T7B=
# 1137
_tag_fat("++",sizeof(char),3U);Cyc_Absyndump_dump(_T7B);
Cyc_Absyndump_dumpexp_prec(myprec,e2);goto _LL0;}case Cyc_Absyn_PreDec:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e2=_T149;_T7C=
# 1141
_tag_fat("--",sizeof(char),3U);Cyc_Absyndump_dump(_T7C);
Cyc_Absyndump_dumpexp_prec(myprec,e2);goto _LL0;}case Cyc_Absyn_PostInc:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e2=_T149;
# 1145
Cyc_Absyndump_dumpexp_prec(myprec,e2);_T7D=
_tag_fat("++",sizeof(char),3U);Cyc_Absyndump_dump(_T7D);goto _LL0;}default:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e2=_T149;
# 1149
Cyc_Absyndump_dumpexp_prec(myprec,e2);_T7E=
_tag_fat("--",sizeof(char),3U);Cyc_Absyndump_dump(_T7E);goto _LL0;}};case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T146=_T150->f2;_T145=_T150->f3;}{struct Cyc_Absyn_Exp*e1=_T149;struct Cyc_Absyn_Exp*e2=_T146;struct Cyc_Absyn_Exp*e3=_T145;_T7F=e;_T80=_T7F->loc;
# 1154
Cyc_Absyndump_dumploc(_T80);
Cyc_Absyndump_dumpexp_prec(myprec,e1);
Cyc_Absyndump_dump_char(63);
Cyc_Absyndump_dumpexp_prec(0,e2);
Cyc_Absyndump_dump_char(58);
Cyc_Absyndump_dumpexp_prec(myprec,e3);goto _LL0;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T146=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T149;struct Cyc_Absyn_Exp*e2=_T146;_T81=e;_T82=_T81->loc;
# 1163
Cyc_Absyndump_dumploc(_T82);
Cyc_Absyndump_dumpexp_prec(myprec,e1);_T83=
_tag_fat("&&",sizeof(char),3U);Cyc_Absyndump_dump(_T83);
Cyc_Absyndump_dumpexp_prec(myprec,e2);goto _LL0;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T146=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T149;struct Cyc_Absyn_Exp*e2=_T146;_T84=e;_T85=_T84->loc;
# 1170
Cyc_Absyndump_dumploc(_T85);
Cyc_Absyndump_dumpexp_prec(myprec,e1);_T86=
_tag_fat("||",sizeof(char),3U);Cyc_Absyndump_dump(_T86);
Cyc_Absyndump_dumpexp_prec(myprec,e2);goto _LL0;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T146=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T149;struct Cyc_Absyn_Exp*e2=_T146;_T87=e;_T88=_T87->loc;
# 1179
Cyc_Absyndump_dumploc(_T88);_T89=myprec - 1;_T8A=e1;
# 1182
Cyc_Absyndump_dumpexp_prec(_T89,_T8A);
Cyc_Absyndump_dump_char(44);_T8B=myprec - 1;_T8C=e2;
Cyc_Absyndump_dumpexp_prec(_T8B,_T8C);goto _LL0;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T144=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T149;struct Cyc_List_List*es=_T144;_T8D=e;_T8E=_T8D->loc;
# 1188
Cyc_Absyndump_dumploc(_T8E);
Cyc_Absyndump_dumpexp_prec(myprec,e1);_T8F=
_tag_fat("(",sizeof(char),2U);Cyc_Absyndump_dump_nospace(_T8F);{
# 1193
int old_generate_line_directives=Cyc_Absyndump_generate_line_directives;_T91=old_generate_line_directives;
if(!_T91)goto _TLC8;_T92=e;_T93=_T92->loc;if(_T93==0U)goto _TLC8;_T94=e1;_T95=_T94->loc;_T90=_T95!=0U;goto _TLC9;_TLC8: _T90=0;_TLC9: Cyc_Absyndump_generate_line_directives=_T90;
# 1197
Cyc_Absyndump_dumpexps_prec(20,es);_T96=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump_nospace(_T96);
Cyc_Absyndump_generate_line_directives=old_generate_line_directives;goto _LL0;}}case 11:{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e1=_T149;_T97=e;_T98=_T97->loc;
# 1203
Cyc_Absyndump_dumploc(_T98);_T99=
_tag_fat("throw",sizeof(char),6U);Cyc_Absyndump_dump(_T99);
Cyc_Absyndump_dumpexp_prec(myprec,e1);goto _LL0;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e1=_T149;_T149=e1;goto _LL36;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}_LL36: {struct Cyc_Absyn_Exp*e1=_T149;
# 1210
Cyc_Absyndump_dumpexp_prec(inprec,e1);goto _LL0;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T13A;_T9A=_T150->f1;_T149=(void*)_T9A;_T146=_T150->f2;}{void*t=_T149;struct Cyc_Absyn_Exp*e1=_T146;
# 1214
Cyc_Absyndump_dump_char(40);
Cyc_Absyndump_dumptyp(t);
Cyc_Absyndump_dump_char(41);
Cyc_Absyndump_dumpexp_prec(myprec,e1);goto _LL0;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e1=_T149;
# 1221
Cyc_Absyndump_dump_char(38);
Cyc_Absyndump_dumpexp_prec(myprec,e1);goto _LL0;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e1=_T149;
# 1225
Cyc_Absyndump_dump_char(42);
Cyc_Absyndump_dumpexp_prec(myprec,e1);goto _LL0;}case 16:{struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T146=_T150->f2;_T145=_T150->f3;}{struct Cyc_Absyn_Exp*ropt=_T149;struct Cyc_Absyn_Exp*e1=_T146;struct Cyc_Absyn_Exp*qual=_T145;_T9B=ropt;_T9C=(unsigned)_T9B;
# 1230
if(!_T9C)goto _TLCA;_T9D=
# 1232
_tag_fat("rnew(",sizeof(char),6U);Cyc_Absyndump_dump(_T9D);
Cyc_Absyndump_dumpexp_prec(140,ropt);_T9E=qual;_T9F=(unsigned)_T9E;
if(!_T9F)goto _TLCC;
# 1236
Cyc_Absyndump_dump_char(44);
Cyc_Absyndump_dumpexp_prec(140,qual);goto _TLCD;_TLCC: _TLCD:
# 1239
 Cyc_Absyndump_dump_char(41);goto _TLCB;
# 1243
_TLCA: _TA0=_tag_fat("new",sizeof(char),4U);Cyc_Absyndump_dump(_TA0);_TA1=qual;_TA2=(unsigned)_TA1;
if(!_TA2)goto _TLCE;
# 1246
Cyc_Absyndump_dump_char(40);
Cyc_Absyndump_dumpexp_prec(140,qual);
Cyc_Absyndump_dump_char(41);goto _TLCF;_TLCE: _TLCF: _TLCB:
# 1251
 Cyc_Absyndump_dumpexp_prec(myprec,e1);goto _LL0;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T13A;_TA3=_T150->f1;_T149=(void*)_TA3;}{void*t=_T149;_TA4=
# 1254
_tag_fat("sizeof(",sizeof(char),8U);Cyc_Absyndump_dump(_TA4);
Cyc_Absyndump_dumptyp(t);
Cyc_Absyndump_dump_char(41);goto _LL0;}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e1=_T149;_TA5=
# 1259
_tag_fat("sizeof(",sizeof(char),8U);Cyc_Absyndump_dump(_TA5);
Cyc_Absyndump_dumpexp(e1);
Cyc_Absyndump_dump_char(41);goto _LL0;}case 38:{struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_T13A;_TA6=_T150->f1;_T149=(void*)_TA6;}{void*t=_T149;_TA7=
# 1264
_tag_fat("valueof(",sizeof(char),9U);Cyc_Absyndump_dump(_TA7);
Cyc_Absyndump_dumptyp(t);
Cyc_Absyndump_dump_char(41);goto _LL0;}case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e1=_T149;_TA8=
# 1270
_tag_fat("__extension__(",sizeof(char),15U);Cyc_Absyndump_dump(_TA8);
Cyc_Absyndump_dumpexp(e1);
Cyc_Absyndump_dump_char(41);goto _LL0;}case 41:{struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T14B=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T149;int static_only=_T14B;_TA9=static_only;
# 1275
if(!_TA9)goto _TLD0;_TAA=
_tag_fat("@assert(",sizeof(char),9U);Cyc_Absyndump_dump(_TAA);goto _TLD1;
# 1278
_TLD0: _TAB=_tag_fat("assert(",sizeof(char),8U);Cyc_Absyndump_dump(_TAB);_TLD1:
 Cyc_Absyndump_dumpexp(e1);
Cyc_Absyndump_dump_char(41);goto _LL0;}case 42:{struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_Absyn_Exp*e1=_T149;_TAC=
# 1283
_tag_fat("@assert_false(",sizeof(char),15U);Cyc_Absyndump_dump(_TAC);
Cyc_Absyndump_dumpexp(e1);
Cyc_Absyndump_dump_char(41);goto _LL0;}case 39:{struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*)_T13A;_T14B=_T150->f1;_T14D=_T150->f2;_T149=_T150->f3;_T144=_T150->f4;_T143=_T150->f5;}{int vol=_T14B;struct _fat_ptr t=_T14D;struct Cyc_List_List*o=_T149;struct Cyc_List_List*i=_T144;struct Cyc_List_List*cl=_T143;_TAD=
# 1289
_tag_fat("__asm__",sizeof(char),8U);Cyc_Absyndump_dump(_TAD);_TAE=vol;
if(!_TAE)goto _TLD2;_TAF=
_tag_fat(" volatile ",sizeof(char),11U);Cyc_Absyndump_dump(_TAF);goto _TLD3;_TLD2: _TLD3: _TB0=
_tag_fat("(\"",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_TB0);_TB1=
Cyc_Absynpp_string_escape(t);Cyc_Absyndump_dump_nospace(_TB1);
Cyc_Absyndump_dump_char(34);_TB2=o;_TB3=(unsigned)_TB2;
if(!_TB3)goto _TLD4;
# 1297
Cyc_Absyndump_dump_char(58);
Cyc_Absyndump_dump_asm_iolist(o);goto _TLD5;_TLD4: _TLD5: _TB4=i;_TB5=(unsigned)_TB4;
# 1300
if(!_TB5)goto _TLD6;_TB6=o;_TB7=(unsigned)_TB6;
# 1302
if(_TB7)goto _TLD8;else{goto _TLDA;}
_TLDA: Cyc_Absyndump_dump_char(58);goto _TLD9;_TLD8: _TLD9:
 Cyc_Absyndump_dump_char(58);
Cyc_Absyndump_dump_asm_iolist(i);goto _TLD7;_TLD6: _TLD7: _TB8=cl;_TB9=(unsigned)_TB8;
# 1307
if(!_TB9)goto _TLDB;_TBB=i;_TBC=(unsigned)_TBB;
# 1309
if(!_TBC)goto _TLDD;_TBA=2;goto _TLDE;_TLDD: _TBE=o;_TBF=(unsigned)_TBE;if(!_TBF)goto _TLDF;_TBD=1;goto _TLE0;_TLDF: _TBD=0;_TLE0: _TBA=_TBD;_TLDE:{int ncol=_TBA;{
int cols=0;_TLE4: _TC0=cols;_TC1=3 - ncol;if(_TC0 < _TC1)goto _TLE2;else{goto _TLE3;}
_TLE2: _TC2=_tag_fat(" :",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_TC2);
# 1310
cols=cols + 1;goto _TLE4;_TLE3:;}
# 1312
_TLE5: _TC3=cl;_TC4=(unsigned)_TC3;if(_TC4)goto _TLE6;else{goto _TLE7;}
# 1314
_TLE6: Cyc_Absyndump_dump_char(34);_TC5=cl;_TC6=_TC5->hd;_TC7=(struct _fat_ptr*)_TC6;_TC8=*_TC7;_TC9=
Cyc_Absynpp_string_escape(_TC8);Cyc_Absyndump_dump_nospace(_TC9);
Cyc_Absyndump_dump_char(34);_TCA=cl;
cl=_TCA->tl;_TCB=cl;_TCC=(unsigned)_TCB;
if(!_TCC)goto _TLE8;
Cyc_Absyndump_dump_char(44);goto _TLE9;_TLE8: _TLE9: goto _TLE5;_TLE7:;}goto _TLDC;_TLDB: _TLDC:
# 1322
 Cyc_Absyndump_dump_char(41);goto _LL0;}case 37:{struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T142=_T150->f2;}{struct Cyc_Absyn_Exp*e=_T149;struct _fat_ptr*f=_T142;_TCD=
# 1326
_tag_fat("tagcheck(",sizeof(char),10U);Cyc_Absyndump_dump(_TCD);
Cyc_Absyndump_dumpexp(e);
Cyc_Absyndump_dump_char(46);_TCE=f;_TCF=*_TCE;
Cyc_Absyndump_dump_nospace(_TCF);
Cyc_Absyndump_dump_char(41);goto _LL0;}case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T13A;_TD0=_T150->f1;_T149=(void*)_TD0;_T144=_T150->f2;}{void*t=_T149;struct Cyc_List_List*l=_T144;_TD1=
# 1334
_tag_fat("offsetof(",sizeof(char),10U);Cyc_Absyndump_dump(_TD1);
Cyc_Absyndump_dumptyp(t);_TD2=l;_TD3=
_tag_fat(",",sizeof(char),2U);_TD4=_tag_fat(")",sizeof(char),2U);_TD5=_tag_fat(".",sizeof(char),2U);Cyc_Absyndump_group(Cyc_Absyndump_dumpoffset_field,_TD2,_TD3,_TD4,_TD5);goto _LL0;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T142=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T149;struct _fat_ptr*n=_T142;
# 1340
Cyc_Absyndump_dumpexp_prec(myprec,e1);
Cyc_Absyndump_dump_char(46);_TD6=n;_TD7=*_TD6;
Cyc_Absyndump_dump_nospace(_TD7);goto _LL0;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T142=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T149;struct _fat_ptr*n=_T142;
# 1345
Cyc_Absyndump_dumpexp_prec(myprec,e1);_TD8=
_tag_fat("->",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_TD8);_TD9=n;_TDA=*_TD9;
Cyc_Absyndump_dump_nospace(_TDA);goto _LL0;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T146=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T149;struct Cyc_Absyn_Exp*e2=_T146;
# 1351
Cyc_Absyndump_dumpexp_prec(myprec,e1);
Cyc_Absyndump_dump_char(91);
Cyc_Absyndump_dumpexp(e2);
Cyc_Absyndump_dump_char(93);goto _LL0;}case 24:{struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T144=_T150->f2;}{struct _tuple9*vat=_T149;struct Cyc_List_List*des=_T144;
# 1358
Cyc_Absyndump_dump_char(40);_TDB=vat;_TDC=*_TDB;_TDD=_TDC.f2;
Cyc_Absyndump_dumptyp(_TDD);
Cyc_Absyndump_dump_char(41);{
void(*_T150)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_TDE=_T150;}_TDF=des;_TE0=_tag_fat("{",sizeof(char),2U);_TE1=_tag_fat("}",sizeof(char),2U);_TE2=_tag_fat(",",sizeof(char),2U);_TDE(Cyc_Absyndump_dumpde,_TDF,_TE0,_TE1,_TE2);goto _LL0;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;}{struct Cyc_List_List*des=_T149;{
# 1365
void(*_T150)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_TE3=_T150;}_TE4=des;_TE5=_tag_fat("{",sizeof(char),2U);_TE6=_tag_fat("}",sizeof(char),2U);_TE7=_tag_fat(",",sizeof(char),2U);_TE3(Cyc_Absyndump_dumpde,_TE4,_TE5,_TE6,_TE7);goto _LL0;}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T13A;_T149=_T150->f1;_T146=_T150->f2;_T145=_T150->f3;}{struct Cyc_Absyn_Vardecl*vd=_T149;struct Cyc_Absyn_Exp*e1=_T146;struct Cyc_Absyn_Exp*e2=_T145;_TE8=
# 1369
_tag_fat("{for",sizeof(char),5U);Cyc_Absyndump_dump(_TE8);_TE9=vd;_TEA=_TE9->name;_TEB=*_TEA;_TEC=_TEB.f1;
Cyc_Absyndump_dump_str(_TEC);
Cyc_Absyndump_dump_char(60);
Cyc_Absyndump_dumpexp(e1);
Cyc_Absyndump_dump_char(58);
Cyc_Absyndump_dumpexp(e2);
Cyc_Absyndump_dump_char(125);goto _LL0;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T13A;_T146=_T150->f1;_TED=_T150->f2;_T149=(void*)_TED;}{struct Cyc_Absyn_Exp*e=_T146;void*t=_T149;_TEE=
# 1379
_tag_fat("{for x ",sizeof(char),8U);Cyc_Absyndump_dump(_TEE);
Cyc_Absyndump_dump_char(60);
Cyc_Absyndump_dumpexp(e);
Cyc_Absyndump_dump_char(58);
Cyc_Absyndump_dumptyp(t);
Cyc_Absyndump_dump_char(125);goto _LL0;}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T13A;_T141=_T150->f1;_T144=_T150->f2;_T143=_T150->f3;}{struct _tuple1*n=_T141;struct Cyc_List_List*ts=_T144;struct Cyc_List_List*des=_T143;
# 1388
Cyc_Absyndump_dumpqvar(n);
Cyc_Absyndump_dump_char(123);
if(ts==0)goto _TLEA;
Cyc_Absyndump_dumptps(ts);goto _TLEB;_TLEA: _TLEB:{
void(*_T150)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_TEF=_T150;}_TF0=des;_TF1=_tag_fat("",sizeof(char),1U);_TF2=_tag_fat("}",sizeof(char),2U);_TF3=_tag_fat(",",sizeof(char),2U);_TEF(Cyc_Absyndump_dumpde,_TF0,_TF1,_TF2,_TF3);goto _LL0;}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_T13A;_T14B=_T150->f2;_T144=_T150->f3;}{int is_tuple=_T14B;struct Cyc_List_List*des=_T144;_TF4=is_tuple;
# 1396
if(!_TF4)goto _TLEC;_TF5=
# 1398
_tag_fat("$(",sizeof(char),3U);Cyc_Absyndump_dump(_TF5);_TF7=Cyc_List_map;{
struct Cyc_List_List*(*_T150)(struct Cyc_Absyn_Exp*(*)(struct _tuple21*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Exp*(*)(struct _tuple21*),struct Cyc_List_List*))_TF7;_TF6=_T150;}_TF9=Cyc_Core_snd;{struct Cyc_Absyn_Exp*(*_T150)(struct _tuple21*)=(struct Cyc_Absyn_Exp*(*)(struct _tuple21*))_TF9;_TF8=_T150;}_TFA=des;_TFB=_TF6(_TF8,_TFA);Cyc_Absyndump_dumpexps_prec(20,_TFB);
Cyc_Absyndump_dump_char(41);goto _TLED;
# 1403
_TLEC:{void(*_T150)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_TFC=_T150;}_TFD=des;_TFE=_tag_fat("{",sizeof(char),2U);_TFF=_tag_fat("}",sizeof(char),2U);_T100=_tag_fat(",",sizeof(char),2U);_TFC(Cyc_Absyndump_dumpde,_TFD,_TFE,_TFF,_T100);_TLED: goto _LL0;}case 31:{struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*)_T13A;_T140=_T150->f2;}{struct Cyc_Absyn_Enumfield*ef=_T140;_T140=ef;goto _LL66;}case 32:{struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*)_T13A;_T140=_T150->f2;}_LL66: {struct Cyc_Absyn_Enumfield*ef=_T140;_T101=ef;_T102=_T101->name;
# 1408
Cyc_Absyndump_dumpqvar(_T102);goto _LL0;}case 30:{struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*)_T13A;_T144=_T150->f1;_T13F=_T150->f3;}{struct Cyc_List_List*es=_T144;struct Cyc_Absyn_Datatypefield*tuf=_T13F;_T103=tuf;_T104=_T103->name;
# 1412
Cyc_Absyndump_dumpqvar(_T104);
if(es==0)goto _TLEE;{
void(*_T150)(void(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T105=_T150;}_T106=Cyc_Absyndump_dumpexp;_T107=es;_T108=_tag_fat("(",sizeof(char),2U);_T109=_tag_fat(")",sizeof(char),2U);_T10A=_tag_fat(",",sizeof(char),2U);_T105(_T106,_T107,_T108,_T109,_T10A);goto _TLEF;_TLEE: _TLEF: goto _LL0;}case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T13A;_T10B=_T150->f1;_T13E=_T10B.mknd;_T10C=_T150->f1;_T146=_T10C.rgn;_T10D=_T150->f1;_T145=_T10D.aqual;_T10E=_T150->f1;_T13D=_T10E.elt_type;_T10F=_T150->f1;_T13C=_T10F.num_elts;_T110=_T150->f1;_T14B=_T110.inline_call;}{enum Cyc_Absyn_MallocKind mknd=_T13E;struct Cyc_Absyn_Exp*ropt=_T146;struct Cyc_Absyn_Exp*aqopt=_T145;void**topt=_T13D;struct Cyc_Absyn_Exp*e=_T13C;int inline_call=_T14B;_T111=e;_T112=_T111->loc;
# 1418
Cyc_Absyndump_dumploc(_T112);_T113=mknd;_T114=(int)_T113;
if(_T114!=1)goto _TLF0;
# 1421
if(ropt==0)goto _TLF2;_T115=
# 1423
_tag_fat("rcalloc(",sizeof(char),9U);Cyc_Absyndump_dump(_T115);
Cyc_Absyndump_dumpexp(ropt);_T116=
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump(_T116);
if(aqopt==0)goto _TLF4;
# 1428
Cyc_Absyndump_dumpexp(aqopt);_T117=
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump(_T117);goto _TLF5;_TLF4: _TLF5: goto _TLF3;
# 1434
_TLF2: if(aqopt==0)goto _TLF6;_T118=
# 1436
_tag_fat("qcalloc(",sizeof(char),9U);Cyc_Absyndump_dump(_T118);
Cyc_Absyndump_dumpexp(aqopt);_T119=
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump(_T119);goto _TLF7;
# 1441
_TLF6: _T11A=_tag_fat("calloc(",sizeof(char),8U);Cyc_Absyndump_dump(_T11A);_TLF7: _TLF3:
# 1443
 Cyc_Absyndump_dumpexp(e);_T11B=
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump(_T11B);_T11C=
_check_null(topt);_T11D=*_T11C;_T11E=Cyc_Absyn_sizeoftype_exp(_T11D,0U);Cyc_Absyndump_dumpexp(_T11E);_T11F=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T11F);goto _TLF1;
# 1450
_TLF0: if(ropt==0)goto _TLF8;_T121=mknd;_T122=(int)_T121;
# 1452
if(_T122!=2)goto _TLFA;_T120=
# 1454
_tag_fat("rvmalloc(",sizeof(char),10U);goto _TLFB;_TLFA: _T124=inline_call;if(!_T124)goto _TLFC;_T123=
# 1456
_tag_fat("rmalloc_inline(",sizeof(char),16U);goto _TLFD;_TLFC: _T123=_tag_fat("rmalloc(",sizeof(char),9U);_TLFD: _T120=_T123;_TLFB:
# 1452
 Cyc_Absyndump_dump(_T120);
# 1457
Cyc_Absyndump_dumpexp(ropt);_T125=
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump(_T125);
if(aqopt==0)goto _TLFE;
# 1461
Cyc_Absyndump_dumpexp(aqopt);_T126=
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump(_T126);goto _TLFF;_TLFE: _TLFF: goto _TLF9;
# 1467
_TLF8: if(aqopt==0)goto _TL100;_T127=
# 1469
_tag_fat("qmalloc(",sizeof(char),9U);Cyc_Absyndump_dump(_T127);
Cyc_Absyndump_dumpexp(aqopt);_T128=
_tag_fat(",",sizeof(char),2U);Cyc_Absyndump_dump(_T128);goto _TL101;
# 1474
_TL100: _T129=_tag_fat("malloc(",sizeof(char),8U);Cyc_Absyndump_dump(_T129);_TL101: _TLF9:
# 1477
 if(topt==0)goto _TL102;_T12A=topt;_T12B=*_T12A;_T12C=
Cyc_Absyn_sizeoftype_exp(_T12B,0U);_T12D=e;_T12E=Cyc_Absyn_times_exp(_T12C,_T12D,0U);Cyc_Absyndump_dumpexp(_T12E);goto _TL103;
# 1480
_TL102: Cyc_Absyndump_dumpexp(e);_TL103: _T12F=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T12F);_TLF1: goto _LL0;}case 34:{struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*)_T13A;_T146=_T150->f1;_T145=_T150->f2;}{struct Cyc_Absyn_Exp*e1=_T146;struct Cyc_Absyn_Exp*e2=_T145;
# 1486
Cyc_Absyndump_dumpexp_prec(myprec,e1);_T130=
_tag_fat(":=:",sizeof(char),4U);Cyc_Absyndump_dump_nospace(_T130);
Cyc_Absyndump_dumpexp_prec(myprec,e2);goto _LL0;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T13A;_T147=_T150->f1;_T144=_T150->f2;}{struct Cyc_Core_Opt*n=_T147;struct Cyc_List_List*des=_T144;{
# 1492
void(*_T150)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple21*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T131=_T150;}_T132=des;_T133=_tag_fat("{",sizeof(char),2U);_T134=_tag_fat("}",sizeof(char),2U);_T135=_tag_fat(",",sizeof(char),2U);_T131(Cyc_Absyndump_dumpde,_T132,_T133,_T134,_T135);goto _LL0;}default:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T150=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T13A;_T13B=_T150->f1;}{struct Cyc_Absyn_Stmt*s=_T13B;_T136=
# 1496
_tag_fat("({",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_T136);_T137=s;_T138=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T137,1,_T138);_T139=
_tag_fat("})",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_T139);goto _LL0;}}_LL0:;}
# 1504
if(inprec < myprec)goto _TL104;if(inprec!=140)goto _TL106;else{goto _TL107;}_TL107: if(myprec!=140)goto _TL106;else{goto _TL104;}
# 1506
_TL106: Cyc_Absyndump_dump_char(41);goto _TL105;_TL104: _TL105:;}
# 1509
static void Cyc_Absyndump_dumpexp(struct Cyc_Absyn_Exp*e){
# 1512
Cyc_Absyndump_dumpexp_prec(0,e);}
# 1515
static void Cyc_Absyndump_dumpswitchclauses(struct Cyc_List_List*scs,struct Cyc_Dict_Dict varsinblock){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Switch_clause*_T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Switch_clause*_T4;struct Cyc_Absyn_Pat*_T5;void*_T6;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T7;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T8;void*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;struct Cyc_Absyn_Switch_clause*_TC;struct Cyc_Absyn_Pat*_TD;struct Cyc_Absyn_Switch_clause*_TE;struct Cyc_Absyn_Exp*_TF;struct _fat_ptr _T10;struct Cyc_Absyn_Switch_clause*_T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_Absyn_Exp*_T13;struct _fat_ptr _T14;struct Cyc_Absyn_Switch_clause*_T15;struct Cyc_Absyn_Stmt*_T16;int _T17;struct _fat_ptr _T18;struct Cyc_Absyn_Switch_clause*_T19;struct Cyc_Absyn_Stmt*_T1A;struct Cyc_Dict_Dict _T1B;struct Cyc_Absyn_Switch_clause*_T1C;struct Cyc_Absyn_Stmt*_T1D;struct Cyc_Dict_Dict _T1E;struct Cyc_List_List*_T1F;
# 1519
_TL10B: if(scs!=0)goto _TL109;else{goto _TL10A;}
# 1521
_TL109: _T0=scs;_T1=_T0->hd;{struct Cyc_Absyn_Switch_clause*c=(struct Cyc_Absyn_Switch_clause*)_T1;_T2=c;_T3=_T2->where_clause;
if(_T3!=0)goto _TL10C;_T4=c;_T5=_T4->pattern;_T6=_T5->r;_T7=& Cyc_Absyn_Wild_p_val;_T8=(struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*)_T7;_T9=(void*)_T8;if(_T6!=_T9)goto _TL10C;_TA=
_tag_fat("default:",sizeof(char),9U);Cyc_Absyndump_dump(_TA);goto _TL10D;
# 1526
_TL10C: _TB=_tag_fat("case",sizeof(char),5U);Cyc_Absyndump_dump(_TB);_TC=c;_TD=_TC->pattern;
Cyc_Absyndump_dumppat(_TD);_TE=c;_TF=_TE->where_clause;
if(_TF==0)goto _TL10E;_T10=
# 1530
_tag_fat("&&",sizeof(char),3U);Cyc_Absyndump_dump(_T10);_T11=c;_T12=_T11->where_clause;_T13=
_check_null(_T12);Cyc_Absyndump_dumpexp(_T13);goto _TL10F;_TL10E: _TL10F: _T14=
# 1533
_tag_fat(":",sizeof(char),2U);Cyc_Absyndump_dump_nospace(_T14);_TL10D: _T15=c;_T16=_T15->body;_T17=
# 1535
Cyc_Absynpp_is_declaration(_T16);if(!_T17)goto _TL110;_T18=
# 1537
_tag_fat(" {",sizeof(char),3U);Cyc_Absyndump_dump(_T18);_T19=c;_T1A=_T19->body;_T1B=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T1A,0,_T1B);Cyc_Absyndump_dump_char(125);goto _TL111;
# 1541
_TL110: _T1C=c;_T1D=_T1C->body;_T1E=varsinblock;Cyc_Absyndump_dumpstmt(_T1D,0,_T1E);_TL111:;}_T1F=scs;
# 1519
scs=_T1F->tl;goto _TL10B;_TL10A:;}struct _tuple23{int f0;struct Cyc_Dict_Dict f1;};
# 1545
static struct _tuple23 Cyc_Absyndump_shadows(struct Cyc_Absyn_Decl*d,struct Cyc_Dict_Dict s){struct Cyc_Absyn_Decl*_T0;int*_T1;int _T2;int(*_T3)(struct Cyc_Dict_Dict,struct _tuple1*);int(*_T4)(struct Cyc_Dict_Dict,void*);struct Cyc_Dict_Dict _T5;struct Cyc_Absyn_Vardecl*_T6;struct _tuple1*_T7;int _T8;struct _tuple23 _T9;struct Cyc_Dict_Dict(*_TA)(int(*)(struct _tuple1*,struct _tuple1*),struct _tuple1*,struct _tuple1*);struct Cyc_Dict_Dict(*_TB)(int(*)(void*,void*),void*,void*);int(*_TC)(struct _tuple1*,struct _tuple1*);struct Cyc_Absyn_Vardecl*_TD;struct _tuple1*_TE;struct Cyc_Absyn_Vardecl*_TF;struct _tuple1*_T10;struct _tuple23 _T11;struct Cyc_Dict_Dict(*_T12)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple1*);struct Cyc_Dict_Dict(*_T13)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Dict_Dict _T14;struct Cyc_Absyn_Vardecl*_T15;struct _tuple1*_T16;struct Cyc_Absyn_Vardecl*_T17;struct _tuple1*_T18;struct _tuple23 _T19;_T0=d;{
# 1548
void*_T1A=_T0->r;struct Cyc_Absyn_Vardecl*_T1B;_T1=(int*)_T1A;_T2=*_T1;if(_T2!=0)goto _TL112;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T1C=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T1A;_T1B=_T1C->f1;}{struct Cyc_Absyn_Vardecl*vd=_T1B;_T4=Cyc_Dict_member;{
# 1551
int(*_T1C)(struct Cyc_Dict_Dict,struct _tuple1*)=(int(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T4;_T3=_T1C;}_T5=s;_T6=vd;_T7=_T6->name;_T8=_T3(_T5,_T7);if(!_T8)goto _TL114;{struct _tuple23 _T1C;
_T1C.f0=1;_TB=Cyc_Dict_singleton;{struct Cyc_Dict_Dict(*_T1D)(int(*)(struct _tuple1*,struct _tuple1*),struct _tuple1*,struct _tuple1*)=(struct Cyc_Dict_Dict(*)(int(*)(struct _tuple1*,struct _tuple1*),struct _tuple1*,struct _tuple1*))_TB;_TA=_T1D;}_TC=Cyc_Absyn_qvar_cmp;_TD=vd;_TE=_TD->name;_TF=vd;_T10=_TF->name;_T1C.f1=_TA(_TC,_TE,_T10);_T9=_T1C;}return _T9;_TL114:{struct _tuple23 _T1C;
_T1C.f0=0;_T13=Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_T1D)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple1*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple1*))_T13;_T12=_T1D;}_T14=s;_T15=vd;_T16=_T15->name;_T17=vd;_T18=_T17->name;_T1C.f1=_T12(_T14,_T16,_T18);_T11=_T1C;}return _T11;}_TL112:{struct _tuple23 _T1C;
# 1555
_T1C.f0=0;_T1C.f1=s;_T19=_T1C;}return _T19;;}}
# 1559
static void Cyc_Absyndump_dumpstmt(struct Cyc_Absyn_Stmt*s,int expstmt,struct Cyc_Dict_Dict varsinblock){struct Cyc_Absyn_Stmt*_T0;unsigned _T1;struct Cyc_Absyn_Stmt*_T2;int*_T3;unsigned _T4;int _T5;struct Cyc_Absyn_Exp*_T6;int _T7;struct Cyc_Absyn_Stmt*_T8;struct Cyc_Dict_Dict _T9;struct Cyc_Absyn_Stmt*_TA;int*_TB;int _TC;struct Cyc_Absyn_Stmt*_TD;unsigned _TE;int _TF;int _T10;struct Cyc_Absyn_Stmt*_T11;int _T12;struct Cyc_Dict_Dict _T13;int _T14;struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T15;struct Cyc_Absyn_Exp*_T16;struct _fat_ptr _T17;struct _fat_ptr _T18;struct Cyc_Absyn_Exp*_T19;struct _fat_ptr _T1A;struct Cyc_Absyn_Stmt*_T1B;int*_T1C;unsigned _T1D;struct _fat_ptr _T1E;struct Cyc_Absyn_Stmt*_T1F;struct Cyc_Dict_Dict _T20;struct Cyc_Absyn_Stmt*_T21;int*_T22;int _T23;struct _fat_ptr _T24;struct Cyc_Absyn_Stmt*_T25;struct Cyc_Dict_Dict _T26;struct _tuple10 _T27;struct _fat_ptr _T28;struct _fat_ptr _T29;struct Cyc_Absyn_Stmt*_T2A;struct Cyc_Dict_Dict _T2B;struct _tuple10 _T2C;struct _tuple10 _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;struct Cyc_Absyn_Stmt*_T30;struct Cyc_Dict_Dict _T31;struct _tuple10 _T32;struct _fat_ptr _T33;struct Cyc_Absyn_Stmt*_T34;struct Cyc_Dict_Dict _T35;struct _fat_ptr _T36;struct _fat_ptr _T37;struct _fat_ptr _T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;struct _fat_ptr _T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;struct _fat_ptr _T3E;int _T3F;int _T40;struct _fat_ptr _T41;struct _fat_ptr _T42;struct Cyc_Absyn_Stmt*_T43;int _T44;struct Cyc_Dict_Dict _T45;int _T46;struct _fat_ptr _T47;struct _fat_ptr _T48;struct Cyc_Absyn_Stmt*_T49;int*_T4A;int _T4B;int _T4C;struct Cyc_Absyn_Stmt*_T4D;unsigned _T4E;int _T4F;int _T50;struct _fat_ptr _T51;struct _fat_ptr _T52;struct Cyc_Absyn_Stmt*_T53;int _T54;struct Cyc_Dict_Dict _T55;int _T56;struct _fat_ptr _T57;struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T58;struct Cyc_List_List*_T59;struct _fat_ptr _T5A;struct _fat_ptr _T5B;struct _fat_ptr _T5C;
# 1562
LOOP: _T0=s;_T1=_T0->loc;
Cyc_Absyndump_dumploc(_T1);_T2=s;{
void*_T5D=_T2->r;struct Cyc_Absyn_Decl*_T5E;struct Cyc_List_List*_T5F;struct _fat_ptr*_T60;struct Cyc_Absyn_Exp*_T61;struct Cyc_Absyn_Exp*_T62;struct Cyc_Absyn_Stmt*_T63;struct Cyc_Absyn_Stmt*_T64;struct Cyc_Absyn_Exp*_T65;_T3=(int*)_T5D;_T4=*_T3;switch(_T4){case 0:
# 1567
 Cyc_Absyndump_dump_semi();goto _LL0;case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_T5D;_T65=_T66->f1;}{struct Cyc_Absyn_Exp*e=_T65;_T5=- 100;_T6=e;
# 1570
Cyc_Absyndump_dumpexp_prec(_T5,_T6);
Cyc_Absyndump_dump_semi();goto _LL0;}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T5D;_T64=_T66->f1;_T63=_T66->f2;}{struct Cyc_Absyn_Stmt*s1=_T64;struct Cyc_Absyn_Stmt*s2=_T63;
# 1578
_TL117: if(1)goto _TL118;else{goto _TL119;}
# 1580
_TL118: _T7=Cyc_Absynpp_is_declaration(s1);if(!_T7)goto _TL11A;
# 1582
Cyc_Absyndump_dump_char(123);_T8=s1;_T9=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T8,0,_T9);
Cyc_Absyndump_dump_char(125);goto _TL11B;
# 1587
_TL11A: Cyc_Absyndump_dumpstmt(s1,0,varsinblock);_TL11B: _TA=s2;{
void*_T66=_TA->r;struct Cyc_Absyn_Stmt*_T67;struct Cyc_Absyn_Stmt*_T68;_TB=(int*)_T66;_TC=*_TB;if(_TC!=2)goto _TL11C;{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T69=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T66;_T68=_T69->f1;_T67=_T69->f2;}{struct Cyc_Absyn_Stmt*s3=_T68;struct Cyc_Absyn_Stmt*s4=_T67;_TD=s3;_TE=_TD->loc;
# 1591
Cyc_Absyndump_dumploc(_TE);
s1=s3;
s2=s4;goto _TL117;}_TL11C: _TF=
# 1596
Cyc_Absynpp_is_declaration(s2);if(!_TF)goto _TL11E;_T10=expstmt;
# 1598
if(!_T10)goto _TL120;
Cyc_Absyndump_dump_char(40);goto _TL121;_TL120: _TL121:
 Cyc_Absyndump_dump_char(123);_T11=s2;_T12=expstmt;_T13=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T11,_T12,_T13);
Cyc_Absyndump_dump_char(125);_T14=expstmt;
if(!_T14)goto _TL122;
# 1605
Cyc_Absyndump_dump_char(41);
Cyc_Absyndump_dump_semi();goto _TL123;_TL122: _TL123: goto _TL11F;
# 1610
_TL11E: Cyc_Absyndump_dumpstmt(s2,expstmt,varsinblock);_TL11F:
 return;;}goto _TL117;_TL119:;}case 3: _T15=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T5D;_T16=_T15->f1;if(_T16!=0)goto _TL124;_T17=
# 1616
_tag_fat("return;",sizeof(char),8U);Cyc_Absyndump_dump(_T17);goto _LL0;_TL124:{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T5D;_T65=_T66->f1;}{struct Cyc_Absyn_Exp*e=_T65;_T18=
# 1619
_tag_fat("return",sizeof(char),7U);Cyc_Absyndump_dump(_T18);_T19=
_check_null(e);Cyc_Absyndump_dumpexp(_T19);
Cyc_Absyndump_dump_semi();goto _LL0;}case 4:{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_T5D;_T65=_T66->f1;_T64=_T66->f2;_T63=_T66->f3;}{struct Cyc_Absyn_Exp*e=_T65;struct Cyc_Absyn_Stmt*s1=_T64;struct Cyc_Absyn_Stmt*s2=_T63;_T1A=
# 1625
_tag_fat("if(",sizeof(char),4U);Cyc_Absyndump_dump(_T1A);
Cyc_Absyndump_dumpexp(e);_T1B=s1;{
void*_T66=_T1B->r;_T1C=(int*)_T66;_T1D=*_T1C;switch(_T1D){case 2: goto _LL2E;case 12: _LL2E: goto _LL30;case 4: _LL30: goto _LL32;case 13: _LL32: _T1E=
# 1633
_tag_fat("){",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_T1E);_T1F=s1;_T20=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T1F,0,_T20);
Cyc_Absyndump_dump_char(125);goto _LL2A;default:
# 1638
 Cyc_Absyndump_dump_char(41);
Cyc_Absyndump_dumpstmt(s1,0,varsinblock);}_LL2A:;}_T21=s2;{
# 1641
void*_T66=_T21->r;_T22=(int*)_T66;_T23=*_T22;if(_T23!=0)goto _TL127;goto _LL35;_TL127: _T24=
# 1646
_tag_fat("else{",sizeof(char),6U);Cyc_Absyndump_dump(_T24);_T25=s2;_T26=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T25,0,_T26);
Cyc_Absyndump_dump_char(125);goto _LL35;_LL35:;}goto _LL0;}case 5:{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_T5D;_T27=_T66->f1;_T65=_T27.f0;_T64=_T66->f2;}{struct Cyc_Absyn_Exp*e=_T65;struct Cyc_Absyn_Stmt*s1=_T64;_T28=
# 1654
_tag_fat("while(",sizeof(char),7U);Cyc_Absyndump_dump(_T28);
Cyc_Absyndump_dumpexp(e);_T29=
_tag_fat("){",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_T29);_T2A=s1;_T2B=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T2A,0,_T2B);
Cyc_Absyndump_dump_char(125);goto _LL0;}case 9:{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_T5D;_T65=_T66->f1;_T2C=_T66->f2;_T62=_T2C.f0;_T2D=_T66->f3;_T61=_T2D.f0;_T64=_T66->f4;}{struct Cyc_Absyn_Exp*e1=_T65;struct Cyc_Absyn_Exp*e2=_T62;struct Cyc_Absyn_Exp*e3=_T61;struct Cyc_Absyn_Stmt*s1=_T64;_T2E=
# 1661
_tag_fat("for(",sizeof(char),5U);Cyc_Absyndump_dump(_T2E);
Cyc_Absyndump_dumpexp(e1);
Cyc_Absyndump_dump_semi();
Cyc_Absyndump_dumpexp(e2);
Cyc_Absyndump_dump_semi();
Cyc_Absyndump_dumpexp(e3);_T2F=
_tag_fat("){",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_T2F);_T30=s1;_T31=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T30,0,_T31);
Cyc_Absyndump_dump_char(125);goto _LL0;}case 14:{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_T5D;_T64=_T66->f1;_T32=_T66->f2;_T65=_T32.f0;}{struct Cyc_Absyn_Stmt*s1=_T64;struct Cyc_Absyn_Exp*e=_T65;_T33=
# 1672
_tag_fat("do{",sizeof(char),4U);Cyc_Absyndump_dump(_T33);_T34=s1;_T35=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T34,0,_T35);_T36=
_tag_fat("}while(",sizeof(char),8U);Cyc_Absyndump_dump_nospace(_T36);
Cyc_Absyndump_dumpexp(e);_T37=
_tag_fat(");",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_T37);goto _LL0;}case 6: _T38=
# 1680
_tag_fat("break;",sizeof(char),7U);Cyc_Absyndump_dump(_T38);goto _LL0;case 7: _T39=
# 1683
_tag_fat("continue;",sizeof(char),10U);Cyc_Absyndump_dump(_T39);goto _LL0;case 8:{struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*)_T5D;_T60=_T66->f1;}{struct _fat_ptr*x=_T60;_T3A=
# 1686
_tag_fat("goto",sizeof(char),5U);Cyc_Absyndump_dump(_T3A);
Cyc_Absyndump_dump_str(x);
Cyc_Absyndump_dump_semi();goto _LL0;}case 10:{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T5D;_T65=_T66->f1;_T5F=_T66->f2;}{struct Cyc_Absyn_Exp*e=_T65;struct Cyc_List_List*ss=_T5F;_T3B=
# 1692
_tag_fat("switch(",sizeof(char),8U);Cyc_Absyndump_dump(_T3B);
Cyc_Absyndump_dumpexp(e);_T3C=
_tag_fat("){",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_T3C);
Cyc_Absyndump_dumpswitchclauses(ss,varsinblock);
Cyc_Absyndump_dump_char(125);goto _LL0;}case 15:{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T5D;_T64=_T66->f1;_T5F=_T66->f2;}{struct Cyc_Absyn_Stmt*s1=_T64;struct Cyc_List_List*ss=_T5F;_T3D=
# 1699
_tag_fat("try",sizeof(char),4U);Cyc_Absyndump_dump(_T3D);
Cyc_Absyndump_dumpstmt(s1,0,varsinblock);_T3E=
_tag_fat("catch{",sizeof(char),7U);Cyc_Absyndump_dump(_T3E);
Cyc_Absyndump_dumpswitchclauses(ss,varsinblock);
Cyc_Absyndump_dump_char(125);goto _LL0;}case 12:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T5D;_T5E=_T66->f1;_T64=_T66->f2;}{struct Cyc_Absyn_Decl*d=_T5E;struct Cyc_Absyn_Stmt*s1=_T64;
# 1707
struct _tuple23 _T66=Cyc_Absyndump_shadows(d,varsinblock);struct Cyc_Dict_Dict _T67;int _T68;_T68=_T66.f0;_T67=_T66.f1;{int newblock=_T68;struct Cyc_Dict_Dict newvarsinblock=_T67;_T3F=newblock;
if(!_T3F)goto _TL129;_T40=expstmt;
# 1710
if(!_T40)goto _TL12B;_T41=
_tag_fat("({",sizeof(char),3U);Cyc_Absyndump_dump(_T41);goto _TL12C;
# 1713
_TL12B: _T42=_tag_fat("{",sizeof(char),2U);Cyc_Absyndump_dump(_T42);_TL12C:
 Cyc_Absyndump_dumpdecl(d);_T43=s1;_T44=expstmt;_T45=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T43,_T44,_T45);_T46=expstmt;
if(!_T46)goto _TL12D;_T47=
_tag_fat("});",sizeof(char),4U);Cyc_Absyndump_dump_nospace(_T47);goto _TL12E;
# 1719
_TL12D: _T48=_tag_fat("}",sizeof(char),2U);Cyc_Absyndump_dump(_T48);_TL12E: goto _TL12A;
# 1722
_TL129: _TL12F: if(1)goto _TL130;else{goto _TL131;}
# 1724
_TL130: Cyc_Absyndump_dumpdecl(d);_T49=s1;{
void*_T69=_T49->r;struct Cyc_Absyn_Stmt*_T6A;struct Cyc_Absyn_Decl*_T6B;_T4A=(int*)_T69;_T4B=*_T4A;if(_T4B!=12)goto _TL132;{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T6C=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T69;_T6B=_T6C->f1;_T6A=_T6C->f2;}{struct Cyc_Absyn_Decl*d2=_T6B;struct Cyc_Absyn_Stmt*s2=_T6A;
# 1728
struct _tuple23 _T6C=Cyc_Absyndump_shadows(d2,newvarsinblock);struct Cyc_Dict_Dict _T6D;int _T6E;_T6E=_T6C.f0;_T6D=_T6C.f1;{int newblock=_T6E;struct Cyc_Dict_Dict newvarsinblock2=_T6D;_T4C=newblock;
if(_T4C)goto _TL134;else{goto _TL136;}
# 1731
_TL136: _T4D=s1;_T4E=_T4D->loc;Cyc_Absyndump_dumploc(_T4E);
newvarsinblock=newvarsinblock2;
d=d2;
s1=s2;goto _TL12F;_TL134: goto _LL41;}}_TL132: _LL41:
# 1739
 Cyc_Absyndump_dumpstmt(s1,expstmt,newvarsinblock);
return;;}goto _TL12F;_TL131: _TL12A: goto _LL0;}}case 13:{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T5D;_T60=_T66->f1;_T64=_T66->f2;}{struct _fat_ptr*x=_T60;struct Cyc_Absyn_Stmt*s1=_T64;_T4F=
# 1749
Cyc_Absynpp_is_declaration(s1);if(!_T4F)goto _TL137;
# 1751
Cyc_Absyndump_dump_str(x);_T50=expstmt;
if(!_T50)goto _TL139;_T51=
_tag_fat(": ({",sizeof(char),5U);Cyc_Absyndump_dump_nospace(_T51);goto _TL13A;
# 1755
_TL139: _T52=_tag_fat(": {",sizeof(char),4U);Cyc_Absyndump_dump_nospace(_T52);_TL13A: _T53=s1;_T54=expstmt;_T55=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T53,_T54,_T55);_T56=expstmt;
if(!_T56)goto _TL13B;_T57=
_tag_fat("});",sizeof(char),4U);Cyc_Absyndump_dump_nospace(_T57);goto _TL13C;
# 1760
_TL13B: Cyc_Absyndump_dump_char(125);_TL13C: goto _TL138;
# 1764
_TL137: Cyc_Absyndump_dump_str(x);
Cyc_Absyndump_dump_char(58);
s=s1;goto LOOP;_TL138: goto _LL0;}default: _T58=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T5D;_T59=_T58->f1;if(_T59!=0)goto _TL13D;_T5A=
# 1772
_tag_fat("fallthru;",sizeof(char),10U);Cyc_Absyndump_dump(_T5A);goto _LL0;_TL13D:{struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T66=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T5D;_T5F=_T66->f1;}{struct Cyc_List_List*es=_T5F;_T5B=
# 1775
_tag_fat("fallthru(",sizeof(char),10U);Cyc_Absyndump_dump(_T5B);
Cyc_Absyndump_dumpexps_prec(20,es);_T5C=
_tag_fat(");",sizeof(char),3U);Cyc_Absyndump_dump_nospace(_T5C);goto _LL0;}}_LL0:;}}struct _tuple24{struct Cyc_List_List*f0;struct Cyc_Absyn_Pat*f1;};
# 1782
static void Cyc_Absyndump_dumpdp(struct _tuple24*dp){struct _tuple24*_T0;struct _tuple24 _T1;struct Cyc_List_List*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _tuple24*_T6;struct _tuple24 _T7;struct Cyc_Absyn_Pat*_T8;_T0=dp;_T1=*_T0;_T2=_T1.f0;_T3=
# 1785
_tag_fat("",sizeof(char),1U);_T4=_tag_fat("=",sizeof(char),2U);_T5=_tag_fat("=",sizeof(char),2U);Cyc_Absyndump_egroup(Cyc_Absyndump_dumpdesignator,_T2,_T3,_T4,_T5);_T6=dp;_T7=*_T6;_T8=_T7.f1;
Cyc_Absyndump_dumppat(_T8);}
# 1789
static struct _fat_ptr Cyc_Absyndump_pat_term(int dots){struct _fat_ptr _T0;int _T1;_T1=dots;
# 1792
if(!_T1)goto _TL13F;_T0=_tag_fat("...)",sizeof(char),5U);goto _TL140;_TL13F: _T0=_tag_fat(")",sizeof(char),2U);_TL140: return _T0;}
# 1795
static void Cyc_Absyndump_dumppat(struct Cyc_Absyn_Pat*p){struct Cyc_Absyn_Pat*_T0;int*_T1;unsigned _T2;struct _fat_ptr _T3;struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct*_T4;enum Cyc_Absyn_Sign _T5;int _T6;struct _fat_ptr _T7;struct Cyc_Int_pa_PrintArg_struct _T8;int _T9;struct _fat_ptr _TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc_Int_pa_PrintArg_struct _TD;int _TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc_Absyn_Enumfield*_T11;struct _tuple1*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*_T16;struct Cyc_Absyn_Pat*_T17;struct Cyc_Absyn_Pat*_T18;void*_T19;int*_T1A;int _T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T1E;struct Cyc_Absyn_Pat*_T1F;struct Cyc_Absyn_Pat*_T20;void*_T21;int*_T22;int _T23;struct Cyc_Absyn_Vardecl*_T24;struct _tuple1*_T25;struct Cyc_Absyn_Vardecl*_T26;struct _tuple1*_T27;struct _fat_ptr _T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;struct Cyc_Absyn_Vardecl*_T2C;struct Cyc_Absyn_Pat*_T2D;unsigned _T2E;struct _fat_ptr _T2F;struct Cyc_Absyn_Vardecl*_T30;struct _tuple1*_T31;void(*_T32)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T33;struct _fat_ptr _T34;struct _fat_ptr _T35;struct _fat_ptr _T36;void*_T37;int _T38;void(*_T39)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*(*_T3A)(struct Cyc_Absyn_Pat*(*)(struct _tuple24*),struct Cyc_List_List*);struct Cyc_List_List*(*_T3B)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Pat*(*_T3C)(struct _tuple24*);void*(*_T3D)(struct _tuple0*);struct Cyc_List_List*_T3E;struct Cyc_List_List*_T3F;struct _fat_ptr _T40;struct _fat_ptr _T41;struct _fat_ptr _T42;int*_T43;int _T44;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T45;void*_T46;int*_T47;int _T48;void*_T49;struct _tuple12 _T4A;struct _tuple1*_T4B;void(*_T4C)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T4D;struct _fat_ptr _T4E;struct _fat_ptr _T4F;struct _fat_ptr _T50;void(*_T51)(void(*)(struct _tuple24*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct _fat_ptr _T55;struct Cyc_Absyn_Datatypefield*_T56;struct _tuple1*_T57;void(*_T58)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T59;struct _fat_ptr _T5A;struct _fat_ptr _T5B;struct _fat_ptr _T5C;_T0=p;{
# 1798
void*_T5D=_T0->r;struct Cyc_Absyn_Exp*_T5E;struct Cyc_Absyn_Datatypefield*_T5F;int _T60;struct Cyc_List_List*_T61;struct Cyc_List_List*_T62;struct Cyc_Absyn_Vardecl*_T63;struct Cyc_Absyn_Pat*_T64;char _T65;void*_T66;struct _fat_ptr _T67;int _T68;_T1=(int*)_T5D;_T2=*_T1;switch(_T2){case 0:
# 1801
 Cyc_Absyndump_dump_char(95);goto _LL0;case 8: _T3=
# 1804
_tag_fat("NULL",sizeof(char),5U);Cyc_Absyndump_dump(_T3);goto _LL0;case 9: _T4=(struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct*)_T5D;_T5=_T4->f1;_T6=(int)_T5;switch(_T6){case Cyc_Absyn_None:{struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct*)_T5D;_T68=_T69->f2;}{int i=_T68;_T68=i;goto _LL8;}case Cyc_Absyn_Signed:{struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct*)_T5D;_T68=_T69->f2;}_LL8: {int i=_T68;{struct Cyc_Int_pa_PrintArg_struct _T69;_T69.tag=1;_T9=i;
# 1809
_T69.f1=(unsigned long)_T9;_T8=_T69;}{struct Cyc_Int_pa_PrintArg_struct _T69=_T8;void*_T6A[1];_T6A[0]=& _T69;_TA=_tag_fat("%d",sizeof(char),3U);_TB=_tag_fat(_T6A,sizeof(void*),1);_T7=Cyc_aprintf(_TA,_TB);}Cyc_Absyndump_dump(_T7);goto _LL0;}default:{struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct*)_T5D;_T68=_T69->f2;}{int i=_T68;{struct Cyc_Int_pa_PrintArg_struct _T69;_T69.tag=1;_TE=i;
# 1812
_T69.f1=(unsigned)_TE;_TD=_T69;}{struct Cyc_Int_pa_PrintArg_struct _T69=_TD;void*_T6A[1];_T6A[0]=& _T69;_TF=_tag_fat("%u",sizeof(char),3U);_T10=_tag_fat(_T6A,sizeof(void*),1);_TC=Cyc_aprintf(_TF,_T10);}Cyc_Absyndump_dump(_TC);goto _LL0;}};case 11:{struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct*)_T5D;_T67=_T69->f1;}{struct _fat_ptr x=_T67;
# 1815
Cyc_Absyndump_dump(x);goto _LL0;}case 12:{struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f2;}{struct Cyc_Absyn_Enumfield*ef=_T66;_T66=ef;goto _LL10;}case 13:{struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f2;}_LL10: {struct Cyc_Absyn_Enumfield*ef=_T66;_T11=ef;_T12=_T11->name;
# 1820
Cyc_Absyndump_dumpqvar(_T12);goto _LL0;}case 10:{struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct*)_T5D;_T65=_T69->f1;}{char ch=_T65;_T13=
# 1823
_tag_fat("'",sizeof(char),2U);Cyc_Absyndump_dump(_T13);_T14=
Cyc_Absynpp_char_escape(ch);Cyc_Absyndump_dump_nospace(_T14);_T15=
_tag_fat("'",sizeof(char),2U);Cyc_Absyndump_dump_nospace(_T15);goto _LL0;}case 3: _T16=(struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*)_T5D;_T17=_T16->f2;_T18=(struct Cyc_Absyn_Pat*)_T17;_T19=_T18->r;_T1A=(int*)_T19;_T1B=*_T1A;if(_T1B!=0)goto _TL143;{struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;}{struct Cyc_Absyn_Vardecl*vd=_T66;_T1C=
# 1828
_tag_fat("*",sizeof(char),2U);Cyc_Absyndump_dump(_T1C);_T66=vd;goto _LL16;}_TL143:{struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;_T64=_T69->f2;}{struct Cyc_Absyn_Vardecl*vd=_T66;struct Cyc_Absyn_Pat*p2=_T64;_T1D=
# 1834
_tag_fat("*",sizeof(char),2U);Cyc_Absyndump_dump(_T1D);_T66=vd;_T64=p2;goto _LL1A;}case 1: _T1E=(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T5D;_T1F=_T1E->f2;_T20=(struct Cyc_Absyn_Pat*)_T1F;_T21=_T20->r;_T22=(int*)_T21;_T23=*_T22;if(_T23!=0)goto _TL145;{struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;}_LL16:{struct Cyc_Absyn_Vardecl*vd=_T66;_T24=vd;_T25=_T24->name;
# 1831
Cyc_Absyndump_dumpqvar(_T25);goto _LL0;}_TL145:{struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;_T64=_T69->f2;}_LL1A: {struct Cyc_Absyn_Vardecl*vd=_T66;struct Cyc_Absyn_Pat*p2=_T64;_T26=vd;_T27=_T26->name;
# 1837
Cyc_Absyndump_dumpqvar(_T27);_T28=
_tag_fat(" as ",sizeof(char),5U);Cyc_Absyndump_dump(_T28);
Cyc_Absyndump_dumppat(p2);goto _LL0;}case 2:{struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;_T63=_T69->f2;}{struct Cyc_Absyn_Tvar*tv=_T66;struct Cyc_Absyn_Vardecl*vd=_T63;_T29=
# 1842
_tag_fat("alias",sizeof(char),6U);Cyc_Absyndump_dump(_T29);_T2A=
_tag_fat("<",sizeof(char),2U);Cyc_Absyndump_dump(_T2A);
Cyc_Absyndump_dumptvar(tv);_T2B=
_tag_fat(">",sizeof(char),2U);Cyc_Absyndump_dump(_T2B);_T2C=vd;_T2D=p;_T2E=_T2D->loc;
Cyc_Absyndump_dumpvardecl(_T2C,_T2E,0);goto _LL0;}case 5:{struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;}{struct Cyc_Absyn_Pat*p2=_T66;_T2F=
# 1849
_tag_fat("&",sizeof(char),2U);Cyc_Absyndump_dump(_T2F);
Cyc_Absyndump_dumppat(p2);goto _LL0;}case 4:{struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;_T63=_T69->f2;}{struct Cyc_Absyn_Tvar*tv=_T66;struct Cyc_Absyn_Vardecl*vd=_T63;_T30=vd;_T31=_T30->name;
# 1853
Cyc_Absyndump_dumpqvar(_T31);
Cyc_Absyndump_dump_char(60);
Cyc_Absyndump_dumptvar(tv);
Cyc_Absyndump_dump_char(62);goto _LL0;}case 14:{struct Cyc_Absyn_UnknownId_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_UnknownId_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;}{struct _tuple1*q=_T66;
# 1859
Cyc_Absyndump_dumpqvar(q);goto _LL0;}case 15:{struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct*)_T5D;_T66=_T69->f1;_T62=_T69->f2;_T68=_T69->f3;}{struct _tuple1*q=_T66;struct Cyc_List_List*ps=_T62;int dots=_T68;
# 1862
Cyc_Absyndump_dumpqvar(q);{
void(*_T69)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T32=_T69;}_T33=ps;_T34=_tag_fat("(",sizeof(char),2U);_T35=Cyc_Absyndump_pat_term(dots);_T36=_tag_fat(",",sizeof(char),2U);_T32(Cyc_Absyndump_dumppat,_T33,_T34,_T35,_T36);goto _LL0;}case 6:{struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct*)_T5D;_T37=_T69->f1;_T66=(void*)_T37;_T68=_T69->f2;_T62=_T69->f3;_T61=_T69->f4;_T60=_T69->f5;}{void*topt=_T66;int is_tuple=_T68;struct Cyc_List_List*exists=_T62;struct Cyc_List_List*dps=_T61;int dots=_T60;_T38=is_tuple;
# 1866
if(!_T38)goto _TL147;{
void(*_T69)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T39=_T69;}_T3B=Cyc_List_map;{struct Cyc_List_List*(*_T69)(struct Cyc_Absyn_Pat*(*)(struct _tuple24*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Pat*(*)(struct _tuple24*),struct Cyc_List_List*))_T3B;_T3A=_T69;}_T3D=Cyc_Core_snd;{struct Cyc_Absyn_Pat*(*_T69)(struct _tuple24*)=(struct Cyc_Absyn_Pat*(*)(struct _tuple24*))_T3D;_T3C=_T69;}_T3E=dps;_T3F=_T3A(_T3C,_T3E);_T40=_tag_fat("$(",sizeof(char),3U);_T41=Cyc_Absyndump_pat_term(dots);_T42=_tag_fat(",",sizeof(char),2U);_T39(Cyc_Absyndump_dumppat,_T3F,_T40,_T41,_T42);goto _TL148;
# 1870
_TL147: if(topt==0)goto _TL149;{
# 1872
void*_T69=Cyc_Absyn_compress(topt);union Cyc_Absyn_AggrInfo _T6A;_T43=(int*)_T69;_T44=*_T43;if(_T44!=0)goto _TL14B;_T45=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T69;_T46=_T45->f1;_T47=(int*)_T46;_T48=*_T47;if(_T48!=24)goto _TL14D;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T69;_T49=_T6B->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T6C=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T49;_T6A=_T6C->f1;}}{union Cyc_Absyn_AggrInfo info=_T6A;_T4A=
# 1875
Cyc_Absyn_aggr_kinded_name(info);_T4B=_T4A.f1;Cyc_Absyndump_dumpqvar(_T4B);goto _LL2B;}_TL14D: goto _LL2E;_TL14B: _LL2E: goto _LL2B;_LL2B:;}goto _TL14A;_TL149: _TL14A:
# 1881
 Cyc_Absyndump_dump_char(123);{
void(*_T69)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_egroup;_T4C=_T69;}_T4D=exists;_T4E=_tag_fat("<",sizeof(char),2U);_T4F=_tag_fat(">",sizeof(char),2U);_T50=_tag_fat(",",sizeof(char),2U);_T4C(Cyc_Absyndump_dumptvar,_T4D,_T4E,_T4F,_T50);{
void(*_T69)(void(*)(struct _tuple24*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple24*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T51=_T69;}_T52=dps;_T53=_tag_fat("",sizeof(char),1U);_T54=Cyc_Absyndump_pat_term(dots);_T55=_tag_fat(",",sizeof(char),2U);_T51(Cyc_Absyndump_dumpdp,_T52,_T53,_T54,_T55);_TL148: goto _LL0;}case 7:{struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct*)_T5D;_T5F=_T69->f2;_T62=_T69->f3;_T68=_T69->f4;}{struct Cyc_Absyn_Datatypefield*tuf=_T5F;struct Cyc_List_List*ps=_T62;int dots=_T68;_T56=tuf;_T57=_T56->name;
# 1887
Cyc_Absyndump_dumpqvar(_T57);
if(ps==0)goto _TL14F;{
void(*_T69)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Pat*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T58=_T69;}_T59=ps;_T5A=_tag_fat("(",sizeof(char),2U);_T5B=Cyc_Absyndump_pat_term(dots);_T5C=_tag_fat(",",sizeof(char),2U);_T58(Cyc_Absyndump_dumppat,_T59,_T5A,_T5B,_T5C);goto _TL150;_TL14F: _TL150: goto _LL0;}default:{struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*_T69=(struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*)_T5D;_T5E=_T69->f1;}{struct Cyc_Absyn_Exp*e=_T5E;
# 1892
Cyc_Absyndump_dumpexp(e);goto _LL0;}}_LL0:;}}
# 1897
static void Cyc_Absyndump_dumpdatatypefield(struct Cyc_Absyn_Datatypefield*ef){struct Cyc_Absyn_Datatypefield*_T0;struct _tuple1*_T1;struct Cyc_Absyn_Datatypefield*_T2;struct Cyc_List_List*_T3;struct Cyc_Absyn_Datatypefield*_T4;struct Cyc_List_List*_T5;_T0=ef;_T1=_T0->name;
# 1900
Cyc_Absyndump_dumpqvar(_T1);_T2=ef;_T3=_T2->typs;
if(_T3==0)goto _TL151;_T4=ef;_T5=_T4->typs;
Cyc_Absyndump_dumpargs(_T5);goto _TL152;_TL151: _TL152:;}
# 1905
static void Cyc_Absyndump_dumpdatatypefields(struct Cyc_List_List*fields){void(*_T0)(void(*)(struct Cyc_Absyn_Datatypefield*),struct Cyc_List_List*,struct _fat_ptr);struct Cyc_List_List*_T1;struct _fat_ptr _T2;{
# 1908
void(*_T3)(void(*)(struct Cyc_Absyn_Datatypefield*),struct Cyc_List_List*,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Datatypefield*),struct Cyc_List_List*,struct _fat_ptr))Cyc_Absyndump_dump_sep;_T0=_T3;}_T1=fields;_T2=_tag_fat(",",sizeof(char),2U);_T0(Cyc_Absyndump_dumpdatatypefield,_T1,_T2);}
# 1911
static void Cyc_Absyndump_dumpenumfield(struct Cyc_Absyn_Enumfield*ef){struct Cyc_Absyn_Enumfield*_T0;struct _tuple1*_T1;struct Cyc_Absyn_Enumfield*_T2;struct Cyc_Absyn_Exp*_T3;struct _fat_ptr _T4;struct Cyc_Absyn_Enumfield*_T5;struct Cyc_Absyn_Exp*_T6;struct Cyc_Absyn_Exp*_T7;_T0=ef;_T1=_T0->name;
# 1914
Cyc_Absyndump_dumpqvar(_T1);_T2=ef;_T3=_T2->tag;
if(_T3==0)goto _TL153;_T4=
# 1917
_tag_fat("=",sizeof(char),2U);Cyc_Absyndump_dump(_T4);_T5=ef;_T6=_T5->tag;_T7=
_check_null(_T6);Cyc_Absyndump_dumpexp(_T7);goto _TL154;_TL153: _TL154:;}
# 1922
static void Cyc_Absyndump_dumpenumfields(struct Cyc_List_List*fields){void(*_T0)(void(*)(struct Cyc_Absyn_Enumfield*),struct Cyc_List_List*,struct _fat_ptr);struct Cyc_List_List*_T1;struct _fat_ptr _T2;{
# 1925
void(*_T3)(void(*)(struct Cyc_Absyn_Enumfield*),struct Cyc_List_List*,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Enumfield*),struct Cyc_List_List*,struct _fat_ptr))Cyc_Absyndump_dump_sep;_T0=_T3;}_T1=fields;_T2=_tag_fat(",",sizeof(char),2U);_T0(Cyc_Absyndump_dumpenumfield,_T1,_T2);}
# 1928
static void Cyc_Absyndump_dumpaggrfields(struct Cyc_List_List*fields){struct Cyc_List_List*_T0;void*_T1;enum Cyc_Flags_C_Compilers _T2;void(*_T3)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*);void(*_T4)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct Cyc_Absyn_Tqual _T5;void*_T6;struct _fat_ptr*_T7;void(*_T8)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*);void(*_T9)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct Cyc_Absyn_Tqual _TA;void*_TB;struct _fat_ptr*_TC;struct Cyc_Absyn_Exp*_TD;unsigned _TE;struct _fat_ptr _TF;struct Cyc_List_List*_T10;
# 1931
_TL158: if(fields!=0)goto _TL156;else{goto _TL157;}
# 1933
_TL156: _T0=fields;_T1=_T0->hd;{struct Cyc_Absyn_Aggrfield*_T11=(struct Cyc_Absyn_Aggrfield*)_T1;struct Cyc_Absyn_Exp*_T12;struct Cyc_List_List*_T13;struct Cyc_Absyn_Exp*_T14;void*_T15;struct Cyc_Absyn_Tqual _T16;struct _fat_ptr*_T17;{struct Cyc_Absyn_Aggrfield _T18=*_T11;_T17=_T18.name;_T16=_T18.tq;_T15=_T18.type;_T14=_T18.width;_T13=_T18.attributes;_T12=_T18.requires_clause;}{struct _fat_ptr*name=_T17;struct Cyc_Absyn_Tqual tq=_T16;void*type=_T15;struct Cyc_Absyn_Exp*width=_T14;struct Cyc_List_List*atts=_T13;struct Cyc_Absyn_Exp*req=_T12;_T2=Cyc_Flags_c_compiler;if(_T2!=Cyc_Flags_Gcc_c)goto _TL159;_T4=Cyc_Absyndump_dumptqtd;{
# 1937
void(*_T18)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*))_T4;_T3=_T18;}_T5=tq;_T6=type;_T7=name;_T3(_T5,_T6,Cyc_Absyndump_dump_str,_T7);
Cyc_Absyndump_dumpatts(atts);goto _LL3;_TL159:
# 1941
 Cyc_Absyndump_dumpatts(atts);_T9=Cyc_Absyndump_dumptqtd;{
void(*_T18)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _fat_ptr*),struct _fat_ptr*))_T9;_T8=_T18;}_TA=tq;_TB=type;_TC=name;_T8(_TA,_TB,Cyc_Absyndump_dump_str,_TC);goto _LL3;_LL3: _TD=req;_TE=(unsigned)_TD;
# 1945
if(!_TE)goto _TL15B;_TF=
# 1947
_tag_fat("@requires ",sizeof(char),11U);Cyc_Absyndump_dump(_TF);
Cyc_Absyndump_dumpexp(req);goto _TL15C;_TL15B: _TL15C:
# 1950
 if(width==0)goto _TL15D;
# 1952
Cyc_Absyndump_dump_char(58);
Cyc_Absyndump_dumpexp(width);goto _TL15E;_TL15D: _TL15E:
# 1955
 Cyc_Absyndump_dump_semi();}}_T10=fields;
# 1931
fields=_T10->tl;goto _TL158;_TL157:;}
# 1959
static void Cyc_Absyndump_dumptypedefname(struct Cyc_Absyn_Typedefdecl*td){struct Cyc_Absyn_Typedefdecl*_T0;struct _tuple1*_T1;struct Cyc_Absyn_Typedefdecl*_T2;struct Cyc_List_List*_T3;_T0=td;_T1=_T0->name;
# 1962
Cyc_Absyndump_dumpqvar(_T1);_T2=td;_T3=_T2->tvs;
Cyc_Absyndump_dumptvars(_T3);}
# 1966
static void Cyc_Absyndump_dump_atts_qvar(struct Cyc_Absyn_Fndecl*fd){struct Cyc_Absyn_Fndecl*_T0;struct Cyc_Absyn_FnInfo _T1;struct Cyc_List_List*_T2;struct Cyc_Absyn_Fndecl*_T3;struct _tuple1*_T4;_T0=fd;_T1=_T0->i;_T2=_T1.attributes;
# 1969
Cyc_Absyndump_dumpatts(_T2);_T3=fd;_T4=_T3->name;
Cyc_Absyndump_dumpqvar(_T4);}struct _tuple25{void*f0;struct _tuple1*f1;};
# 1973
static void Cyc_Absyndump_dump_callconv_qvar(struct _tuple25*pr){struct _tuple25*_T0;struct _tuple25 _T1;int*_T2;unsigned _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct _tuple25*_T7;struct _tuple25 _T8;struct _tuple1*_T9;_T0=pr;_T1=*_T0;{
# 1976
void*_TA=_T1.f0;_T2=(int*)_TA;_T3=*_T2;switch(_T3){case 11: goto _LL0;case 1: _T4=
# 1979
_tag_fat("_stdcall",sizeof(char),9U);Cyc_Absyndump_dump(_T4);goto _LL0;case 2: _T5=
_tag_fat("_cdecl",sizeof(char),7U);Cyc_Absyndump_dump(_T5);goto _LL0;case 3: _T6=
_tag_fat("_fastcall",sizeof(char),10U);Cyc_Absyndump_dump(_T6);goto _LL0;default: goto _LL0;}_LL0:;}_T7=pr;_T8=*_T7;_T9=_T8.f1;
# 1984
Cyc_Absyndump_dumpqvar(_T9);}
# 1987
static void Cyc_Absyndump_dump_callconv_fdqvar(struct Cyc_Absyn_Fndecl*fd){struct Cyc_Absyn_Fndecl*_T0;struct Cyc_Absyn_FnInfo _T1;struct Cyc_List_List*_T2;struct Cyc_Absyn_Fndecl*_T3;struct _tuple1*_T4;_T0=fd;_T1=_T0->i;_T2=_T1.attributes;
# 1990
Cyc_Absyndump_dump_callconv(_T2);_T3=fd;_T4=_T3->name;
Cyc_Absyndump_dumpqvar(_T4);}
# 1994
static void Cyc_Absyndump_dumpid(struct Cyc_Absyn_Vardecl*vd){struct Cyc_Absyn_Vardecl*_T0;struct _tuple1*_T1;_T0=vd;_T1=_T0->name;
# 1997
Cyc_Absyndump_dumpqvar(_T1);}
# 2001
static int Cyc_Absyndump_is_char_ptr(void*t){void*_T0;int*_T1;unsigned _T2;void*_T3;void*_T4;void*_T5;int _T6;void*_T7;struct Cyc_Absyn_PtrInfo _T8;void*_T9;int*_TA;unsigned _TB;void*_TC;void*_TD;void*_TE;void*_TF;void*_T10;void*_T11;void*_T12;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T13;void*_T14;int*_T15;int _T16;void*_T17;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T18;void*_T19;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T1A;enum Cyc_Absyn_Size_of _T1B;void*_T1C;_T0=t;_T1=(int*)_T0;_T2=*_T1;switch(_T2){case 1: _T3=t;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T1D=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3;_T4=_T1D->f2;_T1C=(void*)_T4;}_T5=(void*)_T1C;if(_T5==0)goto _TL161;{void*def=_T1C;_T6=
# 2008
Cyc_Absyndump_is_char_ptr(def);return _T6;}_TL161: goto _LL5;case 4: _T7=t;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T1D=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T7;_T8=_T1D->f1;_T1C=_T8.elt_type;}{void*elt_typ=_T1C;
# 2011
_TL163: if(1)goto _TL164;else{goto _TL165;}
_TL164:{void*_T1D;_T9=elt_typ;_TA=(int*)_T9;_TB=*_TA;switch(_TB){case 1: _TC=elt_typ;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T1E=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_TC;_TD=_T1E->f2;_T1D=(void*)_TD;}_TE=(void*)_T1D;if(_TE==0)goto _TL167;{void*t=_T1D;
# 2015
elt_typ=t;goto _LL7;}_TL167: goto _LLE;case 8: _TF=elt_typ;{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T1E=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_TF;_T10=_T1E->f4;_T1D=(void*)_T10;}_T11=(void*)_T1D;if(_T11==0)goto _TL169;{void*t=_T1D;
# 2018
elt_typ=t;goto _LL7;}_TL169: goto _LLE;case 0: _T12=elt_typ;_T13=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T12;_T14=_T13->f1;_T15=(int*)_T14;_T16=*_T15;if(_T16!=1)goto _TL16B;_T17=elt_typ;_T18=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T17;_T19=_T18->f1;_T1A=(struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T19;_T1B=_T1A->f2;if(_T1B!=Cyc_Absyn_Char_sz)goto _TL16D;
# 2021
return 1;_TL16D: goto _LLE;_TL16B: goto _LLE;default: _LLE:
# 2023
 return 0;}_LL7:;}goto _TL163;_TL165:;}default: _LL5:
# 2027
 return 0;};}
# 2031
static void Cyc_Absyndump_dumpvardecl(struct Cyc_Absyn_Vardecl*vd,unsigned loc,int do_semi){struct Cyc_Absyn_Vardecl*_T0;enum Cyc_Flags_C_Compilers _T1;enum Cyc_Absyn_Scope _T2;int _T3;int _T4;int*_T5;int _T6;int _T7;void(*_T8)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _tuple1*),struct _tuple1*);void(*_T9)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct Cyc_Absyn_Tqual _TA;void*_TB;struct _tuple1*_TC;struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct*_TD;struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct*_TE;struct Cyc_List_List*_TF;int*_T10;int _T11;struct Cyc_List_List*_T12;int*_T13;unsigned _T14;struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct*_T15;struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct*_T16;struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct*_T17;struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct*_T18;struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct*_T19;struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct*_T1A;struct Cyc_List_List*_T1B;struct Cyc_List_List*_T1C;struct _tuple25 _T1D;void(*_T1E)(int,struct Cyc_List_List*,void(*)(struct _tuple25*),struct _tuple25*);void(*_T1F)(int,struct Cyc_List_List*,void(*)(void*),void*);int _T20;struct Cyc_List_List*_T21;struct _tuple25*_T22;int _T23;struct Cyc_Absyn_Exp*_T24;int _T25;struct Cyc_List_List*_T26;struct Cyc_Absyn_Exp*_T27;void*_T28;struct Cyc_Absyn_Tqual _T29;unsigned _T2A;struct _tuple1*_T2B;enum Cyc_Absyn_Scope _T2C;_T0=vd;{struct Cyc_Absyn_Vardecl _T2D=*_T0;_T2C=_T2D.sc;_T2B=_T2D.name;_T2A=_T2D.varloc;_T29=_T2D.tq;_T28=_T2D.type;_T27=_T2D.initializer;_T26=_T2D.attributes;_T25=_T2D.is_proto;_T24=_T2D.rename;}{enum Cyc_Absyn_Scope sc=_T2C;struct _tuple1*name=_T2B;unsigned varloc=_T2A;struct Cyc_Absyn_Tqual tq=_T29;void*type=_T28;struct Cyc_Absyn_Exp*initializer=_T27;struct Cyc_List_List*atts=_T26;int is_proto=_T25;struct Cyc_Absyn_Exp*rename=_T24;_T1=Cyc_Flags_c_compiler;if(_T1!=Cyc_Flags_Gcc_c)goto _TL16F;_T2=sc;_T3=(int)_T2;
# 2040
if(_T3!=3)goto _TL171;_T4=Cyc_Absyndump_qvar_to_Cids;if(!_T4)goto _TL171;{
void*_T2D=Cyc_Absyn_compress(type);_T5=(int*)_T2D;_T6=*_T5;if(_T6!=6)goto _TL173;_T7=is_proto;
# 2046
if(_T7)goto _TL175;else{goto _TL177;}
_TL177: Cyc_Absyndump_dumpscope(sc);goto _TL176;_TL175: _TL176: goto _LL8;_TL173:
# 2050
 Cyc_Absyndump_dumpscope(sc);_LL8:;}goto _TL172;
# 2053
_TL171: Cyc_Absyndump_dumpscope(sc);_TL172: _T9=Cyc_Absyndump_dumptqtd;{
void(*_T2D)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _tuple1*),struct _tuple1*)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(struct _tuple1*),struct _tuple1*))_T9;_T8=_T2D;}_TA=tq;_TB=type;_TC=name;_T8(_TA,_TB,Cyc_Absyndump_dumpqvar,_TC);
Cyc_Absyndump_dumpatts(atts);goto _LL3;_TL16F:
# 2058
 Cyc_Absyndump_dumpatts(atts);
Cyc_Absyndump_dumpscope(sc);{struct _RegionHandle _T2D=_new_region(0U,"temp");struct _RegionHandle*temp=& _T2D;_push_region(temp);{
# 2061
int is_cp=Cyc_Absyndump_is_char_ptr(type);
struct _tuple13 _T2E=Cyc_Absynpp_to_tms(temp,tq,type);struct Cyc_List_List*_T2F;void*_T30;struct Cyc_Absyn_Tqual _T31;_T31=_T2E.f0;_T30=_T2E.f1;_T2F=_T2E.f2;{struct Cyc_Absyn_Tqual tq=_T31;void*t=_T30;struct Cyc_List_List*tms=_T2F;_TD=& Cyc_Atts_Unused_att_val;_TE=(struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct*)_TD;{
# 2064
void*call_conv=(void*)_TE;{
struct Cyc_List_List*tms2=tms;_TL17B: if(tms2!=0)goto _TL179;else{goto _TL17A;}
_TL179: _TF=tms2;{void*_T32=_TF->hd;struct Cyc_List_List*_T33;_T10=(int*)_T32;_T11=*_T10;if(_T11!=5)goto _TL17C;{struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct*_T34=(struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct*)_T32;_T33=_T34->f2;}{struct Cyc_List_List*atts=_T33;
# 2069
_TL181: if(atts!=0)goto _TL17F;else{goto _TL180;}
_TL17F: _T12=atts;{void*_T34=_T12->hd;_T13=(int*)_T34;_T14=*_T13;switch(_T14){case 1: _T15=& Cyc_Atts_Stdcall_att_val;_T16=(struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct*)_T15;
# 2072
call_conv=(void*)_T16;goto _LL15;case 2: _T17=& Cyc_Atts_Cdecl_att_val;_T18=(struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct*)_T17;
call_conv=(void*)_T18;goto _LL15;case 3: _T19=& Cyc_Atts_Fastcall_att_val;_T1A=(struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct*)_T19;
call_conv=(void*)_T1A;goto _LL15;default: goto _LL15;}_LL15:;}_T1B=atts;
# 2069
atts=_T1B->tl;goto _TL181;_TL180: goto _LL10;}_TL17C: goto _LL10;_LL10:;}_T1C=tms2;
# 2065
tms2=_T1C->tl;goto _TL17B;_TL17A:;}
# 2081
Cyc_Absyndump_dumptq(tq);
Cyc_Absyndump_dumpntyp(t);{struct _tuple25 _T32;
_T32.f0=call_conv;_T32.f1=name;_T1D=_T32;}{struct _tuple25 pr=_T1D;_T1F=Cyc_Absyndump_dumptms;{
void(*_T32)(int,struct Cyc_List_List*,void(*)(struct _tuple25*),struct _tuple25*)=(void(*)(int,struct Cyc_List_List*,void(*)(struct _tuple25*),struct _tuple25*))_T1F;_T1E=_T32;}_T20=is_cp;_T21=Cyc_List_imp_rev(tms);_T22=& pr;_T1E(_T20,_T21,Cyc_Absyndump_dump_callconv_qvar,_T22);_npop_handler(0);goto _LL3;}}}}_pop_region();}_LL3:
# 2088
 if(rename==0)goto _TL183;
Cyc_Absyndump_dumpexp(rename);goto _TL184;_TL183: _TL184:
# 2091
 if(initializer==0)goto _TL185;
# 2093
Cyc_Absyndump_dump_char(61);
Cyc_Absyndump_dumpexp(initializer);goto _TL186;_TL185: _TL186: _T23=do_semi;
# 2096
if(!_T23)goto _TL187;
Cyc_Absyndump_dump_semi();goto _TL188;_TL187: _TL188:;}}
# 2100
static void Cyc_Absyndump_dump_aggrdecl(struct Cyc_Absyn_Aggrdecl*ad){struct Cyc_Absyn_Aggrdecl*_T0;enum Cyc_Absyn_Scope _T1;struct Cyc_Absyn_Aggrdecl*_T2;struct Cyc_Absyn_AggrdeclImpl*_T3;struct Cyc_Absyn_Aggrdecl*_T4;struct Cyc_Absyn_AggrdeclImpl*_T5;int _T6;struct _fat_ptr _T7;struct Cyc_Absyn_Aggrdecl*_T8;enum Cyc_Absyn_AggrKind _T9;struct Cyc_Absyn_Aggrdecl*_TA;struct _tuple1*_TB;struct Cyc_Absyn_Aggrdecl*_TC;struct Cyc_List_List*_TD;struct Cyc_Absyn_Aggrdecl*_TE;struct Cyc_Absyn_AggrdeclImpl*_TF;void(*_T10)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Aggrdecl*_T11;struct Cyc_Absyn_AggrdeclImpl*_T12;struct Cyc_Absyn_AggrdeclImpl*_T13;struct Cyc_List_List*_T14;struct _fat_ptr _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct Cyc_Absyn_Aggrdecl*_T18;struct Cyc_Absyn_AggrdeclImpl*_T19;struct Cyc_Absyn_AggrdeclImpl*_T1A;struct Cyc_List_List*_T1B;struct Cyc_Absyn_Aggrdecl*_T1C;struct Cyc_Absyn_AggrdeclImpl*_T1D;struct Cyc_Absyn_AggrdeclImpl*_T1E;struct Cyc_List_List*_T1F;struct Cyc_Absyn_Aggrdecl*_T20;struct Cyc_Absyn_AggrdeclImpl*_T21;struct Cyc_Absyn_AggrdeclImpl*_T22;struct Cyc_List_List*_T23;char _T24;struct Cyc_Absyn_Aggrdecl*_T25;struct Cyc_Absyn_AggrdeclImpl*_T26;struct Cyc_List_List*_T27;char _T28;int _T29;struct Cyc_Absyn_Aggrdecl*_T2A;struct Cyc_Absyn_AggrdeclImpl*_T2B;struct Cyc_Absyn_AggrdeclImpl*_T2C;struct Cyc_List_List*_T2D;struct Cyc_Absyn_Aggrdecl*_T2E;struct Cyc_Absyn_AggrdeclImpl*_T2F;struct Cyc_Absyn_AggrdeclImpl*_T30;struct Cyc_List_List*_T31;struct Cyc_Absyn_Aggrdecl*_T32;struct Cyc_List_List*_T33;_T0=ad;_T1=_T0->sc;
# 2103
Cyc_Absyndump_dumpscope(_T1);_T2=ad;_T3=_T2->impl;
if(_T3==0)goto _TL189;_T4=ad;_T5=_T4->impl;_T6=_T5->tagged;if(!_T6)goto _TL189;_T7=
_tag_fat("@tagged ",sizeof(char),9U);Cyc_Absyndump_dump(_T7);goto _TL18A;_TL189: _TL18A: _T8=ad;_T9=_T8->kind;
Cyc_Absyndump_dumpaggr_kind(_T9);_TA=ad;_TB=_TA->name;
Cyc_Absyndump_dumpqvar(_TB);_TC=ad;_TD=_TC->tvs;
Cyc_Absyndump_dumpkindedtvars(_TD);_TE=ad;_TF=_TE->impl;
if(_TF==0)goto _TL18B;
# 2111
Cyc_Absyndump_dump_char(123);{
void(*_T34)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_egroup;_T10=_T34;}_T11=ad;_T12=_T11->impl;_T13=_check_null(_T12);_T14=_T13->exist_vars;_T15=_tag_fat("<",sizeof(char),2U);_T16=_tag_fat(">",sizeof(char),2U);_T17=_tag_fat(",",sizeof(char),2U);_T10(Cyc_Absyndump_dumpkindedtvar,_T14,_T15,_T16,_T17);_T18=ad;_T19=_T18->impl;_T1A=
_check_null(_T19);_T1B=_T1A->effconstr;if(_T1B==0)goto _TL18D;
# 2115
Cyc_Absyndump_dump_char(58);_T1C=ad;_T1D=_T1C->impl;_T1E=
_check_null(_T1D);_T1F=_T1E->effconstr;Cyc_Absyndump_dump_effc(_T1F);goto _TL18E;_TL18D: _TL18E: _T20=ad;_T21=_T20->impl;_T22=
# 2118
_check_null(_T21);_T23=_T22->qual_bnd;if(_T23==0)goto _TL18F;_T25=ad;_T26=_T25->impl;_T27=_T26->effconstr;
# 2120
if(_T27!=0)goto _TL191;_T24=':';goto _TL192;_TL191: _T24=',';_TL192:{char sep=_T24;_T28=sep;_T29=(int)_T28;
Cyc_Absyndump_dump_char(_T29);_T2A=ad;_T2B=_T2A->impl;_T2C=
_check_null(_T2B);_T2D=_T2C->qual_bnd;Cyc_Absyndump_dump_qualbnd(_T2D);}goto _TL190;_TL18F: _TL190: _T2E=ad;_T2F=_T2E->impl;_T30=
# 2124
_check_null(_T2F);_T31=_T30->fields;Cyc_Absyndump_dumpaggrfields(_T31);
Cyc_Absyndump_dump_char(125);_T32=ad;_T33=_T32->attributes;
Cyc_Absyndump_dumpatts(_T33);goto _TL18C;_TL18B: _TL18C:;}
# 2130
static void Cyc_Absyndump_dump_enumdecl(struct Cyc_Absyn_Enumdecl*ed){struct Cyc_Absyn_Enumdecl*_T0;struct _fat_ptr _T1;struct Cyc_Core_Opt*_T2;void*_T3;struct Cyc_List_List*_T4;struct Cyc_Core_Opt*_T5;struct _tuple1*_T6;enum Cyc_Absyn_Scope _T7;_T0=ed;{struct Cyc_Absyn_Enumdecl _T8=*_T0;_T7=_T8.sc;_T6=_T8.name;_T5=_T8.fields;}{enum Cyc_Absyn_Scope sc=_T7;struct _tuple1*nm=_T6;struct Cyc_Core_Opt*fields=_T5;
# 2135
Cyc_Absyndump_dumpscope(sc);_T1=
_tag_fat("enum ",sizeof(char),6U);Cyc_Absyndump_dump(_T1);
Cyc_Absyndump_dumpqvar(nm);
if(fields==0)goto _TL193;
# 2140
Cyc_Absyndump_dump_char(123);_T2=fields;_T3=_T2->v;_T4=(struct Cyc_List_List*)_T3;
Cyc_Absyndump_dumpenumfields(_T4);
Cyc_Absyndump_dump_char(125);goto _TL194;_TL193: _TL194:;}}
# 2146
static void Cyc_Absyndump_dump_datatypedecl(struct Cyc_Absyn_Datatypedecl*dd){struct Cyc_Absyn_Datatypedecl*_T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Core_Opt*_T4;void*_T5;struct Cyc_List_List*_T6;int _T7;struct Cyc_Core_Opt*_T8;struct Cyc_List_List*_T9;struct _tuple1*_TA;enum Cyc_Absyn_Scope _TB;_T0=dd;{struct Cyc_Absyn_Datatypedecl _TC=*_T0;_TB=_TC.sc;_TA=_TC.name;_T9=_TC.tvs;_T8=_TC.fields;_T7=_TC.is_extensible;}{enum Cyc_Absyn_Scope sc=_TB;struct _tuple1*name=_TA;struct Cyc_List_List*tvs=_T9;struct Cyc_Core_Opt*fields=_T8;int is_x=_T7;
# 2151
Cyc_Absyndump_dumpscope(sc);_T1=is_x;
if(!_T1)goto _TL195;_T2=
_tag_fat("@extensible ",sizeof(char),13U);Cyc_Absyndump_dump(_T2);goto _TL196;_TL195: _TL196: _T3=
_tag_fat("datatype ",sizeof(char),10U);Cyc_Absyndump_dump(_T3);
Cyc_Absyndump_dumpqvar(name);
Cyc_Absyndump_dumptvars(tvs);
if(fields==0)goto _TL197;
# 2159
Cyc_Absyndump_dump_char(123);_T4=fields;_T5=_T4->v;_T6=(struct Cyc_List_List*)_T5;
Cyc_Absyndump_dumpdatatypefields(_T6);
Cyc_Absyndump_dump_char(125);goto _TL198;_TL197: _TL198:;}}struct _tuple26{unsigned f0;struct _tuple1*f1;int f2;};
# 2165
static void Cyc_Absyndump_dumpexport(struct _tuple26*tup){struct _tuple26*_T0;struct _tuple26 _T1;struct _tuple1*_T2;_T0=tup;_T1=*_T0;_T2=_T1.f1;
# 2168
Cyc_Absyndump_dumpqvar(_T2);}
# 2171
static void Cyc_Absyndump_dump_braced_decls(struct Cyc_List_List*tdl){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;struct Cyc_List_List*_T3;
# 2174
Cyc_Absyndump_dump_char(123);
_TL19C: if(tdl!=0)goto _TL19A;else{goto _TL19B;}
_TL19A: _T0=tdl;_T1=_T0->hd;_T2=(struct Cyc_Absyn_Decl*)_T1;Cyc_Absyndump_dumpdecl(_T2);_T3=tdl;
# 2175
tdl=_T3->tl;goto _TL19C;_TL19B:
# 2177
 Cyc_Absyndump_dump_char(125);}
# 2180
static void Cyc_Absyndump_dumpdecl(struct Cyc_Absyn_Decl*d){struct Cyc_Absyn_Decl*_T0;unsigned _T1;struct Cyc_Absyn_Decl*_T2;int*_T3;unsigned _T4;enum Cyc_Flags_C_Compilers _T5;struct Cyc_Absyn_Fndecl*_T6;struct Cyc_Absyn_FnInfo _T7;struct Cyc_List_List*_T8;struct Cyc_Absyn_Fndecl*_T9;int _TA;enum Cyc_Flags_C_Compilers _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct Cyc_Absyn_Fndecl*_TE;enum Cyc_Absyn_Scope _TF;struct Cyc_Absyn_Fndecl*_T10;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T11;struct Cyc_Absyn_Fndecl*_T12;void*_T13;struct Cyc_Absyn_Fndecl*_T14;void*_T15;int*_T16;int _T17;struct Cyc_Absyn_Fndecl*_T18;struct Cyc_Absyn_Fndecl*_T19;struct Cyc_Absyn_FnInfo _T1A;struct Cyc_List_List*_T1B;struct Cyc_Absyn_FnInfo _T1C;struct Cyc_List_List*_T1D;int(*_T1E)(struct _fat_ptr,struct _fat_ptr);void*(*_T1F)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T20;struct _fat_ptr _T21;enum Cyc_Flags_C_Compilers _T22;void(*_T23)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*);void(*_T24)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct Cyc_Absyn_Tqual _T25;void*_T26;struct Cyc_Absyn_Fndecl*_T27;void(*_T28)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*);void(*_T29)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct Cyc_Absyn_Tqual _T2A;void*_T2B;struct Cyc_Absyn_Fndecl*_T2C;struct Cyc_Absyn_Fndecl*_T2D;struct Cyc_Absyn_Stmt*_T2E;struct Cyc_Dict_Dict _T2F;struct Cyc_Absyn_Vardecl*_T30;struct Cyc_Absyn_Decl*_T31;unsigned _T32;void(*_T33)(void(*)(struct Cyc_Absyn_Vardecl*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T34;struct _fat_ptr _T35;struct _fat_ptr _T36;struct _fat_ptr _T37;struct _fat_ptr _T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;struct _fat_ptr _T3B;struct Cyc_Absyn_Vardecl*_T3C;struct _tuple1*_T3D;struct Cyc_Absyn_Exp*_T3E;unsigned _T3F;struct _fat_ptr _T40;struct _fat_ptr _T41;struct _fat_ptr _T42;void*_T43;struct Cyc_Absyn_Typedefdecl*_T44;void*_T45;struct Cyc_Absyn_Typedefdecl*_T46;struct Cyc_Core_Opt*_T47;struct Cyc_Absyn_Typedefdecl*_T48;void(*_T49)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Typedefdecl*),struct Cyc_Absyn_Typedefdecl*);void(*_T4A)(struct Cyc_Absyn_Tqual,void*,void(*)(void*),void*);struct Cyc_Absyn_Typedefdecl*_T4B;struct Cyc_Absyn_Tqual _T4C;void*_T4D;struct Cyc_Absyn_Typedefdecl*_T4E;struct Cyc_Absyn_Typedefdecl*_T4F;struct Cyc_List_List*_T50;struct _fat_ptr _T51;struct _fat_ptr _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct _fat_ptr _T55;struct _tuple11*_T56;unsigned _T57;struct _fat_ptr _T58;struct _tuple11*_T59;struct Cyc_List_List*_T5A;unsigned _T5B;void(*_T5C)(void(*)(struct _tuple1*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T5D;struct _fat_ptr _T5E;struct _fat_ptr _T5F;struct _fat_ptr _T60;void(*_T61)(void(*)(struct _tuple26*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T62;struct _fat_ptr _T63;struct _fat_ptr _T64;struct _fat_ptr _T65;struct _fat_ptr _T66;struct _fat_ptr _T67;struct _fat_ptr _T68;struct _fat_ptr _T69;_T0=d;_T1=_T0->loc;
# 2183
Cyc_Absyndump_dumploc(_T1);_T2=d;{
void*_T6A=_T2->r;struct _tuple11*_T6B;struct Cyc_List_List*_T6C;struct Cyc_List_List*_T6D;struct _tuple1*_T6E;struct _fat_ptr*_T6F;struct Cyc_Absyn_Typedefdecl*_T70;struct Cyc_Absyn_Tvar*_T71;struct Cyc_Absyn_Exp*_T72;struct Cyc_Absyn_Pat*_T73;struct Cyc_List_List*_T74;struct Cyc_Absyn_Enumdecl*_T75;struct Cyc_Absyn_Datatypedecl*_T76;struct Cyc_Absyn_Aggrdecl*_T77;struct Cyc_Absyn_Vardecl*_T78;struct Cyc_Absyn_Fndecl*_T79;_T3=(int*)_T6A;_T4=*_T3;switch(_T4){case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T6A;_T79=_T7A->f1;}{struct Cyc_Absyn_Fndecl*fd=_T79;_T5=Cyc_Flags_c_compiler;if(_T5!=Cyc_Flags_Vc_c)goto _TL19E;_T6=fd;_T7=_T6->i;_T8=_T7.attributes;
# 2190
Cyc_Absyndump_dumpatts(_T8);goto _LL23;_TL19E: goto _LL23;_LL23: _T9=fd;_TA=_T9->is_inline;
# 2195
if(!_TA)goto _TL1A0;_TB=Cyc_Flags_c_compiler;if(_TB!=Cyc_Flags_Vc_c)goto _TL1A2;_TC=
# 2198
_tag_fat("__inline",sizeof(char),9U);Cyc_Absyndump_dump(_TC);goto _LL28;_TL1A2: _TD=
_tag_fat("inline",sizeof(char),7U);Cyc_Absyndump_dump(_TD);goto _LL28;_LL28: goto _TL1A1;_TL1A0: _TL1A1: _TE=fd;_TF=_TE->sc;
# 2201
Cyc_Absyndump_dumpscope(_TF);_T10=fd;{
# 2203
struct Cyc_Absyn_FnInfo type_info=_T10->i;
type_info.attributes=0;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T7A=_cycalloc(sizeof(struct Cyc_Absyn_FnType_Absyn_Type_struct));_T7A->tag=6;
_T7A->f1=type_info;_T11=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T7A;}{void*t=(void*)_T11;_T12=fd;_T13=_T12->cached_type;
if(_T13==0)goto _TL1A4;_T14=fd;_T15=_T14->cached_type;{
void*_T7A=Cyc_Absyn_compress(_T15);struct Cyc_Absyn_FnInfo _T7B;_T16=(int*)_T7A;_T17=*_T16;if(_T17!=6)goto _TL1A6;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T7C=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T7A;_T7B=_T7C->f1;}{struct Cyc_Absyn_FnInfo i=_T7B;_T18=fd;_T19=fd;_T1A=_T19->i;_T1B=_T1A.attributes;_T1C=i;_T1D=_T1C.attributes;
# 2210
_T18->i.attributes=Cyc_List_append(_T1B,_T1D);goto _LL2D;}_TL1A6: _T1F=Cyc_Warn_impos;{
# 2213
int(*_T7C)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T1F;_T1E=_T7C;}_T20=_tag_fat("function has non-function type",sizeof(char),31U);_T21=_tag_fat(0U,sizeof(void*),0);_T1E(_T20,_T21);_LL2D:;}goto _TL1A5;_TL1A4: _TL1A5: _T22=Cyc_Flags_c_compiler;if(_T22!=Cyc_Flags_Gcc_c)goto _TL1A8;_T24=Cyc_Absyndump_dumptqtd;{
# 2219
void(*_T7A)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*))_T24;_T23=_T7A;}_T25=Cyc_Absyn_empty_tqual(0U);_T26=t;_T27=fd;_T23(_T25,_T26,Cyc_Absyndump_dump_atts_qvar,_T27);goto _LL32;_TL1A8: _T29=Cyc_Absyndump_dumptqtd;{
# 2222
void(*_T7A)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*))_T29;_T28=_T7A;}_T2A=Cyc_Absyn_empty_tqual(0U);_T2B=t;_T2C=fd;_T28(_T2A,_T2B,Cyc_Absyndump_dump_callconv_fdqvar,_T2C);goto _LL32;_LL32:
# 2225
 Cyc_Absyndump_dump_char(123);_T2D=fd;_T2E=_T2D->body;_T2F=
Cyc_Absyndump_mt_set();Cyc_Absyndump_dumpstmt(_T2E,0,_T2F);
Cyc_Absyndump_dump_char(125);goto _LL0;}}}case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T6A;_T78=_T7A->f1;}{struct Cyc_Absyn_Vardecl*vd=_T78;_T30=vd;_T31=d;_T32=_T31->loc;
# 2230
Cyc_Absyndump_dumpvardecl(_T30,_T32,1);goto _LL0;}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T6A;_T77=_T7A->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T77;
# 2233
Cyc_Absyndump_dump_aggrdecl(ad);
Cyc_Absyndump_dump_semi();goto _LL0;}case 6:{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_T6A;_T76=_T7A->f1;}{struct Cyc_Absyn_Datatypedecl*dd=_T76;
# 2237
Cyc_Absyndump_dump_datatypedecl(dd);
Cyc_Absyndump_dump_semi();goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T6A;_T75=_T7A->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T75;
# 2241
Cyc_Absyndump_dump_enumdecl(ed);
Cyc_Absyndump_dump_semi();goto _LL0;}case 3:{struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*)_T6A;_T74=_T7A->f1;}{struct Cyc_List_List*vds=_T74;{
# 2245
void(*_T7A)(void(*)(struct Cyc_Absyn_Vardecl*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct Cyc_Absyn_Vardecl*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T33=_T7A;}_T34=vds;_T35=_tag_fat(" let ",sizeof(char),6U);_T36=_tag_fat(";",sizeof(char),2U);_T37=_tag_fat(",",sizeof(char),2U);_T33(Cyc_Absyndump_dumpid,_T34,_T35,_T36,_T37);goto _LL0;}case 2:{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T6A;_T73=_T7A->f1;_T72=_T7A->f3;}{struct Cyc_Absyn_Pat*p=_T73;struct Cyc_Absyn_Exp*e=_T72;_T38=
# 2248
_tag_fat("let",sizeof(char),4U);Cyc_Absyndump_dump(_T38);
Cyc_Absyndump_dumppat(p);
Cyc_Absyndump_dump_char(61);
Cyc_Absyndump_dumpexp(e);
Cyc_Absyndump_dump_semi();goto _LL0;}case 4:{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_T6A;_T71=_T7A->f1;_T78=_T7A->f2;_T72=_T7A->f3;}{struct Cyc_Absyn_Tvar*tv=_T71;struct Cyc_Absyn_Vardecl*vd=_T78;struct Cyc_Absyn_Exp*open_exp_opt=_T72;_T39=
# 2255
_tag_fat("region",sizeof(char),7U);Cyc_Absyndump_dump(_T39);_T3A=
_tag_fat("<",sizeof(char),2U);Cyc_Absyndump_dump(_T3A);
Cyc_Absyndump_dumptvar(tv);_T3B=
_tag_fat("> ",sizeof(char),3U);Cyc_Absyndump_dump(_T3B);_T3C=vd;_T3D=_T3C->name;
Cyc_Absyndump_dumpqvar(_T3D);_T3E=open_exp_opt;_T3F=(unsigned)_T3E;
if(!_T3F)goto _TL1AA;_T40=
# 2262
_tag_fat(" = open(",sizeof(char),9U);Cyc_Absyndump_dump(_T40);
Cyc_Absyndump_dumpexp(open_exp_opt);_T41=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T41);goto _TL1AB;_TL1AA: _TL1AB:
# 2266
 Cyc_Absyndump_dump_semi();goto _LL0;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T6A;_T70=_T7A->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T70;_T42=
# 2273
_tag_fat("typedef",sizeof(char),8U);Cyc_Absyndump_dump(_T42);_T44=td;_T45=_T44->defn;
if(_T45!=0)goto _TL1AC;_T46=td;_T47=_T46->kind;_T43=
Cyc_Absyn_new_evar(_T47,0);goto _TL1AD;_TL1AC: _T48=td;_T43=_T48->defn;_TL1AD: {
# 2274
void*t=_T43;_T4A=Cyc_Absyndump_dumptqtd;{
# 2277
void(*_T7A)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Typedefdecl*),struct Cyc_Absyn_Typedefdecl*)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Typedefdecl*),struct Cyc_Absyn_Typedefdecl*))_T4A;_T49=_T7A;}_T4B=td;_T4C=_T4B->tq;_T4D=t;_T4E=td;_T49(_T4C,_T4D,Cyc_Absyndump_dumptypedefname,_T4E);_T4F=td;_T50=_T4F->atts;
Cyc_Absyndump_dumpatts(_T50);
Cyc_Absyndump_dump_semi();goto _LL0;}}case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T6A;_T6F=_T7A->f1;_T74=_T7A->f2;}{struct _fat_ptr*v=_T6F;struct Cyc_List_List*tdl=_T74;_T51=
# 2283
_tag_fat("namespace",sizeof(char),10U);Cyc_Absyndump_dump(_T51);
Cyc_Absyndump_dump_str(v);
Cyc_Absyndump_dump_braced_decls(tdl);goto _LL0;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T6A;_T6E=_T7A->f1;_T74=_T7A->f2;}{struct _tuple1*q=_T6E;struct Cyc_List_List*tdl=_T74;_T52=
# 2288
_tag_fat("using",sizeof(char),6U);Cyc_Absyndump_dump(_T52);
Cyc_Absyndump_dumpqvar(q);
Cyc_Absyndump_dump_braced_decls(tdl);goto _LL0;}case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T6A;_T74=_T7A->f1;}{struct Cyc_List_List*tdl=_T74;_T53=
# 2293
_tag_fat("extern \"C\" ",sizeof(char),12U);Cyc_Absyndump_dump(_T53);
Cyc_Absyndump_dump_braced_decls(tdl);goto _LL0;}case 12:{struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T7A=(struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T6A;_T74=_T7A->f1;_T6D=_T7A->f2;_T6C=_T7A->f3;_T6B=_T7A->f4;}{struct Cyc_List_List*tdl=_T74;struct Cyc_List_List*ovrs=_T6D;struct Cyc_List_List*exs=_T6C;struct _tuple11*wc=_T6B;_T54=
# 2297
_tag_fat("extern \"C include\" ",sizeof(char),20U);Cyc_Absyndump_dump(_T54);
Cyc_Absyndump_dump_braced_decls(tdl);
if(ovrs==0)goto _TL1AE;_T55=
# 2301
_tag_fat(" cyclone_override ",sizeof(char),19U);Cyc_Absyndump_dump(_T55);
Cyc_Absyndump_dump_braced_decls(ovrs);goto _TL1AF;_TL1AE: _TL1AF: _T56=wc;_T57=(unsigned)_T56;
# 2304
if(!_T57)goto _TL1B0;_T58=
# 2306
_tag_fat(" export { * }\n",sizeof(char),15U);Cyc_Absyndump_dump(_T58);{struct Cyc_List_List*_T7A;_T59=wc;{struct _tuple11 _T7B=*_T59;_T7A=_T7B.f1;}{struct Cyc_List_List*hides=_T7A;_T5A=hides;_T5B=(unsigned)_T5A;
# 2308
if(!_T5B)goto _TL1B2;{
void(*_T7B)(void(*)(struct _tuple1*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple1*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_egroup;_T5C=_T7B;}_T5D=hides;_T5E=_tag_fat(" cyclone_hide {",sizeof(char),16U);_T5F=_tag_fat("}",sizeof(char),2U);_T60=_tag_fat(",",sizeof(char),2U);_T5C(Cyc_Absyndump_dumpqvar,_T5D,_T5E,_T5F,_T60);goto _TL1B3;_TL1B2: _TL1B3:;}}goto _TL1B1;
# 2312
_TL1B0:{void(*_T7A)(void(*)(struct _tuple26*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _tuple26*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_egroup;_T61=_T7A;}_T62=exs;_T63=_tag_fat(" export {",sizeof(char),10U);_T64=_tag_fat("}",sizeof(char),2U);_T65=_tag_fat(",",sizeof(char),2U);_T61(Cyc_Absyndump_dumpexport,_T62,_T63,_T64,_T65);_TL1B1: goto _LL0;}case 13: _T66=
# 2315
_tag_fat(" __cyclone_port_on__; ",sizeof(char),23U);Cyc_Absyndump_dump(_T66);goto _LL0;case 14: _T67=
# 2318
_tag_fat(" __cyclone_port_off__; ",sizeof(char),24U);Cyc_Absyndump_dump(_T67);goto _LL0;case 15: _T68=
# 2321
_tag_fat(" __tempest_on__; ",sizeof(char),18U);Cyc_Absyndump_dump(_T68);goto _LL0;default: _T69=
# 2324
_tag_fat(" __tempest_off__; ",sizeof(char),19U);Cyc_Absyndump_dump(_T69);goto _LL0;}_LL0:;}}
# 2329
static void Cyc_Absyndump_dump_upperbound(struct Cyc_Absyn_Exp*e){struct _tuple14 _T0;unsigned _T1;struct _tuple14 _T2;int _T3;
# 2332
struct _tuple14 pr=Cyc_Evexp_eval_const_uint_exp(e);_T0=pr;_T1=_T0.f0;
if(_T1!=1U)goto _TL1B6;else{goto _TL1B7;}_TL1B7: _T2=pr;_T3=_T2.f1;if(_T3)goto _TL1B4;else{goto _TL1B6;}
# 2335
_TL1B6: Cyc_Absyndump_dump_char(123);
Cyc_Absyndump_dumpexp(e);
Cyc_Absyndump_dump_char(125);goto _TL1B5;_TL1B4: _TL1B5:;}
# 2341
static void Cyc_Absyndump_dumptms(int is_char_ptr,struct Cyc_List_List*tms,void(*f)(void*),void*a){struct Cyc_List_List*_T0;int*_T1;int _T2;struct Cyc_Absyn_PtrAtts _T3;struct Cyc_Absyn_PtrAtts _T4;struct Cyc_Absyn_PtrAtts _T5;struct Cyc_Absyn_PtrAtts _T6;struct Cyc_Absyn_PtrAtts _T7;struct Cyc_Absyn_PtrAtts _T8;int*_T9;int _TA;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TB;void*_TC;int*_TD;unsigned _TE;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TF;struct Cyc_List_List*_T10;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T11;struct Cyc_List_List*_T12;struct Cyc_List_List*_T13;void*_T14;int*_T15;int _T16;struct Cyc_List_List*_T17;void*_T18;char _T19;int _T1A;int _T1B;char _T1C;int _T1D;int _T1E;int _T1F;int*_T20;unsigned _T21;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T22;void*_T23;int*_T24;unsigned _T25;void*_T26;enum Cyc_Absyn_AliasQualVal _T27;struct _fat_ptr _T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;struct Cyc_List_List*_T2B;void*_T2C;struct _fat_ptr _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;struct Cyc_Warn_String_Warn_Warg_struct _T30;struct Cyc_Warn_Typ_Warn_Warg_struct _T31;struct _fat_ptr _T32;int _T33;int _T34;int _T35;struct _fat_ptr _T36;int _T37;int _T38;int _T39;struct _fat_ptr _T3A;int _T3B;int _T3C;struct _fat_ptr _T3D;int*_T3E;unsigned _T3F;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T40;void*_T41;int*_T42;unsigned _T43;int _T44;struct _fat_ptr _T45;struct _fat_ptr _T46;struct _fat_ptr _T47;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T48;void*_T49;void*_T4A;struct _fat_ptr _T4B;struct _fat_ptr _T4C;struct _fat_ptr _T4D;struct _fat_ptr _T4E;struct Cyc_List_List*_T4F;struct Cyc_List_List*_T50;void(*_T51)(void*);void*_T52;struct Cyc_List_List*_T53;struct Cyc_List_List*_T54;struct Cyc_List_List*_T55;struct Cyc_List_List*_T56;int*_T57;int _T58;int _T59;struct Cyc_List_List*_T5A;struct Cyc_List_List*_T5B;void(*_T5C)(void*);void*_T5D;int _T5E;struct Cyc_List_List*_T5F;int*_T60;unsigned _T61;void*_T62;struct _fat_ptr _T63;int _T64;struct _fat_ptr _T65;void*_T66;int _T67;struct _fat_ptr _T68;struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct*_T69;void*_T6A;int*_T6B;int _T6C;void*_T6D;void*_T6E;void*_T6F;void(*_T70)(void(*)(struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List*_T71;struct _fat_ptr _T72;struct _fat_ptr _T73;struct _fat_ptr _T74;int _T75;struct _fat_ptr _T76;struct _fat_ptr _T77;
# 2346
if(tms!=0)goto _TL1B8;
# 2348
f(a);
return;_TL1B8: _T0=tms;{
# 2352
void*_T78=_T0->hd;struct Cyc_Absyn_Tqual _T79;void*_T7A;void*_T7B;void*_T7C;void*_T7D;void*_T7E;void*_T7F;_T1=(int*)_T78;_T2=*_T1;if(_T2!=2)goto _TL1BA;{struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct*_T80=(struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct*)_T78;_T3=_T80->f1;_T7F=_T3.eff;_T4=_T80->f1;_T7E=_T4.nullable;_T5=_T80->f1;_T7D=_T5.bounds;_T6=_T80->f1;_T7C=_T6.zero_term;_T7=_T80->f1;_T7B=_T7.autoreleased;_T8=_T80->f1;_T7A=_T8.aqual;_T79=_T80->f2;}{void*rgn=_T7F;void*nullable=_T7E;void*bd=_T7D;void*zt=_T7C;void*rel=_T7B;void*aq=_T7A;struct Cyc_Absyn_Tqual tq2=_T79;{
# 2357
void*_T80=Cyc_Absyn_compress(bd);struct Cyc_Absyn_Exp*_T81;_T9=(int*)_T80;_TA=*_T9;if(_TA!=0)goto _TL1BC;_TB=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T80;_TC=_TB->f1;_TD=(int*)_TC;_TE=*_TD;switch(_TE){case 14:
# 2360
 Cyc_Absyndump_dump_char(63);goto _LL5;case 13: _TF=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T80;_T10=_TF->f2;if(_T10==0)goto _TL1BF;_T11=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T80;_T12=_T11->f2;_T13=(struct Cyc_List_List*)_T12;_T14=_T13->hd;_T15=(int*)_T14;_T16=*_T15;if(_T16!=9)goto _TL1C1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T82=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T80;_T17=_T82->f2;{struct Cyc_List_List _T83=*_T17;_T18=_T83.hd;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T84=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T18;_T81=_T84->f1;}}}{struct Cyc_Absyn_Exp*e=_T81;_T1A=
# 2363
Cyc_Absyn_type2bool(1,nullable);if(!_T1A)goto _TL1C3;_T19='*';goto _TL1C4;_TL1C3: _T19='@';_TL1C4: _T1B=(int)_T19;Cyc_Absyndump_dump_char(_T1B);
Cyc_Absyndump_dump_upperbound(e);goto _LL5;}_TL1C1: goto _LLA;_TL1BF: goto _LLA;default: goto _LLA;}goto _TL1BD;_TL1BC: _LLA: _T1D=
# 2367
Cyc_Absyn_type2bool(1,nullable);if(!_T1D)goto _TL1C5;_T1C='*';goto _TL1C6;_TL1C5: _T1C='@';_TL1C6: _T1E=(int)_T1C;Cyc_Absyndump_dump_char(_T1E);_TL1BD: _LL5:;}_T1F=Cyc_Absyndump_qvar_to_Cids;
# 2370
if(_T1F)goto _TL1C7;else{goto _TL1C9;}
_TL1C9:{void*_T80=Cyc_Absyn_compress(aq);struct Cyc_List_List*_T81;enum Cyc_Absyn_AliasQualVal _T82;_T20=(int*)_T80;_T21=*_T20;switch(_T21){case 0: _T22=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T80;_T23=_T22->f1;_T24=(int*)_T23;_T25=*_T24;switch(_T25){case 16:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T83=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T80;_T26=_T83->f1;{struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*_T84=(struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct*)_T26;_T82=_T84->f1;}}{enum Cyc_Absyn_AliasQualVal aqv=_T82;_T27=aqv;if(_T27!=Cyc_Absyn_Aliasable_qual)goto _TL1CC;goto _LL15;_TL1CC: _T28=
# 2379
_tag_fat("@aqual(",sizeof(char),8U);Cyc_Absyndump_dump(_T28);
Cyc_Absyndump_dump_aqual_val(aqv);_T29=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T29);goto _LL15;_LL15: goto _LLC;}case 17:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T83=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T80;_T81=_T83->f2;}{struct Cyc_List_List*tv=_T81;_T2A=
# 2386
_tag_fat("@aqual(",sizeof(char),8U);Cyc_Absyndump_dump(_T2A);_T2B=
_check_null(tv);_T2C=_T2B->hd;Cyc_Absyndump_dumpntyp(_T2C);_T2D=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T2D);goto _LLC;}default: goto _LL13;};case 1: _T2E=
# 2391
_tag_fat("@aqual(",sizeof(char),8U);Cyc_Absyndump_dump(_T2E);
Cyc_Absyndump_dumpntyp(aq);_T2F=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T2F);goto _LLC;default: _LL13:{struct Cyc_Warn_String_Warn_Warg_struct _T83;_T83.tag=0;
# 2396
_T83.f1=_tag_fat("unexpected alias qualifier",sizeof(char),27U);_T30=_T83;}{struct Cyc_Warn_String_Warn_Warg_struct _T83=_T30;{struct Cyc_Warn_Typ_Warn_Warg_struct _T84;_T84.tag=2;_T84.f1=aq;_T31=_T84;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T84=_T31;void*_T85[2];_T85[0]=& _T83;_T85[1]=& _T84;_T32=_tag_fat(_T85,sizeof(void*),2);Cyc_Warn_impos2(_T32);}}}_LLC:;}goto _TL1C8;_TL1C7: _TL1C8: _T33=Cyc_Absyndump_qvar_to_Cids;
# 2399
if(_T33)goto _TL1CE;else{goto _TL1D0;}_TL1D0: _T34=is_char_ptr;if(_T34)goto _TL1CE;else{goto _TL1D1;}_TL1D1: _T35=Cyc_Absyn_type2bool(0,zt);if(!_T35)goto _TL1CE;_T36=
_tag_fat("@zeroterm",sizeof(char),10U);Cyc_Absyndump_dump(_T36);goto _TL1CF;_TL1CE: _TL1CF: _T37=Cyc_Absyndump_qvar_to_Cids;
if(_T37)goto _TL1D2;else{goto _TL1D4;}_TL1D4: _T38=is_char_ptr;if(!_T38)goto _TL1D2;_T39=Cyc_Absyn_type2bool(0,zt);if(_T39)goto _TL1D2;else{goto _TL1D5;}
_TL1D5: _T3A=_tag_fat("@nozeroterm",sizeof(char),12U);Cyc_Absyndump_dump(_T3A);goto _TL1D3;_TL1D2: _TL1D3: _T3B=Cyc_Absyndump_qvar_to_Cids;
if(_T3B)goto _TL1D6;else{goto _TL1D8;}_TL1D8: _T3C=Cyc_Absyn_type2bool(0,rel);if(!_T3C)goto _TL1D6;_T3D=
_tag_fat("@autoreleased",sizeof(char),14U);Cyc_Absyndump_dump(_T3D);goto _TL1D7;_TL1D6: _TL1D7:{
# 2406
void*_T80=Cyc_Absyn_compress(rgn);struct Cyc_Absyn_Tvar*_T81;_T3E=(int*)_T80;_T3F=*_T3E;switch(_T3F){case 0: _T40=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T80;_T41=_T40->f1;_T42=(int*)_T41;_T43=*_T42;switch(_T43){case 6: _T44=Cyc_Absyndump_qvar_to_Cids;
# 2409
if(_T44)goto _TL1DB;else{goto _TL1DD;}
_TL1DD: _T45=_tag_fat("`H",sizeof(char),3U);Cyc_Absyndump_dump(_T45);goto _TL1DC;_TL1DB: _TL1DC: goto _LL1A;case 7: _T46=
# 2413
_tag_fat("`U",sizeof(char),3U);Cyc_Absyndump_dump(_T46);goto _LL1A;case 8: _T47=
_tag_fat("`RC",sizeof(char),4U);Cyc_Absyndump_dump(_T47);goto _LL1A;case 9:
 Cyc_Absyndump_dumpeff(rgn);goto _LL1A;default: goto _LL29;};case 2:{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T82=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T80;_T81=_T82->f1;}{struct Cyc_Absyn_Tvar*tv=_T81;
Cyc_Absyndump_dumptvar(tv);goto _LL1A;}case 1: _T48=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T80;_T49=_T48->f2;if(_T49!=0)goto _TL1DE;_T4A=
# 2419
Cyc_Absyn_compress(rgn);Cyc_Absyndump_dumpntyp(_T4A);goto _LL1A;_TL1DE: goto _LL29;case 8: _T4B=
# 2423
_tag_fat("@region(",sizeof(char),9U);Cyc_Absyndump_dump(_T4B);
Cyc_Absyndump_dumptyp(rgn);_T4C=
_tag_fat(")",sizeof(char),2U);Cyc_Absyndump_dump(_T4C);goto _LL1A;default: _LL29: _T4D=
# 2429
_tag_fat("dumptms: bad rgn type in Pointer_mod",sizeof(char),37U);_T4E=_tag_fat(0U,sizeof(void*),0);Cyc_Warn_impos(_T4D,_T4E);}_LL1A:;}
# 2431
Cyc_Absyndump_dumptq(tq2);_T4F=tms;_T50=_T4F->tl;_T51=f;_T52=a;
Cyc_Absyndump_dumptms(0,_T50,_T51,_T52);goto _LL0;}_TL1BA:{
# 2436
int next_is_pointer=0;_T53=tms;_T54=_T53->tl;
if(_T54==0)goto _TL1E0;_T55=tms;_T56=_T55->tl;{
void*_T80=_T56->hd;_T57=(int*)_T80;_T58=*_T57;if(_T58!=2)goto _TL1E2;
# 2441
next_is_pointer=1;goto _LL2B;_TL1E2: goto _LL2B;_LL2B:;}goto _TL1E1;_TL1E0: _TL1E1: _T59=next_is_pointer;
# 2447
if(!_T59)goto _TL1E4;
Cyc_Absyndump_dump_char(40);goto _TL1E5;_TL1E4: _TL1E5: _T5A=tms;_T5B=_T5A->tl;_T5C=f;_T5D=a;
Cyc_Absyndump_dumptms(0,_T5B,_T5C,_T5D);_T5E=next_is_pointer;
if(!_T5E)goto _TL1E6;
Cyc_Absyndump_dump_char(41);goto _TL1E7;_TL1E6: _TL1E7: _T5F=tms;{
# 2453
void*_T80=_T5F->hd;struct Cyc_Absyn_Exp*_T81;struct Cyc_Absyn_Exp*_T82;struct Cyc_Absyn_Exp*_T83;struct Cyc_Absyn_Exp*_T84;struct Cyc_List_List*_T85;struct Cyc_List_List*_T86;struct Cyc_Absyn_VarargInfo*_T87;int _T88;struct Cyc_List_List*_T89;void*_T8A;void*_T8B;_T60=(int*)_T80;_T61=*_T60;switch(_T61){case 0:{struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct*_T8C=(struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct*)_T80;_T62=_T8C->f1;_T8B=(void*)_T62;}{void*zeroterm=_T8B;_T63=
# 2456
_tag_fat("[]",sizeof(char),3U);Cyc_Absyndump_dump(_T63);_T64=
Cyc_Absyn_type2bool(0,zeroterm);if(!_T64)goto _TL1E9;_T65=
_tag_fat("@zeroterm",sizeof(char),10U);Cyc_Absyndump_dump(_T65);goto _TL1EA;_TL1E9: _TL1EA: goto _LL30;}case 1:{struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct*_T8C=(struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct*)_T80;_T8B=_T8C->f1;_T66=_T8C->f2;_T8A=(void*)_T66;}{struct Cyc_Absyn_Exp*e=_T8B;void*zeroterm=_T8A;
# 2461
Cyc_Absyndump_dump_char(91);
Cyc_Absyndump_dumpexp(e);
Cyc_Absyndump_dump_char(93);_T67=
Cyc_Absyn_type2bool(0,zeroterm);if(!_T67)goto _TL1EB;_T68=
_tag_fat("@zeroterm",sizeof(char),10U);Cyc_Absyndump_dump(_T68);goto _TL1EC;_TL1EB: _TL1EC: goto _LL30;}case 3: _T69=(struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct*)_T80;_T6A=_T69->f1;_T6B=(int*)_T6A;_T6C=*_T6B;if(_T6C!=1)goto _TL1ED;{struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct*_T8C=(struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct*)_T80;_T6D=_T8C->f1;{struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct*_T8D=(struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct*)_T6D;_T89=_T8D->f1;_T88=_T8D->f2;_T87=_T8D->f3;_T6E=_T8D->f4;_T8B=(void*)_T6E;_T86=_T8D->f5;_T85=_T8D->f6;_T84=_T8D->f7;_T83=_T8D->f8;_T82=_T8D->f9;_T81=_T8D->f10;}}{struct Cyc_List_List*args=_T89;int c_varargs=_T88;struct Cyc_Absyn_VarargInfo*cyc_varargs=_T87;void*effopt=_T8B;struct Cyc_List_List*effc=_T86;struct Cyc_List_List*qb=_T85;struct Cyc_Absyn_Exp*chk=_T84;struct Cyc_Absyn_Exp*req=_T83;struct Cyc_Absyn_Exp*ens=_T82;struct Cyc_Absyn_Exp*thrws=_T81;
# 2468
Cyc_Absyndump_dumpfunargs(args,c_varargs,cyc_varargs,effopt,effc,qb,chk,req,ens,thrws);goto _LL30;}_TL1ED:{struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct*_T8C=(struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct*)_T80;_T6F=_T8C->f1;{struct Cyc_Absyn_NoTypes_Absyn_Funcparams_struct*_T8D=(struct Cyc_Absyn_NoTypes_Absyn_Funcparams_struct*)_T6F;_T89=_T8D->f1;}}{struct Cyc_List_List*sl=_T89;{
# 2471
void(*_T8C)(void(*)(struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr)=(void(*)(void(*)(struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr))Cyc_Absyndump_group;_T70=_T8C;}_T71=sl;_T72=_tag_fat("(",sizeof(char),2U);_T73=_tag_fat(")",sizeof(char),2U);_T74=_tag_fat(",",sizeof(char),2U);_T70(Cyc_Absyndump_dump_str,_T71,_T72,_T73,_T74);goto _LL30;}case 4:{struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct*_T8C=(struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct*)_T80;_T89=_T8C->f1;_T88=_T8C->f3;}{struct Cyc_List_List*ts=_T89;int print_kinds=_T88;_T75=print_kinds;
# 2474
if(!_T75)goto _TL1EF;
Cyc_Absyndump_dumpkindedtvars(ts);goto _TL1F0;
# 2477
_TL1EF: Cyc_Absyndump_dumptvars(ts);_TL1F0: goto _LL30;}case 5:{struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct*_T8C=(struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct*)_T80;_T89=_T8C->f2;}{struct Cyc_List_List*atts=_T89;
# 2480
Cyc_Absyndump_dumpatts(atts);goto _LL30;}default: _T76=
# 2483
_tag_fat("dumptms",sizeof(char),8U);_T77=_tag_fat(0U,sizeof(void*),0);Cyc_Warn_impos(_T76,_T77);}_LL30:;}goto _LL0;}_LL0:;}}
# 2490
static void Cyc_Absyndump_dumptqtd(struct Cyc_Absyn_Tqual tq,void*t,void(*f)(void*),void*a){int _T0;struct Cyc_List_List*_T1;void(*_T2)(void*);void*_T3;
# 2493
int cp=Cyc_Absyndump_is_char_ptr(t);struct _RegionHandle _T4=_new_region(0U,"temp");struct _RegionHandle*temp=& _T4;_push_region(temp);{
# 2496
struct _tuple13 _T5=Cyc_Absynpp_to_tms(temp,tq,t);struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Tqual _T8;_T8=_T5.f0;_T7=_T5.f1;_T6=_T5.f2;{struct Cyc_Absyn_Tqual tq=_T8;void*t=_T7;struct Cyc_List_List*tms=_T6;
Cyc_Absyndump_dumptq(tq);
Cyc_Absyndump_dumpntyp(t);_T0=cp;_T1=
Cyc_List_imp_rev(tms);_T2=f;_T3=a;Cyc_Absyndump_dumptms(_T0,_T1,_T2,_T3);}}_pop_region();}
# 2502
void Cyc_Absyndump_dumpdecllist2file(struct Cyc_List_List*tdl,struct Cyc___cycFILE*f){struct Cyc___cycFILE**_T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_Absyn_Decl*_T3;struct Cyc_List_List*_T4;struct Cyc___cycFILE*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;_T0=Cyc_Absyndump_dump_file;
# 2508
*_T0=f;
_TL1F4: if(tdl!=0)goto _TL1F2;else{goto _TL1F3;}
_TL1F2: _T1=tdl;_T2=_T1->hd;_T3=(struct Cyc_Absyn_Decl*)_T2;Cyc_Absyndump_dumpdecl(_T3);_T4=tdl;
# 2509
tdl=_T4->tl;goto _TL1F4;_TL1F3: _T5=f;_T6=
# 2511
_tag_fat("\n",sizeof(char),2U);_T7=_tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5,_T6,_T7);}
# 2514
static void Cyc_Absyndump_dump_decl_interface(struct Cyc_Absyn_Decl*d){struct Cyc_Absyn_Decl*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Vardecl*_T3;enum Cyc_Absyn_Scope _T4;int _T5;struct Cyc_Absyn_Vardecl*_T6;struct Cyc_Absyn_Vardecl*_T7;struct Cyc_Absyn_Vardecl*_T8;enum Cyc_Absyn_Scope _T9;int _TA;struct _fat_ptr _TB;struct Cyc_Absyn_Vardecl*_TC;int _TD;struct Cyc_Absyn_Vardecl*_TE;void*_TF;int*_T10;int _T11;struct _fat_ptr _T12;struct Cyc_Absyn_Vardecl*_T13;struct Cyc_Absyn_Decl*_T14;unsigned _T15;struct _fat_ptr _T16;struct Cyc_Absyn_Vardecl*_T17;struct Cyc_Absyn_Fndecl*_T18;enum Cyc_Absyn_Scope _T19;int _T1A;struct Cyc_Absyn_Fndecl*_T1B;enum Cyc_Absyn_Scope _T1C;struct Cyc_Absyn_Fndecl*_T1D;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T1E;void(*_T1F)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*);struct Cyc_Absyn_Tqual _T20;void*_T21;struct Cyc_Absyn_Fndecl*_T22;struct _fat_ptr _T23;struct Cyc_Absyn_Aggrdecl*_T24;enum Cyc_Absyn_Scope _T25;int _T26;struct Cyc_Absyn_Aggrdecl*_T27;struct Cyc_Absyn_Aggrdecl*_T28;enum Cyc_Absyn_Scope _T29;int _T2A;struct Cyc_Absyn_Aggrdecl*_T2B;struct Cyc_Absyn_Aggrdecl*_T2C;struct _fat_ptr _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;struct Cyc_Absyn_Typedefdecl*_T30;void*_T31;struct _fat_ptr _T32;struct _fat_ptr _T33;struct _fat_ptr _T34;struct Cyc_List_List*_T35;void*_T36;struct Cyc_Absyn_Decl*_T37;struct Cyc_List_List*_T38;struct _fat_ptr _T39;struct Cyc_List_List*_T3A;void*_T3B;struct Cyc_Absyn_Decl*_T3C;struct Cyc_List_List*_T3D;struct _fat_ptr _T3E;struct Cyc_List_List*_T3F;void*_T40;struct Cyc_Absyn_Decl*_T41;struct Cyc_List_List*_T42;struct _fat_ptr _T43;int(*_T44)(struct _fat_ptr,struct _fat_ptr);void*(*_T45)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T46;struct _fat_ptr _T47;_T0=d;{
# 2517
void*_T48=_T0->r;struct _tuple11*_T49;struct Cyc_List_List*_T4A;struct Cyc_List_List*_T4B;struct Cyc_List_List*_T4C;struct _fat_ptr*_T4D;struct Cyc_Absyn_Typedefdecl*_T4E;struct Cyc_Absyn_Enumdecl*_T4F;struct Cyc_Absyn_Datatypedecl*_T50;struct Cyc_Absyn_Aggrdecl*_T51;struct Cyc_Absyn_Fndecl*_T52;struct Cyc_Absyn_Vardecl*_T53;_T1=(int*)_T48;_T2=*_T1;switch(_T2){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T48;_T53=_T54->f1;}{struct Cyc_Absyn_Vardecl*vd=_T53;_T3=vd;_T4=_T3->sc;_T5=(int)_T4;
# 2520
if(_T5!=0)goto _TL1F6;
return;_TL1F6: _T6=vd;{
struct Cyc_Absyn_Exp*init=_T6->initializer;_T7=vd;
_T7->initializer=0;_T8=vd;_T9=_T8->sc;_TA=(int)_T9;
if(_TA!=2)goto _TL1F8;_TB=
_tag_fat("extern ",sizeof(char),8U);Cyc_Absyndump_dump(_TB);goto _TL1F9;
_TL1F8: _TC=vd;_TD=_TC->is_proto;if(_TD)goto _TL1FA;else{goto _TL1FC;}
_TL1FC: _TE=vd;_TF=_TE->type;{void*_T54=Cyc_Absyn_compress(_TF);_T10=(int*)_T54;_T11=*_T10;if(_T11!=6)goto _TL1FD;_T12=
# 2530
_tag_fat("extern ",sizeof(char),8U);Cyc_Absyndump_dump(_T12);goto _LL17;_TL1FD: goto _LL17;_LL17:;}goto _TL1FB;_TL1FA: _TL1FB: _TL1F9: _T13=vd;_T14=d;_T15=_T14->loc;
# 2535
Cyc_Absyndump_dumpvardecl(_T13,_T15,1);_T16=
_tag_fat("\n",sizeof(char),2U);Cyc_Absyndump_dump(_T16);_T17=vd;
_T17->initializer=init;goto _LL0;}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T48;_T52=_T54->f1;}{struct Cyc_Absyn_Fndecl*fd=_T52;_T18=fd;_T19=_T18->sc;_T1A=(int)_T19;
# 2540
if(_T1A!=0)goto _TL1FF;
return;_TL1FF: _T1B=fd;_T1C=_T1B->sc;
Cyc_Absyndump_dumpscope(_T1C);_T1D=fd;{
struct Cyc_Absyn_FnInfo type_info=_T1D->i;
type_info.attributes=0;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T54=_cycalloc(sizeof(struct Cyc_Absyn_FnType_Absyn_Type_struct));_T54->tag=6;
_T54->f1=type_info;_T1E=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T54;}{void*t=(void*)_T1E;{
void(*_T54)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*)=(void(*)(struct Cyc_Absyn_Tqual,void*,void(*)(struct Cyc_Absyn_Fndecl*),struct Cyc_Absyn_Fndecl*))Cyc_Absyndump_dumptqtd;_T1F=_T54;}_T20=Cyc_Absyn_empty_tqual(0U);_T21=t;_T22=fd;_T1F(_T20,_T21,Cyc_Absyndump_dump_atts_qvar,_T22);_T23=
_tag_fat(";\n",sizeof(char),3U);Cyc_Absyndump_dump(_T23);goto _LL0;}}}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T48;_T51=_T54->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T51;_T24=ad;_T25=_T24->sc;_T26=(int)_T25;
# 2550
if(_T26!=0)goto _TL201;
return;_TL201: _T27=ad;{
struct Cyc_Absyn_AggrdeclImpl*impl=_T27->impl;_T28=ad;_T29=_T28->sc;_T2A=(int)_T29;
if(_T2A!=1)goto _TL203;_T2B=ad;
_T2B->impl=0;goto _TL204;_TL203: _TL204:
 Cyc_Absyndump_dump_aggrdecl(ad);_T2C=ad;
_T2C->impl=impl;_T2D=
_tag_fat(";\n",sizeof(char),3U);Cyc_Absyndump_dump(_T2D);goto _LL0;}}case 6:{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_T48;_T50=_T54->f1;}{struct Cyc_Absyn_Datatypedecl*dd=_T50;
# 2560
Cyc_Absyndump_dump_datatypedecl(dd);_T2E=
_tag_fat(";\n",sizeof(char),3U);Cyc_Absyndump_dump(_T2E);goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T48;_T4F=_T54->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T4F;
# 2564
Cyc_Absyndump_dump_enumdecl(ed);_T2F=
_tag_fat(";\n",sizeof(char),3U);Cyc_Absyndump_dump(_T2F);goto _LL0;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T48;_T4E=_T54->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T4E;_T30=td;_T31=_T30->defn;
# 2568
if(_T31!=0)goto _TL205;
# 2570
Cyc_Absyndump_dumpdecl(d);_T32=
_tag_fat("\n",sizeof(char),2U);Cyc_Absyndump_dump(_T32);goto _TL206;_TL205: _TL206: goto _LL0;}case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T48;_T4D=_T54->f1;_T4C=_T54->f2;}{struct _fat_ptr*v=_T4D;struct Cyc_List_List*ds=_T4C;_T33=
# 2575
_tag_fat("namespace ",sizeof(char),11U);Cyc_Absyndump_dump(_T33);
Cyc_Absyndump_dump_str(v);_T34=
_tag_fat("{\n",sizeof(char),3U);Cyc_Absyndump_dump(_T34);
_TL20A: if(ds!=0)goto _TL208;else{goto _TL209;}
_TL208: _T35=ds;_T36=_T35->hd;_T37=(struct Cyc_Absyn_Decl*)_T36;Cyc_Absyndump_dump_decl_interface(_T37);_T38=ds;
# 2578
ds=_T38->tl;goto _TL20A;_TL209: _T39=
# 2580
_tag_fat("}\n",sizeof(char),3U);Cyc_Absyndump_dump(_T39);goto _LL0;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T48;_T4C=_T54->f2;}{struct Cyc_List_List*ds=_T4C;
# 2583
_TL20E: if(ds!=0)goto _TL20C;else{goto _TL20D;}
_TL20C: _T3A=ds;_T3B=_T3A->hd;_T3C=(struct Cyc_Absyn_Decl*)_T3B;Cyc_Absyndump_dump_decl_interface(_T3C);_T3D=ds;
# 2583
ds=_T3D->tl;goto _TL20E;_TL20D: goto _LL0;}case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T48;_T4C=_T54->f1;}{struct Cyc_List_List*ds=_T4C;_T3E=
# 2587
_tag_fat("extern \"C\" {",sizeof(char),13U);Cyc_Absyndump_dump(_T3E);
_TL212: if(ds!=0)goto _TL210;else{goto _TL211;}
_TL210: _T3F=ds;_T40=_T3F->hd;_T41=(struct Cyc_Absyn_Decl*)_T40;Cyc_Absyndump_dump_decl_interface(_T41);_T42=ds;
# 2588
ds=_T42->tl;goto _TL212;_TL211: _T43=
# 2590
_tag_fat("}\n",sizeof(char),3U);Cyc_Absyndump_dump(_T43);goto _LL0;}case 12:{struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T54=(struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T48;_T4C=_T54->f1;_T4B=_T54->f2;_T4A=_T54->f3;_T49=_T54->f4;}{struct Cyc_List_List*ds=_T4C;struct Cyc_List_List*ovrs=_T4B;struct Cyc_List_List*exs=_T4A;struct _tuple11*wc=_T49;goto _LL0;}default: _T45=Cyc_Warn_impos;{
# 2614 "absyndump.cyc"
int(*_T54)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T45;_T44=_T54;}_T46=_tag_fat("bad top-level declaration",sizeof(char),26U);_T47=_tag_fat(0U,sizeof(void*),0);_T44(_T46,_T47);}_LL0:;}}
# 2618
void Cyc_Absyndump_dump_interface(struct Cyc_List_List*ds,struct Cyc___cycFILE*f){struct Cyc___cycFILE**_T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_Absyn_Decl*_T3;struct Cyc_List_List*_T4;_T0=Cyc_Absyndump_dump_file;
# 2621
*_T0=f;
_TL216: if(ds!=0)goto _TL214;else{goto _TL215;}
_TL214: _T1=ds;_T2=_T1->hd;_T3=(struct Cyc_Absyn_Decl*)_T2;Cyc_Absyndump_dump_decl_interface(_T3);_T4=ds;
# 2622
ds=_T4->tl;goto _TL216;_TL215:;}
