#include<bits/stdc++.h>
using namespace std;
bool prime[1000001];
int main()
{
    for(int i=0; i<=1000000; i++)prime[i] = true;
    prime[1] = false;

    for (int p=3; p*p<=1000000; p+=2)
    {
    if (prime[p] == true)
    {
    for (int i=p*2; i<=1000000; i += p)prime[i] = false;
    }
    }
    for(long long int i=4; i<=1000000;i+=2)prime[i] = false;
    int n;cin>>n;
    long long int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long long int k= sqrt(a);
        if(k*k != a)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else{
            if(prime[k]==true)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
