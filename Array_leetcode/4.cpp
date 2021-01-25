/*
https://leetcode.com/problems/move-zeroes/
Move Zeroes
*/


class Solution {
public:
    void moveZeroes(vector<int>& nums){
        if(nums.size()==0)
            return;
        
        int x=nums.size();
        auto it=nums.begin();
        int c=1;
        while(c<=x)
        {
            if(*it==0)
            {
                nums.erase(it);
                nums.push_back(0);
                c++;
                continue;
            }
            c++;
            it++;
            
        }
        
    }
};