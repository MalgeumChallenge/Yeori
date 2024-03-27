//https://inha.codetree.ai/missions/5/problems/on-the-checkboard-2/description
#include <iostream>
#define MAX_N 15
using namespace std;

int n, m;
char board[MAX_N][MAX_N];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> board[i][j];
    
    // 행과 열이 모두 증가하도록 모든 쌍을 다 잡음
    int cnt = 0;
    for(int i = 1; i < n; i++)
        for(int j = 1; j < m; j++)
            for(int k = i + 1; k < n - 1; k++)
                for(int l = j + 1; l < m - 1; l++)
                    // 색깔이 전부 달라지는 경우만 cnt++
                    if(board[0][0] != board[i][j] && 
                       board[i][j] != board[k][l] &&
                       board[k][l] != board[n - 1][m - 1])
                        cnt++;
                        
    cout << cnt;
    return 0;
}
