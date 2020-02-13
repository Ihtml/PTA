#include <iostream>
using namespace std;
int main() {
  int n, t, k;
  int arr[101] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &t);
    arr[t]++;
  }
  scanf("%d", &k);
  for (int i = 0; i < k; i++) {
    scanf("%d", &t);
    if (i != 0) {
      printf(" ");
    }
    printf("%d", arr[t]);
  }
  return 0;
}