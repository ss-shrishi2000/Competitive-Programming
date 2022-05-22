#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a,b,c=0,d=0;
        bool f=true;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a<c or b<d or a-c<b-d)f=false;
            c=a,d=b;
        }
        if(f==false)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
