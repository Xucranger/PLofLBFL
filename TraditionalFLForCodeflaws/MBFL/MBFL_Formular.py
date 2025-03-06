import math

debug = False
NULL_STRING = " "
mutation_trick = [{
    # 逻辑操作符部分
    # 字符替换会导致变量失效 例如 list is
    # 加空格区分
    ' not ': [' '],
    ' is ': [' is not '],  # this will cause "is not not" sometimes, so there's a hack to fix that later
    ' in ': [' not in '],
    'break': ['continue'],
    'continue': ['break'],
    'True': ['False'],
    'False': ['True'],
    ' and ': [' or '],
    ' or ': [' and '],
    # 运算符部分
    "<": ["!=", ">", "<=", ">=", "=="],
    ">": ["!=", "<", "<=", ">=", "=="],
    "<=": ["!=", "<", ">", ">=", "=="],
    ">=": ["!=", "<", "<=", ">", "=="],
    "==": ["!=", "=", "<", ">", "<=", ">="],
    "!=": ["==", "=", "<", ">", "<=", ">="],
    "+": ["-", "*", "/", "%", "//"],
    "-": ["+", "*", "/", "%", "//"],
    "*": ["+", "-", "/", "%", "//"],
    "/": ["%", "*", "+", "-", "//"],
    "%": ["/", "+", "-", "*", "//"],
    "//": ["/", "+", "-", "*", "%"],
    "**": ["/", "+", "-", "*", "%", "//"],
    # 常数
    "+ 1": ["- 1", "+ 0", "+ 2", "- 2"],
    "- 1": ["+ 1", "+ 0", "+ 2", "- 2"],
    # 位运算
    "&": ["|", "^"],
    "|": ["&", "^"],
    "^": ["&", "|"],
    "~": [NULL_STRING],
    ">>": ["<<"],
    "<<": [">>"],
    "<<=": [">>=", "="],
    ">>=": [" <<=", "="],
}, {
    "<":
        [" != ", " > ", " <= ", " >= ", " == "],
    ">":
        [" != ", " < ", " <= ", " >= ", " == "],
    "<=":
        [" != ", " < ", " > ", " >= ", "=="],
    ">=":
        [" != ", " < ", " <= ", " > ", "=="],
    "==":
        [" != ", " = ", " < ", " > ", " <= ", " >= "],
    "!=":
        [" == ", " = ", " < ", " > ", " <= ", " >= "],
    "=":
        [" == ", " != ", " < ", " > ", " <= ", " >= ", " = 0 * ", " = 0 ;//", " = NULL; //", " = ! "],

    "+":
        [" - ", " * ", " / ", " % "],
    "-":
        [" + ", " * ", " / ", " % "],
    "*":
        [" + ", " - ", " / ", " % "],

    "/":
        [" % ", " * ", " + ", " - "],
    "%":
        [" / ", " + ", " - ", " * "],

    " + 1":
        [" - 1", "+ 0", "+ 2", "- 2"],
    " - 1":
        [" + 1", "+ 0", "+ 2", "- 2"],

    " ~":
        [" !", NULL_STRING],
    " !":
        [" ~", NULL_STRING],

    "&&":
        [" & ", " || ", " && !"],

    "||":
        [" | ", " && ", " || !"],

    ">>": [" << "],
    "<<": [" >> "],

    "++": ["--"],
    "--": ["++"],

    "++;":
        ["--;", "+=2;", "-=2;"],
    "++)":
        ["--)", "+=2)", "-=2)"],
    "--;":
        ["++;", "+=2;", "-=2;"],
    "--)":
        ["++)", "+=2)", "-=2)"],

    " true ": [" false "],
    " false ": [" true  "],

    "if (":
        ["if ( ! ", "if ( ~ ", "if ( 1 || ", "if ( 0 && "],
    "if(":
        ["if ( ! ", "if ( ~ ", "if ( 1 || ", "if ( 0 && "],
    "while (":
        ["while ( ! ", "while ( ~ ", "while ( 0 && ", "// while (", " if (", "if (!"],

    "break;": ["{;}"],
    "continue;": ["{;}"],
    "goto ": ["//goto "],

    "return ":
        ["return 0; //", "return 1; //", "return NULL; //", "return -1; //", "return 2* ", "return -1 * "],

    "[":
        ["[ -1 + ", "[ 1 + ", "[ 0 * "],

    "(": [" (! "],

    ");":
        ["*0);", "*-1);", "*2);"],
    ",":
        [", ! ", ", 0 * ", ", -1 * ", ", 2 *"],
    " ? ":
        [" && 0 ? ", " || 1 ? "],
    " int ":
        [" short int ", " char "],
    " signed ": [" unsigned "],
    " unsigned ": [" signed "],
    " long ":
        [" int ", " short int ", " char "],
    " float ": [" int "],
    " double ": [" int "],

    " free(": ["// free("],

    "case ": ["// case "],
    "default ": ["// default "],

    # null terminate a string
    "\"": ["\"\\0"],

    "else {": ["{"],
    "else": ["// else"],
}]


# (fail/totfail)/((fail/totfail)+(pass/totpass))
# Akf = aef  Anf = anf
# totfail = Akf + Anf

def cal_tarantula(Akf, Anf, Akp, Anp):
    if Akf == 0:
        return 0
    if Akf + Anf == 0 or Akp + Anp == 0:
        return 0
    a = Akf / (Akf + Anf)
    b = Akp / (Akp + Anp)
    c = a / (a + b)
    return c


# (fail^index)/(pass+(totfail-fail))
def cal_dstar(Akf, Anf, Akp, Anp, index):
    a = Akp + (Akf + Anf - Akf)
    if a == 0:
        if Akf != 0:
            return 99999
        return 0
    b = math.pow(Akf, index)
    c = b / a
    return c


def cal_jaccard(Akf, Anf, Akp, Anp):
    if (Akf + Anf + Akp) == 0:
        if Akf != 0:
            return 99999
        return 0
    return Akf / (Akf + Anf + Akp)


def cal_ochiai(Akf, Anf, Akp, Anp):
    if (Akf + Anf) * (Akf + Akp) == 0:
        if Akf != 0:
            return 99999
        return 0
    return Akf / math.sqrt((Akf + Anf) * (Akf + Akp))


def cal_op2(Akf, Anf, Akp, Anp):
    if (Akp + Anp + 1) == 0:
        return 0
    return Akf - Akp / (Akp + Anp + 1)
