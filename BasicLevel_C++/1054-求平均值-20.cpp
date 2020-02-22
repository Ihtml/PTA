#include <cstring>
#include <iostream>
using namespace std;
int main() {
  int n, ctn=0;
  char a[50], b[50];
  double temp, sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", a);
    sscanf(a, "%lf", &temp);
    sprintf(b, "%.2f", temp);
    bool flag = 1;
    for (int i = 0; i < strlen(a); i++) {
      if (a[i] != b[i]) {
        flag = 0;
        break;
      }
    }
    if (flag && temp <= 1000 && temp >= -1000) {
      sum += temp;
      ctn++;
    } else {
      printf("ERROR: %s is not a legal number\n", a);
    }
  }
  if (ctn > 1) {
    printf("The average of %d numbers is %.2lf", ctn, sum / ctn);
  } else if (ctn == 1) {
    printf("The average of 1 number is %.2f", sum);
  } else {
    printf("The average of 0 numbers is Undefined");
  }
  return 0;
}