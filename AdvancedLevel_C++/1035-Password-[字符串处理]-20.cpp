#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, ctn = 0;
  char name[11], pass[11];
  vector<string> v1, v2;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s %s", name, pass);
    int  flag = 0;
    for (int i = 0; i < 10; i++) {
      if (pass[i] == '1') {
        pass[i] = '@';
        flag = 1;
      }
      if (pass[i] == '0') {
        pass[i] = '%';
        flag = 1;
      }
      if (pass[i] == 'l') {
        pass[i] = 'L';
        flag = 1;
      }
      if (pass[i] == 'O') {
        pass[i] = 'o';
        flag = 1;
      }
    }
    if (flag) {
      ctn++;
      v1.push_back(name);
      v2.push_back(pass);
    }
  }
  if (ctn > 0) {
      printf("%d\n", ctn);
    for (int i = 0; i < ctn; i++) {
      printf("%s %s\n", v1[i].c_str(), v2[i].c_str());
    }
  } else {
    if (n == 1) {
      printf("There is 1 account and no account is modified");
    } else {
      printf("There are %d accounts and no account is modified", n);
    }
  }
  return 0;
}