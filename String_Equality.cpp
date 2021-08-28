#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,k;
        cin>>l>>k;
        string a,b;
        cin>>a>>b;
        bool f=false;
        map<int , int> mp1 , mp2;
        for(int i=0;i<l;i++)
        {
            mp1[a[i]-'a']++;
            mp2[b[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if( mp1[i]<mp2[i] || ((mp1[i]-=mp2[i])%k) )
                    f=true;

            mp1[i+1] += mp1[i];
        }
        if(f==true)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
