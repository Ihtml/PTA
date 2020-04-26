#include <iostream>
#include <set>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  int cp[100005]={-1}, guest[100005] = {0}, a, b;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cp[a] = b;
    cp[b] = a;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> a;
    guest[a] = 1;
  }
  set<int> st;
  for (int i = 0; i < 100005; i++) {
    if (guest[i]) {
      if (cp[i] == -1) {
        st.insert(i);
      } else {
        if (guest[cp[i]] == 0) {
          st.insert(i);
        }
      }
    }
  }
  cout << st.size() << endl;
  for (auto it = st.begin(); it != st.end(); it++) {
    if (it != st.begin()) {
      cout << " ";
    }
    printf("%05d", *it);
  }
  return 0;
}