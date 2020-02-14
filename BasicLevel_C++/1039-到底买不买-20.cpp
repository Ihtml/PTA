#include <iostream>
#include <map>
using namespace std;
int main() {
  string sold, want;
  map<char, int> sm, wm;
  bool flag = true;
  cin >> sold >> want;
  for (int i = 0; i < want.length(); i++) {
    wm[want[i]]++;
  }
  for (int i = 0; i < sold.length(); i++) {
    sm[sold[i]]++;
  }
  int ctn = 0;
  for (auto it = wm.begin(); it != wm.end(); it++) {
    if (sm[it->first] && sm[it->first] < it->second) {
      flag = false;
      ctn += (it->second) - sm[it->first];
    } else if (!sm[it->first]) {
      flag = false;
      ctn += it->second;
    }
  }
  if (flag) {
    cout << "Yes " << sold.length() - want.length();
  } else {
    cout << "No " << ctn;
  }
  return 0;
}