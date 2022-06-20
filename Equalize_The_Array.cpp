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
        set<int> st;
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
         long long int r = INT_MAX;

         for(auto it = mp.begin(); it!=mp.end(); it++)
            st.insert(it->second);

         for(auto it=st.begin(); it!=st.end(); it++)
         {
             long long int c = 0;
             for(auto i = mp.begin(); i!=mp.end(); i++)
             {
                 int f = i->second;
                 if(f<(*it))
                    c+=f;
                 else
                    c+=(f-(*it));
             }
             r = min(r, c);
         }
         cout<<r<<endl;
    }
    return 0;
}
