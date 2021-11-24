#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int x,y;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        b[i] = y + (x*60);
        //cout<<minute[i]<<endl;
    }
    if(b[0] >= s+1)
    {
        cout<<0 << " 0" << endl;
        return 0;
    }

    int ahr = -1 , amn=-1 ,ans=-10000;
    for(int i=1;i<n;i++)
    {
        if( b[i]-b[i-1] >= 2*s + 2 )
        {
            ans = b[i-1] + s + 1;
            break;
        }
    }
    if(ans==-10000)
    {
        int last = b[n-1];
        last += s+1;
        //cout<<last<<endl;
        int h = last/60;
        int m = last - (h*60);
        cout<<h<<" "<<m<<endl;
        return 0;
    }
    ahr = ans/60;
    amn=  ans - (ahr*60);
    cout<< ahr << " " << amn << endl;
}
