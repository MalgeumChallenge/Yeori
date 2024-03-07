#include <bits/stdc++.h>
using namespace std;

int main(void) {
   
    while(true) {
        string str;
        getline(cin, str);
        if (str == ".") break;
        stack<char> S;
        bool isValid = true;
        for(auto x : str) {
            if(x == '(' || x == '[') S.push(x);
            else if(x == ')') {
                if(S.empty() || S.top() != '(') {
                    isValid = false;
                    break;
                }
                S.pop();
            }
            else if(x == ']') {
                if(S.empty() || S.top() != '[') {
                    isValid = false;
                    break;
                }
                S.pop();
            }
        }
        if(!S.empty()) isValid = false;
        if(isValid) cout << "yes\n";
        else cout << "no\n";
    }
}