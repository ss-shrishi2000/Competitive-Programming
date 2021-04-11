#include<bits/stdc++.h>
using namespace std;
void display(int n)
{
     if(n%2!=0)
        {
            cout<<1<< " " << n/2 << " " << n/2<<endl;
        }
    else
    {
       if(n%4==0)
            cout<< n/2 << " " << n/4 << " " << n/4<<endl;
       else
            cout<< 2 << " " << n/2-1 << " " << n/2-1 << endl;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<k-3;i++)
            cout<<1<<" ";
            display(n-k+3);
    }
    return 0;
}


