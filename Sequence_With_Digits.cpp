#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a1,k,ans;
        cin>>a1>>k;
        k-=1;
        ans=a1;
        while(k--)
        {
            string s = to_string(a1);
            int minx=100,maxx=-1;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]-'0' < minx)
                    minx = s[i]-'0';
                if(s[i]-'0' > maxx)
                    maxx = s[i]-'0';
            }

            if(minx==0 or maxx==0)
                break;
            else
                ans = a1 + (minx*maxx), a1=ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}
