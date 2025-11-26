class Solution {
public:
    int ways(int i,vector<int>&dp,int n)
    {
      if(i>n)
      return 0;
      if(i==n)
      return 1;
      if(dp[i]!=-1)
      return dp[i];
      return dp[i]=ways(i+1,dp,n)+ways(i+2,dp,n);
    }
    int climbStairs(int n) {
        vector<int>dp(n+2,-1);
       return ways(0,dp,n);
    }
};