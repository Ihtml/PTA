#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
struct school {
  string name;
  int num, tscore;
};
bool cmp(school a, school b) {
  return a.tscore != b.tscore
             ? a.tscore > b.tscore
             : a.num != b.num ? a.num < b.num : a.name < b.name;
}
int main() {
  int n, ctn = 0;
  cin >> n;
  string id, sname;
  int score;
  vector<school> v;
  unordered_map<string, school> mp;
  for (int i = 0; i < n; i++) {
    cin >> id >> score >> sname;
    for (int i = 0; i < sname.length(); i++) {
      sname[i] = tolower(sname[i]);
    }
    score = id[0] == 'A' ? score*6 : id[0] == 'T' ? score * 9 : score *4;
    mp[sname].name = sname;
    mp[sname].tscore += score;
    mp[sname].num++;
  }
  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    mp[it->first].tscore = mp[it->first].tscore / 6;
    v.push_back(mp[it->first]);
  }
  sort(v.begin(), v.end(), cmp);
  int rank = 0;
  printf("%lu\n", v.size());
  for (int i = 0; i < v.size(); i++) {
    if (i != 0 && v[i].tscore   == v[i - 1].tscore) {
      rank = rank;
    } else {
      rank = i + 1;
    }
    printf("%d %s %d %d\n", rank, v[i].name.c_str(), v[i].tscore,
           v[i].num);
  }
  return 0;
}