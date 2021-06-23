#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int bef_b[n]={0} , aft_a[n]={0};

    if(s[0]=='b')
        bef_b[0]=0,bef_b[1]=1;
    else if(s[0]=='a')
        aft_a[0]=0,aft_a[1]=1;

    if(s[n-1]=='b')
        aft_a[n-1]=0;
    else
        aft_a[n-2]=1;

    for(int i=1;i<n-1;i++)
    {
      if(s[i]=='b')
        bef_b[i+1]=bef_b[i]+1;
      else
        bef_b[i+1]=bef_b[i];
    }

    for(int j=n-2;j>1;j--)
    {
      if(s[j]=='a')
        aft_a[j-1]=1+aft_a[j];
      else
        aft_a[j-1]=aft_a[j];
    }
   // for(int i=0;i<n;i++)
   //    cout<<'A'<<" "<<aft_a[i]<<endl;
   // for(int i=0;i<n;i++)
   //    cout<<'B'<<" "<<bef_b[i]<<endl;

    int ans=INT_MAX;
    for(int i=1;i<n-1;i++)
    {
        ans=min(ans,bef_b[i]+aft_a[i]);
    }
    cout<<ans;
    return 0;

}
