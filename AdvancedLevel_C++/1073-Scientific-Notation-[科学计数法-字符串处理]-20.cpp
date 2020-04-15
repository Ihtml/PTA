#include <iostream>
using namespace std;
int main() {
  string s, s1, s2, s3;
  getline(cin, s);
  if (s[0] == '-') {
    printf("-");
  }
  int idxd, idxe, flag, e;
  for (int i = 1; i < s.length(); i++) {
    if ('0' < s[i] && s[i] <= '9') {
      idxd = i;
      break;
    }
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'E') {
      idxe = i;
    }
  }
  s1 = s[1];
  int len = idxe - 3;
  s2 = s.substr(3, len);
  s3 = s1 + s2;
  e = stoi(s.substr(idxe + 1));
  if (e > 0) {
    if (e > len) {
      printf("%s", s3.c_str());
      for (int i = 0; i < e - len; i++) {
        printf("%c", '0');
      }
    } else {
      for (int i = 0; i < s3.length(); i++) {
        if (i == e + 1) {
          printf("%c", '.');
        }
        printf("%c", s3[i]);
      }
    }
  } else {
    printf("0.");
    for (int i = 0; i < abs(e) - 1; i++) {
      printf("0");
    }
    printf("%s", s3.c_str());
  }
  return 0;
}