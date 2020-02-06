#include <iostream>
using namespace std;
int main() {
  string A, B, C;
  cin >> A >> B;
  for (int i = 0; i < A.length(); i++) {
    if (B.find(A[i]) == string::npos && C.find(toupper(A[i])) == string::npos) {
      C += toupper(A[i]);
    }
  }
  cout << C;
  return 0;
}