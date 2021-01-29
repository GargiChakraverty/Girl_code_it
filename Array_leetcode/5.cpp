/*
contains duplicate
https://leetcode.com/problems/contains-duplicate/
*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
        if(nums.size()==0)
            return false;
        sort(nums.begin(),nums.end());
        int c=nums[0];
        for(auto x=nums.begin()+1;x!=nums.end();x++)
        {
            if(c==*x)
                return true;
            else
            {
                c=*x;
            }
            
        }
        return false;
        
    }
};