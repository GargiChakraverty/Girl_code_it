/*
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
Two sum in sorted array.
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int l = 0;
        int u = numbers.size() - 1;
        int mid;
        vector<int> v;
        while (l <= u)
        {
            if (numbers[l] + numbers[u] == target)
            {
                v.push_back(l + 1);
                v.push_back(u + 1);
                break;
            }
            else if (numbers[l] + numbers[u] > target)
            {
                u--;
            }
            else
                l++;
        }
        return v;
    }
};