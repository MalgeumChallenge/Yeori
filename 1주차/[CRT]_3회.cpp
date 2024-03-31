// https://inha.codetree.ai/missions/5/problems/gather/introduction
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ary[n];

  for(int i = 0; i < n; i++) {
      cin >> ary[i];
  }

  int ans = INT_MAX;
  for(int i = 0; i < n; i++) {
    int total = 0;

    for(int j = 0; j < n; j++) {
      if (i == j) continue;
      
      total += (ary[j] * abs(j-i));
    }
    ans = min(ans, total);
  }

  cout << ans;
  
  return 0;
}
