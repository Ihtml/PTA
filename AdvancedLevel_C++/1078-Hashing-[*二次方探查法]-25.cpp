#include <iostream>
#include <unordered_map>
bool isPrime(int a) {
  if (a < 5) {
    if (a == 2 || a == 3){
      return true;
    }
    return false;
  }
  if (a % 6 != 5 && a % 6 != 1) {
    return false;
  }
  for (int i = 5; i * i <= a; i += 6) {
    if (a % i == 0 || a % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}
using namespace std;
int main() {
  int m, n;
  scanf("%d%d", &m, &n);
  while (!isPrime(m)) {
    m++;
  }
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int t;
    scanf("%d", &t);
    t = t % m;
    if (i != 0) {
      printf(" ");
    }
    if (mp[t] == 1) {
      int index, flag=0;
      for (int j = 1; j < m - 1; j++) {
        index = (j*j + t) % m;
        if (!mp[index]) {
          mp[index] = 1;
          printf("%d", index);
          flag = 1;
          break;
        }
      }
      if (flag ==0) {
        printf("-");
      }
    } else {
      printf("%d", t);
      mp[t] = 1;
    }
  }
  return 0;
}