#include <iostream>
using namespace std;
int main() {
  string s;
  int b, q, r;
  cin >> s >> b;
  int len = s.length();
  q = (s[0] - '0') / b;
  r = (s[0] - '0') % b;
  if (len == 1 || (len > 1 && q != 0)) {
    cout << q;
  }
  for (int i = 1; i < len; i++) {
    q = (r * 10 + s[i] - '0') / b;
    r = (r * 10 + s[i] - '0') % b;
    cout << q;
  }
  cout << " " << r;
  return 0;
}