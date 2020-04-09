#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int n, k, c;
  string name;
  map<int, vector<string> > mp;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; i++) {
    cin >> name;
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
      int id;
      scanf("%d", &id);
      mp[id].push_back(name);
    }
  }
  for (auto it = mp.begin(); it != mp.end(); it++) {
    printf("%d %lu\n", it->first, it->second.size());
    sort(it->second.begin(), it->second.end());
    for (int i = 0; i < it->second.size(); i++) {
      printf("%s\n", it->second[i].c_str());
    }
  }
  return 0;
}