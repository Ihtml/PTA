#include <iostream>
using namespace std;
int main() {
  int n, i = 0;
  cin >> n;
  int m[3] = {0};
  while (n != 0) {
    m[i++] = n % 10;
    n = n / 10;
  }
  for (int i = 0; i < m[2]; i++) {
    cout << "B";
  }
  for (int i = 0; i < m[1]; i++) {
    cout << "S";
  }
  for (int i = 0; i < m[0]; i++) {
    cout << i + 1;
  }
  return 0;
}