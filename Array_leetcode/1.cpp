/*Rotate array*/
/*https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i=1;i<=k;i++)
        {
            int x=nums[nums.size()-1];
            nums.pop_back();
            nums.insert(nums.begin(),x);
        }
        
    }
};