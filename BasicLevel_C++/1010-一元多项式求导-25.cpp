#include <iostream>
using namespace std;
int main() {
  int n, m, flag = 0;
  while (cin >> n >> m) {
    if (m != 0) {
      if (flag) {
        cout << " ";
      }
      cout << n * m << " " << m - 1;
      flag = 1;
    }
  }
  if (!flag) {
    cout << "0 0";
  }
  return 0;
}