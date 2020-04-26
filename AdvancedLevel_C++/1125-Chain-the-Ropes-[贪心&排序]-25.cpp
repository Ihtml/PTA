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
  int sum = (v[0] + v[1]) / 2;
  for (int i = 2; i < n; i++) {
    sum = (sum + v[i]) / 2;
  }
  cout << sum;
  return 0;
}