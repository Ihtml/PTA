#include <iostream>
using namespace std;
int main() {
  int n, flag;
  scanf("%d", &n);
  long long a, b, c, sum;
  for (int i = 1; i <= n; i++) {
    scanf("%lld %lld %lld", &a, &b, &c);
    sum = a + b;
    if (a > 0 && b > 0 && sum < 0) {
      flag = 1;
    } else if (a < 0 && b < 0 && sum >= 0) {
      flag = 0;
    } else if (sum > c) {
      flag = 1;
    } else {
      flag = 0;
    }
    printf("Case #%d: %s\n", i, flag ? "true" : "false");
  }
  return 0;
}