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
        pair<int,int> p[n];

        for(int i=0;i<n;i++)
            cin>>p[i].first>>p[i].second;

        sort(p,p+n);
        string ans="";
        int absx = p[0].first;
        int absy = p[0].second;
        if(absx<0 || absy<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        while(absx--)
            ans+='R';
        while(absy--)
            ans+='U';
        bool f=true;
        for(int i=1;i<n;i++)
        {
            if(p[i].first-p[i-1].first<0 || (p[i].second - p[i-1].second <0))
            {
                f=false;
                break;
            }
            else
            {
                 absx = p[i].first-p[i-1].first;
                 absy = p[i].second-p[i-1].second;
                 while(absx>0)
                    ans+='R' , absx--;
                 while(absy>0)
                    ans+='U' , absy--;
            }
        }
        if(f==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl<<ans<<endl;
    }
    return 0;
}
