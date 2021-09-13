#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    if(s<2*n)
    {
        cout<<"NO";
        return 0;
    }
    if(n-1 == s-n+1)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n-1;i++)
        cout<<2<<" ";
    cout<< s - 2*(n-1) << endl << 1 ;
    return 0;
}
