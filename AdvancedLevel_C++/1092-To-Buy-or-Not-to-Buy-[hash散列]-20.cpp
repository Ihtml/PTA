#include <iostream>
using namespace std;
int main() {
  string s1, s2;
  cin >> s1 >> s2;
  int more = 0, less = 0;
  int mp1[128] = {0}, mp2[128] = {0};
  for (int i = 0; i < s1.length(); i++) {
    mp1[s1[i] - '0']++;
  }
  for (int i = 0; i < s2.length(); i++) {
    mp2[s2[i] - '0']++;
  }
  for (int i = 0; i < 128; i++) {
    if (mp1[i] < mp2[i]) {
      less += mp2[i] - mp1[i];
    }
    mp1[i] -= mp2[i];
  }
  if (less) {
    printf("No %d", less);
  } else {
    for (int i = 0; i < 128; i++) {
      more += mp1[i];
    }
    printf("Yes %d", more);
  }
  return 0;
}