#include <iostream>
using namespace std;
int main() {
  int n, score, max = -1, min = 101;
  string name, num, max_name, min_name, max_num, min_num;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> name >> num >> score;
    if (score > max) {
      max_name = name;
      max_num = num;
      max = score;
    }
    if (score < min) {
      min_name = name;
      min_num = num;
      min = score;
    }
  }
  cout << max_name << " " << max_num << endl << min_name << " " << min_num;
  return 0;
}