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
    queue<pair<int,int>> Q;
    cin >> N >> M; 

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> tomato[i][j];
            if(tomato[i][j] == 1) {
                Q.push({i,j});
                checked[i][j] = 1;
            };
        }
    }
    
    while(!Q.empty()) { 
        int a = Q.front().first;
        int b = Q.front().second;

        Q.pop();
        for(int dir = 0; dir < 4; dir++) {
            int nx = a + index_X[dir];
            int ny = b + index_Y[dir];

            if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if(checked[nx][ny] == 1 || tomato[nx][ny] == -1 || tomato[nx][ny] == 1) continue;
            if(checked[nx][ny] == 0 && tomato[nx][ny] == 0) {
                dist[nx][ny] = dist[a][b] + 1;
                Q.push({nx,ny});
                checked[nx][ny] = 1;
                cnt = max(cnt, dist[nx][ny]);
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