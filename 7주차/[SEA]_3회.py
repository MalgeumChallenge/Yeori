# https://swexpertacademy.com/main/code/problem/problemDetail.do
T = int(input())

for i in range(T):
    N = int(input())
    arrays = list(map(int, input().split()))
    answer = 0 # 출력할 정답
    sellPrice = 0 # 현재 판매가격(최댓값)
    
    for arr in arrays[::-1]: # 배열 거꾸로 순회
        if arr >= sellPrice: # 현재 값이 최댓값보다 크거나 같다면
            sellPrice = arr # 판매가격 업데이트
        else:
            answer += sellPrice - arr # 현재 값에 구매해서 최댓값에 판다
            
    print("#", i+1, " ", answer, sep="")
    
    
