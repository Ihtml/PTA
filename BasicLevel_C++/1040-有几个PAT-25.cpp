#include <iostream>
using namespace std;
int main() {
  string s;
  int p = 0, a = 0, t = 0;
  long long r = 0;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'T') {
      t++;
    }
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'P') {
      p++;
    } else if (s[i] == 'A') {
      r += p * t;
    } else {
      t--;
    }
  }
  r %= 1000000007;
  cout << r;
  return 0;
}