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
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];

        map<int, int> mp, check;

        for(int i = 0; i < n; i++)
            check[a[i]]++, mp[a[i]]++;

        if(check.size() == 1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        if(mp.find(1) == mp.end())
        {
            cout<<"YES"<<endl;
            continue;
        }

        sort(a, a+n);
        if(mp[1] > 0 && mp[0] > 0)
            cout<<"NO"<<endl;
        else
        {
            bool f = false;
            for(int i = 0; i < n-1; i++)
            {
                if(a[i+1] - a[i] == 1)
                {
                    f = true;
                    break;
                }
            }
            if(!f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
