#include <bits/stdc++.h>
using namespace std;

int main(void) {
    queue<int> Q;
    int N;
    cin >> N;

    string str;
    int x;
    for(int i = 0; i < N; i++) {
        cin >> str;
        if (str == "push") {
            cin >> x;
            Q.push(x);
        }
        else if (str == "pop") {
            if (Q.empty()) cout << -1 << '\n';
            else {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }
        else if(str == "size") cout << Q.size() << '\n';
        else if(str == "empty") {
            if(Q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(str == "front") {
            if(Q.empty()) cout << -1 << '\n';
            else cout << Q.front() << '\n';
        }
        else if(str == "back") {
            if(Q.empty()) cout << -1 << '\n';
            else cout << Q.back() << '\n';
        }
    }
}