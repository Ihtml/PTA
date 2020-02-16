#include <cctype>
#include <iostream>
using namespace std;
int main() {
  string s, maxs;
  int max, t = 0, arr[26] = {0};
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    s[i] = tolower(s[i]);
  }
  for (int i = 0; i < s.length(); i++) {
    if (islower(s[i])) {
      arr[s[i] - 'a']++;
    }
  }
  max = arr[0];
  for (int i = 1; i < 26; i++) {
    if (arr[i] > max) {
      max = arr[i];
      t = i;
    }
  }
  printf("%c %d", 'a' + t, max);
  return 0;
}