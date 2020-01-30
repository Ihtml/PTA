#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(char a, char b) {
  return a > b;
}
int main() {
  string s;
  cin >> s;
  s.insert(0, 4 - s.length(), '0');
  string a, b;
  int res;
  do {
    a = s, b = s;
    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end());
    res = stoi(a) - stoi(b);
    s = to_string(res);
    s.insert(0, 4 - s.length(), '0');
    cout << a << " - " << b << " = " << s << endl;
  } while (s != "0000" && s != "6174");
  return 0;
}