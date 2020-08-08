#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,b;cin>>k>>a>>b;
    string s;cin>>s;
    int l=s.length(),p=k;
    if(l<k*a||(l>k*b)){cout<<"No solution";return 0;}
    int x=l%k,y=x;
    for(int i=0;i<l;)
    {
        for(int j=0;j<l/k;j++)
        {
            cout<<s[i++];
        }
        if(x)
        {
            cout<<s[i++];
            x--;
        }
        cout<<endl;
    }
}
