1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        vector<int>ans;
5        int count=0,product=1;
6        int n=nums.size();
7        for(int i=0;i<n;i++)
8        {    
9            if(nums[i]==0)
10            {
11                count++;
12            }
13            else{
14                product=product*nums[i];
15            }
16        }
17        if(count==1)
18        {
19            for(int i=0;i<n;i++)
20            {
21                if(nums[i]==0)
22                {
23                    ans.push_back(product);
24                }
25                else{
26                    ans.push_back(0);
27                }
28            }}
29           else if(count>1)
30            {
31                for(int i=0;i<n;i++)
32                {
33                    ans.push_back(0);
34                }
35            }
36          else{
37            for(int i=0;i<n;i++)
38            {
39                int r=product/nums[i];
40                ans.push_back(r);
41            }
42          }
43        return ans;
44    }
45};