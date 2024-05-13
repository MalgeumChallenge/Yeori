# https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AY2hjCWKbykDFATh&categoryId=AY2hjCWKbykDFATh&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
T = int(input())

for i in range(T):
    s = input()
    first = ''
    second = ''
    for j in range(len(s)):
        if j < (len(s) // 2):
            first = s[j] + first
        elif j == (len(s) // 2):
            continue
        elif j > (len(s) // 2):
            second = s[j] + second
            
    if first == second:
        print('#%d YES'%(i+1), sep='')
    else:
        print('#%d NO'%(i+1), sep='')
    # cpy = ''
    # for j in s:
    #     cpy = j + cpy
    # if s == cpy:
    #     print('#%d YES'%(i+1), sep='')
    # else:
    #     print('#%d NO'%(i+1), sep='')
    
