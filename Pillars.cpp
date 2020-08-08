#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],ind=0;
    for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==n)ind=i;
    }
    bool f=true;
    for(int i=1;i<ind;i++)
    {
        if(a[i]>a[i-1])continue;
        else{
            f=false;break;
        }
    }
    if(f==false){cout<<"NO";return 0;}
    for(int i=ind+1;i<n;i++)
    {
        if(a[i]<a[i-1])continue;
        else{
            cout<<"NO";return 0;
        }
    }
    cout<<"YES";
    return 0;
}

