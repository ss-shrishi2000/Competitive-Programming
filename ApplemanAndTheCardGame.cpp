#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;cin>>n>>k;
    string s;cin>>s;
    long long int freq[26];
    memset(freq,0,sizeof(freq));
    for(int i=0;i<n;i++)
    {
        freq[s[i]-'A']++;
    }
    sort(freq,freq+26,greater<int>());
    long long int ans=0;
    int i=0;
    while(k>0 and i<26)
    {
        if(k==0)break;
        if(freq[i]>=k)
        {
            ans+=k*k;
            k=0;i++;
            break;
        }
        else{
            ans+=freq[i]*freq[i];
            k-=freq[i];i++;
        }
        if(k==0)break;
    }
    cout<<ans;
}
