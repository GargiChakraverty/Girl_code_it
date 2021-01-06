//Monk and Power of Time
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<int> call;
    queue<int> ideal;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        call.push(x);
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ideal.push(x);
    }
    int time=0;int temp;
    while(!call.empty())
    {
        if(call.front()==ideal.front())
        {   
            call.pop();
            ideal.pop();
            time++;
        }
        else
        {
            temp=call.front();
            call.pop();
            call.push(temp);
            time++;

        }
        
    }
 cout<<time;
 return 0;
}