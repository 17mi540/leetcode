// problem link: 

#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& words) {
    unordered_map<string, vector<string>> umap;
    for (string word: words) {
      string copy = "";
      for (char ch: word) copy.push_back(ch);
      sort(copy.begin(), copy.end());
      if (umap.find(copy) != umap.end()) {
        umap[copy].push_back(word);
      } else {
        umap[copy] = { word };
      }
    }
    vector<vector<string> > ans;
    for(auto p: umap) {
      ans.push_back(p.second);
    }
    return ans;
  }
};

int main() {
  Solution s;

}