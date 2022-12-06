#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long left=0,right=0;
    int c1=0,c2=0,l=0,r=n-1;
    if(l==r){
        cout<<1<<" "<<0;
        return 0;
    }
    while(l<=r)
    {
        if(left>right)
        {
            right+=a[r];                      //Alice will eat
            r-=1;
            c2++;
        }
        else
        {
            left+=a[l];                      //Bob Will eat
            l+=1;
            c1++;
        }
    }
    cout<<c1<<" "<<c2;
    return 0;
}
