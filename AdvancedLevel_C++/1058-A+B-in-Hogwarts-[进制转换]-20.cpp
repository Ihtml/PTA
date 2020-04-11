#include <iostream>
using namespace std;
int main(){
    int g1,g2,g, s1,s2,s,k1,k2, k,carry=0;
    scanf("%d.%d.%d", &g1, &s1, &k1);
    scanf("%d.%d.%d", &g2, &s2, &k2);
    k = (k1+k2)%29;
    carry = (k1+k2)/29;
    s = (s1+s2+carry)%17;
    carry = (s1+s2+carry)/17;
    g = g1+g2+carry;
    printf("%d.%d.%d", g, s, k);
}