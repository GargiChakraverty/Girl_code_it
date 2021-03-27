/*
https://leetcode.com/problems/happy-number/
202. Happy Number
*/

class Solution
{
public:
    bool isHappy(int n)
    {
        int fast = n, slow = n;
        do
        {
            slow = sumofsquaredigits(slow);
            fast = sumofsquaredigits(fast);
            fast = sumofsquaredigits(fast);
            if (fast == 1)
                return true;

        } while (fast != slow);
        if (fast == 1)
            return true;
        else
            return false;
    }
    int sumofsquaredigits(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum = sum + pow(n % 10, 2);
            n = n / 10;
        }
        return sum;
    }
};