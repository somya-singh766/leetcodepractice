1
2class Solution {
3public:
4    int mySqrt(int x) {
5        int start=0, end = x , mid , ans;
6        if(x<2){
7            return x;
8        }
9        while(start<=end){
10            mid = start +(end-start)/2;
11            if(mid == x/mid){
12                return mid;
13            }
14            else if(mid<x/mid){
15                ans=mid;
16                start=mid+1;
17            }
18            else{
19                end=mid-1;
20            }
21        }
22        return ans;
23        
24    }
25};