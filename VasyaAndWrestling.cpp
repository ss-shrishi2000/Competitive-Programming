#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v1,v2;
    int x;
    long long int s1=0,s2=0;
    string a="",b="";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
        {
        v1.push_back(x);
        s1+=x;
        }
        else{
        v2.push_back(abs(x));
        s2+=abs(x);
        }
    }
    //cout<<s1<<" "<<s2<<endl;
    if(s1>s2)cout<<"first";
    else if(s2>s1)cout<<"second";
    else if(v1>v2 || (v1==v2 and x>0))cout<<"first";
    else cout<<"second";
    return 0;
}
