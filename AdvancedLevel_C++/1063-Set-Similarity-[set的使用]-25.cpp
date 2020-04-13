#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main() {
  int n, m, k;
  scanf("%d", &n);
  vector<unordered_set<int> > v(n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &m);
    for (int j = 0; j < m; j++) {
      int t;
      scanf("%d", &t);
      v[i].insert(t);
    }
  }
  scanf("%d", &k);
  for (int i = 0; i < k; i++) {
    int a, b;
    float ctn = 0.0, total = 0.0;
    scanf("%d%d", &a, &b);
    for (auto it = v[a-1].begin(); it != v[a-1].end(); it++) {
      if (v[b-1].count(*it)) {
        ctn++;
      }
    }
    total = v[a-1].size() + v[b-1].size() - ctn;
    printf("%.1f%%\n", ctn * 100 / total);
  }
  return 0;
}