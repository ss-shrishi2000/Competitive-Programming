#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int l,r;
    cin>>l>>r;
    
    if(r-l==1)
      cout<<-1<<" "<<-1<<endl;
    else {
        if(l*2<=r)
        {
            cout<<l<<" "<<2*l<<endl;
        }
        else{
        int low=l,high=r,mid;
        bool f=false,f1=false;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(((mid*low)/(__gcd(mid,low)))<=r and ((mid*low)/(__gcd(mid,low))>=l))
            {
                f=true;break;
            }
            else if((mid*low)/(__gcd(mid,low))>r)
            {
                high=mid-1;
            }
            else if((mid*low)/(__gcd(mid,low))<l)
            {
                low=mid+1;
            }
        }
        if(mid==low){f1=true;cout<<-1<<" "<<-1<<endl;}
        else if(low<mid){f1=true;cout<<low<<" "<<mid<<endl;}
        if(f==false and f1==false)cout<<-1<<" "<<-1<<endl;
        }
    }
  }
}
