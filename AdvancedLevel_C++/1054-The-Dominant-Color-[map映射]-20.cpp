#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  unordered_map<int, int> mp;
  int m, n, d;
  scanf("%d%d", &m, &n);
  int half = m * n / 2;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int t;
      scanf("%d", &t);
      mp[t]++;
      if (mp[t] > half) {
        printf("%d", t);
        return 0;
      }
    }
  }
  return 0;
}