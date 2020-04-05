#include <iostream>
using namespace std;
int main() {
  int n, isM = 0, isF = 0, max = -1, min = 101, diff, score;
  string name, gender, mname, fname, id, mid, fid;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> name >> gender >> id >> score;
    if (gender == "M") {
      isM = 1;
      if (score < min) {
        min = score;
        mname = name;
        mid = id;
      }
    } else if (gender == "F") {
      isF = 1;
      if (score > max) {
        max = score;
        fname = name;
        fid = id;
      }
    }
  }
  if (isF) {
    cout << fname << " " << fid;
  } else {
    cout << "Absent";
  }
  cout << endl;
  if (isM) {
    cout << mname << " " << mid;
  } else {
    cout << "Absent";
  }
  cout << endl;
  if (isF && isM) {
    cout << max - min;
  } else {
    cout << "NA";
  }
  return 0;
}