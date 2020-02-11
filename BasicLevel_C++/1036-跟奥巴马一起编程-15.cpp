#include <iostream>
using namespace std;
int main() {
  int n, l;
  char c;
  cin >> n >> c;
  l = (n + 1) / 2;
  for (int i = 0; i < l; i++) {
    if (i == 0 || i == l - 1) {
      for (int j = 0; j < n; j++) {
        cout << c;
      }
      if(i==0) cout << endl;
    }else {
      cout << c;
      for (int j = 0; j < n-2; j++) {
          cout << " ";
      }
      cout << c << endl;
    }
  }
  return 0;
}