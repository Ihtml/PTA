#include <iostream>
#include <string>
using namespace std;
int main(){
    int a[22]={0}, b[22]={0}, flag=0, carry=0;
    string sa, sb;
    cin >> sa;
    char c;
    for(int i = sa.length()-1; i>=0; i--){
        int t = sa[i] -'0';
        c = ((t*2 + carry) % 10) + '0';
        sb = c + sb;
        carry = (t*2 + carry) / 10;
    }
    if(carry){
        c = carry + '0';
        sb = c + sb;
    }
    if(sa.length() != sb.length()){
        flag = 1;
    }else{
        for(int i = 0; i < sa.length(); i++){
            a[sa[i]-'0']++;
            b[sb[i]-'0']++;
        }
        for(int i = 0; i < 21; i++){
            if(a[i] != b[i]){
                flag = 1;
            }
        }
    }
    if(flag){
        cout << "No";
    }else{
        cout << "Yes";
    }
    cout << endl << sb;
    return 0;
}