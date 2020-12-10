#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,odd,even,x;cin>>n;
    if(n%2==0)
    {
        x=n/2;
        odd=x*x;
        even=x*x+x;
        cout<<even-odd;
    }
    else{
        x=(n+1)/2;
        odd=x*x;
        even=(n/2)*(n/2)+n/2;
        cout<<even-odd;
    }
    return 0;
}
