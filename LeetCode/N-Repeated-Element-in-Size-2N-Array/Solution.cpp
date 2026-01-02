1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        int m=nums.size();
5        sort(nums.begin(),nums.end());
6        int n=m/2;
7        int count=1;
8        int i;
9        for( i=0;i<m;i++)
10        {
11            if(nums[i]==nums[i+1])
12            {
13                count++;
14            }
15            if(count==n)
16            {
17                break;
18            }
19        }
20        return nums[i];
21    }
22};