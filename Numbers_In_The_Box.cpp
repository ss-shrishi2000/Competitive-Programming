#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        int mat;
        long long int ans=0;
        int a=0,b=0,m1=INT_MAX;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
            cin>>mat;
            if(mat<0)a++;
			ans+= abs(mat);
			m1= min(abs(mat),m1);
			if(mat==0)b++;
        }
        if(a%2==0 || b!=0)cout<<ans<<endl;
        else{
            m1*=2;
            ans-=m1;
            cout<<ans<<endl;
        }
    }
    return 0;
}
