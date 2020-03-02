#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, idx;
  string s;
  cin >> n;
  getchar();
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    idx = s.find("T");
    cout << s[idx - 2] - 'A' + 1;
  }
  return 0;
}