1class Solution {
2public:
3     
4    int longestCommonSubsequence(string text1, string text2) {
5         int n=text1.size();
6        int m=text2.size();
7         vector<int>dp(m+1);
8        for(int i=1;i<=n;i++)
9        {
10            int curr=0,prev=0;
11            //prev=dp[i-1][j-1]
12            for(int j=1;j<=m;j++)
13            {
14                prev=curr;
15                curr=dp[j];
16                if(text1[i-1]==text2[j-1])
17               {
18                 dp[j]= 1+prev;
19               }
20               else
21               {
22                   dp[j]=max(dp[j],dp[j-1]);
23                }
24            }
25        }
26        return dp[m];
27    }
28};