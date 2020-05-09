
#include <iostream>
#include <vector>
using namespace std;
int n, a[1005];
vector<int> v;
void dfs(int idx) {
  if (idx * 2 > n && idx * 2 + 1 > n) {
    if (idx <= n) {
      for (int i = 0; i < v.size(); i++) {
        printf("%d%s", v[i], i == v.size() - 1 ? "\n" : " ");
      }
    }
  } else {
    v.push_back(a[idx * 2 + 1]);
    dfs(idx * 2 + 1);
    v.pop_back();
    v.push_back(a[idx * 2]);
    dfs(idx * 2);
    v.pop_back();
  }
}
int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
  }
  v.push_back(a[1]);
  dfs(1);
  int minh = 1, maxh = 1;
  for (int i = 2; i <= n; i++) {
    if (a[i] < a[i / 2]) {
      minh = 0;
    } else {
      maxh = 0;
    }
  }
  if (maxh) {
    printf("Max Heap");
  } else {
    printf(minh ? "Min Heap" : "Not Heap");
  }
  return 0;
}
