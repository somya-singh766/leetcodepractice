1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int sum=0;
5        for(int i=0;i<nums.size();i++)
6        {
7            sum+=nums[i];
8        }
9        return sum%k;
10    }
11};