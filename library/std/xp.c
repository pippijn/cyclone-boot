#include <cyc_include.h>
extern int isalnum(int);
extern int isspace(int);
extern struct _fat_ptr Cyc__memcpy(struct _fat_ptr,struct _fat_ptr,unsigned long,
				   unsigned int);
extern struct _fat_ptr Cyc_memset(struct _fat_ptr,char,unsigned long);
extern void * Cyc___assert_fail(struct _fat_ptr,struct _fat_ptr,unsigned int);
extern int Cyc_XP_quotient(int,struct _fat_ptr,struct _fat_ptr,int);
static char _TmpG0[37U] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static struct _fat_ptr Cyc_digits = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
				     (unsigned char *)_TmpG0 + 37U};
static char Cyc_map[75U] = {'\000',
			    '\001',
			    '\002',
			    '\003',
			    '\004',
			    '\005',
			    '\006',
			    '\a',
			    '\b',
			    '\t',
			    '$',
			    '$',
			    '$',
			    '$',
			    '$',
			    '$',
			    '$',
			    '\n',
			    '\v',
			    '\f',
			    '\r',
			    '\016',
			    '\017',
			    '\020',
			    '\021',
			    '\022',
			    '\023',
			    '\024',
			    '\025',
			    '\026',
			    '\027',
			    '\030',
			    '\031',
			    '\032',
			    '\033',
			    '\034',
			    '\035',
			    '\036',
			    '\037',
			    ' ',
			    '!',
			    '"',
			    '#',
			    '$',
			    '$',
			    '$',
			    '$',
			    '$',
			    '$',
			    '\n',
			    '\v',
			    '\f',
			    '\r',
			    '\016',
			    '\017',
			    '\020',
			    '\021',
			    '\022',
			    '\023',
			    '\024',
			    '\025',
			    '\026',
			    '\027',
			    '\030',
			    '\031',
			    '\032',
			    '\033',
			    '\034',
			    '\035',
			    '\036',
			    '\037',
			    ' ',
			    '!',
			    '"',
			    '#'};
