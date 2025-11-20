class Solution {
public:
    bool diag(int i,int j,int n,vector<string>&board)
    {
        int row=i,col=j;
        while(row>-1 && col>-1)
        {
            if(board[row][col]=='Q')
            {
                return 0;
            }
            row--,col--;
        }
        row=i,col=j;
         while(row>-1 && col<n)
        {
            if(board[row][col]=='Q')
            {
                return 0;
            }
            row--,col++;
        }
        return 1;
    }
    void find(int row,int n,vector<bool>&column,vector<string>&board,vector<vector<string>>&ans)
    {
        if(row==n)
        {   
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!column[i] && diag(row,i,n,board))
            {   column[i]=1;
                board[row][i]='Q';
                find(row+1,n,column,board,ans);
                column[i]=0;
                board[row][i]='.';
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
        vector<bool>column(n,0);
        find(0,n,column,board,ans);
        return ans;
    }
};