#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  string s1, s2;
  unordered_map<char, int> mp2;
  cin >> s1 >> s2;
  for (int i = 0; i < s1.length(); i++) {
    s1[i] = toupper(s1[i]);
  }
  for (int i = 0; i < s2.length(); i++) {
    s2[i] = toupper(s2[i]);
    mp2[s2[i]] = 1;
  }
  for (int i = 0; i < s1.length(); i++) {
    if (!mp2[s1[i]]) {
      cout << s1[i];
      mp2[s1[i]] = 1;
    }
  }
  return 0;
}