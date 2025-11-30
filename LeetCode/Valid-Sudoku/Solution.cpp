1class Solution {
2public:
3     bool check(int num,int i ,int j,vector<vector<char>>& board)
4{
5    //same row
6    for(int col=0;col<9;col++)
7    {
8        if(col!=j && board[i][col]=='0'+num)
9        {
10            return 0;
11        }
12    }
13    //same col
14    for(int row=0;row<9;row++)
15    {
16        if(row!=i && board[row][j]=='0'+num)
17        {
18            return 0;
19        }
20    }
21    //same box
22     int oi = i;
23        int oj = j;
24     i=i/3*3;
25     j=j/3*3;
26    for(int a=i;a<i+3;a++)
27    {
28      for(int b=j;b<j+3;b++)
29      {
30        if(a!=oi && b!=oj && board[a][b]=='0'+num)
31        {
32            return 0;
33        }
34      }
35    }
36    return 1;
37
38}
39    bool isValidSudoku(vector<vector<char>>& board) {
40        for(int i=0;i<9;i++)
41        {
42            for(int j=0;j<9;j++)
43            {
44                if(board[i][j]!='.')
45
46                {
47                    int num=board[i][j]-'0';
48                    if(!check(num,i,j,board))
49                    {
50                        return 0;
51                    }
52                }
53            }
54        }
55        return 1;
56    }
57};