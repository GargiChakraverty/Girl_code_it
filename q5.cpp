 //Max Consecutive Ones
 class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      
           int max=0;
           int count=0;
         for(int x:nums)
         {
             if(x==1)
             {
                 count++;
                 if(max<count)
                     max=count;
             }
             else
             {
                 count=0;
             }
         }
        return max;
        
    }
};