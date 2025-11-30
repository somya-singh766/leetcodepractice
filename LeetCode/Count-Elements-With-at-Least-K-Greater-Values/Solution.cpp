1class Solution {
2public:
3    int countElements(vector<int>& nums, int k) {
4         int n = nums.size();
5        sort(nums.begin(), nums.end());
6
7        if (k == 0) return n;  
8
9        int t = nums[n - k];
10        int count = 0;
11
12        for (int x : nums) {
13            if (x < t)
14                count++;
15        }
16        return count;
17    }
18};