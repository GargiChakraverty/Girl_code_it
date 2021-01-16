/*
First Unique Character in string
https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/
*/
class Solution {
public:
    int firstUniqChar(string s) 
    {
        map<char,int> v;
        char u='\0';
        for(char x:s)
        {
            v[x]=0;
        }
        for(char x:s)
        {
            v[x]++;
        }
        
        for(char x:s)
        {
            if(v[x]==1)
            {    
                return s.find(x);
                
            }
            
        }
        return -1;
    }
};