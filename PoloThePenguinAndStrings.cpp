#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    if(k>n)cout<<"-1";
    else{
        string s;
        if(n==1 && (k==1))cout<<"a";
        else if(n==2 && (k==2))cout<<"ab";
        else{
            if(n>1 && (k==1))cout<<"-1";
        else{
            for(int i=0;i<n-k+2;i++)
            {
                if(i%2==0)cout<<"a";
                else cout<<"b";
            }
            for(int i=0;i<k-2;i++)
            {
                cout<<char('c'+i);
            }
        }
        }
    }
        return 0;
}
