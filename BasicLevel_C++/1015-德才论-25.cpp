#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct obj {
  int num, de, cai;
};
bool cmp(obj a, obj b) {
  if (a.de + a.cai != b.de + b.cai) {
    return a.de + a.cai > b.de + b.cai;
  } else if (a.de != b.de) {
    return a.de > b.de;
  } else {
    return a.num < b.num;
  }
}
int main() {
  int n, L, H, total;
  vector<obj> v[4];
  obj o;
  scanf("%d %d %d", &n, &L, &H);
  total = n;
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &o.num, &o.de, &o.cai);
    if (o.de < L || o.cai < L) {
      total--;
    } else if (o.de >= H && o.cai >= H) {
      v[0].push_back(o);
    } else if (o.de >= H && o.cai < H) {
      v[1].push_back(o);
    } else if (o.de >= o.cai && o.de < H && o.cai < H) {
      v[2].push_back(o);
    } else {
      v[3].push_back(o);
    }
  }
  printf("%d\n", total);
  for (int i = 0; i < 4; i++) {
    sort(v[i].begin(), v[i].end(), cmp);
    for (int j = 0; j < v[i].size(); j++) {
      printf("%d %d %d\n", v[i][j].num, v[i][j].de, v[i][j].cai);
    }
  }
  return 0;
}