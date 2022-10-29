// problem link:

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  // write your code here
  int earliestFullBloom(vector<int> &plantTime, vector<int> &growTime)
  {
    vector<pair<int, int>> v;
    int n = plantTime.size();
    for (int i = 0; i < n; i++)
    {
      v.push_back({growTime[i] + 1, plantTime[i]});
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int cur = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      int gt = v[i].first;
      int pt = v[i].second;
      ans = max(ans, cur + pt + gt - 1);
      // cout << ans << " " << cur << endl;
      cur += pt;
    }
    return ans;
  }
};

int main()
{
  Solution s;
}