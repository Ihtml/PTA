#include <iostream>
using namespace std;
int main() {
  int arr[256] = {0};
  int result = 0;
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < a.length(); i++) {
    arr[a[i]]++;
  }
  for (int i = 0; i < b.length(); i++) {
    if (arr[b[i]] > 0) {
      arr[b[i]]--;
    } else {
      result++;
    }
  }
  if (result > 0) {
    cout << "No " << result;
  } else {
    cout << "Yes " << a.length() - b.length();
  }
  return 0;
}