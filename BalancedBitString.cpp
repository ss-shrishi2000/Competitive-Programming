#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int f=0;
    string t(k,'?');
    for(int i=0;i<n;i++)
    {
        if(t[i%k]=='?')t[i%k]=s[i];
        if(s[i]!='?' and s[i]!=t[i%k])
        {
            f=1;
        }
    }
    int freq[1000];
    memset(freq,0,sizeof(freq));
    for(int i=0;i<k;i++)
    {
        freq[t[i]-'0']++;
    }
    int m=max(freq[0],freq[1]);
    f=f|(m>k/2);
    if(f!=1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
