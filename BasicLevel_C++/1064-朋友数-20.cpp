#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, ctn = 0;
  string s;
  int arr[40] = {0};
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    int sum = 0;
    for (int j = 0; j < s.length(); j++) {
      sum += s[j] - '0';
    }
    arr[sum]++;
  }
  vector<int> v;
  for (int i = 0; i < 40; i++) {
    if (arr[i] > 0) {
      v.push_back(i);
      ctn++;
    }
  }
  cout << ctn << endl;
  for (int i = 0; i < v.size(); i++) {
    if (i != 0) {
      cout << " ";
    }
    cout << v[i];
  }
  return 0;
}