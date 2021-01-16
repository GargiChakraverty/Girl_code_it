/*Valid Anagram
https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/882/
*/
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
      map<char,int> v;
        if(s.length()!=t.length())
            return false;
        for(char x:s)
        {
            v[x]++;
        }
        for(char x:t)
        {
            if(v[x]==0)
                return false;
            else
                v[x]--;
        }
        for(char x:s)
        {
            if(v[x]!=0)
                return false;
        }
        return true;
    }
};
