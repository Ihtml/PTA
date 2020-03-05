#include <iostream>
using namespace std;
string func(string s) {
  string res;
  int n = 1;
  if (s.length() == 1) {
    res = s + "1";
    return res;
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == s[i + 1]) {
      n++;
    } else {
      res += s[i] + to_string(n);
      n = 1;
    }
  }
  return res;
}
int main() {
  string d;
  int n;
  cin >> d >> n;
  for (int i = 0; i < n-1; i++) {
    d = func(d);
  }
  cout << d;
  return 0;
}