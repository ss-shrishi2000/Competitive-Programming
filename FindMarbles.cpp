#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    int a[n+1];
    bool v[n+1];
    for(int i=1; i<=n; i++)
    {
    	cin>>a[i];v[i] = false;
    }
    v[s]= true;
    if(s==t)
    {
    	cout<<"0";
    	return 0;
    }
    else
    {
    	s = a[s];
    	int l=1;
    	while(s!= t)
    	{
    		if(s==a[s] || v[s]== true)
    		{
    			cout<<-1;
    			return 0;
    		}
    		else
    		{
    			v[s]= true;
    			s = a[s];
    			l++;
    		}

    	}
    	cout<<l;
    }
}
