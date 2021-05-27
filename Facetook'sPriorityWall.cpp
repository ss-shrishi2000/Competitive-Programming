#include<bits/stdc++.h>
using namespace std;
int main()
{
    string myname;
    cin>>myname;
    string nm1,action,x,nm2;
    map<string,int> hmp;
    vector< pair <int , string> > vec;
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>nm1>>action;
        int cst=0;
        if(action=="posted")
            cst=15 , cin>>x;
        else if(action=="commented")
            cst=10 , cin>>x;
        else
            cst=5;

        cin>>nm2>>x;
        nm2=nm2.substr(0,nm2.size()-2);

        if(nm1==myname)
                hmp[nm2]+=cst;
        else if(nm2==myname)
            hmp[nm1]+=cst;
        else
            hmp[nm1],hmp[nm2];
    }

    for(auto it:hmp)
    {
        vec.push_back(make_pair(-(it.second) , it.first));
    }
    sort(vec.begin(),vec.end());
    //vector<string> ans;
    for(auto it:vec)
    {
        if(it.second==myname)
            continue;
        else
            cout<<it.second<<endl;
    }
    return 0;
}
