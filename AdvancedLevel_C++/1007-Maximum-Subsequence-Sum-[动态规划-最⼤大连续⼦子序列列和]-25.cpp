#include <iostream>
#include <vector>
using namespace std;
int main() {
  int k;
  scanf("%d", &k);
  int ThisSum = 0, Sum = -1, tleft = 0, left = 0, right = 0, flag = 1;
  vector<int> v(k);
  for (int i = 0; i < k; i++) {
    scanf("%d", &v[i]);
    if (v[i] >= 0) {
      flag = 0;
    }
    ThisSum += v[i];
    if (ThisSum < 0) {
      ThisSum = 0;
      tleft = i + 1;
    } else if (ThisSum > Sum) {
      Sum = ThisSum;
      left = tleft;
      right = i;
    }
  }
  if (flag) {  // 全负数
    Sum = 0;
    left = 0;
    right = k - 1;
  }
  printf("%d %d %d", Sum, v[left], v[right]);
}