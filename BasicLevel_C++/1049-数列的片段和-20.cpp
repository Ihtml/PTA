#include <iostream>
using namespace std;
int main() {
  int n;
  double t, sum = 0.0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    sum += t * (i + 1) * (n - i);
  }
  printf("%.2f", sum);
  return 0;
}