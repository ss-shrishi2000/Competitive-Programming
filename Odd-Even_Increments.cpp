#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        bool f=true;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        vector<int> odd;
        vector<int> even;
        for(int i=0; i<n; i++)
        {
            if(i%2)
                odd.push_back(a[i]);
            else
                even.push_back(a[i]);
        }
        int c1=0,c2=0;
        for(int i=0; i<odd.size(); i++)
        {
            if(odd[i]%2==0)c1++;
            else
                c2++;
        }
        if(c1 && c2)
            f=false;

        c1=0, c2=0;
        for(int i=0; i<even.size(); i++)
        {
            if(even[i]%2==0)c1++;
            else
                c2++;
        }
        if(c1 && c2)
            f=false;

        if(f)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
