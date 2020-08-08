#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string a,b;cin>>a>>b;
    long long cost=0,m=1e9;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i+1]!=b[i+1] && (a[i+1]==b[i]) and (b[i+1]==a[i]))
            {
                swap(a[i],a[i+1]);
                cost+=1;
            }
            else {
                if(a[i]=='0')a[i]='1';
                else a[i]='0';
                if(b[i]=='0')b[i]='1';
                else b[i]='0';
                cost+=1;
            }
        }
    }
    cout<<cost;
    return 0;
}
