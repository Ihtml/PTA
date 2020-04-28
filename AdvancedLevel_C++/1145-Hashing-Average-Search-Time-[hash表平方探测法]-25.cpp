#include <iostream>
#include <vector>
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
  int max, n, m, key;
  cin >> max >> n >> m;
  while (!isPrime(max)) {
    max++;
  }
  vector<int> v(max);
  for (int i = 0; i < n; i++) {
    cin >> key;
    int flag = 0;
    for (int i = 0; i <= max - 1; i++) {
      int pos = (key + i * i) % max;
      if (v[pos] == 0) {
        flag = 1;
        v[pos] = key;
        break;
      }
    }
    if (!flag) {
      printf("%d cannot be inserted.\n", key);
    }
  }
  int ctn = 0;
  for (int i = 0; i < m; i++) {
    cin >> key;
    for (int j = 0; j <= max; j++) {
      ctn++;
      int pos = (key + j * j) % max;
      if (v[pos] == key || v[pos] == 0)
        break;
    }
  }
  printf("%.1f", ctn * 1.0 / m);
  return 0;
}