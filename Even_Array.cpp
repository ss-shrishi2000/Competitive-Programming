#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,cnt=0,c1=0 ,c2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if((i)%2 != a[i]%2)
        {
            cnt++;
            if(i%2)
                c1++;
            else
                c2++;
        }
    }
    if(c1!=c2)
        cout<<-1<<endl;
    else
        cout<<cnt/2<<endl;
    }
    return 0;
}
