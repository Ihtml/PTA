#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
struct obj {
  int age, money;
  char name[9];
};
bool cmp(obj a, obj b) {
  return a.money != b.money
             ? a.money > b.money
             : a.age != b.age ? a.age < b.age : strcmp(a.name, b.name) < 0;
}
int main() {
  int n, k;
  scanf("%d%d", &n, &k);
  vector<obj> v;
  for (int i = 0; i < n; i++) {
    obj a;
    scanf("%s %d %d", a.name, &a.age, &a.money);
    v.push_back(a);
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i < k; i++) {
    int ctn, amin, amax, flag = 0;
    scanf("%d%d%d", &ctn, &amin, &amax);
    printf("Case #%d:\n", i + 1);
    for (int j = 0; j < n; j++) {
      if (v[j].age >= amin && v[j].age <= amax && flag < ctn) {
        flag++;
        printf("%s %d %d\n", v[j].name, v[j].age, v[j].money);
      }
      if (flag == ctn) {
        break;
      }
    }
    if (!flag) {
      printf("None\n");
    }
  }
  return 0;
}