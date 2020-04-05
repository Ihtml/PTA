#include <iostream>
using namespace std;
int main() {
  int n, max = -1, min = 101, score;
  string name, sex, male, female, id;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> name >> sex >> id >> score;
    if (sex == "M" && score < min) {
      min = score;
      male = name + " " + id;
    }
    if (sex == "F" && score > max) {
      max = score;
      female = name + " " + id;
    }
  }
  if (max == -1) {
    cout << "Absent";
  } else {
    cout << female;
  }
  cout << endl;
  if (min == 101) {
    cout << "Absent";
  } else {
    cout << male;
  }
  cout << endl;
  if (max != -1 && min != 101) {
    cout << max - min;
  } else {
    cout << "NA";
  }
  return 0;
}