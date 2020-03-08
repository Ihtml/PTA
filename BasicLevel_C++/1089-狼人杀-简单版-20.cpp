#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  for (int i = 1; i <= n; i++) {
    for (int j = i+1; j <= n; j++) {
      vector<int> a(n + 1, 1), lie;
      a[i] = a[j] = -1;
      for (int k = 1; k <= n; k++) {
        if (a[abs(arr[k])] * arr[k] < 0) {
          lie.push_back(a[k]);
        }
      }
      if (lie.size() == 2 && lie[0] + lie[1] == 0) {
        cout << i << " " << j;
        return 0;
      }
    }
  }
  cout << "No Solution";
  return 0;
}