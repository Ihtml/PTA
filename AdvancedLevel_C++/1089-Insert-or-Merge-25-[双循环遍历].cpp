#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n, flag = 0, idx;
  cin >> n;
  vector<int> v1(n), v2(n);
  for (int i = 0; i < n; i++) {
    cin >> v1[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> v2[i];
  }
  for (int i = 0; i < n-1; i++) {
    if (v2[i] > v2[i + 1]) {
      idx = i + 1;
      break;
    }
  }
  for (int i = idx; i < n; i++) {
    if (v1[i] != v2[i]) {
      flag = 1;
      break;
    }
  }
  printf("%s\n", flag ? "Merge Sort" : "Insertion Sort");
  if (flag) {
    int k = 1, diff = 1;
    while (diff) {
      diff = 0;
      for (int i = 0; i < n; i++) {
        if (v1[i] != v2[i]) {
          diff = 1;
          break;
        }
      }
      k = k * 2;
      for (int i = 0; i < n / k; i++) {
        sort(v1.begin() + i * k, v1.begin() + (i + 1) * k);
      }
      sort(v1.begin() + (n / k) * k, v1.end());
    }
  } else {
    sort(v1.begin(), v1.begin() + idx + 1);
  }
  for (int i = 0; i < n; i++) {
    if (i != 0) {
      cout << " ";
    }
    cout << v1[i];
  }
}