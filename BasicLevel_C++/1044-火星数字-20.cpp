#include <iostream>
#include <string>
using namespace std;
string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun",
                  "jly",  "aug", "sep", "oct", "nov", "dec"};
string high[13] = {"****", "tam", "hel", "maa", "huh", "tou", "kes",
                   "hei",  "elo", "syy", "lok", "mer", "jou"};
int main() {
  int n, num;
  cin >> n;
  getchar();
  for (int i = 0; i < n; i++) {
    string s, l="", h;
    getline(cin, s);
    if ('0' <= s[0] && s[0] <= '9') {
      num = stoi(s);
      if (num < 13) {
        printf("%s\n", low[num].c_str());
      } else if (num%13 == 0) {
        printf("%s\n", high[num / 13].c_str());
      } else {
        printf("%s %s\n", high[num / 13].c_str(), low[num % 13].c_str());
      }
    } else {
      h = s.substr(0, 3);
      if (s.length() > 4) {
        l = s.substr(4, 3);
      }
      int a = 0, b = 0;
      for (int i = 1; i <= 12; i++) {
        if (h == low[i] || l == low[i]) {
          b = i;
        }
        if (h == high[i]) {
          a = i;
        }
      }
      printf("%d\n", a * 13 + b);
    }
  }
  return 0;
}