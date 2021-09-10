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
        int x,od=0,ev=0;
        for(int i=0;i<2*n;i++)
        {
            cin>>x;
            if(x%2==0)
                ev++;
            else
                od++;
        }
        if(od==ev)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
