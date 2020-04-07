#include <cstdio>
using namespace std;
int main() {
  int m[100001], arr[100001]={0};
  int n, t;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &m[i]);
    arr[m[i]]++;
  }
  for (int i = 0; i < n; i++) {
    if (arr[m[i]] == 1) {
      printf("%d", m[i]);
      return 0;
    }
  }
  printf("None");
  return 0;
}