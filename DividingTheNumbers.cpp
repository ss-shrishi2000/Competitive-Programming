#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    int n;
    cin>>n;
    long long s=(1+n)*1LL*n/2;
    for(int i=n; i>0; i--)
    {
    if(2*i <= s)s-=2*i,v.push_back(i);
    }
    cout<<s<<endl<<v.size();
    for(auto it:v)
    {
    	cout<<" "<<it;
	}
    return 0;
}
