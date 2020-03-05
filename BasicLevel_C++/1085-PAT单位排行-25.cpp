#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
struct obj {
  string name;
  int score, num;
};
bool cmp(obj a, obj b) {
  return a.score != b.score ? a.score > b.score
                            : a.num != b.num ? a.num < b.num : a.name < b.name;
}
int main() {
  int n, score;
  string id, name;
  map<string, obj> mp;
  cin >> n;
  for (int i = 0; i < n; i++) {
    obj a;
    cin >> id >> score >> name;
    for (int i = 0; i < name.length(); i++) {
      name[i] = tolower(name[i]);
    }
    mp[name].name = name;
    if (id[0] == 'T') {
      score = score * 9;
    } else if (id[0] == 'B') {
      score = score * 4;
    }else{
        score = score*6;
    }
    mp[name].score += score;
    mp[name].num++;
  }
  vector<obj> v;
  for (auto it = mp.begin(); it != mp.end(); it++) {
      mp[it->first].score = mp[it->first].score / 6;
    v.push_back(it->second);
  }
  sort(v.begin(), v.end(), cmp);
  printf("%lu\n", v.size());
  int ctn = 1, first = v[0].score;
  for (int i = 0; i < v.size(); i++) {
    printf("%d %s %d %d\n", v[i].score == first ? ctn : i + 1,
           v[i].name.c_str(), v[i].score, v[i].num);
    if (v[i].score < first) {
      first = v[i].score;
      ctn = i + 1;
    }
  }
  return 0;
}