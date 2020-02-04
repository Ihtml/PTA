#include <iostream>
using namespace std;
int main() {
  int n, l = 1;
  char s;
  cin >> n >> s;
  int sum = 1;
  for (int i = 1; sum < n; i += 2) {
    if (sum + (i + 2) * 2 > n) {
      break;
    }
    l += 2;
    sum += (i + 2) * 2;
  }
  int h = l / 2;
  int max = 1 + h * 2;
  for (int i = h; i >= 1; i--) {
    for (int k = h - i; k >= 1; k--) {
      cout << " ";
    }
    for (int j = 2 * i + 1; j >= 1; j--) {
      cout << s;
    }
    cout << endl;
  }
  for (int i = 0; i < h; i++) {
    cout << " ";
  }
  cout << s << endl;
  for (int i = 1; i <= h; i++) {
    for (int k = h - i; k >= 1; k--) {
      cout << " ";
    }
    for (int j = 2 * i + 1; j >= 1; j--) {
      cout << s;
    }
    cout << endl;
  }
  cout << n - sum;
  return 0;
}