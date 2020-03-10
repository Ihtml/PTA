#include <iostream>
#include <vector>
using namespace std;
int main() {
  int k, n, ctn = 0;
  double a;
  vector<double> v(1001);
  for (int i = 0; i < 2; i++) {
    cin >> k;
    for (int j = 0; j < k; j++) {
      cin >> n >> a;
      v[n] += a;
    }
  }
  for (int i = 0; i < v.size(); i++) {
    if (v[i] != 0) ctn++;
  }
  cout << ctn;
  for (int i = v.size() - 1; i >= 0; i--) {
    if (v[i] != 0) printf(" %d %.1f", i, v[i]);
  }
  return 0;
}