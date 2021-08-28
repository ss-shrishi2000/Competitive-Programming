#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n<=6)
            cout<<15<<endl;
        else if(n>6 && n<=8)
            cout<<20<<endl;
        else if(n>8 && n<=10)
            cout<<25<<endl;
        else
            cout<< ((n+1)/2) * 5 <<endl;
    }
    return 0;
}
