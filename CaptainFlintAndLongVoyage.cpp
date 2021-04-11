#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int d= (n+3)/4;
        int d1= n-d;
        for(int i=0;i<d1;i++)cout<<9;
        for(int j=0;j<d;j++)cout<<8;
        cout<<endl;
    }
}
