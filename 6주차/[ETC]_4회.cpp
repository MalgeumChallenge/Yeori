# R, U, L, D
dx = [0, -1, 0, 1]
dy = [1, 0, -1, 0]
move_type = ['R', 'U', 'L', 'D']
x, y = 1, 1

N = int(input())
plan = input().split()
#nx, ny = 0, 0
for i in plan:
    """ 내가 짠 코드,, 
    if i == 'R':
        nx = x + dx[0]
        ny = y + dy[0]
    if i == 'L':
        nx = x + dx[2]
        ny = y + dy[2]
    if i == 'U':
        nx = x + dx[1]
        ny = y + dy[1]
    if i == 'D':
        nx = x + dx[3]
        ny = y + dy[3]
    """
    # 정답 코드(더 효율적)
    for j in range(len(move_type)):
        if i == move_type[j]:
            nx = x + dx[j]
            ny = y + dy[j]
    
    # 공간 벗어나면 무시   
    if nx < 1 or nx > N or ny < 1 or ny > N:
        continue
    else:
        x, y = nx, ny

print(x,y)
    
