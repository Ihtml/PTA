#include <iostream>
using namespace std;
int main() {
  int n, i = 0, arr[3];
  char c[6];
  scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
  for (int i = 0; i < 3; i++) {
    n = arr[i];
    c[i * 2] = n / 13 > 9 ? 'A' + n / 13 - 10 : n / 13 + '0';
    c[i * 2 + 1] = n % 13 > 9 ? 'A' + n % 13 - 10 : n % 13 + '0';
  }
  cout << "#";
  for (int i = 0; i < 6; i++) {
    cout << c[i];
  }
  return 0;
}