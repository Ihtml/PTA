#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N, sum = 0;
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      sum += i == j ? 0 : v[i] * 10 + v[j];
    }
  }
  cout << sum;
  return 0;
}