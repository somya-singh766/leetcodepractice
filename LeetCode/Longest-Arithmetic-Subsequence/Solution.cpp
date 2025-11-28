1class Solution {
2public:
3    int longestArithSeqLength(vector<int>& nums) {
4        
5         int n=nums.size();
6        if(n<=2)
7        return n;
8        unordered_map<int,int> m[n];
9        int d,ans=2;
10        for(int i=1;i<n;i++)
11        {
12            for(int j=i-1;j>=0;j--)
13            {
14                d=nums[i]-nums[j];
15                if(m[j].count(d))
16                {
17                    m[i][d]=max(m[i][d],1+m[j][d]);
18                    ans=max(ans,m[i][d]);
19                }
20            
21                else{
22                    if(!m[i].count(d))
23                    {
24                        m[i][d]=2;
25                    }
26                }
27            }
28            
29        }
30        return ans;
31    }
32};