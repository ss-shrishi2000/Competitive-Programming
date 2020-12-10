#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int n,x,y,d;cin>>n>>x>>y>>d;
		int ans=inf;
		if(abs(x-y)%d==0)
        {
			ans=abs(x-y)/d;
		}
		else{
			if((y-1)%d==0)
			{
			ans=min(ans,(x-1)/d+1+(y-1)/d);
			}
			if((n-y)%d==0){
			ans=min(ans,(n-x)/d+1+(n-y)/d);
			}
		}
		if(ans==inf) ans=-1;
		cout<<ans<<endl;
	}
}
