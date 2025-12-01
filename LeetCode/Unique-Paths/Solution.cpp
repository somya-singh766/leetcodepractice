1class Solution {
2public:
3    int ways(int i,int j,int m,int n,vector<vector<int>> &dp)
4    {
5        if(i==m-1 && j==n-1)
6        return 1;
7        if(dp[i][j]!=-1)
8        return dp[i][j];
9        int down=0,right=0;
10        if(j<n-1)
11        right=ways(i,j+1,m,n,dp);
12        if(i<m-1)
13        down=ways(i+1,j,m,n,dp);
14        return dp[i][j]=right+down;
15        
16    }
17    int uniquePaths(int m, int n) {
18         vector<vector<int>>dp(m,vector<int>(n,-1));
19        return ways(0,0,m,n,dp);
20    }
21};