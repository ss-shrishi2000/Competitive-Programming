#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ans=0,cnt=1;cin>>n;
	priority_queue<int> pq;
	for(int i=0;i<n;i++)
	{
	    int x,y;cin>>x>>y;
	    if(y!=0)
	    {
	        ans+=x;
	        cnt+=y;
	        cnt--;
	    }
	    else pq.push(x);
	}
	while(!pq.empty() && cnt!=0)
	{
	    ans+=pq.top();
	    pq.pop();
	    cnt--;
	}
	cout<<ans;
	return 0;
}
