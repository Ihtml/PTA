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
  cin >> N;
  n = sqrt((double)N);
  for (int i = n; i >= 1; i--) {
    if (N % i == 0) {
      n = i;
      m = N / n;
      break;
    }
  }
  vector<int> v(N);
  vector<vector<int> > mx(m, vector<int>(n));
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), cmp);
  int lev = n / 2 + n % 2, ctn = 0;
  for (int i = 0; i < lev; i++) {
    for (int j = i; j < n - i && ctn <= N - 1; j++) {
      mx[i][j] = v[ctn++];
    }
    for (int j = i + 1; j < m - i - 1 && ctn <= N - 1; j++) {
      mx[j][n - i - 1] = v[ctn++];
    }
    for (int j = n - i - 1; j > i && ctn <= N - 1; j--) {
      mx[m - i - 1][j] = v[ctn++];
    }
    for (int j = m - i - 1; j > i && ctn <= N - 1; j--) {
      mx[j][i] = v[ctn++];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (j != 0) {
        cout << " ";
      }
      cout << mx[i][j];
    }
    cout << endl;
  }
  return 0;
}