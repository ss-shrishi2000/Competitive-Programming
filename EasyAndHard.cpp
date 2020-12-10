#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[2]={0},x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    if(a[1]==0)cout<<"EASY";
    else cout<<"HARD";
    return 0;
}
