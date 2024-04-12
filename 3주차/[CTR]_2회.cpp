// https://inha.codetree.ai/missions/5/problems/pair-parentheses-2/description
#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;
  
  int cnt = 0;
  for(int i = 0; i < str.size()-1; i++) {
    if(str[i] == '(' && str[i+1] == '(') {
      for(int j = i; j < str.size()-1; j++) {
        if(str[j] == ')' && str[j+1] == ')') {
          cnt++;
        }
      }
    }
  }

  cout << cnt;
  return 0;
}
