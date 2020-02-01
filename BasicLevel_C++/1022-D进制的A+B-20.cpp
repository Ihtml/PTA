#include <iostream>
using namespace std;
int main() {
  int A, B, C, d;
  cin >> A >> B >> d;
  C = A + B;
  int i = 0;
  int s[100];
  if (C == 0) {
    cout << 0;
    return 0;
  }
  while (C != 0) {
    int f = C % d;
    s[i++] = f;
    C /= d;
  }
  for (int j = i - 1; j >= 0; j--) {
    cout << s[j];
  }
  return 0;
}