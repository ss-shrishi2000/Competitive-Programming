#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,d=2;
	cin>>n>>k;
	vector<int> ans;
	while (d<=n && k>0)
	{
		if(k==1) d=n;
		if(n%d==0)
        {
            n/=d;
            ans.push_back(d);
            k--;
        }
		else
			d++;
	}
	int c=ans.size();
	if(k==0)
		for (int i=0;i<c;i++) cout<<ans[i]<<" ";
	else
        cout<<-1;
	return 0;
}
