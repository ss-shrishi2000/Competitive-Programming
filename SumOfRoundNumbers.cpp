#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int y=n;
        vector<int> ans;
        int p=1;
		while (y>0)
        {
			if(y%10>0)
			{
            ans.push_back((y%10)*p);
			}
			y/= 10;
			p*=10;
		}
		cout<<ans.size()<<endl;
		for (auto it:ans) cout<<it<<" ";
		cout<<endl;
    }
}
