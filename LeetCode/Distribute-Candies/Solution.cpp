1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        int n=candyType.size();
5        int count=1;
6        sort(candyType.begin(),candyType.end());
7        for(int i=1;i<n;i++)
8        {
9            if(candyType[i]!=candyType[i-1])
10            count++;
11        }
12        int n1=n/2;
13        if(n1>=count)
14        return count;
15        else
16        return n1;
17    }
18};