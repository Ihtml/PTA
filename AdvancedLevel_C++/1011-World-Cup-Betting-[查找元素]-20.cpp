#include <iostream>
using namespace std;
int main() {
  double sum = 1.0;
  char word[3] = {'W', 'T', 'L'};
  for (int i = 0; i < 3; i++) {
    double t, max = -1;
    int k;
    for (int j = 0; j < 3; j++) {
      cin >> t;
      if (t > max) {
        max = t;
        k = j;
      }
    }
    sum *= max;
    cout << word[k] << " ";
  }
  sum = (sum * 0.65 - 1) * 2;
  printf("%.2f", sum);
  return 0;
}