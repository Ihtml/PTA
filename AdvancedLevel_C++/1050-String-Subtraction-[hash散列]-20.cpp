#include <iostream>
#include <cstring>
using namespace std;
int main() {
  string s1, s2;
  int hash[256] = {0};
  getline(cin, s1);
  getline(cin, s2);
  int len1 = s1.length(), len2 = s2.length();
  for (int i = 0; i < len2; i++) {
    hash[s2[i]] = 1;
  }
  for (int i = 0; i < len1; i++) {
    if (!hash[s1[i]]) {
      printf("%c", s1[i]);
    }
  }
  return 0;
}