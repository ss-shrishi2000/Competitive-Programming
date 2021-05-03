#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int> odd,even;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    long long int s1=0,s2=0;
    s1=accumulate(odd.begin(),odd.end(),0LL);
    if(odd.size()%2!=0)
    {
      s1-=odd[0];
    }
    s2=accumulate(even.begin(),even.end(),0LL);
    cout<<s1+s2;
    return 0;
}
