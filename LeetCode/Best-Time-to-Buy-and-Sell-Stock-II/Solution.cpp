1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int profit=0;
5        int stock=prices[0];
6        int n=prices.size();
7        for(int i=1;i<n;i++)
8        {
9            if(prices[i]-stock>0)
10            {
11               profit+=prices[i]-stock;
12               stock=prices[i];
13            }
14            else{
15                stock=prices[i];
16            }
17        }
18        return profit;
19    }
20};