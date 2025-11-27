1class Solution {
2public:
3
4    
5    int change(int amount, vector<int>& coins) {
6        int n=coins.size();
7         long long MOD = 1e9 + 7;
8
9        vector<vector<long long>>dp(n+1,vector<long long>(amount+1,0));
10        for(int i=0;i<=n;i++)
11        {
12            dp[i][0]=1;
13        }
14        for(int i=1;i<=n;i++)
15        {
16            for(int j=1;j<=amount;j++)
17            {
18                if(coins[i-1]>j)
19                {
20                  dp[i][j]=dp[i-1][j];
21
22                }
23                else{
24                   dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j] % MOD; 
25                }
26            }
27        }
28        return dp[n][amount];
29    }
30};