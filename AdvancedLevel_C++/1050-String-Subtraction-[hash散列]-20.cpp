#include <iostream>
using namespace std;
int main() {
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);
  for (int i = 0; i < s1.length(); i++) {
    int flag = 0;
    for (int j = 0; j < s2.length(); j++) {
      if (s1[i] == s2[j]) {
        flag = 1;
        break;
      }
    }
    if (!flag) {
      printf("%c", s1[i]);
    }
  }
  return 0;
}