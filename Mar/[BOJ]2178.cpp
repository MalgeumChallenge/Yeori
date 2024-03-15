#include <iostream>
#include <queue>
using namespace std;

int N,M;
int map[201][201];
int IsCheck[201][201];
int dist[201][201];
int index_X[4] = { -1, 1, 0, 0 };
int index_Y[4] = { 0, 0, -1, 1 };


int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < M; j++)
        {
            map[i][j] = str[j] - '0'; // string 입력값 int로 변환
        } 
    }

    queue<pair<int,int>> Q;
    Q.push({0,0});
    IsCheck[0][0] = 1;
    dist[0][0] = 1;
    
    while(!Q.empty()) {
        int a = Q.front().first;
        int b = Q.front().second;

        Q.pop();
        for(int dir = 0; dir < 4; dir++) {
            int nx = a + index_X[dir];
            int ny = b + index_Y[dir];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(IsCheck[nx][ny] == 1 || map[nx][ny] == 0) continue;
            if(map[nx][ny] == 1 && IsCheck[nx][ny] == 0) {
                dist[nx][ny] = dist[a][b] + 1;
                Q.push({nx,ny});
                IsCheck[nx][ny] = 1;
            }
        }
    }
    cout << dist[N-1][M-1];
    
    return 0;
}