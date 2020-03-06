#include <iostream>
using namespace std;
int main() {
  int m, x, y, A = -1, B;
  double C;
  cin >> m >> x >> y;
  for (int i = 10; i < 99; i++) {
    int t = (i % 10) * 10 + i / 10;
    if (i > t && i * y == t * (x + y)) {
      A = i > A ? i : A;
    } else if (i < t && y >x && i * y == t * (y - x)) {
      A = i > A ? i : A;
    }
  }
  B = (A % 10) * 10 + A / 10;
  C = (B*1.0) / y;
  if (A == -1) {
    cout << "No Solution";
    return 0;
  }
  double arr[3] = {(double)A, (double)B, C};
  cout << A;
  for (int i = 0; i < 3; i++) {
    cout << " ";
    if (m == arr[i]) {
      cout << "Ping";
    } else if (m < arr[i]) {
      cout << "Cong";
    } else {
      cout << "Gai";
    }
  }
  return 0;
}