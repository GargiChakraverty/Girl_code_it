

/*
https://leetcode.com/problems/intersection-of-two-arrays-ii/
Intersection of Two Arrays II
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
        if(nums1.size()==0&&nums2.size()==0)
            return nums1;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> result;
        auto it1=nums1.begin();
        auto it2=nums2.begin();
        while(it1!=nums1.end()&&it2!=nums2.end())
        {
            if(*it1==*it2)
            {  result.push_back(*it1);
               it1++;
               it2++;
            }
            else if(*it1>*it2)
            {
                it2++;
            }
            else
            {
                it1++;
            }
           
        }
        return result;
        
        
    }
};