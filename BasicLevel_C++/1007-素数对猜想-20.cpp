#include <cmath>
#include <iostream>
using namespace std;
bool isPrime(int n) {
  if (n % 6 != 1 && n % 6 != 5) {
    return false;
  }
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int n, ctn = 0, tmp = 3;
  cin >> n;
  for (int i = 5; i <= n; i++) {
    if (isPrime(i)) {
      if (i - tmp == 2) {
        ctn++;
      }
      tmp = i;
    }
  }
  cout << ctn;
  return 0;
}