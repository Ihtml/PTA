#include <iostream>
using namespace std;
int main() {
  int n, t;
  cin >> n;
  int arr[10000] = {0};
  for (int i = 1; i <= n; i++) {
    cin >> t;
    arr[abs(t - i)]++;
  }
  for (int i = 9999; i >= 0; i--) {
    if (arr[i] >= 2) {
      cout << i << " " << arr[i] << endl;
    }
  }
  return 0;
}