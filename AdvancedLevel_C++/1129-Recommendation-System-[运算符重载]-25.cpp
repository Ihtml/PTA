#include <iostream>
#include <set>
using namespace std;
struct obj {
  int idx, ctn;
  bool operator<(const obj& a) const { return ctn == a.ctn ? idx < a.idx : ctn > a.ctn; }
};
int main() {
  int n, k, idx, book[500001];
  set<obj> st;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &idx);
    if (i != 0) {
      printf("%d:", idx);
      int t = 0;
      for (auto it = st.begin(); t < k && it != st.end(); it++) {
        printf(" %d", it->idx);
        t++;
      }
      printf("\n");
    }
    obj a;
    a.idx = idx;
    a.ctn = book[idx];
    auto it = st.find(a);
    if (it != st.end()) {
      st.erase(it);
    }
    book[idx]++;
    a.ctn = book[idx];
    st.insert(a);
  }
  return 0;
}