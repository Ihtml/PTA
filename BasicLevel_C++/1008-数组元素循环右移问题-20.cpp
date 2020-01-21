#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N, x;
  cin >> N >> x;
  x = x % N;
  vector<int> M(N);
  for (int i = 0; i < N; i++) {
    cin >> M[i];
  }
  reverse(M.begin(), M.end());
  reverse(M.begin(), M.begin() + x);
  reverse(M.begin() + x, M.end());
  for (int j = 0; j < N; j++) {
    if (j != 0) {
      cout << " ";
    }
    cout << M[j];
  }
  return 0;
}