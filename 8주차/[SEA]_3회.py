# https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AYzIZNkq-v4DFAQ9&categoryId=AYzIZNkq-v4DFAQ9&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
T = int(input())
for i in range(T):
    N,M = map(int, input().split())
    N_str = input().split(' ')
    M_str = input().split(' ')
    year_count = int(input())
    result = ''
    for j in range(year_count):
        year = int(input())
        N_answer = N_str[(year-1) % len(N_str)]
        M_answer = M_str[(year-1) % len(M_str)]
        answer = N_answer + M_answer
        result = result + ' ' + answer
    print("#%d%s"%(i+1, result))
