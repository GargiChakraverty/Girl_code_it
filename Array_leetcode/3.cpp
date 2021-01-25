/*
https://leetcode.com/problems/single-number/
Single number
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i:nums)
        {
            x^=i;
        }
        return x;
        
    }
};