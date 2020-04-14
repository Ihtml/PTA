#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(char a, char b) {
  return a > b;
}
int main() {
  string s1, s2, s3;
  cin >> s1;
  s1.insert(0, 4 - s1.length(), '0');
  do {
    s2 = s1;
    sort(s1.begin(), s1.end(), cmp);
    sort(s2.begin(), s2.end());
    int res = stoi(s1) - stoi(s2);
    s3 = to_string(res);
    s3.insert(0, 4-s3.length(), '0');
    printf("%s - %s = %s\n", s1.c_str(), s2.c_str(), s3.c_str());
    s1 = s3;
  } while (s1 != "0000" && s1 != "6174");
  return 0;
}