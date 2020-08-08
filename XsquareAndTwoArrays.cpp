#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll N,Q; cin>>N>>Q;
    ll A[N],B[N];
for(ll i=0;i<N;i++) cin>>A[i];
    for(ll i=0;i<N;i++) cin>>B[i];
// dp1 to store A1,B2,A3....
    //dp2 to store B1,A2,B3
    //dp1[5] = A1+B2+A3+B4+A5
    //dp2[5] = B1+A2+B3+A4+B5
    ll dp1[N+1],dp2[N+1];
    dp1[0]=0,dp2[0]=0;
    dp1[1]=A[0],dp2[1]=B[0];
    int flag=true;
    //simple logic to fill dp1 and dp2 array
    for(ll i=1;i<N;i++)
    {
        if(flag==true)
        {
            dp1[i+1] = dp1[i] + B[i];
            dp2[i+1] = dp2[i] + A[i];
        }
        else
        {
            dp1[i+1] = dp1[i] + A[i];
            dp2[i+1] = dp2[i] + B[i];
        }
        flag=!flag;
    }
    for(ll i=1;i<=Q;i++)
    {
        int x,L,R; cin>>x>>L>>R;
        if(x==1 && L%2==1 || x==2 && L%2==0)
            cout<<dp1[R]-dp1[L-1]<<endl;
        else
            cout<<dp2[R]-dp2[L-1]<<endl;
     }
}
