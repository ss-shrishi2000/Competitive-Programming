#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        long long int moves=0,num=1;
        while(a!=b)
        {
           if(a<b)
           {
            while(a<b)
            {
            a+=num;
            num+=1;moves++;
            }
           }
           else if(a>b)
           {
               while(a>b){
                b+=num;
                num++;
                moves++;
               }
           }
           else break;
        }
        cout<<moves<<endl;
    }
}
