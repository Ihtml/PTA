#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
struct stu {
  int gp, gm, gf, gt;
  string id;
};
bool cmp(stu a, stu b) {
  return a.gt == b.gt ? a.id < b.id : a.gt > b.gt;
}
int main() {
  int p, m, f, t, ctn = 0;
  string id;
  cin >> p >> m >> f;
  vector<stu> v;
  map<string, int> mp;
  for (int i = 0; i < p; i++) {
    cin >> id >> t;
    if (t < 200) {
      continue;
    }
    stu a;
    a.id = id;
    a.gp = t;
    a.gm = -1;
    a.gf = -1;
    a.gt = -1;
    v.push_back(a);
    mp[id] = ++ctn;
  }
  for (int i = 0; i < m; i++) {
    cin >> id >> t;
    if (!mp[id]) {
      continue;
    } else {
      v[mp[id] - 1].gm = t;
    }
  }
  for (int i = 0; i < f; i++) {
    cin >> id >> t;
    if (!mp[id]) {
      continue;
    } else {
      v[mp[id] - 1].gf = t;
    }
  }
  for (int i = 0; i < v.size(); i++) {
    int g = v[i].gm > v[i].gf ? v[i].gm * 4 + v[i].gf * 6 : v[i].gf * 10;
    v[i].gt = (g + 5) / 10;
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i < v.size(); i++) {
    if (v[i].gt < 60) {
      break;
    }
    printf("%s %d %d %d %d\n", v[i].id.c_str(), v[i].gp, v[i].gm, v[i].gf,v[i].gt);
  }
  return 0;
}