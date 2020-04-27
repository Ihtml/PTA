#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t, a, b;
    string st, sa, sb;
    cin >> t;
    st = to_string(t);
    sa = st.substr(0, st.length() / 2);
    sb = st.substr(st.length() / 2);
    a = stoi(sa);
    b = stoi(sb);
    if (a == 0 || b == 0) {
      cout << "No";
    } else {
      cout << ((t % (a * b) == 0) ? "Yes" : "No");
    }
    cout << endl;
  }
  return 0;
}