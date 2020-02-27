#include <iostream>
#include <vector>
using namespace std;
int main() {
  string s, p;
  int n, ctn=0;
  cin >> s >> n;
  getchar();
  while (1) {
    getline(cin, p);
    ctn++;
    if (p == "#") {
      break;
    }
    if (s == p && ctn <= n) {
      cout << "Welcome in";
      break;
    } else if(ctn <=n && s!=p) {
      cout << "Wrong password: " << p << endl;
    }
    if (ctn == n) {
      cout << "Account locked";
      break;
    }
  }
  return 0;
}