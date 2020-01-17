#include <iostream>
#include <string>
using namespace std;
int main() {
  int sum = 0;
  string str, sum_str;
  string str_arr[10] = {"ling", "yi",  "er", "san", "si",
                        "wu",   "liu", "qi", "ba",  "jiu"};
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    sum += str[i] - '0';
  }
  sum_str = to_string(sum);
  for (int i = 0; i < sum_str.length(); i++) {
    if (i != 0) {
      cout << " ";
    }
    cout << str_arr[sum_str[i] - '0'];
  }
  return 0;
}