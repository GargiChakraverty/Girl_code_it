//Neutralisation of charges
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int num;
 cin>>num;
 string n;
 cin>>n;
 stack<char> c;
 for(auto i:n)
 {   
     if(c.empty())
     c.push(i);
     else if(c.top()==i)
     c.pop();
     else
     c.push(i);
 }
cout<<c.size()<<endl;
string neutrilize="";
while(!c.empty())
{
char ch = c.top();
neutrilize += ch;
c.pop();
}
for(int i = neutrilize.size() - 1; i >= 0; i--)
cout<<neutrilize[i];
return 0;
}
