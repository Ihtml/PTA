#include <iostream>
using namespace std;
int main() {
  string s;
  int sum = 0, zero = 0, one = 0;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    if (isalpha(s[i])) {
      s[i] = tolower(s[i]);
      sum += s[i] - 'a' + 1;
    }
  }
  while (sum != 0) {
    if (sum % 2 == 0) {
      zero++;
    } else {
      one++;
    }
    sum = sum / 2;
  }
  printf("%d %d", zero, one);
  return 0;
}