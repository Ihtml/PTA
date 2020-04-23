#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  cin >> n;
  getchar();
  string s;
  string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun",
                    "jly",  "aug", "sep", "oct", "nov", "dec"};
  string high[12] = {"tam", "hel", "maa", "huh", "tou", "kes",
                     "hei", "elo", "syy", "lok", "mer", "jou"};
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    if ('0' <= s[0] && s[0] <= '9') {
      int t = stoi(s);
      if (t <= 12) {
        cout << low[t] << endl;
      } else {
        cout << high[t / 13 - 1];
        if (t % 13 != 0) {
          cout << " " << low[t % 13];
        }
        cout << endl;
      }
    } else {
      int p = -1, a = 0, b = 0;
      string h, l;
      for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
          p = i;
          break;
        }
      }
      if (p != -1) {
        h = s.substr(0, 3);
        l = s.substr(p + 1);
      } else {
        h = s;
        l = s;
      }
      for (int i = 0; i < 12; i++) {
        if (high[i] == h) {
          a = i + 1;
          break;
        }
      }
      for (int i = 0; i < 13; i++) {
        if (low[i] == l) {
          b = i;
          break;
        }
      }
      cout << a * 13 + b << endl;
    }
  }
  return 0;
}