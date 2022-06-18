#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
		cin>>n;
		int a[200][200];
		memset(a,0,sizeof(a));
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			char x,y;
			cin>>x>>y;
			for(int j='a';j<='k';j++)
			{
				if(j!=y)
				ans+=a[x][j];
				if(j!=x)
				ans+=a[j][y];
			}
			a[x][y]++;
		}
		cout<<ans<<endl;
    }
    return 0;
}
