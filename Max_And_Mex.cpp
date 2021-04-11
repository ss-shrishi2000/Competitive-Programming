#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    set<int> s;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       s.clear();
       int y,mx=-111111,mex=0;
       for(int i=0;i<n;i++)
       {
          cin>>y;
          s.insert(y);
          mx=max(mx,y);
       }
       while(s.count(mex)==1)mex++;

       if(mx < mex)
            cout<<s.size()+k<<endl;
       else
       {
           int l=(mex+mx+1)/2;
			if( s.count(l)==1 || k==0 )
            {
				cout<<n<<endl;
			}
			else
			{
				cout<<n+1<<endl;
			}
       }
    }
    return 0;
}
