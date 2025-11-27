1class Solution {
2public:
3
4    int ways(int i,int amount,vector<int>& coins,vector<vector<int>>&dp)
5    {
6        if(i<0)
7        return 0;
8        if(amount==0)
9        return 1;
10        if(dp[i][amount]!=-1)
11        return dp[i][amount];
12        if(coins[i]>amount)
13        return dp[i][amount]=ways(i-1,amount,coins,dp);
14        else{
15            return dp[i][amount]=ways(i,amount-coins[i],coins,dp)+ways(i-1,amount,coins,dp);
16        }
17    }
18    int change(int amount, vector<int>& coins) {
19        int n=coins.size();
20        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
21        return ways(n-1,amount,coins,dp);
22    }
23};