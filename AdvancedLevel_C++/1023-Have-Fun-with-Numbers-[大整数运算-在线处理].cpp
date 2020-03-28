#include <cstring>
#include <iostream>
using namespace std;
int main() {
  int book[10] = {0};
  char num[22];
  cin >> num;
  int flag = 0, carry = 0, len = strlen(num);
  for (int i = len - 1; i >= 0; i--) {
    int t = num[i] - '0';
    book[t]++;
    t = t * 2 + carry;
    carry = t >= 10 ? 1 : 0;
    t = t % 10;
    num[i] = (t + '0');
    book[t]--;
  }
  if (carry)
    flag = 1;
  for (int i = 0; i < 10; i++) {
    if (book[i] != 0) {
      flag = 1;
    }
  }
  printf("%s", flag ? "No\n" : "Yes\n");
  if (carry)
    printf("1");
  printf("%s", num);
  return 0;
}