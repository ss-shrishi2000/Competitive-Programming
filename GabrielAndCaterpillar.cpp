#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2;cin>>h1>>h2;
    int a,b;cin>>a>>b;
    if(h1+8*a>=h2)cout<<0;
    else if(a>b){
        int c=12*(a-b);
        int p=(h2-h1-8*a+c-1)/(12*(a-b));
        cout<<p;
    }
    else cout<<-1;
}
