#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        long long int a[n],w[k];
        for(int i=0;i<n;i++)cin>>a[i];
        long long int s1=0;
		for(int i=0;i<k;i++)
        {
			cin>>w[i];
			w[i]--;
		}
		sort(a,a+n,greater<int>());
		sort(w,w+k);
		for(int i=0;i<k;i++)
		             s1+=a[i];

		int left=0;
		int j=k-1;
		for(int i=0;i<k;i++)
		{
			if(w[i]==0)
            {
				s1+=a[left++];
			}
			else{
				j+=w[i];
				s1+=a[j];
			}
		}
		cout<<s1<<endl;
    }
    return 0;
}
