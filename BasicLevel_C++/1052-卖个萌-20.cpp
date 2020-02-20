#include <iostream>
#include <vector>
using namespace std;
int main() {
  string s;
  vector<vector<string> > v(3);
  for (int i = 0; i < 3; i++) {
    getline(cin, s);
    int t = 0;
    for (int j = 0; j < s.length(); j++) {
      if (s[j] == '[') {
        t = j;
      }
      if (s[j] == ']') {
        v[i].push_back(s.substr(t + 1, j - t - 1));
      }
    }
  }
  int n, a, b, c, d, e;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c >> d >> e;
    if (a > v[0].size() || b > v[1].size() || c > v[2].size() ||
        d > v[1].size() || e > v[0].size() || a < 1 || b < 1 || c < 1 ||
        d < 1 || e < 1) {
      cout << "Are you kidding me? @\\/@" << endl;
      continue;
    }
    cout << v[0][a-1] <<  "(" << v[1][b-1] << v[2][c-1] << v[1][d-1] << ")" << v[0][e-1] << endl;
  }
  return 0;
}