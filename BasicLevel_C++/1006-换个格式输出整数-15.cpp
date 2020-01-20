#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n, b, s, g;
  string str;
  cin >> n;
  b = floor(n / 100);
  s = floor((n - b * 100) / 10);
  g = n - 100 * b - 10 * s;
  for (int i = 0; i < b; i++) {
    str += "B";
  }
  for (int i = 0; i < s; i++) {
    str += "S";
  }
  cout << str;
  for (int i = 1; i <= g; i++) {
    cout << i;
  }
  return 0;
}