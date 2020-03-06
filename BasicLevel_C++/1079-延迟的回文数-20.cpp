#include <algorithm>
#include <iostream>
using namespace std;
string rev(string s) {
  reverse(s.begin(), s.end());
  return s;
}
string sum(string a, string b) {
  int carry = 0;
  string s = a;
  for (int i = s.length() - 1; i >= 0; i--) {
    s[i] = (a[i] - '0' + b[i] - '0' + carry) % 10 + '0';
    carry = (a[i] - '0' + b[i] - '0' + carry) / 10;
  }
  if (carry == 1)
    s = '1' + s;
  return s;
}
int main() {
  string s, sb, res;
  int ctn = 10;
  cin >> s;
  if (rev(s) == s) {
    cout << s << " is a palindromic number.";
    return 0;
  }
  while (ctn--) {
    sb = rev(s);
    res = sum(s, sb);
    cout << s << " + " << sb << " = " << res << endl;
    if (rev(res) == res) {
      cout << res << " is a palindromic number.";
      return 0;
    }
    s = res;
  }
  cout << "Not found in 10 iterations.";
  return 0;
}