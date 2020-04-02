#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct stu {
  string id;
  string name;
  int grade;
};
bool cmp1(stu a, stu b) {
  return a.id < b.id;
}
bool cmp2(stu a, stu b) {
  return a.name == b.name ? a.id < b.id : a.name < b.name;
}
bool cmp3(stu a, stu b) {
  return a.grade == b.grade ? a.id < b.id : a.grade < b.grade;
}
int main() {
  int n, c;
  scanf("%d%d", &n, &c);
  vector<stu> arr;
  for (int i = 0; i < n; i++) {
    stu a;
    string id, name;
    int grade;
    cin >> id >> name >> grade;
    a.id = id;
    a.name = name;
    a.grade = grade;
    arr.push_back(a);
  }
  if (c == 1) {
    sort(arr.begin(), arr.end(), cmp1);
  } else if (c == 2) {
    sort(arr.begin(), arr.end(), cmp2);
  } else {
    sort(arr.begin(), arr.end(), cmp3);
  }
  for (int i = 0; i < n; i++) {
    printf("%s %s %d\n", arr[i].id.c_str(), arr[i].name.c_str(), arr[i].grade);
  }
  return 0;
}