#include <algorithm>
#include <iostream>
using namespace std;
bool judge(string a) {
  int len = a.length();
  for (int i = 0; i < len / 2; i++) {
    if (a[i] != a[len - 1 - i]) {
      return false;
    }
  }
  return true;
}
string sum(string a) {
  string b = a;
  reverse(b.begin(), b.end());
  int len = a.length(), carry = 0;
  for (int i = len - 1; i >= 0; i--) {
    int t = a[i] - '0' + b[i] - '0' + carry;
    a[i] = (t % 10) + '0';
    carry = (t / 10);
  }
  if (carry) {
    a = '1' + a;
  }
  return a;
}
int main() {
  int k, flag = 0;
  string n;
  cin >> n >> k;
  for (int i = 0; i < k; i++) {
    if (judge(n)) {
      cout << n << endl << i;
      flag = 1;
      break;
    } else {
      n = sum(n);
    }
  }
  if (!flag) {
    cout << n << endl << k;
  }
  return 0;
}