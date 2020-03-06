#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, b, c;
    string s;
    cin >> a >> b;
    c = a*b;
    s = to_string(c);
    reverse(s.begin(), s.end());
    c = stoi(s);
    cout << c;
    return 0;
}