#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N, M, sum;
  cin >> N >> M;
  vector<vector<int> > arr(M, vector<int>(2));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < M; j++) {
      cin >> arr[j][i];
    }
  }
  for (int i = 0; i < N; i++) {
    sum = 0;
    for (int j = 0, t; j < M; j++) {
      cin >> t;
      if (t == arr[j][1]) {
        sum += arr[j][0];
      }
    }
    cout << sum << endl;
  }
  return 0;
}