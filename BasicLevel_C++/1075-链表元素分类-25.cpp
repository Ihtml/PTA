#include <iostream>
#include <vector>
using namespace std;
int main() {
  int data[100000], next[100000];
  vector<vector<int> > v(3);
  int first, n, k, idx, t, addr;
  cin >> first >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> idx >> t >> addr;
    data[idx] = t;
    next[idx] = addr;
  }
  while (first != -1) {
    t = data[first];
    if (t < 0) {
      v[0].push_back(first);
    } else if (t <= k) {
      v[1].push_back(first);
    } else {
      v[2].push_back(first);
    }
    first = next[first];
  }
  int flag = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < v[i].size(); j++) {
      if (flag == 0) {
        printf("%05d %d ", v[i][j], data[v[i][j]]);
        flag = 1;
      } else {
        printf("%05d\n%05d %d ", v[i][j], v[i][j], data[v[i][j]]);
      }
    }
  }
  printf("-1");
  return 0;
}