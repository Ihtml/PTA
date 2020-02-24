#include <iostream>
#include <vector>
using namespace std;
struct question {
  int y;
  int n;
  int v;
  string a;
};
int main() {
  int N, M, max = -1;
  scanf("%d%d", &N, &M);
  vector<question> m(M);
  vector<int> stu(N);
  int t;
  for (int i = 0; i < M; i++) {
    scanf("%d %d %d", &m[i].v, &t, &m[i].y);
    char c;
    for (int j = 0; j < m[i].y; j++) {
      scanf(" %c", &c);
      m[i].a += c;
    }
  }
  for (int i = 0; i < N; i++) {
    int t;
    char c;
    scanf("\n");
    for (int j = 0; j < M; j++) {
      if (j != 0)
        scanf(" ");
      scanf("(%d", &t);
      string s;
      for (int k = 0; k < t; k++) {
        scanf(" %c", &c);
        s += c;
      }
      scanf(")");
      if (m[j].a != s) {
        m[j].n++;
        max = m[j].n > max ? m[j].n : max;
      } else {
        stu[i] += m[j].v;
      }
    }
  }
  vector<int> res;
  for (int i = 0; i < M; i++) {
    if (m[i].n == max) {
      res.push_back(i + 1);
    }
  }
  for (int i = 0; i < N; i++) {
    printf("%d\n", stu[i]);
  }
  if (max == -1) {
    printf("Too simple");
  } else {
    printf("%d", max);
    for (int i = 0; i < res.size(); i++) {
      printf(" %d", res[i]);
    }
  }
  return 0;
}