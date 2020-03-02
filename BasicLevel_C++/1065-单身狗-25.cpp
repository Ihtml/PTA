#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  int n, m, a, b;
  vector<int> two(100000), isExist(100000);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d%d", &a, &b);
    two[a] = b;
    two[b] = a;
  }
  scanf("%d", &m);
  vector<int> guest(m);
  for (int i = 0; i < m; i++) {
    scanf("%d", &guest[i]);
    isExist[two[guest[i]]] = 1;
  }
  set<int> st;
  for (int i = 0; i < m; i++) {
    if (!isExist[guest[i]])
      st.insert(guest[i]);
  }
  printf("%d\n", st.size());
  for (auto it = st.begin(); it != st.end(); it++) {
    if (it != st.begin()) printf(" ");
    printf("%05d", *it);
  }
  return 0;
}