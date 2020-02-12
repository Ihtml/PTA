#include <iostream>
#include <string>
using namespace std;
int main() {
  string P, A;
  cin >> P >> A;
  int Ps, Pg, Pk, As, Ag, Ak, idx1, idx2;
  for (int i = 0; i < P.length(); i++) {
    if (P[i] == '.') {
      if (idx1) {
        idx2 = i;
      } else {
        idx1 = i;
      }
    }
  }
  Pg = stoi(P.substr(0, idx1));
  Ps = stoi(P.substr(idx1 + 1, idx2 - idx1 - 1));
  Pk = stoi(P.substr(idx2 + 1));
  idx1=0;
  for (int i = 0; i < A.length(); i++) {
    if (A[i] == '.') {
      if (idx1) {
        idx2 = i;
      } else {
        idx1 = i;
      }
    }
  }
  Ag = stoi(A.substr(0, idx1));
  As = stoi(A.substr(idx1 + 1, idx2 - idx1 - 1));
  Ak = stoi(A.substr(idx2 + 1));
  int res = (Ag * 17 * 29 + As * 29 + Ak) - (Pg * 17 * 29 + Ps * 29 + Pk);
  if (res < 0) {
    cout << '-';
    res = abs(res);
  }
  int Rg = res / (17 * 29);
  int temp = res % (17 * 29);
  int Rs = temp / 29;
  int Rk = temp % 29;
  cout << Rg << "." << Rs << "." << Rk;
  return 0;
}