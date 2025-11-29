1class Solution {
2public:
3    bool lemonadeChange(vector<int>& bills) {
4        int five=0,ten=0;
5        int n=bills.size();
6        for(int i=0;i<n;i++)
7        {
8            if(bills[i]==5)
9            {
10                five++;
11            }
12           else if(bills[i]==10)
13            {
14                if(five)
15                {
16                    five--;
17                    ten++;
18                }
19                else{
20                    return 0;
21                }
22            }
23            else
24            {
25                if(five>0 && ten>0)
26                {
27                    five--;
28                    ten--;
29                }
30                else if(ten==0 && five>=3)
31                {
32                    five=five-3;
33                }
34                else{
35                    return 0;
36                }
37                }
38            
39        }
40        return 1;
41    }
42};