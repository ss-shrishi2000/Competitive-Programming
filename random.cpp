#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int a[60][60],b[60][60];
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++) cin>>a[i][j];

	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>b[i][j];

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
        {
			if(a[i][j]>b[i][j])swap(a[i][j],b[i][j]);
		}
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)
    {
			if(a[i][j]<=a[i-1][j]||a[i][j]<=a[i][j-1])
            {
				cout<<"Impossible";return 0;
            }
			if(b[i][j]<=b[i-1][j]||b[i][j]<=b[i][j-1])
            {
				cout<<"Impossible";return 0;
			}
    }
	cout<<"Possible";
	return 0;
}
