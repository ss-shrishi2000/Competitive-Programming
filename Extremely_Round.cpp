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
        string p = to_string(n);
        cout<< (p[0]-'0') + (p.size()-1)*9 << endl;
    }
    return 0;
}
