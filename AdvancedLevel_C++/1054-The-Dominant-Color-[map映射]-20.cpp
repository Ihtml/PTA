#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  unordered_map<int, int> mp;
  int m, n, d, max = 0;
  scanf("%d%d", &m, &n);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int t;
      scanf("%d", &t);
      mp[t]++;
      if (mp[t] > max) {
        d = t;
        max = mp[t];
      }
    }
  }
  printf("%d", d);
  return 0;
}