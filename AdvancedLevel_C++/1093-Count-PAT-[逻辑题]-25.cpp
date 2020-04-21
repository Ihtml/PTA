#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int p = 0, t = 0, tot = 0;
  long long ctn = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'T') {
      tot++;
    }
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'P') {
      p++;
    } else if (s[i] == 'A') {
      ctn += p * tot;
    } else {
      tot--;
    }
  }
  cout << ctn%1000000007;
  return 0;
}