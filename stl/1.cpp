/*
https://www.hackerrank.com/challenges/vector-sort/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n;
    int a;
    cin>>n;
    vector<int> ob;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ob.push_back(a);
    }
    sort(ob.begin(),ob.end());
    for(int i=0;i<n;i++)
    {
        cout<<ob[i]<<" ";
        
    }
    return 0;
}
