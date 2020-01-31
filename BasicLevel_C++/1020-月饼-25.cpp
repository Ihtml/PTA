#include <algorithm>
#include <iostream>
#include <vector>
struct bin {
  float num, p, u;
};
bool cmp(bin a, bin b) {
  return a.u > b.u;
}
using namespace std;
int main() {
  int n, sum;
  cin >> n >> sum;
  vector<bin> v(n);
  for (int i = 0; i < n; i++) {
    scanf("%f", &v[i].num);
  }
  for (int i = 0; i < n; i++) {
    scanf("%f", &v[i].p);
  }
  for (int i = 0; i < n; i++) {
    v[i].u = v[i].p / v[i].num;
  }
  sort(v.begin(), v.end(), cmp);
  float tp = 0;
  for (int i = 0; i < n; i++) {
    if (v[i].num < sum) {
      tp += v[i].p;
    } else {
      tp += v[i].u * sum;
      break;
    }
    sum = sum - v[i].num;
  }
  printf("%.2f", tp);
  return 0;
}