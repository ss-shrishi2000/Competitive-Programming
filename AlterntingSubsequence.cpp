#include<bits/stdc++.h>
using namespace std;
int check(int x)
{
    if(x>0)return 1;
    else return 0;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n;
        vector<int> v(n);
        long long s=0;
        for(int i=0;i<n;i++){cin>>x;v.push_back(x);}
        int j;
        for(int i=0;i<n;i++)
        {
            int cur=v[i];
            int j=i;
            while(j<n&&(check(v[i])==check(v[j])))
            {
                cur=max(cur,v[j]);j++;
            }
            s+=cur;
            i=j-1;
        }
        cout<<s<<endl;
    }
}
