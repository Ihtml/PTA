#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  map<int, vector<int> > mp;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    mp[a].push_back(b);
  }
  for (int i = 0; i < m; i++) {
    int num, t, flag = 1;
    cin >> num;
    vector<int> v(100000), arr;
    for (int i = 0; i < num; i++) {
      cin >> t;
      v[t] = 1;
      arr.push_back(t);
    }
    for (int i = 0; i < arr.size(); i++) {
      for (int j = 0; j < mp[arr[i]].size(); j++) {
        if (v[mp[arr[i]][j]]) {
          flag = 0;
        }
      }
    }
    printf("%s\n", flag ? "Yes" : "No");
  }
  return 0;
}