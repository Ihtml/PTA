#include <iostream>
using namespace std;
int main() {
  int n, a, b, aa, bb, c, ctna = 0, ctnb = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> aa >> b >> bb;
    c = a + b;
    if (c == aa && c != bb) {
      ctnb++;
    }
    if (c == bb && c != aa) {
      ctna++;
    }
  }
  cout << ctna << " " << ctnb;
  return 0;
}