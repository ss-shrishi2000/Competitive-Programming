#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        //01010101.... 1010101010...
        string s;
        cin>>s;
        int c1=0,c2=0;
        string p=string(n,'0');
        string q=string(n,'1');
        //0110
        //0101
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])c1++;
        }
        //cout<<c1<<" "<<c2<<endl;
        c2= (n-c1)/2;
        cout<<c2<<endl;
    }
    return 0;
}
