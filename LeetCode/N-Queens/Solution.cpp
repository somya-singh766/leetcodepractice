1class Solution {
2public:
3    void find(int row,int n,vector<bool>&column,vector<string>&board,vector<vector<string>>&ans,vector<bool>&leftd,vector<bool>&rightd)
4    {
5        if(row==n)
6        {   
7            ans.push_back(board);
8            return;
9        }
10        for(int i=0;i<n;i++)
11        {
12            if(!column[i] && leftd[n-1+row-i]==0 && rightd[i+row]==0)
13            {   column[i]=1;
14                board[row][i]='Q';
15                leftd[n-1+row-i]=1;
16                rightd[row+i]=1;
17                find(row+1,n,column,board,ans,leftd,rightd);
18                column[i]=0;
19                board[row][i]='.';
20                leftd[n-1+row-i]=0;
21                rightd[row+i]=0;
22            }
23        }
24    }
25    vector<vector<string>> solveNQueens(int n) {
26        vector<vector<string>>ans;
27        vector<string>board(n);
28        for(int i=0;i<n;i++)
29        {
30            for(int j=0;j<n;j++)
31            {
32                board[i].push_back('.');
33            }
34        }
35        vector<bool>leftd(2*n-1,0);
36        vector<bool>rightd(2*n-1,0);
37        vector<bool>column(n,0);
38        find(0,n,column,board,ans,leftd,rightd);
39        return ans;
40    }
41};