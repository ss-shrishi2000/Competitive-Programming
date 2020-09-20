#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k1,k2;cin>>n>>k1>>k2;
    long long int a[n],b[n];
    priority_queue<long long int> q;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    long long int error=0,ans;
    for(int i=0;i<n;i++)
    {
        q.push(abs(a[i]-b[i]));
    }
    int total=k1+k2;
    while(total>0)
    {
        int c=q.top();
        q.pop();
        q.push(abs(c-1));
        total--;
    }
    while(q.empty()!=1)
    {
        ans=q.top();
        error+=ans*ans;
        q.pop();
    }
    cout<<error;
}
