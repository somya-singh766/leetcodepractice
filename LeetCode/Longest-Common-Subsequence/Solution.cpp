1class Solution {
2public:
3     int find(int n,int m,string &s1, string &s2, vector<vector<int>>&dp)
4    {
5        if(n==0 || m==0)
6        return 0;
7        if(dp[n][m]!=-1)
8        return dp[n][m];
9        if(s1[n-1]==s2[m-1])
10        {
11            return dp[n][m]= 1+find(n-1,m-1,s1,s2,dp);
12        }
13        else{
14            return dp[n][m]=max(find(n-1,m,s1,s2,dp),find(n,m-1,s1,s2,dp));
15        }
16    }
17    int longestCommonSubsequence(string text1, string text2) {
18         int n=text1.size();
19        int m=text2.size();
20        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
21        return find(n,m,text1,text2,dp);
22    }
23};