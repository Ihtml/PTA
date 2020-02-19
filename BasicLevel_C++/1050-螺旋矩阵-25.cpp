#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(int a, int b) {
  return a > b;
}
int main() {
  int N, m, n;
  scanf("%d", &N);
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  sort(a.begin(), a.end(), cmp);
  for (n = sqrt((double)N); n >= 1; n--) {
    if (N % n == 0) {
      m = N / n;
      break;
    }
  }
  vector<vector<int> > b(m, vector<int>(n));
  int k = 0, lev = m / 2 + m % 2;
  for (int i = 0; i < lev; i++) {
    for (int j = i; j < n - i && k <= N - 1; j++) {
      b[i][j] = a[k++];
    }
    for (int j = i + 1; j < m - i - 1 && k <= N - 1; j++) {
      b[j][n - i - 1] = a[k++];
    }
    for (int j = n - i - 1; j > i && k <= N - 1; j--) {
      b[m - i - 1][j] = a[k++];
    }
    for (int j = m - i - 1; j > i && k <= N - 1; j--) {
      b[j][i] = a[k++];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (j != 0) {
        printf(" ");
      }
      printf("%d", b[i][j]);
    }
    printf("\n");
  }
  return 0;
}