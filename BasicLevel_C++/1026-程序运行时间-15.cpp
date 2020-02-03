#include <iostream>
using namespace std;
int main(){
    int c1, c2, t, h, m;
    cin >> c1 >> c2;
    t = (c2-c1+50)/100;
    h = t/3600;
    t = t%3600;
    m = t/60;
    t = t%60;
    printf("%02d:%02d:%02d", h, m, t);
}