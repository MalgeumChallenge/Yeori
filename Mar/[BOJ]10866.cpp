#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;

    string str;
    deque<int> DQ;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> str;
        if(str == "push_front") {
            cin >> x;
            DQ.push_front(x);
        }
        else if(str == "push_back") {
            int x;
            cin >> x;
            DQ.push_back(x);
        }
        else if(str == "pop_front") {
            if(DQ.empty()) cout << -1 << '\n';
            else {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        }
        else if(str == "pop_back") {
            if(DQ.empty()) cout << -1 << '\n';
            else {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        }
        else if(str == "size") cout << DQ.size() << '\n';
        else if(str == "empty") {
            if(DQ.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(str == "front") {
            if(DQ.empty()) cout << -1 << '\n';
            else cout << DQ.front() << '\n';
        }
        else if(str == "back") {
            if(DQ.empty()) cout << -1 << '\n';
            else cout << DQ.back() << '\n';
        }
    }
}