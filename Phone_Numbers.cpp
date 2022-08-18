#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,j=0;cin>>n;
    string s[n];
    string t;
    int pizza[n]={0},girls[n]={0},taxi[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>m>>t;
        s[j++]=t;
        for(int j=0;j<m;j++)
        {
            cin>>t;
            if((t[0]==t[1]) && (t[3]==t[1]) && (t[4]==t[3]) && (t[6]==t[4]) && (t[7]==t[6]))taxi[i]++;
            else if(t[1]<t[0] && t[3]<t[1] && t[4]<t[3] && t[6]<t[4] && t[7]<t[6])pizza[i]++;
            else girls[i]++;
        }
    }
    int ans1,ans2,ans3;
    vector<string> anstax,anspiz,ansgirl;
    ans1=*max_element(taxi,taxi+n);
    ans2=*max_element(girls,girls+n);
    ans3=*max_element(pizza,pizza+n);
    for(int i=0;i<n;i++)
    {
        if(pizza[i]==ans3)anspiz.push_back(s[i]);
        if(girls[i]==ans2)ansgirl.push_back(s[i]);
        if(taxi[i]==ans1)anstax.push_back(s[i]);
    }
    cout<<"If you want to call a taxi, you should call: ";
    for(int i=0;i<anstax.size();i++)
    {
        if(i==anstax.size()-1)cout<<anstax[i]<<"."<<endl;
         else cout<<anstax[i]<<", ";
    }

    cout<<"If you want to order a pizza, you should call: ";
    for(int i=0;i<anspiz.size();i++)
    {
        if(i==anspiz.size()-1) cout<<anspiz[i]<<"."<<endl;
        else cout<<anspiz[i]<<", ";
    }

    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i=0;i<ansgirl.size();i++)
    {
        if(i==ansgirl.size()-1)cout<<ansgirl[i]<<"."<<endl;
    else cout<<ansgirl[i]<<", ";
    }
    return 0;
}
