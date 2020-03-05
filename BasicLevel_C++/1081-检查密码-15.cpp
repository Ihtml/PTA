#include <cctype>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  getchar();
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    if (s.length() < 6) {
      cout << "Your password is tai duan le." << endl;
      continue;
    }
    int a = 0, n = 0, flag=1;
    for (int j = 0; j < s.length(); j++) {
      char c = s[j];
      if (!isalpha(c) && !isdigit(c) && c != '.') {
        cout << "Your password is tai luan le." << endl;
        flag = 0;
        break;
      }
      if (isalpha(c)) {
        a++;
      } else if (isdigit(c)) {
        n++;
      }
    }
    if (a == 0 && flag) {
      cout << "Your password needs zi mu." << endl;
    } else if (n == 0 && flag) {
      cout << "Your password needs shu zi." << endl;
    }else if(flag){
        cout << "Your password is wan mei." << endl;
    }
  }
  return 0;
}