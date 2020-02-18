#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string a, b, c;
    cin >> a >> b;
    int lena=a.length(), lenb=b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(lena > lenb) b.append(lena-lenb, '0');
    if(lenb > lena) a.append(lenb-lena, '0');
    char str[] = "0123456789JQK";
    for(int i=0; i< a.length(); i++){
        if(i%2 == 0){
            c+= str[(a[i]-'0' + b[i]-'0')%13 ];
        }else{
            int t = b[i] - a[i];
            if(t<0) t+=10;
            c+= str[t];
        }
    }
    for(int i=c.length()-1; i>=0; i--){
        cout << c[i];
    }
    return 0;
}