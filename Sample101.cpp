#include <bits/stdc++.h>
using namespace std;

bool prime[10015];
set<int> s;

bool checkdig(int x)
{
    int y=x;
    while(y!=0)
    {
        int r=y%10;
        if(r==2 || r==3 || r==5 || r==7)
        {
        y=y/10;
        continue;
        }
        else
            return false;

        y=y/10;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    memset(prime, true, sizeof(prime));
    for(int p = 2; p * p <= 10005; p++)
    {
        if (prime[p] == true)
        {
            for(int i = p * p; i <= 10005; i += p)
                prime[i]=false;
        }
    }
    for(int i=1;i<=10005;i++)
    {
        if(prime[i]==true && (checkdig(i)==true))s.insert(i);
    }

    int c=1,ans;
    for(auto it=s.begin();it!=s.end();it++)
    {
       if(c==n)
       {
           ans=(*it);
           break;
       }
       else
        c++;
    }
    cout<<ans;
    return 0;
}
