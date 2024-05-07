from collections import deque
N,M = map(int, input().split())

graph = []
for i in range(N):
    graph.append(list(map(int, input())));

# 동, 북, 서, 남
dx = [0, -1, 0, 1]
dy = [1, 0, -1, 0]

def bfs(x, y):
    # 큐 구현을 위해 deque 라이브러리 사용
    queue = deque()
    queue.append((x,y))
    # 큐가 빌 때까지 반복하기
    while queue:
        a, b = queue.popleft()
        # 현재 위치에서 4가지 방향으로의 위치 확인
        for i in range(4):
            nx = a + dx[i]
            ny = b + dy[i]
            # 미로 찾기 공간을 벗어난 경우 무시
            if nx < 0 or nx >= N or ny < 0 or ny >= M:
                continue
            # 벽인 경우 무시
            if graph[nx][ny] == 0:
                continue
            # 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            if graph[nx][ny] == 1:
                graph[nx][ny] = graph[a][b] + 1
                queue.append((nx,ny))
                
    # 가장 오른쪽 아래까지의 최단 거리 반환
    return graph[N-1][M-1]

# BFS를 수행한 결과 출력
print(bfs(0,0))
    
