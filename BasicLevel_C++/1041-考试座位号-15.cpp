#include <iostream>
using namespace std;
int main() {
  int n, m, t;
  string arr[1001][2], s1, s2;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s1 >> t >> s2;
    arr[t][0] = s1;
    arr[t][1] = s2;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> t;
    cout << arr[t][0] << " " << arr[t][1] << endl;
  }
  return 0;
}