#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int k = n / 2, s1 = 0, s2 = 0;
  for (int i = 0; i < k; i++) {
    s1 += v[i];
  }
  for (int i = k; i < n; i++) {
    s2 += v[i];
  }
  cout << n % 2 << " " << s2 - s1;
  return 0;
}