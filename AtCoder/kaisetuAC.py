import random
import subprocess
from subprocess import PIPE

path = '/home/akeon/Source/ProgrammingContest/AtCoder/解説AC.md'

with open(path) as f:
    lines = f.readlines();

text = lines[random.randint(0,len(lines)-1)]
link = text.split('(')[1].split(')')[0]
print(link)
proc = subprocess.run("firefox " + link + " &", shell=True, stdout=PIPE, stderr=PIPE, text=True)