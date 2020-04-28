#include <iostream>
#include <set>
using namespace std;
int main() {
  int n, t;
  cin >> n;
  set<int> st;
  for (int i = 0; i < n; i++) {
    cin >> t;
    st.insert(t);
  }
  for (int i = 1; i <= 100001; i++) {
    if (st.find(i) == st.end()) {
      cout << i;
      break;
    }
  }
  return 0;
}