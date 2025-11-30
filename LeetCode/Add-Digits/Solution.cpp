1class Solution {
2public:
3    int addDigits(int num) {
4        
5        while(num>9)
6        {
7            int sum=0,r;
8            while(num>0)
9            {
10                r=num%10;
11                sum=sum+r;
12                num=num/10;
13            }
14            num=sum;
15        }
16        return num;
17    }
18};