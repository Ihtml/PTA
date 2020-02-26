#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, a, b;
    cin >> n;
    double t, max=-1;;
    for(int i=0; i <n; i++){
        cin >> a >> b;
        t = sqrt(a*a + b*b);
        if(t > max){
            max = t;
        }
    }
    printf("%.2lf", max);
    return 0;
}