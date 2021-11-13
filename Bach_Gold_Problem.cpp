#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    if(n%2==0){
        int x=n/2;
        cout<<x<<endl;
        for(int i=0;i<x;i++)cout<<2<<" ";
    }
    else{
        int p=n/2;
        cout<<p<<endl;
        for(int i=0;i<p-1;i++)cout<<2<<" ";
        cout<<3;
    }
}
