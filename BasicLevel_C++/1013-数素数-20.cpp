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
  int m, n;
  cin >> m >> n;
  for (int i = 1, count = 0, ctn = 0; count < n; i++) {
    if (isPrime(i)) {
      count++;
      if (count >= m) {
        ctn++;
        if (ctn != 1 && ctn % 10 == 1) {
          printf("\n");
        }
        if (ctn % 10 == 1) {
          printf("%d", i);
        } else {
          printf(" %d", i);
        }
      }
    }
  }
  return 0;
}