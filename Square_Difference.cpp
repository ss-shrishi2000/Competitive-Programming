#include<bits/stdc++.h>
#define lli long long int
using namespace std;
bool isprime(lli x)
{
    if(x==1)
        return false;

    for(lli i = 2; i*i <= x; i++)
    {
        if(x%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a, b, s, d;
        cin>>a>>b;
        s = a + b;
        d = a - b;
        if(isprime(s) && d == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
