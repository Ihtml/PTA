#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
struct obj {
  string name;
  int p, mid, final, g;
};
bool cmp(obj a, obj b) {
  return a.g != b.g ? a.g > b.g : a.name < b.name;
}
int main() {
  int p, m, n, t, ctn = 1;
  string name;
  map<string, int> mp;
  cin >> p >> m >> n;
  vector<obj> v, res;
  for (int i = 0; i < p; i++) {
    cin >> name >> t;
    if (t >= 200) {
      obj o;
      o.name = name;
      o.p = t;
      o.mid = -1;
      o.final = -1;
      o.g = 0;
      v.push_back(o);
      mp[name] = ctn;
      ctn++;
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> name >> t;
    if (mp[name]) {
      v[mp[name] - 1].mid = t;
    }
  }
  for (int i = 0; i < n; i++) {
    cin >> name >> t;
    if (mp[name]) {
      v[mp[name] - 1].final = t;
    }
  }
  for (int i = 0; i < v.size(); i++) {
    v[i].g = v[i].mid > v[i].final
                 ? int(v[i].mid * 0.4 + v[i].final * 0.6 + 0.5)
                 : v[i].final;
    if (v[i].g >= 60)
      res.push_back(v[i]);
  }
  sort(res.begin(), res.end(), cmp);
  for (int i = 0; i < res.size(); i++) {
    printf("%s %d %d %d %d\n", res[i].name.c_str(), res[i].p, res[i].mid,
           res[i].final, res[i].g);
  }
  return 0;
}