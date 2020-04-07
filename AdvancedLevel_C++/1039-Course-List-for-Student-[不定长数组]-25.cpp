#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
// 将3个英文和1个数字的字符串id, 转为int类型id
int getid(char name[]) {
  int id = 0;
  for (int i = 0; i < 3; i++) {
    id = id * 26 + name[i] - 'A';
  }
  id = id * 10 + name[3] - '0';
  return id;
}
const int MAX_SIZE = 26 * 26 * 26 * 10 + 10;
int main() {
  char name[5];
  vector<int> arr[MAX_SIZE];
  int n, k, id, m, index;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < k; i++) {
    scanf("%d %d", &id, &m);
    for (int i = 0; i < m; i++) {
      scanf("%s", name);
      index = getid(name);
      arr[index].push_back(id);
    }
  }
  for (int i = 0; i < n; i++) {
    scanf("%s", name);
    index = getid(name);
    int len = arr[index].size();
    printf("%s %d", name, len);
    if (len) {
      sort(arr[index].begin(), arr[index].end());
      for (int j = 0; j < len; j++) {
        printf(" %d", arr[index][j]);
      }
    }
    printf("\n");
  }
  return 0;
}