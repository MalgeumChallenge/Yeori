# https://swexpertacademy.com/main/code/problem/problemDetail.do
N = int(input())
ary = []
for i in range(1, N+1):
    chr = str(i)
    cnt = 0
    for j in chr:
        if j == '3' or j == '6' or j == '9':
            cnt += 1
    if cnt == 0:
        print(i, end=" ")
    else:
        print('-'*cnt, end=" ")
