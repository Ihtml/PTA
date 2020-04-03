#include <iostream>
#include <vector>
using namespace std;
int main() {
  int a, b, n, next[100001] = {0}, book[100001] = {0};
  cin >> a >> b >> n;
  for (int i = 0; i < n; i++) {
    int t1, t2;
    char c;
    cin >> t1 >> c >> t2;
    next[t1] = t2;
  }
  while (a != -1) {
    book[a]++;
    a = next[a];
  }
  while (b != -1) {
    book[b]++;
    if (book[b] > 1) {
      printf("%05d", b);
      return 0;
    }
    b = next[b];
  }
  printf("-1");
  return 0;
}