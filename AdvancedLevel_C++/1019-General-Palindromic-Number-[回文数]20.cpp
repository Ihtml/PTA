#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, b;
  cin >> n >> b;
  vector<int> arr;
  while (n != 0) {
    arr.push_back(n % b);
    n = n / b;
  }
  int len = arr.size(), flag = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] != arr[len - 1 - i]) {
      flag = 1;
    }
  }
  if (flag) {
    cout << "No";
  } else {
    cout << "Yes";
  }
  cout << endl;
  for (int i = len - 1; i >= 0; i--) {
    if(i!=len-1){
    cout << " ";
    }
    cout << arr[i];
  }
  return 0;
}