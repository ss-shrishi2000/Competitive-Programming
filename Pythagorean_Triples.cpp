#include<bits/stdc++.h>
using namespace std;
bool prime[100005];

void sieve()
{
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i<=100000; i++)
    {
        if(prime[i]==true)
        {
            for(int p=i*i; p<=100000; p+=i)
            {
                prime[p]=false;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    sieve();
    //count of all odd primes is the answer
    while(t--)
    {
        int n;cin>>n;
        int cnt=0;
        for(int i=3; i<=n; i+=2)
        {
            if(prime[i]==true || i%2 )
            {
                long long int x = i*i;
                if( (x+1)/2 > n )
                {
                    break;
                }
                else
                    cnt++;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}
