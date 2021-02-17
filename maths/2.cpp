/*
https://leetcode.com/explore/featured/card/top-interview-questions-easy/102/math/744/
count primes
*/


#include<cstring>
class Solution {
public:
    int countPrimes(int n) {
        if (n==0||n==1)
            return 0;
        bool v[n+1];
        memset(v,true,sizeof(v));
        long long int c=0;
        for(int i=2;i*i<=n;i++)
        {
            if(v[i]==true)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    v[j]=false;
                     
                    
                }
            }
        }
        for (int i= 2; i < n; i++)
        {
            if (v[i])
            c++;            
        }
        return c;
            
        
        
    }
};