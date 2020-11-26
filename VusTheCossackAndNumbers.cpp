#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;double d;cin>>n;
    int a[n];
    long long s=0;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        a[i]=(int)d;
        if(d-a[i]==0)
        {
            mp[i]=1;       //integer
        }
        else mp[i]=0;
        s+=a[i];
    }
    if(s==0)
    {
        for(int i=0;i<n;i++)cout<<a[i]<<endl;
    }
    else{
        int i=0;
        s=abs(s);
        while(s>0 and i<n)
        {
            if(mp[i]==1)
            {
            cout<<a[i]<<endl;
            i++;
            }
            else
            {
            a[i]>0?cout<<a[i]+1 : cout<<a[i]-1;
            cout<<endl;
            s--;
            i++;
            }
        }
        for(;i<n;i++)cout<<a[i]<<endl;
    }
	return 0;
}
