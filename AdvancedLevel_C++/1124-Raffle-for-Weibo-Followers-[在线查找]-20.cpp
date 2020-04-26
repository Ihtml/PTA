#include <iostream>
#include <set>
using namespace std;
int main() {
  int m, n, s, flag = 0;
  cin >> m >> n >> s;
  string name;
  set<string> st;
  for (int i = 1; i <= m; i++) {
    cin >> name;
    if (i == s) {
      if (st.find(name) == st.end()) {
        cout << name << endl;
        s += n;
        st.insert(name);
      } else {
        s++;
      }
      flag = 1;
    }
  }
  if (flag == 0) {
    cout << "Keep going...";
  }
  return 0;
}