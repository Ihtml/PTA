#include <cstring>
#include <iostream>
using namespace std;
int main() {
  string s1, s2, s3, s4;
  int w, h, m, flag = 1;
  cin >> s1 >> s2 >> s3 >> s4;
  string week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
  for (int i = 0; i < s1.length() && i < s2.length(); i++) {
    if (s1[i] == s2[i] && flag && 'A' <= s1[i] && s1[i] <= 'G' ) {
      w = s1[i] - 'A';
      flag = 0;
    } else if (s1[i] == s2[i] && !flag) {
      if ('A' <= s1[i] && s1[i] <= 'N') {
        h = s1[i] - 'A' + 10;
        break;
      } else if ('0' <= s1[i] && s1[i] <= '9') {
        h = s1[i] - '0';
        break;
      }
    }
  }
  for (int i = 0; i < s3.length() && i < s4.length(); i++) {
    if (s3[i] == s4[i] && isalpha(s3[i])) {
      m = i;
      break;
    }
  }
  printf("%s %02d:%02d", week[w].c_str(), h, m);
}