#include <iostream>
using namespace std;
int main() {
  int T, K, n1, b, t, n2;
  cin >> T >> K;
  for (int i = 0; i < K; i++) {
    cin >> n1 >> b >> t >> n2;
    int flag = n2 > n1 ? 1 : 0;
    if (T == 0) {
      printf("Game Over.");
      break;
    } else if (t > T) {
      printf("Not enough tokens.  Total = %d.\n", T);
    } else if (b == flag) {
      T = T + t;
      printf("Win %d!  Total = %d.\n", t, T);
    } else {
      T = T - t;
      printf("Lose %d.  Total = %d.\n", t, T);
    }
  }
  return 0;
}