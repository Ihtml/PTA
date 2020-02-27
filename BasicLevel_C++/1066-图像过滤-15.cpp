#include <iostream>
using namespace std;
int main() {
  int n, m, a, b, c, t;
  cin >> n >> m >> a >> b >> c;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &t);
      if (j != 0) {
        printf(" ");
      }
      printf("%03d", (a <= t && t <= b) ? c : t);
    }
    printf("\n");
  }
}