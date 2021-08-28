#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)
            cout<<0<<endl;
        else if(n>=1 && n<9)
            cout<<0<<endl;
        else if(n==9)
            cout<<1<<endl;
        else
            cout<< (n+1)/10 << endl;
    }
    return 0;
}
