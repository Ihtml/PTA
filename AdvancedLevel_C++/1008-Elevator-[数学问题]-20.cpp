#include <iostream>
using namespace std;
int main() {
  int t, last = 0, sum = 0;
  cin >> t;
  while (cin >> t) {
    if (t > last) {
      sum += (t - last) * 6;
    } else {
      sum += (last - t) * 4;
    }
    sum += 5;
    last = t;
  }
  cout << sum;
  return 0;
}