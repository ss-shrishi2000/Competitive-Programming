#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int d = abs(a-b);
        int ans = 2;
        if(a==b)
        {
            cout<<0<<endl;continue;
        }
        else if(d%2==0 && b<a)ans = 1;
        else if(d%2 && b>a) ans = 1;

        cout<< ans << endl;
    }
    return 0;
}
