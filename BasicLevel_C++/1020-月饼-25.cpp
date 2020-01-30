#include <algorithm>
#include <iostream>
#include <vector>
struct bin {
  float num;
  float p;
};
bool cmp(bin a, bin b) {
  return (a.p / a.num) > (b.p / b.num);
}
using namespace std;
int main() {
  int n, sum;
  float p, num;
  cin >> n >> sum;
  vector<bin> v(n);
  for (int i = 0; i < n; i++) {
    cin >> num;
    v[i].num = num;
  }
  for (int i = 0; i < n; i++) {
    cin >> p;
    v[i].p = p;
  }
  sort(v.begin(), v.end(), cmp);
  float tn = 0.0;
  float tp = 0.0;
  for (int i = 0; i < n; i++) {
    tn += v[i].num;
    if (tn < sum) {
      tp += v[i].p;
    } else if (tn == sum) {
      tp += v[i].p;
      break;
    } else if (tn > sum) {
      float p = (v[i].p / v[i].num);
      tp += v[i].p - (tn - sum) * p;
      break;
    }
  }
  printf("%.2f", tp);
  return 0;
}