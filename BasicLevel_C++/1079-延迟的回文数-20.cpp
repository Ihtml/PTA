#include <algorithm>
#include <iostream>
using namespace std;
bool judge(string s) {
  if (s == "0") {
    return true;
  }
  int l = s.length() / 2;
  int k = s.length() - 1;
  for (int i = 0; i < l; i++) {
    if (s[i] != s[k - i])
      return false;
  }
  return true;
}
string sum(string a, string b) {
  string c;
  int carry = 0, t;
  for (int i = a.length() - 1; i >= 0; i--) {
    t = (a[i] - '0') + (b[i] - '0') + carry;
    if (t >= 10) {
      t = t % 10;
      carry = 1;
    } else {
      carry = 0;
    }
    char x = '0' + t;
    c = c + x;
  }
  c = carry == 1 ? c + "1" : c;
  reverse(c.begin(), c.end());
  return c;
}
int main() {
  string s, sb, res;
  cin >> s;
  if (judge(s)) {
    printf("%s is a palindromic number.", s.c_str());
    return 0;
  }
  for (int i = 0; i < 11; i++) {
    if (i == 10) {
      printf("Not found in 10 iterations.");
      return 0;
    }
    sb = s;
    reverse(sb.begin(), sb.end());
    string temp = sum(s, sb);
    printf("%s + %s = %s\n", s.c_str(), sb.c_str(), temp.c_str());
    s = temp;
    if (judge(temp)) {
      printf("%s is a palindromic number.", temp.c_str());
      return 0;
    }
  }
}