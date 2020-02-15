#include <iostream>
#include <algorithm>
#include <vector>
struct student {
  long long num;
  int test;
  int seat;
};
bool cmp(student a, student b) {
  return a.test < b.test;
}
using namespace std;
int main() {
  int n, m, t, test, seat;
  long long num;
  student a;
  cin >> n;
  vector<student> v(n);
  for (int i = 0; i < n; i++) {
    scanf("%lld %d %d", &a.num, &a.test, &a.seat);
    v[i] = a;
  }
  sort(v.begin(), v.end(), cmp);
  cin >> m;
  for (int i = 0; i < m; i++) {
      cin >> t;
    if (i != 0) {
      cout << endl;
    }
    cout << v[t-1].num << " " << v[t-1].seat;
  }
  return 0;
}