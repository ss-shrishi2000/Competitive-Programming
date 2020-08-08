#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],cnt=0;
    for(int i=0;i<n;i++){cin>>a[i];
    if(a[i]%2!=0)cnt++;
    }
    cout<<min(n-cnt,cnt);
}
