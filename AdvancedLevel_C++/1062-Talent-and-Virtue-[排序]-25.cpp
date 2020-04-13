#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct obj {
  int id, de, cai, total;
};
bool cmp(obj a, obj b) {
  return a.total != b.total ? a.total > b.total
                            : a.de != b.de ? a.de > b.de : a.id < b.id;
}
int main() {
  int n, l, h;
  scanf("%d %d %d", &n, &l, &h);
  vector<obj> v[4];
  for (int i = 0; i < n; i++) {
    obj a;
    scanf("%d %d %d", &a.id, &a.de, &a.cai);
    if (a.de >= l && a.cai >= l) {
      a.total = a.de + a.cai;
      if (a.de >= h && a.cai >= h) {
        v[0].push_back(a);
      } else if (a.de >= h) {
        v[1].push_back(a);
      } else if (a.de >= a.cai) {
        v[2].push_back(a);
      } else {
        v[3].push_back(a);
      }
    }
  }
  for (int i = 0; i < 4; i++) {
    sort(v[i].begin(), v[i].end(), cmp);
  }
  printf("%lu\n", v[0].size() + v[1].size() + v[2].size() + v[3].size());
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < v[i].size(); j++) {
      printf("%d %d %d\n", v[i][j].id, v[i][j].de, v[i][j].cai);
    }
  }
  return 0;
}