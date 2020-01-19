#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int arr[10000];
bool cmp(int a, int b) {
  return a > b;
}
int main() {
  int n, num, flag = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> num;
    v[i] = num;
    while (num != 1) {
      if (num % 2 != 0) {
        num = num * 3 + 1;
      }
      num = num / 2;
      if (arr[num] == 1) {
        break;
      }
      arr[num] = 1;
    }
  }
  sort(v.begin(), v.end(), cmp);
  for (int j = 0; j < n; j++) {
    if (arr[v[j]] == 0) {
      if (flag == 0) {
        cout << v[j];
        flag = 1;
      } else {
        cout << " " << v[j];
      }
    }
  }
  return 0;
}