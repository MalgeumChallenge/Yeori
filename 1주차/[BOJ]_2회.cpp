// https://www.acmicpc.net/problem/11723
#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int bitmask = 0; 
  int M;
  cin >> M;

  while (M--) {
      string op;
      int x;
      cin >> op;

      if (op == "add") {
          cin >> x;
          bitmask |= (1 << (x - 1)); // x번째 비트를 1로 설정하여 x를 집합에 추가
      } else if (op == "remove") {
          cin >> x;
          bitmask &= ~(1 << (x - 1)); // x번째 비트를 0으로 설정하여 x를 집합에서 제거
      } else if (op == "check") {
          cin >> x;
          int result = (bitmask & (1 << (x - 1))) ? 1 : 0; // x번째 비트가 1이면 속하고, 0이면 속하지 않음
          cout << result << '\n';
      } else if (op == "toggle") {
          cin >> x;
          bitmask ^= (1 << (x - 1)); // x번째 비트가 1이면 0으로, 0이면 1로 변경하여 toggle
      } else if (op == "all") {
          bitmask = (1 << 20) - 1; // 비트마스크를 모두 1로 설정하여 모든 숫자를 집합에 추가
      } else if (op == "empty") {
          bitmask = 0; // 비트마스크를 모두 0으로 설정하여 집합을 공집합으로 만듦
      }
  }

  return 0;
}
