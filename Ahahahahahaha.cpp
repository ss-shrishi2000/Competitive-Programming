#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
     int n;cin>>n;
     int a[n];
     for(int i=1;i<=n;i++)cin>>a[i];
     vector<int> ans;
		for(int i=1;i<=n;i+=2)
		{
			if((a[i]+a[i+1])%2==0)
			{
				ans.push_back(a[i]);
				ans.push_back(a[i+1]);
			}
			else
				ans.push_back(0);
		}
		cout<<ans.size()<<endl;
		for(auto v:ans)cout<<v<<" ";
		cout<<endl;
    }
}
