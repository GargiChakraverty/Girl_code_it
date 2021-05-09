#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "ABC";
    string str2 = "123";
    string str3 = "AB12C4";
    if (str3.length() != (str1 + str2).length())
        cout << "Not shuffled string";
    int i = 0, j = 0, k = 0, count = 0;
    while (k < str3.length())
    {
        if (str1[i] == str3[k])
        {
            i++;
            k++;
        }
        else if (str2[j] == str3[k])
        {
            j++;
            k++;
        }
        else
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
        cout << "string is suffled in third string";
    else
        cout << "Not shuffled string";
}