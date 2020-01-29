#include <iostream>
using namespace std;
int main() {
  string A, B;
  int da, db, ctna = 0, ctnb = 0, pa = 0, pb = 0;
  cin >> A >> da >> B >> db;
  for (int i = 0; i < A.length(); i++) {
    if (A[i] - '0' == da) {
      ctna++;
    }
  }
  for (int i = 0; i < B.length(); i++) {
    if (B[i] - '0' == db) {
      ctnb++;
    }
  }
  if (ctna != 0) {
    pa = da;
  }
  if (ctnb != 0) {
    pb = db;
  }

  for (int j = 1; j < ctna; j++) {
    pa = pa * 10 + da;
  }
  for (int j = 1; j < ctnb; j++) {
    pb = pb * 10 + db;
  }
  cout << pa + pb;
  return 0;
}