#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
char name[40005][5];
bool cmp(int a, int b) {
  return strcmp(name[a], name[b]) < 0;
}
int main() {
  int n, k, c;
  vector<int> course[2501];
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%s", name[i]);
    scanf("%d", &c);
    for (int j = 1; j <= c; j++) {
      int id;
      scanf("%d", &id);
      course[id].push_back(i);
    }
  }
  for (int i = 1; i <= k; i++) {
    printf("%d %lu\n", i, course[i].size());
    sort(course[i].begin(), course[i].end(), cmp);
    for (int j = 0; j < course[i].size(); j++) {
      printf("%s\n", name[course[i][j]]);
    }
  }
  return 0;
}