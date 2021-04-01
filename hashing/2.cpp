/*
jewels and stones
https://leetcode.com/problems/jewels-and-stones/
*/
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_map<char, int> m;
        int count = 0;
        for (char x : stones)
        {
            m[x]++;
        }
        for (char x : jewels)
        {
            if (m[x] > 0)
                count += m[x];
        }
        return count;
    }
};