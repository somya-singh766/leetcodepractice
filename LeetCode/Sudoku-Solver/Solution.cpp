class Solution {
public:
bool check(int num,int i ,int j,vector<vector<char>>& board)
{
    //same row
    for(int col=0;col<9;col++)
    {
        if(board[i][col]=='0'+num)
        {
            return 0;
        }
    }
    //same col
    for(int row=0;row<9;row++)
    {
        if(board[row][j]=='0'+num)
        {
            return 0;
        }
    }
    //same box
     i=i/3*3;
     j=j/3*3;
    for(int a=i;a<i+3;a++)
    {
      for(int b=j;b<j+3;b++)
      {
        if(board[a][b]=='0'+num)
        {
            return 0;
        }
      }
    }
    return 1;

}
    bool find(int i,int j,vector<vector<char>>& board)
    {
        if(i==9)
        {
            return 1;
        }
        if(j==9)
        {
           return find(i+1,0,board);
        }
        if(board[i][j]!='.')
        {
           return find(i,j+1,board);
        }
        for(int num=1;num<10;num++)
        {
            if(check(num,i,j,board))
            {
                board[i][j]='0'+num;
                if(find(i,j+1,board))
                {
                    return 1;
                }
                board[i][j]='.';
            }
        }
        return 0;
    }
    void solveSudoku(vector<vector<char>>& board) {
        find(0,0,board);
    }
};