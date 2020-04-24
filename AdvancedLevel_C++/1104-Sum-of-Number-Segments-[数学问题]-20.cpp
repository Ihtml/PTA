#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  double t, sum = 0.0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%lf", &t);
    sum = sum + t * i * (n - i + 1);
  }
  printf("%0.2lf", sum);
  return 0;
}