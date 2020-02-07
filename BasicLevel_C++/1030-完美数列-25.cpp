#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N;
  long long p;
  scanf("%d %lld", &N, &p);
  vector<long long> arr(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &arr[i]);
  }
  sort(arr.begin(), arr.end());
  int ctn, max = 0;
  for (int i = 0; (i < N) && (max < (N - i)); i++) {
    ctn = 0;
    for (int j = i + max; j < N; j++) {
      if (arr[j] <= (arr[i] * p)) {
        ctn=j-i+1;
      } else {
        break;
      }
    }
    max = ctn > max ? ctn : max;
  }
  printf("%d", max);
  return 0;
}