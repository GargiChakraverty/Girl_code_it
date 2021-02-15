
/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Remove Duplicates from Sorted Array
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        if(nums.size()==0||nums.size()==1)
            return nums.size();
        auto it=nums.begin();
        auto j=nums.begin()+1;
        while(j!=nums.end())
        {
          if(*it!=*j)
          {
              *(it+1)=*j;
              it++;
          }
            j++;
        }
       
        return (it-nums.begin()+1);
        
    }
};