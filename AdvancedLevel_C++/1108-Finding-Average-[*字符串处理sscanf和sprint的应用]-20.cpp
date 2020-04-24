#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
  int n, ctn = 0;
  char a[50], b[50];
  double sum = 0.0, t;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", a);
    sscanf(a, "%lf", &t);
    sprintf(b, "%.2f", t);
    int flag = 0;
    for (int j = 0; j < strlen(a); j++) {
      if (a[j] != b[j]) {
        flag = 1;
        break;
      }
    }
    if (flag  || t > 1000 || t < -1000) {
      printf("ERROR: %s is not a legal number\n", a);
      continue;
    } else {
      ctn++;
      sum += t;
    }
  }
  if (ctn == 1) {
    printf("The average of 1 number is %.2f", sum);
  } else if (ctn > 1) {
    printf("The average of %d numbers is %.2f", ctn, sum/ctn);
  } else {
    printf("The average of 0 numbers is Undefined");
  }
  return 0;
}