/*
https://leetcode.com/problems/search-insert-position/

Search Insert Position
*/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int l = 0;
        int u = nums.size() - 1;
        int mid;
        while (l <= u)
        {
            mid = (l + u) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                u = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
};