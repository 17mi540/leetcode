// problem link: https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  // write your code here
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> umap;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
      umap[nums[i]] = i;
    for (int i = 0; i < nums.size(); i++)
    {
      int rem = target - nums[i];
      if (umap.find(rem) != umap.end() && umap[rem] > i)
      {
        ans.push_back(i);
        ans.push_back(umap[rem]);
        return ans;
      }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
  }
};

int main()
{
  Solution s;
}