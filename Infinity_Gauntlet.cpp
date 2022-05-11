#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    set<string> s;
    string p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        s.insert(p);
    }
    if(s.size()==6)cout<<0<<endl;
    else {
        cout<<6-s.size()<<endl;
        if(s.count("red")==0)cout<<"Reality"<<endl;
        if(s.count("purple")==0)cout<<"Power"<<endl;
        if(s.count("green")==0)cout<<"Time"<<endl;
        if(s.count("orange")==0)cout<<"Soul"<<endl;
        if(s.count("blue")==0)cout<<"Space"<<endl;
        if(s.count("yellow")==0)cout<<"Mind"<<endl;
    }
}
