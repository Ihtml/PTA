#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, a, b, t, total = 0;
  cin >> n;
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    total += arr[i];
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    int d = 0;
    cin >> a >> b;
    if (a > b) {
      t = a;
      a = b;
      b = t;
    }
    for (int i = a; i <= b - 1; i++) {
      d += arr[i];
    }
    d = d < total - d ? d : total - d;
    cout << d << endl;
  }
  return 0;
}