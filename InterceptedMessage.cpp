#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int a[n],b[m],cnt=0,i=0,j=0;
    long long int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
     cin>>b[i];
    }
    while(i<n && j<m)
    {
        s1+=a[i++];
        s2+=b[j++];
        if(s1==s2)cnt++;
        else{
            while(s1!=s2 || i<n || j<m )
            {
                while(s1>s2 && j<m)
                    s2+=b[j++];

                if(s1==s2)break;

                while(s2>s1 && i<n)
                    s1+=a[i++];
            }
            if(s1==s2)
            {
                cnt++;
                s1=0;s2=0;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

