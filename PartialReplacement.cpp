#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,ans=0;cin>>n>>k;
        string s;
        cin>>s;
        int i=0,j=n-1;
        while(s[i]!='*')
            i++;
        while(s[j]!='*')
            j--;
        if(i==j)
        {
            cout<<1<<endl;
            continue;
        }
        for(int p=i;p<j;p+=k)
        {
            while(s[p]!='*')p--;
            ans++;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
