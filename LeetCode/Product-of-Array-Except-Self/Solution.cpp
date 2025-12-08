1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> output(n);
6        output[0] = 1;
7        for(int i=1; i<n; i++){
8            output[i] = output[i-1] * nums[i-1];
9        }
10        int right = 1;
11        for(int i=n-1; i>=0; i--){
12            output[i] *= right;
13            right *= nums[i];
14        }
15        return output;
16    }
17};
18   