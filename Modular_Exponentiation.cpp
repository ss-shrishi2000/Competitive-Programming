#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<30){
    long long int a=pow(2,n);
    cout<<m%a<<endl;
    }
    else cout<<m<<endl;
}
