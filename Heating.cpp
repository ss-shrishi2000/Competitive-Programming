#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(b%a == 0)
        {
            long long x = b/a;
            long long k = a;
            long long s = 0;
            while(k--)
            {
                s += (x*x);
            }
            cout<<s<<endl;
        }
        else
        {
            long long r = (b)/a;
            long long t = b%a, y1;
            y1 = t*(r+1)*(r+1);
            long long f = a - t;
            y1 += f*(r)*r;
            cout<<y1<<endl;
        }
    }
}
