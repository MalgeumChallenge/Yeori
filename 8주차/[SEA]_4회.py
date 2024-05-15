# https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AYxCRFA6iiEDFASu&categoryId=AYxCRFA6iiEDFASu&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
T = int(input())
for i in range(T):
    N = int(input())
    items = list(map(int, input().split()))
    count = []
    for item in range(len(items)-1,0,-1):
        if items[item] == 0:
            continue
        for j in range(item):
            if (items[item] * 0.75) == items[j]:
                count.append(items[j])
                items[j] = 0
                break
    count.sort()
    print("#%d"%(i+1), *count)
            
