#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    if (a.size() == b.size()) // 길이가 같으면 사전 순으로
        return a < b;
    return a.size() < b.size(); // 길이가 짧은 것부터
}

int main() {
    int N;
    cin >> N;

    unordered_set<string> uniqueStrings; // 중복을 허용하지 않는 set을 사용하여 중복 체크
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        uniqueStrings.insert(str);
    }

    vector<string> vec(uniqueStrings.begin(), uniqueStrings.end()); // set을 vector로 변환
    sort(vec.begin(), vec.end(), compare);
    for (auto y : vec) {
        cout << y << '\n';
    }
}