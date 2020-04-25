#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct obj {
  int h;
  string name;
};
bool cmp(obj a, obj b) {
  return a.h == b.h ? a.name < b.name : a.h > b.h;
}
int main() {
  int n, k, m;
  cin >> n >> k;
  vector<obj> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].name >> v[i].h;
  }
  sort(v.begin(), v.end(), cmp);
  int t = 0, row = k;
  while (row) {
    if (row == k) {
      m = n - n / k * (k - 1);
    } else {
      m = n / k;
    }
    vector<string> res(m);
    res[m / 2] = v[t].name;
    int j = m / 2 - 1;
    for (int i = t + 1; i < t + m; i += 2) {
      res[j--] = v[i].name;
    }
    j = m / 2 + 1;
    for (int i = t + 2; i < t + m; i+=2) {
      res[j++] = v[i].name;
    }
    cout << res[0];
    for (int i = 1; i < m; i++) {
      cout << " " << res[i];
    }
    cout << endl;
    t = t + m;
    row--;
  }
  return 0;
}