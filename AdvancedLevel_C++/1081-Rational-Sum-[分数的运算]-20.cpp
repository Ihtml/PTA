#include <iostream>
#include <vector>
using namespace std;
long long gcd(long long a, long long int b) {
  return a == 0 ? b : gcd(b % a, a);
}
int main() {
  int n;
  scanf("%d", &n);
  long long a, b, c, d, g;
  scanf("%lld/%lld", &a, &b);
  for (int i = 1; i < n; i++) {
    scanf("%lld/%lld", &c, &d);
    a = a * d + b * c;
    b = b * d;
    g = gcd(a, b);
    a = a / g;
    b = b / g;
  }
  if (abs(a) >= b) {
    printf("%lld", a / b);
    if (a % b != 0) {
      printf(" %lld/%lld", abs(a % b), b);
    }
  } else {
    if (a == 0) {
      printf("0");
    } else {
      printf("%lld/%lld", a, b);
    }
  }
  return 0;
}