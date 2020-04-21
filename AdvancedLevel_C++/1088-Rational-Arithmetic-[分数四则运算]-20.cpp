#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
  return a == 0 ? b : gcd(b % a, a);
}
void stout(long long a, long long b) {
  int flag = 0;
  if (a == 0) {
    printf("0");
    return;
  }
  if ((a < 0 && b >0) || (a>0 && b<0)) {
    flag = 1;
    printf("(-");
    a = abs(a);
    b = abs(b);
  }
  long long g = gcd(a, b);
  a = a / g;
  b = b / g;
  if (a >= b) {
    printf("%lld", a / b);
  }
  if (a % b != 0) {
    if (a > b) {
      printf(" ");
    }
    printf("%lld/%lld", a % b, b);
  }
  if (flag) {
    printf(")");
  }
}
int main() {
  long long a, b, c, d;
  scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
  long long g = gcd(a, b);
  a = a / g;
  b = b / g;
  g = gcd(c, d);
  c = c / g;
  d = d / g;
  stout(a, b);
  cout << " + ";
  stout(c, d);
  cout << " = ";
  stout(a*d + b*c, b*d);
  cout << endl;
  stout(a, b);
  cout << " - ";
  stout(c, d);
  cout << " = ";
  stout(a*d - b*c, b*d);
  cout << endl;
    stout(a, b);
  cout << " * ";
  stout(c, d);
  cout << " = ";
  stout(a*c, b*d);
  cout << endl;
    stout(a, b);
  cout << " / ";
  stout(c, d);
  cout << " = ";
  if(c == 0){
    cout << "Inf";
  }else{
    stout(a*d, b*c);
  }
  return 0;
}