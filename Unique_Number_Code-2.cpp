#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x;cin>>x;
        int t=9;
        bool f=true;
	    string ans;
	    if(x>45)
        {
		cout<<-1<<endl;
		f=false;
        }
        else{
	    while(x>0)
        {
		int mn = min(x,t);
		ans += char(mn + '0');
		t-=1;
		x -= mn;
	    }
        }
    if(f==false)continue;
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
    }
    return 0;
}
