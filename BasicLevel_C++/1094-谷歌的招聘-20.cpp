#include <iostream>
using namespace std;
bool isPrime(int a) {
  if (a == 0 || a == 1)
    return false;
  for (int i = 2; i * i <= a; i++) {
    if (a % i == 0) {
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
      cout << t;
      return 0;
    }
  }
  cout << 404;
  return 0;
}