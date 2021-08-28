#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
	cin>>n;
	int arr[n];
	unordered_map<int,int>unp;

	for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        arr[i]--;
        unp[arr[i]]++;
    }
	long long ans[n];
	memset(ans,0,sizeof(ans));

	if(unp.size()==n)
	{
		ans[0]=1;
	}
	if(unp[0])
	{
		ans[n-1]=1;
	}

	int l=0,r=n-1,pos;
	for(int i = n-1; i > 0; --i)
    {
        if(!ans[n-1])
            break;

        ans[i] = true;

        int nxt = n-i-1;
        if(--unp[nxt] == 0 && (arr[l]==nxt || arr[r]==nxt) && unp[nxt+1])
        {
            if(arr[l]==nxt)
                  l++;
            if(arr[r]==nxt)
                r--;
            continue;
        }
        break;
    }
	for(int i=0;i<n;++i)
	   cout<<ans[i];

	cout<<endl;
    }
    return 0;
}
