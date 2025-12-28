1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        int n=grid.size();
5        int m=grid[0].size();
6        int count=0;
7        int i=0,j=m-1;
8        while(i<n && j>=0)
9        {   
10            if(grid[i][j]<0 )
11            {
12                count+=(n-i);
13                j--;
14            }
15            else{
16                i++;
17                
18            }
19            
20        }
21        return count;
22    }
23};