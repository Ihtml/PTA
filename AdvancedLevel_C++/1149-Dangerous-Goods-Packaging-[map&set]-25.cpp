#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main() {
  int n, m, a, b;
  scanf("%d %d", &n, &m);
  map<int, set<int> > mp;
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);
    mp[a].insert(b);
    mp[b].insert(a);
  }
  for (int i = 0; i < m; i++) {
    int num, flag = 0;
    scanf("%d", &num);
    vector<int> temp(num), book(1000001);
    for (int j = 0; j < num; j++) {
      scanf("%d", &temp[j]);
      book[temp[j]] = 1;
    }
    for (int j = 0; j < num; j++) {
      int t = temp[j];
      if (mp[t].size() != 0) {
        for (auto it = mp[t].begin(); it != mp[t].end(); it++) {
          if (book[*it]) {
            flag = 1;
            break;
          }
        }
      }
      if (flag) {
        printf("No\n");
        break;
      }
    }
    if (flag == 0) {
      printf("Yes\n");
    }
  }
  return 0;
}