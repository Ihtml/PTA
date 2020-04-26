#include <iostream>
using namespace std;
bool isPrime(int a) {
  if (a < 5) {
    if (a == 2 || a == 3) {
      return true;
    } else {
      return false;
    }
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
  int n, k, t;
  cin >> n;
  int list[10000] = {0};
  for (int i = 1; i <= n; i++) {
    cin >> t;
    if (i == 1) {
      list[t] = 1;
    } else if (isPrime(i)) {
      list[t] = 2;
    } else {
      list[t] = 3;
    }
  }
  cin >> k;
  for (int i = 0; i < k; i++) {
    cin >> t;
    if (list[t] == 1) {
      printf("%04d: Mystery Award\n", t);
      list[t] = -1;
    } else if (list[t] == 2) {
      printf("%04d: Minion\n", t);
      list[t] = -1;
    } else if (list[t] == 3) {
      printf("%04d: Chocolate\n", t);
      list[t] = -1;
    } else if (list[t] == -1) {
      printf("%04d: Checked\n", t);
    } else {
      printf("%04d: Are you kidding?\n", t);
    }
  }
  return 0;
}