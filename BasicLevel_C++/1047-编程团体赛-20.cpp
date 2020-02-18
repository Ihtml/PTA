#include <iostream>
using namespace std;
int main() {
  int n, no, t, score, arr[1001] = {0}, max = -1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d-%d %d", &no, &t, &score);
    arr[no] += score;
  }
  for (int i = 0; i < 1001; i++) {
    if (arr[i] > max) {
      max = arr[i];
      no = i;
    }
  }
  printf("%d %d", no, max);
}