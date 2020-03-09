#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  int a, b, c;
  string s, ss;
  cin >> a >> b;
  c = a + b;
  if (c < 0) {
    cout << "-";
  }
  s = to_string(abs(c));
  reverse(s.begin(), s.end());
  for (int i = 1; i <= s.length(); i++) {
    ss += s[i - 1];
    if (i % 3 == 0 && i != s.length()) {
      ss += ",";
    }
  }
  reverse(ss.begin(), ss.end());
  cout << ss;
  return 0;
}