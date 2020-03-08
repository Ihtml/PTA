#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, t, maxn = -1, flag = 0;
  cin >> n >> m;
  vector<int> v(n), a;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t;
      v[j] += t;
      maxn = max(v[j], maxn);
    }
  }
  cout << maxn << endl;
  for (int i = 0; i < n; i++) {
    if (v[i] == maxn) {
      if (!flag) {
        cout << i + 1;
        flag = 1;
      } else {
        cout << " " << i + 1;
      }
    }
  }
  return 0;
}