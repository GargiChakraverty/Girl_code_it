#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter no of numbers";
    int n;
    cin >> n;
    vector<int> v;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int i = 0;
    int min_element = 0, max_element = 0;

    if (n % 2 == 0)
    {
        min_element = min(v[0], v[1]);
        max_element = max(v[0], v[1]);
        i = 2;
    }
    else
    {
        min_element = v[0];
        max_element = v[0];
        i = 1;
    }
    while (i < n - 1)
    {
        if (v[i] > v[i + 1])
        {
            if (max_element < v[i])
            {
                max_element = v[i];
            }
            if (min_element > v[i + 1])
            {
                min_element = v[i + 1];
            }
        }
        else
        {
            if (max_element < v[i + 1])
            {
                max_element = v[i + 1];
            }
            if (min_element > v[i])
            {
                min_element = v[i];
            }
        }
        i++;
    }

    cout << "max element" << max_element;
    cout << "min element" << min_element;

    return 0;
}