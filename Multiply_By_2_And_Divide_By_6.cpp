#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int pw2=0,pw3=0;
        while(n%3==0)
        {
            n=n/3;
            pw3++;
        }
        while(n%2==0)
        {
            n=n/2;
            pw2++;
        }

       // cout<<n<<" "<<pw3<<" "<<pw2<<endl;
        if(pw3<pw2 || (n!=1))
        {
            cout<<-1<<endl;
        }
        else
        {
            if(pw3==pw2)
            {
                cout<<pw3<<endl;
            }
            else
            {
                int d = pw3-pw2;
                cout<<pw3+d<<endl;
            }
        }
    }
    return 0;
}
