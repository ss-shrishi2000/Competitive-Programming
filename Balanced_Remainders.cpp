#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%3==0)c0++;
            else if(a%3==1)c1++;
            else
                c2++;
        }
        int steps=0;
        if(c2>(n/3))
        {
            while(c2>n/3)
            {
            if(c0<n/3)
                steps+=1,c2--,c0++;
            if(c1<n/3)
                steps+=2,c2--,c1++;
            }
        }
        if(c1>n/3)
        {
            while(c1>n/3)
            {
                if(c2<n/3)
                    steps+=1,c1--,c2++;
                if(c0<n/3)
                    steps+=2,c1--,c0++;
            }
        }
        if(c0>n/3)
        {
            while(c0>n/3)
            {
                if(c2<n/3)
                    steps+=2,c0--,c2++;
                if(c1<n/3)
                    steps+=1,c0--,c1++;
            }
        }
        cout<<steps<<endl;
    }
    return 0;
}
