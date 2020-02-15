#include <iostream>
#include <map>
using namespace std;
int main() {
  string s;
  char maxs;
  map<char, int> m;
  int max = -1;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) {
      m[tolower(s[i])]++;
    }
  }
  for (auto it = m.begin(); it != m.end(); it++) {
    if (it->second > max) {
      max = it->second;
      maxs = it->first;
    }
    if (it->second == max && it->first < maxs) {
      maxs = it->first;
    }
  }
  cout << maxs << " " << max;
}