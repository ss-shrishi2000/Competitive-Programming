#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int c=0;
    for(int j=2;j<=sqrt(n)+1;j++)
    {
        if(n%j==0)
            c++;
        if(c>0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(isprime(n)==true)
    {
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else
    {
        cout<<3<<endl<< 3 <<" ";
        n-=3;
        for(int i=2;;i++)
        {
            if(isprime(i) && isprime(n-i))
            {
                cout<<i<< " "<< n-i <<endl;
                return 0;
            }
        }
    }
    return 0;
}
