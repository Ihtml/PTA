#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int first, n, k, idx, ctn = 0;
  cin >> first >> n >> k;
  int a[100005], data[100005], next[100005];
  for (int i = 0; i < n; i++) {
    cin >> idx;
    cin >> data[idx] >> next[idx];
  }
  while (first != -1) {
    a[ctn++] = first;
    first = next[first];
  }
  for (int i = 0; i < (ctn - ctn % k); i += k) {
    reverse(begin(a) + i, begin(a) + i + k);
  }
  for (int i = 0; i < ctn - 1; i++) {
    printf("%05d %d %05d\n", a[i], data[a[i]], a[i+1]);
  }
  printf("%05d %d -1", a[ctn - 1], data[a[ctn - 1]]);
  return 0;
}