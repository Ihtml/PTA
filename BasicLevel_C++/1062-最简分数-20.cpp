#include <cmath>
#include <iostream>
using namespace std;
int gcd(long long a, long long b) {
  return a == 0 ? b : gcd(b % a, a);
}
int main() {
  int N1, N2, M1, M2, K, a;
  scanf("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &K);
  if (N1 * M2 > N2 * M1) {
    swap(N1, N2);
    swap(M1, M2);
  }
  a = N1 * K / M1 + 1;
  int flag = 0;
  while (a * M2 < N2 * K) {
    if (gcd(a, K) == 1) {
      if (flag) {
        cout << " ";
      }
      cout << a << "/" << K;
      flag = 1;
    }
    a++;
  }
  return 0;
}