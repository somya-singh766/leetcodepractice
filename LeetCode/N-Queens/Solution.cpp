class Solution {
public:
    void find(int row,int n,vector<bool>&column,vector<string>&board,vector<vector<string>>&ans,vector<bool>&leftd,vector<bool>&rightd)
    {
        if(row==n)
        {   
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!column[i] && leftd[n-1+row-i]==0 && rightd[i+row]==0)
            {   column[i]=1;
                board[row][i]='Q';
                leftd[n-1+row-i]=1;
                rightd[row+i]=1;
                find(row+1,n,column,board,ans,leftd,rightd);
                column[i]=0;
                board[row][i]='.';
                leftd[n-1+row-i]=0;
                rightd[row+i]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                board[i].push_back('.');
            }
        }
        vector<bool>leftd(2*n-1,0);
        vector<bool>rightd(2*n-1,0);
        vector<bool>column(n,0);
        find(0,n,column,board,ans,leftd,rightd);
        return ans;
    }
};