#include<bits/stdc++.h>
using namespace std;
#define dfg 1000000000
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> s;
        int n,a,b;
        cin>>n>>a>>b;
        s.insert(1);
        s.insert(a);
        s.insert(b+1);
        bool f=false;
        long long int pr=1;
        if(a==1)
        {
            if((n-1) % b==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
        {
        pr=1;

        while(pr<=n)
        {
            if(pr%b == n%b )
            {
                f=true;
                break;
            }
             pr = pr*a;
        }
        if(f)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        }
    }
    return 0;
}
