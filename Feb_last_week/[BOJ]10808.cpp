#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    for (char a = 'a'; a <= 'z'; a++) {
        int cnt = 0;
        for (auto c : str)
            if (a == c) cnt++;
        cout << cnt << ' ';
    }
}
