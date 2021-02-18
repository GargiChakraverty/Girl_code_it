/*
https://www.hackerrank.com/challenges/cpp-sets/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q,y,x;
    cin>>q;
    set<int> s;
    while(q--)
    {
       cin>>y>>x;
       if(y==1)
       {
          s.insert(x); 
       }
         if(y==2)
        {
            s.erase(x);
        }
        if(y==3)
        {
           auto it=s.find(x) ;
           if(it==s.end())
           cout<<"No"<<"\n";
           else
           cout<<"Yes"<<"\n";
        }
    }  
    return 0;
}



