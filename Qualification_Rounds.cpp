#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,z=1;
    cin>>n>>k;
    int a[1000] , y=0;
    map<int , int> mp;
    for(int i=0;i<n;i++)
    {
     y=0;
     for(int j=0;j<k;j++)
     {
        cin>>x;
        y+=x*pow(2,j);
     }
     mp[y]++;
    }
    for(int i=0;i<64;i++)
    {
        for(int j=0;j<64;j++)
        {
            if((mp[i]>0)&&(mp[j]>0)&&((i&j)==0))
            {
            z=0;
            break;
            }
        }
    }
    if(z==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
