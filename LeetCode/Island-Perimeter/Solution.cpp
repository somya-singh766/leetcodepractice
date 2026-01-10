1class Solution {
2public:
3    int islandPerimeter(vector<vector<int>>& grid) {
4        int perimeter = 0;
5        int row = grid.size();
6        int col = grid[0].size();
7
8        for(int i = 0; i < row; i++) {
9            for(int j = 0; j < col; j++) {
10                if(grid[i][j] == 1) {
11                    perimeter += 4;
12
13                    // check top
14                    if(i > 0 && grid[i-1][j] == 1)
15                        perimeter -= 2;
16
17                    // check left
18                    if(j > 0 && grid[i][j-1] == 1)
19                        perimeter -= 2;
20                }
21            }
22        }
23        return perimeter;
24    }
25};