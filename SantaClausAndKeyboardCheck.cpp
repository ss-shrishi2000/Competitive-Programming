#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;cin>>a>>b;
    int l=a.size();
    vector<pair<char,char>> v;
    vector<char> c(5000,'0');
    bool check;
    for(int i=0; i<l; i++)
    {
    check=a[i]!=b[i] && c[a[i]]=='0';
    if(c[a[i]]=='0')
        c[a[i]]=b[i];
    if(c[b[i]]=='0')
        c[b[i]]=a[i];
    if(c[a[i]]==b[i] && c[b[i]]==a[i])
    {
        if(check)
        v.push_back({a[i],b[i]});
    }
    else{
        cout << -1;return 0;
        }
    }
    cout<<v.size()<<endl;
    for(auto it:v) cout<<it.first<<' '<<it.second<<endl;
	return 0;
}
