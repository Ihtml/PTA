#include <cctype>
#include <iostream>
#include <string>
using namespace std;
string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun",
                  "jly",  "aug", "sep", "oct", "nov", "dec"};
string high[12] = {"tam", "hel", "maa", "huh", "tou", "kes",
                   "hei", "elo", "syy", "lok", "mer", "jou"};
int main() {
  int n, num;
  string s, l, h;
  cin >> n;
  getchar();
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    if (isdigit(s[0])) {
      num = stoi(s);
      if (num <= 13) {
        printf("%s\n", low[num].c_str());
      } else {
        printf("%s", high[num/13 -1].c_str());
        if (num%13){
            printf(" %s", low[num%13].c_str());
        }
        printf("\n");
      }
    } else {
      if (s.find(" ") != string::npos) {
        int idx = s.find(" ");
        h = s.substr(0, idx);
        l = s.substr(idx + 1);
        int g, d;
        for (int i = 0; i < 12; i++) {
          if (high[i] == h) {
            g = i+1;
          }
        }
        for (int i = 0; i < 13; i++) {
          if (low[i] == l) {
            d = i;
          }
        }
        printf("%d\n", g * 13 + d);
      } else {
        for (int i = 0; i < 13; i++) {
          if (low[i] == s){
            printf("%d\n", i);
            break;
          }else if (high[i] == s){
            printf("%d\n", (i+1)*13);
            break;
          }
        }
      }
    }
  }
  return 0;
}