#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    if(n==1)
    {
        for(int k=1;k<=2;k++)
        {
        cout<<1<<" "<<1<<endl<<0<<endl;
        }
        cout<<1<<" "<<1<<endl;
        cout<<-a[0]<<endl;
    }
    else
    {
        cout<<1<<" "<<1<<endl<<-a[0]<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<0<<" ";
        for(int i=1;i<n;i++)
        {
            cout<<-(n*a[i])<<" ";
        }
        cout<<endl;
        cout<<2<<" "<<n<<endl;
        for(int i=1;i<n;i++)
        {
            cout<<((n-1)*a[i])<<" ";
        }
    }
    return 0;
}
