1class Solution {
2public:
3bool isMagic(vector<vector<int>>& grid, int r, int c) {
4    if (grid[r+1][c+1] != 5) return false;
5
6        vector<bool> used(10, false);
7
8        // check  different nos
9        for (int i = r; i < r+3; i++) {
10            for (int j = c; j < c+3; j++) {
11                int x = grid[i][j];
12                if (x < 1 || x > 9 || used[x]) return false;
13                used[x] = true;
14            }
15        }
16
17        // rows
18        for (int i = 0; i < 3; i++) {
19            if (grid[r+i][c] + grid[r+i][c+1] + grid[r+i][c+2] != 15)
20                return false;
21        }
22        // columns
23        for (int j = 0; j < 3; j++) {
24            if (grid[r][c+j] + grid[r+1][c+j] + grid[r+2][c+j] != 15)
25                return false;
26        }
27
28        // diagonals
29        if (grid[r][c] + grid[r+1][c+1] + grid[r+2][c+2] != 15) return false;
30        if (grid[r][c+2] + grid[r+1][c+1] + grid[r+2][c] != 15) return false;
31
32        return true;
33    }
34
35    int numMagicSquaresInside(vector<vector<int>>& grid) {
36        int rows = grid.size(), cols = grid[0].size();
37        int count = 0;
38
39        for (int i = 0; i <= rows - 3; i++) {
40            for (int j = 0; j <= cols - 3; j++) {
41                if (isMagic(grid, i, j))
42                    count++;
43            }
44        }
45        return count;
46    }
47};