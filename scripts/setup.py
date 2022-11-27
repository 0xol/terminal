import os
import subprocess

def main():
    dirs = ["bin","terminal"]

    for file in dirs: 
        if os.path.isdir(file) == True:
            subprocess.run("rm -rf " + file, shell=True)
            os.mkdir(file)
    
        elif os.path.isdir(file) == False:
            os.mkdir(file)