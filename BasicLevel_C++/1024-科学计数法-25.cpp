#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  int i = 0;
  while (s[i] != 'E') {
    i++;
  }
  if (s[0] == '-') {
    cout << "-";
  }
  string a;
  int b;
  a = s.substr(1, i - 1);
  b = stoi(s.substr(i + 1));
  if (b < 0) {
    cout << "0.";
    for (int i = 0; i < abs(b) - 1; i++) {
      cout << 0;
    }
    for (int i = 0; i < a.length(); i++) {
      if (a[i] != '.') {
        cout << a[i];
      }
    }
  } else {
    cout << a[0];
    int i, ctn;
    for (i = 2, ctn = 0; i < a.length() && ctn < b; i++, ctn++) {
      cout << a[i];
    }
    if (i == a.length()) {
      for (int j = ctn; j < b; j++) {
        cout << 0;
      }
    } else {
      cout << '.';
      for (int j = i; j < a.length(); j++) {
        cout << a[i];
      }
    }
  }
  return 0;
}