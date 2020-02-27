#include <iostream>
#include <map>
using namespace std;
int main() {
  int m, n, s, ctn = 0;
  cin >> m >> n >> s;
  map<string, int> mp;
  string name;
  for (int i = 0; i < m; i++) {
    cin >> name;
    if (mp[name] == 1) {
      s = s + 1;
    }
    if (mp[name] == 0 && i == s-1) {
      mp[name] =1;
      ctn++;
      cout << name << endl;
      s += n;
    }
  }
  if (ctn == 0) {
    cout << "Keep going...";
  }
  return 0;
}