#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli a[200005];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       lli n,m,x;
       cin>>n>>m;

       memset(a, 0, sizeof(a));
       for(int i=1; i<=m; i++)
       {
           cin>>x;
           a[x]++;
       }

       int low = 1, high = 2*m;
       while(low < high)
       {
           lli mid = (low + high )/2;

           lli time = 0, work = 0;
           for(int i=1; i<=n; i++)
           {
               if(a[i] <= mid)
                time += ( mid-a[i] )/2;
               else
                work += (a[i] - mid);
           }

           if(time >= work)
              high = mid;
           else
              low = mid+1;
       }
       cout<<low<<endl;
    }
    return 0;
}
