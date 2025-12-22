1class Solution {
2public:
3    int maximumGap(vector<int>& nums) {
4        int ans=INT_MIN;
5        int n=nums.size();
6        if(n<=1)
7        return 0;
8        sort(nums.begin(),nums.end());
9        for(int i=1;i<n;i++)
10        {
11            int a=nums[i]-nums[i-1];
12            ans=max(ans,a);
13        }
14        return ans;
15    }
16};