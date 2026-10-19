/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser-fixed.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

extern FILE *yyin;
extern int yylineno;
int yylex(void);
int yylex_destroy(void);
void yyerror(const char *message);

#line 84 "parser-fixed.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser-fixed.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENFR = 3,                     /* IDENFR  */
  YYSYMBOL_INTCON = 4,                     /* INTCON  */
  YYSYMBOL_STRCON = 5,                     /* STRCON  */
  YYSYMBOL_MAINTK = 6,                     /* MAINTK  */
  YYSYMBOL_CONSTTK = 7,                    /* CONSTTK  */
  YYSYMBOL_INTTK = 8,                      /* INTTK  */
  YYSYMBOL_BREAKTK = 9,                    /* BREAKTK  */
  YYSYMBOL_CONTINUETK = 10,                /* CONTINUETK  */
  YYSYMBOL_IFTK = 11,                      /* IFTK  */
  YYSYMBOL_ELSETK = 12,                    /* ELSETK  */
  YYSYMBOL_NOT = 13,                       /* NOT  */
  YYSYMBOL_AND = 14,                       /* AND  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_WHILETK = 16,                   /* WHILETK  */
  YYSYMBOL_GETINTTK = 17,                  /* GETINTTK  */
  YYSYMBOL_PRINTFTK = 18,                  /* PRINTFTK  */
  YYSYMBOL_RETURNTK = 19,                  /* RETURNTK  */
  YYSYMBOL_PLUS = 20,                      /* PLUS  */
  YYSYMBOL_MINU = 21,                      /* MINU  */
  YYSYMBOL_VOIDTK = 22,                    /* VOIDTK  */
  YYSYMBOL_MULT = 23,                      /* MULT  */
  YYSYMBOL_DIV = 24,                       /* DIV  */
  YYSYMBOL_MOD = 25,                       /* MOD  */
  YYSYMBOL_LSS = 26,                       /* LSS  */
  YYSYMBOL_LEQ = 27,                       /* LEQ  */
  YYSYMBOL_GRE = 28,                       /* GRE  */
  YYSYMBOL_GEQ = 29,                       /* GEQ  */
  YYSYMBOL_EQL = 30,                       /* EQL  */
  YYSYMBOL_NEQ = 31,                       /* NEQ  */
  YYSYMBOL_ASSIGN = 32,                    /* ASSIGN  */
  YYSYMBOL_SEMICN = 33,                    /* SEMICN  */
  YYSYMBOL_COMMA = 34,                     /* COMMA  */
  YYSYMBOL_LPARENT = 35,                   /* LPARENT  */
  YYSYMBOL_RPARENT = 36,                   /* RPARENT  */
  YYSYMBOL_LBRACK = 37,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 38,                    /* RBRACK  */
  YYSYMBOL_LBRACE = 39,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 40,                    /* RBRACE  */
  YYSYMBOL_IF_WITHOUT_ELSE = 41,           /* IF_WITHOUT_ELSE  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_CompUnit = 43,                  /* CompUnit  */
  YYSYMBOL_DeclAndFuncPart = 44,           /* DeclAndFuncPart  */
  YYSYMBOL_FuncAndMainPart = 45,           /* FuncAndMainPart  */
  YYSYMBOL_Decl = 46,                      /* Decl  */
  YYSYMBOL_FuncDef = 47,                   /* FuncDef  */
  YYSYMBOL_OptionalFuncFParams = 48,       /* OptionalFuncFParams  */
  YYSYMBOL_MainFuncDef = 49,               /* MainFuncDef  */
  YYSYMBOL_ConstDecl = 50,                 /* ConstDecl  */
  YYSYMBOL_ConstDefList = 51,              /* ConstDefList  */
  YYSYMBOL_VarDecl = 52,                   /* VarDecl  */
  YYSYMBOL_VarDefList = 53,                /* VarDefList  */
  YYSYMBOL_Ident = 54,                     /* Ident  */
  YYSYMBOL_FuncFParams = 55,               /* FuncFParams  */
  YYSYMBOL_FuncFParamList = 56,            /* FuncFParamList  */
  YYSYMBOL_Block = 57,                     /* Block  */
  YYSYMBOL_BlockItemList = 58,             /* BlockItemList  */
  YYSYMBOL_BType = 59,                     /* BType  */
  YYSYMBOL_VarDef = 60,                    /* VarDef  */
  YYSYMBOL_FuncFParam = 61,                /* FuncFParam  */
  YYSYMBOL_OptionalParamArray = 62,        /* OptionalParamArray  */
  YYSYMBOL_BlockItem = 63,                 /* BlockItem  */
  YYSYMBOL_ConstExp = 64,                  /* ConstExp  */
  YYSYMBOL_InitVal = 65,                   /* InitVal  */
  YYSYMBOL_OptionalInitVal = 66,           /* OptionalInitVal  */
  YYSYMBOL_InitValList = 67,               /* InitValList  */
  YYSYMBOL_Stmt = 68,                      /* Stmt  */
  YYSYMBOL_OptionalExp = 69,               /* OptionalExp  */
  YYSYMBOL_OptionalElseStmt = 70,          /* OptionalElseStmt  */
  YYSYMBOL_CommaExpList = 71,              /* CommaExpList  */
  YYSYMBOL_AddExp = 72,                    /* AddExp  */
  YYSYMBOL_Exp = 73,                       /* Exp  */
  YYSYMBOL_LVal = 74,                      /* LVal  */
  YYSYMBOL_BrackExpList = 75,              /* BrackExpList  */
  YYSYMBOL_Cond = 76,                      /* Cond  */
  YYSYMBOL_FormatString = 77,              /* FormatString  */
  YYSYMBOL_MulExp = 78,                    /* MulExp  */
  YYSYMBOL_LOrExp = 79,                    /* LOrExp  */
  YYSYMBOL_LAndExp = 80,                   /* LAndExp  */
  YYSYMBOL_EqExp = 81,                     /* EqExp  */
  YYSYMBOL_UnaryExp = 82,                  /* UnaryExp  */
  YYSYMBOL_OptionalFuncRParams = 83,       /* OptionalFuncRParams  */
  YYSYMBOL_RelExp = 84,                    /* RelExp  */
  YYSYMBOL_PrimaryExp = 85,                /* PrimaryExp  */
  YYSYMBOL_FuncRParams = 86,               /* FuncRParams  */
  YYSYMBOL_Number = 87,                    /* Number  */
  YYSYMBOL_IntConst = 88,                  /* IntConst  */
  YYSYMBOL_UnaryOp = 89,                   /* UnaryOp  */
  YYSYMBOL_ConstInitVal = 90,              /* ConstInitVal  */
  YYSYMBOL_OptionalConstInitVal = 91,      /* OptionalConstInitVal  */
  YYSYMBOL_CommaConstInitValList = 92,     /* CommaConstInitValList  */
  YYSYMBOL_ConstDef = 93,                  /* ConstDef  */
  YYSYMBOL_BrackConstExpList = 94          /* BrackConstExpList  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 24 "parser-fixed.y"

    static SyntaxNode *make_node(const char *label, int count, ...);
    static SyntaxNode *syntax_root = NULL;

#line 218 "parser-fixed.tab.c"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    56,    58,    63,    65,    71,    73,    79,
      81,    86,    88,    94,   100,   105,   107,   113,   118,   120,
     131,   137,   143,   145,   151,   156,   158,   164,   170,   172,
     179,   184,   186,   192,   194,   200,   206,   208,   213,   215,
     220,   222,   228,   230,   232,   234,   236,   238,   240,   242,
     244,   246,   251,   253,   258,   260,   265,   267,   273,   275,
     277,   283,   289,   294,   296,   302,   308,   314,   316,   318,
     320,   326,   328,   334,   336,   342,   344,   346,   352,   354,
     356,   361,   363,   369,   371,   373,   375,   377,   383,   385,
     387,   393,   399,   405,   411,   413,   415,   421,   423,   428,
     430,   435,   437,   443,   445,   450,   452
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "IDENFR", "INTCON", "STRCON",
  "MAINTK", "CONSTTK", "INTTK", "BREAKTK", "CONTINUETK", "IFTK", "ELSETK",
  "NOT", "AND", "OR", "WHILETK", "GETINTTK", "PRINTFTK", "RETURNTK",
  "PLUS", "MINU", "VOIDTK", "MULT", "DIV", "MOD", "LSS", "LEQ", "GRE",
  "GEQ", "EQL", "NEQ", "ASSIGN", "SEMICN", "COMMA", "LPARENT", "RPARENT",
  "LBRACK", "RBRACK", "LBRACE", "RBRACE", "IF_WITHOUT_ELSE", "$accept",
  "CompUnit", "DeclAndFuncPart", "FuncAndMainPart", "Decl", "FuncDef",
  "OptionalFuncFParams", "MainFuncDef", "ConstDecl", "ConstDefList",
  "VarDecl", "VarDefList", "Ident", "FuncFParams", "FuncFParamList",
  "Block", "BlockItemList", "BType", "VarDef", "FuncFParam",
  "OptionalParamArray", "BlockItem", "ConstExp", "InitVal",
  "OptionalInitVal", "InitValList", "Stmt", "OptionalExp",
  "OptionalElseStmt", "CommaExpList", "AddExp", "Exp", "LVal",
  "BrackExpList", "Cond", "FormatString", "MulExp", "LOrExp", "LAndExp",
  "EqExp", "UnaryExp", "OptionalFuncRParams", "RelExp", "PrimaryExp",
  "FuncRParams", "Number", "IntConst", "UnaryOp", "ConstInitVal",
  "OptionalConstInitVal", "CommaConstInitValList", "ConstDef",
  "BrackConstExpList", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,     3,    18,    40,    48,  -150,  -150,    15,    13,  -150,
    -150,  -150,    40,  -150,    40,    29,  -150,    58,  -150,  -150,
    -150,    40,    -1,    63,  -150,    28,  -150,  -150,    16,     3,
      63,  -150,    40,     3,     2,  -150,    40,     9,    60,    67,
    -150,    73,    40,  -150,  -150,  -150,    72,     5,   151,  -150,
     128,  -150,  -150,    60,     3,    74,    60,  -150,  -150,  -150,
    -150,   151,     5,    87,  -150,    68,  -150,  -150,    49,  -150,
    -150,  -150,  -150,   151,    71,    68,   128,  -150,  -150,    47,
    -150,  -150,    86,  -150,  -150,    93,  -150,    94,   151,   102,
     151,   151,   151,   151,   151,  -150,  -150,  -150,   100,   109,
     112,   111,   115,   116,   151,  -150,  -150,  -150,    40,  -150,
    -150,   114,  -150,   126,  -150,  -150,   125,  -150,  -150,   129,
    -150,   151,    49,    49,  -150,  -150,  -150,   132,  -150,  -150,
    -150,   151,   151,   157,   135,  -150,   140,   133,     5,   139,
    -150,   131,   128,    68,   138,   161,   163,    39,    50,   142,
    -150,  -150,  -150,   144,   147,  -150,   151,  -150,  -150,   117,
     151,   151,   151,   151,   151,   151,   151,   151,   117,    11,
     145,  -150,  -150,   170,   163,    39,    50,    50,    68,    68,
      68,    68,  -150,   150,   152,   117,  -150,  -150,  -150,  -150
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    27,     0,     0,     2,     4,     0,     0,     6,
       7,     8,     0,    27,     0,     0,    20,     0,     1,     3,
       5,     0,     0,   105,    18,     0,   105,    15,     0,    11,
       0,    17,     0,    11,    28,    14,     0,   103,     0,     0,
      12,    21,     0,    22,   105,    19,     0,     0,     0,    16,
       0,    25,    13,     0,     0,    31,     0,    93,    96,    94,
      95,     0,    38,    63,    29,    61,    36,    89,    58,    67,
      78,    90,    92,     0,     0,    35,    99,    97,   104,    52,
      10,    23,     0,    30,     9,     0,    40,     0,    81,    62,
       0,     0,     0,     0,     0,    80,   106,   101,     0,     0,
       0,     0,     0,     0,    52,    24,    33,    44,     0,    26,
      34,     0,    53,    89,   105,    88,    39,    37,    56,     0,
      82,     0,    59,    60,    68,    69,    70,   100,    98,    47,
      48,     0,     0,     0,     0,    43,     0,    32,     0,    91,
      79,     0,     0,    83,     0,    65,    71,    73,    75,     0,
      66,    56,    49,     0,     0,    41,     0,    64,   102,    52,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    42,    57,    54,    72,    74,    76,    77,    84,    86,
      85,    87,    46,     0,     0,    52,    45,    51,    50,    55
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,   177,   179,   110,  -150,   155,  -150,  -150,  -150,
    -150,  -150,    17,  -150,  -150,   -26,  -150,     6,   158,   137,
    -150,  -150,   146,   -58,  -150,  -150,  -149,    88,  -150,    42,
     -48,   -46,   -62,  -150,    64,  -150,    14,  -150,    35,    36,
       8,  -150,   -67,  -150,  -150,  -150,  -150,  -150,   -71,  -150,
    -150,   162,   -23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,    39,     9,    10,    25,
      11,    22,    63,    40,    41,   107,    79,    42,    24,    43,
      83,   109,    77,    64,    87,   116,   110,   111,   186,   139,
      65,   112,    67,    89,   144,   151,    68,   145,   146,   147,
      69,   119,   148,    70,   120,    71,    72,    73,    78,    98,
     127,    27,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      75,    66,    75,    37,    86,    97,    12,    14,    16,    57,
     173,    13,    52,    12,    21,    85,    66,   113,    58,   182,
      17,     2,     1,     2,    15,    59,    60,    80,    75,    23,
      84,    26,    31,    32,    47,     3,   189,     3,    30,    48,
      61,    50,   118,    16,    62,   156,    48,   183,    18,    44,
      16,    57,    38,    26,     1,    13,    99,   100,   101,    55,
      58,    35,    36,   102,    28,   103,   104,    59,    60,   162,
     163,   158,    92,    93,    94,   141,   164,   165,   166,   167,
     155,    95,    61,   143,   143,   108,    51,   105,    90,    91,
     154,   137,    66,    29,    75,   176,   177,   113,    33,    51,
     124,   125,   126,    53,   122,   123,   113,    54,    56,    96,
     172,    82,   143,   143,   143,   143,   178,   179,   180,   181,
      16,    57,    88,   113,   114,    44,    99,   100,   101,   115,
      58,    16,    57,   102,   117,   103,   104,    59,    60,   121,
     128,    58,   129,    16,    57,   130,   131,   135,    59,    60,
     132,   133,    61,    58,    16,    57,    51,   153,   136,   138,
      59,    60,   150,    61,    58,   140,   142,    76,   152,   157,
      48,    59,    60,   156,   159,    61,   160,   161,   168,   170,
     171,   184,   185,   187,    19,   188,    61,    20,    46,   106,
      45,    81,   134,   169,    74,   174,   149,   175,    49
};

static const yytype_uint8 yycheck[] =
{
      48,    47,    50,    26,    62,    76,     0,     1,     3,     4,
     159,     8,    38,     7,     8,    61,    62,    79,    13,   168,
       3,     8,     7,     8,     6,    20,    21,    53,    76,    12,
      56,    14,    33,    34,    32,    22,   185,    22,    21,    37,
      35,    32,    88,     3,    39,    34,    37,    36,     0,    32,
       3,     4,    36,    36,     7,     8,     9,    10,    11,    42,
      13,    33,    34,    16,    35,    18,    19,    20,    21,    30,
      31,   142,    23,    24,    25,   121,    26,    27,    28,    29,
     138,    73,    35,   131,   132,    79,    39,    40,    20,    21,
     136,   114,   138,    35,   142,   162,   163,   159,    35,    39,
      92,    93,    94,    36,    90,    91,   168,    34,    36,    38,
     156,    37,   160,   161,   162,   163,   164,   165,   166,   167,
       3,     4,    35,   185,    38,   108,     9,    10,    11,    36,
      13,     3,     4,    16,    40,    18,    19,    20,    21,    37,
      40,    13,    33,     3,     4,    33,    35,    33,    20,    21,
      35,    35,    35,    13,     3,     4,    39,    17,    32,    34,
      20,    21,     5,    35,    13,    36,    34,    39,    33,    38,
      37,    20,    21,    34,    36,    35,    15,    14,    36,    35,
      33,    36,    12,    33,     7,    33,    35,     8,    33,    79,
      32,    54,   104,   151,    48,   160,   132,   161,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,    22,    43,    44,    45,    46,    47,    49,
      50,    52,    59,     8,    59,     6,     3,    54,     0,    44,
      45,    59,    53,    54,    60,    51,    54,    93,    35,    35,
      54,    33,    34,    35,    94,    33,    34,    94,    36,    48,
      55,    56,    59,    61,    54,    60,    48,    32,    37,    93,
      32,    39,    57,    36,    34,    54,    36,     4,    13,    20,
      21,    35,    39,    54,    65,    72,    73,    74,    78,    82,
      85,    87,    88,    89,    64,    72,    39,    64,    90,    58,
      57,    61,    37,    62,    57,    73,    65,    66,    35,    75,
      20,    21,    23,    24,    25,    82,    38,    90,    91,     9,
      10,    11,    16,    18,    19,    40,    46,    57,    59,    63,
      68,    69,    73,    74,    38,    36,    67,    40,    73,    83,
      86,    37,    78,    78,    82,    82,    82,    92,    40,    33,
      33,    35,    35,    35,    69,    33,    32,    94,    34,    71,
      36,    73,    34,    72,    76,    79,    80,    81,    84,    76,
       5,    77,    33,    17,    73,    65,    34,    38,    90,    36,
      15,    14,    30,    31,    26,    27,    28,    29,    36,    71,
      35,    33,    73,    68,    80,    81,    84,    84,    72,    72,
      72,    72,    68,    36,    36,    12,    70,    33,    33,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      47,    48,    48,    49,    50,    51,    51,    52,    53,    53,
      54,    55,    56,    56,    57,    58,    58,    59,    60,    60,
      61,    62,    62,    63,    63,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    73,    74,    75,    75,    76,    77,    78,    78,    78,
      78,    79,    79,    80,    80,    81,    81,    81,    82,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    85,    85,
      85,    86,    87,    88,    89,    89,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     1,     6,
       6,     0,     1,     5,     4,     1,     3,     3,     1,     3,
       1,     1,     1,     3,     3,     0,     2,     1,     2,     4,
       3,     0,     3,     1,     1,     1,     1,     3,     0,     2,
       0,     3,     4,     2,     1,     6,     5,     2,     2,     3,
       6,     6,     0,     1,     0,     2,     0,     3,     1,     3,
       3,     1,     2,     0,     4,     1,     1,     1,     3,     3,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     4,
       2,     0,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     0,
       2,     0,     3,     2,     4,     0,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif



static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* CompUnit: DeclAndFuncPart  */
#line 52 "parser-fixed.y"
      { yyval = make_node("CompUnit", 1, yyvsp[0]); syntax_root = yyval; }
