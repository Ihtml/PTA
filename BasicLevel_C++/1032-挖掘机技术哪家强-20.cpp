#include <iostream>
#include <map>
using namespace std;
int main() {
  int n, id, num, max=-1;
  map<int, int> m;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> id >> num;
    m[id] += num;
  }
  for (auto it = m.begin(); it != m.end(); it++) {
    if (it->second > max) {
      max = it->second;
      id = it->first;
    }
  }
  cout << id << " " << max;
  return 0;
}