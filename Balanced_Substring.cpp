#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt0=0,cnt1=0,ind=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(s.substr(i,2)=="ba" || s.substr(i,2)=="ab")
            {
                ind=i;
                break;
            }
        }
        if(ind==INT_MAX)
            cout<<-1<<" "<<-1<<endl;
        else
            cout<<ind+1<<" "<<ind+2<<endl;
    }
    return 0;
}
