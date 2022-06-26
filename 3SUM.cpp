#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int> mp;
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]%10]++;
        }
        bool f = false;
        for(int i=0; i<=9; i++)
        {
            if(mp[i]>0)
            {
                mp[i]--;
                for(int j = 0; j<=9; j++)
                    {
                        if(mp[j]>0)
                        {
                            mp[j]--;
                           for(int k = 0; k<=9; k++)
                           {
                               if(mp[k]>0)
                               {
                                   if((i+j+k)%10==3)
                                   {
                                       f=true; break;
                                   }
                               }
                           }
                        mp[j]++;
                        }
                        if(f==true)
                        {
                            break;
                        }
                    }
                    if(f==true)
                    {
                        break;
                    }
                    mp[i]++;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
