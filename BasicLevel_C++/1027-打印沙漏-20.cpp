#include <iostream>
using namespace std;
int main() {
  int n, l = 0;
  char s;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    if ((2 * i + 4) * i + 1 > n) {
      l = i - 1;
      break;
    }
  }
  for (int i = l; i >= 1; i--) {
    for (int j = 0; j < l - i; j++) {
      cout << " ";
    }
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << s;
    }
    cout << endl;
  }
  for (int i = 0; i < l; i++) {
    cout << " ";
  }
  cout << s << endl;
  for (int i = 1; i <= l; i++) {
    for (int j = 0; j < l - i; j++) {
      cout << " ";
    }
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << s;
    }
    cout << endl;
  }
  cout << n - (2 * l + 4) * l - 1;
  return 0;
}