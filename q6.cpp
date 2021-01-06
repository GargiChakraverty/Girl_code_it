//Can you solve it ?
// (arr[i] + i) – (arr[j] + j)
// (arr[i] – i) – (arr[j] – j)
#include<bits/stdc++.h>
using namespace std;
int main()
{   
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t,n,x;
	cin>>t;
	vector<int> v;
	vector<int> a;
	vector<int> b;
	int max1,max2,fmax;
    while(t--)
	{   cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		vector<int> a;
		vector<int> b;
		for(auto it=v.begin();it!=v.end();it++)
		{
			a.push_back(*it+(it-v.begin()));
			b.push_back(*it-(it-v.begin()));
		}
		 max1=*max_element(a.begin(),a.end())-*min_element  (a.begin(),a.end());
		 max2=*max_element(b.begin(),b.end())-*min_element  (b.begin(),b.end());
         fmax=max(max1,max2);
		 cout<<fmax<<endl;
		 v.clear();
		 a.clear();
		 b.clear();
    }

}