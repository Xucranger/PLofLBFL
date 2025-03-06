import math

debug = False

def cal_jaccard(tf, tp, aef, aep, anf, anp):
    if debug:
        print("jaccard:%d %d %d %d %d %d" %(tf, tp, aef, aep, anf, anp))
    a=tf+aep
    if a==0:
        a += 0.001
    b=aef/a
    return b

def cal_dstar(tf, tp, aef, aep, anf, anp, index):
    if debug:
        print("Dstar:%d %d %d %d %d %d" %(tf, tp, aef, aep, anf, anp))
    b = math.pow(aef, index)
    a = aep + (tf - aef)
    if a == 0:
        a+=0.001
    c = b / a
    return c


def cal_ochiai(tf, tp, aef, aep, anf, anp):
    if debug:
        print("Ochiai:%d %d %d %d %d %d" %(tf, tp, aef, aep, anf, anp))
    if aef == 0:
        return 0
    a = aef + aep
    b = math.sqrt(tf * a)
    if b == 0:
        b += 0.001
    c = aef / b
    return c


def cal_ochiai_new(tf, tp, aef, aep, anf, anp):
    if debug:
        print("Ochiai_new:%d %d %d %d %d %d" %(tf, tp, aef, aep, anf, anp))
    if aef == 0:
        return 0
    a = aef + aep
    b = math.sqrt(tf * a)
    if b == 0:
        return 0
    c = math.pow(aef, 3) / b
    return c


def cal_turantula(tf, tp, aef, aep, anf, anp):
    if debug:
        print("turantula:%d %d %d %d %d %d" %(tf, tp, aef, aep, anf, anp))
    if aef == 0:
        return 0
    if tf == 0 or tp == 0:
        return 0
    a = aef / tf
    b = aep / tp
    c = a / (a + b)
    return c


def cal_op2(tf, tp, aef, aep, anf, anp):
    if debug:
     print("op2:%d %d %d %d %d %d" %(tf, tp, aef, aep, anf, anp))
    a = aep / (tp + 1)
    b = aef - a
    return b