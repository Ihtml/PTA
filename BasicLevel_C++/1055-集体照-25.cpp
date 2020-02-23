#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct obj {
  string name;
  int high;
};
bool cmp(obj a, obj b) {
  return a.high == b.high ? a.name < b.name : a.high > b.high;
}
int main() {
  int N, K, m;
  cin >> N >> K;
  vector<obj> v(N), temp;
  for (int i = 0; i < N; i++) {
    cin >> v[i].name;
    cin >> v[i].high;
  }
  sort(v.begin(), v.end(), cmp);
  m = N / K;
  int t, idx = 0;
  for (int i = 0; i < K; i++) {
    t = i == 0 ? N - m * (K - 1) : m;
    vector<obj> temp(t);
    int j;
    for (int i = 0; i < t; i++) {
      j = i % 2 == 0 ? t / 2 + 1 + i / 2 : t / 2 + 1 - (i + 1) / 2;
      temp[j - 1] = v[idx];
      idx++;
    }
    for (int i = 0; i < t; i++) {
      if (i != 0) {
        cout << " ";
      }
      cout << temp[i].name;
    }
    cout << endl;
  }
  return 0;
}