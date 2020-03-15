#include <iostream>
using namespace std;
int main() {
  double n, a[1001] = {0.0}, ans[2001] = {0.0};
  int k1, k2, e, ctn = 0;
  scanf("%d", &k1);
  for (int i = 0; i < k1; i++) {
    scanf("%d %lf", &e, &n);
    a[e] += n;
  }
  scanf("%d", &k2);
  for (int i = 0; i < k2; i++) {
    scanf("%d %lf", &e, &n);
    for (int j = 0; j <= 1000; j++) {
      if (a[j] != 0.0) {
        ans[j + e] += n * a[j];
      }
    }
  }
  for (int i = 0; i <= 2000; i++) {
    if (ans[i] != 0.0) {
      ctn++;
    }
  }
  printf("%d", ctn);
  for (int i = 2000; i >= 0; i--) {
    if (ans[i] != 0.0) {
      printf(" %d %.1f", i, ans[i]);
    }
  }
  return 0;
}