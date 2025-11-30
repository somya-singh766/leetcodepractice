1class Solution {
2public:
3    bool isPalindrome(int x) {
4      
5        if(x<0){
6            return 0;
7        }
8          int ans = 0 , N=x, rem;
9        while(N!=0){
10            rem = N%10;
11            N/=10;
12            if(ans>INT_MAX/10){
13                return 0;
14            }
15            ans=ans*10 + rem;
16        }
17        if( ans==x){
18            return 1;
19        }
20        else
21        return 0;
22    }
23};