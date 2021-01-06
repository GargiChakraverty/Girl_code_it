 //Hamiltonian and Lagrangian
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main() 
{   
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,n;
	cin >> num;								 
	vector<int> a;
	vector<int> b;
	for(int i=0;i<num;i++)
	{
     cin>>n;
     a.push_back(n);
	}
	for(auto it=a.begin();it!=a.end();it++)
	{
		int c=*max_element(it,a.end());
		if(c==*it)
		b.push_back(*it);

	}
	for(auto it=b.begin();it!=b.end();it++)
	{
		cout<<*it<<" ";
	}

}


	
	
		



