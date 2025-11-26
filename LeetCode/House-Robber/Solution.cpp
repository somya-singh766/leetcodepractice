class Solution {
public:
    int help(int i,int n,vector<int>& dp,vector<int>& nums)
    {
        if(i>=n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        return dp[i]=max((nums[i]+help(i+2,n,dp,nums)),help(i+1,n,dp,nums));
    }
    int rob(vector<int>& nums) {
        int  n=nums.size();
      vector<int>dp(n+1,-1);
     return help(0,n,dp,nums);

    }
};