#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int p,i,j,l=a.size();
    for(i=0;i<l-1;i++)if(a[i]!=b[i])break;
    for(j=l-1;j>0;j--)if(a[j]!=b[j-1])break;
    if(0>(i-j+1))cout<<0<<endl;
    else
        cout<<(i-j+1)<<endl;

    for(p=j;p<=i;p++)
    {
        cout<<(p+1)<<" ";
    }
}
