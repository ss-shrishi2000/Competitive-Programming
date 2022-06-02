 #include<bits/stdc++.h>
 using namespace std;
 void solve()
 {
    int n,x;
    cin>>n;
    vector<int> b;
    multiset<int> mt;
    long long s=0;
    for(int i=0;i<n+2;i++)
    {
    cin>>x;
    b.push_back(x);
    s+=x;
    mt.insert(x);
    }
    for(auto it:b)
    {
    mt.erase(mt.find(it));
    s-=it;
    if(s%2==0 && s<=long(3e9) && mt.find(s/2)!=mt.end())
    {
        mt.erase(mt.find(s/2));
        for(auto x:mt)
                cout<<x<<" ";
        cout<<endl;
        return ;
    }
    s+=it;
    mt.insert(it);
    }
        cout<<-1<<endl;
 }
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
       solve();
     }
     return 0;
 }
