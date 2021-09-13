#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int l,r;
        for(int i=0;i<q;i++)
        {
            cin>>l>>r;
            l--,r--;
			if(l==r)
            {
				cout<<"NO"<<endl;
				continue;
			}
			int l1=0,r1=n-1;
			while(s[l1]!=s[l])
			      l1++;
			while(s[r1]!=s[r])
			         r1--;
			if(l1==l && r1==r)
			    cout<<"NO"<<endl;
			else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
