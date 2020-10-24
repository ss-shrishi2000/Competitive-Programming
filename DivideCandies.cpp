#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int cnt=0;
	for(int i=1;i<=m;++i)
    {
    for(int j=1;j<=m;++j)
    {
        if((i*i+j*j)%m==0)cnt+=((n-i+m)/m)*((n-j+m)/m);
    }
    }
    cout<<cnt<<endl;
    return 0;
}
