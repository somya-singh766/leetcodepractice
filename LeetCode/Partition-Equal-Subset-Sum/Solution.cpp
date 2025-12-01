1class Solution {
2public:
3 bool find(int i,int n,vector<int>&arr,int target,vector<vector<int>>&dp)
4    {
5         if(target==0)
6        return 1;
7        if(i>=n || target<0)
8        return 0;
9        if(dp[i][target]!=-1)
10        return dp[i][target];
11
12       
13        return dp[i][target]=find(i+1,n,arr,target-arr[i],dp) || find(i+1,n,arr,target,dp);
14    }
15    bool canPartition(vector<int>& nums) {
16        int n=nums.size();
17        int sum=0,target;
18        for(int i=0;i<n;i++)
19        {
20            sum+=nums[i];
21        }
22        if(sum%2!=0)
23        return 0;
24        else{
25            target=sum/2;
26        }
27        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
28        return find(0,n,nums,target,dp);
29    }
30};