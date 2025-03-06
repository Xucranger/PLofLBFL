import shutil
import os

dir = ["./SBFL","./SLICE","./COV"]
for subdir in dir:
    for g in range(0,11):
        print(len(os.listdir(os.path.join(subdir,str(g)))))
