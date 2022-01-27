#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;cin>>k;
    int a[12];
    long long s=0;
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+12,greater<int>());
    if(k==0)
        cout<<0;
    else{
            if(k>s)
                cout<<-1;
    else
    {
        int i=0;
        while(k>0)
        {
            k-=a[i];
            i++;
        }
        cout<<i;
    }
    }
}
