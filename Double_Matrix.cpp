#include<bits/stdc++.h>
using namespace std;
#define f1(i,n) for(int i=1;i<=n;i++)
#define f2(i,j,n) for(int i=j+1;i<n;i++)
int main()
{
    int n,m;cin>>n>>m;
    int a[60][60]={0},b[60][60]={0};
	f1(i,n)f1(j,m)cin>>a[i][j];

	f1(i,n)f1(j,m)cin>>b[i][j];

      f1(i,n){
      f1(j,m){
			if(a[i][j]>b[i][j])swap(a[i][j],b[i][j]);
		}
      }
	f1(i,n)
	{
	f1(j,m)
    {
			if(a[i][j]<=a[i-1][j] || a[i][j]<=a[i][j-1]){cout<<"Impossible";return 0;}
			if(b[i][j]<=b[i-1][j] || b[i][j]<=b[i][j-1]){cout<<"Impossible";return 0;}
    }
	}
	cout<<"Possible";
	return 0;
}
