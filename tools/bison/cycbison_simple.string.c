#include <cyc_include.h>
static char _TmpG0[14840U] = "#line 1 \"cycbison.simple\"\n/* This is a (simple) skeleton parser engine for Cyclone, adapted from\n * GNU bison's bison.simple parser engine.  The copyright information for\n * GNU bison is below.\n */\n/* Skeleton output parser for bison,\n   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.\n\n   This program is free software; you can redistribute it and/or modify\n   it under the terms of the GNU General Public License as published by\n   the Free Software Foundation; either version 2, or (at your option)\n   any later version.\n\n   This program is distributed in the hope that it will be useful,\n   but WITHOUT ANY WARRANTY; without even the implied warranty of\n   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n   GNU General Public License for more details.\n\n   You should have received a copy of the GNU General Public License\n   along with this program; if not, write to the Free Software\n   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */\n\n/* As a special exception, when this file is copied by Bison into a\n   Bison output file, you may use that output file without restriction.\n   This special exception was added by the Free Software Foundation\n   in version 1.24 of Bison.  */\n\n/* This is the parser code that is written into each bison parser\n  when the %semantic_parser declaration is not specified in the grammar.\n  It was written by Richard Stallman by simplifying the hairy parser\n  used when %semantic_parser is specified.  */\n\n/* Note: there must be only one dollar sign in this file.\n   It is replaced by the list of actions, each action\n   as one case of the switch.  */\n\n/* JGM: I've cut out the stuff that allows for re-entrant parsers because\n * we need to do things slightly differently.  For example, yylex() should\n * return a tuple of the token code, the yylval, and the yylloc instead of\n * mutating global variables...\n */\n\n/* Dan: Do not define YYERROR_VERBOSE -- it has not been ported */\n\ndatatype exn {Yystack_overflow(int)}; // thrown if the parsing stack overflows\ndatatype exn.Yystack_overflow Yystack_overflow_val = Yystack_overflow(0);\n\n#define yyerrok\t\t(yyerrstatus = 0)\n#define yyclearin\t(yychar = YYEMPTY)\n#define YYEMPTY\t\t-2\n#define YYEOF\t\t0\n#define YYACCEPT\treturn(0)\n#define YYABORT \treturn(1)\n#define YYERROR\t\tthrow(Yyerror) \n#define YYFAIL\t\tthrow(Yyerror)\n#define YYRECOVERING()  (!!yyerrstatus)\n#define YYBACKUP(token, value) \\\ndo\t\t\t\t\t\t\t\t\\\n  if (yychar == YYEMPTY && yylen == 1)\t\t\t\t\\\n    { yychar = (token), yylval = (value);\t\t\t\\\n      yychar1 = YYTRANSLATE (yychar);\t\t\t\t\\\n      YYPOPSTACK;\t\t\t\t\t\t\\\n      goto yybackup;\t\t\t\t\t\t\\\n    }\t\t\t\t\t\t\t\t\\\n  else\t\t\t\t\t\t\t\t\\\n    { yyerror (\"syntax error: cannot back up\"); YYERROR; }\t\\\nwhile (0)\n\n#define YYTERROR\t1\n#define YYERRCODE\t256\n\n\nextern void yyerror(const char ?,int state,int token);\n\n/* The user can define YYLEX_PARAM_ARG for the prototype to yylex \n * and YYLEX_ARG for the actual argument to yylex -- typically\n * this will be some part of YYPARSE_PARAM_ARG.\n */\n#ifndef YYLEX_PARAM_ARG\n#define YYLEX_PARAM_ARG\n#define YYLEX_ARG\n#endif\nextern int yylex(YYLEX_PARAM_ARG);\n\n\n#ifndef YYPURE\n/*  the lookahead symbol */\nstatic int yychar = '\\000';       \n/* semantic value of lookahead symbol */\nunion YYSTYPE yylval = {.YYINITIALSVAL = 0};\n/*  number of parse errors so far */\nstatic int yynerrs = 0;\n#endif\n\n#if YYDEBUG\n bool yydebug = true;\t/*  nonzero means print parse trace\t*/\n/* Since this is uninitialized, it does not stop multiple parsers\n   from coexisting.  */\n#endif\n\n/*  YYINITDEPTH indicates the initial size of the parser's stacks\t*/\n\n#ifndef\tYYINITDEPTH\n#define YYINITDEPTH 200\n#endif\n\n/*  YYMAXDEPTH is the maximum size the stacks can grow to\n    (effective only if the built-in stack extension method is used).  */\n\n#if YYMAXDEPTH == 0\n#undef YYMAXDEPTH\n#endif\n\n#ifndef YYMAXDEPTH\n#define YYMAXDEPTH 10000\n#endif\n\n/*  sanity check */\n\n#if YYINITDEPTH > YYMAXDEPTH\n#undef YYINITDEPTH\n#define YYINITDEPTH YYMAXDEPTH\n#endif\n\n/* The user can define YYPARSE_PARAM as a set of arguments to be passed\n   into yyparse.  Grammar actions can access the variables.\n */\n#ifndef YYPARSE_PARAM_ARG\n#define YYPARSE_PARAM_ARG \n#endif\n\n#ifndef YYSTYPEVARS\n#define YYSTYPEVARS\n#endif\n\nstruct Yystacktype YYSTYPEVARS {\n  union YYSTYPE YYSTYPEVARS v;\n#ifdef YYLSP_NEEDED\n  YYLTYPE       l;\n#endif\n};\n\n/* If type variables (e.g., regions) are used with YYSTYPE this\n   will already be set.\n*/\nint yyparse(YYPARSE_PARAM_ARG)\n{\n  // the arrays are allocated in this region\nregion yyregion; {\n  int yystate;\n  int yyn=0;\n  int yyerrstatus;//  number of tokens to shift before error messages enabled \n  int yychar1 = 0;//  lookahead token as an internal (translated) token number \n#ifdef YYPURE\n  int yychar;\n  union YYSTYPE YYSTYPEVARS yylval = {.YYINITIALSVAL = 0};\n  int yynerrs;\n#ifdef YYLSP_NEEDED\n  YYLTYPE yylloc;\n#endif\n#endif\n\n  int yyssp_offset;\n  /*  the state stack     */\n  short ?yyss = rcalloc(yyregion, YYINITDEPTH, sizeof(short));\n  /*  the semantic value stack */\n  int yyvsp_offset;\n#ifdef YYLSP_NEEDED\n  struct Yystacktype ? yyvs = \n    rnew(yyregion) {for i < YYINITDEPTH : Yystacktype(yylval,yynewloc())}; \n#else\n  struct Yystacktype ? yyvs = \n    rnew(yyregion) {for i < YYINITDEPTH : Yystacktype(yylval)}; \n#endif\n  struct Yystacktype @{YYMAXRULELENGTH }yyyvsp;\n#define YYPOPSTACK   (yyvsp_offset--, yyssp_offset--)\n\n  int yystacksize = YYINITDEPTH;\n\n  union YYSTYPE yyval = yylval;/* the variable used to return\t\t*/\n\t\t\t\t/*  semantic values from the action\t*/\n\t\t\t\t/*  routines\t\t\t\t*/\n\n  int yylen;\n\n#if YYDEBUG != 0\n  if (yydebug) \n    fprintf(stderr,\"Starting parse\\n\");\n#endif\n\n  yystate = 0;\n  yyerrstatus = 0;\n  yynerrs = 0;\n  yychar = YYEMPTY;\t\t/* Cause a token to be read.  */\n\n  /* Initialize stack pointers.\n     Waste one element of value and location stack\n     so that they stay on the same level as the state stack.\n     The wasted elements are never initialized.  */\n\n  yyssp_offset = -1;\n  yyvsp_offset = 0;\n\n/* Push a new state, which is found in  yystate  .  */\n/* In all cases, when you get here, the value and location stacks\n   have just been pushed. so pushing a state here evens the stacks.  */\nyynewstate:\n\n  yyss[++yyssp_offset] = (short)yystate;\n\n  if (yyssp_offset >= (yystacksize-1) - YYMAXRULELENGTH) { \n    // grow the stacks\n    if (yystacksize >= YYMAXDEPTH) {\n      yyerror(\"parser stack overflow\",yystate,yychar);\n      throw &Yystack_overflow_val;\n    }\n    yystacksize *= 2;\n    if (yystacksize > YYMAXDEPTH)\n      yystacksize = YYMAXDEPTH;\n    short ?yyss1 = rnew(yyregion) {for i < yystacksize : \n\t\t\t\t   (i <= yyssp_offset ? yyss[i] : 0)};\n#ifdef YYLSP_NEEDED\n    struct Yystacktype ? yyvs1 = \n      rnew(yyregion) {for i < yystacksize :\n\t\t      (i <= yyssp_offset ? yyvs[i] : yyvs[0])};\n#else\n    struct Yystacktype ? yyvs1 = \n      rnew(yyregion) {for i < yystacksize : \n\t\t      (i <= yyssp_offset ? yyvs[i] : yyvs[0])};\n#endif\n    yyss = yyss1;\n    yyvs = yyvs1;\n  }\n    \n#if YYDEBUG != 0\n  if (yydebug) {\n    fprintf(stderr,\"Entering state %d\\n\",yystate);\n  }\n#endif\n\n  goto yybackup;\n\nyybackup:\n\n  //#ifdef YYLSP_NEEDED\n  //  yylloc = yycopyloc(yylloc);\n  //#endif\n\n/* Do appropriate processing given the current state.  */\n/* Read a lookahead token if we need one and don't already have one.  */\n/* yyresume: */\n\n  /* First try to decide what to do without reference to lookahead token.  */\n\n  yyn = yypact[yystate];\n  if (yyn == YYFLAG) goto yydefault;\n\n  /* Not known => get a lookahead token if don't already have one.  */\n\n  /* yychar is either YYEMPTY or YYEOF\n     or a valid token in external form.  */\n  if (yychar == YYEMPTY)\n    {\n#if YYDEBUG != 0\n      if (yydebug)\n\tfprintf(stderr,\"Reading a token: \");\n#endif\n      yychar = yylex(YYLEX_ARG);\n    }\n\n  /* Convert token to internal form (in yychar1) for indexing tables with */\n  if (yychar <= 0)\t\t/* This means end of input. */\n    {\n      yychar1 = 0;\n      yychar = YYEOF;\t\t/* Don't call YYLEX any more */\n#if YYDEBUG != 0\n      if (yydebug)\n\tfprintf(stderr,\"Now at end of input.\\n\");\n#endif\n    }\n  else\n    {\n      yychar1 = YYTRANSLATE(yychar);\n\n#if YYDEBUG != 0\n      if (yydebug)\n\t{\n\t  fprintf(stderr,\"Next token is %d (%s\",yychar,yytname[yychar1]);\n\t  /* Give the individual parser a way to print the precise meaning\n\t     of a token, for further debugging info.  */\n\n#ifdef YYPRINT\n\t  YYPRINT (yychar, yylval);\n#endif\n\t  fprintf(stderr,\")\\n\");\n\t}\n#endif\n    }\n\n  yyn += yychar1;\n  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1) goto yydefault;\n\n  yyn = yytable[yyn];\n  /* yyn is what to do for this token type in this state.\n     Negative => reduce, -yyn is rule number.\n     Positive => shift, yyn is new state.\n       New state is final state => don't bother to shift,\n       just return success.\n     0, or most negative number => error.  */\n  if (yyn < 0)\n    {\n      if (yyn == YYFLAG) goto yyerrlab;\n      yyn = -yyn;\n      goto yyreduce;\n    }\n  else if (yyn == 0) goto yyerrlab;\n\n  if (yyn == YYFINAL)\n    YYACCEPT;\n\n  /* Shift the lookahead token.  */\n\n#if YYDEBUG != 0\n  if (yydebug)\n    fprintf(stderr,\"Shifting token %d (%s), \",yychar,yytname[yychar1]);\n#endif\n\n  /* Discard the token being shifted unless it is eof.  */\n  if (yychar != YYEOF)\n    yychar = YYEMPTY;\n\n#ifdef YYLSP_NEEDED\n  yyvs[++yyvsp_offset] = Yystacktype(yylval,yylloc);\n#else  \n  yyvs[++yyvsp_offset] = Yystacktype(yylval);\n#endif\n\n  /* count tokens shifted since error; after three, turn off error status.  */\n  if (yyerrstatus != 0) yyerrstatus--;\n\n  yystate = yyn;\n  goto yynewstate;\n\n/* Do the default action for the current state.  */\nyydefault:\n\n  yyn = yydefact[yystate];\n  if (yyn == 0) goto yyerrlab;\n  // fallthru to yyreduce\n\n/* Do a reduction.  yyn is the number of a rule to reduce with.  */\nyyreduce:\n\n  yylen = yyr2[yyn];\n  yyyvsp=(_@{YYMAXRULELENGTH})(yyvs + (yyvsp_offset + 1 - yylen));\n  if (yylen > 0)\n    yyval = yyyvsp[0].v; /* implement default value of the action */\n#if YYDEBUG != 0\n  if (yydebug)\n    {\n      int i;\n\n      fprintf(stderr,\"Reducing via rule %d (line %d), \",yyn,yyrline[yyn]);\n      /* Print the symbols being reduced, and their result.  */\n      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)\n\tfprintf(stderr,\"%s \",yytname[yyrhs[i]]);\n      fprintf(stderr,\" -> %s\\n\",yytname[yyr1[yyn]]);\n    }\n#endif\n$    /* the action file gets copied in place of this dollarsign */\n default: break;\n  }\n\f\n#line 375 \"cycbison.simple\"\n  yyvsp_offset -= yylen;\n  yyssp_offset -= yylen;\n\n#if YYDEBUG != 0\n  if (yydebug)\n    {\n      int ssp1 = -1;\n      fprintf(stderr,\"state stack now\");\n      while (ssp1 != yyssp_offset)\n\tfprintf(stderr,\" %d\",yyss[++ssp1]);\n      fprintf(stderr,\"\\n\");\n    }\n#endif\n\n  yyvs[++yyvsp_offset].v = yyval;\n\n#ifdef YYLSP_NEEDED\n  if (yylen == 0) {\n    _ @{2} p = (_ @{2})(yyvs + (yyvsp_offset - 1));\n    p[1].l.first_line   = yylloc.first_line;\n    p[1].l.first_column = yylloc.first_column;\n    p[1].l.last_line    = p[0].l.last_line; \n    p[1].l.last_column  = p[0].l.last_column;  \n  } else {\n    yyvs[yyvsp_offset].l.last_line   =yyvs[yyvsp_offset+yylen-1].l.last_line; \n    yyvs[yyvsp_offset].l.last_column =yyvs[yyvsp_offset+yylen-1].l.last_column;\n  }\n#endif\n\n  /* Now \"shift\" the result of the reduction.\n     Determine what state that goes to,\n     based on the state we popped back to\n     and the rule number reduced by.  */\n\n  yyn = yyr1[yyn];\n\n  yystate = yypgoto[yyn - YYNTBASE] + yyss[yyssp_offset];\n  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == yyss[yyssp_offset])\n    yystate = yytable[yystate];\n  else\n    yystate = yydefgoto[yyn - YYNTBASE];\n\n  goto yynewstate;\n\nyyerrlab:   /* here on detecting error */\n\n  if (yyerrstatus == 0)\n    /* If not already recovering from an error, report this error.  */\n    {\n      ++yynerrs;\n\n#ifdef YYERROR_VERBOSE\n      yyn = yypact[yystate];\n\n      if (yyn > YYFLAG && yyn < YYLAST)\n\t{\n\t  int sze = 0;\n\t  mstring_t msg;\n\t  int x, count;\n\n\t  count = 0;\n\t  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */\n\t  for (x = (yyn < 0 ? -yyn : 0);\n\t       x < (numelts(yytname) / sizeof(char *)); x++)\n\t    if (yycheck[x + yyn] == x)\n\t      sze += strlen(yytname[x]) + 15, count++;\n\t  msg = rnew(yyregion) {for i < sze + 15 : '\\000'};\n\t  strcpy(msg, \"parse error\");\n\n\t  if (count < 5)\n\t    {\n\t      count = 0;\n\t      for (x = (yyn < 0 ? -yyn : 0);\n\t\t   x < (numelts(yytname) / sizeof(char *)); x++)\n\t\tif (yycheck[x + yyn] == x)\n\t\t  { /* JGM: NB -- casts are needed here.  Sigh. */\n\t\t    strcat(msg, count == 0 ? \n                                 ((string_t)\", expecting `\") : \n\t\t\t          (string_t)(\" or `\"));\n\t\t    strcat(msg, yytname[x]);\n\t\t    strcat(msg, \"'\");\n\t\t    count++;\n\t\t  }\n\t    }\n\t  yyerror(msg,yystate,yychar);\n\t}\n      else \n#endif /* YYERROR_VERBOSE */\n\tyyerror(\"parse error\",yystate,yychar);\n    }\n  goto yyerrlab1;\n\nyyerrlab1:   /* here on error raised explicitly by an action */\n\n  if (yyerrstatus == 3)\n    {\n      /* if just tried and failed to reuse lookahead token after an error, discard it.  */\n\n      /* return failure if at end of input */\n      if (yychar == YYEOF)\n\tYYABORT;\n\n#if YYDEBUG != 0\n      if (yydebug) \n\tfprintf(stderr,\"Discarding token %d (%s).\\n\",\n\t\tyychar,yytname[yychar1]);\n#endif\n\n      yychar = YYEMPTY;\n    }\n\n  /* Else will try to reuse lookahead token\n     after shifting the error token.  */\n\n  yyerrstatus = 3;\t\t/* Each real token shifted decrements this */\n\n  goto yyerrhandle;\n\nyyerrdefault:  /* current state does not do anything special for the error token. */\n\n#if 0\n  /* This is wrong; only states that explicitly want error tokens\n     should shift them.  */\n  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/\n  if (yyn) goto yydefault;\n#endif\n  // fallthru to yyerrpop\n\nyyerrpop:   /* pop the current state because it cannot handle the error token */\n\n  if (yyssp_offset == 0) YYABORT;\n  yyvsp_offset--;\n  yystate = yyss[--yyssp_offset];\n\n#if YYDEBUG != 0\n  if (yydebug)\n    {\n      short ssp1_offset = -1;\n      fprintf(stderr,\"Error: state stack now\");\n      while (ssp1_offset != yyssp_offset)\n\tfprintf(stderr,\" %d\",yyss[++ssp1_offset]);\n      fprintf(stderr,\"\\n\");\n    }\n#endif\n  // falthru to yyerrhandle\n\nyyerrhandle:\n  yyn = yypact[yystate];\n  if (yyn == YYFLAG) goto yyerrdefault;\n\n  yyn += YYTERROR;\n  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR) goto yyerrdefault;\n\n  yyn = yytable[yyn];\n  if (yyn < 0)\n    {\n      if (yyn == YYFLAG) goto yyerrpop;\n      yyn = -yyn;\n      goto yyreduce;\n    }\n  else if (yyn == 0) goto yyerrpop;\n\n  if (yyn == YYFINAL)\n    YYACCEPT;\n\n#if YYDEBUG != 0\n  if (yydebug)\n    fprintf(stderr,\"Shifting error token, \");\n#endif\n\n#ifdef YYLSP_NEEDED\n  yyvs[++yyvsp_offset] = Yystacktype(yylval,yylloc);\n#else\n  yyvs[++yyvsp_offset] = Yystacktype(yylval);\n#endif\n\n  goto yynewstate;\n} /* end of region yyregion */\n}\n";
struct _fat_ptr Cyc_cycbison_simple = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
				       (unsigned char *)_TmpG0 + 14840U};
