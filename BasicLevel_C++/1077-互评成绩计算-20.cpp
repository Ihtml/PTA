#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, t;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    vector<int> v;
    int a, sum = 0;
    cin >> a;
    for (int j = 0; j < n - 1; j++) {
      cin >> t;
      if (t < 0 || t > m)
        continue;
      v.push_back(t);
    }
    sort(v.begin(), v.end());
    for (int k = 1; k < v.size() - 1; k++) {
      sum += v[k];
    }
    sum = sum / (v.size() - 2);
    sum = (sum + a + 1) / 2;
    cout << sum << endl;
  }
  return 0;
}