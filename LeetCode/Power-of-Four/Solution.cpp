1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if(n<=0)
5        return 0;
6        while(n%4==0)
7        {
8            n=n/4;
9        }
10        if(n==1)
11        return 1;
12        else
13        return 0;
14    }
15};