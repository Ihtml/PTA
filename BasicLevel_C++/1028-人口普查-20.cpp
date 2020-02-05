#include <iostream>
using namespace std;
int main() {
  int n, ctn = 0;
  string name, birth, old, young, max = "1814/09/05", min = "2014/09/07";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> name >> birth;
    if (birth >= "1814/09/06" && birth <= "2014/09/06") {
      ctn++;
      if (birth > max) {
        max = birth;
        young = name;
      }
      if (birth < min) {
        min = birth;
        old = name;
      }
    }
  }
  cout << ctn;
  if (ctn != 0) {
    cout << " " << old << " " << young;
  }
  return 0;
}