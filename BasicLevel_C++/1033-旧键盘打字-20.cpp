#include <iostream>
#include <string>
using namespace std;
int main() {
  string s, inp;
  getline(cin, s);
  getline(cin, inp);
  for (int i = 0; i < inp.length(); i++) {
    if (isupper(inp[i]) && s.find('+') != string::npos) {
      continue;
    }
    if (s.find(toupper(inp[i])) != string::npos) {
      continue;
    }
    cout << inp[i];
  }
  return 0;
}