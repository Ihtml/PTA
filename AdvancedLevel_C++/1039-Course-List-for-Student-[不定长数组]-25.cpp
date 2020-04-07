#include <algorithm>
#include <cstdio>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
  char name[5];
  unordered_map<string, vector<int> > mp;
  int n, k, id, m;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < k; i++) {
    scanf("%d %d", &id, &m);
    for (int i = 0; i < m; i++) {
      scanf("%s", name);
      mp[name].push_back(id);
    }
  }
  for (int i = 0; i < n; i++) {
    scanf("%s", name);
    int len = mp[name].size();
    if (len) {
      sort(mp[name].begin(), mp[name].end());
      printf("%s %d", name, len);
      for (int i = 0; i < len; i++) {
        printf(" %d", mp[name][i]);
      }
      printf("\n");
    } else {
      printf("%s 0\n", name);
    }
  }
  return 0;
}