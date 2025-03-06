import shutil
import os

dir = ["./MBFL","./SBFL","./SLICE","./COV"]
for cleandir in dir:
    shutil.rmtree(cleandir)
    os.makedirs(cleandir)