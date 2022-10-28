class Solution {
public:   
    int jump(vector<int> &nums){
        int n=nums.size();
        int maxi=0,curr=0,jump=0;
        for(int i=0;i<n-1;i++){
            maxi=max(i+nums[i],maxi);
            if(i==curr){
                jump++;
                curr=maxi;
            }
        }
        return jump;
    }
};

//link: https://leetcode.com/problems/jump-game-ii/
