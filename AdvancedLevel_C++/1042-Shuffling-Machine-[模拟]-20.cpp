#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  scanf("%d", &n);
  string init[55], newList[55];
  int book[55];
  char C[4] = {'S', 'H', 'C', 'D'};
  for (int i = 0; i < 4; i++) {
    for (int j = 1; j <= 13; j++) {
      string s = C[i] + to_string(j);
      init[i * 13 + j] = s;
    }
  }
  init[53] = "J1";
  init[54] = "J2";
  for (int i = 1; i <= 54; i++) {
    scanf("%d", &book[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= 54; j++) {
      newList[book[j]] = init[j];
    }
    for (int j = 1; j <= 54; j++) {
      init[j] = newList[j];
    }
  }
  for (int i = 1; i <= 54; i++) {
    if (i != 1) {
      printf(" ");
    }
    printf("%s", newList[i].c_str());
  }
  return 0;
}