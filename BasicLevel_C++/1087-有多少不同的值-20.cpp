#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    set<int> st;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        st.insert(i/2 + i/3 + i/5);
    }
    cout << st.size();
    return 0;
}