#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans = 0;
    for(int j = 1; j<=10000; j++)
    {
        a *= 3;
        b *= 2;
        if(a > b)
        {
            ans = j;
            break;
        }
    }
    cout<<ans;
    return 0;
}
