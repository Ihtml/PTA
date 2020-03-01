#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, t, arr[10000] = {0}, ctna = 0, ctnb = 0;
  string name;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> t;
    arr[t] = 1;
  }
  for (int i = 0; i < n; i++) {
    cin >> name;
    int k, j, flag = 0;
    vector<int> v;
    cin >> k;
    for (int i = 0; i < k; i++) {
      cin >> j;
      if (arr[j]) {
        flag = 1;
        ctnb++;
        v.push_back(j);
      }
    }
    if (flag) {
      cout << name << ":";
      for (int i = 0; i < v.size(); i++) {
        printf(" %04d",v[i]);
      }
      cout << endl;
      ctna++;
    }
  }
  cout << ctna << " " << ctnb;
  return 0;
}