
#include <iostream>
using namespace std;

int main() {
	int c;
	cin>>c;
	string s;
	int t=0;
	int g=0;
	while(c)
	{   t=0;
	    g=0;
	    cin>>s;
	    for(char x:s)
	    {
	        if(x=='1')
	        {
	           t++; 
	           continue;
	        }
	        if(t>0)
	        {
	          g++; 
	          t=0;
	        }
	    }
	    if(s[s.length()-1]=='1')
	    g++;
	    cout<<g<<endl;
	    c--;
	}
	
	return 0;
}
