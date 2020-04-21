#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, ctn = 0;
  long long t, p;
  vector<long long> v;
  scanf("%d %lld", &n, &p);
  for (int i = 0; i < n; i++) {
    scanf("%lld", &t);
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  for (int i = 0;  i < n; i++) {
    for (int j = i + ctn; j<n; j++) {
      if (v[i] * p >= v[j]) {
        ctn = j - i + 1 > ctn ? j - i + 1 : ctn;
      }else{
          break;
      }
    }
  }
  printf("%d", ctn);
}