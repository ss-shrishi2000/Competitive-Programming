#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n], b[n], c[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            cin>>b[i];

        int diff=0,r=0;

        for(int i=0;i<n;i++)
            diff+=a[i]-b[i] , r+=abs(a[i]-b[i]) , c[i]= a[i]-b[i];

        if(diff!=0)
            cout<<-1<<endl;
        else
        {
            int sz=r/2 , u=0;
            vector<pair<int,int>> vec;

            for(int i=0;i<n;i++)
            {
                if(c[i]>0)
                {
                for(int j=i+1;j<n;j++)
                {
                    if(c[j]<0)
                    {
                        while(c[j]<0 && c[i]>0)
                        {
                        vec.push_back(make_pair(i+1 , j+1));
                        c[i]=c[i]-1;
                        c[j]=c[j]+1;
                        u++;
                        }
                    }
                }
                }
                else if(c[i]<0)
                {
                for(int j=i+1;j<n;j++)
                {
                    if(c[j]>0)
                    {
                        while(c[i]<0 && c[j]>0)
                        {
                        vec.push_back(make_pair(j+1 , i+1));
                        c[i]=c[i]+1;
                        c[j]=c[j]-1;
                        u++;
                        }
                    }
                }
                }
            }
            cout<<sz<<endl;
            for(int i=0;i<sz;i++)
                cout<<vec[i].first<<" "<< vec[i].second<<endl;
        }
    }
    return 0;
}
