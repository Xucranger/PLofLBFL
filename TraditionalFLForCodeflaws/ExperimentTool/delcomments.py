import sys, token, tokenize, os,re
import OJexperiment.util as util

COMMAND = "g++ -fpreprocessed -dD -E %s >%s"

def clean_py_file(infile, outfile):
    source = open(infile)
    mod = open(outfile, "w")
    prev_toktype = token.INDENT
    first_line = None
    last_lineno = -1
    last_col = 0

    tokgen = tokenize.generate_tokens(source.readline)
    for toktype, ttext, (slineno, scol), (elineno, ecol), ltext in tokgen:
        if 0:  # Change to if 1 to see the tokens fly by.
            print("%10s %-14s %-20r %r" % (
                tokenize.tok_name.get(toktype, toktype),
                "%d.%d-%d.%d" % (slineno, scol, elineno, ecol),
                ttext, ltext
            ))
        if slineno > last_lineno:
            last_col = 0
        if scol > last_col:
            mod.write(" " * (scol - last_col))
        if toktype == token.STRING and prev_toktype == token.INDENT:
            pass
            # Docstring
            # mod.write("#--")
        elif toktype == tokenize.COMMENT:
            pass
            # Comment
            # mod.write("##\n")
        else:
            mod.write(ttext)
        prev_toktype = toktype
        last_col = ecol
        last_lineno = elineno


def clean_c_file(infile, outfile):
    os.system(COMMAND % (infile, outfile))

def dirclean(dir,language):
    list  = os.listdir(dir)
    for item in list:
        infile = os.path.join(dir, item)
        outfile = os.path.join(dir, item + "new")
        try:
            if language == "py":
                clean_py_file(infile,outfile)
            else:
                clean_c_file(infile,outfile)
            os.remove(infile)
            os.rename(outfile, infile)
            src_content = util.read_line(infile)
            if language == "py":
                newsrc = ["# coding=utf-8"]
            else:
                newsrc = []
                src_content = src_content[1:]
            for item in src_content:
                if re.match("^\s*$", item):
                    pass
                else:
                    newsrc.append(item)
            util.write_file(infile, newsrc)
            print(infile)
        except:
            pass
        if os.path.exists(outfile):
            os.remove(outfile)


if __name__ == "__main__":
    prolist = [2174,3904,3905,3919,3922,3924,3925,3955]
    # prolist = [3955]
    languages = ["c","cpp","py"]
    newDataPath = "./data"
    for item in prolist:
        problemDir = os.path.join(newDataPath,str(item))
        if not os.path.exists(problemDir):
            os.mkdir(problemDir)
        for language in languages:
            ACdir = os.path.join(problemDir,"AC_"+language)
            WAdir = os.path.join(problemDir, "WA_" + language)
            dirclean(ACdir,language)
            dirclean(WAdir, language)