#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ans[n+5];
    ans[1] = "1";
    ans[2] = "11";
    ans[3] = "21";
    ans[4] = "1211";
    string p="";
    for(int i=5; i<=n; i++)
    {
        string out = ans[i-1];
        int l=0, count=1, j=0;
        while(j<out.size())
        {
            while(j+1<out.size() && out[j]==out[j+1])
            {
                j++; count++;
            }
            out+=to_string(count)+out[i];
            count=1; j++;
        }
        ans[i]=out;
    }
    cout<<ans[n];
}
