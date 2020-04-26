#include <iostream>
#include <map>
#include <set>
using namespace std;
int main() {
  int k, ctn = 1;
  string s;
  cin >> k;
  cin >> s;
  map<char, int> mp;
  set<char> st;
  s = s + "#";
  for (int i = 1; i < s.length(); i++) {
    if (s[i] == s[i - 1]) {
      ctn++;
    } else {
      if (ctn % k == 0) {
        if (mp[s[i - 1]] != -1) {
          mp[s[i - 1]] = 1;
        }
      } else {
        mp[s[i - 1]] = -1;
      }
      ctn = 1;
    }
  }
  for (int i = 0; i < s.length() - 1; i++) {
    if (mp[s[i]] == 1 && st.find(s[i]) == st.end()) {
      cout << s[i];
      st.insert(s[i]);
    }
  }
  cout << endl;
  for (int i = 0; i < s.length() - 1; i++) {
    cout << s[i];
    if (mp[s[i]] == 1) {
      i += k - 1;
    }
  }
  return 0;
}
