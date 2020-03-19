#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct obj {
  int id, best, score[4], rank[4];
} v[2001];
int flag = -1;
bool cmp(obj a, obj b) {
  return a.score[flag] > b.score[flag];
}
int main() {
  int n, m, id, isExist[1000001] = {0};
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d%d%d%d", &v[i].id, &v[i].score[1], &v[i].score[2], &v[i].score[3]);
    v[i].score[0] = v[i].score[3] + v[i].score[1] + v[i].score[2];
  }
  for (int i = 0; i < 4; i++) {
    flag = i;
    sort(v, v + n, cmp);
    v[0].rank[i] = 1;
    for (int j = 1; j < n; j++) {
      v[j].rank[i] = j + 1;
      if (v[j].score[i] == v[j - 1].score[i]) {
        v[j].rank[i] = v[j - 1].rank[i];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    int min = 0;
    for (int j = 1; j <= 3; j++) {
      if (v[i].rank[min] > v[i].rank[j]) {
        min = j;
      }
    }
    v[i].best = min;
  }
  for (int i = 0; i < n; i++) {
    isExist[v[i].id] = i + 1;
  }
  char tag[5] = {'A', 'C', 'M', 'E'};
  for (int i = 0; i < m; i++) {
    scanf("%d", &id);
    int t = isExist[id];
    if (t) {
      int best = v[t - 1].best;
      printf("%d %c\n", v[t - 1].rank[best], tag[best]);
    } else {
      printf("N/A\n");
    }
  }
  return 0;
}