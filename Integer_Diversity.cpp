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
        map<int,int> mp;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(mp[-a[i]] == 0 && (mp[a[i]]==1))
            {
                a[i] = -a[i];
                mp[a[i]]++;
            }
            else if(mp[a[i]] == 0)
            {
                mp[a[i]]++;
            }
        }
        for(int i=0;i<n;i++)
            s.insert(a[i]);
        cout<<s.size()<<endl;
    }
    return 0;
}
