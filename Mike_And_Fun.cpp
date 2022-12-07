#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    int a[n][m], b[n]{0}, d;
    for(int i=0; i < n; i++)
    {
        d = 0;
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)d++;
            else {
                b[i]=max(b[i],d);
                d=0;
            }
        }
    }
    int x,y;
    while(q--)
    {
        cin>>x>>y;
        x=x-1;y=y-1;
        a[x][y]=1-a[x][y];
        int maxn=-1,ans=0;
        for(int i=0;i<n;i++)
		{
			ans=0;
			for(int j=0;j<m;j++)
			{
				if(a[i][j]==0)
					ans=0;
				else
				   ans++;
					maxn=max(maxn,ans);


			}
		}
		cout<<maxn<<endl;
    }
}
