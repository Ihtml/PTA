#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n < 5) {
    cout << 0;
    return 0;
  }
  if (n == 5) {
    cout << 1;
    return 0;
  }
  int count = 1, p = 5, s;
  for (int i = 6; i <= n; i++) {
    bool flag = true;
    if (i % 6 != 1 && i % 6 != 5) {
      flag = false;
      continue;
    }
    s = sqrt(i);
    for (int j = 5; j <= s; j += 6) {
      if (i % j == 0 || i % (j + 2) == 0) {
        flag = false;
        break;
      }
    }
    if (flag == true) {
      if (i - p == 2) {
        count++;
      }
      p = i;
    }
  }
  cout << count;
  return 0;
}