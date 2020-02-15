#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  string s, S = "PATest";
  vector<int> v(6);
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (S.find(s[i]) != string::npos) {
      v[S.find(s[i])]++;
    }
  }
  int flag = 6;
  while (flag) {
    flag = 6;
    for (int i = 0; i < 6; i++) {
      if (v[i] != 0) {
        cout << S[i];
        v[i]--;
      } else {
        flag--;
      }
    }
  }
  return 0;
}