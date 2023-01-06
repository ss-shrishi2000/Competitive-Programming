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
        int a[n];
        bool f = true;

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 2; i < n; i++)
        {
            int g = __gcd(a[i], a[i-2]);
            if(a[i-1]%g)
            {
                f = false;
                break;
            }
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
