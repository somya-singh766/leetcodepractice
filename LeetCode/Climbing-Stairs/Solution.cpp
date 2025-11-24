class Solution {
public:
    int help(int n,int i,vector<int>&dp)
    {
        if(i==n)
        return 1;
        if(i>n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        return dp[i]= help(n,i+1,dp)+help(n,i+2,dp);

    }
    int climbStairs(int n) {
        int i=0;
        vector<int>dp(n+2,-1);
       return help(n,i,dp);
    }
};