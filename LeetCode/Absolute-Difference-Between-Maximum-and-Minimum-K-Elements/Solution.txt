1class Solution {
2public:
3    int absDifference(vector<int>& nums, int k) {
4        int n=nums.size();
5        sort(nums.begin(),nums.end());
6        int i=0,j=n-1;
7       int  max_sum=0,min_sum=0;
8        
9        while(k--){
10            max_sum+=nums[j--];
11            min_sum+=nums[i++];
12        }
13        return abs(max_sum-min_sum);
14    }
15};