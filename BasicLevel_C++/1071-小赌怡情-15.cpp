#include <iostream>
using namespace std;
int main() {
  int T, K, n1, b, t, n2;
  cin >> T >> K;
  for (int i = 0; i < K; i++) {
    cin >> n1 >> b >> t >> n2;
    if (t > T) {
      printf("Not enough tokens.  Total = %d.\n", T);
      continue;
    }
    int flag = 0;
    if (b) {
      T = n2 > n1 ? T + t : T - t;
      flag = n2 > n1 ? 1 : 0;

    } else {
      T = n2 < n1 ? T + t : T - t;
      flag = n2 < n1 ? 1 : 0;
    }
    printf("%s %d%c  Total = %d.\n", flag ? "Win" : "Lose", t, flag ? '!' : '.',T);
    if (T == 0) {
      printf("Game Over.");
      break;
    }
  }
  return 0;
}