#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n+1],cnt[3]={0};
    int t,x;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
	while(q--)
    {
		cin>>t>>x;
		if(t==1)
        {
			cnt[a[x]]--;
			a[x]=1-a[x];
			cnt[a[x]]++;
		}
		else{
			if(cnt[1]>=x)
                cout<<1<<endl;
            else
                cout<<0<<endl;
		}
	}
    return 0;
}
