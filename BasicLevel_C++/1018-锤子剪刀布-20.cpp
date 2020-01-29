#include <iostream>
using namespace std;
int main() {
  int n, b = 0, c = 0, j = 0, s = 0, q = 0;
  int bb=0, cc=0, jj=0;
  cin >> n;
  char A, B;
  for (int i = 0; i < n; i++) {
    cin >> A >> B;
    if (A == B) {
      q++;
    }else if (A == 'C' && B == 'J') {
      s++;
      c++;
    } else if (A == 'J' && B == 'B') {
      s++;
      j++;
    } else if (A == 'B' && B == 'C') {
      s++;
      b++;
    }else if (A == 'C' && B == 'B')
    {
        bb++;
    }else if (A == 'J' && B == 'C')
    {
        cc++;
    }else if (A == 'B' && B == 'J')
    {
        jj++;
    }
  }
  char M, N;
  if (b >= c && b >= j) {
    M = 'B';
  } else if (c >= b && c >= j) {
    M = 'C';
  } else {
    M = 'J';
  }
  if (bb >= cc && bb >= jj) {
    N = 'B';
  } else if (cc >= bb && cc >= jj) {
    N = 'C';
  } else {
    N = 'J';
  }
  printf("%d %d %d\n", s, q, n - s - q);
  printf("%d %d %d\n", n - s - q, q, s);
  printf("%c %c", M, N);
  return 0;
}