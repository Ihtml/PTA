#include <iostream>
#include <vector>
using namespace std;
void func1(string s) {
  int n = 1;
  char a;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == s[i + 1]) {
      n++;
      continue;
    }
    if (n > 1) {
      printf("%d%c", n, s[i]);
      n = 1;
    } else {
      printf("%c", s[i]);
    }
  }
}
void func2(string s) {
  string t;
  for (int i = 0; i < s.length(); i++) {
    if ('0' <= s[i] && s[i] <= '9') {
      t += s[i];
      continue;
    }
    if (t != "") {
      int n = stoi(t);
      for (int j = 0; j < n; j++) {
        printf("%c", s[i]);
      }
      t = "";
    } else {
      printf("%c", s[i]);
    }
  }
}
int main() {
  string c, s;
  cin >> c;
  getchar();
  getline(cin, s);
  if (c == "C") {
    func1(s);
  } else {
    func2(s);
  }
  return 0;
}