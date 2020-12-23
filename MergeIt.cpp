#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a=0,b=0,c=0,x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%3==0)a++;
            else if(x%3==1)b++;
            else c++;
        }
        cout<<a+min(b,c)+abs(b-c)/3<<endl;
    }
    return 0;
}
