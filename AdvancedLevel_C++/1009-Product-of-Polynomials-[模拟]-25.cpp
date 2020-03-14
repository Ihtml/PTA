#include <iostream>
#include <map>
using namespace std;
int main() {
  map<int, double> a, b, c;
  double n;
  int k, e, ctn=0;
  for (int i = 0; i < 2; i++) {
    cin >> k;
    for (int j = 0; j < k; j++) {
      cin >> e >> n;
      if (i == 0) {
        a[e] += n;
      } else {
        b[e] += n;
      }
    }
  }
  for (auto i = a.begin(); i != a.end(); i++) {
    for (auto j = b.begin(); j != b.end(); j++) {
      c[(i->first) + (j->first)] += (i->second) * (j->second);
    }
  }
  for (int i = 2000; i >= 0; i--) {
    if (c[i] != 0) {
      ctn++;
    }
  }
  cout << ctn;
  for (int i = 2000; i >= 0; i--) {
    if (c[i] != 0) {
      printf(" %d %.1f", i, c[i]);
    }
  }
  return 0;
}