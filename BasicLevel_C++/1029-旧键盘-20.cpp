#include <iostream>
#include <map>
using namespace std;
int main() {
  string A, B;
  map<char, int> m;
  cin >> A >> B;
  for (int i = 0; i < A.length(); i++) {
    if (islower(A[i])) {
      A[i] -= 32;
    }
    m[A[i]] = 0;
  }
  for (int i = 0; i < B.length(); i++) {
    if (islower(B[i])) {
      B[i] -= 32;
    }
    m[B[i]] = 1;
  }
  for (int i = 0; i < A.length(); i++) {
    if (m[A[i]] == 0) {
      cout << A[i];
      m[A[i]] = 1;
    }
  }
  return 0;
}