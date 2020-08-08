#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,d=0,p;cin>>n;p=n;
        vector<int> v;
        int a[10]{0};
        while(p!=0){d++;p=p/10;}
        for(int i=0;i<d;i++){
        a[i]=n%10;
        n=n/10;
        }
        for(int i=0;i<d;i++)
        {
            if(a[i]!=0)v.push_back(a[i]*pow(10,i));
        }
        cout<<v.size()<<endl;
        for(auto it=v.begin();it!=v.end();it++)cout<<*it<<" ";
        cout<<endl;
    }
}
