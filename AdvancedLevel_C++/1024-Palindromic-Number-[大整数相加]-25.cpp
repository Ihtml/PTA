#include <algorithm>
#include <iostream>
using namespace std;
string s;
void sum(string t) {
  int carry = 0, len = s.length();
  for (int i = len - 1; i >= 0; i--) {
    int temp = s[i] - '0' + t[i] - '0' + carry;
    s[i] = temp % 10 + '0';
    carry = temp / 10;
  }
  if (carry) s = '1' + s;
}
int main() {
  int k, i;
  cin >> s >> k;
  for (i = 0; i <= k; i++) {
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t || i == k) break;
    sum(t);
  }
  cout << s << endl << i;
  return 0;
}