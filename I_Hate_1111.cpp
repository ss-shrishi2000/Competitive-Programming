#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fo(i,n) for(int i=0; i<n; i++)

//map<int, bool> dp;

void recurr(lli n)
{

   fo(d,11)
   {
    lli temp = n-d*111;

    if(temp<0)
        break;
   if(temp%11==0)
    {
       cout<<"YES\n";
       return;
    }
   }
   cout<<"NO\n";
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        recurr(n);
    }
    return 0;
}
