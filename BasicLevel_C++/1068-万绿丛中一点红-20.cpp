#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int m, n, t, ctn = 0;
  scanf("%d%d%d", &m, &n, &t);
  vector<vector<int> > v(n, vector<int>(m));
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &v[i][j]);
      mp[v[i][j]]++;
    }
  }
  int pos[2];
  int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1},
                   {1, 1},   {1, 0},  {1, -1}, {0, -1}};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mp[v[i][j]] != 1) {
        continue;
      }
      int flag = 1;
      for (int k = 0; k < 8; k++) {
        int tx = i + dir[k][0];
        int ty = j + dir[k][1];
        if (tx >= 0 && tx < n && ty >= 0 && ty < m &&
            v[i][j] - v[tx][ty] >= 0 - t && v[i][j] - v[tx][ty] <= t) {
          flag = 0;
          break;
        }
      }
      if (flag) {
        pos[1] = i + 1;
        pos[0] = j + 1;
        ctn++;
      }
    }
  }
  if (ctn == 0) {
    printf("Not Exist");
  } else if (ctn > 1) {
    printf("Not Unique");
  } else {
    printf("(%d, %d): %d", pos[0], pos[1], v[pos[1] - 1][pos[0] - 1]);
  }
  return 0;
}