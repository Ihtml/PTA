#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, max=-1;
  scanf("%d", &n);
  vector<int> v1(n), v2(n), v3;
  for (int i = 0; i < n; i++) {
    scanf("%d", &v1[i]);
    v2[i] = v1[i];
  }
  sort(v1.begin(), v1.end());
  for (int i = 0; i < n; i++) {
    if (v1[i] == v2[i] && v2[i] > max) {
        v3.push_back(v1[i]);
    }
    max =  v2[i] > max ? v2[i] : max;
  }
  printf("%lu\n", v3.size());
  for (int i = 0; i < v3.size(); i++) {
    if (i != 0) {
      printf(" ");
    }
    printf("%d", v3[i]);
  }
  printf("\n");
  return 0;
}