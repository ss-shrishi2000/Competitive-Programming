#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int a,b;cin>>a>>b;
        if(abs(a-b)==1)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
