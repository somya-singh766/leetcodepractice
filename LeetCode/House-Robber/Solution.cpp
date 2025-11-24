class Solution {
public:
    int help(int i,vector<int>&nums,vector<int>&dp,int n)
    {
        if(i>=n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        return dp[i]=max(nums[i]+help(i+2,nums,dp,n),help(i+1,nums,dp,n));
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+4,-1);
        return help(0,nums,dp,n);
    }
};