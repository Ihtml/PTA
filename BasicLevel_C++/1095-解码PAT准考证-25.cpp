#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
struct obj {
  string id, lev, room, date;
  int score;
};
bool cmp1(const obj &a,const obj &b) {
  return a.score != b.score ? a.score > b.score : a.id < b.id;
}
bool cmp3(const obj &a,const obj &b) {
  return a.score != b.score ? a.score > b.score : a.room < b.room;
}
int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  vector<obj> arr;
  for (int i = 0; i < n; i++) {
    string id;
    int g;
    cin >> id;
    scanf("%d", &g);
    obj a;
    a.id = id;
    a.lev = id.substr(0, 1);
    a.room = id.substr(1, 3);
    a.date = id.substr(4, 6);
    a.score = g;
    arr.push_back(a);
  }
  for (int i = 0; i < m; i++) {
    int k, ctn = 0, tot = 0;
    string s;
    vector<obj> arr1, arr3;
    unordered_map<string, int> mp;
    scanf("%d", &k);
    cin >> s;
    for (int i = 0; i < arr.size(); i++) {
      if (k == 1 && arr[i].lev == s) {
        arr1.push_back(arr[i]);
      }
      if (k == 2 && arr[i].room == s) {
        ctn++;
        tot += arr[i].score;
      }
      if (k == 3 && arr[i].date == s) {
        mp[arr[i].room]++;
      }
    }
    printf("Case %d: %d %s\n", i + 1, k, s.c_str());
    if ((k == 1 && arr1.size() == 0) || (k == 2 && ctn == 0) ||
        (k == 3 && mp.size() == 0)) {
      printf("NA\n");
      continue;
    }
    if (k == 2) {
      printf("%d %d\n", ctn, tot);
    }
    if (k == 1) {
      sort(arr1.begin(), arr1.end(), cmp1);
      for (int i = 0; i < arr1.size(); i++) {
        printf("%s %d\n", arr1[i].id.c_str(), arr1[i].score);
      }
    }
    if (k == 3) {
      for (auto it = mp.begin(); it != mp.end(); it++) {
        obj a;
        a.room = it->first;
        a.score = it->second;
        arr3.push_back(a);
      }
      sort(arr3.begin(), arr3.end(), cmp3);
      for (int i = 0; i < arr3.size(); i++) {
        printf("%s %d\n", arr3[i].room.c_str(), arr3[i].score);
      }
    }
  }
  return 0;
}