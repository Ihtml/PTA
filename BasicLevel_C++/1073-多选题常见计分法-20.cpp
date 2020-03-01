#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, v, t, o, max = 0;
  scanf("%d%d", &n, &m);
  vector<int> value(m);
  vector<int> right(m);
  vector<vector<int> > wrong(m, vector<int>(5));
  int hash[] = {1, 2, 4, 8, 16};
  for (int i = 0; i < m; i++) {
    scanf("%d%d%d", &v, &t, &o);
    value[i] = v;
    char c;
    for (int j = 0; j < o; j++) {
      scanf(" %c", &c);
      right[i] += hash[c - 'a'];
    }
  }
  for (int i = 0; i < n; i++) {
    getchar();
    float tot = 0;
    for (int j = 0; j < m; j++) {
      if (j != 0) {
        scanf(" ");
      }
      int t, ans = 0;
      char c;
      scanf("(%d", &t);
      for (int k = 0; k < t; k++) {
        scanf(" %c", &c);
        ans += hash[c - 'a'];
      }
      scanf(")");
      int res = ans ^ right[j];
      if (res) {
        if ((ans | right[j]) == right[j]) {
          tot += (float)value[j] / 2;
        }
        for (int k = 0; k < 5; k++) {
          if (res & hash[k]) {
            wrong[j][k]++;
            max = wrong[j][k] > max ? wrong[j][k] : max;
          }
        }
      } else {
        tot += value[j];
      }
    }
    printf("%.1f\n", tot);
  }
  if (max == 0) {
    printf("Too simple");
  } else {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < 5; j++) {
        if (wrong[i][j] == max) {
          printf("%d %d-%c\n", max, i + 1, 'a' + j);
        }
      }
    }
  }
  return 0;
}