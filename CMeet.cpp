#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        char a[20],b[20],c[20];
        char x;
        for(int i=0;i<7;i++)
        {
            cin>>a[i];
           // if(x==' ')
           //     continue;
        }
        int n;cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<17;j++)
            {
                //cin>>x;
                //if(x==' ' || (x==':'))
                //    continue;
                if(j<=8)
                    cin>>b[j];
                if(j>9)
                    cin>>c[j-9];
            }
            cout<<b<<endl;
            cout<<c<<endl;
        }
    }
}
