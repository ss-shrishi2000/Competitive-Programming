#include<bits/stdc++.h>
using namespace std;

char ans[100000];

int main()
{
    int n,t;
    cin>>n>>t;
    string s2,s1;
    cin>>s1>>s2;
    int l1=n-t , l2;
    l2=l1;
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i] && l1 !=0 && l2!=0)
        {
            ans[i]=s1[i];
            l1-=1;
            l2-=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(l1!=0 && !ans[i])
        {
            ans[i]=s1[i];
            l1-=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(l2!=0 && !ans[i])
        {
            ans[i]=s2[i];
            l2-=1;
        }
    }

    if(l1==0 && l2==0)
    {
        for(int i=0;i<n;i++)
        {
            if(!ans[i])
            {
            ans[i]='a';
            while(ans[i]==s1[i] || ans[i]==s2[i])
                ans[i]++;
            }
        }
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1;
        return 0;
    }
    return 0;
}
