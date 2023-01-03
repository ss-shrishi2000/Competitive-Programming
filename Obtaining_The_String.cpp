#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int> v;
    string s,t;
    cin>>s>>t;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
            m=s.find(t[i],i);
        else
            continue;
        
        if(m!=-1)
        for(int j=m;j>i;j--)
        {
            v.push_back(j-1);
            swap(s[j],s[j-1]);
        }
        else 
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++)
        cout<<v[i]+1<<" ";
}
