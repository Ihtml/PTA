#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, t, max = 0;
  cin >> n;
  vector<int> v(n), w(n), y;
  for (int i = 0; i < n; i++) {
    cin >> t;
    v[i] = t;
    w[i] = t;
  }
  sort(w.begin(), w.end());
  for (int i = 0; i < n; i++) {
    if (v[i] == w[i] && v[i] > max) {
      y.push_back(v[i]);
    }
    if (v[i] > max) {
      max = v[i];
    }
  }
  cout << y.size() << endl;
  for (int i = 0; i < y.size(); i++) {
    if (i != 0) {
      cout << " ";
    }
    cout << y[i];
  }
  cout << endl;
  return 0;
}