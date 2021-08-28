#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        set<pair<int,int>> st;
        for(int i=1;i<=m;i++)
        {
            st.insert(make_pair(0,i));
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            pair<int,int> p= *st.begin();
            st.erase(p);
            int fr=p.first;
            int sec=p.second;
            fr+=arr[i];
            cout<< p.second<<" ";
            st.insert(make_pair(fr,sec));
        }
    }
}
