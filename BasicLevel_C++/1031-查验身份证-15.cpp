#include <iostream>
using namespace std;
int t[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};
int q[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
string s;
bool isTrue() {
  int sum = 0;
  for (int i = 0; i < 17; i++) {
    if (s[i] < '0' || s[i] > '9') {
      return false;
    }
    sum += q[i] * (s[i] - '0');
  }
  int temp = s[17] == 'X' ? 10 : s[17] - '0';
  return t[sum%11] == temp;
}
int main() {
  int n;
  bool allpass = true;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (!isTrue()) {
      cout << s << endl;
      allpass = false;
    }
  }
  if (allpass) {
    cout << "All passed";
  }
  return 0;
}