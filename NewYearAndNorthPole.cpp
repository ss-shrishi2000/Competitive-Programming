#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,tot=0,n;cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>d>>s;
        if(tot>20000 or tot<0){cout<<"NO";return 0;}
        if(i==0)
        {
            if(s!="South"){cout<<"NO";return 0;}              //can move only to south because it is at north pole
            else{
                tot+=d;
            }
        }
        else if(i!=0)
        {
            if((tot==20000 and s!="North") || (tot==0 and s!="South")){cout<<"NO";return 0;}
            if(s=="South")tot+=d;
            else if(s=="North")tot-=d;

            if(tot>=20000 and i==n-1){cout<<"NO";return 0;}         // limak is at south pole at the finish of the journey

            else if(tot>20000 or tot<0){cout<<"NO";return 0;}

        }
    }
    if(tot==0)cout<<"YES";
    else cout<<"NO";
    return 0;
}
