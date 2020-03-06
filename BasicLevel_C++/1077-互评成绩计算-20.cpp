#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int g1, g2 = 0, maxg = -1, ming = m + 1, t, ctn = 0;
    cin >> g1;
    for (int j = 0; j < n - 1; j++) {
      cin >> t;
      if (0 <= t && t <= m) {
        g2 += t;
        ctn++;
        if (t > maxg) maxg = t;
        if (t < ming) ming = t;
      }
    }
    g2 = g2 - maxg - ming;
    cout << int(((g2 * 1.0) / (ctn - 2) + g1 + 1) / 2) << endl;
  }
  return 0;
}