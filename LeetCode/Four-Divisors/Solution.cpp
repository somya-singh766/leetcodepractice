1class Solution {
2public:
3    int sumFourDivisors(vector<int>& nums) {
4        int ans = 0;
5
6        for (int n : nums) {
7            int cnt = 0;
8            int sum = 0;
9
10            for (int i = 2; i * i <= n; i++) {
11                if (n % i == 0) {
12                    int j = n / i;
13
14                   
15                    cnt++;
16                    sum += i;
17
18                    if (i != j) {
19                        cnt++;
20                        sum += j;
21                    }
22
23                    
24                    if (cnt > 2) break;
25                }
26            }
27
28            
29            if (cnt == 2) {
30                ans += (1 + n + sum);
31            }
32        }
33
34        return ans;
35    }
36};