#include <iostream>
using namespace std;
int main() {
  string s, arr[10] = {"zero", "one", "two",   "three", "four",
                       "five", "six", "seven", "eight", "nine"};
  int n=0;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    n += s[i] - '0';
  }
  s = to_string(n);
  for (int i = 0; i < s.length(); i++) {
    if (i != 0) {
      cout << " ";
    }
    cout << arr[s[i] - '0'];
  }
  return 0;
}