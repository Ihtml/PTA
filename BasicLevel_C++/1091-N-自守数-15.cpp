#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string k;
    cin >> k;
    int len = k.length(), t = stoi(k), flag = 0;
    for (int j = 1; j < 10; j++) {
      int sum = t * t * j;
      int d = pow(10, len);
      if ((sum % d) == t) {
        flag = 1;
        cout << j << " " << sum << endl;
        break;
      }
    }
    if (!flag) cout << "No" << endl;
  }
  return 0;
}