/*
https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
Check If Two String Arrays are Equivalent
*/

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string m = "";
        string n = "";
        for (string x : word1)
        {
            m = m + x;
        }
        for (string y : word2)
        {
            n += y;
        }
        if (m.compare(n) == 0)
            return true;
        else
            return false;
    }
};

//better approach

class Solution
{
public
    boolean arrayStringsAreEqual(String[] word1, String[] word2)
    {
        int idx1 = 0, idx2 = 0, arrIdx1 = 0, arrIdx2 = 0;
        while (arrIdx1 < word1.length && arrIdx2 < word2.length)
        {
            if (word1[arrIdx1].charAt(idx1) != word2[arrIdx2].charAt(idx2))
                return false;
            idx1 = (++idx1) % word1[arrIdx1].length();
            idx2 = (++idx2) % word2[arrIdx2].length();
            if (idx1 == 0)
                arrIdx1++;
            if (idx2 == 0)
                arrIdx2++;
        }
        return arrIdx1 == word1.length && arrIdx2 == word2.length;
    }
}