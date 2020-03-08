#include <iostream>
using namespace std;
bool isPrime(int a) {
  if (a < 5) {
    return a == 2 || a == 3;
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
  int l, k, flag = 0;
  string s;
  cin >> l >> k >> s;
  for (int i = 0; i + k <= l; i++) {
    string t = s.substr(i, k);
    int a = stoi(t);
    if (isPrime(a)) {
      t = to_string(a);
      t.insert(0, k-t.length(), '0');
      cout << t;
      flag = 1;
      return 0;
    }
  }
  if (!flag) {
    cout << 404;
  }
  return 0;
}