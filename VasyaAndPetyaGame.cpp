#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    //sieve of erastothenes

    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int p=i*i;p<=n;p+=i)
            {
                prime[p]=false;
            }
        }
    }

    //pushing into the set multiples of prime numbers less than or equal to n
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            s.insert(i);
            for(int j=1; pow(i,j) <=n ; j++)
                s.insert(pow(i,j));
        }
    }

    cout<<s.size()<<endl;
    for(auto it:s)
        cout<<it<<" ";
    return 0;
}


