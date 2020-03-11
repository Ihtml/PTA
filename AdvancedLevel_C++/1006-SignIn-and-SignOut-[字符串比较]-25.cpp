#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  string id, t1, t2, tmin = "24:00:00", tmax = "-00:00:01", id1, id2;
  for (int i = 0; i < n; i++) {
    cin >> id >> t1 >> t2;
    if (t1 < tmin) {
      id1 = id;
      tmin = t1;
    }
    if (t2 > tmax) {
      id2 = id;
      tmax = t2;
    }
  }
  cout << id1 << " " << id2;
  return 0;
}