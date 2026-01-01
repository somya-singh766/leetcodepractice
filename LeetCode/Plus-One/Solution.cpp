1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        int i = digits.size() - 1;
5        while(i >= 0 && digits[i] == 9) digits[i--] = 0;
6        if(i < 0) digits.push_back(0), i++;
7        digits[i]++;
8        return digits;
9    }
10};