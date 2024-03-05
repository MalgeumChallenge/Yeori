//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    
    cin >> str;
    list<char> L;
    for(auto c : str) L.push_back(c);
    auto cursor = L.end();

    int q; // test 개수
    cin >> q;
    while(q--) {
        char op;
        cin >> op;

        if(op == 'P') {
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
        else if(op == 'L') {
            if (cursor != L.begin()) cursor--;
        }
        else if(op == 'D') {
            if (cursor != L.end()) cursor++;
        }
        else { // 'B'
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
    for(auto c : L) cout << c;

  return 0;
}
