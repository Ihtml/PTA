#include <cstdio>
using namespace std;
int main() {
  char c[] = {"0123456789ABC"};
  for (int i = 0; i < 3; i++) {
    int n;
    scanf("%d", &n);
    if (i == 0) printf("#");
    printf("%c%c", c[n / 13], c[n % 13]);
  }
  return 0;
}