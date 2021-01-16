/*
Reverse string
https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/

*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size();
        for(int i=0;i<s.size()/2;i++)
        {
            char temp=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=temp;
            
        }
        for(char x:s)
        {
            cout<<x;
        }
    }
};