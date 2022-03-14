#include<bits/stdc++.h>
using namespace std;
int calc(int x,int y)
{
    if(x!=0)
        return calc(x-1,y+1)+calc(x-1,y-1);
   else if(y==0)
       return 1;
   else 
       return 0;
}
int main()
{
    string a,b;cin>>a>>b;
    int c1=0,c2=0,c3=0;
    int l=a.size();
    for(int i=0;i<l;i++)
    {
        if(a[i]=='+')c1++;
        if(a[i]=='-')c1--;
        if(b[i]=='+')c2++;
        if(b[i]=='-')c2--;
        if(b[i]=='?')c3++;
    }
    long long p=pow(2,c3);
    cout<<fixed<<setprecision(10)<<(double)calc(c3,c1-c2)/p;
}
