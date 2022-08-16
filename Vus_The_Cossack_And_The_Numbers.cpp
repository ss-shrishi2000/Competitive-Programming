#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double f[n+10];
    for(int i=0; i<n; i++)
        cin>>f[i];
    vector<int> inc, dec;
    for(int i=0; i<n; i++)
    {
        if((f[i]-int(f[i]))==0)
        {
            inc.push_back(int(f[i]));
            continue;
        }

        if(f[i]>0)
            inc.push_back(int(f[i]+1));
        else
            inc.push_back(int(f[i]));
    }

    for(int i=0; i<n; i++)
    {
        if((f[i]-int(f[i]))==0)
        {
            dec.push_back(int(f[i]));
            continue;
        }
        if(f[i]>0)
            dec.push_back(int(f[i]));
        else
            dec.push_back(int(f[i]-1));
    }
    int ans1 = accumulate(inc.begin(), inc.end(), 0);
    int ans2 = accumulate(dec.begin(), dec.end(), 0);

    if(ans1==0)
    {
        for(int i=0; i<n; i++)
            cout<<inc[i]<<endl;
    }
    else if(ans2==0)
    {
        for(int i=0; i<n; i++)
            cout<<dec[i]<<endl;
    }
    else
    {
       for(int i=0; i<n; i++)
       {
           if(ans1>0)
           {
               if(f[i]-inc[i]==0)
                continue;
               else
                inc[i]--, ans1--;

               if(ans1==0)
                break;
           }
       }
       if(ans1==0)
       {
           for(int i=0; i<n; i++)
            cout<<inc[i]<<endl;
       }
       else
       {
           for(int i=0; i<n; i++)
           {
               if(ans2<0)
               {
                   if(f[i]-dec[i]==0)
                      continue;
                   else
                      dec[i]++, ans2++;

                if(ans2==0)
                 break;
               }
           }
           for(int i=0; i<n; i++)
            cout<<dec[i]<<endl;
       }
    }
    return 0;
}
