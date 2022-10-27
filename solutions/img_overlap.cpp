// problem link: 

#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

class Solution {
public:
  // write your code here

  int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int rs = n - 1, re = n - 1, cs = n - 1, ce = n - 1;
        int ans = 0;
        while(rs >= 0 && re >= 0) {
            while(cs >= 0 && ce >= 0) {
                // do compare
                int trd = re - rs;
                int tcd = ce - cs;
                int r1 = rs;
                int c1 = cs;
                int r2 = n - 1 - re;
                int c2 = n - 1 - ce;
                int count = 0;
                for(int rd = 0; rd <= trd; rd++) {
                    for(int cd = 0; cd <= tcd; cd++) {
                        if (img1[r1 + rd][c1 + cd] == 1 && img2[r2 + rd][c2 + cd] == 1) count++;
                    }
                }
                ans = max(ans, count);
                if (cs == 0) ce--;
                else cs --;
            }
            if (rs == 0) re--;
            else rs--;
            cs = n - 1;
            ce = n - 1;
        }
        return ans;
    }

};

int main() {
  Solution s;

}