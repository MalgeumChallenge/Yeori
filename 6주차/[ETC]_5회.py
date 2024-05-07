s = input()
y = int(ord(s[0])) - int(ord('a')) + 1
x = int(s[1])

# 동, 북, 서, 남
dx = [0, -1, 0, 1]
dy = [1, 0, -1, 0]

# 나이트가 이동할 수 있는 8가지 방향
steps = [(-2,-1), (-1,-2), (1,-2), (2,-1), (2,1), (1,2), (-1,2), (-2,1)]
cnt = 0
for step in steps:
    # 이동하고자 하는 위치 확인
    nx = x + step[0]
    ny = y + step[1]
    
    # 해당 위치로 이동 가능하면 카운트 증가
    if nx >= 1 and nx <= 8 and ny >= 1 and ny <= 8:
        cnt += 1

print(cnt)
