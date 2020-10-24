#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    bool f=true;
    int a[n],b[n],pos1=-1,pos2=-1;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    b[i]=a[i];
    }
    sort(b,b+n);
    map<int,int> mp;
    for(int i=0;i<n;i++)mp[b[i]]=i;
    for(int i=0;i<n;i++)a[i]=mp[a[i]];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i){
            pos1=i;break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=i){
            pos2=i;break;
        }
    }
    if(pos1==-1 or pos2==-1){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1;
        return 0;
    }
    else{
        reverse(a+pos1,a+pos2+1);
        for(int i=0;i<n;i++)
        {
            if(a[i]!=i){
            f=false;break;
            }
        }
        if(f==false)cout<<"no";
        else {
            cout<<"yes"<<endl;
            cout<<pos1+1<<" "<<pos2+1<<endl;
        }
    }
    return 0;
}
