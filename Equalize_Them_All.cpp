#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
const int N=200005;
int main()
{
    int n;
    cin>>n;
    long long int a[n],m=0,pos=0;
    map<long long int,long long int> mp;
    set<int> p;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    p.insert(a[i]);
    mp[a[i]]++;
    if(m<mp[a[i]])
    {
        m=mp[a[i]];pos=i;
    }
    }
    if(p.size()==1)
    {
        cout<<0;
        return 0;
    }
    cout<<n-m<<endl;
    for(int i=pos-1;i>=0;i--)
    {
        if(a[i]<a[pos])
        {
           cout<<1<<" "<<i+1<<" "<<i+2<<endl;
        }
        else if(a[i]>a[pos])
        {
            cout<<2<<" "<<i+1<<" "<<i+2<<endl;
        }
    }
    for(int i=pos+1;i<n;i++)
    {
        if(a[i]<a[pos])
        {
           cout<<1<<" "<<i+1<<" "<<i<<endl;
        }
        else if(a[i]>a[pos])
        {
            cout<<2<<" "<<i+1<<" "<<i<<endl;
        }
    }
    return 0;
}
