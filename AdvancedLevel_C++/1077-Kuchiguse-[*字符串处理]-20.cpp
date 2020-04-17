#include <cctype>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
int main() {
  int n, ctn = 0;
  cin >> n;
  getchar();
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s, su = "";
    getline(cin, s);
    for (int j = s.length() - 1; j >= 0; j--) {
      if ((j < s.length() - 1) && !isalpha(s[j])) {
        if (s[j] == ' ') {
          mp[su]++;
          ctn = mp[su] > ctn ? mp[su] : ctn;
        }
        break;
      }
      if (j == 0) {
        mp[su]++;
        ctn = mp[su] > ctn ? mp[su] : ctn;
      }
      su = s[j] + su;
    }
  }
  if (ctn <= 1) {
    printf("nai");
  } else {
    for (auto it = mp.begin(); it != mp.end(); it++) {
      if (it->second == ctn) {
        printf("%s", it->first.c_str());
        break;
      }
    }
  }
  return 0;
}