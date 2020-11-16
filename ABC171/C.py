import numpy as np
import string

intToChar = [i for i in string.ascii_lowercase]   

n = int(input())

ans = ""

while n > 0:
    ans += intToChar[n%26-1]
    n = (n-1) // 26

print(ans[::-1])