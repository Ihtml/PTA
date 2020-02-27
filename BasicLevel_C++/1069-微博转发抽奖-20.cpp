#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int m, n, s, ctn = 0;
  cin >> m >> n >> s;
  vector<string> v(m);
  map<string, int> mp;
  for (int i = 0; i < m; i++) {
    cin >> v[i];
    mp[v[i]] = 0;
  }
  int t = -1;
  for (int i = s - 1; i < m; i++) {
    if (mp[v[i]] == 0) {
      t++;
    } else {
      continue;
    }
    if (t % (n) == 0) {
      cout << v[i] << endl;
      mp[v[i]]++;
      ctn++;
    }
  }
  if (ctn == 0) {
    cout << "Keep going...";
  }
  return 0;
}