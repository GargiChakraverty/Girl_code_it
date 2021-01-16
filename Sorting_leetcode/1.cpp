/*https://leetcode.com/explore/interview/card/top-interview-questions-easy/96/sorting-and-searching/587/
Merge sorted array.
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int count=0;
        while(count<n)
        {
            nums1.pop_back();
            count++;
        }
        auto it2=nums2.begin();
        while(it2!=nums2.end())
        {   
            nums1.push_back(nums2[nums2.size()-1]);
            nums2.pop_back();
        }
        sort(nums1.begin(),nums1.end());
        }
};