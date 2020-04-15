#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int first, n, k, next[100001], data[100001], ctn=0;
  scanf("%d%d%d", &first, &n, &k);
  vector<int> addr(n);
  for (int i = 0; i < n; i++) {
    int t;
    scanf("%d", &t);
    scanf("%d%d", &data[t], &next[t]);
  }
  while (first != -1) {
    addr[ctn++]= first;
    first = next[first];
  }
  for (int i = 0; i < (ctn-ctn%k); i += k) {
    reverse(addr.begin() + i, addr.begin() + i + k);
  }
  for (int i = 0; i < ctn-1; i++) {
    printf("%05d %d %05d\n", addr[i], data[addr[i]], addr[i+1]);
  }
  printf("%05d %d -1", addr[ctn-1], data[addr[ctn-1]]);
  return 0;
}