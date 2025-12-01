1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int profit=0;
5        int stock=prices[0];
6        for(int i=1;i<prices.size();i++)
7        {   
8            if(prices[i]-stock>=0)
9            {
10             profit=max(profit,prices[i]-stock);
11            }
12            else{
13                stock=prices[i];
14            }
15        }
16        return profit;
17    }
18};