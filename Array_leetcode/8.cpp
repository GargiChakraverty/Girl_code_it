/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/solution/
*/
class Solution {
public:
    int maxProfit(vector<int>& prices){
        int max=INT_MIN;
        int min=INT_MAX;
        int profit=0;
        for(int x:prices)
        {
            
            if(x<min)
                min=x;
            if(profit<x-min)
                profit=(x-min);
        }
        return profit;
    }
};