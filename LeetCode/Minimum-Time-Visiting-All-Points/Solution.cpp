1class Solution {
2public:
3    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
4        int res = 0;
5
6        for (int i = 1; i < points.size(); i++) {
7            res += max(
8                abs(points[i][0] - points[i - 1][0]),
9                abs(points[i][1] - points[i - 1][1])
10            );
11        }
12
13        return res;        
14    }
15};