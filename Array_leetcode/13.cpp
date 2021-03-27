/*
https://leetcode.com/problems/intersection-of-two-arrays/
349. Intersection of Two Arrays
*/

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        int a = nums1.size();
        int b = nums2.size();
        vector<int> v;
        unordered_map<int, int> m;
        for (int i = 0; i < a; i++)
        {
            m[nums1[i]]++;
        }
        for (int i = 0; i < b; i++)
        {
            if (m[nums2[i]] > 0)
            {
                v.push_back(nums2[i]);
                m[nums2[i]] = 0;
            }
        }
        return v;
    }
};