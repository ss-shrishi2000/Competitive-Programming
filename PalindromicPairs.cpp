#include<bits/stdc++.h>
using namespace std;
int main()
{
    int left[3000],right[3000];
    string s;cin>>s;
    int n=s.size(),l,r;
    for(int i=0;i<n;i++)
    {
        for(l=i,r=i;l>=0 && (r<n) && (s[l]==s[r]);l--,r++){right[l]++;left[r]++;}
        for(l=i,r=i+1; l>=0 && (r<n) && (s[l]==s[r]);l--,r++){right[l]++;left[r]++;}
    }
    long long res=0;
    for(int i=1;i<n;i++)left[i]+=left[i-1];
    for(int i=0;i<n-1;i++)res+=left[i]*right[i+1];
    cout<<res<<endl;
}
