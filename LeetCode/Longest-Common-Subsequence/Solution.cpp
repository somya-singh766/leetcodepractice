1class Solution {
2public:
3     
4    int longestCommonSubsequence(string text1, string text2) {
5         int n=text1.size();
6        int m=text2.size();
7        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
8        for(int i=1;i<=n;i++)
9        {
10            for(int j=1;j<=m;j++)
11            {
12                if(text1[i-1]==text2[j-1])
13               {
14                 dp[i][j]= 1+dp[i-1][j-1];
15               }
16               else
17               {
18                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
19                }
20            }
21        }
22        return dp[n][m];
23    }
24};