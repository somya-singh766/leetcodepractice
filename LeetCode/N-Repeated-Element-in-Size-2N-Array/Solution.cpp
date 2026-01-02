1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        int m=nums.size();
5        for(int i=0;i<m-2;i++)
6        {
7            if(nums[i]==nums[i+1] || nums[i]==nums[i+2])
8            {
9                return nums[i];
10            }
11        }
12        return nums[m-1];
13    }
14};