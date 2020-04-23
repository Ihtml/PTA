#include <iostream>
#include <vector>
using namespace std;
int main() {
  int first, n, t, data[100005], next[100005], ctn[100005] = {0};
  cin >> first >> n;
  vector<int> v1, v2;
  for (int i = 0; i < n; i++) {
    cin >> t;
    cin >> data[t] >> next[t];
    ctn[abs(data[t])]++;
  }
  while (first != -1) {
    if (ctn[abs(data[first])] == -1) {
      v2.push_back(first);
    } else {
      if (ctn[abs(data[first])] > 1) {
        ctn[abs(data[first])] = -1;
      }
      v1.push_back(first);
    }
    first = next[first];
  }
  int len1 = v1.size(), len2 = v2.size();
  for (int i = 0; i < len1 - 1; i++) {
    printf("%05d %d %05d\n", v1[i], data[v1[i]], v1[i + 1]);
  }
  printf("%05d %d -1\n", v1[len1 - 1], data[v1[len1 - 1]]);
  for (int i = 0; i < len2 - 1; i++) {
    printf("%05d %d %05d\n", v2[i], data[v2[i]], v2[i + 1]);
  }
  if (len2 > 0) {
    printf("%05d %d -1", v2[len2 - 1], data[v2[len2 - 1]]);
  }
  return 0;
}