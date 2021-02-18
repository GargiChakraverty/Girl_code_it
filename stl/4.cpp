/*
https://www.hackerrank.com/challenges/cpp-maps/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    int y,ch;
    string x;
    map<string,int> m;
    while(q--)
    {
        
        cin>>ch;
        if(ch==1)
        {
           cin>>x;
           cin>>y;
           m[x]+=y;
        }
        if(ch==2)
        {  cin>>x;
           m.erase(x); 
        }
        if(ch==3)
        {
            cin>>x;
            cout<<m[x]<<"\n";
        }
    }
    return 0;
}



