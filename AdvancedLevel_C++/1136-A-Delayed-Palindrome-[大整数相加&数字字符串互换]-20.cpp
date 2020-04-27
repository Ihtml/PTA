#include <algorithm>
#include <iostream>
using namespace std;
bool judge(string sa) {
  string sb = sa;
  reverse(sb.begin(), sb.end());
  if (sa == sb) {
    return true;
  }
  return false;
}
string stradd(string sa, string sb) {
  int carry = 0;
  string res = "";
  for (int i = 0; i < sa.length(); i++) {
    int t = (sa[i] - '0') + (sb[i] - '0') + carry;
    res = to_string(t % 10) + res;
    carry = t / 10;
  }
  if (carry) {
    res = "1" + res;
  }
  return res;
}
int main() {
  string sa, sb, res;
  cin >> sa;
  for (int i = 0; i < 10; i++) {
    if (judge(sa)) {
      printf("%s is a palindromic number.", sa.c_str());
      return 0;
    } else {
      sb = sa;
      reverse(sb.begin(), sb.end());
      res = stradd(sa, sb);
      printf("%s + %s = %s\n", sa.c_str(), sb.c_str(), res.c_str());
      sa = res;
    }
  }
  printf("Not found in 10 iterations.");
  return 0;
}