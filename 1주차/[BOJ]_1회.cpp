// https://www.acmicpc.net/problem/7576
#include <iostream>
#include <queue>
using namespace std;

int N,M;
int cnt = 0;
int tomato[1005][1005]; // 토마토 상자
int checked[1005][1005]; // 해당 칸 방문 여부
int dist[1005][1005]; // 거리 측정
int index_X[4] = {-1,1,0,0};
int index_Y[4] = {0,0,-1,1};

int main() {
    queue<pair<int,int>> Q; // BFS를 위한 큐 생성
    cin >> N >> M; 

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> tomato[i][j];
            // 익은 토마토인 경우 큐에 추가하고 방문 표시함
            if(tomato[i][j] == 1) {
                Q.push({i,j});
                checked[i][j] = 1;
            };
        }
    }

    // BFS 수행
    while(!Q.empty()) { 
        int a = Q.front().first;
        int b = Q.front().second;

        Q.pop(); // 큐에서 해당 토마토 제거
        // 현재 토마토의 상하좌우를 확인하여 익지 않은 토마토가 있다면 큐에 추가하고 거리를 갱신
        for(int dir = 0; dir < 4; dir++) {
            int nx = a + index_X[dir]; // 다음 토마토의 행 번호 계산
            int ny = b + index_Y[dir]; // 다음 토마토의 열 번호 계산
            
            // 상자 범위 내에 있고, 방문하지 않았으며, 토마토가 들어있지 않은 곳이면
            if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if(checked[nx][ny] == 1 || tomato[nx][ny] == -1 || tomato[nx][ny] == 1) continue;
            if(checked[nx][ny] == 0 && tomato[nx][ny] == 0) {
                dist[nx][ny] = dist[a][b] + 1; // 거리를 갱신
                Q.push({nx,ny}); // 다음 토마토를 큐에 추가
                checked[nx][ny] = 1; // 해당 토마토를 방문했음을 표시
                cnt = max(cnt, dist[nx][ny]); // 최대거리 갱신
            }
        }
    }

    int checkApple = 0;
    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < N; ++j) {
            if(tomato[i][j] == 0 && checked[i][j] == 0) {
                cout << -1;
                return 0;
            }
            if(tomato[i][j] == 0) { 
                checkApple = 1;
            }
        }
    }

    if(!checkApple) {
        cout << 0;
        return 0;
    }
    
    cout << cnt;
    return 0;
}
