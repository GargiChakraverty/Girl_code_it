/*
https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/588/week-1-march-1st-march-7th/3657/
*/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(),candyType.end());
        int n=(candyType.size())/2;
        int count=1;
        int prev=*candyType.begin();
        for(int x:candyType)
        {
            if(x==prev)
                continue;
            else
            {
                prev=x;
                count++;
            }
                
        }
        if(count>n)
            return n;
        else
            return count;
        
    }
};