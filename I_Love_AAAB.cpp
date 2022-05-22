#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s; cin>>s;
        bool flag=(s.back()=='B');
		int sum=0;
		for (auto it:s)
        {
			if (it=='A')
			sum++;
			else
			sum--;
			if (sum<0)
			flag=false;
		}
		if (flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    }
    return 0;
}
