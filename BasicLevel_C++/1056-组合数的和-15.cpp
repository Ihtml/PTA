#include <iostream>
using namespace std;
int main() {
  int N, sum = 0, temp;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> temp;
    sum += temp*10*(N-1) + temp*(N-1);
  }
  cout << sum;
  return 0;
}