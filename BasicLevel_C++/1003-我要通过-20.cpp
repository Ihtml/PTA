#include <iostream>
#include <map>
using namespace std;
int main() {
  int n, p = 0, t = 0;
  string str;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> str;
    map<char, int> m;
    for (int j = 0; j < str.length(); j++) {
      if (str[j] == 'P') {
        p = j;
      }
      if (str[j] == 'T') {
        t = j;
      }
      m[str[j]]++;
    }
    if(m.size()==3 && m['P']==1 && m['T']==1 && m['A']!=0 && t>p+1 && (p)*(t-p-1)==str.length()-t-1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
  }
  return 0;
}