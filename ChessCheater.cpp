#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,w=0,l=0,k;cin>>n>>k;
        int c=0,c1=0;
		string s;cin>>s;
		vector<int> ans;
		for(i=0;i<n;i++)if(s[i]=='W')w++;
		if(w==0){
			cout<<max(2*k-1,0)<<endl;continue;
		}
		w+=k;
		if(w>=n)
		{
			cout<<2*n-1<<endl;continue;
		}

		for(i=0;i<n;i++)
		{
			if(s[i]=='L')l++;
			else
			{
            ans.push_back(l);l=0;
			}
		}
		if(l!=0)ans.push_back(l);

		if(s[0]=='L')ans.erase(ans.begin());

		if(s[n-1]=='L')ans.erase(ans.begin()+ans.size()-1);

		sort(ans.begin(),ans.end());

		for(i=0;i<ans.size();i++)
		{
			if(c+ans[i]>k)break;
			c+=ans[i];
		}
		c1=ans.size()-i;
		cout<<2*w-1-c1<<"\n";
	}
    return 0;
}
