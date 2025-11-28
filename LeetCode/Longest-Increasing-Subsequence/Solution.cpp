1class Solution {
2public:
3    int lengthOfLIS(vector<int>& nums) {
4         int n=nums.size();
5        vector<int>dp(n,1);
6         int ans=0;
7        for(int i=0;i<n;i++)
8        {
9            for(int j=i-1;j>=0;j--)
10            {
11                if(nums[j]<nums[i])
12                {
13                    dp[i]=max(dp[i],1+dp[j]);
14                }
15               
16            }
17        }
18       
19        for(int i=0;i<n;i++)
20        {
21           
22                ans=max(ans,dp[i]);
23           
24        }
25        return ans;
26    }
27};