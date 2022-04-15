#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,n0;
        cin>>n0>>n1>>n2;
        string ans="";
        if(n1==0)
        {
            if(n2!=0)
            {
                ans=string(n2+1,'1');
                cout<<ans<<endl;
            }
            else if(n0!=0)
            {
                ans=string(n0+1,'0');
                cout<<ans<<endl;
            }
            continue;
        }
        for(int i=0;i<=n1;i++)
        {
            ans+=(i%2!=0)?"0":"1";
        }
        ans.insert(1,string(n0,'0'));
        ans.insert(0,string(n2,'1'));
        cout<<ans<<endl;
    }
}
