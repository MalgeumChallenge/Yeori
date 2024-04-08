// https://inha.codetree.ai/missions/5/problems/a-room-in-a-circle/description
#include <iostream>
#include <climits>
using namespace std;

int main() {
  int N;
  cin >> N;

  int ary[N];
  for(int i = 0; i < N; i++) {
    cin >> ary[i];
  }

  int result = INT_MAX;
  for(int i = 0; i < N; i++) {
    int x = i;
    int total = 0;
    for(int j = 0; j < N; j++) {
      x++;
      int count = x % N;
      if (count == i) continue;
      total += ary[count] * (j+1);
    }
    result = min(result, total);
  }
  cout << result;
  return 0;
}
