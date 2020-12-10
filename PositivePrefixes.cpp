#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        if(n==k)
        {
            for(int i=1;i<=n;i++)cout<<i<<" ";
            cout<<endl;
        }
        else{
         int a[n+1];
         long long int sum=0,cnt=0,diff;
           if(n%2==0)
           {
               for(int i=1;i<=n;i++)
               {
                   if(i%2==0)
                    a[i]=i,cnt++;
                   else
                   a[i]=(-1)*i;
               }
           }
           else
          {
              for(int i=1;i<=n;i++)
               {
                   if(i%2==0)
                    a[i]=(-1)*i;
                   else
                   a[i]=i,cnt++;
               }
           }

           for(int j=1;j<=n;j++)
           {
               sum+=a[j];
               if(sum>0)
               {
                   if(cnt<k)
                   {
                       diff=k-cnt;
                       for(int w=n;w>=1;w--)
                       {
                           if(a[w]<0)
                           {
                               a[w]=a[w]*(-1);
                               cnt+=1;
                               if(cnt==k)break;
                           }
                       }
                   }
                    else if(cnt>k)
                    {
                       diff=cnt-k;
                       for(int w=n;w>=1;w--)
                       {
                           if(a[w]>0)
                           {
                             a[w]=a[w]*(-1);
                             cnt-=1;
                            if(cnt==k)break;
                           }
                       }
                   }
               }
           }
           for(int i=1;i<=n;i++)cout<<a[i]<<" ";
           cout<<endl;
        }
    }
    return 0;
}
