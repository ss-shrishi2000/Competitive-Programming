#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,z1,x2,y2,z2;
		ll res=0;
		cin>>x1>>y1>>z1;
		cin>>x2>>y2>>z2;
		res = 2*(min(z1,y2));
		ll temp = min(z1,y2);
		z1-=temp;
		y2-=temp;
		if(z2>z1+x1)
			res-=2*(z2-(z1+x1));
		cout<<res<<endl;
    }
    return 0;
}
