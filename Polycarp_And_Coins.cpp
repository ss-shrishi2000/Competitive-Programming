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
        if(n%3==0)
        {
            cout<<n/3 << " " << n/3 << endl;
            continue;
        }
        if(n==1)
        {
            cout<<1<<" "<<0<<endl;
            continue;
        }
        int x= (n)/3;
        int y=x;
        if(n%3==1)
            x+=1;
        else if(n%3==2)
            y+=1;
        cout << x << " " << y << endl;
    }
    return 0;
}
