#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n1,n2;
        cin>>n1>>n2;
        long long int e1,e2,o1,o2;
        if(n1%2==0)
        {
            e1=n1/2;o1=n1/2;
        }
        else{
            e1=n1/2;o1=(n1+1)/2;
        }
        if(n2%2==0)
        {
            e2=n2/2;o2=n2/2;
        }
        else{
            e2=n2/2;o2=(n2+1)/2;
        }
        long long int p=(e2*e1)+(o1*o2);

        cout<<p<<endl;
    }
    return 0;
}
