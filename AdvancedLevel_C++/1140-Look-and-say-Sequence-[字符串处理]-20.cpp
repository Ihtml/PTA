#include <iostream>
using namespace std;
int main() {
  string s;
  int n;
  cin >> s >> n;
  for (int i = 1; i < n; i++) {
    string st;
    int ctn = 1;
    s = s + "#";
    for (int i = 0; i < s.length() - 1; i++) {
      if (s[i] == s[i + 1]) {
        ctn++;
      } else {
        st += s[i] + to_string(ctn);
        ctn = 1;
      }
    }
    s = st;
  }
  cout << s;
  return 0;
}