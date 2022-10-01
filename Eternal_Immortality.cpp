#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, p = 1, c = 0;
    cin >> a >> b;
    if(b-a >= 10)
    {
        cout << 0;
        return 0;
    }
    for(long long int i = a+1; i <= b; i++)
    {
        p = (1LL*p*(i%10))%10;
    }
    cout << (p) ;
    return 0;
}
