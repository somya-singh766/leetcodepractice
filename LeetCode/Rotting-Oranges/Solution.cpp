class Solution {
public:
int r,c;
int row[4]={1,-1,0,0};
int col[4]={0,0,1,-1};
bool valid(int i,int j)
{
    if(i>=0 && j>=0 && i<r && j<c)
    {
        return 1;
    }
    return 0;
}
    int orangesRotting(vector<vector<int>>& grid) {
         r=grid.size();
         c=grid[0].size();
        queue<pair<int,int>>q;
        int time=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                   if(grid[i][j]==2)
                   {
                    q.push({i,j});
                   }}}
                   while(!q.empty())
                   {
                    int curr=q.size();
                    bool rot=false;
                    while(curr--)
                    {int a=q.front().first;
                    int b=q.front().second;
                    q.pop();
                        
                        for(int k=0;k<4;k++)
                        {
                            if(valid(a+row[k],b+col[k]) && grid[a+row[k]][b+col[k]]==1)
                            {
                                grid[a+row[k]][b+col[k]]=2;
                               q.push({a+row[k],b+col[k]});
                               rot=true;
                            }
                        }

                    }
                    if(rot==true)
                    time++;
                   }
            
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return time;
     }} ;