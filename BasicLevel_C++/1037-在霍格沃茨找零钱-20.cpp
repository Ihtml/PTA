#include <iostream>
#include <string>
using namespace std;
int main() {
  int Ps, Pg, Pk, As, Ag, Ak, idx1, idx2;
  scanf("%d.%d.%d %d.%d.%d", &Pg, &Ps, &Pk, &Ag, &As, &Ak);
  int res = (Ag * 17 * 29 + As * 29 + Ak) - (Pg * 17 * 29 + Ps * 29 + Pk);
  if (res < 0) {
    printf("-");
    res = abs(res);
  }
  int Rg = res / (17 * 29);
  int temp = res % (17 * 29);
  int Rs = temp / 29;
  int Rk = temp % 29;
  printf("%d.%d.%d", Rg, Rs, Rk);
  return 0;
}