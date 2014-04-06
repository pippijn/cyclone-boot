#include <cyc_include.h>
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Impossible[11U];
 struct Cyc_Core_Impossible_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
extern double modf(double,double *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stdout;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
 struct Cyc_Double_pa_PrintArg_struct {
  int tag;
  double f1;
};
 struct Cyc_LongDouble_pa_PrintArg_struct {
  int tag;
  long double f1;
};
 struct Cyc_ShortPtr_pa_PrintArg_struct {
  int tag;
  short * f1;
};
 struct Cyc_IntPtr_pa_PrintArg_struct {
  int tag;
  unsigned long * f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_putc(int,struct Cyc___cycFILE *);
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
static struct _fat_ptr Cyc_parg2string(void * x) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  _T0 = x;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = _tag_fat("string",sizeof(char),7U);
    return _T3;
  case 1: 
    _T4 = _tag_fat("int",sizeof(char),4U);
    return _T4;
  case 2: 
    _T5 = _tag_fat("double",sizeof(char),7U);
    return _T5;
  case 3: 
    _T6 = _tag_fat("long double",sizeof(char),12U);
    return _T6;
  case 4: 
    _T7 = _tag_fat("short *",sizeof(char),8U);
    return _T7;
  default: 
    _T8 = _tag_fat("unsigned long *",sizeof(char),16U);
    return _T8;
  }
  ;
}
static void * Cyc_badarg(struct _fat_ptr s) {
  struct Cyc_Core_Invalid_argument_exn_struct * _T0;
  void * _T1;
  void * _T2;
  void * _T3;
  { struct Cyc_Core_Invalid_argument_exn_struct * _T4 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T4->tag = Cyc_Core_Invalid_argument;
    _T4->f1 = s;
    _T0 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T4;
  }_T1 = (void *)_T0;
  _T2 = _throw(_T1);
  _T3 = (void *)_T2;
  return _T3;
}
static int Cyc_va_arg_int(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long _T5;
  int _T6;
  int (* _T7)(struct _fat_ptr);
  struct _fat_ptr _T8;
  int _T9;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _TA = *_T2;
    unsigned long _TB;
    _T3 = (int *)_TA;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL1;
    }
    { struct Cyc_Int_pa_PrintArg_struct * _TC = (struct Cyc_Int_pa_PrintArg_struct *)_TA;
      _TB = _TC->f1;
    }{ unsigned long i = _TB;
      _T5 = i;
      _T6 = (int)_T5;
      return _T6;
    }_TL1: { int (* _TC)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_badarg;
      _T7 = _TC;
    }_T8 = _tag_fat("printf expected int",sizeof(char),20U);
    _T9 = _T7(_T8);
    return _T9;
    ;
  }
}
static long Cyc_va_arg_long(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long _T5;
  long _T6;
  long (* _T7)(struct _fat_ptr);
  struct _fat_ptr _T8;
  long _T9;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _TA = *_T2;
    unsigned long _TB;
    _T3 = (int *)_TA;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL3;
    }
    { struct Cyc_Int_pa_PrintArg_struct * _TC = (struct Cyc_Int_pa_PrintArg_struct *)_TA;
      _TB = _TC->f1;
    }{ unsigned long i = _TB;
      _T5 = i;
      _T6 = (long)_T5;
      return _T6;
    }_TL3: { long (* _TC)(struct _fat_ptr) = (long (*)(struct _fat_ptr))Cyc_badarg;
      _T7 = _TC;
    }_T8 = _tag_fat("printf expected int",sizeof(char),20U);
    _T9 = _T7(_T8);
    return _T9;
    ;
  }
}
static unsigned long Cyc_va_arg_ulong(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long _T5;
  unsigned long (* _T6)(struct _fat_ptr);
  struct _fat_ptr _T7;
  unsigned long _T8;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T9 = *_T2;
    unsigned long _TA;
    _T3 = (int *)_T9;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL5;
    }
    { struct Cyc_Int_pa_PrintArg_struct * _TB = (struct Cyc_Int_pa_PrintArg_struct *)_T9;
      _TA = _TB->f1;
    }{ unsigned long i = _TA;
      _T5 = i;
      return _T5;
    }_TL5: { unsigned long (* _TB)(struct _fat_ptr) = (unsigned long (*)(struct _fat_ptr))Cyc_badarg;
      _T6 = _TB;
    }_T7 = _tag_fat("printf expected int",sizeof(char),20U);
    _T8 = _T6(_T7);
    return _T8;
    ;
  }
}
static unsigned long Cyc_va_arg_uint(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long _T5;
  unsigned long (* _T6)(struct _fat_ptr);
  struct _fat_ptr _T7;
  unsigned long _T8;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T9 = *_T2;
    unsigned long _TA;
    _T3 = (int *)_T9;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL7;
    }
    { struct Cyc_Int_pa_PrintArg_struct * _TB = (struct Cyc_Int_pa_PrintArg_struct *)_T9;
      _TA = _TB->f1;
    }{ unsigned long i = _TA;
      _T5 = i;
      return _T5;
    }_TL7: { unsigned long (* _TB)(struct _fat_ptr) = (unsigned long (*)(struct _fat_ptr))Cyc_badarg;
      _T6 = _TB;
    }_T7 = _tag_fat("printf expected int",sizeof(char),20U);
    _T8 = _T6(_T7);
    return _T8;
    ;
  }
}
static double Cyc_va_arg_double(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  unsigned int _T4;
  double _T5;
  long double _T6;
  double _T7;
  struct _fat_ptr _T8;
  struct Cyc_String_pa_PrintArg_struct _T9;
  struct _fat_ptr _TA;
  unsigned char * _TB;
  void * * _TC;
  void * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  void * _T10;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T11 = *_T2;
    long double _T12;
    double _T13;
    _T3 = (int *)_T11;
    _T4 = *_T3;
    switch (_T4) {
    case 2: 
      { struct Cyc_Double_pa_PrintArg_struct * _T14 = (struct Cyc_Double_pa_PrintArg_struct *)_T11;
	_T13 = _T14->f1;
      }{ double d = _T13;
	_T5 = d;
	return _T5;
      }
    case 3: 
      { struct Cyc_LongDouble_pa_PrintArg_struct * _T14 = (struct Cyc_LongDouble_pa_PrintArg_struct *)_T11;
	_T12 = _T14->f1;
      }{ long double ld = _T12;
	_T6 = ld;
	_T7 = (double)_T6;
	return _T7;
      }
    default: 
      { struct Cyc_String_pa_PrintArg_struct _T14;
	_T14.tag = 0;
	_TA = ap;
	_TB = _check_fat_subscript(_TA,sizeof(void *),0U);
	_TC = (void * *)_TB;
	_TD = *_TC;
	_T14.f1 = Cyc_parg2string(_TD);
	_T9 = _T14;
      }{ struct Cyc_String_pa_PrintArg_struct _T14 = _T9;
	void * _T15[1];
	_T15[0] = &_T14;
	_TE = _tag_fat("printf expected double but found %s",sizeof(char),
		       36U);
	_TF = _tag_fat(_T15,sizeof(void *),1);
	_T8 = Cyc_aprintf(_TE,_TF);
      }_T10 = Cyc_badarg(_T8);
      _throw(_T10);
    }
    ;
  }
}
static short * Cyc_va_arg_short_ptr(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  short * _T5;
  struct _fat_ptr _T6;
  void * _T7;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T8 = *_T2;
    short * _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 4) { goto _TLA;
    }
    { struct Cyc_ShortPtr_pa_PrintArg_struct * _TA = (struct Cyc_ShortPtr_pa_PrintArg_struct *)_T8;
      _T9 = _TA->f1;
    }{ short * p = _T9;
      _T5 = p;
      return _T5;
    }_TLA: _T6 = _tag_fat("printf expected short pointer",sizeof(char),30U);
    _T7 = Cyc_badarg(_T6);
    _throw(_T7);
    ;
  }
}
static unsigned long * Cyc_va_arg_int_ptr(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long * _T5;
  struct _fat_ptr _T6;
  void * _T7;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T8 = *_T2;
    unsigned long * _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 5) { goto _TLC;
    }
    { struct Cyc_IntPtr_pa_PrintArg_struct * _TA = (struct Cyc_IntPtr_pa_PrintArg_struct *)_T8;
      _T9 = _TA->f1;
    }{ unsigned long * p = _T9;
      _T5 = p;
      return _T5;
    }_TLC: _T6 = _tag_fat("printf expected int pointer",sizeof(char),28U);
    _T7 = Cyc_badarg(_T6);
    _throw(_T7);
    ;
  }
}
static const struct _fat_ptr Cyc_va_arg_string(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  void * _T7;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T8 = *_T2;
    struct _fat_ptr _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 0) { goto _TLE;
    }
    { struct Cyc_String_pa_PrintArg_struct * _TA = (struct Cyc_String_pa_PrintArg_struct *)_T8;
      _T9 = _TA->f1;
    }{ struct _fat_ptr s = _T9;
      _T5 = s;
      return _T5;
    }_TLE: _T6 = _tag_fat("printf expected string",sizeof(char),23U);
    _T7 = Cyc_badarg(_T6);
    _throw(_T7);
    ;
  }
}
int Cyc___cvt_double(double,int,int,int *,int,struct _fat_ptr,struct _fat_ptr);
enum Cyc_BASE {
  Cyc_OCT = 0U,
  Cyc_DEC = 1U,
  Cyc_HEX = 2U
};
inline static int Cyc__IO_sputn(int (* ioputc)(int,void *),void * ioputc_env,
				struct _fat_ptr s,int howmany) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  const char * _T2;
  char _T3;
  int _T4;
  void * _T5;
  int _T6;
  int _T7;
  int _T8;
  struct _fat_ptr * _T9;
  int _TA;
  int i = 0;
  _TL10: if (i < howmany) { goto _TL11;
  }else { goto _TL12;
  }
  _TL11: _T0 = s;
  _T1 = _check_fat_subscript(_T0,sizeof(char),0U);
  _T2 = (const char *)_T1;
  _T3 = *_T2;
  _T4 = (int)_T3;
  _T5 = ioputc_env;
  _T6 = ioputc(_T4,_T5);
  _T7 = - 1;
  if (_T6 != _T7) { goto _TL13;
  }
  _T8 = i;
  return _T8;
  _TL13: _T9 = &s;
  _fat_ptr_inplace_plus(_T9,sizeof(char),1);
  i = i + 1;
  goto _TL10;
  _TL12: _TA = i;
  return _TA;
}
static int Cyc__IO_nzsputn(int (* ioputc)(int,void *),void * ioputc_env,struct _fat_ptr s,
			   int howmany) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  const char * _T2;
  char _T3;
  int _T4;
  char _T5;
  int _T6;
  void * _T7;
  int _T8;
  int _T9;
  int _TA;
  struct _fat_ptr * _TB;
  int _TC;
  int i = 0;
  _TL15: if (i < howmany) { goto _TL16;
  }else { goto _TL17;
  }
  _TL16: { char c;
    _T0 = s;
    _T1 = _check_fat_subscript(_T0,sizeof(char),0U);
    _T2 = (const char *)_T1;
    c = *_T2;
    _T3 = c;
    _T4 = (int)_T3;
    if (_T4 == 0) { goto _TL1A;
    }else { goto _TL1B;
    }
    _TL1B: _T5 = c;
    _T6 = (int)_T5;
    _T7 = ioputc_env;
    _T8 = ioputc(_T6,_T7);
    _T9 = - 1;
    if (_T8 == _T9) { goto _TL1A;
    }else { goto _TL18;
    }
    _TL1A: _TA = i;
    return _TA;
    _TL18: _TB = &s;
    _fat_ptr_inplace_plus(_TB,sizeof(char),1);
    i = i + 1;
  }goto _TL15;
  _TL17: _TC = i;
  return _TC;
}
static int Cyc__IO_padn(int (* ioputc)(int,void *),void * ioputc_env,char c,
			int howmany) {
  char _T0;
  int _T1;
  void * _T2;
  int _T3;
  int _T4;
  int _T5;
  int _T6;
  int i = 0;
  _TL1C: if (i < howmany) { goto _TL1D;
  }else { goto _TL1E;
  }
  _TL1D: _T0 = c;
  _T1 = (int)_T0;
  _T2 = ioputc_env;
  _T3 = ioputc(_T1,_T2);
  _T4 = - 1;
  if (_T3 != _T4) { goto _TL1F;
  }
  _T5 = i;
  return _T5;
  _TL1F: i = i + 1;
  goto _TL1C;
  _TL1E: _T6 = i;
  return _T6;
}
static struct _fat_ptr Cyc_my_memchr(struct _fat_ptr s,char c,int n) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  char _T6;
  int _T7;
  char _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr _TC;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  { int sz = (int)_T1;
    if (n >= sz) { goto _TL21;
    }
    _T2 = n;
    goto _TL22;
    _TL21: _T2 = sz;
    _TL22: n = _T2;
    _TL26: if (n != 0) { goto _TL24;
    }else { goto _TL25;
    }
    _TL24: _T3 = s;
    _T4 = _check_fat_subscript(_T3,sizeof(char),0U);
    _T5 = (const char *)_T4;
    _T6 = *_T5;
    _T7 = (int)_T6;
    _T8 = c;
    _T9 = (int)_T8;
    if (_T7 != _T9) { goto _TL27;
    }
    _TA = s;
    return _TA;
    _TL27: n = n + -1;
    _TB = &s;
    _fat_ptr_inplace_plus_post(_TB,sizeof(char),1);
    goto _TL26;
    _TL25: _TC = _tag_fat(0,0,0);
    return _TC;
  }
}
static struct _fat_ptr Cyc_my_nzmemchr(struct _fat_ptr s,char c,int n) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  char _T6;
  int _T7;
  char _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr _TC;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  { int sz = (int)_T1;
    if (n >= sz) { goto _TL29;
    }
    _T2 = n;
    goto _TL2A;
    _TL29: _T2 = sz;
    _TL2A: n = _T2;
    _TL2E: if (n != 0) { goto _TL2C;
    }else { goto _TL2D;
    }
    _TL2C: _T3 = s;
    _T4 = _check_fat_subscript(_T3,sizeof(char),0U);
    _T5 = (const char *)_T4;
    _T6 = *_T5;
    _T7 = (int)_T6;
    _T8 = c;
    _T9 = (int)_T8;
    if (_T7 != _T9) { goto _TL2F;
    }
    _TA = s;
    return _TA;
    _TL2F: n = n + -1;
    _TB = &s;
    _fat_ptr_inplace_plus_post(_TB,sizeof(char),1);
    goto _TL2E;
    _TL2D: _TC = _tag_fat(0,0,0);
    return _TC;
  }
}
inline static const unsigned long Cyc_my_strlen(struct _fat_ptr s) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  const char * _T3;
  const char * _T4;
  unsigned int _T5;
  int _T6;
  char _T7;
  int _T8;
  unsigned int _T9;
  _T0 = s;
  { unsigned int sz = _get_fat_size(_T0,sizeof(char));
    unsigned int i = 0U;
    _TL31: if (i < sz) { goto _TL34;
    }else { goto _TL33;
    }
    _TL34: _T1 = s;
    _T2 = _T1.curr;
    _T3 = (const char *)_T2;
    _T4 = _check_null(_T3);
    _T5 = i;
    _T6 = (int)_T5;
    _T7 = _T4[_T6];
    _T8 = (int)_T7;
    if (_T8 != 0) { goto _TL32;
    }else { goto _TL33;
    }
    _TL32: i = i + 1;
    goto _TL31;
    _TL33: _T9 = i;
    return _T9;
  }
}
int Cyc__IO_vfprintf(int (* ioputc)(int,void *),void * ioputc_env,struct _fat_ptr fmt0,
		     struct _fat_ptr ap) {
  char * _T0;
  char * _T1;
  char * _T2;
  unsigned int _T3;
  char * _T4;
  char * _T5;
  char * _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  const char * _TD;
  const char * _TE;
  int _TF;
  char _T10;
  int _T11;
  struct _fat_ptr _T12;
  int _T13;
  struct _fat_ptr _T14;
  unsigned char * _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  int _T18;
  int _T19;
  int (* _T1A)(int,void *);
  void * _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  int _T1E;
  int _T1F;
  int _T20;
  int _T21;
  struct _fat_ptr * _T22;
  struct _fat_ptr * _T23;
  struct _fat_ptr _T24;
  unsigned char * _T25;
  const char * _T26;
  char _T27;
  int _T28;
  int _T29;
  char _T2A;
  int _T2B;
  struct _fat_ptr * _T2C;
  int _T2D;
  struct _fat_ptr * _T2E;
  struct _fat_ptr _T2F;
  unsigned char * _T30;
  const char * _T31;
  char _T32;
  int _T33;
  struct _fat_ptr * _T34;
  int _T35;
  int _T36;
  unsigned int _T37;
  int _T38;
  int _T39;
  struct _fat_ptr * _T3A;
  struct _fat_ptr _T3B;
  unsigned char * _T3C;
  const char * _T3D;
  char _T3E;
  int _T3F;
  int _T40;
  int _T41;
  struct _fat_ptr * _T42;
  struct _fat_ptr _T43;
  unsigned char * _T44;
  const char * _T45;
  char _T46;
  int _T47;
  unsigned int _T48;
  char * _T49;
  unsigned char * _T4A;
  char * _T4B;
  int _T4C;
  unsigned int _T4D;
  unsigned char * _T4E;
  char * _T4F;
  struct _fat_ptr * _T50;
  long _T51;
  long _T52;
  int _T53;
  short _T54;
  struct _fat_ptr * _T55;
  unsigned long _T56;
  long _T57;
  struct _fat_ptr * _T58;
  int _T59;
  int _T5A;
  char * _T5B;
  unsigned char * _T5C;
  char * _T5D;
  unsigned int _T5E;
  unsigned char * _T5F;
  char * _T60;
  double _T61;
  int _T62;
  int _T63;
  int * _T64;
  int _T65;
  struct _fat_ptr _T66;
  char * _T67;
  struct _fat_ptr _T68;
  unsigned int _T69;
  unsigned int _T6A;
  int _T6B;
  struct _fat_ptr _T6C;
  int _T6D;
  struct _fat_ptr _T6E;
  unsigned char * _T6F;
  char * _T70;
  char _T71;
  int _T72;
  struct _fat_ptr * _T73;
  unsigned long * _T74;
  int _T75;
  short * _T76;
  int _T77;
  unsigned long * _T78;
  int _T79;
  struct _fat_ptr * _T7A;
  unsigned long _T7B;
  unsigned long _T7C;
  int _T7D;
  unsigned short _T7E;
  struct _fat_ptr * _T7F;
  long _T80;
  struct _fat_ptr * _T81;
  struct _fat_ptr * _T82;
  struct _fat_ptr _T83;
  unsigned char * _T84;
  char * _T85;
  struct _fat_ptr _T86;
  unsigned char * _T87;
  struct _fat_ptr _T88;
  unsigned char * _T89;
  int _T8A;
  unsigned long _T8B;
  unsigned long _T8C;
  unsigned long _T8D;
  int _T8E;
  unsigned short _T8F;
  struct _fat_ptr * _T90;
  unsigned long _T91;
  unsigned long _T92;
  int _T93;
  unsigned short _T94;
  struct _fat_ptr * _T95;
  int _T96;
  int _T97;
  char * _T98;
  struct _fat_ptr _T99;
  int _T9A;
  int _T9B;
  enum Cyc_BASE _T9C;
  int _T9D;
  struct _fat_ptr * _T9E;
  unsigned char * _T9F;
  char * _TA0;
  unsigned long _TA1;
  unsigned long _TA2;
  unsigned int _TA3;
  unsigned char * _TA4;
  char * _TA5;
  unsigned long _TA6;
  int _TA7;
  struct _fat_ptr _TA8;
  unsigned char * _TA9;
  char * _TAA;
  char _TAB;
  int _TAC;
  struct _fat_ptr * _TAD;
  unsigned char * _TAE;
  char * _TAF;
  unsigned int _TB0;
  unsigned char * _TB1;
  char * _TB2;
  struct _fat_ptr * _TB3;
  unsigned char * _TB4;
  char * _TB5;
  unsigned long _TB6;
  unsigned long _TB7;
  unsigned int _TB8;
  unsigned char * _TB9;
  char * _TBA;
  struct _fat_ptr * _TBB;
  unsigned char * _TBC;
  char * _TBD;
  unsigned long _TBE;
  unsigned int _TBF;
  unsigned char * _TC0;
  char * _TC1;
  struct _fat_ptr * _TC2;
  unsigned char * _TC3;
  char * _TC4;
  struct _fat_ptr _TC5;
  unsigned long _TC6;
  int _TC7;
  unsigned char * _TC8;
  const char * _TC9;
  unsigned int _TCA;
  unsigned char * _TCB;
  char * _TCC;
  unsigned long _TCD;
  int _TCE;
  struct _fat_ptr _TCF;
  char * _TD0;
  struct _fat_ptr _TD1;
  int _TD2;
  int _TD3;
  struct _fat_ptr _TD4;
  unsigned char * _TD5;
  struct _fat_ptr _TD6;
  unsigned char * _TD7;
  int _TD8;
  char * _TD9;
  unsigned char * _TDA;
  char * _TDB;
  int _TDC;
  unsigned int _TDD;
  unsigned char * _TDE;
  char * _TDF;
  char _TE0;
  int _TE1;
  int _TE2;
  int _TE3;
  int _TE4;
  int _TE5;
  int (* _TE6)(int,void *);
  void * _TE7;
  int _TE8;
  int _TE9;
  int _TEA;
  char _TEB;
  int _TEC;
  char * _TED;
  struct _fat_ptr _TEE;
  unsigned char * _TEF;
  char * _TF0;
  unsigned int _TF1;
  unsigned char * _TF2;
  char * _TF3;
  int (* _TF4)(int,void *);
  void * _TF5;
  char * _TF6;
  struct _fat_ptr _TF7;
  struct _fat_ptr _TF8;
  int _TF9;
  char * _TFA;
  char * _TFB;
  int _TFC;
  int (* _TFD)(int,void *);
  void * _TFE;
  char * _TFF;
  struct _fat_ptr _T100;
  int _T101;
  int _T102;
  int _T103;
  int _T104;
  int (* _T105)(int,void *);
  void * _T106;
  int _T107;
  int _T108;
  int _T109;
  int (* _T10A)(int,void *);
  void * _T10B;
  int _T10C;
  int _T10D;
  int _T10E;
  int (* _T10F)(int,void *);
  void * _T110;
  struct _fat_ptr _T111;
  struct _fat_ptr _T112;
  int _T113;
  int _T114;
  int _T115;
  int (* _T116)(int,void *);
  void * _T117;
  struct _fat_ptr _T118;
  struct _fat_ptr _T119;
  int _T11A;
  int _T11B;
  int _T11C;
  int (* _T11D)(int,void *);
  void * _T11E;
  struct _fat_ptr _T11F;
  struct _fat_ptr _T120;
  int _T121;
  int _T122;
  int _T123;
  int (* _T124)(int,void *);
  void * _T125;
  int _T126;
  int _T127;
  int _T128;
  int (* _T129)(int,void *);
  void * _T12A;
  int _T12B;
  int _T12C;
  int _T12D;
  int _T12E;
  int _T12F;
  int _T130;
  struct _fat_ptr fmt;
  register int ch;
  register int n;
  struct _fat_ptr cp = _tag_fat(0,0,0);
  struct _fat_ptr cp2 = _tag_fat(0,0,0);
  struct _fat_ptr cp3 = _tag_fat(0,0,0);
  int which_cp;
  struct _fat_ptr fmark;
  register int flags;
  int ret;
  int width;
  int prec;
  char sign;
  char sign_string[2U];
  _T0 = sign_string;
  _T0[0] = '\000';
  _T1 = sign_string;
  _T1[1] = '\000';
  { int softsign = 0;
    double _double;
    int fpprec;
    unsigned long _ulong;
    int dprec;
    int dpad;
    int fieldsz;
    int size = 0;
    char buf[349U];
    { unsigned int _T131 = 348U;
      unsigned int i;
      i = 0;
      _TL38: if (i < _T131) { goto _TL36;
      }else { goto _TL37;
      }
      _TL36: _T2 = buf;
      _T3 = i;
      _T2[_T3] = '\000';
      i = i + 1;
      goto _TL38;
      _TL37: _T4 = buf;
      _T4[_T131] = 0;
    }{ char ox[2U];
      _T5 = ox;
      _T5[0] = '\000';
      _T6 = ox;
      _T6[1] = '\000';
      { enum Cyc_BASE base;
	fmt = fmt0;
	ret = 0;
	_TL3C: if (1) { goto _TL3A;
	}else { goto _TL3B;
	}
	_TL3A: fmark = fmt;
	_T7 = fmt;
	{ unsigned int fmt_sz = _get_fat_size(_T7,sizeof(char));
	  n = 0;
	  _TL40: _T8 = n;
	  _T9 = (unsigned int)_T8;
	  _TA = fmt_sz;
	  if (_T9 < _TA) { goto _TL42;
	  }else { goto _TL3F;
	  }
	  _TL42: _TB = fmt;
	  _TC = _TB.curr;
	  _TD = (const char *)_TC;
	  _TE = _check_null(_TD);
	  _TF = n;
	  _T10 = _TE[_TF];
	  ch = (int)_T10;
	  _T11 = ch;
	  if (_T11 != 0) { goto _TL41;
	  }else { goto _TL3F;
	  }
	  _TL41: if (ch != 37) { goto _TL3E;
	  }else { goto _TL3F;
	  }
	  _TL3E: n = n + 1;
	  goto _TL40;
	  _TL3F: _T12 = fmt;
	  _T13 = n;
	  fmt = _fat_ptr_plus(_T12,sizeof(char),_T13);
	  _T14 = fmt;
	  _T15 = _T14.curr;
	  _T16 = fmark;
	  _T17 = _T16.curr;
	  _T18 = _T15 - _T17;
	  n = _T18 / sizeof(char);
	  _T19 = n;
	  if (_T19 == 0) { goto _TL43;
	  }
	  _TL45: _T1A = ioputc;
	  _T1B = ioputc_env;
	  _T1C = fmark;
	  _T1D = _T1C;
	  _T1E = n;
	  _T1F = Cyc__IO_sputn(_T1A,_T1B,_T1D,_T1E);
	  _T20 = n;
	  if (_T1F == _T20) { goto _TL47;
	  }
	  goto error;
	  _TL47: if (0) { goto _TL45;
	  }else { goto _TL46;
	  }
	  _TL46: _T21 = n;
	  ret = ret + _T21;
	  goto _TL44;
	  _TL43: _TL44: if (ch != 0) { goto _TL49;
	  }
	  goto done;
	  _TL49: _T22 = &fmt;
	  _fat_ptr_inplace_plus(_T22,sizeof(char),1);
	  flags = 0;
	  dprec = 0;
	  fpprec = 0;
	  width = 0;
	  prec = - 1;
	  sign = '\000';
	  rflag: _T23 = &fmt;
	  _T24 = _fat_ptr_inplace_plus_post(_T23,sizeof(char),1);
	  _T25 = _check_fat_subscript(_T24,sizeof(char),0U);
	  _T26 = (const char *)_T25;
	  _T27 = *_T26;
	  ch = (int)_T27;
	  reswitch: which_cp = 0;
	  _T28 = ch;
	  _T29 = (int)_T28;
	  switch (_T29) {
	  case 32: 
	    _T2A = sign;
	    _T2B = (int)_T2A;
	    if (_T2B) { goto _TL4C;
	    }else { goto _TL4E;
	    }
	    _TL4E: sign = ' ';
	    goto _TL4D;
	    _TL4C: _TL4D: goto rflag;
	  case 35: 
	    flags = flags | 8;
	    goto rflag;
	  case 42: 
	    width = Cyc_va_arg_int(ap);
	    _T2C = &ap;
	    _fat_ptr_inplace_plus(_T2C,sizeof(void *),1);
	    if (width < 0) { goto _TL4F;
	    }
	    goto rflag;
	    _TL4F: width = - width;
	    goto _LL8;
	  case 45: 
	    _LL8: flags = flags | 16;
	    _T2D = ~ 32;
	    flags = flags & _T2D;
	    goto rflag;
	  case 43: 
	    sign = '+';
	    goto rflag;
	  case 46: 
	    _T2E = &fmt;
	    _T2F = _fat_ptr_inplace_plus_post(_T2E,sizeof(char),1);
	    _T30 = _check_fat_subscript(_T2F,sizeof(char),0U);
	    _T31 = (const char *)_T30;
	    _T32 = *_T31;
	    ch = (int)_T32;
	    _T33 = ch;
	    if (_T33 != 42) { goto _TL51;
	    }
	    n = Cyc_va_arg_int(ap);
	    _T34 = &ap;
	    _fat_ptr_inplace_plus(_T34,sizeof(void *),1);
	    if (n >= 0) { goto _TL53;
	    }
	    _T35 = - 1;
	    goto _TL54;
	    _TL53: _T35 = n;
	    _TL54: prec = _T35;
	    goto rflag;
	    _TL51: n = 0;
	    _TL55: _T36 = ch - 48;
	    _T37 = (unsigned int)_T36;
	    if (_T37 <= 9U) { goto _TL56;
	    }else { goto _TL57;
	    }
	    _TL56: _T38 = 10 * n;
	    _T39 = ch - 48;
	    n = _T38 + _T39;
	    _T3A = &fmt;
	    _T3B = _fat_ptr_inplace_plus_post(_T3A,sizeof(char),1);
	    _T3C = _check_fat_subscript(_T3B,sizeof(char),0U);
	    _T3D = (const char *)_T3C;
	    _T3E = *_T3D;
	    ch = (int)_T3E;
	    goto _TL55;
	    _TL57: if (n >= 0) { goto _TL58;
	    }
	    _T3F = - 1;
	    goto _TL59;
	    _TL58: _T3F = n;
	    _TL59: prec = _T3F;
	    goto reswitch;
	  case 48: 
	    if (flags & 16) { goto _TL5A;
	    }else { goto _TL5C;
	    }
	    _TL5C: flags = flags | 32;
	    goto _TL5B;
	    _TL5A: _TL5B: goto rflag;
	  case 49: 
	    goto _LL12;
	  case 50: 
	    _LL12: goto _LL14;
	  case 51: 
	    _LL14: goto _LL16;
	  case 52: 
	    _LL16: goto _LL18;
	  case 53: 
	    _LL18: goto _LL1A;
	  case 54: 
	    _LL1A: goto _LL1C;
	  case 55: 
	    _LL1C: goto _LL1E;
	  case 56: 
	    _LL1E: goto _LL20;
	  case 57: 
	    _LL20: n = 0;
	    _TL5D: _T40 = 10 * n;
	    _T41 = ch - 48;
	    n = _T40 + _T41;
	    _T42 = &fmt;
	    _T43 = _fat_ptr_inplace_plus_post(_T42,sizeof(char),1);
	    _T44 = _check_fat_subscript(_T43,sizeof(char),0U);
	    _T45 = (const char *)_T44;
	    _T46 = *_T45;
	    ch = (int)_T46;
	    _T47 = ch - 48;
	    _T48 = (unsigned int)_T47;
	    if (_T48 <= 9U) { goto _TL5D;
	    }else { goto _TL5E;
	    }
	    _TL5E: width = n;
	    goto reswitch;
	  case 76: 
	    flags = flags | 2;
	    goto rflag;
	  case 104: 
	    flags = flags | 4;
	    goto rflag;
	  case 108: 
	    flags = flags | 1;
	    goto rflag;
	  case 99: 
	    _T49 = buf;
	    cp = _tag_fat(_T49,sizeof(char),349U);
	    { struct _fat_ptr _T131 = cp;
	      _T4A = _T131.curr;
	      _T4B = (char *)_T4A;
	      { char _T132 = *_T4B;
		_T4C = Cyc_va_arg_int(ap);
		{ char _T133 = (char)_T4C;
		  _T4D = _get_fat_size(_T131,sizeof(char));
		  if (_T4D != 1U) { goto _TL5F;
		  }
		  if (_T132 != 0) { goto _TL5F;
		  }
		  if (_T133 == 0) { goto _TL5F;
		  }
		  _throw_arraybounds();
		  goto _TL60;
		  _TL5F: _TL60: _T4E = _T131.curr;
		  _T4F = (char *)_T4E;
		  *_T4F = _T133;
		}
	      }
	    }_T50 = &ap;
	    _fat_ptr_inplace_plus(_T50,sizeof(void *),1);
	    size = 1;
	    sign = '\000';
	    goto _LL0;
	  case 68: 
	    flags = flags | 1;
	    goto _LL2C;
	  case 100: 
	    _LL2C: goto _LL2E;
	  case 105: 
	    _LL2E: if (! (flags & 1)) { goto _TL61;
	    }
	    _T51 = Cyc_va_arg_long(ap);
	    goto _TL62;
	    _TL61: if (! (flags & 4)) { goto _TL63;
	    }
	    _T53 = Cyc_va_arg_int(ap);
	    _T54 = (short)_T53;
	    _T52 = (long)_T54;
	    goto _TL64;
	    _TL63: _T52 = Cyc_va_arg_int(ap);
	    _TL64: _T51 = _T52;
	    _TL62: _ulong = (unsigned long)_T51;
	    _T55 = &ap;
	    _fat_ptr_inplace_plus(_T55,sizeof(void *),1);
	    _T56 = _ulong;
	    _T57 = (long)_T56;
	    if (_T57 >= 0) { goto _TL65;
	    }
	    _ulong = - _ulong;
	    sign = '-';
	    goto _TL66;
	    _TL65: _TL66: base = 1U;
	    goto number;
	  case 101: 
	    goto _LL32;
	  case 69: 
	    _LL32: goto _LL34;
	  case 102: 
	    _LL34: goto _LL36;
	  case 70: 
	    _LL36: goto _LL38;
	  case 103: 
	    _LL38: goto _LL3A;
	  case 71: 
	    _LL3A: _double = Cyc_va_arg_double(ap);
	    _T58 = &ap;
	    _fat_ptr_inplace_plus(_T58,sizeof(void *),1);
	    if (prec <= 39) { goto _TL67;
	    }
	    if (ch != 103) { goto _TL6D;
	    }else { goto _TL6C;
	    }
	    _TL6D: if (ch != 71) { goto _TL6B;
	    }else { goto _TL6C;
	    }
	    _TL6C: if (flags & 8) { goto _TL6B;
	    }else { goto _TL69;
	    }
	    _TL6B: fpprec = prec - 39;
	    goto _TL6A;
	    _TL69: _TL6A: prec = 39;
	    goto _TL68;
	    _TL67: _T59 = prec;
	    _T5A = - 1;
	    if (_T59 != _T5A) { goto _TL6E;
	    }
	    prec = 6;
	    goto _TL6F;
	    _TL6E: _TL6F: _TL68: _T5B = buf;
	    cp = _tag_fat(_T5B,sizeof(char),349U);
	    { struct _fat_ptr _T131 = cp;
	      _T5C = _T131.curr;
	      _T5D = (char *)_T5C;
	      { char _T132 = *_T5D;
		char _T133 = '\000';
		_T5E = _get_fat_size(_T131,sizeof(char));
		if (_T5E != 1U) { goto _TL70;
		}
		if (_T132 != 0) { goto _TL70;
		}
		if (_T133 == 0) { goto _TL70;
		}
		_throw_arraybounds();
		goto _TL71;
		_TL70: _TL71: _T5F = _T131.curr;
		_T60 = (char *)_T5F;
		*_T60 = _T133;
	      }
	    }_T61 = _double;
	    _T62 = prec;
	    _T63 = flags;
	    _T64 = &softsign;
	    _T65 = ch;
	    _T66 = cp;
	    _T67 = buf;
	    _T68 = _tag_fat(_T67,sizeof(char),349U);
	    _T69 = sizeof(buf);
	    _T6A = _T69 - 1U;
	    _T6B = (int)_T6A;
	    _T6C = _fat_ptr_plus(_T68,sizeof(char),_T6B);
	    size = Cyc___cvt_double(_T61,_T62,_T63,_T64,_T65,_T66,_T6C);
	    _T6D = softsign;
	    if (! _T6D) { goto _TL72;
	    }
	    sign = '-';
	    goto _TL73;
	    _TL72: _TL73: _T6E = cp;
	    _T6F = _T6E.curr;
	    _T70 = (char *)_T6F;
	    _T71 = *_T70;
	    _T72 = (int)_T71;
	    if (_T72 != 0) { goto _TL74;
	    }
	    _T73 = &cp;
	    _fat_ptr_inplace_plus(_T73,sizeof(char),1);
	    goto _TL75;
	    _TL74: _TL75: goto _LL0;
	  case 110: 
	    if (! (flags & 1)) { goto _TL76;
	    }
	    _T74 = Cyc_va_arg_int_ptr(ap);
	    _T75 = ret;
	    *_T74 = (unsigned long)_T75;
	    goto _TL77;
	    _TL76: if (! (flags & 4)) { goto _TL78;
	    }
	    _T76 = Cyc_va_arg_short_ptr(ap);
	    _T77 = ret;
	    *_T76 = (short)_T77;
	    goto _TL79;
	    _TL78: _T78 = Cyc_va_arg_int_ptr(ap);
	    _T79 = ret;
	    *_T78 = (unsigned long)_T79;
	    _TL79: _TL77: _T7A = &ap;
	    _fat_ptr_inplace_plus(_T7A,sizeof(void *),1);
	    goto _TL39;
	  case 79: 
	    flags = flags | 1;
	    goto _LL40;
	  case 111: 
	    _LL40: if (! (flags & 1)) { goto _TL7A;
	    }
	    _T7B = Cyc_va_arg_ulong(ap);
	    goto _TL7B;
	    _TL7A: if (! (flags & 4)) { goto _TL7C;
	    }
	    _T7D = Cyc_va_arg_int(ap);
	    _T7E = (unsigned short)_T7D;
	    _T7C = (unsigned long)_T7E;
	    goto _TL7D;
	    _TL7C: _T7C = Cyc_va_arg_uint(ap);
	    _TL7D: _T7B = _T7C;
	    _TL7B: _ulong = _T7B;
	    _T7F = &ap;
	    _fat_ptr_inplace_plus(_T7F,sizeof(void *),1);
	    base = 0U;
	    goto nosign;
	  case 112: 
	    _T80 = Cyc_va_arg_long(ap);
	    _ulong = (unsigned long)_T80;
	    _T81 = &ap;
	    _fat_ptr_inplace_plus(_T81,sizeof(void *),1);
	    base = 2U;
	    flags = flags | 64;
	    ch = 120;
	    goto nosign;
	  case 115: 
	    { struct _fat_ptr b = Cyc_va_arg_string(ap);
	      _T82 = &ap;
	      _fat_ptr_inplace_plus(_T82,sizeof(void *),1);
	      which_cp = 3;
	      cp3 = b;
	      if (prec < 0) { goto _TL7E;
	      }
	      { struct _fat_ptr p = Cyc_my_nzmemchr(cp3,'\000',prec);
		_T83 = p;
		_T84 = _T83.curr;
		_T85 = (char *)_T84;
		if (_T85 == 0) { goto _TL80;
		}
		_T86 = p;
		_T87 = _T86.curr;
		_T88 = cp3;
		_T89 = _T88.curr;
		_T8A = _T87 - _T89;
		size = _T8A / sizeof(char);
		if (size <= prec) { goto _TL82;
		}
		size = prec;
		goto _TL83;
		_TL82: _TL83: goto _TL81;
		_TL80: size = prec;
		_TL81: ;
	      }goto _TL7F;
	      _TL7E: _T8B = Cyc_my_strlen(cp3);
	      size = (int)_T8B;
	      _TL7F: sign = '\000';
	      goto _LL0;
	    }
	  case 85: 
	    flags = flags | 1;
	    goto _LL48;
	  case 117: 
	    _LL48: if (! (flags & 1)) { goto _TL84;
	    }
	    _T8C = Cyc_va_arg_ulong(ap);
	    goto _TL85;
	    _TL84: if (! (flags & 4)) { goto _TL86;
	    }
	    _T8E = Cyc_va_arg_int(ap);
	    _T8F = (unsigned short)_T8E;
	    _T8D = (unsigned long)_T8F;
	    goto _TL87;
	    _TL86: _T8D = Cyc_va_arg_uint(ap);
	    _TL87: _T8C = _T8D;
	    _TL85: _ulong = _T8C;
	    _T90 = &ap;
	    _fat_ptr_inplace_plus(_T90,sizeof(void *),1);
	    base = 1U;
	    goto nosign;
	  case 88: 
	    goto _LL4C;
	  case 120: 
	    _LL4C: if (! (flags & 1)) { goto _TL88;
	    }
	    _T91 = Cyc_va_arg_ulong(ap);
	    goto _TL89;
	    _TL88: if (! (flags & 4)) { goto _TL8A;
	    }
	    _T93 = Cyc_va_arg_int(ap);
	    _T94 = (unsigned short)_T93;
	    _T92 = (unsigned long)_T94;
	    goto _TL8B;
	    _TL8A: _T92 = Cyc_va_arg_uint(ap);
	    _TL8B: _T91 = _T92;
	    _TL89: _ulong = _T91;
	    _T95 = &ap;
	    _fat_ptr_inplace_plus(_T95,sizeof(void *),1);
	    base = 2U;
	    if (! (flags & 8)) { goto _TL8C;
	    }
	    if (_ulong == 0U) { goto _TL8C;
	    }
	    flags = flags | 64;
	    goto _TL8D;
	    _TL8C: _TL8D: nosign: sign = '\000';
	    number: dprec = prec;
	    _T96 = dprec;
	    if (_T96 < 0) { goto _TL8E;
	    }
	    _T97 = ~ 32;
	    flags = flags & _T97;
	    goto _TL8F;
	    _TL8E: _TL8F: _T98 = buf;
	    _T99 = _tag_fat(_T98,sizeof(char),349U);
	    _T9A = 308 + 39;
	    _T9B = _T9A + 1;
	    cp = _fat_ptr_plus(_T99,sizeof(char),_T9B);
	    if (_ulong != 0U) { goto _TL92;
	    }else { goto _TL93;
	    }
	    _TL93: if (prec != 0) { goto _TL92;
	    }else { goto _TL90;
	    }
	    _TL92: { struct _fat_ptr xdigs;
	      _T9C = base;
	      _T9D = (int)_T9C;
	      switch (_T9D) {
	      case Cyc_OCT: 
		_TL95: _T9E = &cp;
		{ struct _fat_ptr _T131 = _fat_ptr_inplace_plus(_T9E,sizeof(char),
								-1);
		  _T9F = _check_fat_subscript(_T131,sizeof(char),0U);
		  _TA0 = (char *)_T9F;
		  { char _T132 = *_TA0;
		    _TA1 = _ulong & 7U;
		    _TA2 = _TA1 + 48U;
		    { char _T133 = (char)_TA2;
		      _TA3 = _get_fat_size(_T131,sizeof(char));
		      if (_TA3 != 1U) { goto _TL97;
		      }
		      if (_T132 != 0) { goto _TL97;
		      }
		      if (_T133 == 0) { goto _TL97;
		      }
		      _throw_arraybounds();
		      goto _TL98;
		      _TL97: _TL98: _TA4 = _T131.curr;
		      _TA5 = (char *)_TA4;
		      *_TA5 = _T133;
		    }
		  }
		}_ulong = _ulong >> 3U;
		_TA6 = _ulong;
		_TA7 = (int)_TA6;
		if (_TA7) { goto _TL95;
		}else { goto _TL96;
		}
		_TL96: if (! (flags & 8)) { goto _TL99;
		}
		_TA8 = cp;
		_TA9 = _check_fat_subscript(_TA8,sizeof(char),0U);
		_TAA = (char *)_TA9;
		_TAB = *_TAA;
		_TAC = (int)_TAB;
		if (_TAC == 48) { goto _TL99;
		}
		_TAD = &cp;
		{ struct _fat_ptr _T131 = _fat_ptr_inplace_plus(_TAD,sizeof(char),
								-1);
		  _TAE = _check_fat_subscript(_T131,sizeof(char),0U);
		  _TAF = (char *)_TAE;
		  { char _T132 = *_TAF;
		    char _T133 = '0';
		    _TB0 = _get_fat_size(_T131,sizeof(char));
		    if (_TB0 != 1U) { goto _TL9B;
		    }
		    if (_T132 != 0) { goto _TL9B;
		    }
		    if (_T133 == 0) { goto _TL9B;
		    }
		    _throw_arraybounds();
		    goto _TL9C;
		    _TL9B: _TL9C: _TB1 = _T131.curr;
		    _TB2 = (char *)_TB1;
		    *_TB2 = _T133;
		  }
		}goto _TL9A;
		_TL99: _TL9A: goto _LL4F;
	      case Cyc_DEC: 
		_TL9D: if (_ulong >= 10U) { goto _TL9E;
		}else { goto _TL9F;
		}
		_TL9E: _TB3 = &cp;
		{ struct _fat_ptr _T131 = _fat_ptr_inplace_plus(_TB3,sizeof(char),
								-1);
		  _TB4 = _check_fat_subscript(_T131,sizeof(char),0U);
		  _TB5 = (char *)_TB4;
		  { char _T132 = *_TB5;
		    _TB6 = _ulong % 10U;
		    _TB7 = _TB6 + 48U;
		    { char _T133 = (char)_TB7;
		      _TB8 = _get_fat_size(_T131,sizeof(char));
		      if (_TB8 != 1U) { goto _TLA0;
		      }
		      if (_T132 != 0) { goto _TLA0;
		      }
		      if (_T133 == 0) { goto _TLA0;
		      }
		      _throw_arraybounds();
		      goto _TLA1;
		      _TLA0: _TLA1: _TB9 = _T131.curr;
		      _TBA = (char *)_TB9;
		      *_TBA = _T133;
		    }
		  }
		}_ulong = _ulong / 10U;
		goto _TL9D;
		_TL9F: _TBB = &cp;
		{ struct _fat_ptr _T131 = _fat_ptr_inplace_plus(_TBB,sizeof(char),
								-1);
		  _TBC = _check_fat_subscript(_T131,sizeof(char),0U);
		  _TBD = (char *)_TBC;
		  { char _T132 = *_TBD;
		    _TBE = _ulong + 48U;
		    { char _T133 = (char)_TBE;
		      _TBF = _get_fat_size(_T131,sizeof(char));
		      if (_TBF != 1U) { goto _TLA2;
		      }
		      if (_T132 != 0) { goto _TLA2;
		      }
		      if (_T133 == 0) { goto _TLA2;
		      }
		      _throw_arraybounds();
		      goto _TLA3;
		      _TLA2: _TLA3: _TC0 = _T131.curr;
		      _TC1 = (char *)_TC0;
		      *_TC1 = _T133;
		    }
		  }
		}goto _LL4F;
	      case Cyc_HEX: 
		if (ch != 88) { goto _TLA4;
		}
		xdigs = _tag_fat("0123456789ABCDEF",sizeof(char),17U);
		goto _TLA5;
		_TLA4: xdigs = _tag_fat("0123456789abcdef",sizeof(char),17U);
		_TLA5: _TLA6: _TC2 = &cp;
		{ struct _fat_ptr _T131 = _fat_ptr_inplace_plus(_TC2,sizeof(char),
								-1);
		  _TC3 = _check_fat_subscript(_T131,sizeof(char),0U);
		  _TC4 = (char *)_TC3;
		  { char _T132 = *_TC4;
		    _TC5 = xdigs;
		    _TC6 = _ulong & 15U;
		    _TC7 = (int)_TC6;
		    _TC8 = _check_fat_subscript(_TC5,sizeof(char),_TC7);
		    _TC9 = (const char *)_TC8;
		    { char _T133 = *_TC9;
		      _TCA = _get_fat_size(_T131,sizeof(char));
		      if (_TCA != 1U) { goto _TLA8;
		      }
		      if (_T132 != 0) { goto _TLA8;
		      }
		      if (_T133 == 0) { goto _TLA8;
		      }
		      _throw_arraybounds();
		      goto _TLA9;
		      _TLA8: _TLA9: _TCB = _T131.curr;
		      _TCC = (char *)_TCB;
		      *_TCC = _T133;
		    }
		  }
		}_ulong = _ulong >> 4U;
		_TCD = _ulong;
		_TCE = (int)_TCD;
		if (_TCE) { goto _TLA6;
		}else { goto _TLA7;
		}
		_TLA7: goto _LL4F;
	      default: 
		_TCF = _tag_fat("bug in vform: bad base",sizeof(char),23U);
		cp = Cyc_strdup(_TCF);
		goto skipsize;
	      }
	      _LL4F: ;
	    }goto _TL91;
	    _TL90: _TL91: _TD0 = buf;
	    _TD1 = _tag_fat(_TD0,sizeof(char),349U);
	    _TD2 = 308 + 39;
	    _TD3 = _TD2 + 1;
	    _TD4 = _fat_ptr_plus(_TD1,sizeof(char),_TD3);
	    _TD5 = _TD4.curr;
	    _TD6 = cp;
	    _TD7 = _TD6.curr;
	    _TD8 = _TD5 - _TD7;
	    size = _TD8 / sizeof(char);
	    skipsize: goto _LL0;
	  default: 
	    if (ch != 0) { goto _TLAA;
	    }
	    goto done;
	    _TLAA: _TD9 = buf;
	    cp = _tag_fat(_TD9,sizeof(char),349U);
	    { struct _fat_ptr _T131 = cp;
	      _TDA = _T131.curr;
	      _TDB = (char *)_TDA;
	      { char _T132 = *_TDB;
		_TDC = ch;
		{ char _T133 = (char)_TDC;
		  _TDD = _get_fat_size(_T131,sizeof(char));
		  if (_TDD != 1U) { goto _TLAC;
		  }
		  if (_T132 != 0) { goto _TLAC;
		  }
		  if (_T133 == 0) { goto _TLAC;
		  }
		  _throw_arraybounds();
		  goto _TLAD;
		  _TLAC: _TLAD: _TDE = _T131.curr;
		  _TDF = (char *)_TDE;
		  *_TDF = _T133;
		}
	      }
	    }size = 1;
	    sign = '\000';
	    goto _LL0;
	  }
	  _LL0: fieldsz = size + fpprec;
	  dpad = dprec - size;
	  if (dpad >= 0) { goto _TLAE;
	  }
	  dpad = 0;
	  goto _TLAF;
	  _TLAE: _TLAF: _TE0 = sign;
	  _TE1 = (int)_TE0;
	  if (! _TE1) { goto _TLB0;
	  }
	  fieldsz = fieldsz + 1;
	  goto _TLB1;
	  _TLB0: if (! (flags & 64)) { goto _TLB2;
	  }
	  fieldsz = fieldsz + 2;
	  goto _TLB3;
	  _TLB2: _TLB3: _TLB1: _TE2 = dpad;
	  fieldsz = fieldsz + _TE2;
	  _TE3 = flags;
	  _TE4 = 16 | 32;
	  _TE5 = _TE3 & _TE4;
	  if (_TE5 != 0) { goto _TLB4;
	  }
	  _TE6 = ioputc;
	  _TE7 = ioputc_env;
	  _TE8 = width - fieldsz;
	  _TE9 = Cyc__IO_padn(_TE6,_TE7,' ',_TE8);
	  _TEA = width - fieldsz;
	  if (_TE9 >= _TEA) { goto _TLB6;
	  }
	  goto error;
	  _TLB6: goto _TLB5;
	  _TLB4: _TLB5: _TEB = sign;
	  _TEC = (int)_TEB;
	  if (! _TEC) { goto _TLB8;
	  }
	  _TED = sign_string;
	  _TEE = _tag_fat(_TED,sizeof(char),2U);
	  { struct _fat_ptr _T131 = _fat_ptr_plus(_TEE,sizeof(char),0);
	    _TEF = _check_fat_subscript(_T131,sizeof(char),0U);
	    _TF0 = (char *)_TEF;
	    { char _T132 = *_TF0;
	      char _T133 = sign;
	      _TF1 = _get_fat_size(_T131,sizeof(char));
	      if (_TF1 != 1U) { goto _TLBA;
	      }
	      if (_T132 != 0) { goto _TLBA;
	      }
	      if (_T133 == 0) { goto _TLBA;
	      }
	      _throw_arraybounds();
	      goto _TLBB;
	      _TLBA: _TLBB: _TF2 = _T131.curr;
	      _TF3 = (char *)_TF2;
	      *_TF3 = _T133;
	    }
	  }_TLBC: _TF4 = ioputc;
	  _TF5 = ioputc_env;
	  _TF6 = sign_string;
	  _TF7 = _tag_fat(_TF6,sizeof(char),2U);
	  _TF8 = _TF7;
	  _TF9 = Cyc__IO_sputn(_TF4,_TF5,_TF8,1);
	  if (_TF9 == 1) { goto _TLBE;
	  }
	  goto error;
	  _TLBE: if (0) { goto _TLBC;
	  }else { goto _TLBD;
	  }
	  _TLBD: goto _TLB9;
	  _TLB8: if (! (flags & 64)) { goto _TLC0;
	  }
	  _TFA = ox;
	  _TFA[0] = '0';
	  _TFB = ox;
	  _TFC = ch;
	  _TFB[1] = (char)_TFC;
	  _TLC2: _TFD = ioputc;
	  _TFE = ioputc_env;
	  _TFF = ox;
	  _T100 = _tag_fat(_TFF,sizeof(char),2U);
	  _T101 = Cyc__IO_nzsputn(_TFD,_TFE,_T100,2);
	  if (_T101 == 2) { goto _TLC4;
	  }
	  goto error;
	  _TLC4: if (0) { goto _TLC2;
	  }else { goto _TLC3;
	  }
	  _TLC3: goto _TLC1;
	  _TLC0: _TLC1: _TLB9: _T102 = flags;
	  _T103 = 16 | 32;
	  _T104 = _T102 & _T103;
	  if (_T104 != 32) { goto _TLC6;
	  }
	  _T105 = ioputc;
	  _T106 = ioputc_env;
	  _T107 = width - fieldsz;
	  _T108 = Cyc__IO_padn(_T105,_T106,'0',_T107);
	  _T109 = width - fieldsz;
	  if (_T108 >= _T109) { goto _TLC8;
	  }
	  goto error;
	  _TLC8: goto _TLC7;
	  _TLC6: _TLC7: _T10A = ioputc;
	  _T10B = ioputc_env;
	  _T10C = dpad;
	  _T10D = Cyc__IO_padn(_T10A,_T10B,'0',_T10C);
	  _T10E = dpad;
	  if (_T10D >= _T10E) { goto _TLCA;
	  }
	  goto error;
	  _TLCA: if (which_cp != 0) { goto _TLCC;
	  }
	  _TLCE: _T10F = ioputc;
	  _T110 = ioputc_env;
	  _T111 = cp;
	  _T112 = _T111;
	  _T113 = size;
	  _T114 = Cyc__IO_sputn(_T10F,_T110,_T112,_T113);
	  _T115 = size;
	  if (_T114 == _T115) { goto _TLD0;
	  }
	  goto error;
	  _TLD0: if (0) { goto _TLCE;
	  }else { goto _TLCF;
	  }
	  _TLCF: goto _TLCD;
	  _TLCC: if (which_cp != 2) { goto _TLD2;
	  }
	  _TLD4: _T116 = ioputc;
	  _T117 = ioputc_env;
	  _T118 = cp2;
	  _T119 = _T118;
	  _T11A = size;
	  _T11B = Cyc__IO_sputn(_T116,_T117,_T119,_T11A);
	  _T11C = size;
	  if (_T11B == _T11C) { goto _TLD6;
	  }
	  goto error;
	  _TLD6: if (0) { goto _TLD4;
	  }else { goto _TLD5;
	  }
	  _TLD5: goto _TLD3;
	  _TLD2: if (which_cp != 3) { goto _TLD8;
	  }
	  _TLDA: _T11D = ioputc;
	  _T11E = ioputc_env;
	  _T11F = cp3;
	  _T120 = _T11F;
	  _T121 = size;
	  _T122 = Cyc__IO_nzsputn(_T11D,_T11E,_T120,_T121);
	  _T123 = size;
	  if (_T122 == _T123) { goto _TLDC;
	  }
	  goto error;
	  _TLDC: if (0) { goto _TLDA;
	  }else { goto _TLDB;
	  }
	  _TLDB: goto _TLD9;
	  _TLD8: _TLD9: _TLD3: _TLCD: _T124 = ioputc;
	  _T125 = ioputc_env;
	  _T126 = fpprec;
	  _T127 = Cyc__IO_padn(_T124,_T125,'0',_T126);
	  _T128 = fpprec;
	  if (_T127 >= _T128) { goto _TLDE;
	  }
	  goto error;
	  _TLDE: if (! (flags & 16)) { goto _TLE0;
	  }
	  _T129 = ioputc;
	  _T12A = ioputc_env;
	  _T12B = width - fieldsz;
	  _T12C = Cyc__IO_padn(_T129,_T12A,' ',_T12B);
	  _T12D = width - fieldsz;
	  if (_T12C >= _T12D) { goto _TLE2;
	  }
	  goto error;
	  _TLE2: goto _TLE1;
	  _TLE0: _TLE1: if (width <= fieldsz) { goto _TLE4;
	  }
	  _T12E = width;
	  goto _TLE5;
	  _TLE4: _T12E = fieldsz;
	  _TLE5: ret = ret + _T12E;
	}_TL39: goto _TL3C;
	_TL3B: done: _T12F = ret;
	return _T12F;
	error: _T130 = - 1;
	return _T130;
      }
    }
  }
}
static struct _fat_ptr Cyc_exponent(struct _fat_ptr p,int exp,int fmtch) {
  char * _T0;
  unsigned int _T1;
  char * _T2;
  char * _T3;
  struct _fat_ptr * _T4;
  unsigned char * _T5;
  char * _T6;
  int _T7;
  unsigned int _T8;
  unsigned char * _T9;
  char * _TA;
  struct _fat_ptr * _TB;
  unsigned char * _TC;
  char * _TD;
  unsigned int _TE;
  unsigned char * _TF;
  char * _T10;
  struct _fat_ptr * _T11;
  unsigned char * _T12;
  char * _T13;
  unsigned int _T14;
  unsigned char * _T15;
  char * _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr * _T18;
  unsigned char * _T19;
  char * _T1A;
  int _T1B;
  int _T1C;
  unsigned int _T1D;
  unsigned char * _T1E;
  char * _T1F;
  int _T20;
  struct _fat_ptr * _T21;
  unsigned char * _T22;
  char * _T23;
  int _T24;
  unsigned int _T25;
  unsigned char * _T26;
  char * _T27;
  struct _fat_ptr _T28;
  unsigned char * _T29;
  char * _T2A;
  struct _fat_ptr _T2B;
  struct _fat_ptr _T2C;
  unsigned char * _T2D;
  char * _T2E;
  struct _fat_ptr * _T2F;
  unsigned char * _T30;
  char * _T31;
  struct _fat_ptr * _T32;
  struct _fat_ptr _T33;
  unsigned char * _T34;
  char * _T35;
  unsigned int _T36;
  unsigned char * _T37;
  char * _T38;
  struct _fat_ptr * _T39;
  unsigned char * _T3A;
  char * _T3B;
  unsigned int _T3C;
  unsigned char * _T3D;
  char * _T3E;
  struct _fat_ptr * _T3F;
  unsigned char * _T40;
  char * _T41;
  int _T42;
  unsigned int _T43;
  unsigned char * _T44;
  char * _T45;
  struct _fat_ptr _T46;
  struct _fat_ptr t;
  char expbuffer[309U];
  { unsigned int _T47 = 308U;
    unsigned int i;
    i = 0;
    _TLE9: if (i < _T47) { goto _TLE7;
    }else { goto _TLE8;
    }
    _TLE7: _T0 = expbuffer;
    _T1 = i;
    _T0[_T1] = '0';
    i = i + 1;
    goto _TLE9;
    _TLE8: _T2 = expbuffer;
    _T2[_T47] = 0;
  }_T3 = expbuffer;
  { struct _fat_ptr expbuf = _tag_fat(_T3,sizeof(char),309U);
    _T4 = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T4,sizeof(char),
							1);
      _T5 = _T47.curr;
      _T6 = (char *)_T5;
      { char _T48 = *_T6;
	_T7 = fmtch;
	{ char _T49 = (char)_T7;
	  _T8 = _get_fat_size(_T47,sizeof(char));
	  if (_T8 != 1U) { goto _TLEA;
	  }
	  if (_T48 != 0) { goto _TLEA;
	  }
	  if (_T49 == 0) { goto _TLEA;
	  }
	  _throw_arraybounds();
	  goto _TLEB;
	  _TLEA: _TLEB: _T9 = _T47.curr;
	  _TA = (char *)_T9;
	  *_TA = _T49;
	}
      }
    }if (exp >= 0) { goto _TLEC;
    }
    exp = - exp;
    _TB = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_TB,sizeof(char),
							1);
      _TC = _T47.curr;
      _TD = (char *)_TC;
      { char _T48 = *_TD;
	char _T49 = '-';
	_TE = _get_fat_size(_T47,sizeof(char));
	if (_TE != 1U) { goto _TLEE;
	}
	if (_T48 != 0) { goto _TLEE;
	}
	if (_T49 == 0) { goto _TLEE;
	}
	_throw_arraybounds();
	goto _TLEF;
	_TLEE: _TLEF: _TF = _T47.curr;
	_T10 = (char *)_TF;
	*_T10 = _T49;
      }
    }goto _TLED;
    _TLEC: _T11 = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T11,sizeof(char),
							1);
      _T12 = _T47.curr;
      _T13 = (char *)_T12;
      { char _T48 = *_T13;
	char _T49 = '+';
	_T14 = _get_fat_size(_T47,sizeof(char));
	if (_T14 != 1U) { goto _TLF0;
	}
	if (_T48 != 0) { goto _TLF0;
	}
	if (_T49 == 0) { goto _TLF0;
	}
	_throw_arraybounds();
	goto _TLF1;
	_TLF0: _TLF1: _T15 = _T47.curr;
	_T16 = (char *)_T15;
	*_T16 = _T49;
      }
    }_TLED: _T17 = expbuf;
    t = _fat_ptr_plus(_T17,sizeof(char),308);
    if (exp <= 9) { goto _TLF2;
    }
    _TLF4: _T18 = &t;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus(_T18,sizeof(char),-1);
      _T19 = _T47.curr;
      _T1A = (char *)_T19;
      { char _T48 = *_T1A;
	_T1B = exp % 10;
	_T1C = _T1B + 48;
	{ char _T49 = (char)_T1C;
	  _T1D = _get_fat_size(_T47,sizeof(char));
	  if (_T1D != 1U) { goto _TLF6;
	  }
	  if (_T48 != 0) { goto _TLF6;
	  }
	  if (_T49 == 0) { goto _TLF6;
	  }
	  _throw_arraybounds();
	  goto _TLF7;
	  _TLF6: _TLF7: _T1E = _T47.curr;
	  _T1F = (char *)_T1E;
	  *_T1F = _T49;
	}
      }
    }exp = exp / 10;
    _T20 = exp;
    if (_T20 > 9) { goto _TLF4;
    }else { goto _TLF5;
    }
    _TLF5: _T21 = &t;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus(_T21,sizeof(char),-1);
      _T22 = _T47.curr;
      _T23 = (char *)_T22;
      { char _T48 = *_T23;
	_T24 = exp + 48;
	{ char _T49 = (char)_T24;
	  _T25 = _get_fat_size(_T47,sizeof(char));
	  if (_T25 != 1U) { goto _TLF8;
	  }
	  if (_T48 != 0) { goto _TLF8;
	  }
	  if (_T49 == 0) { goto _TLF8;
	  }
	  _throw_arraybounds();
	  goto _TLF9;
	  _TLF8: _TLF9: _T26 = _T47.curr;
	  _T27 = (char *)_T26;
	  *_T27 = _T49;
	}
      }
    }_TLFD: _T28 = t;
    _T29 = _T28.curr;
    _T2A = (char *)_T29;
    _T2B = expbuf;
    _T2C = _fat_ptr_plus(_T2B,sizeof(char),308);
    _T2D = _T2C.curr;
    _T2E = (char *)_T2D;
    if (_T2A < _T2E) { goto _TLFB;
    }else { goto _TLFC;
    }
    _TLFB: _T2F = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T2F,sizeof(char),
							1);
      _T30 = _T47.curr;
      _T31 = (char *)_T30;
      { char _T48 = *_T31;
	_T32 = &t;
	_T33 = _fat_ptr_inplace_plus_post(_T32,sizeof(char),1);
	_T34 = _T33.curr;
	_T35 = (char *)_T34;
	{ char _T49 = *_T35;
	  _T36 = _get_fat_size(_T47,sizeof(char));
	  if (_T36 != 1U) { goto _TLFE;
	  }
	  if (_T48 != 0) { goto _TLFE;
	  }
	  if (_T49 == 0) { goto _TLFE;
	  }
	  _throw_arraybounds();
	  goto _TLFF;
	  _TLFE: _TLFF: _T37 = _T47.curr;
	  _T38 = (char *)_T37;
	  *_T38 = _T49;
	}
      }
    }goto _TLFD;
    _TLFC: goto _TLF3;
    _TLF2: _T39 = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T39,sizeof(char),
							1);
      _T3A = _T47.curr;
      _T3B = (char *)_T3A;
      { char _T48 = *_T3B;
	char _T49 = '0';
	_T3C = _get_fat_size(_T47,sizeof(char));
	if (_T3C != 1U) { goto _TL100;
	}
	if (_T48 != 0) { goto _TL100;
	}
	if (_T49 == 0) { goto _TL100;
	}
	_throw_arraybounds();
	goto _TL101;
	_TL100: _TL101: _T3D = _T47.curr;
	_T3E = (char *)_T3D;
	*_T3E = _T49;
      }
    }_T3F = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T3F,sizeof(char),
							1);
      _T40 = _T47.curr;
      _T41 = (char *)_T40;
      { char _T48 = *_T41;
	_T42 = exp + 48;
	{ char _T49 = (char)_T42;
	  _T43 = _get_fat_size(_T47,sizeof(char));
	  if (_T43 != 1U) { goto _TL102;
	  }
	  if (_T48 != 0) { goto _TL102;
	  }
	  if (_T49 == 0) { goto _TL102;
	  }
	  _throw_arraybounds();
	  goto _TL103;
	  _TL102: _TL103: _T44 = _T47.curr;
	  _T45 = (char *)_T44;
	  *_T45 = _T49;
	}
      }
    }_TLF3: _T46 = p;
    return _T46;
  }
}
static struct _fat_ptr Cyc_sround(double fract,int * exp,struct _fat_ptr start,
				  struct _fat_ptr end,char ch,int * signp) {
  double _T0;
  double _T1;
  double _T2;
  double * _T3;
  char _T4;
  int _T5;
  int _T6;
  double _T7;
  double _T8;
  struct _fat_ptr _T9;
  unsigned char * _TA;
  char * _TB;
  char _TC;
  int _TD;
  struct _fat_ptr * _TE;
  char _TF;
  unsigned char * _T10;
  char * _T11;
  unsigned int _T12;
  unsigned char * _T13;
  char * _T14;
  int _T15;
  unsigned char * _T16;
  char * _T17;
  unsigned int _T18;
  unsigned char * _T19;
  char * _T1A;
  struct _fat_ptr _T1B;
  unsigned char * _T1C;
  char * _T1D;
  struct _fat_ptr _T1E;
  unsigned char * _T1F;
  char * _T20;
  int * _T21;
  unsigned int _T22;
  unsigned char * _T23;
  char * _T24;
  unsigned int _T25;
  unsigned char * _T26;
  char * _T27;
  int * _T28;
  struct _fat_ptr * _T29;
  unsigned char * _T2A;
  char * _T2B;
  unsigned int _T2C;
  unsigned char * _T2D;
  char * _T2E;
  struct _fat_ptr * _T2F;
  struct _fat_ptr * _T30;
  int * _T31;
  int _T32;
  struct _fat_ptr _T33;
  unsigned char * _T34;
  char * _T35;
  char _T36;
  int _T37;
  struct _fat_ptr * _T38;
  struct _fat_ptr _T39;
  unsigned char * _T3A;
  char * _T3B;
  char _T3C;
  int _T3D;
  struct _fat_ptr _T3E;
  unsigned char * _T3F;
  char * _T40;
  struct _fat_ptr _T41;
  unsigned char * _T42;
  char * _T43;
  int * _T44;
  struct _fat_ptr * _T45;
  struct _fat_ptr _T46;
  double tmp = 0.0;
  if (fract == 0.0) { goto _TL104;
  }
  _T0 = fract;
  _T1 = (double)10;
  _T2 = _T0 * _T1;
  _T3 = &tmp;
  modf(_T2,_T3);
  goto _TL105;
  _TL104: _T4 = ch;
  _T5 = (int)_T4;
  _T6 = _T5 - 48;
  tmp = (double)_T6;
  _TL105: _T7 = tmp;
  _T8 = (double)4;
  if (_T7 <= _T8) { goto _TL106;
  }
  _TL10B: if (1) { goto _TL109;
  }else { goto _TL10A;
  }
  _TL109: _T9 = end;
  _TA = _check_fat_subscript(_T9,sizeof(char),0U);
  _TB = (char *)_TA;
  _TC = *_TB;
  _TD = (int)_TC;
  if (_TD != 46) { goto _TL10C;
  }
  _TE = &end;
  _fat_ptr_inplace_plus(_TE,sizeof(char),-1);
  goto _TL10D;
  _TL10C: _TL10D: { struct _fat_ptr _T47 = end;
    _T10 = _check_fat_subscript(_T47,sizeof(char),0U);
    _T11 = (char *)_T10;
    { char _T48 = *_T11;
      char _T49 = _T48 + 1;
      _T12 = _get_fat_size(_T47,sizeof(char));
      if (_T12 != 1U) { goto _TL110;
      }
      if (_T48 != 0) { goto _TL110;
      }
      if (_T49 == 0) { goto _TL110;
      }
      _throw_arraybounds();
      goto _TL111;
      _TL110: _TL111: _T13 = _T47.curr;
      _T14 = (char *)_T13;
      *_T14 = _T49;
      _TF = *_T14;
    }
  }_T15 = (int)_TF;
  if (_T15 > 57) { goto _TL10E;
  }
  goto _TL10A;
  _TL10E: { struct _fat_ptr _T47 = end;
    _T16 = _T47.curr;
    _T17 = (char *)_T16;
    { char _T48 = *_T17;
      char _T49 = '0';
      _T18 = _get_fat_size(_T47,sizeof(char));
      if (_T18 != 1U) { goto _TL112;
      }
      if (_T48 != 0) { goto _TL112;
      }
      if (_T49 == 0) { goto _TL112;
      }
      _throw_arraybounds();
      goto _TL113;
      _TL112: _TL113: _T19 = _T47.curr;
      _T1A = (char *)_T19;
      *_T1A = _T49;
    }
  }_T1B = end;
  _T1C = _T1B.curr;
  _T1D = (char *)_T1C;
  _T1E = start;
  _T1F = _T1E.curr;
  _T20 = (char *)_T1F;
  if (_T1D != _T20) { goto _TL114;
  }
  _T21 = exp;
  _T22 = (unsigned int)_T21;
  if (! _T22) { goto _TL116;
  }
  { struct _fat_ptr _T47 = end;
    _T23 = _T47.curr;
    _T24 = (char *)_T23;
    { char _T48 = *_T24;
      char _T49 = '1';
      _T25 = _get_fat_size(_T47,sizeof(char));
      if (_T25 != 1U) { goto _TL118;
      }
      if (_T48 != 0) { goto _TL118;
      }
      if (_T49 == 0) { goto _TL118;
      }
      _throw_arraybounds();
      goto _TL119;
      _TL118: _TL119: _T26 = _T47.curr;
      _T27 = (char *)_T26;
      *_T27 = _T49;
    }
  }_T28 = exp;
  *_T28 = *_T28 + 1;
  goto _TL117;
  _TL116: _T29 = &end;
  { struct _fat_ptr _T47 = _fat_ptr_inplace_plus(_T29,sizeof(char),-1);
    _T2A = _check_fat_subscript(_T47,sizeof(char),0U);
    _T2B = (char *)_T2A;
    { char _T48 = *_T2B;
      char _T49 = '1';
      _T2C = _get_fat_size(_T47,sizeof(char));
      if (_T2C != 1U) { goto _TL11A;
      }
      if (_T48 != 0) { goto _TL11A;
      }
      if (_T49 == 0) { goto _TL11A;
      }
      _throw_arraybounds();
      goto _TL11B;
      _TL11A: _TL11B: _T2D = _T47.curr;
      _T2E = (char *)_T2D;
      *_T2E = _T49;
    }
  }_T2F = &start;
  _fat_ptr_inplace_plus(_T2F,sizeof(char),-1);
  _TL117: goto _TL10A;
  _TL114: _T30 = &end;
  _fat_ptr_inplace_plus(_T30,sizeof(char),-1);
  goto _TL10B;
  _TL10A: goto _TL107;
  _TL106: _T31 = signp;
  _T32 = *_T31;
  if (_T32 != 45) { goto _TL11C;
  }
  _TL121: if (1) { goto _TL11F;
  }else { goto _TL120;
  }
  _TL11F: _T33 = end;
  _T34 = _check_fat_subscript(_T33,sizeof(char),0U);
  _T35 = (char *)_T34;
  _T36 = *_T35;
  _T37 = (int)_T36;
  if (_T37 != 46) { goto _TL122;
  }
  _T38 = &end;
  _fat_ptr_inplace_plus(_T38,sizeof(char),-1);
  goto _TL123;
  _TL122: _TL123: _T39 = end;
  _T3A = _check_fat_subscript(_T39,sizeof(char),0U);
  _T3B = (char *)_T3A;
  _T3C = *_T3B;
  _T3D = (int)_T3C;
  if (_T3D == 48) { goto _TL124;
  }
  goto _TL120;
  _TL124: _T3E = end;
  _T3F = _T3E.curr;
  _T40 = (char *)_T3F;
  _T41 = start;
  _T42 = _T41.curr;
  _T43 = (char *)_T42;
  if (_T40 != _T43) { goto _TL126;
  }
  _T44 = signp;
  *_T44 = 0;
  goto _TL127;
  _TL126: _TL127: _T45 = &end;
  _fat_ptr_inplace_plus(_T45,sizeof(char),-1);
  goto _TL121;
  _TL120: goto _TL11D;
  _TL11C: _TL11D: _TL107: _T46 = start;
  return _T46;
}
int Cyc___cvt_double(double number,int prec,int flags,int * signp,int fmtch,
		     struct _fat_ptr startp,struct _fat_ptr endp) {
  double _T0;
  double _T1;
  int * _T2;
  int * _T3;
  double _T4;
  double * _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  int _T8;
  struct _fat_ptr _T9;
  unsigned char * _TA;
  char * _TB;
  struct _fat_ptr _TC;
  unsigned char * _TD;
  char * _TE;
  double _TF;
  double _T10;
  double _T11;
  double * _T12;
  struct _fat_ptr * _T13;
  unsigned char * _T14;
  char * _T15;
  double _T16;
  double _T17;
  double _T18;
  int _T19;
  int _T1A;
  unsigned int _T1B;
  unsigned char * _T1C;
  char * _T1D;
  int _T1E;
  int _T1F;
  int _T20;
  struct _fat_ptr * _T21;
  struct _fat_ptr _T22;
  unsigned char * _T23;
  char * _T24;
  struct _fat_ptr _T25;
  unsigned char * _T26;
  char * _T27;
  struct _fat_ptr * _T28;
  unsigned char * _T29;
  char * _T2A;
  struct _fat_ptr _T2B;
  unsigned char * _T2C;
  char * _T2D;
  unsigned int _T2E;
  unsigned char * _T2F;
  char * _T30;
  struct _fat_ptr * _T31;
  unsigned char * _T32;
  char * _T33;
  unsigned int _T34;
  unsigned char * _T35;
  char * _T36;
  int _T37;
  struct _fat_ptr * _T38;
  unsigned char * _T39;
  char * _T3A;
  unsigned int _T3B;
  unsigned char * _T3C;
  char * _T3D;
  int _T3E;
  double _T3F;
  double _T40;
  double _T41;
  double * _T42;
  struct _fat_ptr * _T43;
  unsigned char * _T44;
  char * _T45;
  double _T46;
  int _T47;
  int _T48;
  unsigned int _T49;
  unsigned char * _T4A;
  char * _T4B;
  int _T4C;
  double _T4D;
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  int _T50;
  struct _fat_ptr _T51;
  int * _T52;
  int _T53;
  int _T54;
  struct _fat_ptr * _T55;
  unsigned char * _T56;
  char * _T57;
  unsigned int _T58;
  unsigned char * _T59;
  char * _T5A;
  int _T5B;
  struct _fat_ptr * _T5C;
  unsigned char * _T5D;
  char * _T5E;
  struct _fat_ptr * _T5F;
  struct _fat_ptr _T60;
  unsigned char * _T61;
  char * _T62;
  unsigned int _T63;
  unsigned char * _T64;
  char * _T65;
  int _T66;
  struct _fat_ptr * _T67;
  unsigned char * _T68;
  char * _T69;
  unsigned int _T6A;
  unsigned char * _T6B;
  char * _T6C;
  int _T6D;
  struct _fat_ptr * _T6E;
  struct _fat_ptr _T6F;
  unsigned char * _T70;
  char * _T71;
  struct _fat_ptr _T72;
  unsigned char * _T73;
  char * _T74;
  struct _fat_ptr * _T75;
  unsigned char * _T76;
  char * _T77;
  struct _fat_ptr _T78;
  unsigned char * _T79;
  char * _T7A;
  unsigned int _T7B;
  unsigned char * _T7C;
  char * _T7D;
  int _T7E;
  struct _fat_ptr * _T7F;
  struct _fat_ptr _T80;
  unsigned char * _T81;
  char * _T82;
  struct _fat_ptr _T83;
  unsigned char * _T84;
  char * _T85;
  double _T86;
  int * _T87;
  struct _fat_ptr _T88;
  struct _fat_ptr _T89;
  int _T8A;
  struct _fat_ptr _T8B;
  struct _fat_ptr _T8C;
  unsigned char * _T8D;
  char * _T8E;
  char _T8F;
  int * _T90;
  double _T91;
  double _T92;
  double _T93;
  double * _T94;
  struct _fat_ptr * _T95;
  unsigned char * _T96;
  char * _T97;
  double _T98;
  int _T99;
  int _T9A;
  unsigned int _T9B;
  unsigned char * _T9C;
  char * _T9D;
  int _T9E;
  struct _fat_ptr * _T9F;
  unsigned char * _TA0;
  char * _TA1;
  unsigned int _TA2;
  unsigned char * _TA3;
  char * _TA4;
  struct _fat_ptr * _TA5;
  unsigned char * _TA6;
  char * _TA7;
  unsigned int _TA8;
  unsigned char * _TA9;
  char * _TAA;
  int _TAB;
  struct _fat_ptr * _TAC;
  unsigned char * _TAD;
  char * _TAE;
  unsigned int _TAF;
  unsigned char * _TB0;
  char * _TB1;
  int _TB2;
  double _TB3;
  double _TB4;
  double _TB5;
  double * _TB6;
  struct _fat_ptr * _TB7;
  unsigned char * _TB8;
  char * _TB9;
  double _TBA;
  int _TBB;
  int _TBC;
  unsigned int _TBD;
  unsigned char * _TBE;
  char * _TBF;
  int _TC0;
  double _TC1;
  int * _TC2;
  struct _fat_ptr _TC3;
  struct _fat_ptr _TC4;
  int _TC5;
  struct _fat_ptr _TC6;
  int * _TC7;
  int _TC8;
  int _TC9;
  struct _fat_ptr * _TCA;
  unsigned char * _TCB;
  char * _TCC;
  unsigned int _TCD;
  unsigned char * _TCE;
  char * _TCF;
  int _TD0;
  struct _fat_ptr _TD1;
  unsigned char * _TD2;
  char * _TD3;
  struct _fat_ptr _TD4;
  unsigned char * _TD5;
  char * _TD6;
  struct _fat_ptr * _TD7;
  struct _fat_ptr _TD8;
  unsigned char * _TD9;
  char * _TDA;
  char _TDB;
  int _TDC;
  struct _fat_ptr _TDD;
  unsigned char * _TDE;
  char * _TDF;
  char _TE0;
  int _TE1;
  struct _fat_ptr * _TE2;
  struct _fat_ptr * _TE3;
  int _TE4;
  int _TE5;
  int _TE6;
  struct _fat_ptr * _TE7;
  struct _fat_ptr _TE8;
  unsigned char * _TE9;
  char * _TEA;
  struct _fat_ptr _TEB;
  unsigned char * _TEC;
  char * _TED;
  struct _fat_ptr * _TEE;
  unsigned char * _TEF;
  char * _TF0;
  struct _fat_ptr _TF1;
  unsigned char * _TF2;
  char * _TF3;
  unsigned int _TF4;
  unsigned char * _TF5;
  char * _TF6;
  struct _fat_ptr * _TF7;
  unsigned char * _TF8;
  char * _TF9;
  unsigned int _TFA;
  unsigned char * _TFB;
  char * _TFC;
  int _TFD;
  struct _fat_ptr * _TFE;
  unsigned char * _TFF;
  char * _T100;
  unsigned int _T101;
  unsigned char * _T102;
  char * _T103;
  int _T104;
  double _T105;
  double _T106;
  double _T107;
  double * _T108;
  struct _fat_ptr * _T109;
  unsigned char * _T10A;
  char * _T10B;
  double _T10C;
  int _T10D;
  int _T10E;
  unsigned int _T10F;
  unsigned char * _T110;
  char * _T111;
  int _T112;
  int _T113;
  double _T114;
  double _T115;
  double _T116;
  double * _T117;
  struct _fat_ptr * _T118;
  unsigned char * _T119;
  char * _T11A;
  double _T11B;
  int _T11C;
  int _T11D;
  unsigned int _T11E;
  unsigned char * _T11F;
  char * _T120;
  double _T121;
  struct _fat_ptr _T122;
  struct _fat_ptr _T123;
  int _T124;
  struct _fat_ptr _T125;
  int * _T126;
  int _T127;
  int _T128;
  struct _fat_ptr * _T129;
  unsigned char * _T12A;
  char * _T12B;
  unsigned int _T12C;
  unsigned char * _T12D;
  char * _T12E;
  int _T12F;
  struct _fat_ptr _T130;
  unsigned char * _T131;
  char * _T132;
  struct _fat_ptr _T133;
  unsigned char * _T134;
  char * _T135;
  struct _fat_ptr * _T136;
  struct _fat_ptr _T137;
  unsigned char * _T138;
  char * _T139;
  char _T13A;
  int _T13B;
  struct _fat_ptr _T13C;
  unsigned char * _T13D;
  char * _T13E;
  char _T13F;
  int _T140;
  struct _fat_ptr * _T141;
  struct Cyc_Core_Impossible_exn_struct * _T142;
  void * _T143;
  struct _fat_ptr _T144;
  unsigned char * _T145;
  struct _fat_ptr _T146;
  unsigned char * _T147;
  int _T148;
  int _T149;
  struct _fat_ptr p;
  struct _fat_ptr t;
  register double fract;
  int dotrim = 0;
  int expcnt;
  int gformat = 0;
  double integer = 0.0;
  double tmp = 0.0;
  expcnt = 0;
  _T0 = number;
  _T1 = (double)0;
  if (_T0 >= _T1) { goto _TL128;
  }
  number = - number;
  _T2 = signp;
  *_T2 = 45;
  goto _TL129;
  _TL128: _T3 = signp;
  *_T3 = 0;
  _TL129: _T4 = number;
  _T5 = &integer;
  fract = modf(_T4,_T5);
  _T6 = &startp;
  t = _fat_ptr_inplace_plus(_T6,sizeof(char),1);
  _T7 = endp;
  _T8 = - 1;
  p = _fat_ptr_plus(_T7,sizeof(char),_T8);
  _TL12D: _T9 = p;
  _TA = _T9.curr;
  _TB = (char *)_TA;
  _TC = startp;
  _TD = _TC.curr;
  _TE = (char *)_TD;
  if (_TB >= _TE) { goto _TL12E;
  }else { goto _TL12C;
  }
  _TL12E: if (integer != 0.0) { goto _TL12B;
  }else { goto _TL12C;
  }
  _TL12B: _TF = integer;
  _T10 = (double)10;
  _T11 = _TF / _T10;
  _T12 = &integer;
  tmp = modf(_T11,_T12);
  _T13 = &p;
  { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T13,sizeof(char),
						       -1);
    _T14 = _check_fat_subscript(_T14A,sizeof(char),0U);
    _T15 = (char *)_T14;
    { char _T14B = *_T15;
      _T16 = tmp + .01;
      _T17 = (double)10;
      _T18 = _T16 * _T17;
      _T19 = (int)_T18;
      _T1A = _T19 + 48;
      { char _T14C = (char)_T1A;
	_T1B = _get_fat_size(_T14A,sizeof(char));
	if (_T1B != 1U) { goto _TL12F;
	}
	if (_T14B != 0) { goto _TL12F;
	}
	if (_T14C == 0) { goto _TL12F;
	}
	_throw_arraybounds();
	goto _TL130;
	_TL12F: _TL130: _T1C = _T14A.curr;
	_T1D = (char *)_T1C;
	*_T1D = _T14C;
      }
    }
  }expcnt = expcnt + 1;
  goto _TL12D;
  _TL12C: _T1E = fmtch;
  _T1F = (int)_T1E;
  switch (_T1F) {
  case 102: 
    goto _LL4;
  case 70: 
    _LL4: _T20 = expcnt;
    if (! _T20) { goto _TL132;
    }
    _TL137: _T21 = &p;
    _T22 = _fat_ptr_inplace_plus(_T21,sizeof(char),1);
    _T23 = _T22.curr;
    _T24 = (char *)_T23;
    _T25 = endp;
    _T26 = _T25.curr;
    _T27 = (char *)_T26;
    if (_T24 < _T27) { goto _TL135;
    }else { goto _TL136;
    }
    _TL135: _T28 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T28,sizeof(char),
							 1);
      _T29 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T2A = (char *)_T29;
      { char _T14B = *_T2A;
	_T2B = p;
	_T2C = _check_fat_subscript(_T2B,sizeof(char),0U);
	_T2D = (char *)_T2C;
	{ char _T14C = *_T2D;
	  _T2E = _get_fat_size(_T14A,sizeof(char));
	  if (_T2E != 1U) { goto _TL138;
	  }
	  if (_T14B != 0) { goto _TL138;
	  }
	  if (_T14C == 0) { goto _TL138;
	  }
	  _throw_arraybounds();
	  goto _TL139;
	  _TL138: _TL139: _T2F = _T14A.curr;
	  _T30 = (char *)_T2F;
	  *_T30 = _T14C;
	}
      }
    }goto _TL137;
    _TL136: goto _TL133;
    _TL132: _T31 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T31,sizeof(char),
							 1);
      _T32 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T33 = (char *)_T32;
      { char _T14B = *_T33;
	char _T14C = '0';
	_T34 = _get_fat_size(_T14A,sizeof(char));
	if (_T34 != 1U) { goto _TL13A;
	}
	if (_T14B != 0) { goto _TL13A;
	}
	if (_T14C == 0) { goto _TL13A;
	}
	_throw_arraybounds();
	goto _TL13B;
	_TL13A: _TL13B: _T35 = _T14A.curr;
	_T36 = (char *)_T35;
	*_T36 = _T14C;
      }
    }_TL133: _T37 = prec;
    if (_T37) { goto _TL13E;
    }else { goto _TL13F;
    }
    _TL13F: if (flags & 8) { goto _TL13E;
    }else { goto _TL13C;
    }
    _TL13E: _T38 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T38,sizeof(char),
							 1);
      _T39 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T3A = (char *)_T39;
      { char _T14B = *_T3A;
	char _T14C = '.';
	_T3B = _get_fat_size(_T14A,sizeof(char));
	if (_T3B != 1U) { goto _TL140;
	}
	if (_T14B != 0) { goto _TL140;
	}
	if (_T14C == 0) { goto _TL140;
	}
	_throw_arraybounds();
	goto _TL141;
	_TL140: _TL141: _T3C = _T14A.curr;
	_T3D = (char *)_T3C;
	*_T3D = _T14C;
      }
    }goto _TL13D;
    _TL13C: _TL13D: if (fract == 0.0) { goto _TL142;
    }
    _T3E = prec;
    if (! _T3E) { goto _TL144;
    }
    _TL146: _T3F = fract;
    _T40 = (double)10;
    _T41 = _T3F * _T40;
    _T42 = &tmp;
    fract = modf(_T41,_T42);
    _T43 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T43,sizeof(char),
							 1);
      _T44 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T45 = (char *)_T44;
      { char _T14B = *_T45;
	_T46 = tmp;
	_T47 = (int)_T46;
	_T48 = _T47 + 48;
	{ char _T14C = (char)_T48;
	  _T49 = _get_fat_size(_T14A,sizeof(char));
	  if (_T49 != 1U) { goto _TL148;
	  }
	  if (_T14B != 0) { goto _TL148;
	  }
	  if (_T14C == 0) { goto _TL148;
	  }
	  _throw_arraybounds();
	  goto _TL149;
	  _TL148: _TL149: _T4A = _T14A.curr;
	  _T4B = (char *)_T4A;
	  *_T4B = _T14C;
	}
      }
    }prec = prec + -1;
    _T4C = prec;
    if (_T4C) { goto _TL14A;
    }else { goto _TL147;
    }
    _TL14A: if (fract != 0.0) { goto _TL146;
    }else { goto _TL147;
    }
    _TL147: goto _TL145;
    _TL144: _TL145: if (fract == 0.0) { goto _TL14B;
    }
    _T4D = fract;
    _T4E = startp;
    _T4F = t;
    _T50 = - 1;
    _T51 = _fat_ptr_plus(_T4F,sizeof(char),_T50);
    _T52 = signp;
    startp = Cyc_sround(_T4D,0,_T4E,_T51,'\000',_T52);
    goto _TL14C;
    _TL14B: _TL14C: goto _TL143;
    _TL142: _TL143: _TL150: _T53 = prec;
    prec = _T53 + -1;
    _T54 = _T53;
    if (_T54) { goto _TL14E;
    }else { goto _TL14F;
    }
    _TL14E: _T55 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T55,sizeof(char),
							 1);
      _T56 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T57 = (char *)_T56;
      { char _T14B = *_T57;
	char _T14C = '0';
	_T58 = _get_fat_size(_T14A,sizeof(char));
	if (_T58 != 1U) { goto _TL151;
	}
	if (_T14B != 0) { goto _TL151;
	}
	if (_T14C == 0) { goto _TL151;
	}
	_throw_arraybounds();
	goto _TL152;
	_TL151: _TL152: _T59 = _T14A.curr;
	_T5A = (char *)_T59;
	*_T5A = _T14C;
      }
    }goto _TL150;
    _TL14F: goto _LL0;
  case 101: 
    goto _LL8;
  case 69: 
    _LL8: eformat: _T5B = expcnt;
    if (! _T5B) { goto _TL153;
    }
    _T5C = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T5C,sizeof(char),
							 1);
      _T5D = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T5E = (char *)_T5D;
      { char _T14B = *_T5E;
	_T5F = &p;
	_T60 = _fat_ptr_inplace_plus(_T5F,sizeof(char),1);
	_T61 = _check_fat_subscript(_T60,sizeof(char),0U);
	_T62 = (char *)_T61;
	{ char _T14C = *_T62;
	  _T63 = _get_fat_size(_T14A,sizeof(char));
	  if (_T63 != 1U) { goto _TL155;
	  }
	  if (_T14B != 0) { goto _TL155;
	  }
	  if (_T14C == 0) { goto _TL155;
	  }
	  _throw_arraybounds();
	  goto _TL156;
	  _TL155: _TL156: _T64 = _T14A.curr;
	  _T65 = (char *)_T64;
	  *_T65 = _T14C;
	}
      }
    }_T66 = prec;
    if (_T66) { goto _TL159;
    }else { goto _TL15A;
    }
    _TL15A: if (flags & 8) { goto _TL159;
    }else { goto _TL157;
    }
    _TL159: _T67 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T67,sizeof(char),
							 1);
      _T68 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T69 = (char *)_T68;
      { char _T14B = *_T69;
	char _T14C = '.';
	_T6A = _get_fat_size(_T14A,sizeof(char));
	if (_T6A != 1U) { goto _TL15B;
	}
	if (_T14B != 0) { goto _TL15B;
	}
	if (_T14C == 0) { goto _TL15B;
	}
	_throw_arraybounds();
	goto _TL15C;
	_TL15B: _TL15C: _T6B = _T14A.curr;
	_T6C = (char *)_T6B;
	*_T6C = _T14C;
      }
    }goto _TL158;
    _TL157: _TL158: _TL160: _T6D = prec;
    if (_T6D) { goto _TL161;
    }else { goto _TL15F;
    }
    _TL161: _T6E = &p;
    _T6F = _fat_ptr_inplace_plus(_T6E,sizeof(char),1);
    _T70 = _T6F.curr;
    _T71 = (char *)_T70;
    _T72 = endp;
    _T73 = _T72.curr;
    _T74 = (char *)_T73;
    if (_T71 < _T74) { goto _TL15E;
    }else { goto _TL15F;
    }
    _TL15E: _T75 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T75,sizeof(char),
							 1);
      _T76 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T77 = (char *)_T76;
      { char _T14B = *_T77;
	_T78 = p;
	_T79 = _check_fat_subscript(_T78,sizeof(char),0U);
	_T7A = (char *)_T79;
	{ char _T14C = *_T7A;
	  _T7B = _get_fat_size(_T14A,sizeof(char));
	  if (_T7B != 1U) { goto _TL162;
	  }
	  if (_T14B != 0) { goto _TL162;
	  }
	  if (_T14C == 0) { goto _TL162;
	  }
	  _throw_arraybounds();
	  goto _TL163;
	  _TL162: _TL163: _T7C = _T14A.curr;
	  _T7D = (char *)_T7C;
	  *_T7D = _T14C;
	}
      }
    }prec = prec + -1;
    goto _TL160;
    _TL15F: _T7E = prec;
    if (_T7E) { goto _TL164;
    }else { goto _TL166;
    }
    _TL166: _T7F = &p;
    _T80 = _fat_ptr_inplace_plus(_T7F,sizeof(char),1);
    _T81 = _T80.curr;
    _T82 = (char *)_T81;
    _T83 = endp;
    _T84 = _T83.curr;
    _T85 = (char *)_T84;
    if (_T82 >= _T85) { goto _TL164;
    }
    fract = (double)0;
    _T86 = (double)0;
    _T87 = &expcnt;
    _T88 = startp;
    _T89 = t;
    _T8A = - 1;
    _T8B = _fat_ptr_plus(_T89,sizeof(char),_T8A);
    _T8C = p;
    _T8D = _check_fat_subscript(_T8C,sizeof(char),0U);
    _T8E = (char *)_T8D;
    _T8F = *_T8E;
    _T90 = signp;
    startp = Cyc_sround(_T86,_T87,_T88,_T8B,_T8F,_T90);
    goto _TL165;
    _TL164: _TL165: expcnt = expcnt + -1;
    goto _TL154;
    _TL153: if (fract == 0.0) { goto _TL167;
    }
    expcnt = - 1;
    _TL16C: if (1) { goto _TL16A;
    }else { goto _TL16B;
    }
    _TL16A: _T91 = fract;
    _T92 = (double)10;
    _T93 = _T91 * _T92;
    _T94 = &tmp;
    fract = modf(_T93,_T94);
    if (tmp == 0.0) { goto _TL16D;
    }
    goto _TL16B;
    _TL16D: expcnt = expcnt + -1;
    goto _TL16C;
    _TL16B: _T95 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T95,sizeof(char),
							 1);
      _T96 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T97 = (char *)_T96;
      { char _T14B = *_T97;
	_T98 = tmp;
	_T99 = (int)_T98;
	_T9A = _T99 + 48;
	{ char _T14C = (char)_T9A;
	  _T9B = _get_fat_size(_T14A,sizeof(char));
	  if (_T9B != 1U) { goto _TL16F;
	  }
	  if (_T14B != 0) { goto _TL16F;
	  }
	  if (_T14C == 0) { goto _TL16F;
	  }
	  _throw_arraybounds();
	  goto _TL170;
	  _TL16F: _TL170: _T9C = _T14A.curr;
	  _T9D = (char *)_T9C;
	  *_T9D = _T14C;
	}
      }
    }_T9E = prec;
    if (_T9E) { goto _TL173;
    }else { goto _TL174;
    }
    _TL174: if (flags & 8) { goto _TL173;
    }else { goto _TL171;
    }
    _TL173: _T9F = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T9F,sizeof(char),
							 1);
      _TA0 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TA1 = (char *)_TA0;
      { char _T14B = *_TA1;
	char _T14C = '.';
	_TA2 = _get_fat_size(_T14A,sizeof(char));
	if (_TA2 != 1U) { goto _TL175;
	}
	if (_T14B != 0) { goto _TL175;
	}
	if (_T14C == 0) { goto _TL175;
	}
	_throw_arraybounds();
	goto _TL176;
	_TL175: _TL176: _TA3 = _T14A.curr;
	_TA4 = (char *)_TA3;
	*_TA4 = _T14C;
      }
    }goto _TL172;
    _TL171: _TL172: goto _TL168;
    _TL167: _TA5 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TA5,sizeof(char),
							 1);
      _TA6 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TA7 = (char *)_TA6;
      { char _T14B = *_TA7;
	char _T14C = '0';
	_TA8 = _get_fat_size(_T14A,sizeof(char));
	if (_TA8 != 1U) { goto _TL177;
	}
	if (_T14B != 0) { goto _TL177;
	}
	if (_T14C == 0) { goto _TL177;
	}
	_throw_arraybounds();
	goto _TL178;
	_TL177: _TL178: _TA9 = _T14A.curr;
	_TAA = (char *)_TA9;
	*_TAA = _T14C;
      }
    }_TAB = prec;
    if (_TAB) { goto _TL17B;
    }else { goto _TL17C;
    }
    _TL17C: if (flags & 8) { goto _TL17B;
    }else { goto _TL179;
    }
    _TL17B: _TAC = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TAC,sizeof(char),
							 1);
      _TAD = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TAE = (char *)_TAD;
      { char _T14B = *_TAE;
	char _T14C = '.';
	_TAF = _get_fat_size(_T14A,sizeof(char));
	if (_TAF != 1U) { goto _TL17D;
	}
	if (_T14B != 0) { goto _TL17D;
	}
	if (_T14C == 0) { goto _TL17D;
	}
	_throw_arraybounds();
	goto _TL17E;
	_TL17D: _TL17E: _TB0 = _T14A.curr;
	_TB1 = (char *)_TB0;
	*_TB1 = _T14C;
      }
    }goto _TL17A;
    _TL179: _TL17A: _TL168: _TL154: if (fract == 0.0) { goto _TL17F;
    }
    _TB2 = prec;
    if (! _TB2) { goto _TL181;
    }
    _TL183: _TB3 = fract;
    _TB4 = (double)10;
    _TB5 = _TB3 * _TB4;
    _TB6 = &tmp;
    fract = modf(_TB5,_TB6);
    _TB7 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TB7,sizeof(char),
							 1);
      _TB8 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TB9 = (char *)_TB8;
      { char _T14B = *_TB9;
	_TBA = tmp;
	_TBB = (int)_TBA;
	_TBC = _TBB + 48;
	{ char _T14C = (char)_TBC;
	  _TBD = _get_fat_size(_T14A,sizeof(char));
	  if (_TBD != 1U) { goto _TL185;
	  }
	  if (_T14B != 0) { goto _TL185;
	  }
	  if (_T14C == 0) { goto _TL185;
	  }
	  _throw_arraybounds();
	  goto _TL186;
	  _TL185: _TL186: _TBE = _T14A.curr;
	  _TBF = (char *)_TBE;
	  *_TBF = _T14C;
	}
      }
    }prec = prec + -1;
    _TC0 = prec;
    if (_TC0) { goto _TL187;
    }else { goto _TL184;
    }
    _TL187: if (fract != 0.0) { goto _TL183;
    }else { goto _TL184;
    }
    _TL184: goto _TL182;
    _TL181: _TL182: if (fract == 0.0) { goto _TL188;
    }
    _TC1 = fract;
    _TC2 = &expcnt;
    _TC3 = startp;
    _TC4 = t;
    _TC5 = - 1;
    _TC6 = _fat_ptr_plus(_TC4,sizeof(char),_TC5);
    _TC7 = signp;
    startp = Cyc_sround(_TC1,_TC2,_TC3,_TC6,'\000',_TC7);
    goto _TL189;
    _TL188: _TL189: goto _TL180;
    _TL17F: _TL180: _TL18D: _TC8 = prec;
    prec = _TC8 + -1;
    _TC9 = _TC8;
    if (_TC9) { goto _TL18B;
    }else { goto _TL18C;
    }
    _TL18B: _TCA = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TCA,sizeof(char),
							 1);
      _TCB = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TCC = (char *)_TCB;
      { char _T14B = *_TCC;
	char _T14C = '0';
	_TCD = _get_fat_size(_T14A,sizeof(char));
	if (_TCD != 1U) { goto _TL18E;
	}
	if (_T14B != 0) { goto _TL18E;
	}
	if (_T14C == 0) { goto _TL18E;
	}
	_throw_arraybounds();
	goto _TL18F;
	_TL18E: _TL18F: _TCE = _T14A.curr;
	_TCF = (char *)_TCE;
	*_TCF = _T14C;
      }
    }goto _TL18D;
    _TL18C: _TD0 = gformat;
    if (! _TD0) { goto _TL190;
    }
    if (flags & 8) { goto _TL190;
    }else { goto _TL192;
    }
    _TL192: _TL193: _TD1 = t;
    _TD2 = _TD1.curr;
    _TD3 = (char *)_TD2;
    _TD4 = startp;
    _TD5 = _TD4.curr;
    _TD6 = (char *)_TD5;
    if (_TD3 > _TD6) { goto _TL196;
    }else { goto _TL195;
    }
    _TL196: _TD7 = &t;
    _TD8 = _fat_ptr_inplace_plus(_TD7,sizeof(char),-1);
    _TD9 = _check_fat_subscript(_TD8,sizeof(char),0U);
    _TDA = (char *)_TD9;
    _TDB = *_TDA;
    _TDC = (int)_TDB;
    if (_TDC == 48) { goto _TL194;
    }else { goto _TL195;
    }
    _TL194: goto _TL193;
    _TL195: _TDD = t;
    _TDE = _check_fat_subscript(_TDD,sizeof(char),0U);
    _TDF = (char *)_TDE;
    _TE0 = *_TDF;
    _TE1 = (int)_TE0;
    if (_TE1 != 46) { goto _TL197;
    }
    _TE2 = &t;
    _fat_ptr_inplace_plus(_TE2,sizeof(char),-1);
    goto _TL198;
    _TL197: _TL198: _TE3 = &t;
    _fat_ptr_inplace_plus(_TE3,sizeof(char),1);
    goto _TL191;
    _TL190: _TL191: t = Cyc_exponent(t,expcnt,fmtch);
    goto _LL0;
  case 103: 
    goto _LLC;
  case 71: 
    _LLC: _TE4 = prec;
    if (_TE4) { goto _TL199;
    }else { goto _TL19B;
    }
    _TL19B: prec = prec + 1;
    goto _TL19A;
    _TL199: _TL19A: if (expcnt > prec) { goto _TL19E;
    }else { goto _TL19F;
    }
    _TL19F: _TE5 = expcnt;
    if (_TE5) { goto _TL19C;
    }else { goto _TL1A1;
    }
    _TL1A1: if (fract != 0.0) { goto _TL1A0;
    }else { goto _TL19C;
    }
    _TL1A0: if (fract < .0001) { goto _TL19E;
    }else { goto _TL19C;
    }
    _TL19E: prec = prec + -1;
    fmtch = fmtch - 2;
    gformat = 1;
    goto eformat;
    _TL19C: _TE6 = expcnt;
    if (! _TE6) { goto _TL1A2;
    }
    _TL1A7: _TE7 = &p;
    _TE8 = _fat_ptr_inplace_plus(_TE7,sizeof(char),1);
    _TE9 = _TE8.curr;
    _TEA = (char *)_TE9;
    _TEB = endp;
    _TEC = _TEB.curr;
    _TED = (char *)_TEC;
    if (_TEA < _TED) { goto _TL1A5;
    }else { goto _TL1A6;
    }
    _TL1A5: _TEE = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TEE,sizeof(char),
							 1);
      _TEF = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TF0 = (char *)_TEF;
      { char _T14B = *_TF0;
	_TF1 = p;
	_TF2 = _check_fat_subscript(_TF1,sizeof(char),0U);
	_TF3 = (char *)_TF2;
	{ char _T14C = *_TF3;
	  _TF4 = _get_fat_size(_T14A,sizeof(char));
	  if (_TF4 != 1U) { goto _TL1A8;
	  }
	  if (_T14B != 0) { goto _TL1A8;
	  }
	  if (_T14C == 0) { goto _TL1A8;
	  }
	  _throw_arraybounds();
	  goto _TL1A9;
	  _TL1A8: _TL1A9: _TF5 = _T14A.curr;
	  _TF6 = (char *)_TF5;
	  *_TF6 = _T14C;
	}
      }
    }prec = prec + -1;
    goto _TL1A7;
    _TL1A6: goto _TL1A3;
    _TL1A2: _TF7 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TF7,sizeof(char),
							 1);
      _TF8 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TF9 = (char *)_TF8;
      { char _T14B = *_TF9;
	char _T14C = '0';
	_TFA = _get_fat_size(_T14A,sizeof(char));
	if (_TFA != 1U) { goto _TL1AA;
	}
	if (_T14B != 0) { goto _TL1AA;
	}
	if (_T14C == 0) { goto _TL1AA;
	}
	_throw_arraybounds();
	goto _TL1AB;
	_TL1AA: _TL1AB: _TFB = _T14A.curr;
	_TFC = (char *)_TFB;
	*_TFC = _T14C;
      }
    }_TL1A3: _TFD = prec;
    if (_TFD) { goto _TL1AE;
    }else { goto _TL1AF;
    }
    _TL1AF: if (flags & 8) { goto _TL1AE;
    }else { goto _TL1AC;
    }
    _TL1AE: dotrim = 1;
    _TFE = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TFE,sizeof(char),
							 1);
      _TFF = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T100 = (char *)_TFF;
      { char _T14B = *_T100;
	char _T14C = '.';
	_T101 = _get_fat_size(_T14A,sizeof(char));
	if (_T101 != 1U) { goto _TL1B0;
	}
	if (_T14B != 0) { goto _TL1B0;
	}
	if (_T14C == 0) { goto _TL1B0;
	}
	_throw_arraybounds();
	goto _TL1B1;
	_TL1B0: _TL1B1: _T102 = _T14A.curr;
	_T103 = (char *)_T102;
	*_T103 = _T14C;
      }
    }goto _TL1AD;
    _TL1AC: dotrim = 0;
    _TL1AD: if (fract == 0.0) { goto _TL1B2;
    }
    _T104 = prec;
    if (! _T104) { goto _TL1B4;
    }
    _TL1B6: _T105 = fract;
    _T106 = (double)10;
    _T107 = _T105 * _T106;
    _T108 = &tmp;
    fract = modf(_T107,_T108);
    _T109 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T109,sizeof(char),
							 1);
      _T10A = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T10B = (char *)_T10A;
      { char _T14B = *_T10B;
	_T10C = tmp;
	_T10D = (int)_T10C;
	_T10E = _T10D + 48;
	{ char _T14C = (char)_T10E;
	  _T10F = _get_fat_size(_T14A,sizeof(char));
	  if (_T10F != 1U) { goto _TL1B8;
	  }
	  if (_T14B != 0) { goto _TL1B8;
	  }
	  if (_T14C == 0) { goto _TL1B8;
	  }
	  _throw_arraybounds();
	  goto _TL1B9;
	  _TL1B8: _TL1B9: _T110 = _T14A.curr;
	  _T111 = (char *)_T110;
	  *_T111 = _T14C;
	}
      }
    }if (tmp == 0.0) { goto _TL1BA;
    }else { goto _TL1B7;
    }
    _TL1BA: _T112 = expcnt;
    if (_T112) { goto _TL1B7;
    }else { goto _TL1B6;
    }
    _TL1B7: _TL1BB: prec = prec + -1;
    _T113 = prec;
    if (_T113) { goto _TL1BE;
    }else { goto _TL1BD;
    }
    _TL1BE: if (fract != 0.0) { goto _TL1BC;
    }else { goto _TL1BD;
    }
    _TL1BC: _T114 = fract;
    _T115 = (double)10;
    _T116 = _T114 * _T115;
    _T117 = &tmp;
    fract = modf(_T116,_T117);
    _T118 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T118,sizeof(char),
							 1);
      _T119 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T11A = (char *)_T119;
      { char _T14B = *_T11A;
	_T11B = tmp;
	_T11C = (int)_T11B;
	_T11D = _T11C + 48;
	{ char _T14C = (char)_T11D;
	  _T11E = _get_fat_size(_T14A,sizeof(char));
	  if (_T11E != 1U) { goto _TL1BF;
	  }
	  if (_T14B != 0) { goto _TL1BF;
	  }
	  if (_T14C == 0) { goto _TL1BF;
	  }
	  _throw_arraybounds();
	  goto _TL1C0;
	  _TL1BF: _TL1C0: _T11F = _T14A.curr;
	  _T120 = (char *)_T11F;
	  *_T120 = _T14C;
	}
      }
    }goto _TL1BB;
    _TL1BD: goto _TL1B5;
    _TL1B4: _TL1B5: if (fract == 0.0) { goto _TL1C1;
    }
    _T121 = fract;
    _T122 = startp;
    _T123 = t;
    _T124 = - 1;
    _T125 = _fat_ptr_plus(_T123,sizeof(char),_T124);
    _T126 = signp;
    startp = Cyc_sround(_T121,0,_T122,_T125,'\000',_T126);
    goto _TL1C2;
    _TL1C1: _TL1C2: goto _TL1B3;
    _TL1B2: _TL1B3: if (! (flags & 8)) { goto _TL1C3;
    }
    _TL1C8: _T127 = prec;
    prec = _T127 + -1;
    _T128 = _T127;
    if (_T128) { goto _TL1C6;
    }else { goto _TL1C7;
    }
    _TL1C6: _T129 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T129,sizeof(char),
							 1);
      _T12A = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T12B = (char *)_T12A;
      { char _T14B = *_T12B;
	char _T14C = '0';
	_T12C = _get_fat_size(_T14A,sizeof(char));
	if (_T12C != 1U) { goto _TL1C9;
	}
	if (_T14B != 0) { goto _TL1C9;
	}
	if (_T14C == 0) { goto _TL1C9;
	}
	_throw_arraybounds();
	goto _TL1CA;
	_TL1C9: _TL1CA: _T12D = _T14A.curr;
	_T12E = (char *)_T12D;
	*_T12E = _T14C;
      }
    }goto _TL1C8;
    _TL1C7: goto _TL1C4;
    _TL1C3: _T12F = dotrim;
    if (! _T12F) { goto _TL1CB;
    }
    _TL1CD: _T130 = t;
    _T131 = _T130.curr;
    _T132 = (char *)_T131;
    _T133 = startp;
    _T134 = _T133.curr;
    _T135 = (char *)_T134;
    if (_T132 > _T135) { goto _TL1D0;
    }else { goto _TL1CF;
    }
    _TL1D0: _T136 = &t;
    _T137 = _fat_ptr_inplace_plus(_T136,sizeof(char),-1);
    _T138 = _check_fat_subscript(_T137,sizeof(char),0U);
    _T139 = (char *)_T138;
    _T13A = *_T139;
    _T13B = (int)_T13A;
    if (_T13B == 48) { goto _TL1CE;
    }else { goto _TL1CF;
    }
    _TL1CE: goto _TL1CD;
    _TL1CF: _T13C = t;
    _T13D = _check_fat_subscript(_T13C,sizeof(char),0U);
    _T13E = (char *)_T13D;
    _T13F = *_T13E;
    _T140 = (int)_T13F;
    if (_T140 == 46) { goto _TL1D1;
    }
    _T141 = &t;
    _fat_ptr_inplace_plus(_T141,sizeof(char),1);
    goto _TL1D2;
    _TL1D1: _TL1D2: goto _TL1CC;
    _TL1CB: _TL1CC: _TL1C4: goto _LL0;
  default: 
    { struct Cyc_Core_Impossible_exn_struct * _T14A = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
      _T14A->tag = Cyc_Core_Impossible;
      _T14A->f1 = _tag_fat("__cvt_double",sizeof(char),13U);
      _T142 = (struct Cyc_Core_Impossible_exn_struct *)_T14A;
    }_T143 = (void *)_T142;
    _throw(_T143);
  }
  _LL0: _T144 = t;
  _T145 = _T144.curr;
  _T146 = startp;
  _T147 = _T146.curr;
  _T148 = _T145 - _T147;
  _T149 = _T148 / sizeof(char);
  return _T149;
}
int Cyc_vfprintf(struct Cyc___cycFILE * f,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int (* _T0)(int (*)(int,struct Cyc___cycFILE *),struct Cyc___cycFILE *,
	      struct _fat_ptr,struct _fat_ptr);
  int (* _T1)(int,struct Cyc___cycFILE *);
  struct Cyc___cycFILE * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  int ans;
  { int (* _T6)(int (*)(int,struct Cyc___cycFILE *),struct Cyc___cycFILE *,
		struct _fat_ptr,struct _fat_ptr) = (int (*)(int (*)(int,struct Cyc___cycFILE *),
							    struct Cyc___cycFILE *,
							    struct _fat_ptr,
							    struct _fat_ptr))Cyc__IO_vfprintf;
    _T0 = _T6;
  }_T1 = Cyc_putc;
  _T2 = f;
  _T3 = fmt;
  _T4 = ap;
  ans = _T0(_T1,_T2,_T3,_T4);
  _T5 = ans;
  return _T5;
}
int Cyc_fprintf(struct Cyc___cycFILE * f,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  _T0 = Cyc_vfprintf(f,fmt,ap);
  return _T0;
}
int Cyc_vprintf(struct _fat_ptr fmt,struct _fat_ptr ap) {
  int (* _T0)(int (*)(int,struct Cyc___cycFILE *),struct Cyc___cycFILE *,
	      struct _fat_ptr,struct _fat_ptr);
  int (* _T1)(int,struct Cyc___cycFILE *);
  struct Cyc___cycFILE * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  int ans;
  { int (* _T6)(int (*)(int,struct Cyc___cycFILE *),struct Cyc___cycFILE *,
		struct _fat_ptr,struct _fat_ptr) = (int (*)(int (*)(int,struct Cyc___cycFILE *),
							    struct Cyc___cycFILE *,
							    struct _fat_ptr,
							    struct _fat_ptr))Cyc__IO_vfprintf;
    _T0 = _T6;
  }_T1 = Cyc_putc;
  _T2 = Cyc_stdout;
  _T3 = fmt;
  _T4 = ap;
  ans = _T0(_T1,_T2,_T3,_T4);
  _T5 = ans;
  return _T5;
}
int Cyc_printf(struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  int ans;
  ans = Cyc_vprintf(fmt,ap);
  _T0 = ans;
  return _T0;
}
 struct _tuple0 {
  struct _fat_ptr * f0;
  unsigned long * f1;
};
static int Cyc_putc_string(int c,struct _tuple0 * sptr_n) {
  struct _tuple0 * _T0;
  struct _fat_ptr * _T1;
  unsigned long * _T2;
  int _T3;
  struct _fat_ptr _T4;
  unsigned char * _T5;
  char * _T6;
  int _T7;
  struct _fat_ptr * _T8;
  unsigned long * _T9;
  unsigned long * _TA;
  struct _fat_ptr * _TB;
  _T0 = sptr_n;
  { struct _tuple0 _TC = *_T0;
    _TB = _TC.f0;
    _TA = _TC.f1;
  }{ struct _fat_ptr * sptr = _TB;
    unsigned long * nptr = _TA;
    _T1 = sptr;
    { struct _fat_ptr s = *_T1;
      _T2 = nptr;
      { unsigned long n = *_T2;
	if (n != 0U) { goto _TL1D3;
	}
	_T3 = - 1;
	return _T3;
	_TL1D3: _T4 = s;
	_T5 = _check_fat_subscript(_T4,sizeof(char),0U);
	_T6 = (char *)_T5;
	_T7 = c;
	*_T6 = (char)_T7;
	_T8 = sptr;
	_fat_ptr_inplace_plus(_T8,sizeof(char),1);
	_T9 = nptr;
	*_T9 = n - 1U;
	return 1;
      }
    }
  }
}
int Cyc_vsnprintf(struct _fat_ptr s,unsigned long n,struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _tuple0 _T0;
  struct _fat_ptr * _T1;
  int (* _T2)(int (*)(int,struct _tuple0 *),struct _tuple0 *,struct _fat_ptr,
	      struct _fat_ptr);
  struct _tuple0 * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  char * _T9;
  int _TA;
  int ans;
  struct _fat_ptr sptr = s;
  unsigned long nptr = n;
  { struct _tuple0 _TB;
    _T1 = &sptr;
    _TB.f0 = (struct _fat_ptr *)_T1;
    _TB.f1 = &nptr;
    _T0 = _TB;
  }{ struct _tuple0 sptr_n = _T0;
    { int (* _TB)(int (*)(int,struct _tuple0 *),struct _tuple0 *,struct _fat_ptr,
		  struct _fat_ptr) = (int (*)(int (*)(int,struct _tuple0 *),
					      struct _tuple0 *,struct _fat_ptr,
					      struct _fat_ptr))Cyc__IO_vfprintf;
      _T2 = _TB;
    }_T3 = &sptr_n;
    _T4 = fmt;
    _T5 = ap;
    ans = _T2(Cyc_putc_string,_T3,_T4,_T5);
    if (0 > ans) { goto _TL1D5;
    }
    _T6 = s;
    _T7 = ans;
    _T8 = _check_fat_subscript(_T6,sizeof(char),_T7);
    _T9 = (char *)_T8;
    *_T9 = '\000';
    goto _TL1D6;
    _TL1D5: _TL1D6: _TA = ans;
    return _TA;
  }
}
int Cyc_snprintf(struct _fat_ptr s,unsigned long n,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  _T0 = Cyc_vsnprintf(s,n,fmt,ap);
  return _T0;
}
int Cyc_vsprintf(struct _fat_ptr s,struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  _T0 = s;
  _T1 = s;
  _T2 = _get_fat_size(_T1,sizeof(char));
  _T3 = fmt;
  _T4 = ap;
  _T5 = Cyc_vsnprintf(_T0,_T2,_T3,_T4);
  return _T5;
}
int Cyc_sprintf(struct _fat_ptr s,struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  _T0 = s;
  _T1 = s;
  _T2 = _get_fat_size(_T1,sizeof(char));
  _T3 = fmt;
  _T4 = ap;
  _T5 = Cyc_vsnprintf(_T0,_T2,_T3,_T4);
  return _T5;
}
static int Cyc_putc_void(int c,int dummy) {
  return 1;
}
struct _fat_ptr Cyc_vrprintf(struct _RegionHandle * r1,struct _fat_ptr fmt,
			     struct _fat_ptr ap) {
  int (* _T0)(int (*)(int,int),int,struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  int _T3;
  struct _fat_ptr _T4;
  struct _RegionHandle * _T5;
  void * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  { int (* _TC)(int (*)(int,int),int,struct _fat_ptr,struct _fat_ptr) = (int (*)(int (*)(int,
											 int),
										 int,
										 struct _fat_ptr,
										 struct _fat_ptr))Cyc__IO_vfprintf;
    _T0 = _TC;
  }_T1 = fmt;
  _T2 = ap;
  _T3 = _T0(Cyc_putc_void,0,_T1,_T2);
  { int size = _T3 + 1;
    { unsigned int _TC = size + 1;
      _T5 = r1;
      _T6 = _region_calloc(_T5,0U,sizeof(char),_TC);
      _T4 = _tag_fat(_T6,sizeof(char),_TC);
    }{ struct _fat_ptr s = _T4;
      _T7 = s;
      _T8 = _fat_ptr_decrease_size(_T7,sizeof(char),1U);
      _T9 = fmt;
      _TA = ap;
      Cyc_vsprintf(_T8,_T9,_TA);
      _TB = s;
      return _TB;
    }
  }
}
struct _fat_ptr Cyc_rprintf(struct _RegionHandle * r1,struct _fat_ptr fmt,
			    struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  _T0 = Cyc_vrprintf(r1,fmt,ap);
  return _T0;
}
struct _fat_ptr Cyc_aprintf(struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  _T0 = Cyc_vrprintf(Cyc_Core_heap_region,fmt,ap);
  return _T0;
}
