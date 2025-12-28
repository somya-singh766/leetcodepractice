1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        int n=grid.size();
5        int m=grid[0].size();
6        int count=0;
7        for(int i=0;i<n;i++)
8        {
9            for(int j=0;j<m;j++)
10            {
11                if(grid[i][j]<0)
12                {
13                    count++;
14                }
15            }
16        }
17        return count;
18    }
19};