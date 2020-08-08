#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int a[5]{0};
    for(int i=0;i<n;i++){
        if(s[i]=='o')a[0]++;
        if(s[i]=='z')a[3]++;
    }
    int k=a[0];
    k-=a[3];
    while(k)
    {
        cout<<1<<" ";
        k--;
    }
    while(a[3]>0)
    {
        cout<<0<<" ";
        a[3]--;
    }
    return 0;
}
