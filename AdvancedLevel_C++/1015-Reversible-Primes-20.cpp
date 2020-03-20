#include <cmath>
#include <iostream>
using namespace std;
bool isPrime(int a) {
  if (a < 2) {
    return false;
  }
  for (int i = 2; i * i <= a; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int n, d;
  while (scanf("%d", &n) != EOF) {
    if (n < 0) {
      break;
    }
    string flag = "No";
    scanf("%d", &d);
    if (isPrime(n)) {
      string s;
      while (n != 0) {
        s += to_string(n % d);
        n = n / d;
      }
      int t = stoi(s);
      if (d != 10) {
        t = 0;
        int len = s.length();
        for (int i = 0; i <= len-1; i++) {
          t += (s[i] - '0') * pow((double)d, len - i - 1);
        }
      }
      if (isPrime(t)) {
        flag = "Yes";
      }
    }
    cout << flag << endl;
  }
  return 0;
}