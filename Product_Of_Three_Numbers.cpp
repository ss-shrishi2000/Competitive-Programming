#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[3]{0},j=0;
        for(int i=2;i*i<=n&&(j<2);i++)
        {
            if(n%i==0){a[j++]=i;
            n/=i;
            }
        }
         if(j!=2)
             cout<<"NO"<<endl;
         else if(a[1]!=n)
             cout<<"YES"<<endl<<a[0]<<" "<<a[1]<<" "<<n<<endl;
         else 
             cout<<"NO"<<endl;
    }
}
