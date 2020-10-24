#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,p;cin>>k>>p;
    long long sum=0;
    string s,t;
    for(int i=1;i<=k;i++)
    {
        s=to_string(i);
        t=s;
        reverse(s.begin(),s.end());
        t+=s;
        sum+=stoll(t);
        sum=sum%p;
    }
    cout<<sum%p;
    return 0;
}
