#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  cin >> n;
  while (n--) {
    int k, sum, flag = 1;
    cin >> k;
    for (int j = 1; j < 10; j++) {
      sum = k * k * j;
      string mul = to_string(sum), sk = to_string(k);
      string end = mul.substr(mul.length() - sk.length());
      if (sk == end) {
        flag = 0;
        cout << j << " " << mul << endl;
        break;
      }
    }
    if (flag) cout << "No" << endl;
  }
  return 0;
}