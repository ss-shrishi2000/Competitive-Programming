#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> s,s1;
        int j=1;
        for(int i=1;i<k;i++)
        {
            s.push_back(j);
        }
        if((n-j*(k-1))%2!=0&&(n-j*(k-1)>0)){
            cout<<"YES"<<endl;
            for(auto it=s.begin();it!=s.end();it++)cout<<*it<<" ";
            cout<<n-j*(k-1)<<endl;
        }
        else{
            int p=2;
            for(int i=1;i<k;i++)
            {
                s1.push_back(p);
            }
            if((n-p*(k-1))%2==0&&(n-p*(k-1))>0)
            {
                cout<<"YES"<<endl;
                for(auto it=s1.begin();it!=s1.end();it++)
                {
                    cout<<*it<<" ";
                }
                cout<<n-p*(k-1)<<endl;
            }
            else cout<<"NO"<<endl;
        }
        s.clear();s1.clear();
    }
}
