#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
struct stu {
  char name[9];
  int id, grade;
} arr[100001];
int c;
bool cmp(stu a, stu b) {
  if (c == 1) {
    return a.id < b.id;
  } else if (c == 2) {
    if (a.name == b.name)
      return a.id < b.id;
    return strcmp(a.name, b.name) <= 0;
  } else {
    if (a.grade == b.grade)
      return a.id < b.id;
    return a.grade < b.grade;
  }
}
int main() {
  int n;
  scanf("%d%d", &n, &c);
  for (int i = 0; i < n; i++) {
    scanf("%d %s %d", &arr[i].id, arr[i].name, &arr[i].grade);
  }
  sort(arr, arr + n, cmp);
  for (int i = 0; i < n; i++) {
    printf("%06d %s %d\n", arr[i].id, arr[i].name, arr[i].grade);
  }
  return 0;
}