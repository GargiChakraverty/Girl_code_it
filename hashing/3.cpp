/*
https://leetcode.com/problems/number-of-good-pairs/
no of good pairs.
*/

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {

        unordered_map<int, int> m;
        int count = 0;
        for (int x : nums)
        {
            m[x]++;
        }
        for (int x : nums)
        {
            if (m[x] > 1)
            {
                count += m[x] - 1;
                m[x] = m[x] - 1;
            }
        }
        return count;
    }
};