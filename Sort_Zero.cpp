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
        for(int i = 0; i < n; i++)
            cin>>a[i];

        map<int, int> mp;
        int mx_ind = -1;
        for(int i = n-1; i>0; i--)
        {
            if(a[i] < a[i-1])
            {
                mx_ind = i;
                break;
            }
        }
        if(mx_ind == -1)
            cout<<0<<endl;
        else
        {
            set<int> st;
            for(int i = n-1; i >= 0; i--)
                  mp[a[i]] = i;

            for(int i = n-1; i>= mx_ind; i--)
            {
                if(mp[a[i]] < mx_ind)break;
                st.insert(a[i]);
            }
            cout << mp.size() - st.size() << endl;
        }
    }
    return 0;
}
