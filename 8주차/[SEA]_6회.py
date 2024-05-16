# https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV134DPqAA8CFAYh&categoryId=AV134DPqAA8CFAYh&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
for j in range(10):
    N = int(input())
    b = list(map(int, input().split()))
    count = 0
    min = 255
    for i in range(2, len(b)-2):
        if (b[i] <= b[i-2] or b[i] <= b[i-1] or b[i] <= b[i+2] or b[i] <= b[i+1]):
            continue
        if (b[i] > b[i-2] and (b[i] - b[i-2]) < min): # 왼2
            min = b[i] - b[i-2]
        if (b[i] > b[i-1] and (b[i] - b[i-1]) < min): # 왼1
            min = b[i] - b[i-1]
        if (b[i] > b[i+1] and (b[i] - b[i+1]) < min): # 오1
            min = b[i] - b[i+1]
        if (b[i] > b[i+2] and (b[i] - b[i+2]) < min): # 오2
            min = b[i] - b[i+2]
        
        count = count + min
        min = 255 # min값 초기화
    print("#%d %d"%(j+1, count))
            
    
    
