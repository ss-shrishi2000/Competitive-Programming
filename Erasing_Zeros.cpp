#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c=0,i;
		for(i=s.find('1');i<s.find_last_of('1');i++)
		{
			if(s[i]=='0')
			{
			    c++;
			}
	    }
	    cout<<c<<endl;
	}
}
