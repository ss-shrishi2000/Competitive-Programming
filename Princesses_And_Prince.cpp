#include<bits/stdc++.h>
using namespace std;
# define maxn 200005
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n;
        int ind=-1;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            bool flag=false;
            for(int j=0;j<k;j++)
            {
                cin>>x;
                if(flag==false && mp[x]==0)
                {
                    mp[x]=1;
                    flag=true;
                }
            }
            if(flag==false && ind==-1)
            {
                ind=i+1;
            }
        }
        int p;
        for(int i=1;i<=n;i++)
        {
        if(mp[i]==0)
        {
            p=i;
            break;
        }
        }
        if(ind==-1)
           cout<<"OPTIMAL"<<endl;
        else
        {
            cout<<"IMPROVE"<<endl<< ind<< " " << p<<endl;
        }
    }
    return 0;
}
