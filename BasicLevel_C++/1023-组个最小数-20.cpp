#include <iostream>
using namespace std;
int main() {
  int v[10];
  for (int i = 0; i < 10; i++) {
    cin >> v[i];
  }
  for (int i = 1; i < 10; i++) {
    if (v[i] != 0) {
      cout << i;
      v[i]--;
      break;
    }
  }
  for (int i = 0; i < 10; i++) {
    if (v[i] != 0) {
      for (int j = 0; j < v[i]; j++) {
        cout << i;
      }
    }
  }
  return 0;
}