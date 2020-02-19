#include <cmath>
#include <iostream>
using namespace std;
int main() {
  double R1, P1, R2, P2, A, B;
  scanf("%lf%lf%lf%lf", &R1, &P1, &R2, &P2);
  A = R1 * R2 * (cos(P1) * cos(P2) - sin(P1) * sin(P2));
  B = R1 * R2 * (sin(P2) * cos(P1) + sin(P1) * cos(P2));
  if (A + 0.005 > 0 && A < 0) {
    A = 0;
  }
  if (B + 0.005 > 0 && B < 0) {
    B = 0;
  }
  char c = '+';
  if (B < 0) {
    c = '-';
    B = abs(B);
  }
  printf("%.2f%c%.2fi", A, c, B);
  return 0;
}