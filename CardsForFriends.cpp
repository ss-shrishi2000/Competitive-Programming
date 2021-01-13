#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;cin>>w>>h>>n;
        long long int ans=1;
        if(n==1 && (w%2) && (h%2) ){
            cout<<"YES"<<endl;
            continue;
        }
        else if(n>1 && (w%2) && (h%2) )
            cout<<"NO"<<endl;
        else {
            int t=0,t1=0;
            while(w%2==0)
            {
                w=w/2;
                ans=ans*2;
            }
            while(h%2==0){
                h=h/2;
                ans=ans*2;
            }
            if(ans>=n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
