#include <cmath>
#include <iostream>
using namespace std;
int main() {
  long int n, len = 0, first = 0;
  cin >> n;
  int maxn = sqrt(n);
  for (int i = 2; i <= maxn; i++) {
    int j, t = 1;
    for (j = i; j <= maxn; j++) {
      t = t * j;
      if (n % t != 0) {
        break;
      }
    }
    if (j - i > len) {
      len = j - i;
      first = i;
    }
  }
  if (first == 0) {
    cout << 1 << endl << n;
  } else {
    cout << len << endl;
    for (int i = 0; i < len; i++) {
      cout << first + i;
      if (i != len - 1) cout << '*';
    }
  }
  return 0;
}