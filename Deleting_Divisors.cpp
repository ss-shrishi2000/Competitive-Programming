#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    //sieve();
    while(t--)
    {
        int n,m;
        cin>>n;
        m=n;
        int cnt=0;
        while(n%2==0 && n>0)
        {
            n=n/2;
            cnt++;
        }
        if(m%2)
        {
            cout<<"Bob"<<endl;
            continue;
        }
        else{
            if(n>1)
                cout<<"Alice"<<endl;
            else
            {
                if(cnt%2==0)
                      cout<<"Alice"<<endl;
               else
                      cout<<"Bob"<<endl;
            }
        }
    }
}
