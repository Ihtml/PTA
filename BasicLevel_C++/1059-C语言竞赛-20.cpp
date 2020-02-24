#include <iostream>
#include <string>
using namespace std;
bool isPrime(int a) {
  for (int i = 2; i * i <= a; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int N, K, t;
  string s;
  cin >> N;
  char c[10001];
  for (int i = 0; i < N; i++) {
    scanf("%d", &t);
    if (i == 0) {
      c[t] = 'A';
    } else {
      if (isPrime(i + 1)) {
        c[t] = 'B';
      } else {
        c[t] = 'C';
      }
    }
  }
  cin >> K;
  for (int i = 0; i < K; i++) {
    scanf("%d", &t);
    printf("%04d: ", t);
    if (!c[t]) {
      cout << "Are you kidding?" << endl;
      continue;
    }
    if (c[t] == 'N') {
      cout << "Checked" << endl;
      continue;
    }
    if (c[t] == 'A') {
      cout << "Mystery Award";
    } else if (c[t] == 'B') {
      cout << "Minion";
    } else if (c[t] == 'C') {
      cout << "Chocolate";
    }
    c[t] = 'N';
    cout << endl;
  }
  return 0;
}