#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct cake {
  double num, v, p;
};
bool cmp(cake a, cake b) {
  return a.p > b.p;
}
int main() {
  int n;
  double need, tot = 0;
  scanf("%d %lf", &n, &need);
  vector<cake> v(n);
  for (int i = 0; i < n; i++) {
    scanf("%lf", &v[i].num);
  }
  for (int i = 0; i < n; i++) {
    scanf("%lf", &v[i].v);
    v[i].p = v[i].v / v[i].num;
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i < n && need > 0; i++) {
    if (v[i].num > need) {
      tot += need * v[i].p;
      need = 0;
    } else {
      tot += v[i].v;
      need -= v[i].num;
    }
  }
  printf("%.2lf", tot);
  return 0;
}
