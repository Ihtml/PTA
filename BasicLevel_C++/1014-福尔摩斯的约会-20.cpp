#include <cctype>
#include <iostream>
using namespace std;
int main() {
  string A, B, C, D;
  char c[2];
  cin >> A >> B >> C >> D;
  int idx;
  for (int i = 0; i < A.length() && i < B.length(); i++) {
    if (A[i] == B[i] && 'A' <= A[i] && A[i] <= 'G') {
      c[0] = A[i];
      idx = i + 1;
      break;
    }
  }
  while (idx < A.length() && idx < B.length()) {
    if (A[idx] == B[idx] && (('A' <= A[idx] && A[idx] <= 'N') || isdigit(A[idx]))) {
      c[1] = A[idx];
      break;
    }
    idx++;
  }
  int p;
  for (int i = 0; i < C.length() && i < D.length(); i++) {
    if (C[i] == D[i] && isalpha(C[i])) {
      p = i;
    }
  }
  string week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
  int m = isdigit(c[1]) ? c[1] - '0' : c[1] - 'A' + 10;
  cout << week[c[0] - 'A'] << " ";
  printf("%02d:%02d", m, p);
  return 0;
}