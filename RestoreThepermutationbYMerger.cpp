#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[2*n+10],b[2*n+10];
        map<int,int>freq;
        int j=0;
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
            if(freq[a[i]]==0){b[j++]=a[i];freq[a[i]]++;}
        }
        for(int i=0;i<j;i++)cout<<b[i]<<" ";
        cout<<endl;
    }
}
