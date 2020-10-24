#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y,n;cin>>n>>x>>y;
        int d=(y-x),p=n-1;
        while(d%p)p--;
        int l=d/p;
        for(int j=n ;j>1 && y-l>0 ;j--)y=y-l;

		for (int i=0;i<n;i++)
		{
			cout<<y<<" ";
			y+=d/p;
		}
		cout<<endl;
    }
}
