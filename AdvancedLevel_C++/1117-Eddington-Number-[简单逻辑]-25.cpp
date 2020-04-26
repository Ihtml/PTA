#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(int a, int b) {
  return a > b;
}
int main() {
  int n, e;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] > i + 1) {
      e = i + 1;
      break;
    }
  }
  cout << e;
  return 0;
}