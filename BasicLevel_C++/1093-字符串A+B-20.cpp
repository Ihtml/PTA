#include <iostream>
using namespace std;
int main() {
  string a, b;
  getline(cin, a);
  getline(cin, b);
  string c = a + b;
  int arr[200]={0};
  for (int i = 0; i < c.length(); i++) {
    if (arr[c[i]] == 0) {
      cout << c[i];
      arr[c[i]] = 1;
    }
  }
  return 0;
}