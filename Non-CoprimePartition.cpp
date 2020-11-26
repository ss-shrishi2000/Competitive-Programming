#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
	if(n<=2)
	{
		cout<<"No"<<endl;
		return 0;
	}
	cout<<"Yes"<<endl<<n-2<<" ";

	for(int i=2;i<n;i++)cout<<i<<" ";

	cout<<endl;
	cout<<2<<" 1 "<<n<<endl;
}
