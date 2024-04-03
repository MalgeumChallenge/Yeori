// https://inha.codetree.ai/missions/5/problems/awkward-digits-2/description
#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main() {
  // 변수 선언 및 입력
  string binary;
  cin >> binary;
  int total = 0;
  
  // 입력된 숫자에 0이 포함되어 있는 경우
  if(binary.find('0') != string::npos) {
    // 첫 번째 0을 찾아 1로 바꾸고 그 결과를 출력
    for(int i = 0; i < binary.size(); i++) {
      if(binary[i] == '0') {
        binary[i] = '1';
        for(int j = 0; j < binary.size(); j++) {
          total = total * 2 + (binary[j] - '0');
        }
        break;
      }
    }
    cout << total << '\n';
  } else { // 입력된 숫자에 0이 포함되지 않은 경우
    for(int i = binary.size(); i >= 0; i--) { // 맨 마지막 1을 찾아 0으로 바꿈
      if(binary[i] == '1') {
        binary[i] = '0';
        for(int j = 0; j < binary.size(); j++) {
          total = total * 2 + (binary[j] - '0');
        }
        break;
      }
    }
    cout << total << '\n';
  }
  
    return 0;
}
