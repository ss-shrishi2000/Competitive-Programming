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
        char c;
        cin>>c;
        string s;
        cin>>s;
        int a=0, od = 0;
        for(int i=0;i<n;i++)
        {
                if(s[i]==c)
                  a=i+1;
               else
                  od++;
        }
        if(a>=(n/2)+1)
        {
            (od)? cout<<"1\n"<<a<<"\n":cout<<"0\n";
        }
        else
            cout<<"2\n"<<(n-1)<<" "<<n<<"\n";
    }
    return 0;
}
