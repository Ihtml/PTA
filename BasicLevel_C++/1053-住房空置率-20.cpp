#include <iostream>
using namespace std;
int main() {
  int n, D;
  float N, e, t, ctna = 0, ctnb = 0;
  cin >> N >> e >> D;
  for (int i = 0; i < N; i++) {
    cin >> n;
    int q = 0;
    for (int j = 0; j < n; j++) {
      cin >> t;
      if (t < e) {
        q++;
      }
    }
    if (q > n / 2) {
      n > D ? ctnb++ : ctna++;
    }
  }
  printf("%.1f%% %.1f%%", ctna * 100 / N, ctnb * 100 / N);
  return 0;
}