1class Solution {
2public:
3    int find(int i,int t,int n,int buy,vector<int>&prices,vector<vector<vector<int>>>&dp)
4    {
5        if(i>=n)
6        return 0;
7        if(t==0)
8        return 0;
9        if(dp[i][t][buy]!=-1)
10        return dp[i][t][buy];
11        
12        if(buy==1)
13        {
14            return dp[i][t][buy]=max(-prices[i]+find(i+1,t,n,0,prices,dp),find(i+1,t,n,1,prices,dp));
15        }
16        else{
17            return dp[i][t][buy]=max(prices[i]+find(i+1,t-1,n,1,prices,dp),find(i+1,t,n,0,prices,dp));
18        }
19    }
20    int maxProfit(vector<int>& prices) {
21        int n=prices.size();
22        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(2,-1)));
23        return find(0,2,n,1,prices,dp);
24    }
25};