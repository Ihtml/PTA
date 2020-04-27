#include <iostream>
#include <vector>
using namespace std;
int main() {
  int k, n, q;
  cin >> k;
  for (int i = 0; i < k; i++) {
    int pre, flag = 0;
    cin >> n;
    vector<int> v(n);
    for (int j = 0; j < n; j++) {
      cin >> v[j];
      for (int t = 0; t < j; t++) {
        if (v[j] == v[t] || abs(v[j] - v[t]) == abs(j - t)) {
          flag = 1;
          break;
        }
      }
    }
    printf("%s\n", flag ? "NO" : "YES");
  }
  return 0;
}