#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int ans=0;
    vector<int> v;
	for(int i=0; i < s.size(); i++)
    {
		for(int j = i; j<s.size(); j++)
		{
			if(s.substr(j,4)=="bear")
            {
				ans+=(s.size()-j-3);
				break;
			}
		}
	}
    cout<<ans;
    return 0;
}
