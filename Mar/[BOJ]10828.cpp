#include <bits/stdc++.h>
using namespace std;

int main(void) {
    stack<int> S;
    int N;
    cin >> N;

    string str;
    int num;

    for(int i = 0; i < N; i++) {
        cin >> str;
        if(str == "push") {
            cin >> num;
            S.push(num);
        }
        if (str == "top") { 
            if (S.empty()) cout << -1 << '\n';
            else cout << S.top() << '\n';
        }
        if (str == "size") cout << S.size() << '\n';
        if (str == "empty") {
            if (S.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        if (str == "pop") {
            if (S.empty()) cout << -1 << '\n';
            else {
                cout << S.top() << '\n';
                S.pop();
            }
        }
    }
}