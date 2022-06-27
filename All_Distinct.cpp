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
        map<int, int> mp;
        int x, repeat = 0, uniq = 0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(mp.find(x)!=mp.end())
                repeat++;
            else
            {
                mp[x]++;
                uniq++;
            }
        }
        if(repeat%2==0)
            cout<<n-repeat<<endl;
        else
            cout<<(n-1-repeat)<<endl;
    }
    return 0;
}
