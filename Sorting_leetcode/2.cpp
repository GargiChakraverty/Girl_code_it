
/*
First Bad Version
https://leetcode.com/explore/interview/card/top-interview-questions-easy/96/sorting-and-searching/774/
*/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


class Solution {
public:
    int firstBadVersion(int n){
        
        long long int l=1;
        long long int u=n;
        long long int mid;
        while(l<u)
        {
            mid=(l+u)/2;
            if(isBadVersion(mid))
            {
                u=mid;
            }
            else
            {
                l=mid+1;
            }
                    
        }
        return u;
    }
        
    };
