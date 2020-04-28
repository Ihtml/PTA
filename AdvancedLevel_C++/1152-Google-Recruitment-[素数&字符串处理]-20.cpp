#include <iostream>
using namespace std;
bool isPrime(int a) {
  if (a < 5) {
    if (a == 2 || a == 3) {
      return true;
    }
    return false;
  }
  if (a % 6 != 1 && a % 6 != 5) {
    return false;
  }
  for (int i = 5; i * i <= a; i += 6) {
    if (a % i == 0 || a % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int l, k, idx, flag = 0;
  string s;
  cin >> l >> k;
  cin >> s;
  for (idx = 0; idx < s.length() - k + 1; idx++) {
    if (s[idx] != '0') {
      break;
    }
  }
  for (int i = idx; i < s.length() - k + 1; i++) {
    string str = s.substr(i, k);
    int t = stoi(str);
    if (isPrime(t)) {
      cout << str;
      flag = 1;
      break;
    }
  }
  if (!flag) {
    cout << 404;
  }
  return 0;
}