1class Solution {
2public:
3    string toHex(int num) {
4         if (num == 0) return "0";
5
6        unsigned int n = num;  
7        string ans = "";
8        string hex = "0123456789abcdef";
9
10        while (n > 0) {
11            ans += hex[n % 16];
12            n /= 16;
13        }
14
15        reverse(ans.begin(), ans.end());
16        return ans;
17    }
18};