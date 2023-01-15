#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin>>n>>q;
    long long int x;
    map<int, long long int> mp;
    int last = -1;
    long long s = 0;

    for(int i = 1; i <= n; i++)
    {
        cin>>x;
        mp[i] = x;
        s += x;
    }

    while(q--)
    {
        int option, val;
        cin>>option;
        if(option == 1)
        {
            long long int t;
            cin>>val>>t;
            if(mp.find(val) != mp.end())
            {
                s += (t - mp[val]);
            }
            else
            {
                s += (t - last);
            }
            mp[val] = t;
        }
        else
        {
            cin>>val;
            mp.clear();
            last = val;
            s = n*val;
        }
        cout<<s<<endl;
    }
    return 0;
}
