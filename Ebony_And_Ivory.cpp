#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i*a<=c;i++)
     for(int j=0;j*b<=c;j++)
        if(a*i+j*b==c)
        {
            cout<<"Yes";
            return 0;
        }
     cout<<"No";
     return 0;
}
