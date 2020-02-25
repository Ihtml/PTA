#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(int a, int b) {
  return a > b;
}
int main() {
  int n, t, ctn = 0, i = 0;
  cin >> n;
  int v[100001] = {0};
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v, v + n, cmp);
  while (i < n && i + 1 < v[i]) {
    i++;
  }
  cout << i;
  return 0;
}