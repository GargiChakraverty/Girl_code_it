//polygon possibility
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,x,sum;
	cin>>t;
	
	while(t--)
	{
		vector<int> v;
		cin>>n;
		sum=0;
		int max=INT_MIN;
		for(int i=0;i<n;i++)
		{
          cin>>x;
		  v.push_back(x);
		  sum+=x;
		  if(x>max)
		  max=x;
		}
		
		if(max<(sum-max))
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
    }										
	
}
