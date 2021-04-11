#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(a[0]==a[1] && a[0]==1)
        cout<<"YES"<<endl;
    else if((a[0]==a[1] && a[1]==2) or (a[1]==a[2] && a[1]==2) or (a[0]==a[1] && a[1]==a[2] && a[0]==2) )
        cout<<"YES"<<endl;
    else if(a[0]==a[1] && (a[1]==a[2]) && (a[0]==3))
        cout<<"YES"<<endl;
    else if(a[0]==2 and (a[1]==a[2] && a[1]==4))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
