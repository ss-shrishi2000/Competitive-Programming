#include<bits/stdc++.h>
using namespace std;
void ans(int n,int x)
{
    if(n<=x)
    cout<<n;
    else
    {
        ans(n-x,x-1);
        cout<<x;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n;
    cin>>n;
       if(n>45)
       cout<<"-1"<<endl;
       else
       {
           ans(n,9);
       }
       cout<<endl;
    }

}
