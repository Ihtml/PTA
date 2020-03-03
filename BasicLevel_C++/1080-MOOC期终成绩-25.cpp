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
  int p, m, n, t;
  string name;
  map<string, obj> mp;
  cin >> p >> m >> n;
  for (int i = 0; i < p; i++) {
    cin >> name >> t;
    if (t >= 200) {
      mp[name].p = t;
      mp[name].name = name;
      mp[name].mid = -1;
      mp[name].final = 0;
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> name >> t;
    mp[name].mid = t;
    mp[name].name = name;
  }
  for (int i = 0; i < n; i++) {
    cin >> name >> t;
    mp[name].final = t;
    mp[name].name = name;
  }
  vector<obj> v;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    string name = it->first;
    if (mp[name].p) {
      mp[name].g = mp[name].mid > mp[name].final
                       ? (mp[name].mid * 4 + mp[name].final * 6 + 5) / 10
                       : mp[name].final;
      if (mp[name].g >= 60)
        v.push_back(mp[name]);
    }
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i < v.size(); i++) {
    printf("%s %d %d %d %d\n", v[i].name.c_str(), v[i].p, v[i].mid, v[i].final,
           v[i].g);
  }
  return 0;
}