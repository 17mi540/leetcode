class Solution {
public:
    bool isPerfectSquare(int num) {
       long long left = 1,right=num;
       while(left<=right) {
           long long mid=(left+right)/2;
           if(mid*mid==num) return true;
           else if(mid*mid > num) right = mid-1 ;
           else left = mid+1;
       }
       return false;
    }
};
