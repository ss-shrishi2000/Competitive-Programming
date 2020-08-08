#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,x;cin>>n>>p>>q;
    string s;cin>>s;
    vector<string> v;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            if(i*p+j*q==n)
            {
                cout<<(i+j)<<endl;
                int k=0;
                for(int a=0;a<i;a++){
                    cout<<s.substr(k,p)<<endl;
                    k+=p;
                }
                for(int b=0;b<j;b++)
                {
                    cout<<s.substr(k,q)<<endl;
                    k+=q;
                }
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
