#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int n;
  scanf("%d\n", &n);
  string s, res;
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    reverse(s.begin(), s.end());
    if (i == 0) {
      res = s;
    } else {
      int len = min(s.length(), res.length());
      for (int i = 0; i < len; i++) {
        if (s[i] != res[i]) {
          res = res.substr(0, i);
          break;
        }
      }
    }
  }
  if (res.length() == 0) {
    printf("nai");
  } else {
    reverse(res.begin(), res.end());
    printf("%s", res.c_str());
  }
  return 0;
}