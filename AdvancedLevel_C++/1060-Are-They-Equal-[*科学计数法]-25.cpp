#include <cstring>
#include <iostream>
using namespace std;
int main() {
  char a[10000], b[10000], A[10000], B[10000];
  int n, ctna, ctnb, pa = 0, pb = 0, indexa = 0, indexb = 0;
  scanf("%d %s %s", &n, a, b);
  ctna = strlen(a);
  ctnb = strlen(b);
  for (int i = 0; i < strlen(a); i++) {
    if (a[i] == '.') {
      ctna = i;
      break;
    }
  }
  for (int i = 0; i < strlen(b); i++) {
    if (b[i] == '.') {
      ctnb = i;
      break;
    }
  }
  while (a[pa] == '0' || a[pa] == '.') {
    pa++;
  }
  while (b[pb] == '0' || b[pb] == '.') {
    pb++;
  }
  ctna = ctna >= pa ? ctna - pa : ctna - pa + 1;  // 10的几次方
  ctnb = ctnb >= pb ? ctnb - pb : ctnb - pb + 1;
  if (pa == strlen(a)) ctna = 0;  // 特殊情况，字符串是0
  if (pb == strlen(b)) ctnb = 0;
  while (indexa < n) {  // 有效位
    if (a[pa] != '.' && pa < strlen(a)) {
      A[indexa++] = a[pa];
    } else if (pa >= strlen(a)) {
      A[indexa++] = '0';
    }
    pa++;
  }
  while (indexb < n) {
    if (b[pb] != '.' && pb < strlen(b)) {
      B[indexb++] = b[pb];
    } else if (pb >= strlen(b)) {
      B[indexb++] = '0';
    }
    pb++;
  }
  if (strcmp(A, B) == 0 && ctna == ctnb) {
    printf("YES 0.%s*10^%d", A, ctna);
  } else {
    printf("NO 0.%s*10^%d 0.%s*10^%d", A, ctna, B, ctnb);
  }
  return 0;
}