unsigned long Cyc_XP_fromint(int n,struct _fat_ptr z,unsigned long u) {
  struct _fat_ptr _T0;
  int _T1;
  int _T2;
  unsigned char * _T3;
  unsigned char * _T4;
  unsigned long _T5;
  unsigned long _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned char * _T9;
  unsigned char * _TA;
  unsigned long _TB;
  int i = 0;
  _TL0: _T0 = z;
  _T1 = i;
  i = _T1 + 1;
  _T2 = _T1;
  _T3 = _check_fat_subscript(_T0,sizeof(unsigned char),_T2);
  _T4 = (unsigned char *)_T3;
  _T5 = u % 256U;
  *_T4 = (unsigned char)_T5;
  u = u / 256U;
  _T6 = u;
  if (_T6 > 0U) { goto _TL2;
  }else { goto _TL1;
  }
  _TL2: if (i < n) { goto _TL0;
  }else { goto _TL1;
  }
  _TL1: _TL6: if (i < n) { goto _TL4;
  }else { goto _TL5;
  }
  _TL4: _T7 = z;
  _T8 = i;
  _T9 = _check_fat_subscript(_T7,sizeof(unsigned char),_T8);
  _TA = (unsigned char *)_T9;
  *_TA = '\000';
  i = i + 1;
  goto _TL6;
  _TL5: _TB = u;
  return _TB;
}
unsigned long Cyc_XP_toint(int n,struct _fat_ptr x) {
  unsigned int _T0;
  int _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  int _T4;
  unsigned char * _T5;
  unsigned char * _T6;
  unsigned char _T7;
  unsigned long _T8;
  unsigned long _T9;
  unsigned long u = 0U;
  _T0 = sizeof(u);
  { int i = (int)_T0;
    if (i <= n) { goto _TL7;
    }
    i = n;
    goto _TL8;
    _TL7: _TL8: _TL9: i = i + -1;
    _T1 = i;
    if (_T1 >= 0) { goto _TLA;
    }else { goto _TLB;
    }
    _TLA: _T2 = 256U * u;
    _T3 = x;
    _T4 = i;
    _T5 = _check_fat_subscript(_T3,sizeof(unsigned char),_T4);
    _T6 = (unsigned char *)_T5;
    _T7 = *_T6;
    _T8 = (unsigned long)_T7;
    u = _T2 + _T8;
    goto _TL9;
    _TLB: _T9 = u;
    return _T9;
  }
}
int Cyc_XP_length(int n,struct _fat_ptr x) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  int _T5;
  int _T6;
  _TLC: if (n > 1) { goto _TLF;
  }else { goto _TLE;
  }
  _TLF: _T0 = x;
  _T1 = n - 1;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = *_T3;
  _T5 = (int)_T4;
  if (_T5 == 0) { goto _TLD;
  }else { goto _TLE;
  }
  _TLD: n = n + -1;
  goto _TLC;
  _TLE: _T6 = n;
  return _T6;
}
int Cyc_XP_add(int n,struct _fat_ptr z,struct _fat_ptr x,struct _fat_ptr y,
	       int carry) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  int _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  unsigned char * _T9;
  unsigned char _TA;
  int _TB;
  int _TC;
  struct _fat_ptr _TD;
  int _TE;
  unsigned char * _TF;
  unsigned char * _T10;
  int _T11;
  int _T12;
  int _T13;
  int _T14;
  int _T15;
  int i;
  i = 0;
  _TL13: if (i < n) { goto _TL11;
  }else { goto _TL12;
  }
  _TL11: _T0 = x;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = *_T3;
  _T5 = (int)_T4;
  _T6 = y;
  _T7 = i;
  _T8 = _check_fat_subscript(_T6,sizeof(unsigned char),_T7);
  _T9 = (unsigned char *)_T8;
  _TA = *_T9;
  _TB = (int)_TA;
  _TC = _T5 + _TB;
  carry = carry + _TC;
  _TD = z;
  _TE = i;
  _TF = _check_fat_subscript(_TD,sizeof(unsigned char),_TE);
  _T10 = (unsigned char *)_TF;
  _T11 = carry;
  _T12 = 1 << 8;
  _T13 = _T11 % _T12;
  *_T10 = (unsigned char)_T13;
  _T14 = 1 << 8;
  carry = carry / _T14;
  i = i + 1;
  goto _TL13;
  _TL12: _T15 = carry;
  return _T15;
}
int Cyc_XP_sub(int n,struct _fat_ptr z,struct _fat_ptr x,struct _fat_ptr y,
	       int borrow) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  int _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned char * _TC;
  unsigned char * _TD;
  unsigned char _TE;
  int _TF;
  struct _fat_ptr _T10;
  int _T11;
  unsigned char * _T12;
  unsigned char * _T13;
  int _T14;
  int _T15;
  int _T16;
  int _T17;
  int _T18;
  int _T19;
  int _T1A;
  int i;
  i = 0;
  _TL17: if (i < n) { goto _TL15;
  }else { goto _TL16;
  }
  _TL15: _T0 = x;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = *_T3;
  _T5 = (int)_T4;
  _T6 = 1 << 8;
  _T7 = _T5 + _T6;
  _T8 = borrow;
  _T9 = _T7 - _T8;
  _TA = y;
  _TB = i;
  _TC = _check_fat_subscript(_TA,sizeof(unsigned char),_TB);
  _TD = (unsigned char *)_TC;
  _TE = *_TD;
  _TF = (int)_TE;
  { int d = _T9 - _TF;
    _T10 = z;
    _T11 = i;
    _T12 = _check_fat_subscript(_T10,sizeof(unsigned char),_T11);
    _T13 = (unsigned char *)_T12;
    _T14 = d;
    _T15 = 1 << 8;
    _T16 = _T14 % _T15;
    *_T13 = (unsigned char)_T16;
    _T17 = d;
    _T18 = 1 << 8;
    _T19 = _T17 / _T18;
    borrow = 1 - _T19;
  }i = i + 1;
  goto _TL17;
  _TL16: _T1A = borrow;
  return _T1A;
}
int Cyc_XP_sum(int n,struct _fat_ptr z,struct _fat_ptr x,int y) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  int _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  unsigned char * _T9;
  int _TA;
  int _TB;
  int _TC;
  int _TD;
  int _TE;
  int i;
  i = 0;
  _TL1B: if (i < n) { goto _TL19;
  }else { goto _TL1A;
  }
  _TL19: _T0 = x;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = *_T3;
  _T5 = (int)_T4;
  y = y + _T5;
  _T6 = z;
  _T7 = i;
  _T8 = _check_fat_subscript(_T6,sizeof(unsigned char),_T7);
  _T9 = (unsigned char *)_T8;
  _TA = y;
  _TB = 1 << 8;
  _TC = _TA % _TB;
  *_T9 = (unsigned char)_TC;
  _TD = 1 << 8;
  y = y / _TD;
  i = i + 1;
  goto _TL1B;
  _TL1A: _TE = y;
  return _TE;
}
int Cyc_XP_diff(int n,struct _fat_ptr z,struct _fat_ptr x,int y) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  struct _fat_ptr _T9;
  int _TA;
  unsigned char * _TB;
  unsigned char * _TC;
  int _TD;
  int _TE;
  int _TF;
  int _T10;
  int _T11;
  int _T12;
  int _T13;
  int i;
  i = 0;
  _TL1F: if (i < n) { goto _TL1D;
  }else { goto _TL1E;
  }
  _TL1D: _T0 = x;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = *_T3;
  _T5 = (int)_T4;
  _T6 = 1 << 8;
  _T7 = _T5 + _T6;
  _T8 = y;
  { int d = _T7 - _T8;
    _T9 = z;
    _TA = i;
    _TB = _check_fat_subscript(_T9,sizeof(unsigned char),_TA);
    _TC = (unsigned char *)_TB;
    _TD = d;
    _TE = 1 << 8;
    _TF = _TD % _TE;
    *_TC = (unsigned char)_TF;
    _T10 = d;
    _T11 = 1 << 8;
    _T12 = _T10 / _T11;
    y = 1 - _T12;
  }i = i + 1;
  goto _TL1F;
  _TL1E: _T13 = y;
  return _T13;
}
int Cyc_XP_neg(int n,struct _fat_ptr z,struct _fat_ptr x,int carry) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  unsigned char _T5;
  int _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned char * _T9;
  unsigned char * _TA;
  int _TB;
  int _TC;
  int _TD;
  int _TE;
  int _TF;
  int i;
  i = 0;
  _TL23: if (i < n) { goto _TL21;
  }else { goto _TL22;
  }
  _TL21: _T0 = x;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = *_T3;
  _T5 = ~ _T4;
  _T6 = (int)_T5;
  carry = carry + _T6;
  _T7 = z;
  _T8 = i;
  _T9 = _check_fat_subscript(_T7,sizeof(unsigned char),_T8);
  _TA = (unsigned char *)_T9;
  _TB = carry;
  _TC = 1 << 8;
  _TD = _TB % _TC;
  *_TA = (unsigned char)_TD;
  _TE = 1 << 8;
  carry = carry / _TE;
  i = i + 1;
  goto _TL23;
  _TL22: _TF = carry;
  return _TF;
}
int Cyc_XP_mul(struct _fat_ptr z,int n,struct _fat_ptr x,int m,struct _fat_ptr y) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  int _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  unsigned char * _T9;
  unsigned char _TA;
  int _TB;
  int _TC;
  struct _fat_ptr _TD;
  int _TE;
  unsigned char * _TF;
  unsigned char * _T10;
  unsigned char _T11;
  int _T12;
  int _T13;
  unsigned int _T14;
  struct _fat_ptr _T15;
  unsigned char * _T16;
  unsigned char * _T17;
  int _T18;
  unsigned int _T19;
  int _T1A;
  int _T1B;
  int _T1C;
  int _T1D;
  struct _fat_ptr _T1E;
  int _T1F;
  unsigned char * _T20;
  unsigned char * _T21;
  unsigned char _T22;
  unsigned int _T23;
  struct _fat_ptr _T24;
  unsigned char * _T25;
  unsigned char * _T26;
  int _T27;
  unsigned int _T28;
  unsigned int _T29;
  int _T2A;
  int i;
  int j;
  int carryout = 0;
  i = 0;
  _TL27: if (i < n) { goto _TL25;
  }else { goto _TL26;
  }
  _TL25: { unsigned int carry = 0U;
    j = 0;
    _TL2B: if (j < m) { goto _TL29;
    }else { goto _TL2A;
    }
    _TL29: _T0 = x;
    _T1 = i;
    _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
    _T3 = (unsigned char *)_T2;
    _T4 = *_T3;
    _T5 = (int)_T4;
    _T6 = y;
    _T7 = j;
    _T8 = _check_fat_subscript(_T6,sizeof(unsigned char),_T7);
    _T9 = (unsigned char *)_T8;
    _TA = *_T9;
    _TB = (int)_TA;
    _TC = _T5 * _TB;
    _TD = z;
    _TE = i + j;
    _TF = _check_fat_subscript(_TD,sizeof(unsigned char),_TE);
    _T10 = (unsigned char *)_TF;
    _T11 = *_T10;
    _T12 = (int)_T11;
    _T13 = _TC + _T12;
    _T14 = (unsigned int)_T13;
    carry = carry + _T14;
    _T15 = z;
    _T16 = _T15.curr;
    _T17 = (unsigned char *)_T16;
    _T18 = i + j;
    _T19 = carry % 256U;
    _T17[_T18] = (unsigned char)_T19;
    carry = carry / 256U;
    j = j + 1;
    goto _TL2B;
    _TL2A: _TL2F: _T1A = j;
    _T1B = n + m;
    _T1C = i;
    _T1D = _T1B - _T1C;
    if (_T1A < _T1D) { goto _TL2D;
    }else { goto _TL2E;
    }
    _TL2D: _T1E = z;
    _T1F = i + j;
    _T20 = _check_fat_subscript(_T1E,sizeof(unsigned char),_T1F);
    _T21 = (unsigned char *)_T20;
    _T22 = *_T21;
    _T23 = (unsigned int)_T22;
    carry = carry + _T23;
    _T24 = z;
    _T25 = _T24.curr;
    _T26 = (unsigned char *)_T25;
    _T27 = i + j;
    _T28 = carry % 256U;
    _T26[_T27] = (unsigned char)_T28;
    carry = carry / 256U;
    j = j + 1;
    goto _TL2F;
    _TL2E: _T29 = carry;
    carryout = carryout | _T29;
  }i = i + 1;
  goto _TL27;
  _TL26: _T2A = carryout;
  return _T2A;
}
int Cyc_XP_product(int n,struct _fat_ptr z,struct _fat_ptr x,int y) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  int _T5;
  int _T6;
  int _T7;
  unsigned int _T8;
  struct _fat_ptr _T9;
  int _TA;
  unsigned char * _TB;
  unsigned char * _TC;
  unsigned int _TD;
  unsigned int _TE;
  int _TF;
  int i;
  unsigned int carry = 0U;
  i = 0;
  _TL33: if (i < n) { goto _TL31;
  }else { goto _TL32;
  }
  _TL31: _T0 = x;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = *_T3;
  _T5 = (int)_T4;
  _T6 = y;
  _T7 = _T5 * _T6;
  _T8 = (unsigned int)_T7;
  carry = carry + _T8;
  _T9 = z;
  _TA = i;
  _TB = _check_fat_subscript(_T9,sizeof(unsigned char),_TA);
  _TC = (unsigned char *)_TB;
  _TD = carry % 256U;
  *_TC = (unsigned char)_TD;
  carry = carry / 256U;
  i = i + 1;
  goto _TL33;
  _TL32: _TE = carry;
  _TF = (int)_TE;
  return _TF;
}
int Cyc_XP_div(int n,struct _fat_ptr q,struct _fat_ptr x,int m,struct _fat_ptr y,
	       struct _fat_ptr r,struct _fat_ptr tmp) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned char * _T2;
  unsigned char _T3;
  int _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  unsigned char * _T7;
  int _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  unsigned char * _TD;
  unsigned char _TE;
  int _TF;
  int _T10;
  struct _fat_ptr _T11;
  unsigned int _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  int _T16;
  unsigned long _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  int _T1A;
  unsigned long _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  int _T1E;
  unsigned int _T1F;
  unsigned int _T20;
  unsigned int _T21;
  int _T22;
  int _T23;
  unsigned int _T24;
  unsigned int _T25;
  unsigned int _T26;
  unsigned int _T27;
  unsigned int _T28;
  unsigned int _T29;
  struct _fat_ptr _T2A;
  struct _fat_ptr _T2B;
  int _T2C;
  struct _fat_ptr _T2D;
  int _T2E;
  unsigned long _T2F;
  struct _fat_ptr _T30;
  int _T31;
  struct _fat_ptr _T32;
  int (* _T33)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T34)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T35;
  struct _fat_ptr _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  int _T39;
  unsigned int _T3A;
  unsigned int _T3B;
  unsigned int _T3C;
  int _T3D;
  int _T3E;
  unsigned int _T3F;
  unsigned int _T40;
  unsigned int _T41;
  unsigned int _T42;
  unsigned int _T43;
  unsigned int _T44;
  struct _fat_ptr _T45;
  int _T46;
  unsigned char * _T47;
  unsigned char * _T48;
  int _T49;
  int _T4A;
  int _T4B;
  int _T4C;
  int (* _T4D)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T4E)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T4F;
  struct _fat_ptr _T50;
  struct _fat_ptr _T51;
  int _T52;
  unsigned char * _T53;
  unsigned char * _T54;
  unsigned char _T55;
  int _T56;
  int _T57;
  int _T58;
  struct _fat_ptr _T59;
  unsigned char * _T5A;
  unsigned char * _T5B;
  int _T5C;
  unsigned char _T5D;
  int _T5E;
  int _T5F;
  struct _fat_ptr _T60;
  unsigned char * _T61;
  unsigned char * _T62;
  int _T63;
  unsigned char _T64;
  int _T65;
  int _T66;
  int _T67;
  int _T68;
  int _T69;
  struct _fat_ptr _T6A;
  int _T6B;
  unsigned char * _T6C;
  unsigned char * _T6D;
  unsigned char _T6E;
  int _T6F;
  int _T70;
  int _T71;
  int _T72;
  struct _fat_ptr _T73;
  int _T74;
  unsigned char * _T75;
  unsigned char * _T76;
  unsigned char _T77;
  int _T78;
  int _T79;
  unsigned long _T7A;
  int _T7B;
  int _T7C;
  int _T7D;
  struct _fat_ptr _T7E;
  int _T7F;
  unsigned char * _T80;
  unsigned char * _T81;
  int _T82;
  struct _fat_ptr _T83;
  int _T84;
  unsigned char * _T85;
  unsigned char * _T86;
  unsigned char _T87;
  int _T88;
  struct _fat_ptr _T89;
  unsigned char * _T8A;
  unsigned char * _T8B;
  int _T8C;
  unsigned char _T8D;
  int _T8E;
  struct _fat_ptr _T8F;
  int _T90;
  unsigned char * _T91;
  unsigned char * _T92;
  unsigned char _T93;
  int _T94;
  struct _fat_ptr _T95;
  unsigned char * _T96;
  unsigned char * _T97;
  int _T98;
  unsigned char _T99;
  int _T9A;
  struct _fat_ptr _T9B;
  unsigned char * _T9C;
  unsigned char * _T9D;
  int _T9E;
  int _T9F;
  struct _fat_ptr _TA0;
  struct _fat_ptr _TA1;
  int _TA2;
  int _TA3;
  struct _fat_ptr _TA4;
  int _TA5;
  unsigned char * _TA6;
  unsigned char * _TA7;
  int _TA8;
  int _TA9;
  int _TAA;
  int (* _TAB)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _TAC)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _TAD;
  struct _fat_ptr _TAE;
  int _TAF;
  struct _fat_ptr _TB0;
  int _TB1;
  struct _fat_ptr _TB2;
  struct _fat_ptr _TB3;
  int _TB4;
  struct _fat_ptr _TB5;
  struct _fat_ptr _TB6;
  int (* _TB7)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _TB8)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _TB9;
  struct _fat_ptr _TBA;
  struct _fat_ptr _TBB;
  struct _fat_ptr _TBC;
  int _TBD;
  unsigned int _TBE;
  unsigned int _TBF;
  unsigned int _TC0;
  int _TC1;
  int _TC2;
  unsigned int _TC3;
  unsigned int _TC4;
  unsigned int _TC5;
  unsigned int _TC6;
  unsigned int _TC7;
  unsigned int _TC8;
  int _TC9;
  struct _fat_ptr _TCA;
  int _TCB;
  unsigned char * _TCC;
  unsigned char * _TCD;
  struct _fat_ptr _TCE;
  int _TCF;
  unsigned char * _TD0;
  unsigned char * _TD1;
  int nx = n;
  int my = m;
  n = Cyc_XP_length(n,x);
  m = Cyc_XP_length(m,y);
  if (m != 1) { goto _TL34;
  }
  _T0 = y;
  _T1 = _check_fat_subscript(_T0,sizeof(unsigned char),0);
  _T2 = (unsigned char *)_T1;
  _T3 = *_T2;
  _T4 = (int)_T3;
  if (_T4 != 0) { goto _TL36;
  }
  return 0;
  _TL36: _T5 = r;
  _T6 = _check_fat_subscript(_T5,sizeof(unsigned char),0);
  _T7 = (unsigned char *)_T6;
  _T8 = nx;
  _T9 = q;
  _TA = x;
  _TB = y;
  _TC = _TB.curr;
  _TD = (unsigned char *)_TC;
  _TE = _TD[0];
  _TF = (int)_TE;
  _T10 = Cyc_XP_quotient(_T8,_T9,_TA,_TF);
  *_T7 = (unsigned char)_T10;
  _T11 = r;
  _T12 = _get_fat_size(_T11,sizeof(unsigned char));
  if (_T12 <= 1U) { goto _TL38;
  }
  _T13 = r;
  _T14 = _T13;
  _T15 = _fat_ptr_plus(_T14,sizeof(char),1);
  _T16 = my - 1;
  _T17 = (unsigned long)_T16;
  Cyc_memset(_T15,'\000',_T17);
  goto _TL39;
  _TL38: _TL39: goto _TL35;
  _TL34: if (m <= n) { goto _TL3A;
  }
  _T18 = q;
  _T19 = _T18;
  _T1A = nx;
  _T1B = (unsigned long)_T1A;
  Cyc_memset(_T19,'\000',_T1B);
  _T1C = r;
  _T1D = x;
  _T1E = n;
  _T1F = (unsigned int)_T1E;
  _T20 = sizeof(*((unsigned char *)x.curr));
  _T21 = _T1F / _T20;
  _T23 = n;
  _T24 = (unsigned int)_T23;
  _T25 = sizeof(*((unsigned char *)x.curr));
  _T26 = _T24 % _T25;
  if (_T26 != 0U) { goto _TL3C;
  }
  _T22 = 0;
  goto _TL3D;
  _TL3C: _T22 = 1;
  _TL3D: _T27 = (unsigned int)_T22;
  _T28 = _T21 + _T27;
  _T29 = sizeof(*((unsigned char *)x.curr));
  Cyc__memcpy(_T1C,_T1D,_T28,_T29);
  _T2A = r;
  _T2B = _T2A;
  _T2C = n;
  _T2D = _fat_ptr_plus(_T2B,sizeof(char),_T2C);
  _T2E = my - n;
  _T2F = (unsigned long)_T2E;
  Cyc_memset(_T2D,'\000',_T2F);
  goto _TL3B;
  _TL3A: { int k;
    struct _fat_ptr rem = tmp;
    _T30 = tmp;
    _T31 = n;
    _T32 = _fat_ptr_plus(_T30,sizeof(unsigned char),_T31);
    { struct _fat_ptr dq = _fat_ptr_plus(_T32,sizeof(unsigned char),1);
      if (2 > m) { goto _TL3E;
      }
      if (m > n) { goto _TL3E;
      }
      goto _TL3F;
      _TL3E: _T34 = Cyc___assert_fail;
      { int (* _TD2)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									      struct _fat_ptr,
									      unsigned int))_T34;
	_T33 = _TD2;
      }_T35 = _tag_fat("2 <= m && m <= n",sizeof(char),17U);
      _T36 = _tag_fat("xp.cyc",sizeof(char),7U);
      _T33(_T35,_T36,130U);
      _TL3F: _T37 = rem;
      _T38 = x;
      _T39 = n;
      _T3A = (unsigned int)_T39;
      _T3B = sizeof(*((unsigned char *)x.curr));
      _T3C = _T3A / _T3B;
      _T3E = n;
      _T3F = (unsigned int)_T3E;
      _T40 = sizeof(*((unsigned char *)x.curr));
      _T41 = _T3F % _T40;
      if (_T41 != 0U) { goto _TL40;
      }
      _T3D = 0;
      goto _TL41;
      _TL40: _T3D = 1;
      _TL41: _T42 = (unsigned int)_T3D;
      _T43 = _T3C + _T42;
      _T44 = sizeof(*((unsigned char *)x.curr));
      Cyc__memcpy(_T37,_T38,_T43,_T44);
      _T45 = rem;
      _T46 = n;
      _T47 = _check_fat_subscript(_T45,sizeof(unsigned char),_T46);
      _T48 = (unsigned char *)_T47;
      *_T48 = '\000';
      k = n - m;
      _TL45: if (k >= 0) { goto _TL43;
      }else { goto _TL44;
      }
      _TL43: { int qk;
	{ int i;
	  if (2 > m) { goto _TL46;
	  }
	  _T49 = m;
	  _T4A = k + m;
	  if (_T49 > _T4A) { goto _TL46;
	  }
	  _T4B = k + m;
	  _T4C = n;
	  if (_T4B > _T4C) { goto _TL46;
	  }
	  goto _TL47;
	  _TL46: _T4E = Cyc___assert_fail;
	  { int (* _TD2)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
										  struct _fat_ptr,
										  unsigned int))_T4E;
	    _T4D = _TD2;
	  }_T4F = _tag_fat("2 <= m && m <= k+m && k+m <= n",sizeof(char),
			   31U);
	  _T50 = _tag_fat("xp.cyc",sizeof(char),7U);
	  _T4D(_T4F,_T50,137U);
	  _TL47: { int km = k + m;
	    _T51 = y;
	    _T52 = m - 1;
	    _T53 = _check_fat_subscript(_T51,sizeof(unsigned char),_T52);
	    _T54 = (unsigned char *)_T53;
	    _T55 = *_T54;
	    _T56 = (int)_T55;
	    _T57 = 1 << 8;
	    _T58 = _T56 * _T57;
	    _T59 = y;
	    _T5A = _T59.curr;
	    _T5B = (unsigned char *)_T5A;
	    _T5C = m - 2;
	    _T5D = _T5B[_T5C];
	    _T5E = (int)_T5D;
	    _T5F = _T58 + _T5E;
	    { unsigned long y2 = (unsigned long)_T5F;
	      _T60 = rem;
	      _T61 = _T60.curr;
	      _T62 = (unsigned char *)_T61;
	      _T63 = km;
	      _T64 = _T62[_T63];
	      _T65 = (int)_T64;
	      _T66 = 1 << 8;
	      _T67 = 1 << 8;
	      _T68 = _T66 * _T67;
	      _T69 = _T65 * _T68;
	      _T6A = rem;
	      _T6B = km - 1;
	      _T6C = _check_fat_subscript(_T6A,sizeof(unsigned char),_T6B);
	      _T6D = (unsigned char *)_T6C;
	      _T6E = *_T6D;
	      _T6F = (int)_T6E;
	      _T70 = 1 << 8;
	      _T71 = _T6F * _T70;
	      _T72 = _T69 + _T71;
	      _T73 = rem;
	      _T74 = km - 2;
	      _T75 = _check_fat_subscript(_T73,sizeof(unsigned char),_T74);
	      _T76 = (unsigned char *)_T75;
	      _T77 = *_T76;
	      _T78 = (int)_T77;
	      _T79 = _T72 + _T78;
	      { unsigned long r3 = (unsigned long)_T79;
		_T7A = r3 / y2;
		qk = (int)_T7A;
		_T7B = qk;
		_T7C = 1 << 8;
		if (_T7B < _T7C) { goto _TL48;
		}
		_T7D = 1 << 8;
		qk = _T7D - 1;
		goto _TL49;
		_TL48: _TL49: ;
	      }
	    }
	  }_T7E = dq;
	  _T7F = m;
	  _T80 = _check_fat_subscript(_T7E,sizeof(unsigned char),_T7F);
	  _T81 = (unsigned char *)_T80;
	  _T82 = Cyc_XP_product(m,dq,y,qk);
	  *_T81 = (unsigned char)_T82;
	  i = m;
	  _TL4D: if (i > 0) { goto _TL4B;
	  }else { goto _TL4C;
	  }
	  _TL4B: _T83 = rem;
	  _T84 = i + k;
	  _T85 = _check_fat_subscript(_T83,sizeof(unsigned char),_T84);
	  _T86 = (unsigned char *)_T85;
	  _T87 = *_T86;
	  _T88 = (int)_T87;
	  _T89 = dq;
	  _T8A = _T89.curr;
	  _T8B = (unsigned char *)_T8A;
	  _T8C = i;
	  _T8D = _T8B[_T8C];
	  _T8E = (int)_T8D;
	  if (_T88 == _T8E) { goto _TL4E;
	  }
	  goto _TL4C;
	  _TL4E: i = i + -1;
	  goto _TL4D;
	  _TL4C: _T8F = rem;
	  _T90 = i + k;
	  _T91 = _check_fat_subscript(_T8F,sizeof(unsigned char),_T90);
	  _T92 = (unsigned char *)_T91;
	  _T93 = *_T92;
	  _T94 = (int)_T93;
	  _T95 = dq;
	  _T96 = _T95.curr;
	  _T97 = (unsigned char *)_T96;
	  _T98 = i;
	  _T99 = _T97[_T98];
	  _T9A = (int)_T99;
	  if (_T94 >= _T9A) { goto _TL50;
	  }
	  _T9B = dq;
	  _T9C = _T9B.curr;
	  _T9D = (unsigned char *)_T9C;
	  _T9E = m;
	  _T9F = m;
	  _TA0 = dq;
	  _TA1 = y;
	  qk = qk + -1;
	  _TA2 = qk;
	  _TA3 = Cyc_XP_product(_T9F,_TA0,_TA1,_TA2);
	  _T9D[_T9E] = (unsigned char)_TA3;
	  goto _TL51;
	  _TL50: _TL51: ;
	}_TA4 = q;
	_TA5 = k;
	_TA6 = _check_fat_subscript(_TA4,sizeof(unsigned char),_TA5);
	_TA7 = (unsigned char *)_TA6;
	_TA8 = qk;
	*_TA7 = (unsigned char)_TA8;
	{ int borrow;
	  if (0 > k) { goto _TL52;
	  }
	  _TA9 = k;
	  _TAA = k + m;
	  if (_TA9 > _TAA) { goto _TL52;
	  }
	  goto _TL53;
	  _TL52: _TAC = Cyc___assert_fail;
	  { int (* _TD2)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
										  struct _fat_ptr,
										  unsigned int))_TAC;
	    _TAB = _TD2;
	  }_TAD = _tag_fat("0 <= k && k <= k+m",sizeof(char),19U);
	  _TAE = _tag_fat("xp.cyc",sizeof(char),7U);
	  _TAB(_TAD,_TAE,157U);
	  _TL53: _TAF = m + 1;
	  _TB0 = rem;
	  _TB1 = k;
	  _TB2 = _fat_ptr_plus(_TB0,sizeof(unsigned char),_TB1);
	  _TB3 = rem;
	  _TB4 = k;
	  _TB5 = _fat_ptr_plus(_TB3,sizeof(unsigned char),_TB4);
	  _TB6 = dq;
	  borrow = Cyc_XP_sub(_TAF,_TB2,_TB5,_TB6,0);
	  if (borrow != 0) { goto _TL54;
	  }
	  goto _TL55;
	  _TL54: _TB8 = Cyc___assert_fail;
	  { int (* _TD2)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
										  struct _fat_ptr,
										  unsigned int))_TB8;
	    _TB7 = _TD2;
	  }_TB9 = _tag_fat("borrow == 0",sizeof(char),12U);
	  _TBA = _tag_fat("xp.cyc",sizeof(char),7U);
	  _TB7(_TB9,_TBA,159U);
	  _TL55: ;
	}
      }k = k + -1;
      goto _TL45;
      _TL44: _TBB = r;
      _TBC = rem;
      _TBD = m;
      _TBE = (unsigned int)_TBD;
      _TBF = sizeof(*((unsigned char *)rem.curr));
      _TC0 = _TBE / _TBF;
      _TC2 = m;
      _TC3 = (unsigned int)_TC2;
      _TC4 = sizeof(*((unsigned char *)rem.curr));
      _TC5 = _TC3 % _TC4;
      if (_TC5 != 0U) { goto _TL56;
      }
      _TC1 = 0;
      goto _TL57;
      _TL56: _TC1 = 1;
      _TL57: _TC6 = (unsigned int)_TC1;
      _TC7 = _TC0 + _TC6;
      _TC8 = sizeof(*((unsigned char *)rem.curr));
      Cyc__memcpy(_TBB,_TBC,_TC7,_TC8);
      { int i;
	_TC9 = n - m;
	i = _TC9 + 1;
	_TL5B: if (i < nx) { goto _TL59;
	}else { goto _TL5A;
	}
	_TL59: _TCA = q;
	_TCB = i;
	_TCC = _check_fat_subscript(_TCA,sizeof(unsigned char),_TCB);
	_TCD = (unsigned char *)_TCC;
	*_TCD = '\000';
	i = i + 1;
	goto _TL5B;
	_TL5A: i = m;
	_TL5F: if (i < my) { goto _TL5D;
	}else { goto _TL5E;
	}
	_TL5D: _TCE = r;
	_TCF = i;
	_TD0 = _check_fat_subscript(_TCE,sizeof(unsigned char),_TCF);
	_TD1 = (unsigned char *)_TD0;
	*_TD1 = '\000';
	i = i + 1;
	goto _TL5F;
	_TL5E: ;
      }
    }
  }_TL3B: _TL35: return 1;
}
int Cyc_XP_quotient(int n,struct _fat_ptr z,struct _fat_ptr x,int y) {
  unsigned int _T0;
  struct _fat_ptr _T1;
  int _T2;
  unsigned char * _T3;
  unsigned char * _T4;
  unsigned char _T5;
  unsigned int _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned char * _T9;
  unsigned char * _TA;
  unsigned int _TB;
  int _TC;
  unsigned int _TD;
  unsigned int _TE;
  int _TF;
  unsigned int _T10;
  unsigned int _T11;
  int _T12;
  int i;
  unsigned int carry = 0U;
  i = n - 1;
  _TL63: if (i >= 0) { goto _TL61;
  }else { goto _TL62;
  }
  _TL61: _T0 = carry * 256U;
  _T1 = x;
  _T2 = i;
  _T3 = _check_fat_subscript(_T1,sizeof(unsigned char),_T2);
  _T4 = (unsigned char *)_T3;
  _T5 = *_T4;
  _T6 = (unsigned int)_T5;
  carry = _T0 + _T6;
  _T7 = z;
  _T8 = i;
  _T9 = _check_fat_subscript(_T7,sizeof(unsigned char),_T8);
  _TA = (unsigned char *)_T9;
  _TB = carry;
  _TC = y;
  _TD = (unsigned int)_TC;
  _TE = _TB / _TD;
  *_TA = (unsigned char)_TE;
  _TF = y;
  _T10 = (unsigned int)_TF;
  carry = carry % _T10;
  i = i + -1;
  goto _TL63;
  _TL62: _T11 = carry;
  _T12 = (int)_T11;
  return _T12;
}
int Cyc_XP_cmp(int n,struct _fat_ptr x,struct _fat_ptr y) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  unsigned char _T4;
  int _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  unsigned char * _T9;
  unsigned char _TA;
  int _TB;
  struct _fat_ptr _TC;
  int _TD;
  unsigned char * _TE;
  unsigned char * _TF;
  unsigned char _T10;
  int _T11;
  struct _fat_ptr _T12;
  int _T13;
  unsigned char * _T14;
  unsigned char * _T15;
  unsigned char _T16;
  int _T17;
  int _T18;
  int i = n - 1;
  _TL64: if (i > 0) { goto _TL67;
  }else { goto _TL66;
  }
  _TL67: _T0 = x;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = *_T3;
  _T5 = (int)_T4;
  _T6 = y;
  _T7 = i;
  _T8 = _check_fat_subscript(_T6,sizeof(unsigned char),_T7);
  _T9 = (unsigned char *)_T8;
  _TA = *_T9;
  _TB = (int)_TA;
  if (_T5 == _TB) { goto _TL65;
  }else { goto _TL66;
  }
  _TL65: i = i + -1;
  goto _TL64;
  _TL66: _TC = x;
  _TD = i;
  _TE = _check_fat_subscript(_TC,sizeof(unsigned char),_TD);
  _TF = (unsigned char *)_TE;
  _T10 = *_TF;
  _T11 = (int)_T10;
  _T12 = y;
  _T13 = i;
  _T14 = _check_fat_subscript(_T12,sizeof(unsigned char),_T13);
  _T15 = (unsigned char *)_T14;
  _T16 = *_T15;
  _T17 = (int)_T16;
  _T18 = _T11 - _T17;
  return _T18;
}
void Cyc_XP_lshift(int n,struct _fat_ptr z,int m,struct _fat_ptr x,int s,
		   int fill) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  struct _fat_ptr _T9;
  int _TA;
  unsigned char * _TB;
  unsigned char * _TC;
  struct _fat_ptr _TD;
  int _TE;
  unsigned char * _TF;
  unsigned char * _T10;
  struct _fat_ptr _T11;
  int _T12;
  unsigned char * _T13;
  unsigned char * _T14;
  struct _fat_ptr _T15;
  int _T16;
  unsigned char * _T17;
  unsigned char * _T18;
  int _T19;
  int _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  int _T1D;
  struct _fat_ptr _T1E;
  unsigned char * _T1F;
  unsigned char * _T20;
  int _T21;
  int _T22;
  int _T23;
  _T1 = fill;
  if (! _T1) { goto _TL68;
  }
  _T0 = 255;
  goto _TL69;
  _TL68: _T0 = 0;
  _TL69: fill = _T0;
  { int i;
    int j = n - 1;
    if (n <= m) { goto _TL6A;
    }
    i = m - 1;
    goto _TL6B;
    _TL6A: _T2 = n;
    _T3 = s / 8;
    _T4 = _T2 - _T3;
    i = _T4 - 1;
    _TL6B: _TL6F: _T5 = j;
    _T6 = m;
    _T7 = s / 8;
    _T8 = _T6 + _T7;
    if (_T5 >= _T8) { goto _TL6D;
    }else { goto _TL6E;
    }
    _TL6D: _T9 = z;
    _TA = j;
    _TB = _check_fat_subscript(_T9,sizeof(unsigned char),_TA);
    _TC = (unsigned char *)_TB;
    *_TC = '\000';
    j = j + -1;
    goto _TL6F;
    _TL6E: _TL73: if (i >= 0) { goto _TL71;
    }else { goto _TL72;
    }
    _TL71: _TD = z;
    _TE = j;
    _TF = _check_fat_subscript(_TD,sizeof(unsigned char),_TE);
    _T10 = (unsigned char *)_TF;
    _T11 = x;
    _T12 = i;
    _T13 = _check_fat_subscript(_T11,sizeof(unsigned char),_T12);
    _T14 = (unsigned char *)_T13;
    *_T10 = *_T14;
    i = i + -1;
    j = j + -1;
    goto _TL73;
    _TL72: _TL77: if (j >= 0) { goto _TL75;
    }else { goto _TL76;
    }
    _TL75: _T15 = z;
    _T16 = j;
    _T17 = _check_fat_subscript(_T15,sizeof(unsigned char),_T16);
    _T18 = (unsigned char *)_T17;
    _T19 = fill;
    *_T18 = (unsigned char)_T19;
    j = j + -1;
    goto _TL77;
    _TL76: ;
  }s = s % 8;
  if (s <= 0) { goto _TL78;
  }
  _T1A = n;
  _T1B = z;
  _T1C = z;
  _T1D = 1 << s;
  Cyc_XP_product(_T1A,_T1B,_T1C,_T1D);
  _T1E = z;
  _T1F = _check_fat_subscript(_T1E,sizeof(unsigned char),0);
  _T20 = (unsigned char *)_T1F;
  _T21 = fill;
  _T22 = 8 - s;
  _T23 = _T21 >> _T22;
  *_T20 = *_T20 | _T23;
  goto _TL79;
  _TL78: _TL79: ;
}
void Cyc_XP_rshift(int n,struct _fat_ptr z,int m,struct _fat_ptr x,int s,
		   int fill) {
  int _T0;
  int _T1;
  struct _fat_ptr _T2;
  int _T3;
  unsigned char * _T4;
  unsigned char * _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  unsigned char * _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned char * _TC;
  unsigned char * _TD;
  int _TE;
  int _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  int _T12;
  struct _fat_ptr _T13;
  int _T14;
  unsigned char * _T15;
  unsigned char * _T16;
  int _T17;
  int _T18;
  int _T19;
  _T1 = fill;
  if (! _T1) { goto _TL7A;
  }
  _T0 = 255;
  goto _TL7B;
  _TL7A: _T0 = 0;
  _TL7B: fill = _T0;
  { int i;
    int j = 0;
    i = s / 8;
    _TL7F: if (i < m) { goto _TL80;
    }else { goto _TL7E;
    }
    _TL80: if (j < n) { goto _TL7D;
    }else { goto _TL7E;
    }
    _TL7D: _T2 = z;
    _T3 = j;
    _T4 = _check_fat_subscript(_T2,sizeof(unsigned char),_T3);
    _T5 = (unsigned char *)_T4;
    _T6 = x;
    _T7 = i;
    _T8 = _check_fat_subscript(_T6,sizeof(unsigned char),_T7);
    _T9 = (unsigned char *)_T8;
    *_T5 = *_T9;
    i = i + 1;
    j = j + 1;
    goto _TL7F;
    _TL7E: _TL84: if (j < n) { goto _TL82;
    }else { goto _TL83;
    }
    _TL82: _TA = z;
    _TB = j;
    _TC = _check_fat_subscript(_TA,sizeof(unsigned char),_TB);
    _TD = (unsigned char *)_TC;
    _TE = fill;
    *_TD = (unsigned char)_TE;
    j = j + 1;
    goto _TL84;
    _TL83: ;
  }s = s % 8;
  if (s <= 0) { goto _TL85;
  }
  _TF = n;
  _T10 = z;
  _T11 = z;
  _T12 = 1 << s;
  Cyc_XP_quotient(_TF,_T10,_T11,_T12);
  _T13 = z;
  _T14 = n - 1;
  _T15 = _check_fat_subscript(_T13,sizeof(unsigned char),_T14);
  _T16 = (unsigned char *)_T15;
  _T17 = fill;
  _T18 = 8 - s;
  _T19 = _T17 << _T18;
  *_T16 = *_T16 | _T19;
  goto _TL86;
  _TL85: _TL86: ;
}
void Cyc_XP_and(int n,struct _fat_ptr z,struct _fat_ptr x,struct _fat_ptr y) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  unsigned char * _T7;
  unsigned char _T8;
  int _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned char * _TC;
  unsigned char * _TD;
  unsigned char _TE;
  int _TF;
  int _T10;
  int i;
  i = 0;
  _TL8A: if (i < n) { goto _TL88;
  }else { goto _TL89;
  }
  _TL88: _T0 = z;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = x;
  _T5 = i;
  _T6 = _check_fat_subscript(_T4,sizeof(unsigned char),_T5);
  _T7 = (unsigned char *)_T6;
  _T8 = *_T7;
  _T9 = (int)_T8;
  _TA = y;
  _TB = i;
  _TC = _check_fat_subscript(_TA,sizeof(unsigned char),_TB);
  _TD = (unsigned char *)_TC;
  _TE = *_TD;
  _TF = (int)_TE;
  _T10 = _T9 & _TF;
  *_T3 = (unsigned char)_T10;
  i = i + 1;
  goto _TL8A;
  _TL89: ;
}
void Cyc_XP_or(int n,struct _fat_ptr z,struct _fat_ptr x,struct _fat_ptr y) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  unsigned char * _T7;
  unsigned char _T8;
  int _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned char * _TC;
  unsigned char * _TD;
  unsigned char _TE;
  int _TF;
  int _T10;
  int i;
  i = 0;
  _TL8E: if (i < n) { goto _TL8C;
  }else { goto _TL8D;
  }
  _TL8C: _T0 = z;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = x;
  _T5 = i;
  _T6 = _check_fat_subscript(_T4,sizeof(unsigned char),_T5);
  _T7 = (unsigned char *)_T6;
  _T8 = *_T7;
  _T9 = (int)_T8;
  _TA = y;
  _TB = i;
  _TC = _check_fat_subscript(_TA,sizeof(unsigned char),_TB);
  _TD = (unsigned char *)_TC;
  _TE = *_TD;
  _TF = (int)_TE;
  _T10 = _T9 | _TF;
  *_T3 = (unsigned char)_T10;
  i = i + 1;
  goto _TL8E;
  _TL8D: ;
}
void Cyc_XP_xor(int n,struct _fat_ptr z,struct _fat_ptr x,struct _fat_ptr y) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  unsigned char * _T7;
  unsigned char _T8;
  int _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned char * _TC;
  unsigned char * _TD;
  unsigned char _TE;
  int _TF;
  int _T10;
  int i;
  i = 0;
  _TL92: if (i < n) { goto _TL90;
  }else { goto _TL91;
  }
  _TL90: _T0 = z;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = x;
  _T5 = i;
  _T6 = _check_fat_subscript(_T4,sizeof(unsigned char),_T5);
  _T7 = (unsigned char *)_T6;
  _T8 = *_T7;
  _T9 = (int)_T8;
  _TA = y;
  _TB = i;
  _TC = _check_fat_subscript(_TA,sizeof(unsigned char),_TB);
  _TD = (unsigned char *)_TC;
  _TE = *_TD;
  _TF = (int)_TE;
  _T10 = _T9 ^ _TF;
  *_T3 = (unsigned char)_T10;
  i = i + 1;
  goto _TL92;
  _TL91: ;
}
void Cyc_XP_not(int n,struct _fat_ptr z,struct _fat_ptr x) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  unsigned char * _T7;
  unsigned char _T8;
  int i;
  i = 0;
  _TL96: if (i < n) { goto _TL94;
  }else { goto _TL95;
  }
  _TL94: _T0 = z;
  _T1 = i;
  _T2 = _check_fat_subscript(_T0,sizeof(unsigned char),_T1);
  _T3 = (unsigned char *)_T2;
  _T4 = x;
  _T5 = i;
  _T6 = _check_fat_subscript(_T4,sizeof(unsigned char),_T5);
  _T7 = (unsigned char *)_T6;
  _T8 = *_T7;
  *_T3 = ~ _T8;
  i = i + 1;
  goto _TL96;
  _TL95: ;
}
int Cyc_XP_fromstr(int n,struct _fat_ptr z,const char * str,int base) {
  const char * _T0;
  unsigned int _T1;
  int (* _T2)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T3)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  int (* _T6)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T7)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  const char * _TA;
  char _TB;
  int _TC;
  const char * _TD;
  char _TE;
  int _TF;
  int _T10;
  const char * _T11;
  int _T12;
  const char * _T13;
  char _T14;
  int _T15;
  const char * _T16;
  char _T17;
  int _T18;
  int _T19;
  char * _T1A;
  const char * _T1B;
  char _T1C;
  int _T1D;
  int _T1E;
  char * _T1F;
  char * _T20;
  char _T21;
  int _T22;
  int _T23;
  const char * _T24;
  char _T25;
  int _T26;
  const char * _T27;
  char _T28;
  int _T29;
  int _T2A;
  char * _T2B;
  const char * _T2C;
  char _T2D;
  int _T2E;
  int _T2F;
  char * _T30;
  char * _T31;
  char _T32;
  int _T33;
  int _T34;
  int _T35;
  int _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  char * _T39;
  const char * _T3A;
  char _T3B;
  int _T3C;
  int _T3D;
  char * _T3E;
  char * _T3F;
  char _T40;
  int _T41;
  const char * _T42;
  int _T43;
  int _T44;
  const char * p = str;
  _T0 = p;
  _T1 = (unsigned int)_T0;
  if (! _T1) { goto _TL97;
  }
  goto _TL98;
  _TL97: _T3 = Cyc___assert_fail;
  { int (* _T45)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									  struct _fat_ptr,
									  unsigned int))_T3;
    _T2 = _T45;
  }_T4 = _tag_fat("p",sizeof(char),2U);
  _T5 = _tag_fat("xp.cyc",sizeof(char),7U);
  _T2(_T4,_T5,250U);
  _TL98: if (base < 2) { goto _TL99;
  }
  if (base > 36) { goto _TL99;
  }
  goto _TL9A;
  _TL99: _T7 = Cyc___assert_fail;
  { int (* _T45)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									  struct _fat_ptr,
									  unsigned int))_T7;
    _T6 = _T45;
  }_T8 = _tag_fat("base >= 2 && base <= 36",sizeof(char),24U);
  _T9 = _tag_fat("xp.cyc",sizeof(char),7U);
  _T6(_T8,_T9,251U);
  _TL9A: _TL9B: _TA = _check_null(p);
  _TB = *_TA;
  _TC = (int)_TB;
  if (_TC) { goto _TL9E;
  }else { goto _TL9D;
  }
  _TL9E: _TD = p;
  _TE = *_TD;
  _TF = (int)_TE;
  _T10 = isspace(_TF);
  if (_T10) { goto _TL9C;
  }else { goto _TL9D;
  }
  _TL9C: { const char * * _T45 = &p;
    _T11 = *_T45;
    _T12 = *_T11;
    if (_T12 == 0) { goto _TL9F;
    }
    *_T45 = *_T45 + 1;
    goto _TLA0;
    _TL9F: _throw_arraybounds();
    _TLA0: ;
  }goto _TL9B;
  _TL9D: _T13 = p;
  _T14 = *_T13;
  _T15 = (int)_T14;
  if (! _T15) { goto _TLA1;
  }
  _T16 = p;
  _T17 = *_T16;
  _T18 = (int)_T17;
  _T19 = isalnum(_T18);
  if (! _T19) { goto _TLA1;
  }
  _T1A = Cyc_map;
  _T1B = p;
  _T1C = *_T1B;
  _T1D = (int)_T1C;
  _T1E = _T1D - 48;
  _T1F = _check_known_subscript_notnull(_T1A,75U,sizeof(char),_T1E);
  _T20 = (char *)_T1F;
  _T21 = *_T20;
  _T22 = (int)_T21;
  _T23 = base;
  if (_T22 >= _T23) { goto _TLA1;
  }
  { int carry;
    _TLA6: _T24 = _check_null(p);
    _T25 = *_T24;
    _T26 = (int)_T25;
    if (_T26) { goto _TLA8;
    }else { goto _TLA5;
    }
    _TLA8: _T27 = p;
    _T28 = *_T27;
    _T29 = (int)_T28;
    _T2A = isalnum(_T29);
    if (_T2A) { goto _TLA7;
    }else { goto _TLA5;
    }
    _TLA7: _T2B = Cyc_map;
    _T2C = p;
    _T2D = *_T2C;
    _T2E = (int)_T2D;
    _T2F = _T2E - 48;
    _T30 = _check_known_subscript_notnull(_T2B,75U,sizeof(char),_T2F);
    _T31 = (char *)_T30;
    _T32 = *_T31;
    _T33 = (int)_T32;
    _T34 = base;
    if (_T33 < _T34) { goto _TLA4;
    }else { goto _TLA5;
    }
    _TLA4: carry = Cyc_XP_product(n,z,z,base);
    _T35 = carry;
    if (! _T35) { goto _TLA9;
    }
    goto _TLA5;
    _TLA9: _T36 = n;
    _T37 = z;
    _T38 = z;
    _T39 = Cyc_map;
    _T3A = p;
    _T3B = *_T3A;
    _T3C = (int)_T3B;
    _T3D = _T3C - 48;
    _T3E = _check_known_subscript_notnull(_T39,75U,sizeof(char),_T3D);
    _T3F = (char *)_T3E;
    _T40 = *_T3F;
    _T41 = (int)_T40;
    Cyc_XP_sum(_T36,_T37,_T38,_T41);
    { const char * * _T45 = &p;
      _T42 = *_T45;
      _T43 = *_T42;
      if (_T43 == 0) { goto _TLAB;
      }
      *_T45 = *_T45 + 1;
      goto _TLAC;
      _TLAB: _throw_arraybounds();
      _TLAC: ;
    }goto _TLA6;
    _TLA5: _T44 = carry;
    return _T44;
  }_TLA1: return 0;
}
struct _fat_ptr Cyc_XP_tostr(struct _fat_ptr str,int size,int base,int n,
			     struct _fat_ptr x) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned int _T2;
  int (* _T3)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T4)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  int (* _T7)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T8)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  int (* _TB)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _TC)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  int _T10;
  int _T11;
  unsigned char * _T12;
  char * _T13;
  struct _fat_ptr _T14;
  int _T15;
  unsigned char * _T16;
  const char * _T17;
  unsigned int _T18;
  unsigned char * _T19;
  char * _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  unsigned char * _T1D;
  unsigned char * _T1E;
  unsigned char _T1F;
  int _T20;
  struct _fat_ptr _T21;
  unsigned char * _T22;
  unsigned char * _T23;
  unsigned char _T24;
  int _T25;
  int (* _T26)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T27)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  struct _fat_ptr _T2A;
  int _T2B;
  unsigned char * _T2C;
  char * _T2D;
  unsigned int _T2E;
  unsigned char * _T2F;
  char * _T30;
  int _T31;
  int _T32;
  struct _fat_ptr _T33;
  int _T34;
  unsigned char * _T35;
  char * _T36;
  struct _fat_ptr _T37;
  int _T38;
  unsigned char * _T39;
  char * _T3A;
  struct _fat_ptr _T3B;
  int _T3C;
  unsigned char * _T3D;
  char * _T3E;
  unsigned int _T3F;
  unsigned char * _T40;
  char * _T41;
  struct _fat_ptr _T42;
  int _T43;
  unsigned char * _T44;
  char * _T45;
  unsigned int _T46;
  unsigned char * _T47;
  char * _T48;
  struct _fat_ptr _T49;
  int i = 0;
  _T0 = str;
  _T1 = _T0.curr;
  _T2 = (unsigned int)_T1;
  if (! _T2) { goto _TLAD;
  }
  goto _TLAE;
  _TLAD: _T4 = Cyc___assert_fail;
  { int (* _T4A)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									  struct _fat_ptr,
									  unsigned int))_T4;
    _T3 = _T4A;
  }_T5 = _tag_fat("str",sizeof(char),4U);
  _T6 = _tag_fat("xp.cyc",sizeof(char),7U);
  _T3(_T5,_T6,270U);
  _TLAE: if (base < 2) { goto _TLAF;
  }
  if (base > 36) { goto _TLAF;
  }
  goto _TLB0;
  _TLAF: _T8 = Cyc___assert_fail;
  { int (* _T4A)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									  struct _fat_ptr,
									  unsigned int))_T8;
    _T7 = _T4A;
  }_T9 = _tag_fat("base >= 2 && base <= 36",sizeof(char),24U);
  _TA = _tag_fat("xp.cyc",sizeof(char),7U);
  _T7(_T9,_TA,271U);
  _TLB0: _TLB1: { int r = Cyc_XP_quotient(n,x,x,base);
    if (i >= size) { goto _TLB3;
    }
    goto _TLB4;
    _TLB3: _TC = Cyc___assert_fail;
    { int (* _T4A)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									    struct _fat_ptr,
									    unsigned int))_TC;
      _TB = _T4A;
    }_TD = _tag_fat("i < size",sizeof(char),9U);
    _TE = _tag_fat("xp.cyc",sizeof(char),7U);
    _TB(_TD,_TE,274U);
    _TLB4: _TF = str;
    _T10 = i;
    i = _T10 + 1;
    _T11 = _T10;
    { struct _fat_ptr _T4A = _fat_ptr_plus(_TF,sizeof(char),_T11);
      _T12 = _check_fat_subscript(_T4A,sizeof(char),0U);
      _T13 = (char *)_T12;
      { char _T4B = *_T13;
	_T14 = Cyc_digits;
	_T15 = r;
	_T16 = _check_fat_subscript(_T14,sizeof(char),_T15);
	_T17 = (const char *)_T16;
	{ char _T4C = *_T17;
	  _T18 = _get_fat_size(_T4A,sizeof(char));
	  if (_T18 != 1U) { goto _TLB5;
	  }
	  if (_T4B != 0) { goto _TLB5;
	  }
	  if (_T4C == 0) { goto _TLB5;
	  }
	  _throw_arraybounds();
	  goto _TLB6;
	  _TLB5: _TLB6: _T19 = _T4A.curr;
	  _T1A = (char *)_T19;
	  *_T1A = _T4C;
	}
      }
    }_TLB7: if (n > 1) { goto _TLBA;
    }else { goto _TLB9;
    }
    _TLBA: _T1B = x;
    _T1C = n - 1;
    _T1D = _check_fat_subscript(_T1B,sizeof(unsigned char),_T1C);
    _T1E = (unsigned char *)_T1D;
    _T1F = *_T1E;
    _T20 = (int)_T1F;
    if (_T20 == 0) { goto _TLB8;
    }else { goto _TLB9;
    }
    _TLB8: n = n + -1;
    goto _TLB7;
    _TLB9: ;
  }if (n > 1) { goto _TLB1;
  }else { goto _TLBB;
  }
  _TLBB: _T21 = x;
  _T22 = _check_fat_subscript(_T21,sizeof(unsigned char),0);
  _T23 = (unsigned char *)_T22;
  _T24 = *_T23;
  _T25 = (int)_T24;
  if (_T25 != 0) { goto _TLB1;
  }else { goto _TLB2;
  }
  _TLB2: if (i >= size) { goto _TLBC;
  }
  goto _TLBD;
  _TLBC: _T27 = Cyc___assert_fail;
  { int (* _T4A)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									  struct _fat_ptr,
									  unsigned int))_T27;
    _T26 = _T4A;
  }_T28 = _tag_fat("i < size",sizeof(char),9U);
  _T29 = _tag_fat("xp.cyc",sizeof(char),7U);
  _T26(_T28,_T29,279U);
  _TLBD: _T2A = str;
  _T2B = i;
  { struct _fat_ptr _T4A = _fat_ptr_plus(_T2A,sizeof(char),_T2B);
    _T2C = _check_fat_subscript(_T4A,sizeof(char),0U);
    _T2D = (char *)_T2C;
    { char _T4B = *_T2D;
      char _T4C = '\000';
      _T2E = _get_fat_size(_T4A,sizeof(char));
      if (_T2E != 1U) { goto _TLBE;
      }
      if (_T4B != 0) { goto _TLBE;
      }
      if (_T4C == 0) { goto _TLBE;
      }
      _throw_arraybounds();
      goto _TLBF;
      _TLBE: _TLBF: _T2F = _T4A.curr;
      _T30 = (char *)_T2F;
      *_T30 = _T4C;
    }
  }{ int j;
    j = 0;
    _TLC3: _T31 = j;
    i = i + -1;
    _T32 = i;
    if (_T31 < _T32) { goto _TLC1;
    }else { goto _TLC2;
    }
    _TLC1: _T33 = str;
    _T34 = j;
    _T35 = _check_fat_subscript(_T33,sizeof(char),_T34);
    _T36 = (char *)_T35;
    { char c = *_T36;
      _T37 = str;
      _T38 = j;
      { struct _fat_ptr _T4A = _fat_ptr_plus(_T37,sizeof(char),_T38);
	_T39 = _T4A.curr;
	_T3A = (char *)_T39;
	{ char _T4B = *_T3A;
	  _T3B = str;
	  _T3C = i;
	  _T3D = _check_fat_subscript(_T3B,sizeof(char),_T3C);
	  _T3E = (char *)_T3D;
	  { char _T4C = *_T3E;
	    _T3F = _get_fat_size(_T4A,sizeof(char));
	    if (_T3F != 1U) { goto _TLC4;
	    }
	    if (_T4B != 0) { goto _TLC4;
	    }
	    if (_T4C == 0) { goto _TLC4;
	    }
	    _throw_arraybounds();
	    goto _TLC5;
	    _TLC4: _TLC5: _T40 = _T4A.curr;
	    _T41 = (char *)_T40;
	    *_T41 = _T4C;
	  }
	}
      }_T42 = str;
      _T43 = i;
      { struct _fat_ptr _T4A = _fat_ptr_plus(_T42,sizeof(char),_T43);
	_T44 = _T4A.curr;
	_T45 = (char *)_T44;
	{ char _T4B = *_T45;
	  char _T4C = c;
	  _T46 = _get_fat_size(_T4A,sizeof(char));
	  if (_T46 != 1U) { goto _TLC6;
	  }
	  if (_T4B != 0) { goto _TLC6;
	  }
	  if (_T4C == 0) { goto _TLC6;
	  }
	  _throw_arraybounds();
	  goto _TLC7;
	  _TLC6: _TLC7: _T47 = _T4A.curr;
	  _T48 = (char *)_T47;
	  *_T48 = _T4C;
	}
      }
    }j = j + 1;
    goto _TLC3;
    _TLC2: ;
  }_T49 = str;
  return _T49;
}
