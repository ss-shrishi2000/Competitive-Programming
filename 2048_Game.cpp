#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        vector<int> b;
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<=2048)
                b.push_back(a[i]);
        }
        long long int sum=accumulate(b.begin(),b.end(),0LL);
        if(sum>=2048)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}
