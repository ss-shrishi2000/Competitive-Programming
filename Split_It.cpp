#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0 || 2*k==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
        bool f=true;
        for(int i=0;i<k;i++)
        {
            if(s[i]!=s[n-k-1])
            {
                f=false;
                break;
            }
        }
        if(f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
}
