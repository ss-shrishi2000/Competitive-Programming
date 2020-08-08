#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],e=0,o=0;
    long long int s=0;
    for(int i=0;i<n;i++){
    cin>>a[i];
    s+=a[i];
    if(a[i]%2==0)e++;
    else o++;
    }
    sort(a,a+n);
    if(o%2==0 && (e%2==0))
    {
        cout<<s;
    }
    else if(o%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                s-=a[i];
                break;
            }
        }
        cout<<s;
    }
    else if(o%2==0 && (e%2!=0))cout<<s;
}
