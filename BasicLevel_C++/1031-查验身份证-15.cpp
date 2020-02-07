#include <iostream>
using namespace std;
int main() {
  int n;
  string s;
  bool allpass = true;
  char t[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
  int q[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    bool flag = true;
    int sum = 0;
    for (int j = 0; j < 17; j++) {
      if (s[j] == 'X') {
        cout << s << endl;
        flag = false;
        allpass = false;
        break;
      } else {
        sum += (s[j] - '0') * q[j];
      }
    }
    if (flag) {
      sum = sum % 11;
      if ((s[17]) != t[sum]) {
        cout << s << endl;
        allpass = false;
      }
    }
  }
  if (allpass) {
    cout << "All passed";
  }
  return 0;
}