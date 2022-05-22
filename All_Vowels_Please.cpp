#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k; cin>>k;
    string s;
    if(k<25)
    {
        cout<<-1;
        return 0;
    }
    int f1 = -1, f2 = -1;
    for(int i=2; i*i<=k; i++)
    {
        if(k%i==0)
        {
            int x = k/i;
            if(i>=5 && x>=5)
            {
                f1 = i, f2 = x;
                break;
            }
        }
    }
    if(f1==-1)
    {
        cout<<-1;
        return 0;
    }
    else if(k%25==0)
    {
        string ans="";
        int r = k/25;
        while(r--)
            ans+="aeioueiouaiouaeouaeiuaeio";
        cout<<ans;
    }
    else
    {
       string p = "aeiou";
        string ans = "";
        int r = k/5;
        int rem = k%5;
        while(r--)
            ans+=p;
        for(int j=0; j<rem; j++)
            ans+=p[j];
        cout<<ans<<endl;
        //cout<<ans.size()<<endl;
    }
    return 0;
}
