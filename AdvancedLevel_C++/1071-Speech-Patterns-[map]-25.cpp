#include <cctype>
#include <iostream>
#include <map>
using namespace std;
int main() {
  string str, s = "";
  getline(cin, str);
  map<string, int> mp;
  int ctn = 0;
  for (int i = 0; i < str.length(); i++) {
    if (isalnum(str[i])) {
      str[i] = tolower(str[i]);
      s += str[i];
    }
    if (!isalnum(str[i]) || i == str.length() - 1) {
      if (s.length() != 0) {
        mp[s]++;
        ctn = mp[s] > ctn ? mp[s] : ctn;
      }
      s = "";
    }
  }
  for (auto it = mp.begin(); it != mp.end(); it++) {
    if (it->second == ctn) {
      printf("%s %d\n", it->first.c_str(), it->second);
      break;
    }
  }
  return 0;
}