#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k,i;
		cin>>n>>k;
		int a[n*k];
		for(i=0;i<n*k;i++){
			cin>>a[i];
		}
		int mid=n/2+1;
		long long sum=0;
		while(k--){
			i-=mid;
			sum+=a[i];
		}
		cout<<sum<<endl;
    }
}
