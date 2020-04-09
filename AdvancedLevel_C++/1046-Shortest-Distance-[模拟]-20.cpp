#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, a, b, total = 0;
  cin >> n;
  vector<int> dis(n + 1);
  for (int i = 1; i <= n; i++) {
    int t;
    cin >> t;
    total += t;
    dis[i] = total;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    int d = 0;
    cin >> a >> b;
    if (a > b) {
      swap(a, b);
    }
    d = dis[b - 1] - dis[a - 1];
    d = min(d, total - d);
    cout << d << endl;
  }
  return 0;
}