#include <iostream>
#include <map>
using namespace std;
int main() {
  int n, id, x, y, max = -1, min = 20001, maxid, minid;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> id >> x >> y;
    mp[id] = x * x + y * y;
  }
  for (auto it = mp.begin(); it != mp.end(); it++) {
    if (it->second > max) {
      max = it->second;
      maxid = it->first;
    } 
    if (it->second < min) {
      min = it->second;
      minid = it->first;
    }
  }
  printf("%04d %04d", minid, maxid);
  return 0;
}