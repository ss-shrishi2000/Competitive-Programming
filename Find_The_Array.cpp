#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        double sq = sqrt(n);
        cout<< int(ceil(sq)) << endl;
    }
    return 0;
}
