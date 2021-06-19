#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void lcs(string s1, string s2, int n, int m, int (&t)[1001][1001])
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
                t[i][j] = 0;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                t[i][j] = 1 + t[i - 1][j - 1];
            else
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
}
void print(string s1, string s2, int t[1001][1001], int n, int m)
{
    int i = n, j = m;
    string s;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            s.push_back(s1[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (t[i - 1][j] >= t[i][j - 1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    reverse(s.begin(), s.end());
    cout << "longest common substring" << s;
}
int main()
{
    string s1 = "acbcf";
    string s2 = "abcdaf";
    int t[1001][1001];
    lcs(s1, s2, s1.size(), s2.size(), t);
    print(s1, s2, t, s1.size(), s2.size());
}