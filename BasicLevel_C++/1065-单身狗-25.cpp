#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, a, b, ctn = 0;
  int two[100000] = {0};
  int one[100000] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d%d", &a, &b);
    two[a] = b;
    two[b] = a;
  }
  scanf("%d", &m);
  vector<int> v;
  for (int i = 0; i < m; i++) {
    scanf("%d", &a);
    one[a] = 1;
  }
  for (int i = 0; i < 100000; i++) {
    if (one[i]) {
      int t = two[i];
      if (!one[t]) {
        ctn++;
        v.push_back(i);
      }
    }
  }
  sort(v.begin(), v.end());
  printf("%d\n", ctn);
  for (int i = 0; i < v.size(); i++) {
    if (i != 0) {
      printf(" ");
    }
    printf("%d", v[i]);
  }
  return 0;
}