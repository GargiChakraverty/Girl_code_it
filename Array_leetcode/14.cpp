/*
https://leetcode.com/problems/find-common-characters/submissions/
Find common characters.
*/

class Solution
{
public:
    vector<string> commonChars(vector<string> &A)
    {
        vector<string> v;
        vector<int> f(26, INT_MAX);
        for (auto s : A)
        {
            vector<int> temp(26, 0);
            for (auto c : s)
            {
                temp[c - 'a']++;
            }
            for (int i = 0; i < 26; i++)
                f[i] = min(temp[i], f[i]);
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < f[i]; j++)
            {
                v.push_back(string(1, i + 'a'));
            }
        }
        return v;
    }
};