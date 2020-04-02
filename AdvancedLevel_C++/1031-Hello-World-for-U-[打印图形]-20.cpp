#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.length();
    int n1 = (len+2)/3;
    int n2 = len + 2 - 2*n1;
    int t = n2 -2;
    for (int i = 0; i < n1 -1; i++)
    {
        printf("%c", s[i]);
        for (int i = 0; i < n2 - 2; i++)
        {
            printf(" ");
        }
        printf("%c\n", s[len-i-1]);
    }
    for (int i = n1 - 1; i < n1+n2-1; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}