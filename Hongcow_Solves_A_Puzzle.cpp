#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int m1=-1,m3=-1,m2=n,m4=m,ans=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='X')
            {
                m1=max(m1,i);
                m2=min(m2,i);
                m3=max(m3,j);
                m4=min(m4,j);
                ans++;
            }
        }
        if((m1-m2+1)*(m3-m4+1)!=ans)
            cout<<"NO";
        else 
            cout<<"YES";
}
