#include<bits/stdc++.h>
using namespace std;
#define N 100005

bool prime[100005];

void sieve()
{
    memset(prime, true, sizeof(prime));
    for(int i=2; i*i<=N; i++)
    {
        if(prime[i]==true)
        {
            for(int p=i*i; p<=N; p+=i)
                prime[p]=false;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve();
    int j=1;
    int arr[N];
   // memset(arr,-1,sizeof(arr));

    for(int i=2;i<=n;i++)
    {
       if(prime[i]==true)
       {
           for(int p=1;p*i<=n;p++)
           {
               arr[p*i]=j;
              // cout<<p<<" "<<arr[p]<<" "<<i<<endl;
           }
           j++;
       }
    }
    for(int i=2;i<=n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
