#include <iostream>
using namespace std;
int main() {
  string n, a, b, s;
  cin >> n >> a >> b;
  string sa(n.length() - a.length(), '0');
  string sb(n.length() - b.length(), '0');
  a = sa + a;
  b = sb + b;
  s = n;
  int carry = 0, flag = 0;
  for (int i = n.length() - 1; i >= 0; i--) {
    int t = n[i] == '0' ? 10 : (n[i] - '0');
    s[i] = (a[i] - '0' + b[i] - '0' + carry) % t + '0';
    carry = (a[i] - '0' + b[i] - '0' + carry) / t;
  }
  if (carry != 0) s = '1' + s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != '0' || flag == 1) {
      flag = 1;
      cout << s[i];
    }
  }
  if (flag == 0) cout << 0;
  return 0;
}