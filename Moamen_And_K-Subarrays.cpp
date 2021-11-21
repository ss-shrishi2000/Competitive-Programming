#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        pair<int,int> a[n];
        for(int i=0;i<n;i++)
            cin>>a[i].first, a[i].second=i;
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i-1].second+1 != a[i].second)
            {
                k--;
            }
        }
        if(k>0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
