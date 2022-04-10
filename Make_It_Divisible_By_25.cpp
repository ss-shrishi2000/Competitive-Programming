#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        int ans=INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(((s[i]-'0')*10 + (s[j]-'0'))%25==0)
                {
                    ans = min(ans,n-i-2);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
