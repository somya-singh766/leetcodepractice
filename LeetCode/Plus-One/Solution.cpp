1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        int n=digits.size();
5        for(int i=n-1;i>=0;i--)
6        {
7            if(digits[i]<9)
8            {
9                digits[i]++;
10                return digits;
11            }
12            digits[i]=0;
13        }
14         vector<int> ans(n + 1, 0);
15        ans[0] = 1;
16        return ans;
17
18    }
19};