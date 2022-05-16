#include<bits/stdc++.h>
using namespace std;
int calc(int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x=x/10;
    }
    return sum;
}
int main()
{
    int a,b,c;cin>>a>>b>>c;
    vector<int> v;
    for(int i=1;i<=81;i++)
    {
    long long t=b*pow(i,a)+c;
    if (calc(t)==i && t<1000000000)v.push_back(t);
    }
    cout<<v.size()<<endl;
    for(auto it=v.begin();it!=v.end();it++)cout<<(*it)<<" ";

    return 0;
}
