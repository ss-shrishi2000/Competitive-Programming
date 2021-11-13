#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        if(((a1+a3) - 2*a2)%3)
            cout<< 1<< endl;
        else
            cout<< 0 << endl;
    }
    return 0;
}
