#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        map<int, int> mp;
        bool f = false;
        for(int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            for(int j = i+2; j < n; j++)
            {
                if(mp[a[j]] > 0)
                {
                    f = true;
                    break;
                }
            }
            mp[a[i]]--;
            if(f)
                break;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
