1class Solution {
2public:
3    long long maxMatrixSum(vector<vector<int>>& matrix) {
4        int count=0;
5        long long sum=0;
6        int n=matrix.size();
7        int m=matrix[0].size();
8        int mini=INT_MAX;
9        for(int i=0;i<n;i++)
10        {
11            for(int j=0;j<m;j++)
12            {
13                if(matrix[i][j]<0)
14                {
15                    count++;
16                }
17                int pos=abs(matrix[i][j]);
18                sum+=pos;
19                mini=min(mini,pos);
20            }
21        }
22        if(count%2==0)
23        return sum;
24        else
25        return sum-2LL*mini;
26    }
27};