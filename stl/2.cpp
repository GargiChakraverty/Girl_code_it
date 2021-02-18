/*
https://www.hackerrank.com/challenges/cpp-lower-bound/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n,q;
    cin>>n;
    vector<int> v;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    
    while(q--)
    {
       cin>>y;
       auto it=lower_bound(v.begin(),v.end(),y);
       if(*it==y)
       cout<<"Yes"<< " "<<it-v.begin()+1<<"\n";
       else {
       cout<<"No"<<" "<<it-v.begin()+1<<"\n";
       } 
    }
    


}
