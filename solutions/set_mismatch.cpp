// problem link: 

#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

class Solution {
public:
  // write your code here

  vector<int> findErrorNums(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> ans;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] == nums[i - 1]) {
        ans.push_back(nums[i]);
      }
    }
    vector<int> m(nums.size());
    for (int i = 0; i < nums.size(); i++) {
      m[nums[i] - 1] = 1;
    }
    for(int i = 0; i < nums.size(); i++) {
      if (m[nums[i] - 1] == 0) {
        ans.push_back(i + 1);
      }
    }
    return ans;
  }

};

int main() {
  Solution s;

}