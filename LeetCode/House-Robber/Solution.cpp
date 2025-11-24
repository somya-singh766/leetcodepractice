class Solution {
public:
int rob1(vector<int>& nums,int i,int n,vector<int> & dp)
{
    if (i >= n) return 0;     
    if (dp[i] != -1) return dp[i];      
    int inc = nums[i] + rob1(nums, i + 2,n, dp); 
    int exc = rob1(nums, i + 1,n, dp);           

    dp[i] = max(inc, exc);      
    return dp[i];
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return rob1(nums,0,n,dp);
    }
};