# https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AYo-e9EKmGoDFAQI&categoryId=AYo-e9EKmGoDFAQI&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
T = int(input())

for i in range(T):
    a,b,c = map(int, input().split())
    a_ans = 0
    b_ans = 0
    c_ans = 0
    
    x = 2*b - c # x가 a일 때
    if (a > x):
        a_ans = a - x
    else:
        a_ans = x - a
        
    x = (a+c)/2 # x가 b일 때
    if (b > x):
        b_ans = b - x
    else:
        b_ans = x - b
    
    x = 2*b-a # x가 c일 때
    if (c > x):
        c_ans = c - x
    else:
        c_ans = x - c
    
    min = a_ans
    if (min > b_ans):
        min = b_ans
    if (min > c_ans):
        min = c_ans
        
    print("#%d %.1f"%(i+1, min))
            
