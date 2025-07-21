class Solution {
public:
    bool isPalindrome(int x) {
      
        if(x<0){
            return 0;
        }
          int ans = 0 , N=x, rem;
        while(N!=0){
            rem = N%10;
            N/=10;
            if(ans>INT_MAX/10){
                return 0;
            }
            ans=ans*10 + rem;
        }
        if( ans==x){
            return 1;
        }
        else
        return 0;
    }
};
