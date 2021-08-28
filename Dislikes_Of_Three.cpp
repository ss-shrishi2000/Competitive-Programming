#include<bits/stdc++.h>
using namespace std;
int dp[200000];
int main()
{
    int t;
    cin>>t;
    int i=1,j=1;
    while(i<=5000)
    {
        if(i%3==0)
            i++;
        else
        {
            string st=to_string(i);
            int l=st.size();
            if(st[l-1]=='3')
                i++;
            else
                dp[j++]=i , i++;
        }
    }

    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}
