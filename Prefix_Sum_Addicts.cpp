#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		long long int a[k];

		for(int i=0; i<k; i++)
            cin>>a[i];

		long long int check = ceil((double)a[0]/(n - k + 1));
		bool f = 1;

		for(int i = 1; i < k; i++)
		{
			if(a[i] - a[i-1] < check)
            {
				f = false;
                break;
			}
			else
                check = a[i]-a[i-1];
		}

		if(f)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
