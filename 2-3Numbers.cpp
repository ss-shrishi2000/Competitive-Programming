#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r,p,c=0;
    cin>>l>>r;
    for(int i=0;i<=31;i++)
    {
        for(int j=0;j<=31;j++)
        {
            p=pow(2,i)*pow(3,j);
            if(p>r)break;
            else if(p<l)continue;
            else c++;
        }
    }
    cout<<c;
    return 0;
}
