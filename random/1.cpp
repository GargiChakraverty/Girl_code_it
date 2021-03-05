#include <iostream>
#include<vector>
using namespace std;

int main() {
	int x,h,n;
	cin>>n;
	cin>>h;
	cin>>x;

	int a;
	int count=0;
	vector<int> v;
	for(int i=0;i<n;i++)
	{  cin>>a;
	    v.push_back(a);
	}
	for(int t:v)
	{
	    if(t+x>=h)
	    {
	        count=1;
	        break;
	    }
	    
	}
	if(count==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
