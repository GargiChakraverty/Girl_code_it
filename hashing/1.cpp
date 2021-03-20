/*
https://practice.geeksforgeeks.org/problems/convert-an-array-to-reduced-form1101/1
Convert an array to reduced form
*/

class Solution
{
public:
    // Converts arr[0..n-1] to reduced form.
    void convert(int arr[], int n)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(arr[i]);
        }
        sort(v.begin(), v.end());
        int count = 0;
        unordered_map<int, int> m;
        for (int x : v)
        {
            m[x] = count;
            count++;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = m[arr[i]];
        }
    }
};