/*
https://leetcode.com/problems/array-partition-i/
 Array Partition I
*/

class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int count = 1;
        int sum = 0;
        for (int x : nums)
        {
            if (count % 2 != 0)
            {
                sum = sum + x;
            }
            count++;
        }
        return sum;
    }
};