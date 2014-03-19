#include <cyc_include.h>
 struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};struct Cyc___cycFILE;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct{int tag;};
# 7 "bansheeif_stub.cyc"
struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct Cyc_BansheeIf_Ignore_constraint_val={0};
int Cyc_BansheeIf_banshee_init (void){return 0;}
void Cyc_BansheeIf_add_constant(struct _fat_ptr name,void*c){;}
void Cyc_BansheeIf_add_variable(void*cvar){;}
# 12
void*Cyc_BansheeIf_equality_constraint(void*a,void*b){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void*Cyc_BansheeIf_cond_equality_constraint(void*a,void*b){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void*Cyc_BansheeIf_inclusion_constraint(void*a,void*b){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void*Cyc_BansheeIf_implication_constraint(void*a,void*b){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void*Cyc_BansheeIf_and_constraint(void*a,void*b){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void*Cyc_BansheeIf_or_constraint(void*a,void*b){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void*Cyc_BansheeIf_not_constraint(void*b){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void*Cyc_BansheeIf_cmpeq_constraint(void*t1,void*t2){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void*Cyc_BansheeIf_check_constraint(void*b){struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T0;struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*_T1;void*_T2;_T0=& Cyc_BansheeIf_Ignore_constraint_val;_T1=(struct Cyc_BansheeIf_IgnoreConstraint_BansheeIf_Constraint_struct*)_T0;_T2=(void*)_T1;return _T2;}
void Cyc_BansheeIf_reset_local_cvar(void*cvar){;}
struct _fat_ptr Cyc_BansheeIf_constraint2string(void*b){struct _fat_ptr _T0;_T0=_tag_fat("IgnoreConstraint",sizeof(char),17U);return _T0;}
# 24
int Cyc_BansheeIf_add_constraint(unsigned a,void*b){return 0;}
int Cyc_BansheeIf_discharge_implications (void){;}
int Cyc_BansheeIf_resolve(void*b){return 0;}
# 30
void Cyc_BansheeIf_init_toplevel_cvars(struct Cyc_List_List*assoc){;}
int Cyc_BansheeIf_add_all_constraints(struct Cyc_List_List*assoc){;}
void Cyc_BansheeIf_register_toplevel_cvar(void*cvar){;}
void Cyc_BansheeIf_persist_cvarmap(struct Cyc___cycFILE*f){;}
# 35
void Cyc_BansheeIf_resolve_or_default(void*t){;}
# 37
void*Cyc_BansheeIf_add_location(struct _fat_ptr loc,void*c){void*_T0;_T0=c;return _T0;}
