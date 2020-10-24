#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,j=0;cin>>n>>k;
    long ans=-1;
    set<long long > s;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0 and s.count(i)==0)
        {
            s.insert(i);
            if(n/i!=i and s.count(n/i)==0)s.insert(n/i);
        }
    }
    if(s.size()<k)cout<<-1;
    else{
        for(auto it=s.begin();it!=s.end();it++)
        {
            j+=1;
            if(j==k){
                cout<<*it<<endl;
                break;
            }
        }
    }
    return 0;
}
