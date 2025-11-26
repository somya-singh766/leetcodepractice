class Solution {
public:

    int ways(int i,int amount,vector<int>& coins,vector<vector<int>>&dp)
    {
        if(i<0)
        return 0;
        if(amount==0)
        return 1;
        if(dp[i][amount]!=-1)
        return dp[i][amount];
        if(coins[i]>amount)
        return dp[i][amount]=ways(i-1,amount,coins,dp);
        else{
            return dp[i][amount]=ways(i,amount-coins[i],coins,dp)+ways(i-1,amount,coins,dp);
        }
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return ways(n-1,amount,coins,dp);
    }
};