#line 1528 "parser-fixed.tab.c"
    break;

  case 3: /* DeclAndFuncPart: Decl DeclAndFuncPart  */
#line 57 "parser-fixed.y"
      { yyval = make_node(NULL, 2, yyvsp[-1], yyvsp[0]); }
#line 1534 "parser-fixed.tab.c"
    break;

  case 4: /* DeclAndFuncPart: FuncAndMainPart  */
#line 59 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1540 "parser-fixed.tab.c"
    break;

  case 5: /* FuncAndMainPart: FuncDef FuncAndMainPart  */
#line 64 "parser-fixed.y"
      { yyval = make_node(NULL, 2, yyvsp[-1], yyvsp[0]); }
#line 1546 "parser-fixed.tab.c"
    break;

  case 6: /* FuncAndMainPart: MainFuncDef  */
#line 66 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1552 "parser-fixed.tab.c"
    break;

  case 7: /* Decl: ConstDecl  */
#line 72 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1558 "parser-fixed.tab.c"
    break;

  case 8: /* Decl: VarDecl  */
#line 74 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1564 "parser-fixed.tab.c"
    break;

  case 9: /* FuncDef: BType Ident LPARENT OptionalFuncFParams RPARENT Block  */
#line 80 "parser-fixed.y"
      { yyval = make_node("FuncDef", 6, make_node("FuncType", 1, yyvsp[-5]), yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1570 "parser-fixed.tab.c"
    break;

  case 10: /* FuncDef: VOIDTK Ident LPARENT OptionalFuncFParams RPARENT Block  */
#line 82 "parser-fixed.y"
      { yyval = make_node("FuncDef", 6, make_node("FuncType", 1, yyvsp[-5]), yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1576 "parser-fixed.tab.c"
    break;

  case 11: /* OptionalFuncFParams: %empty  */
#line 87 "parser-fixed.y"
      { yyval = NULL; }
#line 1582 "parser-fixed.tab.c"
    break;

  case 12: /* OptionalFuncFParams: FuncFParams  */
#line 89 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1588 "parser-fixed.tab.c"
    break;

  case 13: /* MainFuncDef: INTTK MAINTK LPARENT RPARENT Block  */
#line 95 "parser-fixed.y"
      { yyval = make_node("MainFuncDef", 5, yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1594 "parser-fixed.tab.c"
    break;

  case 14: /* ConstDecl: CONSTTK BType ConstDefList SEMICN  */
#line 101 "parser-fixed.y"
      { yyval = make_node("ConstDecl", 4, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1600 "parser-fixed.tab.c"
    break;

  case 15: /* ConstDefList: ConstDef  */
#line 106 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1606 "parser-fixed.tab.c"
    break;

  case 16: /* ConstDefList: ConstDefList COMMA ConstDef  */
#line 108 "parser-fixed.y"
      { yyval = make_node(NULL, 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1612 "parser-fixed.tab.c"
    break;

  case 17: /* VarDecl: BType VarDefList SEMICN  */
#line 114 "parser-fixed.y"
      { yyval = make_node("VarDecl", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1618 "parser-fixed.tab.c"
    break;

  case 18: /* VarDefList: VarDef  */
#line 119 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1624 "parser-fixed.tab.c"
    break;

  case 19: /* VarDefList: VarDefList COMMA VarDef  */
#line 121 "parser-fixed.y"
      { yyval = make_node(NULL, 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1630 "parser-fixed.tab.c"
    break;

  case 20: /* Ident: IDENFR  */
#line 132 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1636 "parser-fixed.tab.c"
    break;

  case 21: /* FuncFParams: FuncFParamList  */
#line 138 "parser-fixed.y"
      { yyval = make_node("FuncFParams", 1, yyvsp[0]); }
#line 1642 "parser-fixed.tab.c"
    break;

  case 22: /* FuncFParamList: FuncFParam  */
#line 144 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1648 "parser-fixed.tab.c"
    break;

  case 23: /* FuncFParamList: FuncFParamList COMMA FuncFParam  */
#line 146 "parser-fixed.y"
      { yyval = make_node(NULL, 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1654 "parser-fixed.tab.c"
    break;

  case 24: /* Block: LBRACE BlockItemList RBRACE  */
#line 152 "parser-fixed.y"
      { yyval = make_node("Block", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1660 "parser-fixed.tab.c"
    break;

  case 25: /* BlockItemList: %empty  */
#line 157 "parser-fixed.y"
      { yyval = NULL; }
#line 1666 "parser-fixed.tab.c"
    break;

  case 26: /* BlockItemList: BlockItemList BlockItem  */
#line 159 "parser-fixed.y"
      { yyval = make_node(NULL, 2, yyvsp[-1], yyvsp[0]); }
#line 1672 "parser-fixed.tab.c"
    break;

  case 27: /* BType: INTTK  */
#line 165 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1678 "parser-fixed.tab.c"
    break;

  case 28: /* VarDef: Ident BrackConstExpList  */
#line 171 "parser-fixed.y"
      { yyval = make_node("VarDef", 2, yyvsp[-1], yyvsp[0]); }
#line 1684 "parser-fixed.tab.c"
    break;

  case 29: /* VarDef: Ident BrackConstExpList ASSIGN InitVal  */
#line 173 "parser-fixed.y"
      { yyval = make_node("VarDef", 4, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1690 "parser-fixed.tab.c"
    break;

  case 30: /* FuncFParam: BType Ident OptionalParamArray  */
#line 180 "parser-fixed.y"
      { yyval = make_node("FuncFParam", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1696 "parser-fixed.tab.c"
    break;

  case 31: /* OptionalParamArray: %empty  */
#line 185 "parser-fixed.y"
      { yyval = NULL; }
#line 1702 "parser-fixed.tab.c"
    break;

  case 32: /* OptionalParamArray: LBRACK RBRACK BrackConstExpList  */
#line 187 "parser-fixed.y"
      { yyval = make_node(NULL, 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1708 "parser-fixed.tab.c"
    break;

  case 33: /* BlockItem: Decl  */
#line 193 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1714 "parser-fixed.tab.c"
    break;

  case 34: /* BlockItem: Stmt  */
#line 195 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1720 "parser-fixed.tab.c"
    break;

  case 35: /* ConstExp: AddExp  */
#line 201 "parser-fixed.y"
      { yyval = make_node("ConstExp", 1, yyvsp[0]); }
#line 1726 "parser-fixed.tab.c"
    break;

  case 36: /* InitVal: Exp  */
#line 207 "parser-fixed.y"
      { yyval = make_node("InitVal", 1, yyvsp[0]); }
#line 1732 "parser-fixed.tab.c"
    break;

  case 37: /* InitVal: LBRACE OptionalInitVal RBRACE  */
#line 209 "parser-fixed.y"
      { yyval = make_node("InitVal", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1738 "parser-fixed.tab.c"
    break;

  case 38: /* OptionalInitVal: %empty  */
#line 214 "parser-fixed.y"
      { yyval = NULL; }
#line 1744 "parser-fixed.tab.c"
    break;

  case 39: /* OptionalInitVal: InitVal InitValList  */
#line 216 "parser-fixed.y"
      { yyval = make_node(NULL, 2, yyvsp[-1], yyvsp[0]); }
#line 1750 "parser-fixed.tab.c"
    break;

  case 40: /* InitValList: %empty  */
#line 221 "parser-fixed.y"
      { yyval = NULL; }
#line 1756 "parser-fixed.tab.c"
    break;

  case 41: /* InitValList: InitValList COMMA InitVal  */
#line 223 "parser-fixed.y"
      { yyval = make_node(NULL, 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1762 "parser-fixed.tab.c"
    break;

  case 42: /* Stmt: LVal ASSIGN Exp SEMICN  */
#line 229 "parser-fixed.y"
      { yyval = make_node("Stmt", 4, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1768 "parser-fixed.tab.c"
    break;

  case 43: /* Stmt: OptionalExp SEMICN  */
#line 231 "parser-fixed.y"
      { yyval = make_node("Stmt", 2, yyvsp[-1], yyvsp[0]); }
#line 1774 "parser-fixed.tab.c"
    break;

  case 44: /* Stmt: Block  */
#line 233 "parser-fixed.y"
      { yyval = make_node("Stmt", 1, yyvsp[0]); }
#line 1780 "parser-fixed.tab.c"
    break;

  case 45: /* Stmt: IFTK LPARENT Cond RPARENT Stmt OptionalElseStmt  */
#line 235 "parser-fixed.y"
      { yyval = make_node("Stmt", 6, yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1786 "parser-fixed.tab.c"
    break;

  case 46: /* Stmt: WHILETK LPARENT Cond RPARENT Stmt  */
#line 237 "parser-fixed.y"
      { yyval = make_node("Stmt", 5, yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1792 "parser-fixed.tab.c"
    break;

  case 47: /* Stmt: BREAKTK SEMICN  */
#line 239 "parser-fixed.y"
      { yyval = make_node("Stmt", 2, yyvsp[-1], yyvsp[0]); }
#line 1798 "parser-fixed.tab.c"
    break;

  case 48: /* Stmt: CONTINUETK SEMICN  */
#line 241 "parser-fixed.y"
      { yyval = make_node("Stmt", 2, yyvsp[-1], yyvsp[0]); }
#line 1804 "parser-fixed.tab.c"
    break;

  case 49: /* Stmt: RETURNTK OptionalExp SEMICN  */
#line 243 "parser-fixed.y"
      { yyval = make_node("Stmt", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1810 "parser-fixed.tab.c"
    break;

  case 50: /* Stmt: LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN  */
#line 245 "parser-fixed.y"
      { yyval = make_node("Stmt", 6, yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1816 "parser-fixed.tab.c"
    break;

  case 51: /* Stmt: PRINTFTK LPARENT FormatString CommaExpList RPARENT SEMICN  */
#line 247 "parser-fixed.y"
      { yyval = make_node("Stmt", 6, yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1822 "parser-fixed.tab.c"
    break;

  case 52: /* OptionalExp: %empty  */
#line 252 "parser-fixed.y"
      { yyval = NULL; }
#line 1828 "parser-fixed.tab.c"
    break;

  case 53: /* OptionalExp: Exp  */
#line 254 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1834 "parser-fixed.tab.c"
    break;

  case 54: /* OptionalElseStmt: %empty  */
#line 259 "parser-fixed.y"
      { yyval = NULL; }
#line 1840 "parser-fixed.tab.c"
    break;

  case 55: /* OptionalElseStmt: ELSETK Stmt  */
#line 261 "parser-fixed.y"
      { yyval = make_node(NULL, 2, yyvsp[-1], yyvsp[0]); }
#line 1846 "parser-fixed.tab.c"
    break;

  case 56: /* CommaExpList: %empty  */
#line 266 "parser-fixed.y"
      { yyval = NULL; }
#line 1852 "parser-fixed.tab.c"
    break;

  case 57: /* CommaExpList: CommaExpList COMMA Exp  */
#line 268 "parser-fixed.y"
      { yyval = make_node(NULL, 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1858 "parser-fixed.tab.c"
    break;

  case 58: /* AddExp: MulExp  */
#line 274 "parser-fixed.y"
      { yyval = make_node("AddExp", 1, yyvsp[0]); }
#line 1864 "parser-fixed.tab.c"
    break;

  case 59: /* AddExp: AddExp PLUS MulExp  */
#line 276 "parser-fixed.y"
      { yyval = make_node("AddExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1870 "parser-fixed.tab.c"
    break;

  case 60: /* AddExp: AddExp MINU MulExp  */
#line 278 "parser-fixed.y"
      { yyval = make_node("AddExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1876 "parser-fixed.tab.c"
    break;

  case 61: /* Exp: AddExp  */
#line 284 "parser-fixed.y"
      { yyval = make_node("Exp", 1, yyvsp[0]); }
#line 1882 "parser-fixed.tab.c"
    break;

  case 62: /* LVal: Ident BrackExpList  */
#line 290 "parser-fixed.y"
      { yyval = make_node("LVal", 2, yyvsp[-1], yyvsp[0]); }
#line 1888 "parser-fixed.tab.c"
    break;

  case 63: /* BrackExpList: %empty  */
#line 295 "parser-fixed.y"
      { yyval = NULL; }
#line 1894 "parser-fixed.tab.c"
    break;

  case 64: /* BrackExpList: BrackExpList LBRACK Exp RBRACK  */
#line 297 "parser-fixed.y"
      { yyval = make_node(NULL, 4, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1900 "parser-fixed.tab.c"
    break;

  case 65: /* Cond: LOrExp  */
#line 303 "parser-fixed.y"
      { yyval = make_node("Cond", 1, yyvsp[0]); }
#line 1906 "parser-fixed.tab.c"
    break;

  case 66: /* FormatString: STRCON  */
#line 309 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 1912 "parser-fixed.tab.c"
    break;

  case 67: /* MulExp: UnaryExp  */
#line 315 "parser-fixed.y"
      { yyval = make_node("MulExp", 1, yyvsp[0]); }
#line 1918 "parser-fixed.tab.c"
    break;

  case 68: /* MulExp: MulExp MULT UnaryExp  */
#line 317 "parser-fixed.y"
      { yyval = make_node("MulExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1924 "parser-fixed.tab.c"
    break;

  case 69: /* MulExp: MulExp DIV UnaryExp  */
#line 319 "parser-fixed.y"
      { yyval = make_node("MulExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1930 "parser-fixed.tab.c"
    break;

  case 70: /* MulExp: MulExp MOD UnaryExp  */
#line 321 "parser-fixed.y"
      { yyval = make_node("MulExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1936 "parser-fixed.tab.c"
    break;

  case 71: /* LOrExp: LAndExp  */
#line 327 "parser-fixed.y"
      { yyval = make_node("LOrExp", 1, yyvsp[0]); }
#line 1942 "parser-fixed.tab.c"
    break;

  case 72: /* LOrExp: LOrExp OR LAndExp  */
#line 329 "parser-fixed.y"
      { yyval = make_node("LOrExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1948 "parser-fixed.tab.c"
    break;

  case 73: /* LAndExp: EqExp  */
#line 335 "parser-fixed.y"
      { yyval = make_node("LAndExp", 1, yyvsp[0]); }
#line 1954 "parser-fixed.tab.c"
    break;

  case 74: /* LAndExp: LAndExp AND EqExp  */
#line 337 "parser-fixed.y"
      { yyval = make_node("LAndExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1960 "parser-fixed.tab.c"
    break;

  case 75: /* EqExp: RelExp  */
#line 343 "parser-fixed.y"
      { yyval = make_node("EqExp", 1, yyvsp[0]); }
#line 1966 "parser-fixed.tab.c"
    break;

  case 76: /* EqExp: EqExp EQL RelExp  */
#line 345 "parser-fixed.y"
      { yyval = make_node("EqExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1972 "parser-fixed.tab.c"
    break;

  case 77: /* EqExp: EqExp NEQ RelExp  */
#line 347 "parser-fixed.y"
      { yyval = make_node("EqExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1978 "parser-fixed.tab.c"
    break;

  case 78: /* UnaryExp: PrimaryExp  */
#line 353 "parser-fixed.y"
      { yyval = make_node("UnaryExp", 1, yyvsp[0]); }
#line 1984 "parser-fixed.tab.c"
    break;

  case 79: /* UnaryExp: Ident LPARENT OptionalFuncRParams RPARENT  */
#line 355 "parser-fixed.y"
      { yyval = make_node("UnaryExp", 4, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1990 "parser-fixed.tab.c"
    break;

  case 80: /* UnaryExp: UnaryOp UnaryExp  */
#line 357 "parser-fixed.y"
      { yyval = make_node("UnaryExp", 2, yyvsp[-1], yyvsp[0]); }
#line 1996 "parser-fixed.tab.c"
    break;

  case 81: /* OptionalFuncRParams: %empty  */
#line 362 "parser-fixed.y"
      { yyval = NULL; }
#line 2002 "parser-fixed.tab.c"
    break;

  case 82: /* OptionalFuncRParams: FuncRParams  */
#line 364 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 2008 "parser-fixed.tab.c"
    break;

  case 83: /* RelExp: AddExp  */
#line 370 "parser-fixed.y"
      { yyval = make_node("RelExp", 1, yyvsp[0]); }
#line 2014 "parser-fixed.tab.c"
    break;

  case 84: /* RelExp: RelExp LSS AddExp  */
#line 372 "parser-fixed.y"
      { yyval = make_node("RelExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2020 "parser-fixed.tab.c"
    break;

  case 85: /* RelExp: RelExp GRE AddExp  */
#line 374 "parser-fixed.y"
      { yyval = make_node("RelExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2026 "parser-fixed.tab.c"
    break;

  case 86: /* RelExp: RelExp LEQ AddExp  */
#line 376 "parser-fixed.y"
      { yyval = make_node("RelExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2032 "parser-fixed.tab.c"
    break;

  case 87: /* RelExp: RelExp GEQ AddExp  */
#line 378 "parser-fixed.y"
      { yyval = make_node("RelExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2038 "parser-fixed.tab.c"
    break;

  case 88: /* PrimaryExp: LPARENT Exp RPARENT  */
#line 384 "parser-fixed.y"
      { yyval = make_node("PrimaryExp", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2044 "parser-fixed.tab.c"
    break;

  case 89: /* PrimaryExp: LVal  */
#line 386 "parser-fixed.y"
      { yyval = make_node("PrimaryExp", 1, yyvsp[0]); }
#line 2050 "parser-fixed.tab.c"
    break;

  case 90: /* PrimaryExp: Number  */
#line 388 "parser-fixed.y"
      { yyval = make_node("PrimaryExp", 1, yyvsp[0]); }
#line 2056 "parser-fixed.tab.c"
    break;

  case 91: /* FuncRParams: Exp CommaExpList  */
#line 394 "parser-fixed.y"
      { yyval = make_node("FuncRParams", 2, yyvsp[-1], yyvsp[0]); }
#line 2062 "parser-fixed.tab.c"
    break;

  case 92: /* Number: IntConst  */
#line 400 "parser-fixed.y"
      { yyval = make_node("Number", 1, yyvsp[0]); }
#line 2068 "parser-fixed.tab.c"
    break;

  case 93: /* IntConst: INTCON  */
#line 406 "parser-fixed.y"
      { yyval = yyvsp[0]; }
#line 2074 "parser-fixed.tab.c"
    break;

  case 94: /* UnaryOp: PLUS  */
#line 412 "parser-fixed.y"
      { yyval = make_node("UnaryOp", 1, yyvsp[0]); }
#line 2080 "parser-fixed.tab.c"
    break;

  case 95: /* UnaryOp: MINU  */
#line 414 "parser-fixed.y"
      { yyval = make_node("UnaryOp", 1, yyvsp[0]); }
#line 2086 "parser-fixed.tab.c"
    break;

  case 96: /* UnaryOp: NOT  */
#line 416 "parser-fixed.y"
      { yyval = make_node("UnaryOp", 1, yyvsp[0]); }
#line 2092 "parser-fixed.tab.c"
    break;

  case 97: /* ConstInitVal: ConstExp  */
#line 422 "parser-fixed.y"
      { yyval = make_node("ConstInitVal", 1, yyvsp[0]); }
#line 2098 "parser-fixed.tab.c"
    break;

  case 98: /* ConstInitVal: LBRACE OptionalConstInitVal RBRACE  */
#line 424 "parser-fixed.y"
      { yyval = make_node("ConstInitVal", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2104 "parser-fixed.tab.c"
    break;

  case 99: /* OptionalConstInitVal: %empty  */
#line 429 "parser-fixed.y"
      { yyval = NULL; }
#line 2110 "parser-fixed.tab.c"
    break;

  case 100: /* OptionalConstInitVal: ConstInitVal CommaConstInitValList  */
#line 431 "parser-fixed.y"
      { yyval = make_node(NULL, 2, yyvsp[-1], yyvsp[0]); }
#line 2116 "parser-fixed.tab.c"
    break;

  case 101: /* CommaConstInitValList: %empty  */
#line 436 "parser-fixed.y"
      { yyval = NULL; }
#line 2122 "parser-fixed.tab.c"
    break;

  case 102: /* CommaConstInitValList: CommaConstInitValList COMMA ConstInitVal  */
#line 438 "parser-fixed.y"
      { yyval = make_node(NULL, 3, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2128 "parser-fixed.tab.c"
    break;

  case 103: /* ConstDef: Ident BrackConstExpList  */
#line 444 "parser-fixed.y"
      { yyval = make_node("ConstDef", 2, yyvsp[-1], yyvsp[0]); }
#line 2134 "parser-fixed.tab.c"
    break;

  case 104: /* ConstDef: Ident BrackConstExpList ASSIGN ConstInitVal  */
#line 446 "parser-fixed.y"
      { yyval = make_node("ConstDef", 4, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2140 "parser-fixed.tab.c"
    break;

  case 105: /* BrackConstExpList: %empty  */
#line 451 "parser-fixed.y"
      { yyval = NULL; }
#line 2146 "parser-fixed.tab.c"
    break;

  case 106: /* BrackConstExpList: BrackConstExpList LBRACK ConstExp RBRACK  */
#line 453 "parser-fixed.y"
      { yyval = make_node(NULL, 4, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2152 "parser-fixed.tab.c"
    break;


#line 2156 "parser-fixed.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 457 "parser-fixed.y"


/* label 为空的辅助节点只输出子节点；lexeme 非空表示 token。 */
struct SyntaxNode {
    const char *label;
    char *lexeme;
    SyntaxNode *first_child;
    SyntaxNode *last_child;
    SyntaxNode *next_sibling;
    SyntaxNode *parent;
    SyntaxNode *next_allocated;
};

/* 统一记录分配，语法出错时也能释放尚未组成完整树的节点。 */
static SyntaxNode *allocated_nodes = NULL;

static void free_nodes(void)
{
    while (allocated_nodes != NULL) {
        SyntaxNode *next = allocated_nodes->next_allocated;
        free(allocated_nodes->lexeme);
        free(allocated_nodes);
        allocated_nodes = next;
    }
    syntax_root = NULL;
}

static void *checked_alloc(size_t size)
{
    void *memory = calloc(1, size);
    if (memory == NULL) {
        fprintf(stderr, "语法分析失败：内存不足\n");
        exit(EXIT_FAILURE);
    }
    return memory;
}

static SyntaxNode *new_node(const char *label)
{
    SyntaxNode *node = checked_alloc(sizeof(*node));
    node->label = label;
    node->next_allocated = allocated_nodes;
    allocated_nodes = node;
    return node;
}

SyntaxNode *make_token(const char *category, const char *lexeme)
{
    SyntaxNode *node = new_node(category);
    /* 必须复制 yytext，后续扫描会修改 Flex 的缓冲区。 */
    size_t length = strlen(lexeme);
    node->lexeme = checked_alloc(length + 1);
    memcpy(node->lexeme, lexeme, length + 1);
    return node;
}

static SyntaxNode *make_node(const char *label, int count, ...)
{
    SyntaxNode *node = new_node(label);
    va_list children;
    va_start(children, count);
    for (int i = 0; i < count; ++i) {
        SyntaxNode *child = va_arg(children, SyntaxNode *);
        if (child == NULL) {
            continue; /* 空产生式没有子节点。 */
        }
        child->parent = node;
        if (node->last_child != NULL) {
            node->last_child->next_sibling = child;
        } else {
            node->first_child = child;
        }
        node->last_child = child;
    }
    va_end(children);
    return node;
}

/* 后序遍历：按源代码顺序输出子节点，最后输出当前语法成分。
 * 使用父节点和兄弟指针，避免长列表导致递归遍历栈溢出。
 */
static int write_tree(FILE *output, const SyntaxNode *root)
{
    const SyntaxNode *node = root;
    while (node != NULL && node->first_child != NULL) {
        node = node->first_child;
    }
    while (node != NULL) {
        if (node->lexeme != NULL) {
            if (fprintf(output, "%s %s\n", node->label, node->lexeme) < 0) {
                return -1;
            }
        } else if (node->label != NULL) {
            if (fprintf(output, "<%s>\n", node->label) < 0) {
                return -1;
            }
        }
        if (node->next_sibling != NULL) {
            node = node->next_sibling;
            while (node->first_child != NULL) {
                node = node->first_child;
            }
        } else {
            node = node->parent;
        }
    }
    return 0;
}

void yyerror(const char *message)
{
    fprintf(stderr, "第 %d 行：%s\n", yylineno, message);
}

int main(int argc, char **argv)
{
    if (argc > 3) {
        fprintf(stderr, "用法：%s [输入文件 [输出文件]]\n", argv[0]);
        return EXIT_FAILURE;
    }
    const char *input_path = argc > 1 ? argv[1] : "testfile.txt";
    const char *output_path = argc > 2 ? argv[2] : "output.txt";
    yyin = fopen(input_path, "r");
    if (yyin == NULL) {
        perror(input_path);
        return EXIT_FAILURE;
    }
    if (atexit(free_nodes) != 0) {
        fprintf(stderr, "无法注册内存清理函数\n");
        fclose(yyin);
        return EXIT_FAILURE;
    }

    int result = yyparse();
    fclose(yyin);
    yylex_destroy();
    if (result != 0) {
        return result;
    }

    /* 只有语法分析成功后才写结果，错误信息始终发往 stderr。 */
    FILE *output = fopen(output_path, "w");
    if (output == NULL) {
        perror(output_path);
        return EXIT_FAILURE;
    }
    int write_result = write_tree(output, syntax_root);
    int close_result = fclose(output);
    if (write_result != 0 || close_result == EOF) {
        fprintf(stderr, "写入 %s 失败\n", output_path);
        return EXIT_FAILURE;
    }

    printf("202411221 王程远\n");
    return EXIT_SUCCESS;
}
