#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct que {
  int val;
  string ans;
};
int main() {
  int n, m, v, c, t, max = 0;
  cin >> n >> m;
  vector<que> ques(m);
  vector<vector<int> > right(m, vector<int>(5));
  vector<vector<int> > wrong(m, vector<int>(5));
  for (int i = 0; i < m; i++) {
    cin >> v >> t >> c;
    string as;
    char a;
    for (int j = 0; j < c; j++) {
      scanf(" %c", &a);
      as += a;
      right[i][a - 'a'] = 1;
    }
    ques[i].val = v;
    ques[i].ans = as;
  }
  string s;
  for (int i = 0; i < n; i++) {
    float sum = 0;
    getchar();
    for (int j = 0; j < m; j++) {
      int res[5]={0};
      if (j != 0) {
        scanf(" ");
      }
      char c;
      int n;
      string ans;
      scanf("(%d", &n);
      for (int k = 0; k < n; k++) {
        scanf(" %c", &c);
        ans += c;
        res[c - 'a'] = 1;
      }
      scanf(")");
      for (int k = 0; k < 5; k++) {
          res[k]+=right[j][k];
        if (res[k] == 1) {
          wrong[j][k]++;
          max = wrong[j][k] > max ? wrong[j][k] : max;
        }
      }
      if (ans == ques[j].ans) {
        sum += ques[j].val;
      } else {
        int flag = 1;
        for (int i = 0; i < ans.length(); i++) {
          if (ques[j].ans.find(ans[i]) == string::npos) {
            flag = 0;
            break;
          }
        }
        if (flag) {
          sum += (float)ques[j].val / 2;
        }
      }
    }
    printf("%.1f\n", sum);
  }
  if (max == 0) {
    printf("Too simple");
    return 0;
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 5; j++) {
      if (wrong[i][j] == max) {
        printf("%d %d-%c\n", max, i + 1, 'a' + j);
      }
    }
  }
  return 0;
}