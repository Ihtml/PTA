#include <iostream>
#include <cmath>
using namespace std;
int gcd(long long a, long long b){
    return a==0 ? b : gcd(b%a, a);
}
int main(){
    int N1,N2,M1,M2,K, a, b, c;
    scanf("%d/%d %d/%d %d", &N1, &M1 , &N2 , &M2, &K);
    if(N1*M2 > N2*M1){
        a = N2*K/M2 + 1;
        b = M1;
        c = N1;
    }else{
        a = N1*K/M1 +1;
        b = M2;
        c = N2;
    }
    int flag = 0;
    while(a*b < c*K){
        if(gcd(a,K) == 1){
            if(flag){
                cout << " ";
            }
            cout << a << "/" << K;
            flag = 1;
        }
        a++;
    }
    return 0;
}