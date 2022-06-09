#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    unordered_map<long long int, long long int> mp;

    for(int i=0; i<n; i++)
        cin>>a[i], mp[a[i]]++;

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        long long int x = a[i];
        bool f = false;
        mp[x]-=1;
        for(int j=0; j<=31; j++)
        {
            long long int y = pow(2,j);
            if( y-x < 0 )
                continue;
            if(mp[y-x]>0)
            {
                f = true;
                break;
            }
        }
        if(f == false)
        {
           cnt++;
        }
        mp[x]++;
    }
    cout<<cnt;
    return 0;
}
