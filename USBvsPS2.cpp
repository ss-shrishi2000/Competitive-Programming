#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;cin>>a>>b>>c;
    int m,val;cin>>m;
    long long cnt=0;
    string s;
    vector<int> usb,ps2;
    for(int i=0;i<m;i++)
    {
        cin>>val>>s;
        if(s=="USB")
            usb.push_back(val);
        else
            ps2.push_back(val);
    }
    long long int ans=0;
    sort(usb.begin(),usb.end());
    sort(ps2.begin(),ps2.end());
    //first use a and b
    int i=0,j=0;
    while(a-- && i<usb.size())
    {
        ans+=usb[i++];
        cnt++;
    }
    while(b-- && j<ps2.size())
    {
        ans+=ps2[j++];
        cnt++;
    }
    if(i==usb.size() && j==ps2.size())
    {
    cout<<cnt<<" "<<ans<<endl;
    return 0;
    }
    else{
        if(i==usb.size())
        {
            while(c-- && j<ps2.size())
            {
                ans+=ps2[j++];
                cnt++;
            }
            cout<<cnt<<" "<<ans<<endl;
        }
        else if(j==ps2.size())
        {
            while(c-- && i<usb.size())
            {
                ans+=usb[i++];
                cnt++;
            }
            cout<<cnt<<" "<<ans<<endl;
        }
        else{
            vector<int> p;
            for(int k=i;k<usb.size();k++)p.push_back(usb[k]);
            for(int k=j;k<ps2.size();k++)p.push_back(ps2[k]);
            sort(p.begin(),p.end());
            int z=0;
            while(c-- && z<p.size())
            {
                ans+=p[z++];
                cnt++;
            }
            cout<<cnt<<" "<<ans<<endl;
        }
    }
}
