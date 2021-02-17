/*
https://leetcode.com/explore/featured/card/top-interview-questions-easy/102/math/745/
power of three
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        double ptr;
        double x=log10(n)/log10(3);
        double fraction=modf(x,&ptr);
        if(fraction==0.0)
            return true;
        else
            return false;
            
        
    }
};